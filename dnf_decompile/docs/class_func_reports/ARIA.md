# ARIA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Crypt

```asm
// === 080a5404 ARIA::Crypt  [0x080a5404-0x80a6e16] ===
 80a5404:	55                   	push   %ebp
 80a5405:	89 e5                	mov    %esp,%ebp
 80a5407:	57                   	push   %edi
 80a5408:	56                   	push   %esi
 80a5409:	53                   	push   %ebx
 80a540a:	83 ec 04             	sub    $0x4,%esp
 80a540d:	8b 45 08             	mov    0x8(%ebp),%eax
 80a5410:	8b 00                	mov    (%eax),%eax
 80a5412:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80a5415:	8b 45 08             	mov    0x8(%ebp),%eax
 80a5418:	83 c0 04             	add    $0x4,%eax
 80a541b:	8b 18                	mov    (%eax),%ebx
 80a541d:	8b 45 08             	mov    0x8(%ebp),%eax
 80a5420:	83 c0 08             	add    $0x8,%eax
 80a5423:	8b 30                	mov    (%eax),%esi
 80a5425:	8b 45 08             	mov    0x8(%ebp),%eax
 80a5428:	83 c0 0c             	add    $0xc,%eax
 80a542b:	8b 38                	mov    (%eax),%edi
 80a542d:	83 7d 0c 0c          	cmpl   $0xc,0xc(%ebp)
 80a5431:	0f 8e 2d 03 00 00    	jle    80a5764 <_ZN4ARIA5CryptEPKhiS1_Ph+0x360>
 80a5437:	8b 45 10             	mov    0x10(%ebp),%eax
 80a543a:	8b 00                	mov    (%eax),%eax
 80a543c:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a543f:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5442:	83 c0 04             	add    $0x4,%eax
 80a5445:	8b 00                	mov    (%eax),%eax
 80a5447:	31 c3                	xor    %eax,%ebx
 80a5449:	8b 45 10             	mov    0x10(%ebp),%eax
 80a544c:	83 c0 08             	add    $0x8,%eax
 80a544f:	8b 00                	mov    (%eax),%eax
 80a5451:	31 c6                	xor    %eax,%esi
 80a5453:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5456:	83 c0 0c             	add    $0xc,%eax
 80a5459:	8b 00                	mov    (%eax),%eax
 80a545b:	31 c7                	xor    %eax,%edi
 80a545d:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a5461:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5464:	c1 e8 18             	shr    $0x18,%eax
 80a5467:	0f b6 c0             	movzbl %al,%eax
 80a546a:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5471:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5474:	c1 e8 10             	shr    $0x10,%eax
 80a5477:	0f b6 c0             	movzbl %al,%eax
 80a547a:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5481:	31 c2                	xor    %eax,%edx
 80a5483:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5486:	c1 e8 08             	shr    $0x8,%eax
 80a5489:	0f b6 c0             	movzbl %al,%eax
 80a548c:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5493:	31 c2                	xor    %eax,%edx
 80a5495:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a5499:	0f b6 c0             	movzbl %al,%eax
 80a549c:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a54a3:	89 d1                	mov    %edx,%ecx
 80a54a5:	31 c1                	xor    %eax,%ecx
 80a54a7:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a54aa:	89 d8                	mov    %ebx,%eax
 80a54ac:	c1 e8 18             	shr    $0x18,%eax
 80a54af:	0f b6 c0             	movzbl %al,%eax
 80a54b2:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a54b9:	89 d8                	mov    %ebx,%eax
 80a54bb:	c1 e8 10             	shr    $0x10,%eax
 80a54be:	0f b6 c0             	movzbl %al,%eax
 80a54c1:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a54c8:	31 c2                	xor    %eax,%edx
 80a54ca:	89 d8                	mov    %ebx,%eax
 80a54cc:	c1 e8 08             	shr    $0x8,%eax
 80a54cf:	0f b6 c0             	movzbl %al,%eax
 80a54d2:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a54d9:	31 c2                	xor    %eax,%edx
 80a54db:	89 d8                	mov    %ebx,%eax
 80a54dd:	0f b6 c0             	movzbl %al,%eax
 80a54e0:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a54e7:	89 d3                	mov    %edx,%ebx
 80a54e9:	31 c3                	xor    %eax,%ebx
 80a54eb:	89 f0                	mov    %esi,%eax
 80a54ed:	c1 e8 18             	shr    $0x18,%eax
 80a54f0:	0f b6 c0             	movzbl %al,%eax
 80a54f3:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a54fa:	89 f0                	mov    %esi,%eax
 80a54fc:	c1 e8 10             	shr    $0x10,%eax
 80a54ff:	0f b6 c0             	movzbl %al,%eax
 80a5502:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5509:	31 c2                	xor    %eax,%edx
 80a550b:	89 f0                	mov    %esi,%eax
 80a550d:	c1 e8 08             	shr    $0x8,%eax
 80a5510:	0f b6 c0             	movzbl %al,%eax
 80a5513:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a551a:	31 c2                	xor    %eax,%edx
 80a551c:	89 f0                	mov    %esi,%eax
 80a551e:	0f b6 c0             	movzbl %al,%eax
 80a5521:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5528:	89 d6                	mov    %edx,%esi
 80a552a:	31 c6                	xor    %eax,%esi
 80a552c:	89 f8                	mov    %edi,%eax
 80a552e:	c1 e8 18             	shr    $0x18,%eax
 80a5531:	0f b6 c0             	movzbl %al,%eax
 80a5534:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a553b:	89 f8                	mov    %edi,%eax
 80a553d:	c1 e8 10             	shr    $0x10,%eax
 80a5540:	0f b6 c0             	movzbl %al,%eax
 80a5543:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a554a:	31 c2                	xor    %eax,%edx
 80a554c:	89 f8                	mov    %edi,%eax
 80a554e:	c1 e8 08             	shr    $0x8,%eax
 80a5551:	0f b6 c0             	movzbl %al,%eax
 80a5554:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a555b:	31 c2                	xor    %eax,%edx
 80a555d:	89 f8                	mov    %edi,%eax
 80a555f:	0f b6 c0             	movzbl %al,%eax
 80a5562:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5569:	89 d7                	mov    %edx,%edi
 80a556b:	31 c7                	xor    %eax,%edi
 80a556d:	31 f3                	xor    %esi,%ebx
 80a556f:	31 fe                	xor    %edi,%esi
 80a5571:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5574:	31 df                	xor    %ebx,%edi
 80a5576:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5579:	31 f3                	xor    %esi,%ebx
 80a557b:	89 d8                	mov    %ebx,%eax
 80a557d:	c1 e0 08             	shl    $0x8,%eax
 80a5580:	89 c2                	mov    %eax,%edx
 80a5582:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a5588:	89 d8                	mov    %ebx,%eax
 80a558a:	c1 e8 08             	shr    $0x8,%eax
 80a558d:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a5592:	89 d3                	mov    %edx,%ebx
 80a5594:	31 c3                	xor    %eax,%ebx
 80a5596:	c1 ce 10             	ror    $0x10,%esi
 80a5599:	89 fa                	mov    %edi,%edx
 80a559b:	c1 e2 18             	shl    $0x18,%edx
 80a559e:	89 f8                	mov    %edi,%eax
 80a55a0:	c1 e8 18             	shr    $0x18,%eax
 80a55a3:	31 c2                	xor    %eax,%edx
 80a55a5:	89 f8                	mov    %edi,%eax
 80a55a7:	25 00 ff 00 00       	and    $0xff00,%eax
 80a55ac:	c1 e0 08             	shl    $0x8,%eax
 80a55af:	31 c2                	xor    %eax,%edx
 80a55b1:	89 f8                	mov    %edi,%eax
 80a55b3:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a55b8:	c1 e8 08             	shr    $0x8,%eax
 80a55bb:	89 d7                	mov    %edx,%edi
 80a55bd:	31 c7                	xor    %eax,%edi
 80a55bf:	31 f3                	xor    %esi,%ebx
 80a55c1:	31 fe                	xor    %edi,%esi
 80a55c3:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a55c6:	31 df                	xor    %ebx,%edi
 80a55c8:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a55cb:	31 f3                	xor    %esi,%ebx
 80a55cd:	8b 45 10             	mov    0x10(%ebp),%eax
 80a55d0:	8b 00                	mov    (%eax),%eax
 80a55d2:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a55d5:	8b 45 10             	mov    0x10(%ebp),%eax
 80a55d8:	83 c0 04             	add    $0x4,%eax
 80a55db:	8b 00                	mov    (%eax),%eax
 80a55dd:	31 c3                	xor    %eax,%ebx
 80a55df:	8b 45 10             	mov    0x10(%ebp),%eax
 80a55e2:	83 c0 08             	add    $0x8,%eax
 80a55e5:	8b 00                	mov    (%eax),%eax
 80a55e7:	31 c6                	xor    %eax,%esi
 80a55e9:	8b 45 10             	mov    0x10(%ebp),%eax
 80a55ec:	83 c0 0c             	add    $0xc,%eax
 80a55ef:	8b 00                	mov    (%eax),%eax
 80a55f1:	31 c7                	xor    %eax,%edi
 80a55f3:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a55f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a55fa:	c1 e8 18             	shr    $0x18,%eax
 80a55fd:	0f b6 c0             	movzbl %al,%eax
 80a5600:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5607:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a560a:	c1 e8 10             	shr    $0x10,%eax
 80a560d:	0f b6 c0             	movzbl %al,%eax
 80a5610:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5617:	31 c2                	xor    %eax,%edx
 80a5619:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a561c:	c1 e8 08             	shr    $0x8,%eax
 80a561f:	0f b6 c0             	movzbl %al,%eax
 80a5622:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a5629:	31 c2                	xor    %eax,%edx
 80a562b:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a562f:	0f b6 c0             	movzbl %al,%eax
 80a5632:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5639:	89 d1                	mov    %edx,%ecx
 80a563b:	31 c1                	xor    %eax,%ecx
 80a563d:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a5640:	89 d8                	mov    %ebx,%eax
 80a5642:	c1 e8 18             	shr    $0x18,%eax
 80a5645:	0f b6 c0             	movzbl %al,%eax
 80a5648:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a564f:	89 d8                	mov    %ebx,%eax
 80a5651:	c1 e8 10             	shr    $0x10,%eax
 80a5654:	0f b6 c0             	movzbl %al,%eax
 80a5657:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a565e:	31 c2                	xor    %eax,%edx
 80a5660:	89 d8                	mov    %ebx,%eax
 80a5662:	c1 e8 08             	shr    $0x8,%eax
 80a5665:	0f b6 c0             	movzbl %al,%eax
 80a5668:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a566f:	31 c2                	xor    %eax,%edx
 80a5671:	89 d8                	mov    %ebx,%eax
 80a5673:	0f b6 c0             	movzbl %al,%eax
 80a5676:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a567d:	89 d3                	mov    %edx,%ebx
 80a567f:	31 c3                	xor    %eax,%ebx
 80a5681:	89 f0                	mov    %esi,%eax
 80a5683:	c1 e8 18             	shr    $0x18,%eax
 80a5686:	0f b6 c0             	movzbl %al,%eax
 80a5689:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5690:	89 f0                	mov    %esi,%eax
 80a5692:	c1 e8 10             	shr    $0x10,%eax
 80a5695:	0f b6 c0             	movzbl %al,%eax
 80a5698:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a569f:	31 c2                	xor    %eax,%edx
 80a56a1:	89 f0                	mov    %esi,%eax
 80a56a3:	c1 e8 08             	shr    $0x8,%eax
 80a56a6:	0f b6 c0             	movzbl %al,%eax
 80a56a9:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a56b0:	31 c2                	xor    %eax,%edx
 80a56b2:	89 f0                	mov    %esi,%eax
 80a56b4:	0f b6 c0             	movzbl %al,%eax
 80a56b7:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a56be:	89 d6                	mov    %edx,%esi
 80a56c0:	31 c6                	xor    %eax,%esi
 80a56c2:	89 f8                	mov    %edi,%eax
 80a56c4:	c1 e8 18             	shr    $0x18,%eax
 80a56c7:	0f b6 c0             	movzbl %al,%eax
 80a56ca:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a56d1:	89 f8                	mov    %edi,%eax
 80a56d3:	c1 e8 10             	shr    $0x10,%eax
 80a56d6:	0f b6 c0             	movzbl %al,%eax
 80a56d9:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a56e0:	31 c2                	xor    %eax,%edx
 80a56e2:	89 f8                	mov    %edi,%eax
 80a56e4:	c1 e8 08             	shr    $0x8,%eax
 80a56e7:	0f b6 c0             	movzbl %al,%eax
 80a56ea:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a56f1:	31 c2                	xor    %eax,%edx
 80a56f3:	89 f8                	mov    %edi,%eax
 80a56f5:	0f b6 c0             	movzbl %al,%eax
 80a56f8:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a56ff:	89 d7                	mov    %edx,%edi
 80a5701:	31 c7                	xor    %eax,%edi
 80a5703:	31 f3                	xor    %esi,%ebx
 80a5705:	31 fe                	xor    %edi,%esi
 80a5707:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a570a:	31 df                	xor    %ebx,%edi
 80a570c:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a570f:	31 f3                	xor    %esi,%ebx
 80a5711:	89 f8                	mov    %edi,%eax
 80a5713:	c1 e0 08             	shl    $0x8,%eax
 80a5716:	89 c2                	mov    %eax,%edx
 80a5718:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a571e:	89 f8                	mov    %edi,%eax
 80a5720:	c1 e8 08             	shr    $0x8,%eax
 80a5723:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a5728:	89 d7                	mov    %edx,%edi
 80a572a:	31 c7                	xor    %eax,%edi
 80a572c:	c1 4d f0 10          	rorl   $0x10,-0x10(%ebp)
 80a5730:	89 da                	mov    %ebx,%edx
 80a5732:	c1 e2 18             	shl    $0x18,%edx
 80a5735:	89 d8                	mov    %ebx,%eax
 80a5737:	c1 e8 18             	shr    $0x18,%eax
 80a573a:	31 c2                	xor    %eax,%edx
 80a573c:	89 d8                	mov    %ebx,%eax
 80a573e:	25 00 ff 00 00       	and    $0xff00,%eax
 80a5743:	c1 e0 08             	shl    $0x8,%eax
 80a5746:	31 c2                	xor    %eax,%edx
 80a5748:	89 d8                	mov    %ebx,%eax
 80a574a:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a574f:	c1 e8 08             	shr    $0x8,%eax
 80a5752:	89 d3                	mov    %edx,%ebx
 80a5754:	31 c3                	xor    %eax,%ebx
 80a5756:	31 f3                	xor    %esi,%ebx
 80a5758:	31 fe                	xor    %edi,%esi
 80a575a:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a575d:	31 df                	xor    %ebx,%edi
 80a575f:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5762:	31 f3                	xor    %esi,%ebx
 80a5764:	83 7d 0c 0e          	cmpl   $0xe,0xc(%ebp)
 80a5768:	0f 8e 2d 03 00 00    	jle    80a5a9b <_ZN4ARIA5CryptEPKhiS1_Ph+0x697>
 80a576e:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5771:	8b 00                	mov    (%eax),%eax
 80a5773:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a5776:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5779:	83 c0 04             	add    $0x4,%eax
 80a577c:	8b 00                	mov    (%eax),%eax
 80a577e:	31 c3                	xor    %eax,%ebx
 80a5780:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5783:	83 c0 08             	add    $0x8,%eax
 80a5786:	8b 00                	mov    (%eax),%eax
 80a5788:	31 c6                	xor    %eax,%esi
 80a578a:	8b 45 10             	mov    0x10(%ebp),%eax
 80a578d:	83 c0 0c             	add    $0xc,%eax
 80a5790:	8b 00                	mov    (%eax),%eax
 80a5792:	31 c7                	xor    %eax,%edi
 80a5794:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a5798:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a579b:	c1 e8 18             	shr    $0x18,%eax
 80a579e:	0f b6 c0             	movzbl %al,%eax
 80a57a1:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a57a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a57ab:	c1 e8 10             	shr    $0x10,%eax
 80a57ae:	0f b6 c0             	movzbl %al,%eax
 80a57b1:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a57b8:	31 c2                	xor    %eax,%edx
 80a57ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a57bd:	c1 e8 08             	shr    $0x8,%eax
 80a57c0:	0f b6 c0             	movzbl %al,%eax
 80a57c3:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a57ca:	31 c2                	xor    %eax,%edx
 80a57cc:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a57d0:	0f b6 c0             	movzbl %al,%eax
 80a57d3:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a57da:	89 d1                	mov    %edx,%ecx
 80a57dc:	31 c1                	xor    %eax,%ecx
 80a57de:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a57e1:	89 d8                	mov    %ebx,%eax
 80a57e3:	c1 e8 18             	shr    $0x18,%eax
 80a57e6:	0f b6 c0             	movzbl %al,%eax
 80a57e9:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a57f0:	89 d8                	mov    %ebx,%eax
 80a57f2:	c1 e8 10             	shr    $0x10,%eax
 80a57f5:	0f b6 c0             	movzbl %al,%eax
 80a57f8:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a57ff:	31 c2                	xor    %eax,%edx
 80a5801:	89 d8                	mov    %ebx,%eax
 80a5803:	c1 e8 08             	shr    $0x8,%eax
 80a5806:	0f b6 c0             	movzbl %al,%eax
 80a5809:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5810:	31 c2                	xor    %eax,%edx
 80a5812:	89 d8                	mov    %ebx,%eax
 80a5814:	0f b6 c0             	movzbl %al,%eax
 80a5817:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a581e:	89 d3                	mov    %edx,%ebx
 80a5820:	31 c3                	xor    %eax,%ebx
 80a5822:	89 f0                	mov    %esi,%eax
 80a5824:	c1 e8 18             	shr    $0x18,%eax
 80a5827:	0f b6 c0             	movzbl %al,%eax
 80a582a:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5831:	89 f0                	mov    %esi,%eax
 80a5833:	c1 e8 10             	shr    $0x10,%eax
 80a5836:	0f b6 c0             	movzbl %al,%eax
 80a5839:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5840:	31 c2                	xor    %eax,%edx
 80a5842:	89 f0                	mov    %esi,%eax
 80a5844:	c1 e8 08             	shr    $0x8,%eax
 80a5847:	0f b6 c0             	movzbl %al,%eax
 80a584a:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5851:	31 c2                	xor    %eax,%edx
 80a5853:	89 f0                	mov    %esi,%eax
 80a5855:	0f b6 c0             	movzbl %al,%eax
 80a5858:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a585f:	89 d6                	mov    %edx,%esi
 80a5861:	31 c6                	xor    %eax,%esi
 80a5863:	89 f8                	mov    %edi,%eax
 80a5865:	c1 e8 18             	shr    $0x18,%eax
 80a5868:	0f b6 c0             	movzbl %al,%eax
 80a586b:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5872:	89 f8                	mov    %edi,%eax
 80a5874:	c1 e8 10             	shr    $0x10,%eax
 80a5877:	0f b6 c0             	movzbl %al,%eax
 80a587a:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5881:	31 c2                	xor    %eax,%edx
 80a5883:	89 f8                	mov    %edi,%eax
 80a5885:	c1 e8 08             	shr    $0x8,%eax
 80a5888:	0f b6 c0             	movzbl %al,%eax
 80a588b:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5892:	31 c2                	xor    %eax,%edx
 80a5894:	89 f8                	mov    %edi,%eax
 80a5896:	0f b6 c0             	movzbl %al,%eax
 80a5899:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a58a0:	89 d7                	mov    %edx,%edi
 80a58a2:	31 c7                	xor    %eax,%edi
 80a58a4:	31 f3                	xor    %esi,%ebx
 80a58a6:	31 fe                	xor    %edi,%esi
 80a58a8:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a58ab:	31 df                	xor    %ebx,%edi
 80a58ad:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a58b0:	31 f3                	xor    %esi,%ebx
 80a58b2:	89 d8                	mov    %ebx,%eax
 80a58b4:	c1 e0 08             	shl    $0x8,%eax
 80a58b7:	89 c2                	mov    %eax,%edx
 80a58b9:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a58bf:	89 d8                	mov    %ebx,%eax
 80a58c1:	c1 e8 08             	shr    $0x8,%eax
 80a58c4:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a58c9:	89 d3                	mov    %edx,%ebx
 80a58cb:	31 c3                	xor    %eax,%ebx
 80a58cd:	c1 ce 10             	ror    $0x10,%esi
 80a58d0:	89 fa                	mov    %edi,%edx
 80a58d2:	c1 e2 18             	shl    $0x18,%edx
 80a58d5:	89 f8                	mov    %edi,%eax
 80a58d7:	c1 e8 18             	shr    $0x18,%eax
 80a58da:	31 c2                	xor    %eax,%edx
 80a58dc:	89 f8                	mov    %edi,%eax
 80a58de:	25 00 ff 00 00       	and    $0xff00,%eax
 80a58e3:	c1 e0 08             	shl    $0x8,%eax
 80a58e6:	31 c2                	xor    %eax,%edx
 80a58e8:	89 f8                	mov    %edi,%eax
 80a58ea:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a58ef:	c1 e8 08             	shr    $0x8,%eax
 80a58f2:	89 d7                	mov    %edx,%edi
 80a58f4:	31 c7                	xor    %eax,%edi
 80a58f6:	31 f3                	xor    %esi,%ebx
 80a58f8:	31 fe                	xor    %edi,%esi
 80a58fa:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a58fd:	31 df                	xor    %ebx,%edi
 80a58ff:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5902:	31 f3                	xor    %esi,%ebx
 80a5904:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5907:	8b 00                	mov    (%eax),%eax
 80a5909:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a590c:	8b 45 10             	mov    0x10(%ebp),%eax
 80a590f:	83 c0 04             	add    $0x4,%eax
 80a5912:	8b 00                	mov    (%eax),%eax
 80a5914:	31 c3                	xor    %eax,%ebx
 80a5916:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5919:	83 c0 08             	add    $0x8,%eax
 80a591c:	8b 00                	mov    (%eax),%eax
 80a591e:	31 c6                	xor    %eax,%esi
 80a5920:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5923:	83 c0 0c             	add    $0xc,%eax
 80a5926:	8b 00                	mov    (%eax),%eax
 80a5928:	31 c7                	xor    %eax,%edi
 80a592a:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a592e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5931:	c1 e8 18             	shr    $0x18,%eax
 80a5934:	0f b6 c0             	movzbl %al,%eax
 80a5937:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a593e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5941:	c1 e8 10             	shr    $0x10,%eax
 80a5944:	0f b6 c0             	movzbl %al,%eax
 80a5947:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a594e:	31 c2                	xor    %eax,%edx
 80a5950:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5953:	c1 e8 08             	shr    $0x8,%eax
 80a5956:	0f b6 c0             	movzbl %al,%eax
 80a5959:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a5960:	31 c2                	xor    %eax,%edx
 80a5962:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a5966:	0f b6 c0             	movzbl %al,%eax
 80a5969:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5970:	89 d1                	mov    %edx,%ecx
 80a5972:	31 c1                	xor    %eax,%ecx
 80a5974:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a5977:	89 d8                	mov    %ebx,%eax
 80a5979:	c1 e8 18             	shr    $0x18,%eax
 80a597c:	0f b6 c0             	movzbl %al,%eax
 80a597f:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5986:	89 d8                	mov    %ebx,%eax
 80a5988:	c1 e8 10             	shr    $0x10,%eax
 80a598b:	0f b6 c0             	movzbl %al,%eax
 80a598e:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5995:	31 c2                	xor    %eax,%edx
 80a5997:	89 d8                	mov    %ebx,%eax
 80a5999:	c1 e8 08             	shr    $0x8,%eax
 80a599c:	0f b6 c0             	movzbl %al,%eax
 80a599f:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a59a6:	31 c2                	xor    %eax,%edx
 80a59a8:	89 d8                	mov    %ebx,%eax
 80a59aa:	0f b6 c0             	movzbl %al,%eax
 80a59ad:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a59b4:	89 d3                	mov    %edx,%ebx
 80a59b6:	31 c3                	xor    %eax,%ebx
 80a59b8:	89 f0                	mov    %esi,%eax
 80a59ba:	c1 e8 18             	shr    $0x18,%eax
 80a59bd:	0f b6 c0             	movzbl %al,%eax
 80a59c0:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a59c7:	89 f0                	mov    %esi,%eax
 80a59c9:	c1 e8 10             	shr    $0x10,%eax
 80a59cc:	0f b6 c0             	movzbl %al,%eax
 80a59cf:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a59d6:	31 c2                	xor    %eax,%edx
 80a59d8:	89 f0                	mov    %esi,%eax
 80a59da:	c1 e8 08             	shr    $0x8,%eax
 80a59dd:	0f b6 c0             	movzbl %al,%eax
 80a59e0:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a59e7:	31 c2                	xor    %eax,%edx
 80a59e9:	89 f0                	mov    %esi,%eax
 80a59eb:	0f b6 c0             	movzbl %al,%eax
 80a59ee:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a59f5:	89 d6                	mov    %edx,%esi
 80a59f7:	31 c6                	xor    %eax,%esi
 80a59f9:	89 f8                	mov    %edi,%eax
 80a59fb:	c1 e8 18             	shr    $0x18,%eax
 80a59fe:	0f b6 c0             	movzbl %al,%eax
 80a5a01:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5a08:	89 f8                	mov    %edi,%eax
 80a5a0a:	c1 e8 10             	shr    $0x10,%eax
 80a5a0d:	0f b6 c0             	movzbl %al,%eax
 80a5a10:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5a17:	31 c2                	xor    %eax,%edx
 80a5a19:	89 f8                	mov    %edi,%eax
 80a5a1b:	c1 e8 08             	shr    $0x8,%eax
 80a5a1e:	0f b6 c0             	movzbl %al,%eax
 80a5a21:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a5a28:	31 c2                	xor    %eax,%edx
 80a5a2a:	89 f8                	mov    %edi,%eax
 80a5a2c:	0f b6 c0             	movzbl %al,%eax
 80a5a2f:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5a36:	89 d7                	mov    %edx,%edi
 80a5a38:	31 c7                	xor    %eax,%edi
 80a5a3a:	31 f3                	xor    %esi,%ebx
 80a5a3c:	31 fe                	xor    %edi,%esi
 80a5a3e:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5a41:	31 df                	xor    %ebx,%edi
 80a5a43:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5a46:	31 f3                	xor    %esi,%ebx
 80a5a48:	89 f8                	mov    %edi,%eax
 80a5a4a:	c1 e0 08             	shl    $0x8,%eax
 80a5a4d:	89 c2                	mov    %eax,%edx
 80a5a4f:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a5a55:	89 f8                	mov    %edi,%eax
 80a5a57:	c1 e8 08             	shr    $0x8,%eax
 80a5a5a:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a5a5f:	89 d7                	mov    %edx,%edi
 80a5a61:	31 c7                	xor    %eax,%edi
 80a5a63:	c1 4d f0 10          	rorl   $0x10,-0x10(%ebp)
 80a5a67:	89 da                	mov    %ebx,%edx
 80a5a69:	c1 e2 18             	shl    $0x18,%edx
 80a5a6c:	89 d8                	mov    %ebx,%eax
 80a5a6e:	c1 e8 18             	shr    $0x18,%eax
 80a5a71:	31 c2                	xor    %eax,%edx
 80a5a73:	89 d8                	mov    %ebx,%eax
 80a5a75:	25 00 ff 00 00       	and    $0xff00,%eax
 80a5a7a:	c1 e0 08             	shl    $0x8,%eax
 80a5a7d:	31 c2                	xor    %eax,%edx
 80a5a7f:	89 d8                	mov    %ebx,%eax
 80a5a81:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a5a86:	c1 e8 08             	shr    $0x8,%eax
 80a5a89:	89 d3                	mov    %edx,%ebx
 80a5a8b:	31 c3                	xor    %eax,%ebx
 80a5a8d:	31 f3                	xor    %esi,%ebx
 80a5a8f:	31 fe                	xor    %edi,%esi
 80a5a91:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5a94:	31 df                	xor    %ebx,%edi
 80a5a96:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5a99:	31 f3                	xor    %esi,%ebx
 80a5a9b:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5a9e:	8b 00                	mov    (%eax),%eax
 80a5aa0:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a5aa3:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5aa6:	83 c0 04             	add    $0x4,%eax
 80a5aa9:	8b 00                	mov    (%eax),%eax
 80a5aab:	31 c3                	xor    %eax,%ebx
 80a5aad:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5ab0:	83 c0 08             	add    $0x8,%eax
 80a5ab3:	8b 00                	mov    (%eax),%eax
 80a5ab5:	31 c6                	xor    %eax,%esi
 80a5ab7:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5aba:	83 c0 0c             	add    $0xc,%eax
 80a5abd:	8b 00                	mov    (%eax),%eax
 80a5abf:	31 c7                	xor    %eax,%edi
 80a5ac1:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a5ac5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5ac8:	c1 e8 18             	shr    $0x18,%eax
 80a5acb:	0f b6 c0             	movzbl %al,%eax
 80a5ace:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5ad5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5ad8:	c1 e8 10             	shr    $0x10,%eax
 80a5adb:	0f b6 c0             	movzbl %al,%eax
 80a5ade:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5ae5:	31 c2                	xor    %eax,%edx
 80a5ae7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5aea:	c1 e8 08             	shr    $0x8,%eax
 80a5aed:	0f b6 c0             	movzbl %al,%eax
 80a5af0:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5af7:	31 c2                	xor    %eax,%edx
 80a5af9:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a5afd:	0f b6 c0             	movzbl %al,%eax
 80a5b00:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5b07:	89 d1                	mov    %edx,%ecx
 80a5b09:	31 c1                	xor    %eax,%ecx
 80a5b0b:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a5b0e:	89 d8                	mov    %ebx,%eax
 80a5b10:	c1 e8 18             	shr    $0x18,%eax
 80a5b13:	0f b6 c0             	movzbl %al,%eax
 80a5b16:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5b1d:	89 d8                	mov    %ebx,%eax
 80a5b1f:	c1 e8 10             	shr    $0x10,%eax
 80a5b22:	0f b6 c0             	movzbl %al,%eax
 80a5b25:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5b2c:	31 c2                	xor    %eax,%edx
 80a5b2e:	89 d8                	mov    %ebx,%eax
 80a5b30:	c1 e8 08             	shr    $0x8,%eax
 80a5b33:	0f b6 c0             	movzbl %al,%eax
 80a5b36:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5b3d:	31 c2                	xor    %eax,%edx
 80a5b3f:	89 d8                	mov    %ebx,%eax
 80a5b41:	0f b6 c0             	movzbl %al,%eax
 80a5b44:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5b4b:	89 d3                	mov    %edx,%ebx
 80a5b4d:	31 c3                	xor    %eax,%ebx
 80a5b4f:	89 f0                	mov    %esi,%eax
 80a5b51:	c1 e8 18             	shr    $0x18,%eax
 80a5b54:	0f b6 c0             	movzbl %al,%eax
 80a5b57:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5b5e:	89 f0                	mov    %esi,%eax
 80a5b60:	c1 e8 10             	shr    $0x10,%eax
 80a5b63:	0f b6 c0             	movzbl %al,%eax
 80a5b66:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5b6d:	31 c2                	xor    %eax,%edx
 80a5b6f:	89 f0                	mov    %esi,%eax
 80a5b71:	c1 e8 08             	shr    $0x8,%eax
 80a5b74:	0f b6 c0             	movzbl %al,%eax
 80a5b77:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5b7e:	31 c2                	xor    %eax,%edx
 80a5b80:	89 f0                	mov    %esi,%eax
 80a5b82:	0f b6 c0             	movzbl %al,%eax
 80a5b85:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5b8c:	89 d6                	mov    %edx,%esi
 80a5b8e:	31 c6                	xor    %eax,%esi
 80a5b90:	89 f8                	mov    %edi,%eax
 80a5b92:	c1 e8 18             	shr    $0x18,%eax
 80a5b95:	0f b6 c0             	movzbl %al,%eax
 80a5b98:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5b9f:	89 f8                	mov    %edi,%eax
 80a5ba1:	c1 e8 10             	shr    $0x10,%eax
 80a5ba4:	0f b6 c0             	movzbl %al,%eax
 80a5ba7:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5bae:	31 c2                	xor    %eax,%edx
 80a5bb0:	89 f8                	mov    %edi,%eax
 80a5bb2:	c1 e8 08             	shr    $0x8,%eax
 80a5bb5:	0f b6 c0             	movzbl %al,%eax
 80a5bb8:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5bbf:	31 c2                	xor    %eax,%edx
 80a5bc1:	89 f8                	mov    %edi,%eax
 80a5bc3:	0f b6 c0             	movzbl %al,%eax
 80a5bc6:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5bcd:	89 d7                	mov    %edx,%edi
 80a5bcf:	31 c7                	xor    %eax,%edi
 80a5bd1:	31 f3                	xor    %esi,%ebx
 80a5bd3:	31 fe                	xor    %edi,%esi
 80a5bd5:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5bd8:	31 df                	xor    %ebx,%edi
 80a5bda:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5bdd:	31 f3                	xor    %esi,%ebx
 80a5bdf:	89 d8                	mov    %ebx,%eax
 80a5be1:	c1 e0 08             	shl    $0x8,%eax
 80a5be4:	89 c2                	mov    %eax,%edx
 80a5be6:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a5bec:	89 d8                	mov    %ebx,%eax
 80a5bee:	c1 e8 08             	shr    $0x8,%eax
 80a5bf1:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a5bf6:	89 d3                	mov    %edx,%ebx
 80a5bf8:	31 c3                	xor    %eax,%ebx
 80a5bfa:	c1 ce 10             	ror    $0x10,%esi
 80a5bfd:	89 fa                	mov    %edi,%edx
 80a5bff:	c1 e2 18             	shl    $0x18,%edx
 80a5c02:	89 f8                	mov    %edi,%eax
 80a5c04:	c1 e8 18             	shr    $0x18,%eax
 80a5c07:	31 c2                	xor    %eax,%edx
 80a5c09:	89 f8                	mov    %edi,%eax
 80a5c0b:	25 00 ff 00 00       	and    $0xff00,%eax
 80a5c10:	c1 e0 08             	shl    $0x8,%eax
 80a5c13:	31 c2                	xor    %eax,%edx
 80a5c15:	89 f8                	mov    %edi,%eax
 80a5c17:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a5c1c:	c1 e8 08             	shr    $0x8,%eax
 80a5c1f:	89 d7                	mov    %edx,%edi
 80a5c21:	31 c7                	xor    %eax,%edi
 80a5c23:	31 f3                	xor    %esi,%ebx
 80a5c25:	31 fe                	xor    %edi,%esi
 80a5c27:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5c2a:	31 df                	xor    %ebx,%edi
 80a5c2c:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5c2f:	31 f3                	xor    %esi,%ebx
 80a5c31:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5c34:	8b 00                	mov    (%eax),%eax
 80a5c36:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a5c39:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5c3c:	83 c0 04             	add    $0x4,%eax
 80a5c3f:	8b 00                	mov    (%eax),%eax
 80a5c41:	31 c3                	xor    %eax,%ebx
 80a5c43:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5c46:	83 c0 08             	add    $0x8,%eax
 80a5c49:	8b 00                	mov    (%eax),%eax
 80a5c4b:	31 c6                	xor    %eax,%esi
 80a5c4d:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5c50:	83 c0 0c             	add    $0xc,%eax
 80a5c53:	8b 00                	mov    (%eax),%eax
 80a5c55:	31 c7                	xor    %eax,%edi
 80a5c57:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a5c5b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5c5e:	c1 e8 18             	shr    $0x18,%eax
 80a5c61:	0f b6 c0             	movzbl %al,%eax
 80a5c64:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5c6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5c6e:	c1 e8 10             	shr    $0x10,%eax
 80a5c71:	0f b6 c0             	movzbl %al,%eax
 80a5c74:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5c7b:	31 c2                	xor    %eax,%edx
 80a5c7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5c80:	c1 e8 08             	shr    $0x8,%eax
 80a5c83:	0f b6 c0             	movzbl %al,%eax
 80a5c86:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a5c8d:	31 c2                	xor    %eax,%edx
 80a5c8f:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a5c93:	0f b6 c0             	movzbl %al,%eax
 80a5c96:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5c9d:	89 d1                	mov    %edx,%ecx
 80a5c9f:	31 c1                	xor    %eax,%ecx
 80a5ca1:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a5ca4:	89 d8                	mov    %ebx,%eax
 80a5ca6:	c1 e8 18             	shr    $0x18,%eax
 80a5ca9:	0f b6 c0             	movzbl %al,%eax
 80a5cac:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5cb3:	89 d8                	mov    %ebx,%eax
 80a5cb5:	c1 e8 10             	shr    $0x10,%eax
 80a5cb8:	0f b6 c0             	movzbl %al,%eax
 80a5cbb:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5cc2:	31 c2                	xor    %eax,%edx
 80a5cc4:	89 d8                	mov    %ebx,%eax
 80a5cc6:	c1 e8 08             	shr    $0x8,%eax
 80a5cc9:	0f b6 c0             	movzbl %al,%eax
 80a5ccc:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a5cd3:	31 c2                	xor    %eax,%edx
 80a5cd5:	89 d8                	mov    %ebx,%eax
 80a5cd7:	0f b6 c0             	movzbl %al,%eax
 80a5cda:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5ce1:	89 d3                	mov    %edx,%ebx
 80a5ce3:	31 c3                	xor    %eax,%ebx
 80a5ce5:	89 f0                	mov    %esi,%eax
 80a5ce7:	c1 e8 18             	shr    $0x18,%eax
 80a5cea:	0f b6 c0             	movzbl %al,%eax
 80a5ced:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5cf4:	89 f0                	mov    %esi,%eax
 80a5cf6:	c1 e8 10             	shr    $0x10,%eax
 80a5cf9:	0f b6 c0             	movzbl %al,%eax
 80a5cfc:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5d03:	31 c2                	xor    %eax,%edx
 80a5d05:	89 f0                	mov    %esi,%eax
 80a5d07:	c1 e8 08             	shr    $0x8,%eax
 80a5d0a:	0f b6 c0             	movzbl %al,%eax
 80a5d0d:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a5d14:	31 c2                	xor    %eax,%edx
 80a5d16:	89 f0                	mov    %esi,%eax
 80a5d18:	0f b6 c0             	movzbl %al,%eax
 80a5d1b:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5d22:	89 d6                	mov    %edx,%esi
 80a5d24:	31 c6                	xor    %eax,%esi
 80a5d26:	89 f8                	mov    %edi,%eax
 80a5d28:	c1 e8 18             	shr    $0x18,%eax
 80a5d2b:	0f b6 c0             	movzbl %al,%eax
 80a5d2e:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5d35:	89 f8                	mov    %edi,%eax
 80a5d37:	c1 e8 10             	shr    $0x10,%eax
 80a5d3a:	0f b6 c0             	movzbl %al,%eax
 80a5d3d:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5d44:	31 c2                	xor    %eax,%edx
 80a5d46:	89 f8                	mov    %edi,%eax
 80a5d48:	c1 e8 08             	shr    $0x8,%eax
 80a5d4b:	0f b6 c0             	movzbl %al,%eax
 80a5d4e:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a5d55:	31 c2                	xor    %eax,%edx
 80a5d57:	89 f8                	mov    %edi,%eax
 80a5d59:	0f b6 c0             	movzbl %al,%eax
 80a5d5c:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5d63:	89 d7                	mov    %edx,%edi
 80a5d65:	31 c7                	xor    %eax,%edi
 80a5d67:	31 f3                	xor    %esi,%ebx
 80a5d69:	31 fe                	xor    %edi,%esi
 80a5d6b:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5d6e:	31 df                	xor    %ebx,%edi
 80a5d70:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5d73:	31 f3                	xor    %esi,%ebx
 80a5d75:	89 f8                	mov    %edi,%eax
 80a5d77:	c1 e0 08             	shl    $0x8,%eax
 80a5d7a:	89 c2                	mov    %eax,%edx
 80a5d7c:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a5d82:	89 f8                	mov    %edi,%eax
 80a5d84:	c1 e8 08             	shr    $0x8,%eax
 80a5d87:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a5d8c:	89 d7                	mov    %edx,%edi
 80a5d8e:	31 c7                	xor    %eax,%edi
 80a5d90:	c1 4d f0 10          	rorl   $0x10,-0x10(%ebp)
 80a5d94:	89 da                	mov    %ebx,%edx
 80a5d96:	c1 e2 18             	shl    $0x18,%edx
 80a5d99:	89 d8                	mov    %ebx,%eax
 80a5d9b:	c1 e8 18             	shr    $0x18,%eax
 80a5d9e:	31 c2                	xor    %eax,%edx
 80a5da0:	89 d8                	mov    %ebx,%eax
 80a5da2:	25 00 ff 00 00       	and    $0xff00,%eax
 80a5da7:	c1 e0 08             	shl    $0x8,%eax
 80a5daa:	31 c2                	xor    %eax,%edx
 80a5dac:	89 d8                	mov    %ebx,%eax
 80a5dae:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a5db3:	c1 e8 08             	shr    $0x8,%eax
 80a5db6:	89 d3                	mov    %edx,%ebx
 80a5db8:	31 c3                	xor    %eax,%ebx
 80a5dba:	31 f3                	xor    %esi,%ebx
 80a5dbc:	31 fe                	xor    %edi,%esi
 80a5dbe:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5dc1:	31 df                	xor    %ebx,%edi
 80a5dc3:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5dc6:	31 f3                	xor    %esi,%ebx
 80a5dc8:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5dcb:	8b 00                	mov    (%eax),%eax
 80a5dcd:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a5dd0:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5dd3:	83 c0 04             	add    $0x4,%eax
 80a5dd6:	8b 00                	mov    (%eax),%eax
 80a5dd8:	31 c3                	xor    %eax,%ebx
 80a5dda:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5ddd:	83 c0 08             	add    $0x8,%eax
 80a5de0:	8b 00                	mov    (%eax),%eax
 80a5de2:	31 c6                	xor    %eax,%esi
 80a5de4:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5de7:	83 c0 0c             	add    $0xc,%eax
 80a5dea:	8b 00                	mov    (%eax),%eax
 80a5dec:	31 c7                	xor    %eax,%edi
 80a5dee:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a5df2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5df5:	c1 e8 18             	shr    $0x18,%eax
 80a5df8:	0f b6 c0             	movzbl %al,%eax
 80a5dfb:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5e02:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5e05:	c1 e8 10             	shr    $0x10,%eax
 80a5e08:	0f b6 c0             	movzbl %al,%eax
 80a5e0b:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5e12:	31 c2                	xor    %eax,%edx
 80a5e14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5e17:	c1 e8 08             	shr    $0x8,%eax
 80a5e1a:	0f b6 c0             	movzbl %al,%eax
 80a5e1d:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5e24:	31 c2                	xor    %eax,%edx
 80a5e26:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a5e2a:	0f b6 c0             	movzbl %al,%eax
 80a5e2d:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5e34:	89 d1                	mov    %edx,%ecx
 80a5e36:	31 c1                	xor    %eax,%ecx
 80a5e38:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a5e3b:	89 d8                	mov    %ebx,%eax
 80a5e3d:	c1 e8 18             	shr    $0x18,%eax
 80a5e40:	0f b6 c0             	movzbl %al,%eax
 80a5e43:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5e4a:	89 d8                	mov    %ebx,%eax
 80a5e4c:	c1 e8 10             	shr    $0x10,%eax
 80a5e4f:	0f b6 c0             	movzbl %al,%eax
 80a5e52:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5e59:	31 c2                	xor    %eax,%edx
 80a5e5b:	89 d8                	mov    %ebx,%eax
 80a5e5d:	c1 e8 08             	shr    $0x8,%eax
 80a5e60:	0f b6 c0             	movzbl %al,%eax
 80a5e63:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5e6a:	31 c2                	xor    %eax,%edx
 80a5e6c:	89 d8                	mov    %ebx,%eax
 80a5e6e:	0f b6 c0             	movzbl %al,%eax
 80a5e71:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5e78:	89 d3                	mov    %edx,%ebx
 80a5e7a:	31 c3                	xor    %eax,%ebx
 80a5e7c:	89 f0                	mov    %esi,%eax
 80a5e7e:	c1 e8 18             	shr    $0x18,%eax
 80a5e81:	0f b6 c0             	movzbl %al,%eax
 80a5e84:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5e8b:	89 f0                	mov    %esi,%eax
 80a5e8d:	c1 e8 10             	shr    $0x10,%eax
 80a5e90:	0f b6 c0             	movzbl %al,%eax
 80a5e93:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5e9a:	31 c2                	xor    %eax,%edx
 80a5e9c:	89 f0                	mov    %esi,%eax
 80a5e9e:	c1 e8 08             	shr    $0x8,%eax
 80a5ea1:	0f b6 c0             	movzbl %al,%eax
 80a5ea4:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5eab:	31 c2                	xor    %eax,%edx
 80a5ead:	89 f0                	mov    %esi,%eax
 80a5eaf:	0f b6 c0             	movzbl %al,%eax
 80a5eb2:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5eb9:	89 d6                	mov    %edx,%esi
 80a5ebb:	31 c6                	xor    %eax,%esi
 80a5ebd:	89 f8                	mov    %edi,%eax
 80a5ebf:	c1 e8 18             	shr    $0x18,%eax
 80a5ec2:	0f b6 c0             	movzbl %al,%eax
 80a5ec5:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a5ecc:	89 f8                	mov    %edi,%eax
 80a5ece:	c1 e8 10             	shr    $0x10,%eax
 80a5ed1:	0f b6 c0             	movzbl %al,%eax
 80a5ed4:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5edb:	31 c2                	xor    %eax,%edx
 80a5edd:	89 f8                	mov    %edi,%eax
 80a5edf:	c1 e8 08             	shr    $0x8,%eax
 80a5ee2:	0f b6 c0             	movzbl %al,%eax
 80a5ee5:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a5eec:	31 c2                	xor    %eax,%edx
 80a5eee:	89 f8                	mov    %edi,%eax
 80a5ef0:	0f b6 c0             	movzbl %al,%eax
 80a5ef3:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5efa:	89 d7                	mov    %edx,%edi
 80a5efc:	31 c7                	xor    %eax,%edi
 80a5efe:	31 f3                	xor    %esi,%ebx
 80a5f00:	31 fe                	xor    %edi,%esi
 80a5f02:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5f05:	31 df                	xor    %ebx,%edi
 80a5f07:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5f0a:	31 f3                	xor    %esi,%ebx
 80a5f0c:	89 d8                	mov    %ebx,%eax
 80a5f0e:	c1 e0 08             	shl    $0x8,%eax
 80a5f11:	89 c2                	mov    %eax,%edx
 80a5f13:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a5f19:	89 d8                	mov    %ebx,%eax
 80a5f1b:	c1 e8 08             	shr    $0x8,%eax
 80a5f1e:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a5f23:	89 d3                	mov    %edx,%ebx
 80a5f25:	31 c3                	xor    %eax,%ebx
 80a5f27:	c1 ce 10             	ror    $0x10,%esi
 80a5f2a:	89 fa                	mov    %edi,%edx
 80a5f2c:	c1 e2 18             	shl    $0x18,%edx
 80a5f2f:	89 f8                	mov    %edi,%eax
 80a5f31:	c1 e8 18             	shr    $0x18,%eax
 80a5f34:	31 c2                	xor    %eax,%edx
 80a5f36:	89 f8                	mov    %edi,%eax
 80a5f38:	25 00 ff 00 00       	and    $0xff00,%eax
 80a5f3d:	c1 e0 08             	shl    $0x8,%eax
 80a5f40:	31 c2                	xor    %eax,%edx
 80a5f42:	89 f8                	mov    %edi,%eax
 80a5f44:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a5f49:	c1 e8 08             	shr    $0x8,%eax
 80a5f4c:	89 d7                	mov    %edx,%edi
 80a5f4e:	31 c7                	xor    %eax,%edi
 80a5f50:	31 f3                	xor    %esi,%ebx
 80a5f52:	31 fe                	xor    %edi,%esi
 80a5f54:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a5f57:	31 df                	xor    %ebx,%edi
 80a5f59:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a5f5c:	31 f3                	xor    %esi,%ebx
 80a5f5e:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5f61:	8b 00                	mov    (%eax),%eax
 80a5f63:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a5f66:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5f69:	83 c0 04             	add    $0x4,%eax
 80a5f6c:	8b 00                	mov    (%eax),%eax
 80a5f6e:	31 c3                	xor    %eax,%ebx
 80a5f70:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5f73:	83 c0 08             	add    $0x8,%eax
 80a5f76:	8b 00                	mov    (%eax),%eax
 80a5f78:	31 c6                	xor    %eax,%esi
 80a5f7a:	8b 45 10             	mov    0x10(%ebp),%eax
 80a5f7d:	83 c0 0c             	add    $0xc,%eax
 80a5f80:	8b 00                	mov    (%eax),%eax
 80a5f82:	31 c7                	xor    %eax,%edi
 80a5f84:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a5f88:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5f8b:	c1 e8 18             	shr    $0x18,%eax
 80a5f8e:	0f b6 c0             	movzbl %al,%eax
 80a5f91:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5f98:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5f9b:	c1 e8 10             	shr    $0x10,%eax
 80a5f9e:	0f b6 c0             	movzbl %al,%eax
 80a5fa1:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5fa8:	31 c2                	xor    %eax,%edx
 80a5faa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a5fad:	c1 e8 08             	shr    $0x8,%eax
 80a5fb0:	0f b6 c0             	movzbl %al,%eax
 80a5fb3:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a5fba:	31 c2                	xor    %eax,%edx
 80a5fbc:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a5fc0:	0f b6 c0             	movzbl %al,%eax
 80a5fc3:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a5fca:	89 d1                	mov    %edx,%ecx
 80a5fcc:	31 c1                	xor    %eax,%ecx
 80a5fce:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a5fd1:	89 d8                	mov    %ebx,%eax
 80a5fd3:	c1 e8 18             	shr    $0x18,%eax
 80a5fd6:	0f b6 c0             	movzbl %al,%eax
 80a5fd9:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a5fe0:	89 d8                	mov    %ebx,%eax
 80a5fe2:	c1 e8 10             	shr    $0x10,%eax
 80a5fe5:	0f b6 c0             	movzbl %al,%eax
 80a5fe8:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a5fef:	31 c2                	xor    %eax,%edx
 80a5ff1:	89 d8                	mov    %ebx,%eax
 80a5ff3:	c1 e8 08             	shr    $0x8,%eax
 80a5ff6:	0f b6 c0             	movzbl %al,%eax
 80a5ff9:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6000:	31 c2                	xor    %eax,%edx
 80a6002:	89 d8                	mov    %ebx,%eax
 80a6004:	0f b6 c0             	movzbl %al,%eax
 80a6007:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a600e:	89 d3                	mov    %edx,%ebx
 80a6010:	31 c3                	xor    %eax,%ebx
 80a6012:	89 f0                	mov    %esi,%eax
 80a6014:	c1 e8 18             	shr    $0x18,%eax
 80a6017:	0f b6 c0             	movzbl %al,%eax
 80a601a:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a6021:	89 f0                	mov    %esi,%eax
 80a6023:	c1 e8 10             	shr    $0x10,%eax
 80a6026:	0f b6 c0             	movzbl %al,%eax
 80a6029:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6030:	31 c2                	xor    %eax,%edx
 80a6032:	89 f0                	mov    %esi,%eax
 80a6034:	c1 e8 08             	shr    $0x8,%eax
 80a6037:	0f b6 c0             	movzbl %al,%eax
 80a603a:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6041:	31 c2                	xor    %eax,%edx
 80a6043:	89 f0                	mov    %esi,%eax
 80a6045:	0f b6 c0             	movzbl %al,%eax
 80a6048:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a604f:	89 d6                	mov    %edx,%esi
 80a6051:	31 c6                	xor    %eax,%esi
 80a6053:	89 f8                	mov    %edi,%eax
 80a6055:	c1 e8 18             	shr    $0x18,%eax
 80a6058:	0f b6 c0             	movzbl %al,%eax
 80a605b:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a6062:	89 f8                	mov    %edi,%eax
 80a6064:	c1 e8 10             	shr    $0x10,%eax
 80a6067:	0f b6 c0             	movzbl %al,%eax
 80a606a:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6071:	31 c2                	xor    %eax,%edx
 80a6073:	89 f8                	mov    %edi,%eax
 80a6075:	c1 e8 08             	shr    $0x8,%eax
 80a6078:	0f b6 c0             	movzbl %al,%eax
 80a607b:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6082:	31 c2                	xor    %eax,%edx
 80a6084:	89 f8                	mov    %edi,%eax
 80a6086:	0f b6 c0             	movzbl %al,%eax
 80a6089:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6090:	89 d7                	mov    %edx,%edi
 80a6092:	31 c7                	xor    %eax,%edi
 80a6094:	31 f3                	xor    %esi,%ebx
 80a6096:	31 fe                	xor    %edi,%esi
 80a6098:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a609b:	31 df                	xor    %ebx,%edi
 80a609d:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a60a0:	31 f3                	xor    %esi,%ebx
 80a60a2:	89 f8                	mov    %edi,%eax
 80a60a4:	c1 e0 08             	shl    $0x8,%eax
 80a60a7:	89 c2                	mov    %eax,%edx
 80a60a9:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a60af:	89 f8                	mov    %edi,%eax
 80a60b1:	c1 e8 08             	shr    $0x8,%eax
 80a60b4:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a60b9:	89 d7                	mov    %edx,%edi
 80a60bb:	31 c7                	xor    %eax,%edi
 80a60bd:	c1 4d f0 10          	rorl   $0x10,-0x10(%ebp)
 80a60c1:	89 da                	mov    %ebx,%edx
 80a60c3:	c1 e2 18             	shl    $0x18,%edx
 80a60c6:	89 d8                	mov    %ebx,%eax
 80a60c8:	c1 e8 18             	shr    $0x18,%eax
 80a60cb:	31 c2                	xor    %eax,%edx
 80a60cd:	89 d8                	mov    %ebx,%eax
 80a60cf:	25 00 ff 00 00       	and    $0xff00,%eax
 80a60d4:	c1 e0 08             	shl    $0x8,%eax
 80a60d7:	31 c2                	xor    %eax,%edx
 80a60d9:	89 d8                	mov    %ebx,%eax
 80a60db:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a60e0:	c1 e8 08             	shr    $0x8,%eax
 80a60e3:	89 d3                	mov    %edx,%ebx
 80a60e5:	31 c3                	xor    %eax,%ebx
 80a60e7:	31 f3                	xor    %esi,%ebx
 80a60e9:	31 fe                	xor    %edi,%esi
 80a60eb:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a60ee:	31 df                	xor    %ebx,%edi
 80a60f0:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a60f3:	31 f3                	xor    %esi,%ebx
 80a60f5:	8b 45 10             	mov    0x10(%ebp),%eax
 80a60f8:	8b 00                	mov    (%eax),%eax
 80a60fa:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a60fd:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6100:	83 c0 04             	add    $0x4,%eax
 80a6103:	8b 00                	mov    (%eax),%eax
 80a6105:	31 c3                	xor    %eax,%ebx
 80a6107:	8b 45 10             	mov    0x10(%ebp),%eax
 80a610a:	83 c0 08             	add    $0x8,%eax
 80a610d:	8b 00                	mov    (%eax),%eax
 80a610f:	31 c6                	xor    %eax,%esi
 80a6111:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6114:	83 c0 0c             	add    $0xc,%eax
 80a6117:	8b 00                	mov    (%eax),%eax
 80a6119:	31 c7                	xor    %eax,%edi
 80a611b:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a611f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6122:	c1 e8 18             	shr    $0x18,%eax
 80a6125:	0f b6 c0             	movzbl %al,%eax
 80a6128:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a612f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6132:	c1 e8 10             	shr    $0x10,%eax
 80a6135:	0f b6 c0             	movzbl %al,%eax
 80a6138:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a613f:	31 c2                	xor    %eax,%edx
 80a6141:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6144:	c1 e8 08             	shr    $0x8,%eax
 80a6147:	0f b6 c0             	movzbl %al,%eax
 80a614a:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6151:	31 c2                	xor    %eax,%edx
 80a6153:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a6157:	0f b6 c0             	movzbl %al,%eax
 80a615a:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6161:	89 d1                	mov    %edx,%ecx
 80a6163:	31 c1                	xor    %eax,%ecx
 80a6165:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a6168:	89 d8                	mov    %ebx,%eax
 80a616a:	c1 e8 18             	shr    $0x18,%eax
 80a616d:	0f b6 c0             	movzbl %al,%eax
 80a6170:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6177:	89 d8                	mov    %ebx,%eax
 80a6179:	c1 e8 10             	shr    $0x10,%eax
 80a617c:	0f b6 c0             	movzbl %al,%eax
 80a617f:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6186:	31 c2                	xor    %eax,%edx
 80a6188:	89 d8                	mov    %ebx,%eax
 80a618a:	c1 e8 08             	shr    $0x8,%eax
 80a618d:	0f b6 c0             	movzbl %al,%eax
 80a6190:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6197:	31 c2                	xor    %eax,%edx
 80a6199:	89 d8                	mov    %ebx,%eax
 80a619b:	0f b6 c0             	movzbl %al,%eax
 80a619e:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a61a5:	89 d3                	mov    %edx,%ebx
 80a61a7:	31 c3                	xor    %eax,%ebx
 80a61a9:	89 f0                	mov    %esi,%eax
 80a61ab:	c1 e8 18             	shr    $0x18,%eax
 80a61ae:	0f b6 c0             	movzbl %al,%eax
 80a61b1:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a61b8:	89 f0                	mov    %esi,%eax
 80a61ba:	c1 e8 10             	shr    $0x10,%eax
 80a61bd:	0f b6 c0             	movzbl %al,%eax
 80a61c0:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a61c7:	31 c2                	xor    %eax,%edx
 80a61c9:	89 f0                	mov    %esi,%eax
 80a61cb:	c1 e8 08             	shr    $0x8,%eax
 80a61ce:	0f b6 c0             	movzbl %al,%eax
 80a61d1:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a61d8:	31 c2                	xor    %eax,%edx
 80a61da:	89 f0                	mov    %esi,%eax
 80a61dc:	0f b6 c0             	movzbl %al,%eax
 80a61df:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a61e6:	89 d6                	mov    %edx,%esi
 80a61e8:	31 c6                	xor    %eax,%esi
 80a61ea:	89 f8                	mov    %edi,%eax
 80a61ec:	c1 e8 18             	shr    $0x18,%eax
 80a61ef:	0f b6 c0             	movzbl %al,%eax
 80a61f2:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a61f9:	89 f8                	mov    %edi,%eax
 80a61fb:	c1 e8 10             	shr    $0x10,%eax
 80a61fe:	0f b6 c0             	movzbl %al,%eax
 80a6201:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6208:	31 c2                	xor    %eax,%edx
 80a620a:	89 f8                	mov    %edi,%eax
 80a620c:	c1 e8 08             	shr    $0x8,%eax
 80a620f:	0f b6 c0             	movzbl %al,%eax
 80a6212:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6219:	31 c2                	xor    %eax,%edx
 80a621b:	89 f8                	mov    %edi,%eax
 80a621d:	0f b6 c0             	movzbl %al,%eax
 80a6220:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6227:	89 d7                	mov    %edx,%edi
 80a6229:	31 c7                	xor    %eax,%edi
 80a622b:	31 f3                	xor    %esi,%ebx
 80a622d:	31 fe                	xor    %edi,%esi
 80a622f:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a6232:	31 df                	xor    %ebx,%edi
 80a6234:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6237:	31 f3                	xor    %esi,%ebx
 80a6239:	89 d8                	mov    %ebx,%eax
 80a623b:	c1 e0 08             	shl    $0x8,%eax
 80a623e:	89 c2                	mov    %eax,%edx
 80a6240:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a6246:	89 d8                	mov    %ebx,%eax
 80a6248:	c1 e8 08             	shr    $0x8,%eax
 80a624b:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a6250:	89 d3                	mov    %edx,%ebx
 80a6252:	31 c3                	xor    %eax,%ebx
 80a6254:	c1 ce 10             	ror    $0x10,%esi
 80a6257:	89 fa                	mov    %edi,%edx
 80a6259:	c1 e2 18             	shl    $0x18,%edx
 80a625c:	89 f8                	mov    %edi,%eax
 80a625e:	c1 e8 18             	shr    $0x18,%eax
 80a6261:	31 c2                	xor    %eax,%edx
 80a6263:	89 f8                	mov    %edi,%eax
 80a6265:	25 00 ff 00 00       	and    $0xff00,%eax
 80a626a:	c1 e0 08             	shl    $0x8,%eax
 80a626d:	31 c2                	xor    %eax,%edx
 80a626f:	89 f8                	mov    %edi,%eax
 80a6271:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a6276:	c1 e8 08             	shr    $0x8,%eax
 80a6279:	89 d7                	mov    %edx,%edi
 80a627b:	31 c7                	xor    %eax,%edi
 80a627d:	31 f3                	xor    %esi,%ebx
 80a627f:	31 fe                	xor    %edi,%esi
 80a6281:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a6284:	31 df                	xor    %ebx,%edi
 80a6286:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6289:	31 f3                	xor    %esi,%ebx
 80a628b:	8b 45 10             	mov    0x10(%ebp),%eax
 80a628e:	8b 00                	mov    (%eax),%eax
 80a6290:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a6293:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6296:	83 c0 04             	add    $0x4,%eax
 80a6299:	8b 00                	mov    (%eax),%eax
 80a629b:	31 c3                	xor    %eax,%ebx
 80a629d:	8b 45 10             	mov    0x10(%ebp),%eax
 80a62a0:	83 c0 08             	add    $0x8,%eax
 80a62a3:	8b 00                	mov    (%eax),%eax
 80a62a5:	31 c6                	xor    %eax,%esi
 80a62a7:	8b 45 10             	mov    0x10(%ebp),%eax
 80a62aa:	83 c0 0c             	add    $0xc,%eax
 80a62ad:	8b 00                	mov    (%eax),%eax
 80a62af:	31 c7                	xor    %eax,%edi
 80a62b1:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a62b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a62b8:	c1 e8 18             	shr    $0x18,%eax
 80a62bb:	0f b6 c0             	movzbl %al,%eax
 80a62be:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a62c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a62c8:	c1 e8 10             	shr    $0x10,%eax
 80a62cb:	0f b6 c0             	movzbl %al,%eax
 80a62ce:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a62d5:	31 c2                	xor    %eax,%edx
 80a62d7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a62da:	c1 e8 08             	shr    $0x8,%eax
 80a62dd:	0f b6 c0             	movzbl %al,%eax
 80a62e0:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a62e7:	31 c2                	xor    %eax,%edx
 80a62e9:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a62ed:	0f b6 c0             	movzbl %al,%eax
 80a62f0:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a62f7:	89 d1                	mov    %edx,%ecx
 80a62f9:	31 c1                	xor    %eax,%ecx
 80a62fb:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a62fe:	89 d8                	mov    %ebx,%eax
 80a6300:	c1 e8 18             	shr    $0x18,%eax
 80a6303:	0f b6 c0             	movzbl %al,%eax
 80a6306:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a630d:	89 d8                	mov    %ebx,%eax
 80a630f:	c1 e8 10             	shr    $0x10,%eax
 80a6312:	0f b6 c0             	movzbl %al,%eax
 80a6315:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a631c:	31 c2                	xor    %eax,%edx
 80a631e:	89 d8                	mov    %ebx,%eax
 80a6320:	c1 e8 08             	shr    $0x8,%eax
 80a6323:	0f b6 c0             	movzbl %al,%eax
 80a6326:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a632d:	31 c2                	xor    %eax,%edx
 80a632f:	89 d8                	mov    %ebx,%eax
 80a6331:	0f b6 c0             	movzbl %al,%eax
 80a6334:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a633b:	89 d3                	mov    %edx,%ebx
 80a633d:	31 c3                	xor    %eax,%ebx
 80a633f:	89 f0                	mov    %esi,%eax
 80a6341:	c1 e8 18             	shr    $0x18,%eax
 80a6344:	0f b6 c0             	movzbl %al,%eax
 80a6347:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a634e:	89 f0                	mov    %esi,%eax
 80a6350:	c1 e8 10             	shr    $0x10,%eax
 80a6353:	0f b6 c0             	movzbl %al,%eax
 80a6356:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a635d:	31 c2                	xor    %eax,%edx
 80a635f:	89 f0                	mov    %esi,%eax
 80a6361:	c1 e8 08             	shr    $0x8,%eax
 80a6364:	0f b6 c0             	movzbl %al,%eax
 80a6367:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a636e:	31 c2                	xor    %eax,%edx
 80a6370:	89 f0                	mov    %esi,%eax
 80a6372:	0f b6 c0             	movzbl %al,%eax
 80a6375:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a637c:	89 d6                	mov    %edx,%esi
 80a637e:	31 c6                	xor    %eax,%esi
 80a6380:	89 f8                	mov    %edi,%eax
 80a6382:	c1 e8 18             	shr    $0x18,%eax
 80a6385:	0f b6 c0             	movzbl %al,%eax
 80a6388:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a638f:	89 f8                	mov    %edi,%eax
 80a6391:	c1 e8 10             	shr    $0x10,%eax
 80a6394:	0f b6 c0             	movzbl %al,%eax
 80a6397:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a639e:	31 c2                	xor    %eax,%edx
 80a63a0:	89 f8                	mov    %edi,%eax
 80a63a2:	c1 e8 08             	shr    $0x8,%eax
 80a63a5:	0f b6 c0             	movzbl %al,%eax
 80a63a8:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a63af:	31 c2                	xor    %eax,%edx
 80a63b1:	89 f8                	mov    %edi,%eax
 80a63b3:	0f b6 c0             	movzbl %al,%eax
 80a63b6:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a63bd:	89 d7                	mov    %edx,%edi
 80a63bf:	31 c7                	xor    %eax,%edi
 80a63c1:	31 f3                	xor    %esi,%ebx
 80a63c3:	31 fe                	xor    %edi,%esi
 80a63c5:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a63c8:	31 df                	xor    %ebx,%edi
 80a63ca:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a63cd:	31 f3                	xor    %esi,%ebx
 80a63cf:	89 f8                	mov    %edi,%eax
 80a63d1:	c1 e0 08             	shl    $0x8,%eax
 80a63d4:	89 c2                	mov    %eax,%edx
 80a63d6:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a63dc:	89 f8                	mov    %edi,%eax
 80a63de:	c1 e8 08             	shr    $0x8,%eax
 80a63e1:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a63e6:	89 d7                	mov    %edx,%edi
 80a63e8:	31 c7                	xor    %eax,%edi
 80a63ea:	c1 4d f0 10          	rorl   $0x10,-0x10(%ebp)
 80a63ee:	89 da                	mov    %ebx,%edx
 80a63f0:	c1 e2 18             	shl    $0x18,%edx
 80a63f3:	89 d8                	mov    %ebx,%eax
 80a63f5:	c1 e8 18             	shr    $0x18,%eax
 80a63f8:	31 c2                	xor    %eax,%edx
 80a63fa:	89 d8                	mov    %ebx,%eax
 80a63fc:	25 00 ff 00 00       	and    $0xff00,%eax
 80a6401:	c1 e0 08             	shl    $0x8,%eax
 80a6404:	31 c2                	xor    %eax,%edx
 80a6406:	89 d8                	mov    %ebx,%eax
 80a6408:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a640d:	c1 e8 08             	shr    $0x8,%eax
 80a6410:	89 d3                	mov    %edx,%ebx
 80a6412:	31 c3                	xor    %eax,%ebx
 80a6414:	31 f3                	xor    %esi,%ebx
 80a6416:	31 fe                	xor    %edi,%esi
 80a6418:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a641b:	31 df                	xor    %ebx,%edi
 80a641d:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6420:	31 f3                	xor    %esi,%ebx
 80a6422:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6425:	8b 00                	mov    (%eax),%eax
 80a6427:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a642a:	8b 45 10             	mov    0x10(%ebp),%eax
 80a642d:	83 c0 04             	add    $0x4,%eax
 80a6430:	8b 00                	mov    (%eax),%eax
 80a6432:	31 c3                	xor    %eax,%ebx
 80a6434:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6437:	83 c0 08             	add    $0x8,%eax
 80a643a:	8b 00                	mov    (%eax),%eax
 80a643c:	31 c6                	xor    %eax,%esi
 80a643e:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6441:	83 c0 0c             	add    $0xc,%eax
 80a6444:	8b 00                	mov    (%eax),%eax
 80a6446:	31 c7                	xor    %eax,%edi
 80a6448:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a644c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a644f:	c1 e8 18             	shr    $0x18,%eax
 80a6452:	0f b6 c0             	movzbl %al,%eax
 80a6455:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a645c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a645f:	c1 e8 10             	shr    $0x10,%eax
 80a6462:	0f b6 c0             	movzbl %al,%eax
 80a6465:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a646c:	31 c2                	xor    %eax,%edx
 80a646e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6471:	c1 e8 08             	shr    $0x8,%eax
 80a6474:	0f b6 c0             	movzbl %al,%eax
 80a6477:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a647e:	31 c2                	xor    %eax,%edx
 80a6480:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a6484:	0f b6 c0             	movzbl %al,%eax
 80a6487:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a648e:	89 d1                	mov    %edx,%ecx
 80a6490:	31 c1                	xor    %eax,%ecx
 80a6492:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a6495:	89 d8                	mov    %ebx,%eax
 80a6497:	c1 e8 18             	shr    $0x18,%eax
 80a649a:	0f b6 c0             	movzbl %al,%eax
 80a649d:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a64a4:	89 d8                	mov    %ebx,%eax
 80a64a6:	c1 e8 10             	shr    $0x10,%eax
 80a64a9:	0f b6 c0             	movzbl %al,%eax
 80a64ac:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a64b3:	31 c2                	xor    %eax,%edx
 80a64b5:	89 d8                	mov    %ebx,%eax
 80a64b7:	c1 e8 08             	shr    $0x8,%eax
 80a64ba:	0f b6 c0             	movzbl %al,%eax
 80a64bd:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a64c4:	31 c2                	xor    %eax,%edx
 80a64c6:	89 d8                	mov    %ebx,%eax
 80a64c8:	0f b6 c0             	movzbl %al,%eax
 80a64cb:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a64d2:	89 d3                	mov    %edx,%ebx
 80a64d4:	31 c3                	xor    %eax,%ebx
 80a64d6:	89 f0                	mov    %esi,%eax
 80a64d8:	c1 e8 18             	shr    $0x18,%eax
 80a64db:	0f b6 c0             	movzbl %al,%eax
 80a64de:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a64e5:	89 f0                	mov    %esi,%eax
 80a64e7:	c1 e8 10             	shr    $0x10,%eax
 80a64ea:	0f b6 c0             	movzbl %al,%eax
 80a64ed:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a64f4:	31 c2                	xor    %eax,%edx
 80a64f6:	89 f0                	mov    %esi,%eax
 80a64f8:	c1 e8 08             	shr    $0x8,%eax
 80a64fb:	0f b6 c0             	movzbl %al,%eax
 80a64fe:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6505:	31 c2                	xor    %eax,%edx
 80a6507:	89 f0                	mov    %esi,%eax
 80a6509:	0f b6 c0             	movzbl %al,%eax
 80a650c:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6513:	89 d6                	mov    %edx,%esi
 80a6515:	31 c6                	xor    %eax,%esi
 80a6517:	89 f8                	mov    %edi,%eax
 80a6519:	c1 e8 18             	shr    $0x18,%eax
 80a651c:	0f b6 c0             	movzbl %al,%eax
 80a651f:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6526:	89 f8                	mov    %edi,%eax
 80a6528:	c1 e8 10             	shr    $0x10,%eax
 80a652b:	0f b6 c0             	movzbl %al,%eax
 80a652e:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6535:	31 c2                	xor    %eax,%edx
 80a6537:	89 f8                	mov    %edi,%eax
 80a6539:	c1 e8 08             	shr    $0x8,%eax
 80a653c:	0f b6 c0             	movzbl %al,%eax
 80a653f:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6546:	31 c2                	xor    %eax,%edx
 80a6548:	89 f8                	mov    %edi,%eax
 80a654a:	0f b6 c0             	movzbl %al,%eax
 80a654d:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6554:	89 d7                	mov    %edx,%edi
 80a6556:	31 c7                	xor    %eax,%edi
 80a6558:	31 f3                	xor    %esi,%ebx
 80a655a:	31 fe                	xor    %edi,%esi
 80a655c:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a655f:	31 df                	xor    %ebx,%edi
 80a6561:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6564:	31 f3                	xor    %esi,%ebx
 80a6566:	89 d8                	mov    %ebx,%eax
 80a6568:	c1 e0 08             	shl    $0x8,%eax
 80a656b:	89 c2                	mov    %eax,%edx
 80a656d:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a6573:	89 d8                	mov    %ebx,%eax
 80a6575:	c1 e8 08             	shr    $0x8,%eax
 80a6578:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a657d:	89 d3                	mov    %edx,%ebx
 80a657f:	31 c3                	xor    %eax,%ebx
 80a6581:	c1 ce 10             	ror    $0x10,%esi
 80a6584:	89 fa                	mov    %edi,%edx
 80a6586:	c1 e2 18             	shl    $0x18,%edx
 80a6589:	89 f8                	mov    %edi,%eax
 80a658b:	c1 e8 18             	shr    $0x18,%eax
 80a658e:	31 c2                	xor    %eax,%edx
 80a6590:	89 f8                	mov    %edi,%eax
 80a6592:	25 00 ff 00 00       	and    $0xff00,%eax
 80a6597:	c1 e0 08             	shl    $0x8,%eax
 80a659a:	31 c2                	xor    %eax,%edx
 80a659c:	89 f8                	mov    %edi,%eax
 80a659e:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a65a3:	c1 e8 08             	shr    $0x8,%eax
 80a65a6:	89 d7                	mov    %edx,%edi
 80a65a8:	31 c7                	xor    %eax,%edi
 80a65aa:	31 f3                	xor    %esi,%ebx
 80a65ac:	31 fe                	xor    %edi,%esi
 80a65ae:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a65b1:	31 df                	xor    %ebx,%edi
 80a65b3:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a65b6:	31 f3                	xor    %esi,%ebx
 80a65b8:	8b 45 10             	mov    0x10(%ebp),%eax
 80a65bb:	8b 00                	mov    (%eax),%eax
 80a65bd:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a65c0:	8b 45 10             	mov    0x10(%ebp),%eax
 80a65c3:	83 c0 04             	add    $0x4,%eax
 80a65c6:	8b 00                	mov    (%eax),%eax
 80a65c8:	31 c3                	xor    %eax,%ebx
 80a65ca:	8b 45 10             	mov    0x10(%ebp),%eax
 80a65cd:	83 c0 08             	add    $0x8,%eax
 80a65d0:	8b 00                	mov    (%eax),%eax
 80a65d2:	31 c6                	xor    %eax,%esi
 80a65d4:	8b 45 10             	mov    0x10(%ebp),%eax
 80a65d7:	83 c0 0c             	add    $0xc,%eax
 80a65da:	8b 00                	mov    (%eax),%eax
 80a65dc:	31 c7                	xor    %eax,%edi
 80a65de:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a65e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a65e5:	c1 e8 18             	shr    $0x18,%eax
 80a65e8:	0f b6 c0             	movzbl %al,%eax
 80a65eb:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a65f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a65f5:	c1 e8 10             	shr    $0x10,%eax
 80a65f8:	0f b6 c0             	movzbl %al,%eax
 80a65fb:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6602:	31 c2                	xor    %eax,%edx
 80a6604:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6607:	c1 e8 08             	shr    $0x8,%eax
 80a660a:	0f b6 c0             	movzbl %al,%eax
 80a660d:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6614:	31 c2                	xor    %eax,%edx
 80a6616:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a661a:	0f b6 c0             	movzbl %al,%eax
 80a661d:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6624:	89 d1                	mov    %edx,%ecx
 80a6626:	31 c1                	xor    %eax,%ecx
 80a6628:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a662b:	89 d8                	mov    %ebx,%eax
 80a662d:	c1 e8 18             	shr    $0x18,%eax
 80a6630:	0f b6 c0             	movzbl %al,%eax
 80a6633:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a663a:	89 d8                	mov    %ebx,%eax
 80a663c:	c1 e8 10             	shr    $0x10,%eax
 80a663f:	0f b6 c0             	movzbl %al,%eax
 80a6642:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6649:	31 c2                	xor    %eax,%edx
 80a664b:	89 d8                	mov    %ebx,%eax
 80a664d:	c1 e8 08             	shr    $0x8,%eax
 80a6650:	0f b6 c0             	movzbl %al,%eax
 80a6653:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a665a:	31 c2                	xor    %eax,%edx
 80a665c:	89 d8                	mov    %ebx,%eax
 80a665e:	0f b6 c0             	movzbl %al,%eax
 80a6661:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6668:	89 d3                	mov    %edx,%ebx
 80a666a:	31 c3                	xor    %eax,%ebx
 80a666c:	89 f0                	mov    %esi,%eax
 80a666e:	c1 e8 18             	shr    $0x18,%eax
 80a6671:	0f b6 c0             	movzbl %al,%eax
 80a6674:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a667b:	89 f0                	mov    %esi,%eax
 80a667d:	c1 e8 10             	shr    $0x10,%eax
 80a6680:	0f b6 c0             	movzbl %al,%eax
 80a6683:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a668a:	31 c2                	xor    %eax,%edx
 80a668c:	89 f0                	mov    %esi,%eax
 80a668e:	c1 e8 08             	shr    $0x8,%eax
 80a6691:	0f b6 c0             	movzbl %al,%eax
 80a6694:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a669b:	31 c2                	xor    %eax,%edx
 80a669d:	89 f0                	mov    %esi,%eax
 80a669f:	0f b6 c0             	movzbl %al,%eax
 80a66a2:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a66a9:	89 d6                	mov    %edx,%esi
 80a66ab:	31 c6                	xor    %eax,%esi
 80a66ad:	89 f8                	mov    %edi,%eax
 80a66af:	c1 e8 18             	shr    $0x18,%eax
 80a66b2:	0f b6 c0             	movzbl %al,%eax
 80a66b5:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a66bc:	89 f8                	mov    %edi,%eax
 80a66be:	c1 e8 10             	shr    $0x10,%eax
 80a66c1:	0f b6 c0             	movzbl %al,%eax
 80a66c4:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a66cb:	31 c2                	xor    %eax,%edx
 80a66cd:	89 f8                	mov    %edi,%eax
 80a66cf:	c1 e8 08             	shr    $0x8,%eax
 80a66d2:	0f b6 c0             	movzbl %al,%eax
 80a66d5:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a66dc:	31 c2                	xor    %eax,%edx
 80a66de:	89 f8                	mov    %edi,%eax
 80a66e0:	0f b6 c0             	movzbl %al,%eax
 80a66e3:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a66ea:	89 d7                	mov    %edx,%edi
 80a66ec:	31 c7                	xor    %eax,%edi
 80a66ee:	31 f3                	xor    %esi,%ebx
 80a66f0:	31 fe                	xor    %edi,%esi
 80a66f2:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a66f5:	31 df                	xor    %ebx,%edi
 80a66f7:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a66fa:	31 f3                	xor    %esi,%ebx
 80a66fc:	89 f8                	mov    %edi,%eax
 80a66fe:	c1 e0 08             	shl    $0x8,%eax
 80a6701:	89 c2                	mov    %eax,%edx
 80a6703:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a6709:	89 f8                	mov    %edi,%eax
 80a670b:	c1 e8 08             	shr    $0x8,%eax
 80a670e:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a6713:	89 d7                	mov    %edx,%edi
 80a6715:	31 c7                	xor    %eax,%edi
 80a6717:	c1 4d f0 10          	rorl   $0x10,-0x10(%ebp)
 80a671b:	89 da                	mov    %ebx,%edx
 80a671d:	c1 e2 18             	shl    $0x18,%edx
 80a6720:	89 d8                	mov    %ebx,%eax
 80a6722:	c1 e8 18             	shr    $0x18,%eax
 80a6725:	31 c2                	xor    %eax,%edx
 80a6727:	89 d8                	mov    %ebx,%eax
 80a6729:	25 00 ff 00 00       	and    $0xff00,%eax
 80a672e:	c1 e0 08             	shl    $0x8,%eax
 80a6731:	31 c2                	xor    %eax,%edx
 80a6733:	89 d8                	mov    %ebx,%eax
 80a6735:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a673a:	c1 e8 08             	shr    $0x8,%eax
 80a673d:	89 d3                	mov    %edx,%ebx
 80a673f:	31 c3                	xor    %eax,%ebx
 80a6741:	31 f3                	xor    %esi,%ebx
 80a6743:	31 fe                	xor    %edi,%esi
 80a6745:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a6748:	31 df                	xor    %ebx,%edi
 80a674a:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a674d:	31 f3                	xor    %esi,%ebx
 80a674f:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6752:	8b 00                	mov    (%eax),%eax
 80a6754:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a6757:	8b 45 10             	mov    0x10(%ebp),%eax
 80a675a:	83 c0 04             	add    $0x4,%eax
 80a675d:	8b 00                	mov    (%eax),%eax
 80a675f:	31 c3                	xor    %eax,%ebx
 80a6761:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6764:	83 c0 08             	add    $0x8,%eax
 80a6767:	8b 00                	mov    (%eax),%eax
 80a6769:	31 c6                	xor    %eax,%esi
 80a676b:	8b 45 10             	mov    0x10(%ebp),%eax
 80a676e:	83 c0 0c             	add    $0xc,%eax
 80a6771:	8b 00                	mov    (%eax),%eax
 80a6773:	31 c7                	xor    %eax,%edi
 80a6775:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a6779:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a677c:	c1 e8 18             	shr    $0x18,%eax
 80a677f:	0f b6 c0             	movzbl %al,%eax
 80a6782:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6789:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a678c:	c1 e8 10             	shr    $0x10,%eax
 80a678f:	0f b6 c0             	movzbl %al,%eax
 80a6792:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6799:	31 c2                	xor    %eax,%edx
 80a679b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a679e:	c1 e8 08             	shr    $0x8,%eax
 80a67a1:	0f b6 c0             	movzbl %al,%eax
 80a67a4:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a67ab:	31 c2                	xor    %eax,%edx
 80a67ad:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a67b1:	0f b6 c0             	movzbl %al,%eax
 80a67b4:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a67bb:	89 d1                	mov    %edx,%ecx
 80a67bd:	31 c1                	xor    %eax,%ecx
 80a67bf:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a67c2:	89 d8                	mov    %ebx,%eax
 80a67c4:	c1 e8 18             	shr    $0x18,%eax
 80a67c7:	0f b6 c0             	movzbl %al,%eax
 80a67ca:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a67d1:	89 d8                	mov    %ebx,%eax
 80a67d3:	c1 e8 10             	shr    $0x10,%eax
 80a67d6:	0f b6 c0             	movzbl %al,%eax
 80a67d9:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a67e0:	31 c2                	xor    %eax,%edx
 80a67e2:	89 d8                	mov    %ebx,%eax
 80a67e4:	c1 e8 08             	shr    $0x8,%eax
 80a67e7:	0f b6 c0             	movzbl %al,%eax
 80a67ea:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a67f1:	31 c2                	xor    %eax,%edx
 80a67f3:	89 d8                	mov    %ebx,%eax
 80a67f5:	0f b6 c0             	movzbl %al,%eax
 80a67f8:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a67ff:	89 d3                	mov    %edx,%ebx
 80a6801:	31 c3                	xor    %eax,%ebx
 80a6803:	89 f0                	mov    %esi,%eax
 80a6805:	c1 e8 18             	shr    $0x18,%eax
 80a6808:	0f b6 c0             	movzbl %al,%eax
 80a680b:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6812:	89 f0                	mov    %esi,%eax
 80a6814:	c1 e8 10             	shr    $0x10,%eax
 80a6817:	0f b6 c0             	movzbl %al,%eax
 80a681a:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6821:	31 c2                	xor    %eax,%edx
 80a6823:	89 f0                	mov    %esi,%eax
 80a6825:	c1 e8 08             	shr    $0x8,%eax
 80a6828:	0f b6 c0             	movzbl %al,%eax
 80a682b:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6832:	31 c2                	xor    %eax,%edx
 80a6834:	89 f0                	mov    %esi,%eax
 80a6836:	0f b6 c0             	movzbl %al,%eax
 80a6839:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6840:	89 d6                	mov    %edx,%esi
 80a6842:	31 c6                	xor    %eax,%esi
 80a6844:	89 f8                	mov    %edi,%eax
 80a6846:	c1 e8 18             	shr    $0x18,%eax
 80a6849:	0f b6 c0             	movzbl %al,%eax
 80a684c:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6853:	89 f8                	mov    %edi,%eax
 80a6855:	c1 e8 10             	shr    $0x10,%eax
 80a6858:	0f b6 c0             	movzbl %al,%eax
 80a685b:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6862:	31 c2                	xor    %eax,%edx
 80a6864:	89 f8                	mov    %edi,%eax
 80a6866:	c1 e8 08             	shr    $0x8,%eax
 80a6869:	0f b6 c0             	movzbl %al,%eax
 80a686c:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6873:	31 c2                	xor    %eax,%edx
 80a6875:	89 f8                	mov    %edi,%eax
 80a6877:	0f b6 c0             	movzbl %al,%eax
 80a687a:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6881:	89 d7                	mov    %edx,%edi
 80a6883:	31 c7                	xor    %eax,%edi
 80a6885:	31 f3                	xor    %esi,%ebx
 80a6887:	31 fe                	xor    %edi,%esi
 80a6889:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a688c:	31 df                	xor    %ebx,%edi
 80a688e:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6891:	31 f3                	xor    %esi,%ebx
 80a6893:	89 d8                	mov    %ebx,%eax
 80a6895:	c1 e0 08             	shl    $0x8,%eax
 80a6898:	89 c2                	mov    %eax,%edx
 80a689a:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a68a0:	89 d8                	mov    %ebx,%eax
 80a68a2:	c1 e8 08             	shr    $0x8,%eax
 80a68a5:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a68aa:	89 d3                	mov    %edx,%ebx
 80a68ac:	31 c3                	xor    %eax,%ebx
 80a68ae:	c1 ce 10             	ror    $0x10,%esi
 80a68b1:	89 fa                	mov    %edi,%edx
 80a68b3:	c1 e2 18             	shl    $0x18,%edx
 80a68b6:	89 f8                	mov    %edi,%eax
 80a68b8:	c1 e8 18             	shr    $0x18,%eax
 80a68bb:	31 c2                	xor    %eax,%edx
 80a68bd:	89 f8                	mov    %edi,%eax
 80a68bf:	25 00 ff 00 00       	and    $0xff00,%eax
 80a68c4:	c1 e0 08             	shl    $0x8,%eax
 80a68c7:	31 c2                	xor    %eax,%edx
 80a68c9:	89 f8                	mov    %edi,%eax
 80a68cb:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a68d0:	c1 e8 08             	shr    $0x8,%eax
 80a68d3:	89 d7                	mov    %edx,%edi
 80a68d5:	31 c7                	xor    %eax,%edi
 80a68d7:	31 f3                	xor    %esi,%ebx
 80a68d9:	31 fe                	xor    %edi,%esi
 80a68db:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a68de:	31 df                	xor    %ebx,%edi
 80a68e0:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a68e3:	31 f3                	xor    %esi,%ebx
 80a68e5:	8b 45 10             	mov    0x10(%ebp),%eax
 80a68e8:	8b 00                	mov    (%eax),%eax
 80a68ea:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a68ed:	8b 45 10             	mov    0x10(%ebp),%eax
 80a68f0:	83 c0 04             	add    $0x4,%eax
 80a68f3:	8b 00                	mov    (%eax),%eax
 80a68f5:	31 c3                	xor    %eax,%ebx
 80a68f7:	8b 45 10             	mov    0x10(%ebp),%eax
 80a68fa:	83 c0 08             	add    $0x8,%eax
 80a68fd:	8b 00                	mov    (%eax),%eax
 80a68ff:	31 c6                	xor    %eax,%esi
 80a6901:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6904:	83 c0 0c             	add    $0xc,%eax
 80a6907:	8b 00                	mov    (%eax),%eax
 80a6909:	31 c7                	xor    %eax,%edi
 80a690b:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a690f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6912:	c1 e8 18             	shr    $0x18,%eax
 80a6915:	0f b6 c0             	movzbl %al,%eax
 80a6918:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a691f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6922:	c1 e8 10             	shr    $0x10,%eax
 80a6925:	0f b6 c0             	movzbl %al,%eax
 80a6928:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a692f:	31 c2                	xor    %eax,%edx
 80a6931:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6934:	c1 e8 08             	shr    $0x8,%eax
 80a6937:	0f b6 c0             	movzbl %al,%eax
 80a693a:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6941:	31 c2                	xor    %eax,%edx
 80a6943:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a6947:	0f b6 c0             	movzbl %al,%eax
 80a694a:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6951:	89 d1                	mov    %edx,%ecx
 80a6953:	31 c1                	xor    %eax,%ecx
 80a6955:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a6958:	89 d8                	mov    %ebx,%eax
 80a695a:	c1 e8 18             	shr    $0x18,%eax
 80a695d:	0f b6 c0             	movzbl %al,%eax
 80a6960:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a6967:	89 d8                	mov    %ebx,%eax
 80a6969:	c1 e8 10             	shr    $0x10,%eax
 80a696c:	0f b6 c0             	movzbl %al,%eax
 80a696f:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6976:	31 c2                	xor    %eax,%edx
 80a6978:	89 d8                	mov    %ebx,%eax
 80a697a:	c1 e8 08             	shr    $0x8,%eax
 80a697d:	0f b6 c0             	movzbl %al,%eax
 80a6980:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6987:	31 c2                	xor    %eax,%edx
 80a6989:	89 d8                	mov    %ebx,%eax
 80a698b:	0f b6 c0             	movzbl %al,%eax
 80a698e:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6995:	89 d3                	mov    %edx,%ebx
 80a6997:	31 c3                	xor    %eax,%ebx
 80a6999:	89 f0                	mov    %esi,%eax
 80a699b:	c1 e8 18             	shr    $0x18,%eax
 80a699e:	0f b6 c0             	movzbl %al,%eax
 80a69a1:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a69a8:	89 f0                	mov    %esi,%eax
 80a69aa:	c1 e8 10             	shr    $0x10,%eax
 80a69ad:	0f b6 c0             	movzbl %al,%eax
 80a69b0:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a69b7:	31 c2                	xor    %eax,%edx
 80a69b9:	89 f0                	mov    %esi,%eax
 80a69bb:	c1 e8 08             	shr    $0x8,%eax
 80a69be:	0f b6 c0             	movzbl %al,%eax
 80a69c1:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a69c8:	31 c2                	xor    %eax,%edx
 80a69ca:	89 f0                	mov    %esi,%eax
 80a69cc:	0f b6 c0             	movzbl %al,%eax
 80a69cf:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a69d6:	89 d6                	mov    %edx,%esi
 80a69d8:	31 c6                	xor    %eax,%esi
 80a69da:	89 f8                	mov    %edi,%eax
 80a69dc:	c1 e8 18             	shr    $0x18,%eax
 80a69df:	0f b6 c0             	movzbl %al,%eax
 80a69e2:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a69e9:	89 f8                	mov    %edi,%eax
 80a69eb:	c1 e8 10             	shr    $0x10,%eax
 80a69ee:	0f b6 c0             	movzbl %al,%eax
 80a69f1:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a69f8:	31 c2                	xor    %eax,%edx
 80a69fa:	89 f8                	mov    %edi,%eax
 80a69fc:	c1 e8 08             	shr    $0x8,%eax
 80a69ff:	0f b6 c0             	movzbl %al,%eax
 80a6a02:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6a09:	31 c2                	xor    %eax,%edx
 80a6a0b:	89 f8                	mov    %edi,%eax
 80a6a0d:	0f b6 c0             	movzbl %al,%eax
 80a6a10:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6a17:	89 d7                	mov    %edx,%edi
 80a6a19:	31 c7                	xor    %eax,%edi
 80a6a1b:	31 f3                	xor    %esi,%ebx
 80a6a1d:	31 fe                	xor    %edi,%esi
 80a6a1f:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a6a22:	31 df                	xor    %ebx,%edi
 80a6a24:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6a27:	31 f3                	xor    %esi,%ebx
 80a6a29:	89 f8                	mov    %edi,%eax
 80a6a2b:	c1 e0 08             	shl    $0x8,%eax
 80a6a2e:	89 c2                	mov    %eax,%edx
 80a6a30:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a6a36:	89 f8                	mov    %edi,%eax
 80a6a38:	c1 e8 08             	shr    $0x8,%eax
 80a6a3b:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a6a40:	89 d7                	mov    %edx,%edi
 80a6a42:	31 c7                	xor    %eax,%edi
 80a6a44:	c1 4d f0 10          	rorl   $0x10,-0x10(%ebp)
 80a6a48:	89 da                	mov    %ebx,%edx
 80a6a4a:	c1 e2 18             	shl    $0x18,%edx
 80a6a4d:	89 d8                	mov    %ebx,%eax
 80a6a4f:	c1 e8 18             	shr    $0x18,%eax
 80a6a52:	31 c2                	xor    %eax,%edx
 80a6a54:	89 d8                	mov    %ebx,%eax
 80a6a56:	25 00 ff 00 00       	and    $0xff00,%eax
 80a6a5b:	c1 e0 08             	shl    $0x8,%eax
 80a6a5e:	31 c2                	xor    %eax,%edx
 80a6a60:	89 d8                	mov    %ebx,%eax
 80a6a62:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a6a67:	c1 e8 08             	shr    $0x8,%eax
 80a6a6a:	89 d3                	mov    %edx,%ebx
 80a6a6c:	31 c3                	xor    %eax,%ebx
 80a6a6e:	31 f3                	xor    %esi,%ebx
 80a6a70:	31 fe                	xor    %edi,%esi
 80a6a72:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a6a75:	31 df                	xor    %ebx,%edi
 80a6a77:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6a7a:	31 f3                	xor    %esi,%ebx
 80a6a7c:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6a7f:	8b 00                	mov    (%eax),%eax
 80a6a81:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a6a84:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6a87:	83 c0 04             	add    $0x4,%eax
 80a6a8a:	8b 00                	mov    (%eax),%eax
 80a6a8c:	31 c3                	xor    %eax,%ebx
 80a6a8e:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6a91:	83 c0 08             	add    $0x8,%eax
 80a6a94:	8b 00                	mov    (%eax),%eax
 80a6a96:	31 c6                	xor    %eax,%esi
 80a6a98:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6a9b:	83 c0 0c             	add    $0xc,%eax
 80a6a9e:	8b 00                	mov    (%eax),%eax
 80a6aa0:	31 c7                	xor    %eax,%edi
 80a6aa2:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a6aa6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6aa9:	c1 e8 18             	shr    $0x18,%eax
 80a6aac:	0f b6 c0             	movzbl %al,%eax
 80a6aaf:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6ab6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6ab9:	c1 e8 10             	shr    $0x10,%eax
 80a6abc:	0f b6 c0             	movzbl %al,%eax
 80a6abf:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6ac6:	31 c2                	xor    %eax,%edx
 80a6ac8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6acb:	c1 e8 08             	shr    $0x8,%eax
 80a6ace:	0f b6 c0             	movzbl %al,%eax
 80a6ad1:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6ad8:	31 c2                	xor    %eax,%edx
 80a6ada:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a6ade:	0f b6 c0             	movzbl %al,%eax
 80a6ae1:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6ae8:	89 d1                	mov    %edx,%ecx
 80a6aea:	31 c1                	xor    %eax,%ecx
 80a6aec:	89 4d f0             	mov    %ecx,-0x10(%ebp)
 80a6aef:	89 d8                	mov    %ebx,%eax
 80a6af1:	c1 e8 18             	shr    $0x18,%eax
 80a6af4:	0f b6 c0             	movzbl %al,%eax
 80a6af7:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6afe:	89 d8                	mov    %ebx,%eax
 80a6b00:	c1 e8 10             	shr    $0x10,%eax
 80a6b03:	0f b6 c0             	movzbl %al,%eax
 80a6b06:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6b0d:	31 c2                	xor    %eax,%edx
 80a6b0f:	89 d8                	mov    %ebx,%eax
 80a6b11:	c1 e8 08             	shr    $0x8,%eax
 80a6b14:	0f b6 c0             	movzbl %al,%eax
 80a6b17:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6b1e:	31 c2                	xor    %eax,%edx
 80a6b20:	89 d8                	mov    %ebx,%eax
 80a6b22:	0f b6 c0             	movzbl %al,%eax
 80a6b25:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6b2c:	89 d3                	mov    %edx,%ebx
 80a6b2e:	31 c3                	xor    %eax,%ebx
 80a6b30:	89 f0                	mov    %esi,%eax
 80a6b32:	c1 e8 18             	shr    $0x18,%eax
 80a6b35:	0f b6 c0             	movzbl %al,%eax
 80a6b38:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6b3f:	89 f0                	mov    %esi,%eax
 80a6b41:	c1 e8 10             	shr    $0x10,%eax
 80a6b44:	0f b6 c0             	movzbl %al,%eax
 80a6b47:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6b4e:	31 c2                	xor    %eax,%edx
 80a6b50:	89 f0                	mov    %esi,%eax
 80a6b52:	c1 e8 08             	shr    $0x8,%eax
 80a6b55:	0f b6 c0             	movzbl %al,%eax
 80a6b58:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6b5f:	31 c2                	xor    %eax,%edx
 80a6b61:	89 f0                	mov    %esi,%eax
 80a6b63:	0f b6 c0             	movzbl %al,%eax
 80a6b66:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6b6d:	89 d6                	mov    %edx,%esi
 80a6b6f:	31 c6                	xor    %eax,%esi
 80a6b71:	89 f8                	mov    %edi,%eax
 80a6b73:	c1 e8 18             	shr    $0x18,%eax
 80a6b76:	0f b6 c0             	movzbl %al,%eax
 80a6b79:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6b80:	89 f8                	mov    %edi,%eax
 80a6b82:	c1 e8 10             	shr    $0x10,%eax
 80a6b85:	0f b6 c0             	movzbl %al,%eax
 80a6b88:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6b8f:	31 c2                	xor    %eax,%edx
 80a6b91:	89 f8                	mov    %edi,%eax
 80a6b93:	c1 e8 08             	shr    $0x8,%eax
 80a6b96:	0f b6 c0             	movzbl %al,%eax
 80a6b99:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6ba0:	31 c2                	xor    %eax,%edx
 80a6ba2:	89 f8                	mov    %edi,%eax
 80a6ba4:	0f b6 c0             	movzbl %al,%eax
 80a6ba7:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6bae:	89 d7                	mov    %edx,%edi
 80a6bb0:	31 c7                	xor    %eax,%edi
 80a6bb2:	31 f3                	xor    %esi,%ebx
 80a6bb4:	31 fe                	xor    %edi,%esi
 80a6bb6:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a6bb9:	31 df                	xor    %ebx,%edi
 80a6bbb:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6bbe:	31 f3                	xor    %esi,%ebx
 80a6bc0:	89 d8                	mov    %ebx,%eax
 80a6bc2:	c1 e0 08             	shl    $0x8,%eax
 80a6bc5:	89 c2                	mov    %eax,%edx
 80a6bc7:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a6bcd:	89 d8                	mov    %ebx,%eax
 80a6bcf:	c1 e8 08             	shr    $0x8,%eax
 80a6bd2:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a6bd7:	89 d3                	mov    %edx,%ebx
 80a6bd9:	31 c3                	xor    %eax,%ebx
 80a6bdb:	c1 ce 10             	ror    $0x10,%esi
 80a6bde:	89 fa                	mov    %edi,%edx
 80a6be0:	c1 e2 18             	shl    $0x18,%edx
 80a6be3:	89 f8                	mov    %edi,%eax
 80a6be5:	c1 e8 18             	shr    $0x18,%eax
 80a6be8:	31 c2                	xor    %eax,%edx
 80a6bea:	89 f8                	mov    %edi,%eax
 80a6bec:	25 00 ff 00 00       	and    $0xff00,%eax
 80a6bf1:	c1 e0 08             	shl    $0x8,%eax
 80a6bf4:	31 c2                	xor    %eax,%edx
 80a6bf6:	89 f8                	mov    %edi,%eax
 80a6bf8:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a6bfd:	c1 e8 08             	shr    $0x8,%eax
 80a6c00:	89 d7                	mov    %edx,%edi
 80a6c02:	31 c7                	xor    %eax,%edi
 80a6c04:	31 f3                	xor    %esi,%ebx
 80a6c06:	31 fe                	xor    %edi,%esi
 80a6c08:	31 5d f0             	xor    %ebx,-0x10(%ebp)
 80a6c0b:	31 df                	xor    %ebx,%edi
 80a6c0d:	33 75 f0             	xor    -0x10(%ebp),%esi
 80a6c10:	31 f3                	xor    %esi,%ebx
 80a6c12:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6c15:	8b 00                	mov    (%eax),%eax
 80a6c17:	31 45 f0             	xor    %eax,-0x10(%ebp)
 80a6c1a:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6c1d:	83 c0 04             	add    $0x4,%eax
 80a6c20:	8b 00                	mov    (%eax),%eax
 80a6c22:	31 c3                	xor    %eax,%ebx
 80a6c24:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6c27:	83 c0 08             	add    $0x8,%eax
 80a6c2a:	8b 00                	mov    (%eax),%eax
 80a6c2c:	31 c6                	xor    %eax,%esi
 80a6c2e:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6c31:	83 c0 0c             	add    $0xc,%eax
 80a6c34:	8b 00                	mov    (%eax),%eax
 80a6c36:	31 c7                	xor    %eax,%edi
 80a6c38:	83 45 10 10          	addl   $0x10,0x10(%ebp)
 80a6c3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6c3f:	c1 e8 18             	shr    $0x18,%eax
 80a6c42:	0f b6 c0             	movzbl %al,%eax
 80a6c45:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6c4c:	89 c2                	mov    %eax,%edx
 80a6c4e:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6c51:	88 10                	mov    %dl,(%eax)
 80a6c53:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6c56:	8d 50 01             	lea    0x1(%eax),%edx
 80a6c59:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6c5c:	c1 e8 10             	shr    $0x10,%eax
 80a6c5f:	0f b6 c0             	movzbl %al,%eax
 80a6c62:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6c69:	c1 e8 08             	shr    $0x8,%eax
 80a6c6c:	88 02                	mov    %al,(%edx)
 80a6c6e:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6c71:	8d 50 02             	lea    0x2(%eax),%edx
 80a6c74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a6c77:	c1 e8 08             	shr    $0x8,%eax
 80a6c7a:	0f b6 c0             	movzbl %al,%eax
 80a6c7d:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6c84:	88 02                	mov    %al,(%edx)
 80a6c86:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6c89:	8d 50 03             	lea    0x3(%eax),%edx
 80a6c8c:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 80a6c90:	0f b6 c0             	movzbl %al,%eax
 80a6c93:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6c9a:	88 02                	mov    %al,(%edx)
 80a6c9c:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6c9f:	8d 50 04             	lea    0x4(%eax),%edx
 80a6ca2:	89 d8                	mov    %ebx,%eax
 80a6ca4:	c1 e8 18             	shr    $0x18,%eax
 80a6ca7:	0f b6 c0             	movzbl %al,%eax
 80a6caa:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6cb1:	88 02                	mov    %al,(%edx)
 80a6cb3:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6cb6:	8d 50 05             	lea    0x5(%eax),%edx
 80a6cb9:	89 d8                	mov    %ebx,%eax
 80a6cbb:	c1 e8 10             	shr    $0x10,%eax
 80a6cbe:	0f b6 c0             	movzbl %al,%eax
 80a6cc1:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6cc8:	c1 e8 08             	shr    $0x8,%eax
 80a6ccb:	88 02                	mov    %al,(%edx)
 80a6ccd:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6cd0:	8d 50 06             	lea    0x6(%eax),%edx
 80a6cd3:	89 d8                	mov    %ebx,%eax
 80a6cd5:	c1 e8 08             	shr    $0x8,%eax
 80a6cd8:	0f b6 c0             	movzbl %al,%eax
 80a6cdb:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6ce2:	88 02                	mov    %al,(%edx)
 80a6ce4:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6ce7:	8d 50 07             	lea    0x7(%eax),%edx
 80a6cea:	89 d8                	mov    %ebx,%eax
 80a6cec:	0f b6 c0             	movzbl %al,%eax
 80a6cef:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6cf6:	88 02                	mov    %al,(%edx)
 80a6cf8:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6cfb:	8d 50 08             	lea    0x8(%eax),%edx
 80a6cfe:	89 f0                	mov    %esi,%eax
 80a6d00:	c1 e8 18             	shr    $0x18,%eax
 80a6d03:	0f b6 c0             	movzbl %al,%eax
 80a6d06:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6d0d:	88 02                	mov    %al,(%edx)
 80a6d0f:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6d12:	8d 50 09             	lea    0x9(%eax),%edx
 80a6d15:	89 f0                	mov    %esi,%eax
 80a6d17:	c1 e8 10             	shr    $0x10,%eax
 80a6d1a:	0f b6 c0             	movzbl %al,%eax
 80a6d1d:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6d24:	c1 e8 08             	shr    $0x8,%eax
 80a6d27:	88 02                	mov    %al,(%edx)
 80a6d29:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6d2c:	8d 50 0a             	lea    0xa(%eax),%edx
 80a6d2f:	89 f0                	mov    %esi,%eax
 80a6d31:	c1 e8 08             	shr    $0x8,%eax
 80a6d34:	0f b6 c0             	movzbl %al,%eax
 80a6d37:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6d3e:	88 02                	mov    %al,(%edx)
 80a6d40:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6d43:	8d 50 0b             	lea    0xb(%eax),%edx
 80a6d46:	89 f0                	mov    %esi,%eax
 80a6d48:	0f b6 c0             	movzbl %al,%eax
 80a6d4b:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6d52:	88 02                	mov    %al,(%edx)
 80a6d54:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6d57:	8d 50 0c             	lea    0xc(%eax),%edx
 80a6d5a:	89 f8                	mov    %edi,%eax
 80a6d5c:	c1 e8 18             	shr    $0x18,%eax
 80a6d5f:	0f b6 c0             	movzbl %al,%eax
 80a6d62:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6d69:	88 02                	mov    %al,(%edx)
 80a6d6b:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6d6e:	8d 50 0d             	lea    0xd(%eax),%edx
 80a6d71:	89 f8                	mov    %edi,%eax
 80a6d73:	c1 e8 10             	shr    $0x10,%eax
 80a6d76:	0f b6 c0             	movzbl %al,%eax
 80a6d79:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6d80:	c1 e8 08             	shr    $0x8,%eax
 80a6d83:	88 02                	mov    %al,(%edx)
 80a6d85:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6d88:	8d 50 0e             	lea    0xe(%eax),%edx
 80a6d8b:	89 f8                	mov    %edi,%eax
 80a6d8d:	c1 e8 08             	shr    $0x8,%eax
 80a6d90:	0f b6 c0             	movzbl %al,%eax
 80a6d93:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a6d9a:	88 02                	mov    %al,(%edx)
 80a6d9c:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6d9f:	8d 50 0f             	lea    0xf(%eax),%edx
 80a6da2:	89 f8                	mov    %edi,%eax
 80a6da4:	0f b6 c0             	movzbl %al,%eax
 80a6da7:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6dae:	88 02                	mov    %al,(%edx)
 80a6db0:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6db3:	8b 55 14             	mov    0x14(%ebp),%edx
 80a6db6:	8b 0a                	mov    (%edx),%ecx
 80a6db8:	8b 55 10             	mov    0x10(%ebp),%edx
 80a6dbb:	8b 12                	mov    (%edx),%edx
 80a6dbd:	31 ca                	xor    %ecx,%edx
 80a6dbf:	89 10                	mov    %edx,(%eax)
 80a6dc1:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6dc4:	83 c0 04             	add    $0x4,%eax
 80a6dc7:	8b 55 14             	mov    0x14(%ebp),%edx
 80a6dca:	83 c2 04             	add    $0x4,%edx
 80a6dcd:	8b 0a                	mov    (%edx),%ecx
 80a6dcf:	8b 55 10             	mov    0x10(%ebp),%edx
 80a6dd2:	83 c2 04             	add    $0x4,%edx
 80a6dd5:	8b 12                	mov    (%edx),%edx
 80a6dd7:	31 ca                	xor    %ecx,%edx
 80a6dd9:	89 10                	mov    %edx,(%eax)
 80a6ddb:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6dde:	83 c0 08             	add    $0x8,%eax
 80a6de1:	8b 55 14             	mov    0x14(%ebp),%edx
 80a6de4:	83 c2 08             	add    $0x8,%edx
 80a6de7:	8b 0a                	mov    (%edx),%ecx
 80a6de9:	8b 55 10             	mov    0x10(%ebp),%edx
 80a6dec:	83 c2 08             	add    $0x8,%edx
 80a6def:	8b 12                	mov    (%edx),%edx
 80a6df1:	31 ca                	xor    %ecx,%edx
 80a6df3:	89 10                	mov    %edx,(%eax)
 80a6df5:	8b 45 14             	mov    0x14(%ebp),%eax
 80a6df8:	83 c0 0c             	add    $0xc,%eax
 80a6dfb:	8b 55 14             	mov    0x14(%ebp),%edx
 80a6dfe:	83 c2 0c             	add    $0xc,%edx
 80a6e01:	8b 0a                	mov    (%edx),%ecx
 80a6e03:	8b 55 10             	mov    0x10(%ebp),%edx
 80a6e06:	83 c2 0c             	add    $0xc,%edx
 80a6e09:	8b 12                	mov    (%edx),%edx
 80a6e0b:	31 ca                	xor    %ecx,%edx
 80a6e0d:	89 10                	mov    %edx,(%eax)
 80a6e0f:	83 c4 04             	add    $0x4,%esp
 80a6e12:	5b                   	pop    %ebx
 80a6e13:	5e                   	pop    %esi
 80a6e14:	5f                   	pop    %edi
 80a6e15:	5d                   	pop    %ebp
 80a6e16:	c3                   	ret

```

```c
// ARIA::Crypt @ 0x80a5404

/* ARIA::Crypt(unsigned char const*, int, unsigned char const*, unsigned char*) */

void ARIA::Crypt(uchar *param_1,int param_2,uchar *param_3,uchar *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_14;
  
  local_14 = *(uint *)param_1;
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  if (0xc < param_2) {
    local_14 = local_14 ^ *(uint *)param_3;
    uVar1 = uVar1 ^ *(uint *)(param_3 + 4);
    uVar2 = uVar2 ^ *(uint *)(param_3 + 8);
    uVar4 = uVar4 ^ *(uint *)(param_3 + 0xc);
    uVar3 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
    uVar4 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4);
    uVar2 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar3;
    uVar1 = *(uint *)(S1 + (local_14 >> 0x18) * 4) ^ *(uint *)(S2 + (local_14 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (local_14 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (local_14 & 0xff) * 4) ^
            uVar2;
    uVar5 = uVar4 ^ uVar2;
    uVar4 = uVar3 ^ uVar4 ^ uVar1;
    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar5 = uVar5 << 0x18 ^ uVar5 >> 0x18 ^ (uVar5 & 0xff00) << 8 ^ (uVar5 & 0xff0000) >> 8;
    uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
    uVar1 = uVar1 ^ uVar2;
    uVar3 = uVar3 ^ uVar5 ^ uVar1;
    uVar1 = uVar1 ^ *(uint *)(param_3 + 0x10);
    uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x14);
    uVar3 = uVar3 ^ *(uint *)(param_3 + 0x18);
    uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x1c);
    param_3 = param_3 + 0x20;
    uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
    uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
    uVar4 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
    uVar2 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar4;
    uVar1 = uVar5 ^ uVar4;
    uVar3 = uVar3 ^ uVar5 ^ uVar2;
    uVar4 = uVar4 ^ uVar3;
    uVar5 = (uVar1 & 0xff00ff) << 8 ^ uVar1 >> 8 & 0xff00ff;
    uVar1 = uVar4 << 0x18 ^ uVar4 >> 0x18 ^ (uVar4 & 0xff00) << 8 ^ (uVar4 & 0xff0000) >> 8 ^ uVar3;
    local_14 = (uVar2 >> 0x10 | uVar2 << 0x10) ^ uVar1;
    uVar4 = uVar5 ^ uVar1;
    uVar2 = uVar3 ^ uVar5 ^ local_14;
    uVar1 = uVar1 ^ uVar2;
  }
  if (0xe < param_2) {
    local_14 = local_14 ^ *(uint *)param_3;
    uVar1 = uVar1 ^ *(uint *)(param_3 + 4);
    uVar2 = uVar2 ^ *(uint *)(param_3 + 8);
    uVar4 = uVar4 ^ *(uint *)(param_3 + 0xc);
    uVar3 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
    uVar4 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4);
    uVar2 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar3;
    uVar1 = *(uint *)(S1 + (local_14 >> 0x18) * 4) ^ *(uint *)(S2 + (local_14 >> 0x10 & 0xff) * 4) ^
            *(uint *)(X1 + (local_14 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (local_14 & 0xff) * 4) ^
            uVar2;
    uVar5 = uVar4 ^ uVar2;
    uVar4 = uVar3 ^ uVar4 ^ uVar1;
    uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar5 = uVar5 << 0x18 ^ uVar5 >> 0x18 ^ (uVar5 & 0xff00) << 8 ^ (uVar5 & 0xff0000) >> 8;
    uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
    uVar1 = uVar1 ^ uVar2;
    uVar3 = uVar3 ^ uVar5 ^ uVar1;
    uVar1 = uVar1 ^ *(uint *)(param_3 + 0x10);
    uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x14);
    uVar3 = uVar3 ^ *(uint *)(param_3 + 0x18);
    uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x1c);
    param_3 = param_3 + 0x20;
    uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
    uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
    uVar4 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
    uVar2 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar4;
    uVar1 = uVar5 ^ uVar4;
    uVar3 = uVar3 ^ uVar5 ^ uVar2;
    uVar4 = uVar4 ^ uVar3;
    uVar5 = (uVar1 & 0xff00ff) << 8 ^ uVar1 >> 8 & 0xff00ff;
    uVar1 = uVar4 << 0x18 ^ uVar4 >> 0x18 ^ (uVar4 & 0xff00) << 8 ^ (uVar4 & 0xff0000) >> 8 ^ uVar3;
    local_14 = (uVar2 >> 0x10 | uVar2 << 0x10) ^ uVar1;
    uVar4 = uVar5 ^ uVar1;
    uVar2 = uVar3 ^ uVar5 ^ local_14;
    uVar1 = uVar1 ^ uVar2;
  }
  local_14 = local_14 ^ *(uint *)param_3;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 4);
  uVar2 = uVar2 ^ *(uint *)(param_3 + 8);
  uVar4 = uVar4 ^ *(uint *)(param_3 + 0xc);
  uVar3 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar4 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (local_14 >> 0x18) * 4) ^ *(uint *)(S2 + (local_14 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (local_14 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (local_14 & 0xff) * 4) ^ uVar2
  ;
  uVar5 = uVar4 ^ uVar2;
  uVar4 = uVar3 ^ uVar4 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar5 << 0x18 ^ uVar5 >> 0x18 ^ (uVar5 & 0xff00) << 8 ^ (uVar5 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x10);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x14);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x18);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x1c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x20);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x24);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x28);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x2c);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x30);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x34);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x38);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x3c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x40);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x44);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x48);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x4c);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x50);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x54);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x58);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x5c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x60);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 100);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x68);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x6c);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x70);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x74);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x78);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x7c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x80);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x84);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x88);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x8c);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0x90);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0x94);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0x98);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0x9c);
  uVar3 = *(uint *)(X1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(X1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(X1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(X1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar2 = uVar2 ^ uVar4;
  uVar5 = (uVar6 & 0xff00ff) << 8 ^ uVar6 >> 8 & 0xff00ff;
  uVar2 = uVar2 << 0x18 ^ uVar2 >> 0x18 ^ (uVar2 & 0xff00) << 8 ^ (uVar2 & 0xff0000) >> 8 ^ uVar4;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) ^ uVar2;
  uVar3 = uVar4 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0xa0);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0xa4);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0xa8);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0xac);
  uVar3 = *(uint *)(S1 + (uVar3 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar3 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar3 & 0xff) * 4);
  uVar5 = *(uint *)(S1 + (uVar2 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar2 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar2 & 0xff) * 4);
  uVar2 = *(uint *)(S1 + (uVar4 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar4 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar4 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar4 & 0xff) * 4) ^ uVar3;
  uVar1 = *(uint *)(S1 + (uVar1 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar1 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar1 & 0xff) * 4) ^ uVar2;
  uVar6 = uVar5 ^ uVar2;
  uVar4 = uVar3 ^ uVar5 ^ uVar1;
  uVar3 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = uVar6 << 0x18 ^ uVar6 >> 0x18 ^ (uVar6 & 0xff00) << 8 ^ (uVar6 & 0xff0000) >> 8;
  uVar2 = ((uVar2 ^ uVar4) & 0xff00ff) << 8 ^ (uVar2 ^ uVar4) >> 8 & 0xff00ff ^ uVar3;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar5 ^ uVar1;
  uVar1 = uVar1 ^ *(uint *)(param_3 + 0xb0);
  uVar4 = uVar2 ^ uVar3 ^ *(uint *)(param_3 + 0xb4);
  uVar3 = uVar3 ^ *(uint *)(param_3 + 0xb8);
  uVar2 = uVar5 ^ uVar2 ^ *(uint *)(param_3 + 0xbc);
  *param_4 = (uchar)*(undefined4 *)(X1 + (uVar1 >> 0x18) * 4);
  param_4[1] = (uchar)((uint)*(undefined4 *)(X2 + (uVar1 >> 0x10 & 0xff) * 4) >> 8);
  param_4[2] = (uchar)*(undefined4 *)(S1 + (uVar1 >> 8 & 0xff) * 4);
  param_4[3] = (uchar)*(undefined4 *)(S2 + (uVar1 & 0xff) * 4);
  param_4[4] = (uchar)*(undefined4 *)(X1 + (uVar4 >> 0x18) * 4);
  param_4[5] = (uchar)((uint)*(undefined4 *)(X2 + (uVar4 >> 0x10 & 0xff) * 4) >> 8);
  param_4[6] = (uchar)*(undefined4 *)(S1 + (uVar4 >> 8 & 0xff) * 4);
  param_4[7] = (uchar)*(undefined4 *)(S2 + (uVar4 & 0xff) * 4);
  param_4[8] = (uchar)*(undefined4 *)(X1 + (uVar3 >> 0x18) * 4);
  param_4[9] = (uchar)((uint)*(undefined4 *)(X2 + (uVar3 >> 0x10 & 0xff) * 4) >> 8);
  param_4[10] = (uchar)*(undefined4 *)(S1 + (uVar3 >> 8 & 0xff) * 4);
  param_4[0xb] = (uchar)*(undefined4 *)(S2 + (uVar3 & 0xff) * 4);
  param_4[0xc] = (uchar)*(undefined4 *)(X1 + (uVar2 >> 0x18) * 4);
  param_4[0xd] = (uchar)((uint)*(undefined4 *)(X2 + (uVar2 >> 0x10 & 0xff) * 4) >> 8);
  param_4[0xe] = (uchar)*(undefined4 *)(S1 + (uVar2 >> 8 & 0xff) * 4);
  param_4[0xf] = (uchar)*(undefined4 *)(S2 + (uVar2 & 0xff) * 4);
  *(uint *)param_4 = *(uint *)(param_3 + 0xc0) ^ *(uint *)param_4;
  *(uint *)(param_4 + 4) = *(uint *)(param_3 + 0xc4) ^ *(uint *)(param_4 + 4);
  *(uint *)(param_4 + 8) = *(uint *)(param_3 + 200) ^ *(uint *)(param_4 + 8);
  *(uint *)(param_4 + 0xc) = *(uint *)(param_3 + 0xcc) ^ *(uint *)(param_4 + 0xc);
  return;
}

```

---

## DecKeySetup

```asm
// === 080a8f5d ARIA::DecKeySetup  [0x080a8f5d-0x80a956b] ===
 80a8f5d:	55                   	push   %ebp
 80a8f5e:	89 e5                	mov    %esp,%ebp
 80a8f60:	57                   	push   %edi
 80a8f61:	56                   	push   %esi
 80a8f62:	53                   	push   %ebx
 80a8f63:	83 ec 30             	sub    $0x30,%esp
 80a8f66:	8b 45 10             	mov    0x10(%ebp),%eax
 80a8f69:	89 44 24 08          	mov    %eax,0x8(%esp)
 80a8f6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8f70:	89 44 24 04          	mov    %eax,0x4(%esp)
 80a8f74:	8b 45 08             	mov    0x8(%ebp),%eax
 80a8f77:	89 04 24             	mov    %eax,(%esp)
 80a8f7a:	e8 98 de ff ff       	call   80a6e17 <_ZN4ARIA11EncKeySetupEPKhPhi>
 80a8f7f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80a8f82:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8f85:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80a8f88:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80a8f8b:	c1 e0 04             	shl    $0x4,%eax
 80a8f8e:	03 45 d8             	add    -0x28(%ebp),%eax
 80a8f91:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80a8f94:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a8f97:	8b 00                	mov    (%eax),%eax
 80a8f99:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80a8f9c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a8f9f:	83 c0 04             	add    $0x4,%eax
 80a8fa2:	8b 18                	mov    (%eax),%ebx
 80a8fa4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a8fa7:	83 c0 08             	add    $0x8,%eax
 80a8faa:	8b 30                	mov    (%eax),%esi
 80a8fac:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a8faf:	83 c0 0c             	add    $0xc,%eax
 80a8fb2:	8b 38                	mov    (%eax),%edi
 80a8fb4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a8fb7:	8b 10                	mov    (%eax),%edx
 80a8fb9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a8fbc:	89 10                	mov    %edx,(%eax)
 80a8fbe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a8fc1:	8d 50 04             	lea    0x4(%eax),%edx
 80a8fc4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a8fc7:	83 c0 04             	add    $0x4,%eax
 80a8fca:	8b 00                	mov    (%eax),%eax
 80a8fcc:	89 02                	mov    %eax,(%edx)
 80a8fce:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a8fd1:	8d 50 08             	lea    0x8(%eax),%edx
 80a8fd4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a8fd7:	83 c0 08             	add    $0x8,%eax
 80a8fda:	8b 00                	mov    (%eax),%eax
 80a8fdc:	89 02                	mov    %eax,(%edx)
 80a8fde:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a8fe1:	8d 50 0c             	lea    0xc(%eax),%edx
 80a8fe4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a8fe7:	83 c0 0c             	add    $0xc,%eax
 80a8fea:	8b 00                	mov    (%eax),%eax
 80a8fec:	89 02                	mov    %eax,(%edx)
 80a8fee:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a8ff1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80a8ff4:	89 10                	mov    %edx,(%eax)
 80a8ff6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a8ff9:	83 c0 04             	add    $0x4,%eax
 80a8ffc:	89 18                	mov    %ebx,(%eax)
 80a8ffe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9001:	83 c0 08             	add    $0x8,%eax
 80a9004:	89 30                	mov    %esi,(%eax)
 80a9006:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9009:	83 c0 0c             	add    $0xc,%eax
 80a900c:	89 38                	mov    %edi,(%eax)
 80a900e:	83 45 d8 10          	addl   $0x10,-0x28(%ebp)
 80a9012:	83 6d dc 10          	subl   $0x10,-0x24(%ebp)
 80a9016:	e9 82 03 00 00       	jmp    80a939d <_ZN4ARIA11DecKeySetupEPKhPhi+0x440>
 80a901b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a901e:	8b 00                	mov    (%eax),%eax
 80a9020:	89 c2                	mov    %eax,%edx
 80a9022:	c1 e2 08             	shl    $0x8,%edx
 80a9025:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9028:	8b 00                	mov    (%eax),%eax
 80a902a:	c1 e8 08             	shr    $0x8,%eax
 80a902d:	31 c2                	xor    %eax,%edx
 80a902f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9032:	8b 00                	mov    (%eax),%eax
 80a9034:	c1 e0 10             	shl    $0x10,%eax
 80a9037:	31 c2                	xor    %eax,%edx
 80a9039:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a903c:	8b 00                	mov    (%eax),%eax
 80a903e:	c1 e8 10             	shr    $0x10,%eax
 80a9041:	31 c2                	xor    %eax,%edx
 80a9043:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9046:	8b 00                	mov    (%eax),%eax
 80a9048:	c1 e0 18             	shl    $0x18,%eax
 80a904b:	31 c2                	xor    %eax,%edx
 80a904d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9050:	8b 00                	mov    (%eax),%eax
 80a9052:	c1 e8 18             	shr    $0x18,%eax
 80a9055:	89 d1                	mov    %edx,%ecx
 80a9057:	31 c1                	xor    %eax,%ecx
 80a9059:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 80a905c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a905f:	83 c0 04             	add    $0x4,%eax
 80a9062:	8b 00                	mov    (%eax),%eax
 80a9064:	89 c2                	mov    %eax,%edx
 80a9066:	c1 e2 08             	shl    $0x8,%edx
 80a9069:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a906c:	83 c0 04             	add    $0x4,%eax
 80a906f:	8b 00                	mov    (%eax),%eax
 80a9071:	c1 e8 08             	shr    $0x8,%eax
 80a9074:	31 c2                	xor    %eax,%edx
 80a9076:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9079:	83 c0 04             	add    $0x4,%eax
 80a907c:	8b 00                	mov    (%eax),%eax
 80a907e:	c1 e0 10             	shl    $0x10,%eax
 80a9081:	31 c2                	xor    %eax,%edx
 80a9083:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9086:	83 c0 04             	add    $0x4,%eax
 80a9089:	8b 00                	mov    (%eax),%eax
 80a908b:	c1 e8 10             	shr    $0x10,%eax
 80a908e:	31 c2                	xor    %eax,%edx
 80a9090:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9093:	83 c0 04             	add    $0x4,%eax
 80a9096:	8b 00                	mov    (%eax),%eax
 80a9098:	c1 e0 18             	shl    $0x18,%eax
 80a909b:	31 c2                	xor    %eax,%edx
 80a909d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a90a0:	83 c0 04             	add    $0x4,%eax
 80a90a3:	8b 00                	mov    (%eax),%eax
 80a90a5:	c1 e8 18             	shr    $0x18,%eax
 80a90a8:	89 d3                	mov    %edx,%ebx
 80a90aa:	31 c3                	xor    %eax,%ebx
 80a90ac:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a90af:	83 c0 08             	add    $0x8,%eax
 80a90b2:	8b 00                	mov    (%eax),%eax
 80a90b4:	89 c2                	mov    %eax,%edx
 80a90b6:	c1 e2 08             	shl    $0x8,%edx
 80a90b9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a90bc:	83 c0 08             	add    $0x8,%eax
 80a90bf:	8b 00                	mov    (%eax),%eax
 80a90c1:	c1 e8 08             	shr    $0x8,%eax
 80a90c4:	31 c2                	xor    %eax,%edx
 80a90c6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a90c9:	83 c0 08             	add    $0x8,%eax
 80a90cc:	8b 00                	mov    (%eax),%eax
 80a90ce:	c1 e0 10             	shl    $0x10,%eax
 80a90d1:	31 c2                	xor    %eax,%edx
 80a90d3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a90d6:	83 c0 08             	add    $0x8,%eax
 80a90d9:	8b 00                	mov    (%eax),%eax
 80a90db:	c1 e8 10             	shr    $0x10,%eax
 80a90de:	31 c2                	xor    %eax,%edx
 80a90e0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a90e3:	83 c0 08             	add    $0x8,%eax
 80a90e6:	8b 00                	mov    (%eax),%eax
 80a90e8:	c1 e0 18             	shl    $0x18,%eax
 80a90eb:	31 c2                	xor    %eax,%edx
 80a90ed:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a90f0:	83 c0 08             	add    $0x8,%eax
 80a90f3:	8b 00                	mov    (%eax),%eax
 80a90f5:	c1 e8 18             	shr    $0x18,%eax
 80a90f8:	89 d6                	mov    %edx,%esi
 80a90fa:	31 c6                	xor    %eax,%esi
 80a90fc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a90ff:	83 c0 0c             	add    $0xc,%eax
 80a9102:	8b 00                	mov    (%eax),%eax
 80a9104:	89 c2                	mov    %eax,%edx
 80a9106:	c1 e2 08             	shl    $0x8,%edx
 80a9109:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a910c:	83 c0 0c             	add    $0xc,%eax
 80a910f:	8b 00                	mov    (%eax),%eax
 80a9111:	c1 e8 08             	shr    $0x8,%eax
 80a9114:	31 c2                	xor    %eax,%edx
 80a9116:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9119:	83 c0 0c             	add    $0xc,%eax
 80a911c:	8b 00                	mov    (%eax),%eax
 80a911e:	c1 e0 10             	shl    $0x10,%eax
 80a9121:	31 c2                	xor    %eax,%edx
 80a9123:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9126:	83 c0 0c             	add    $0xc,%eax
 80a9129:	8b 00                	mov    (%eax),%eax
 80a912b:	c1 e8 10             	shr    $0x10,%eax
 80a912e:	31 c2                	xor    %eax,%edx
 80a9130:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9133:	83 c0 0c             	add    $0xc,%eax
 80a9136:	8b 00                	mov    (%eax),%eax
 80a9138:	c1 e0 18             	shl    $0x18,%eax
 80a913b:	31 c2                	xor    %eax,%edx
 80a913d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9140:	83 c0 0c             	add    $0xc,%eax
 80a9143:	8b 00                	mov    (%eax),%eax
 80a9145:	c1 e8 18             	shr    $0x18,%eax
 80a9148:	89 d7                	mov    %edx,%edi
 80a914a:	31 c7                	xor    %eax,%edi
 80a914c:	31 f3                	xor    %esi,%ebx
 80a914e:	31 fe                	xor    %edi,%esi
 80a9150:	31 5d d0             	xor    %ebx,-0x30(%ebp)
 80a9153:	31 df                	xor    %ebx,%edi
 80a9155:	33 75 d0             	xor    -0x30(%ebp),%esi
 80a9158:	31 f3                	xor    %esi,%ebx
 80a915a:	89 d8                	mov    %ebx,%eax
 80a915c:	c1 e0 08             	shl    $0x8,%eax
 80a915f:	89 c2                	mov    %eax,%edx
 80a9161:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a9167:	89 d8                	mov    %ebx,%eax
 80a9169:	c1 e8 08             	shr    $0x8,%eax
 80a916c:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a9171:	89 d3                	mov    %edx,%ebx
 80a9173:	31 c3                	xor    %eax,%ebx
 80a9175:	c1 ce 10             	ror    $0x10,%esi
 80a9178:	89 fa                	mov    %edi,%edx
 80a917a:	c1 e2 18             	shl    $0x18,%edx
 80a917d:	89 f8                	mov    %edi,%eax
 80a917f:	c1 e8 18             	shr    $0x18,%eax
 80a9182:	31 c2                	xor    %eax,%edx
 80a9184:	89 f8                	mov    %edi,%eax
 80a9186:	25 00 ff 00 00       	and    $0xff00,%eax
 80a918b:	c1 e0 08             	shl    $0x8,%eax
 80a918e:	31 c2                	xor    %eax,%edx
 80a9190:	89 f8                	mov    %edi,%eax
 80a9192:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a9197:	c1 e8 08             	shr    $0x8,%eax
 80a919a:	89 d7                	mov    %edx,%edi
 80a919c:	31 c7                	xor    %eax,%edi
 80a919e:	31 f3                	xor    %esi,%ebx
 80a91a0:	31 fe                	xor    %edi,%esi
 80a91a2:	31 5d d0             	xor    %ebx,-0x30(%ebp)
 80a91a5:	31 df                	xor    %ebx,%edi
 80a91a7:	33 75 d0             	xor    -0x30(%ebp),%esi
 80a91aa:	31 f3                	xor    %esi,%ebx
 80a91ac:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80a91af:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80a91b2:	89 5d e8             	mov    %ebx,-0x18(%ebp)
 80a91b5:	89 75 ec             	mov    %esi,-0x14(%ebp)
 80a91b8:	89 7d f0             	mov    %edi,-0x10(%ebp)
 80a91bb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a91be:	8b 00                	mov    (%eax),%eax
 80a91c0:	89 c2                	mov    %eax,%edx
 80a91c2:	c1 e2 08             	shl    $0x8,%edx
 80a91c5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a91c8:	8b 00                	mov    (%eax),%eax
 80a91ca:	c1 e8 08             	shr    $0x8,%eax
 80a91cd:	31 c2                	xor    %eax,%edx
 80a91cf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a91d2:	8b 00                	mov    (%eax),%eax
 80a91d4:	c1 e0 10             	shl    $0x10,%eax
 80a91d7:	31 c2                	xor    %eax,%edx
 80a91d9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a91dc:	8b 00                	mov    (%eax),%eax
 80a91de:	c1 e8 10             	shr    $0x10,%eax
 80a91e1:	31 c2                	xor    %eax,%edx
 80a91e3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a91e6:	8b 00                	mov    (%eax),%eax
 80a91e8:	c1 e0 18             	shl    $0x18,%eax
 80a91eb:	31 c2                	xor    %eax,%edx
 80a91ed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a91f0:	8b 00                	mov    (%eax),%eax
 80a91f2:	c1 e8 18             	shr    $0x18,%eax
 80a91f5:	89 d1                	mov    %edx,%ecx
 80a91f7:	31 c1                	xor    %eax,%ecx
 80a91f9:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 80a91fc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a91ff:	83 c0 04             	add    $0x4,%eax
 80a9202:	8b 00                	mov    (%eax),%eax
 80a9204:	89 c2                	mov    %eax,%edx
 80a9206:	c1 e2 08             	shl    $0x8,%edx
 80a9209:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a920c:	83 c0 04             	add    $0x4,%eax
 80a920f:	8b 00                	mov    (%eax),%eax
 80a9211:	c1 e8 08             	shr    $0x8,%eax
 80a9214:	31 c2                	xor    %eax,%edx
 80a9216:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9219:	83 c0 04             	add    $0x4,%eax
 80a921c:	8b 00                	mov    (%eax),%eax
 80a921e:	c1 e0 10             	shl    $0x10,%eax
 80a9221:	31 c2                	xor    %eax,%edx
 80a9223:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9226:	83 c0 04             	add    $0x4,%eax
 80a9229:	8b 00                	mov    (%eax),%eax
 80a922b:	c1 e8 10             	shr    $0x10,%eax
 80a922e:	31 c2                	xor    %eax,%edx
 80a9230:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9233:	83 c0 04             	add    $0x4,%eax
 80a9236:	8b 00                	mov    (%eax),%eax
 80a9238:	c1 e0 18             	shl    $0x18,%eax
 80a923b:	31 c2                	xor    %eax,%edx
 80a923d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9240:	83 c0 04             	add    $0x4,%eax
 80a9243:	8b 00                	mov    (%eax),%eax
 80a9245:	c1 e8 18             	shr    $0x18,%eax
 80a9248:	89 d3                	mov    %edx,%ebx
 80a924a:	31 c3                	xor    %eax,%ebx
 80a924c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a924f:	83 c0 08             	add    $0x8,%eax
 80a9252:	8b 00                	mov    (%eax),%eax
 80a9254:	89 c2                	mov    %eax,%edx
 80a9256:	c1 e2 08             	shl    $0x8,%edx
 80a9259:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a925c:	83 c0 08             	add    $0x8,%eax
 80a925f:	8b 00                	mov    (%eax),%eax
 80a9261:	c1 e8 08             	shr    $0x8,%eax
 80a9264:	31 c2                	xor    %eax,%edx
 80a9266:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9269:	83 c0 08             	add    $0x8,%eax
 80a926c:	8b 00                	mov    (%eax),%eax
 80a926e:	c1 e0 10             	shl    $0x10,%eax
 80a9271:	31 c2                	xor    %eax,%edx
 80a9273:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9276:	83 c0 08             	add    $0x8,%eax
 80a9279:	8b 00                	mov    (%eax),%eax
 80a927b:	c1 e8 10             	shr    $0x10,%eax
 80a927e:	31 c2                	xor    %eax,%edx
 80a9280:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9283:	83 c0 08             	add    $0x8,%eax
 80a9286:	8b 00                	mov    (%eax),%eax
 80a9288:	c1 e0 18             	shl    $0x18,%eax
 80a928b:	31 c2                	xor    %eax,%edx
 80a928d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9290:	83 c0 08             	add    $0x8,%eax
 80a9293:	8b 00                	mov    (%eax),%eax
 80a9295:	c1 e8 18             	shr    $0x18,%eax
 80a9298:	89 d6                	mov    %edx,%esi
 80a929a:	31 c6                	xor    %eax,%esi
 80a929c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a929f:	83 c0 0c             	add    $0xc,%eax
 80a92a2:	8b 00                	mov    (%eax),%eax
 80a92a4:	89 c2                	mov    %eax,%edx
 80a92a6:	c1 e2 08             	shl    $0x8,%edx
 80a92a9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a92ac:	83 c0 0c             	add    $0xc,%eax
 80a92af:	8b 00                	mov    (%eax),%eax
 80a92b1:	c1 e8 08             	shr    $0x8,%eax
 80a92b4:	31 c2                	xor    %eax,%edx
 80a92b6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a92b9:	83 c0 0c             	add    $0xc,%eax
 80a92bc:	8b 00                	mov    (%eax),%eax
 80a92be:	c1 e0 10             	shl    $0x10,%eax
 80a92c1:	31 c2                	xor    %eax,%edx
 80a92c3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a92c6:	83 c0 0c             	add    $0xc,%eax
 80a92c9:	8b 00                	mov    (%eax),%eax
 80a92cb:	c1 e8 10             	shr    $0x10,%eax
 80a92ce:	31 c2                	xor    %eax,%edx
 80a92d0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a92d3:	83 c0 0c             	add    $0xc,%eax
 80a92d6:	8b 00                	mov    (%eax),%eax
 80a92d8:	c1 e0 18             	shl    $0x18,%eax
 80a92db:	31 c2                	xor    %eax,%edx
 80a92dd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a92e0:	83 c0 0c             	add    $0xc,%eax
 80a92e3:	8b 00                	mov    (%eax),%eax
 80a92e5:	c1 e8 18             	shr    $0x18,%eax
 80a92e8:	89 d7                	mov    %edx,%edi
 80a92ea:	31 c7                	xor    %eax,%edi
 80a92ec:	31 f3                	xor    %esi,%ebx
 80a92ee:	31 fe                	xor    %edi,%esi
 80a92f0:	31 5d d0             	xor    %ebx,-0x30(%ebp)
 80a92f3:	31 df                	xor    %ebx,%edi
 80a92f5:	33 75 d0             	xor    -0x30(%ebp),%esi
 80a92f8:	31 f3                	xor    %esi,%ebx
 80a92fa:	89 d8                	mov    %ebx,%eax
 80a92fc:	c1 e0 08             	shl    $0x8,%eax
 80a92ff:	89 c2                	mov    %eax,%edx
 80a9301:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a9307:	89 d8                	mov    %ebx,%eax
 80a9309:	c1 e8 08             	shr    $0x8,%eax
 80a930c:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a9311:	89 d3                	mov    %edx,%ebx
 80a9313:	31 c3                	xor    %eax,%ebx
 80a9315:	c1 ce 10             	ror    $0x10,%esi
 80a9318:	89 fa                	mov    %edi,%edx
 80a931a:	c1 e2 18             	shl    $0x18,%edx
 80a931d:	89 f8                	mov    %edi,%eax
 80a931f:	c1 e8 18             	shr    $0x18,%eax
 80a9322:	31 c2                	xor    %eax,%edx
 80a9324:	89 f8                	mov    %edi,%eax
 80a9326:	25 00 ff 00 00       	and    $0xff00,%eax
 80a932b:	c1 e0 08             	shl    $0x8,%eax
 80a932e:	31 c2                	xor    %eax,%edx
 80a9330:	89 f8                	mov    %edi,%eax
 80a9332:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a9337:	c1 e8 08             	shr    $0x8,%eax
 80a933a:	89 d7                	mov    %edx,%edi
 80a933c:	31 c7                	xor    %eax,%edi
 80a933e:	31 f3                	xor    %esi,%ebx
 80a9340:	31 fe                	xor    %edi,%esi
 80a9342:	31 5d d0             	xor    %ebx,-0x30(%ebp)
 80a9345:	31 df                	xor    %ebx,%edi
 80a9347:	33 75 d0             	xor    -0x30(%ebp),%esi
 80a934a:	31 f3                	xor    %esi,%ebx
 80a934c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a934f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80a9352:	89 10                	mov    %edx,(%eax)
 80a9354:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9357:	83 c0 04             	add    $0x4,%eax
 80a935a:	89 18                	mov    %ebx,(%eax)
 80a935c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a935f:	83 c0 08             	add    $0x8,%eax
 80a9362:	89 30                	mov    %esi,(%eax)
 80a9364:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9367:	83 c0 0c             	add    $0xc,%eax
 80a936a:	89 38                	mov    %edi,(%eax)
 80a936c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a936f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80a9372:	89 10                	mov    %edx,(%eax)
 80a9374:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9377:	8d 50 04             	lea    0x4(%eax),%edx
 80a937a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80a937d:	89 02                	mov    %eax,(%edx)
 80a937f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9382:	8d 50 08             	lea    0x8(%eax),%edx
 80a9385:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a9388:	89 02                	mov    %eax,(%edx)
 80a938a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a938d:	8d 50 0c             	lea    0xc(%eax),%edx
 80a9390:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a9393:	89 02                	mov    %eax,(%edx)
 80a9395:	83 45 d8 10          	addl   $0x10,-0x28(%ebp)
 80a9399:	83 6d dc 10          	subl   $0x10,-0x24(%ebp)
 80a939d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93a0:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 80a93a3:	0f 92 c0             	setb   %al
 80a93a6:	84 c0                	test   %al,%al
 80a93a8:	0f 85 6d fc ff ff    	jne    80a901b <_ZN4ARIA11DecKeySetupEPKhPhi+0xbe>
 80a93ae:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93b1:	8b 00                	mov    (%eax),%eax
 80a93b3:	89 c2                	mov    %eax,%edx
 80a93b5:	c1 e2 08             	shl    $0x8,%edx
 80a93b8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93bb:	8b 00                	mov    (%eax),%eax
 80a93bd:	c1 e8 08             	shr    $0x8,%eax
 80a93c0:	31 c2                	xor    %eax,%edx
 80a93c2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93c5:	8b 00                	mov    (%eax),%eax
 80a93c7:	c1 e0 10             	shl    $0x10,%eax
 80a93ca:	31 c2                	xor    %eax,%edx
 80a93cc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93cf:	8b 00                	mov    (%eax),%eax
 80a93d1:	c1 e8 10             	shr    $0x10,%eax
 80a93d4:	31 c2                	xor    %eax,%edx
 80a93d6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93d9:	8b 00                	mov    (%eax),%eax
 80a93db:	c1 e0 18             	shl    $0x18,%eax
 80a93de:	31 c2                	xor    %eax,%edx
 80a93e0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93e3:	8b 00                	mov    (%eax),%eax
 80a93e5:	c1 e8 18             	shr    $0x18,%eax
 80a93e8:	89 d1                	mov    %edx,%ecx
 80a93ea:	31 c1                	xor    %eax,%ecx
 80a93ec:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 80a93ef:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93f2:	83 c0 04             	add    $0x4,%eax
 80a93f5:	8b 00                	mov    (%eax),%eax
 80a93f7:	89 c2                	mov    %eax,%edx
 80a93f9:	c1 e2 08             	shl    $0x8,%edx
 80a93fc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a93ff:	83 c0 04             	add    $0x4,%eax
 80a9402:	8b 00                	mov    (%eax),%eax
 80a9404:	c1 e8 08             	shr    $0x8,%eax
 80a9407:	31 c2                	xor    %eax,%edx
 80a9409:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a940c:	83 c0 04             	add    $0x4,%eax
 80a940f:	8b 00                	mov    (%eax),%eax
 80a9411:	c1 e0 10             	shl    $0x10,%eax
 80a9414:	31 c2                	xor    %eax,%edx
 80a9416:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9419:	83 c0 04             	add    $0x4,%eax
 80a941c:	8b 00                	mov    (%eax),%eax
 80a941e:	c1 e8 10             	shr    $0x10,%eax
 80a9421:	31 c2                	xor    %eax,%edx
 80a9423:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9426:	83 c0 04             	add    $0x4,%eax
 80a9429:	8b 00                	mov    (%eax),%eax
 80a942b:	c1 e0 18             	shl    $0x18,%eax
 80a942e:	31 c2                	xor    %eax,%edx
 80a9430:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9433:	83 c0 04             	add    $0x4,%eax
 80a9436:	8b 00                	mov    (%eax),%eax
 80a9438:	c1 e8 18             	shr    $0x18,%eax
 80a943b:	89 d3                	mov    %edx,%ebx
 80a943d:	31 c3                	xor    %eax,%ebx
 80a943f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9442:	83 c0 08             	add    $0x8,%eax
 80a9445:	8b 00                	mov    (%eax),%eax
 80a9447:	89 c2                	mov    %eax,%edx
 80a9449:	c1 e2 08             	shl    $0x8,%edx
 80a944c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a944f:	83 c0 08             	add    $0x8,%eax
 80a9452:	8b 00                	mov    (%eax),%eax
 80a9454:	c1 e8 08             	shr    $0x8,%eax
 80a9457:	31 c2                	xor    %eax,%edx
 80a9459:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a945c:	83 c0 08             	add    $0x8,%eax
 80a945f:	8b 00                	mov    (%eax),%eax
 80a9461:	c1 e0 10             	shl    $0x10,%eax
 80a9464:	31 c2                	xor    %eax,%edx
 80a9466:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9469:	83 c0 08             	add    $0x8,%eax
 80a946c:	8b 00                	mov    (%eax),%eax
 80a946e:	c1 e8 10             	shr    $0x10,%eax
 80a9471:	31 c2                	xor    %eax,%edx
 80a9473:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9476:	83 c0 08             	add    $0x8,%eax
 80a9479:	8b 00                	mov    (%eax),%eax
 80a947b:	c1 e0 18             	shl    $0x18,%eax
 80a947e:	31 c2                	xor    %eax,%edx
 80a9480:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9483:	83 c0 08             	add    $0x8,%eax
 80a9486:	8b 00                	mov    (%eax),%eax
 80a9488:	c1 e8 18             	shr    $0x18,%eax
 80a948b:	89 d6                	mov    %edx,%esi
 80a948d:	31 c6                	xor    %eax,%esi
 80a948f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a9492:	83 c0 0c             	add    $0xc,%eax
 80a9495:	8b 00                	mov    (%eax),%eax
 80a9497:	89 c2                	mov    %eax,%edx
 80a9499:	c1 e2 08             	shl    $0x8,%edx
 80a949c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a949f:	83 c0 0c             	add    $0xc,%eax
 80a94a2:	8b 00                	mov    (%eax),%eax
 80a94a4:	c1 e8 08             	shr    $0x8,%eax
 80a94a7:	31 c2                	xor    %eax,%edx
 80a94a9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a94ac:	83 c0 0c             	add    $0xc,%eax
 80a94af:	8b 00                	mov    (%eax),%eax
 80a94b1:	c1 e0 10             	shl    $0x10,%eax
 80a94b4:	31 c2                	xor    %eax,%edx
 80a94b6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a94b9:	83 c0 0c             	add    $0xc,%eax
 80a94bc:	8b 00                	mov    (%eax),%eax
 80a94be:	c1 e8 10             	shr    $0x10,%eax
 80a94c1:	31 c2                	xor    %eax,%edx
 80a94c3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a94c6:	83 c0 0c             	add    $0xc,%eax
 80a94c9:	8b 00                	mov    (%eax),%eax
 80a94cb:	c1 e0 18             	shl    $0x18,%eax
 80a94ce:	31 c2                	xor    %eax,%edx
 80a94d0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a94d3:	83 c0 0c             	add    $0xc,%eax
 80a94d6:	8b 00                	mov    (%eax),%eax
 80a94d8:	c1 e8 18             	shr    $0x18,%eax
 80a94db:	89 d7                	mov    %edx,%edi
 80a94dd:	31 c7                	xor    %eax,%edi
 80a94df:	31 f3                	xor    %esi,%ebx
 80a94e1:	31 fe                	xor    %edi,%esi
 80a94e3:	31 5d d0             	xor    %ebx,-0x30(%ebp)
 80a94e6:	31 df                	xor    %ebx,%edi
 80a94e8:	33 75 d0             	xor    -0x30(%ebp),%esi
 80a94eb:	31 f3                	xor    %esi,%ebx
 80a94ed:	89 d8                	mov    %ebx,%eax
 80a94ef:	c1 e0 08             	shl    $0x8,%eax
 80a94f2:	89 c2                	mov    %eax,%edx
 80a94f4:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a94fa:	89 d8                	mov    %ebx,%eax
 80a94fc:	c1 e8 08             	shr    $0x8,%eax
 80a94ff:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a9504:	89 d3                	mov    %edx,%ebx
 80a9506:	31 c3                	xor    %eax,%ebx
 80a9508:	c1 ce 10             	ror    $0x10,%esi
 80a950b:	89 fa                	mov    %edi,%edx
 80a950d:	c1 e2 18             	shl    $0x18,%edx
 80a9510:	89 f8                	mov    %edi,%eax
 80a9512:	c1 e8 18             	shr    $0x18,%eax
 80a9515:	31 c2                	xor    %eax,%edx
 80a9517:	89 f8                	mov    %edi,%eax
 80a9519:	25 00 ff 00 00       	and    $0xff00,%eax
 80a951e:	c1 e0 08             	shl    $0x8,%eax
 80a9521:	31 c2                	xor    %eax,%edx
 80a9523:	89 f8                	mov    %edi,%eax
 80a9525:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a952a:	c1 e8 08             	shr    $0x8,%eax
 80a952d:	89 d7                	mov    %edx,%edi
 80a952f:	31 c7                	xor    %eax,%edi
 80a9531:	31 f3                	xor    %esi,%ebx
 80a9533:	31 fe                	xor    %edi,%esi
 80a9535:	31 5d d0             	xor    %ebx,-0x30(%ebp)
 80a9538:	31 df                	xor    %ebx,%edi
 80a953a:	33 75 d0             	xor    -0x30(%ebp),%esi
 80a953d:	31 f3                	xor    %esi,%ebx
 80a953f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9542:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80a9545:	89 10                	mov    %edx,(%eax)
 80a9547:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a954a:	83 c0 04             	add    $0x4,%eax
 80a954d:	89 18                	mov    %ebx,(%eax)
 80a954f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a9552:	83 c0 08             	add    $0x8,%eax
 80a9555:	89 30                	mov    %esi,(%eax)
 80a9557:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a955a:	83 c0 0c             	add    $0xc,%eax
 80a955d:	89 38                	mov    %edi,(%eax)
 80a955f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80a9562:	83 c4 30             	add    $0x30,%esp
 80a9565:	5b                   	pop    %ebx
 80a9566:	5e                   	pop    %esi
 80a9567:	5f                   	pop    %edi
 80a9568:	5d                   	pop    %ebp
 80a9569:	c3                   	ret
 80a956a:	90                   	nop
 80a956b:	90                   	nop

```

```c
// ARIA::DecKeySetup @ 0x80a8f5d

/* ARIA::DecKeySetup(unsigned char const*, unsigned char*, int) */

int ARIA::DecKeySetup(uchar *param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *local_2c;
  uint *local_28;
  
  iVar2 = EncKeySetup(param_1,param_2,param_3);
  puVar3 = (uint *)(param_2 + iVar2 * 0x10);
  uVar1 = *(uint *)param_2;
  uVar4 = *(uint *)(param_2 + 4);
  uVar6 = *(uint *)(param_2 + 8);
  uVar10 = *(uint *)(param_2 + 0xc);
  *(uint *)param_2 = *puVar3;
  *(uint *)(param_2 + 4) = puVar3[1];
  *(uint *)(param_2 + 8) = puVar3[2];
  *(uint *)(param_2 + 0xc) = puVar3[3];
  *puVar3 = uVar1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar6;
  puVar3[3] = uVar10;
  while (local_28 = puVar3 + -4, local_2c = (uint *)((int)param_2 + 0x10), local_2c < local_28) {
    uVar6 = *(uint *)((int)param_2 + 0x18) << 8 ^ *(uint *)((int)param_2 + 0x18) >> 8 ^
            *(uint *)((int)param_2 + 0x18) << 0x10 ^ *(uint *)((int)param_2 + 0x18) >> 0x10 ^
            *(uint *)((int)param_2 + 0x18) << 0x18 ^ *(uint *)((int)param_2 + 0x18) >> 0x18;
    uVar10 = *(uint *)((int)param_2 + 0x1c) << 8 ^ *(uint *)((int)param_2 + 0x1c) >> 8 ^
             *(uint *)((int)param_2 + 0x1c) << 0x10 ^ *(uint *)((int)param_2 + 0x1c) >> 0x10 ^
             *(uint *)((int)param_2 + 0x1c) << 0x18 ^ *(uint *)((int)param_2 + 0x1c) >> 0x18;
    uVar4 = *(uint *)((int)param_2 + 0x14) << 8 ^ *(uint *)((int)param_2 + 0x14) >> 8 ^
            *(uint *)((int)param_2 + 0x14) << 0x10 ^ *(uint *)((int)param_2 + 0x14) >> 0x10 ^
            *(uint *)((int)param_2 + 0x14) << 0x18 ^ *(uint *)((int)param_2 + 0x14) >> 0x18 ^ uVar6;
    uVar1 = *local_2c << 8 ^ *local_2c >> 8 ^ *local_2c << 0x10 ^ *local_2c >> 0x10 ^
            *local_2c << 0x18 ^ *local_2c >> 0x18 ^ uVar4;
    uVar11 = uVar10 ^ uVar4;
    uVar6 = uVar6 ^ uVar10 ^ uVar1;
    uVar10 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar7 = uVar11 << 0x18 ^ uVar11 >> 0x18 ^ (uVar11 & 0xff00) << 8 ^ (uVar11 & 0xff0000) >> 8;
    uVar6 = ((uVar4 ^ uVar6) & 0xff00ff) << 8 ^ (uVar4 ^ uVar6) >> 8 & 0xff00ff ^ uVar10;
    uVar1 = uVar1 ^ uVar6;
    uVar11 = uVar10 ^ uVar7 ^ uVar1;
    uVar5 = puVar3[-2] << 8 ^ puVar3[-2] >> 8 ^ puVar3[-2] << 0x10 ^ puVar3[-2] >> 0x10 ^
            puVar3[-2] << 0x18 ^ puVar3[-2] >> 0x18;
    uVar8 = puVar3[-1] << 8 ^ puVar3[-1] >> 8 ^ puVar3[-1] << 0x10 ^ puVar3[-1] >> 0x10 ^
            puVar3[-1] << 0x18 ^ puVar3[-1] >> 0x18;
    uVar10 = puVar3[-3] << 8 ^ puVar3[-3] >> 8 ^ puVar3[-3] << 0x10 ^ puVar3[-3] >> 0x10 ^
             puVar3[-3] << 0x18 ^ puVar3[-3] >> 0x18 ^ uVar5;
    uVar4 = *local_28 << 8 ^ *local_28 >> 8 ^ *local_28 << 0x10 ^ *local_28 >> 0x10 ^
            *local_28 << 0x18 ^ *local_28 >> 0x18 ^ uVar10;
    uVar9 = uVar8 ^ uVar10;
    uVar5 = uVar5 ^ uVar8 ^ uVar4;
    uVar8 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar9 = uVar9 << 0x18 ^ uVar9 >> 0x18 ^ (uVar9 & 0xff00) << 8 ^ (uVar9 & 0xff0000) >> 8;
    uVar10 = ((uVar10 ^ uVar5) & 0xff00ff) << 8 ^ (uVar10 ^ uVar5) >> 8 & 0xff00ff ^ uVar8;
    uVar4 = uVar4 ^ uVar10;
    uVar5 = uVar8 ^ uVar9 ^ uVar4;
    *local_2c = uVar4;
    *(uint *)((int)param_2 + 0x14) = uVar10 ^ uVar5;
    *(uint *)((int)param_2 + 0x18) = uVar5;
    *(uint *)((int)param_2 + 0x1c) = uVar9 ^ uVar10;
    *local_28 = uVar1;
    puVar3[-3] = uVar6 ^ uVar11;
    puVar3[-2] = uVar11;
    puVar3[-1] = uVar7 ^ uVar6;
    param_2 = (uchar *)local_2c;
    puVar3 = local_28;
  }
  uVar6 = *(uint *)((int)param_2 + 0x18) << 8 ^ *(uint *)((int)param_2 + 0x18) >> 8 ^
          *(uint *)((int)param_2 + 0x18) << 0x10 ^ *(uint *)((int)param_2 + 0x18) >> 0x10 ^
          *(uint *)((int)param_2 + 0x18) << 0x18 ^ *(uint *)((int)param_2 + 0x18) >> 0x18;
  uVar10 = *(uint *)((int)param_2 + 0x1c) << 8 ^ *(uint *)((int)param_2 + 0x1c) >> 8 ^
           *(uint *)((int)param_2 + 0x1c) << 0x10 ^ *(uint *)((int)param_2 + 0x1c) >> 0x10 ^
           *(uint *)((int)param_2 + 0x1c) << 0x18 ^ *(uint *)((int)param_2 + 0x1c) >> 0x18;
  uVar4 = *(uint *)((int)param_2 + 0x14) << 8 ^ *(uint *)((int)param_2 + 0x14) >> 8 ^
          *(uint *)((int)param_2 + 0x14) << 0x10 ^ *(uint *)((int)param_2 + 0x14) >> 0x10 ^
          *(uint *)((int)param_2 + 0x14) << 0x18 ^ *(uint *)((int)param_2 + 0x14) >> 0x18 ^ uVar6;
  uVar1 = *local_2c << 8 ^ *local_2c >> 8 ^ *local_2c << 0x10 ^ *local_2c >> 0x10 ^
          *local_2c << 0x18 ^ *local_2c >> 0x18 ^ uVar4;
  uVar11 = uVar10 ^ uVar4;
  uVar6 = uVar6 ^ uVar10 ^ uVar1;
  uVar10 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar11 = uVar11 << 0x18 ^ uVar11 >> 0x18 ^ (uVar11 & 0xff00) << 8 ^ (uVar11 & 0xff0000) >> 8;
  uVar4 = ((uVar4 ^ uVar6) & 0xff00ff) << 8 ^ (uVar4 ^ uVar6) >> 8 & 0xff00ff ^ uVar10;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = uVar10 ^ uVar11 ^ uVar1;
  *local_28 = uVar1;
  puVar3[-3] = uVar4 ^ uVar6;
  puVar3[-2] = uVar6;
  puVar3[-1] = uVar11 ^ uVar4;
  return iVar2;
}

```

---

## EncKeySetup

```asm
// === 080a6e17 ARIA::EncKeySetup  [0x080a6e17-0x80a8f5c] ===
 80a6e17:	55                   	push   %ebp
 80a6e18:	89 e5                	mov    %esp,%ebp
 80a6e1a:	57                   	push   %edi
 80a6e1b:	56                   	push   %esi
 80a6e1c:	53                   	push   %ebx
 80a6e1d:	83 ec 54             	sub    $0x54,%esp
 80a6e20:	8b 45 08             	mov    0x8(%ebp),%eax
 80a6e23:	8b 00                	mov    (%eax),%eax
 80a6e25:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80a6e28:	8b 45 08             	mov    0x8(%ebp),%eax
 80a6e2b:	83 c0 04             	add    $0x4,%eax
 80a6e2e:	8b 00                	mov    (%eax),%eax
 80a6e30:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80a6e33:	8b 45 08             	mov    0x8(%ebp),%eax
 80a6e36:	83 c0 08             	add    $0x8,%eax
 80a6e39:	8b 00                	mov    (%eax),%eax
 80a6e3b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80a6e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 80a6e41:	83 c0 0c             	add    $0xc,%eax
 80a6e44:	8b 00                	mov    (%eax),%eax
 80a6e46:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80a6e49:	8b 45 10             	mov    0x10(%ebp),%eax
 80a6e4c:	83 c0 80             	add    $0xffffff80,%eax
 80a6e4f:	89 c2                	mov    %eax,%edx
 80a6e51:	c1 fa 1f             	sar    $0x1f,%edx
 80a6e54:	c1 ea 1a             	shr    $0x1a,%edx
 80a6e57:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80a6e5a:	c1 f8 06             	sar    $0x6,%eax
 80a6e5d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80a6e60:	8b 55 dc             	mov    -0x24(%ebp),%edx
 80a6e63:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a6e66:	c1 e0 04             	shl    $0x4,%eax
 80a6e69:	8b 80 00 55 b1 08    	mov    0x8b15500(%eax),%eax
 80a6e6f:	89 d1                	mov    %edx,%ecx
 80a6e71:	31 c1                	xor    %eax,%ecx
 80a6e73:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 80a6e76:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80a6e79:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a6e7c:	c1 e0 02             	shl    $0x2,%eax
 80a6e7f:	83 c0 01             	add    $0x1,%eax
 80a6e82:	8b 04 85 00 55 b1 08 	mov    0x8b15500(,%eax,4),%eax
 80a6e89:	89 d3                	mov    %edx,%ebx
 80a6e8b:	31 c3                	xor    %eax,%ebx
 80a6e8d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80a6e90:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a6e93:	01 c0                	add    %eax,%eax
 80a6e95:	83 c0 01             	add    $0x1,%eax
 80a6e98:	8b 04 c5 00 55 b1 08 	mov    0x8b15500(,%eax,8),%eax
 80a6e9f:	89 d6                	mov    %edx,%esi
 80a6ea1:	31 c6                	xor    %eax,%esi
 80a6ea3:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80a6ea6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a6ea9:	c1 e0 04             	shl    $0x4,%eax
 80a6eac:	8b 80 0c 55 b1 08    	mov    0x8b1550c(%eax),%eax
 80a6eb2:	89 d7                	mov    %edx,%edi
 80a6eb4:	31 c7                	xor    %eax,%edi
 80a6eb6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a6eb9:	c1 e8 18             	shr    $0x18,%eax
 80a6ebc:	0f b6 c0             	movzbl %al,%eax
 80a6ebf:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6ec6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a6ec9:	c1 e8 10             	shr    $0x10,%eax
 80a6ecc:	0f b6 c0             	movzbl %al,%eax
 80a6ecf:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6ed6:	31 c2                	xor    %eax,%edx
 80a6ed8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a6edb:	c1 e8 08             	shr    $0x8,%eax
 80a6ede:	0f b6 c0             	movzbl %al,%eax
 80a6ee1:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6ee8:	31 c2                	xor    %eax,%edx
 80a6eea:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 80a6eee:	0f b6 c0             	movzbl %al,%eax
 80a6ef1:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6ef8:	89 d1                	mov    %edx,%ecx
 80a6efa:	31 c1                	xor    %eax,%ecx
 80a6efc:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 80a6eff:	89 d8                	mov    %ebx,%eax
 80a6f01:	c1 e8 18             	shr    $0x18,%eax
 80a6f04:	0f b6 c0             	movzbl %al,%eax
 80a6f07:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6f0e:	89 d8                	mov    %ebx,%eax
 80a6f10:	c1 e8 10             	shr    $0x10,%eax
 80a6f13:	0f b6 c0             	movzbl %al,%eax
 80a6f16:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6f1d:	31 c2                	xor    %eax,%edx
 80a6f1f:	89 d8                	mov    %ebx,%eax
 80a6f21:	c1 e8 08             	shr    $0x8,%eax
 80a6f24:	0f b6 c0             	movzbl %al,%eax
 80a6f27:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6f2e:	31 c2                	xor    %eax,%edx
 80a6f30:	89 d8                	mov    %ebx,%eax
 80a6f32:	0f b6 c0             	movzbl %al,%eax
 80a6f35:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6f3c:	89 d3                	mov    %edx,%ebx
 80a6f3e:	31 c3                	xor    %eax,%ebx
 80a6f40:	89 f0                	mov    %esi,%eax
 80a6f42:	c1 e8 18             	shr    $0x18,%eax
 80a6f45:	0f b6 c0             	movzbl %al,%eax
 80a6f48:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6f4f:	89 f0                	mov    %esi,%eax
 80a6f51:	c1 e8 10             	shr    $0x10,%eax
 80a6f54:	0f b6 c0             	movzbl %al,%eax
 80a6f57:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6f5e:	31 c2                	xor    %eax,%edx
 80a6f60:	89 f0                	mov    %esi,%eax
 80a6f62:	c1 e8 08             	shr    $0x8,%eax
 80a6f65:	0f b6 c0             	movzbl %al,%eax
 80a6f68:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6f6f:	31 c2                	xor    %eax,%edx
 80a6f71:	89 f0                	mov    %esi,%eax
 80a6f73:	0f b6 c0             	movzbl %al,%eax
 80a6f76:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6f7d:	89 d6                	mov    %edx,%esi
 80a6f7f:	31 c6                	xor    %eax,%esi
 80a6f81:	89 f8                	mov    %edi,%eax
 80a6f83:	c1 e8 18             	shr    $0x18,%eax
 80a6f86:	0f b6 c0             	movzbl %al,%eax
 80a6f89:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a6f90:	89 f8                	mov    %edi,%eax
 80a6f92:	c1 e8 10             	shr    $0x10,%eax
 80a6f95:	0f b6 c0             	movzbl %al,%eax
 80a6f98:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a6f9f:	31 c2                	xor    %eax,%edx
 80a6fa1:	89 f8                	mov    %edi,%eax
 80a6fa3:	c1 e8 08             	shr    $0x8,%eax
 80a6fa6:	0f b6 c0             	movzbl %al,%eax
 80a6fa9:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a6fb0:	31 c2                	xor    %eax,%edx
 80a6fb2:	89 f8                	mov    %edi,%eax
 80a6fb4:	0f b6 c0             	movzbl %al,%eax
 80a6fb7:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a6fbe:	89 d7                	mov    %edx,%edi
 80a6fc0:	31 c7                	xor    %eax,%edi
 80a6fc2:	31 f3                	xor    %esi,%ebx
 80a6fc4:	31 fe                	xor    %edi,%esi
 80a6fc6:	31 5d a0             	xor    %ebx,-0x60(%ebp)
 80a6fc9:	31 df                	xor    %ebx,%edi
 80a6fcb:	33 75 a0             	xor    -0x60(%ebp),%esi
 80a6fce:	31 f3                	xor    %esi,%ebx
 80a6fd0:	89 d8                	mov    %ebx,%eax
 80a6fd2:	c1 e0 08             	shl    $0x8,%eax
 80a6fd5:	89 c2                	mov    %eax,%edx
 80a6fd7:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a6fdd:	89 d8                	mov    %ebx,%eax
 80a6fdf:	c1 e8 08             	shr    $0x8,%eax
 80a6fe2:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a6fe7:	89 d3                	mov    %edx,%ebx
 80a6fe9:	31 c3                	xor    %eax,%ebx
 80a6feb:	c1 ce 10             	ror    $0x10,%esi
 80a6fee:	89 fa                	mov    %edi,%edx
 80a6ff0:	c1 e2 18             	shl    $0x18,%edx
 80a6ff3:	89 f8                	mov    %edi,%eax
 80a6ff5:	c1 e8 18             	shr    $0x18,%eax
 80a6ff8:	31 c2                	xor    %eax,%edx
 80a6ffa:	89 f8                	mov    %edi,%eax
 80a6ffc:	25 00 ff 00 00       	and    $0xff00,%eax
 80a7001:	c1 e0 08             	shl    $0x8,%eax
 80a7004:	31 c2                	xor    %eax,%edx
 80a7006:	89 f8                	mov    %edi,%eax
 80a7008:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a700d:	c1 e8 08             	shr    $0x8,%eax
 80a7010:	89 d7                	mov    %edx,%edi
 80a7012:	31 c7                	xor    %eax,%edi
 80a7014:	31 f3                	xor    %esi,%ebx
 80a7016:	31 fe                	xor    %edi,%esi
 80a7018:	31 5d a0             	xor    %ebx,-0x60(%ebp)
 80a701b:	31 df                	xor    %ebx,%edi
 80a701d:	33 75 a0             	xor    -0x60(%ebp),%esi
 80a7020:	31 f3                	xor    %esi,%ebx
 80a7022:	81 7d 10 80 00 00 00 	cmpl   $0x80,0x10(%ebp)
 80a7029:	7e 46                	jle    80a7071 <_ZN4ARIA11EncKeySetupEPKhPhi+0x25a>
 80a702b:	8b 45 08             	mov    0x8(%ebp),%eax
 80a702e:	83 c0 10             	add    $0x10,%eax
 80a7031:	8b 00                	mov    (%eax),%eax
 80a7033:	89 45 cc             	mov    %eax,-0x34(%ebp)
 80a7036:	8b 45 08             	mov    0x8(%ebp),%eax
 80a7039:	83 c0 14             	add    $0x14,%eax
 80a703c:	8b 00                	mov    (%eax),%eax
 80a703e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80a7041:	81 7d 10 c0 00 00 00 	cmpl   $0xc0,0x10(%ebp)
 80a7048:	7e 18                	jle    80a7062 <_ZN4ARIA11EncKeySetupEPKhPhi+0x24b>
 80a704a:	8b 45 08             	mov    0x8(%ebp),%eax
 80a704d:	83 c0 18             	add    $0x18,%eax
 80a7050:	8b 00                	mov    (%eax),%eax
 80a7052:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80a7055:	8b 45 08             	mov    0x8(%ebp),%eax
 80a7058:	83 c0 1c             	add    $0x1c,%eax
 80a705b:	8b 00                	mov    (%eax),%eax
 80a705d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80a7060:	eb 28                	jmp    80a708a <_ZN4ARIA11EncKeySetupEPKhPhi+0x273>
 80a7062:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 80a7069:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a706c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80a706f:	eb 19                	jmp    80a708a <_ZN4ARIA11EncKeySetupEPKhPhi+0x273>
 80a7071:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 80a7078:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a707b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80a707e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80a7081:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80a7084:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80a7087:	89 45 cc             	mov    %eax,-0x34(%ebp)
 80a708a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80a708d:	33 45 a0             	xor    -0x60(%ebp),%eax
 80a7090:	89 45 cc             	mov    %eax,-0x34(%ebp)
 80a7093:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80a7096:	31 d8                	xor    %ebx,%eax
 80a7098:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80a709b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80a709e:	31 f0                	xor    %esi,%eax
 80a70a0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80a70a3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a70a6:	31 f8                	xor    %edi,%eax
 80a70a8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80a70ab:	8b 7d cc             	mov    -0x34(%ebp),%edi
 80a70ae:	89 7d a0             	mov    %edi,-0x60(%ebp)
 80a70b1:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 80a70b4:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 80a70b7:	8b 7d d8             	mov    -0x28(%ebp),%edi
 80a70ba:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 80a70be:	74 08                	je     80a70c8 <_ZN4ARIA11EncKeySetupEPKhPhi+0x2b1>
 80a70c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a70c3:	83 c0 01             	add    $0x1,%eax
 80a70c6:	eb 05                	jmp    80a70cd <_ZN4ARIA11EncKeySetupEPKhPhi+0x2b6>
 80a70c8:	b8 00 00 00 00       	mov    $0x0,%eax
 80a70cd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80a70d0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a70d3:	c1 e0 04             	shl    $0x4,%eax
 80a70d6:	8b 80 00 55 b1 08    	mov    0x8b15500(%eax),%eax
 80a70dc:	31 45 a0             	xor    %eax,-0x60(%ebp)
 80a70df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a70e2:	c1 e0 02             	shl    $0x2,%eax
 80a70e5:	83 c0 01             	add    $0x1,%eax
 80a70e8:	8b 04 85 00 55 b1 08 	mov    0x8b15500(,%eax,4),%eax
 80a70ef:	31 c3                	xor    %eax,%ebx
 80a70f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a70f4:	01 c0                	add    %eax,%eax
 80a70f6:	83 c0 01             	add    $0x1,%eax
 80a70f9:	8b 04 c5 00 55 b1 08 	mov    0x8b15500(,%eax,8),%eax
 80a7100:	31 c6                	xor    %eax,%esi
 80a7102:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7105:	c1 e0 04             	shl    $0x4,%eax
 80a7108:	8b 80 0c 55 b1 08    	mov    0x8b1550c(%eax),%eax
 80a710e:	31 c7                	xor    %eax,%edi
 80a7110:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a7113:	c1 e8 18             	shr    $0x18,%eax
 80a7116:	0f b6 c0             	movzbl %al,%eax
 80a7119:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a7120:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a7123:	c1 e8 10             	shr    $0x10,%eax
 80a7126:	0f b6 c0             	movzbl %al,%eax
 80a7129:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a7130:	31 c2                	xor    %eax,%edx
 80a7132:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a7135:	c1 e8 08             	shr    $0x8,%eax
 80a7138:	0f b6 c0             	movzbl %al,%eax
 80a713b:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a7142:	31 c2                	xor    %eax,%edx
 80a7144:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 80a7148:	0f b6 c0             	movzbl %al,%eax
 80a714b:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a7152:	89 d1                	mov    %edx,%ecx
 80a7154:	31 c1                	xor    %eax,%ecx
 80a7156:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 80a7159:	89 d8                	mov    %ebx,%eax
 80a715b:	c1 e8 18             	shr    $0x18,%eax
 80a715e:	0f b6 c0             	movzbl %al,%eax
 80a7161:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a7168:	89 d8                	mov    %ebx,%eax
 80a716a:	c1 e8 10             	shr    $0x10,%eax
 80a716d:	0f b6 c0             	movzbl %al,%eax
 80a7170:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a7177:	31 c2                	xor    %eax,%edx
 80a7179:	89 d8                	mov    %ebx,%eax
 80a717b:	c1 e8 08             	shr    $0x8,%eax
 80a717e:	0f b6 c0             	movzbl %al,%eax
 80a7181:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a7188:	31 c2                	xor    %eax,%edx
 80a718a:	89 d8                	mov    %ebx,%eax
 80a718c:	0f b6 c0             	movzbl %al,%eax
 80a718f:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a7196:	89 d3                	mov    %edx,%ebx
 80a7198:	31 c3                	xor    %eax,%ebx
 80a719a:	89 f0                	mov    %esi,%eax
 80a719c:	c1 e8 18             	shr    $0x18,%eax
 80a719f:	0f b6 c0             	movzbl %al,%eax
 80a71a2:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a71a9:	89 f0                	mov    %esi,%eax
 80a71ab:	c1 e8 10             	shr    $0x10,%eax
 80a71ae:	0f b6 c0             	movzbl %al,%eax
 80a71b1:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a71b8:	31 c2                	xor    %eax,%edx
 80a71ba:	89 f0                	mov    %esi,%eax
 80a71bc:	c1 e8 08             	shr    $0x8,%eax
 80a71bf:	0f b6 c0             	movzbl %al,%eax
 80a71c2:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a71c9:	31 c2                	xor    %eax,%edx
 80a71cb:	89 f0                	mov    %esi,%eax
 80a71cd:	0f b6 c0             	movzbl %al,%eax
 80a71d0:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a71d7:	89 d6                	mov    %edx,%esi
 80a71d9:	31 c6                	xor    %eax,%esi
 80a71db:	89 f8                	mov    %edi,%eax
 80a71dd:	c1 e8 18             	shr    $0x18,%eax
 80a71e0:	0f b6 c0             	movzbl %al,%eax
 80a71e3:	8b 14 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%edx
 80a71ea:	89 f8                	mov    %edi,%eax
 80a71ec:	c1 e8 10             	shr    $0x10,%eax
 80a71ef:	0f b6 c0             	movzbl %al,%eax
 80a71f2:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a71f9:	31 c2                	xor    %eax,%edx
 80a71fb:	89 f8                	mov    %edi,%eax
 80a71fd:	c1 e8 08             	shr    $0x8,%eax
 80a7200:	0f b6 c0             	movzbl %al,%eax
 80a7203:	8b 04 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%eax
 80a720a:	31 c2                	xor    %eax,%edx
 80a720c:	89 f8                	mov    %edi,%eax
 80a720e:	0f b6 c0             	movzbl %al,%eax
 80a7211:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a7218:	89 d7                	mov    %edx,%edi
 80a721a:	31 c7                	xor    %eax,%edi
 80a721c:	31 f3                	xor    %esi,%ebx
 80a721e:	31 fe                	xor    %edi,%esi
 80a7220:	31 5d a0             	xor    %ebx,-0x60(%ebp)
 80a7223:	31 df                	xor    %ebx,%edi
 80a7225:	33 75 a0             	xor    -0x60(%ebp),%esi
 80a7228:	31 f3                	xor    %esi,%ebx
 80a722a:	89 f8                	mov    %edi,%eax
 80a722c:	c1 e0 08             	shl    $0x8,%eax
 80a722f:	89 c2                	mov    %eax,%edx
 80a7231:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a7237:	89 f8                	mov    %edi,%eax
 80a7239:	c1 e8 08             	shr    $0x8,%eax
 80a723c:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a7241:	89 d7                	mov    %edx,%edi
 80a7243:	31 c7                	xor    %eax,%edi
 80a7245:	c1 4d a0 10          	rorl   $0x10,-0x60(%ebp)
 80a7249:	89 da                	mov    %ebx,%edx
 80a724b:	c1 e2 18             	shl    $0x18,%edx
 80a724e:	89 d8                	mov    %ebx,%eax
 80a7250:	c1 e8 18             	shr    $0x18,%eax
 80a7253:	31 c2                	xor    %eax,%edx
 80a7255:	89 d8                	mov    %ebx,%eax
 80a7257:	25 00 ff 00 00       	and    $0xff00,%eax
 80a725c:	c1 e0 08             	shl    $0x8,%eax
 80a725f:	31 c2                	xor    %eax,%edx
 80a7261:	89 d8                	mov    %ebx,%eax
 80a7263:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a7268:	c1 e8 08             	shr    $0x8,%eax
 80a726b:	89 d3                	mov    %edx,%ebx
 80a726d:	31 c3                	xor    %eax,%ebx
 80a726f:	31 f3                	xor    %esi,%ebx
 80a7271:	31 fe                	xor    %edi,%esi
 80a7273:	31 5d a0             	xor    %ebx,-0x60(%ebp)
 80a7276:	31 df                	xor    %ebx,%edi
 80a7278:	33 75 a0             	xor    -0x60(%ebp),%esi
 80a727b:	31 f3                	xor    %esi,%ebx
 80a727d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80a7280:	31 45 a0             	xor    %eax,-0x60(%ebp)
 80a7283:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80a7286:	31 c3                	xor    %eax,%ebx
 80a7288:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80a728b:	31 c6                	xor    %eax,%esi
 80a728d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80a7290:	31 c7                	xor    %eax,%edi
 80a7292:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a7295:	89 45 bc             	mov    %eax,-0x44(%ebp)
 80a7298:	89 5d c0             	mov    %ebx,-0x40(%ebp)
 80a729b:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 80a729e:	89 7d c8             	mov    %edi,-0x38(%ebp)
 80a72a1:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 80a72a5:	74 08                	je     80a72af <_ZN4ARIA11EncKeySetupEPKhPhi+0x498>
 80a72a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a72aa:	83 c0 01             	add    $0x1,%eax
 80a72ad:	eb 05                	jmp    80a72b4 <_ZN4ARIA11EncKeySetupEPKhPhi+0x49d>
 80a72af:	b8 00 00 00 00       	mov    $0x0,%eax
 80a72b4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80a72b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a72ba:	c1 e0 04             	shl    $0x4,%eax
 80a72bd:	8b 80 00 55 b1 08    	mov    0x8b15500(%eax),%eax
 80a72c3:	31 45 a0             	xor    %eax,-0x60(%ebp)
 80a72c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a72c9:	c1 e0 02             	shl    $0x2,%eax
 80a72cc:	83 c0 01             	add    $0x1,%eax
 80a72cf:	8b 04 85 00 55 b1 08 	mov    0x8b15500(,%eax,4),%eax
 80a72d6:	31 c3                	xor    %eax,%ebx
 80a72d8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a72db:	01 c0                	add    %eax,%eax
 80a72dd:	83 c0 01             	add    $0x1,%eax
 80a72e0:	8b 04 c5 00 55 b1 08 	mov    0x8b15500(,%eax,8),%eax
 80a72e7:	31 c6                	xor    %eax,%esi
 80a72e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a72ec:	c1 e0 04             	shl    $0x4,%eax
 80a72ef:	8b 80 0c 55 b1 08    	mov    0x8b1550c(%eax),%eax
 80a72f5:	31 c7                	xor    %eax,%edi
 80a72f7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a72fa:	c1 e8 18             	shr    $0x18,%eax
 80a72fd:	0f b6 c0             	movzbl %al,%eax
 80a7300:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a7307:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a730a:	c1 e8 10             	shr    $0x10,%eax
 80a730d:	0f b6 c0             	movzbl %al,%eax
 80a7310:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a7317:	31 c2                	xor    %eax,%edx
 80a7319:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80a731c:	c1 e8 08             	shr    $0x8,%eax
 80a731f:	0f b6 c0             	movzbl %al,%eax
 80a7322:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a7329:	31 c2                	xor    %eax,%edx
 80a732b:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 80a732f:	0f b6 c0             	movzbl %al,%eax
 80a7332:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a7339:	89 d1                	mov    %edx,%ecx
 80a733b:	31 c1                	xor    %eax,%ecx
 80a733d:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 80a7340:	89 d8                	mov    %ebx,%eax
 80a7342:	c1 e8 18             	shr    $0x18,%eax
 80a7345:	0f b6 c0             	movzbl %al,%eax
 80a7348:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a734f:	89 d8                	mov    %ebx,%eax
 80a7351:	c1 e8 10             	shr    $0x10,%eax
 80a7354:	0f b6 c0             	movzbl %al,%eax
 80a7357:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a735e:	31 c2                	xor    %eax,%edx
 80a7360:	89 d8                	mov    %ebx,%eax
 80a7362:	c1 e8 08             	shr    $0x8,%eax
 80a7365:	0f b6 c0             	movzbl %al,%eax
 80a7368:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a736f:	31 c2                	xor    %eax,%edx
 80a7371:	89 d8                	mov    %ebx,%eax
 80a7373:	0f b6 c0             	movzbl %al,%eax
 80a7376:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a737d:	89 d3                	mov    %edx,%ebx
 80a737f:	31 c3                	xor    %eax,%ebx
 80a7381:	89 f0                	mov    %esi,%eax
 80a7383:	c1 e8 18             	shr    $0x18,%eax
 80a7386:	0f b6 c0             	movzbl %al,%eax
 80a7389:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a7390:	89 f0                	mov    %esi,%eax
 80a7392:	c1 e8 10             	shr    $0x10,%eax
 80a7395:	0f b6 c0             	movzbl %al,%eax
 80a7398:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a739f:	31 c2                	xor    %eax,%edx
 80a73a1:	89 f0                	mov    %esi,%eax
 80a73a3:	c1 e8 08             	shr    $0x8,%eax
 80a73a6:	0f b6 c0             	movzbl %al,%eax
 80a73a9:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a73b0:	31 c2                	xor    %eax,%edx
 80a73b2:	89 f0                	mov    %esi,%eax
 80a73b4:	0f b6 c0             	movzbl %al,%eax
 80a73b7:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a73be:	89 d6                	mov    %edx,%esi
 80a73c0:	31 c6                	xor    %eax,%esi
 80a73c2:	89 f8                	mov    %edi,%eax
 80a73c4:	c1 e8 18             	shr    $0x18,%eax
 80a73c7:	0f b6 c0             	movzbl %al,%eax
 80a73ca:	8b 14 85 40 55 b1 08 	mov    0x8b15540(,%eax,4),%edx
 80a73d1:	89 f8                	mov    %edi,%eax
 80a73d3:	c1 e8 10             	shr    $0x10,%eax
 80a73d6:	0f b6 c0             	movzbl %al,%eax
 80a73d9:	8b 04 85 40 59 b1 08 	mov    0x8b15940(,%eax,4),%eax
 80a73e0:	31 c2                	xor    %eax,%edx
 80a73e2:	89 f8                	mov    %edi,%eax
 80a73e4:	c1 e8 08             	shr    $0x8,%eax
 80a73e7:	0f b6 c0             	movzbl %al,%eax
 80a73ea:	8b 04 85 40 5d b1 08 	mov    0x8b15d40(,%eax,4),%eax
 80a73f1:	31 c2                	xor    %eax,%edx
 80a73f3:	89 f8                	mov    %edi,%eax
 80a73f5:	0f b6 c0             	movzbl %al,%eax
 80a73f8:	8b 04 85 40 61 b1 08 	mov    0x8b16140(,%eax,4),%eax
 80a73ff:	89 d7                	mov    %edx,%edi
 80a7401:	31 c7                	xor    %eax,%edi
 80a7403:	31 f3                	xor    %esi,%ebx
 80a7405:	31 fe                	xor    %edi,%esi
 80a7407:	31 5d a0             	xor    %ebx,-0x60(%ebp)
 80a740a:	31 df                	xor    %ebx,%edi
 80a740c:	33 75 a0             	xor    -0x60(%ebp),%esi
 80a740f:	31 f3                	xor    %esi,%ebx
 80a7411:	89 d8                	mov    %ebx,%eax
 80a7413:	c1 e0 08             	shl    $0x8,%eax
 80a7416:	89 c2                	mov    %eax,%edx
 80a7418:	81 e2 00 ff 00 ff    	and    $0xff00ff00,%edx
 80a741e:	89 d8                	mov    %ebx,%eax
 80a7420:	c1 e8 08             	shr    $0x8,%eax
 80a7423:	25 ff 00 ff 00       	and    $0xff00ff,%eax
 80a7428:	89 d3                	mov    %edx,%ebx
 80a742a:	31 c3                	xor    %eax,%ebx
 80a742c:	c1 ce 10             	ror    $0x10,%esi
 80a742f:	89 fa                	mov    %edi,%edx
 80a7431:	c1 e2 18             	shl    $0x18,%edx
 80a7434:	89 f8                	mov    %edi,%eax
 80a7436:	c1 e8 18             	shr    $0x18,%eax
 80a7439:	31 c2                	xor    %eax,%edx
 80a743b:	89 f8                	mov    %edi,%eax
 80a743d:	25 00 ff 00 00       	and    $0xff00,%eax
 80a7442:	c1 e0 08             	shl    $0x8,%eax
 80a7445:	31 c2                	xor    %eax,%edx
 80a7447:	89 f8                	mov    %edi,%eax
 80a7449:	25 00 00 ff 00       	and    $0xff0000,%eax
 80a744e:	c1 e8 08             	shr    $0x8,%eax
 80a7451:	89 d7                	mov    %edx,%edi
 80a7453:	31 c7                	xor    %eax,%edi
 80a7455:	31 f3                	xor    %esi,%ebx
 80a7457:	31 fe                	xor    %edi,%esi
 80a7459:	31 5d a0             	xor    %ebx,-0x60(%ebp)
 80a745c:	31 df                	xor    %ebx,%edi
 80a745e:	33 75 a0             	xor    -0x60(%ebp),%esi
 80a7461:	31 f3                	xor    %esi,%ebx
 80a7463:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80a7466:	33 45 a0             	xor    -0x60(%ebp),%eax
 80a7469:	89 45 ac             	mov    %eax,-0x54(%ebp)
 80a746c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80a746f:	31 d8                	xor    %ebx,%eax
 80a7471:	89 45 b0             	mov    %eax,-0x50(%ebp)
 80a7474:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80a7477:	31 f0                	xor    %esi,%eax
 80a7479:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 80a747c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80a747f:	31 f8                	xor    %edi,%eax
 80a7481:	89 45 b8             	mov    %eax,-0x48(%ebp)
 80a7484:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 80a748b:	c7 45 f0 13 00 00 00 	movl   $0x13,-0x10(%ebp)
 80a7492:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a7495:	8b 75 dc             	mov    -0x24(%ebp),%esi
 80a7498:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a749b:	89 c2                	mov    %eax,%edx
 80a749d:	c1 fa 1f             	sar    $0x1f,%edx
 80a74a0:	c1 ea 1e             	shr    $0x1e,%edx
 80a74a3:	01 d0                	add    %edx,%eax
 80a74a5:	83 e0 03             	and    $0x3,%eax
 80a74a8:	29 d0                	sub    %edx,%eax
 80a74aa:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a74ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a74b1:	89 d7                	mov    %edx,%edi
 80a74b3:	89 c1                	mov    %eax,%ecx
 80a74b5:	d3 ef                	shr    %cl,%edi
 80a74b7:	89 f8                	mov    %edi,%eax
 80a74b9:	31 c6                	xor    %eax,%esi
 80a74bb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a74be:	8d 50 03             	lea    0x3(%eax),%edx
 80a74c1:	89 d0                	mov    %edx,%eax
 80a74c3:	c1 f8 1f             	sar    $0x1f,%eax
 80a74c6:	c1 e8 1e             	shr    $0x1e,%eax
 80a74c9:	01 c2                	add    %eax,%edx
 80a74cb:	83 e2 03             	and    $0x3,%edx
 80a74ce:	89 d1                	mov    %edx,%ecx
 80a74d0:	29 c1                	sub    %eax,%ecx
 80a74d2:	89 c8                	mov    %ecx,%eax
 80a74d4:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a74d8:	b8 20 00 00 00       	mov    $0x20,%eax
 80a74dd:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a74e0:	89 d7                	mov    %edx,%edi
 80a74e2:	89 c1                	mov    %eax,%ecx
 80a74e4:	d3 e7                	shl    %cl,%edi
 80a74e6:	89 f8                	mov    %edi,%eax
 80a74e8:	31 f0                	xor    %esi,%eax
 80a74ea:	89 03                	mov    %eax,(%ebx)
 80a74ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a74ef:	8d 58 04             	lea    0x4(%eax),%ebx
 80a74f2:	8b 75 e0             	mov    -0x20(%ebp),%esi
 80a74f5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a74f8:	8d 50 01             	lea    0x1(%eax),%edx
 80a74fb:	89 d0                	mov    %edx,%eax
 80a74fd:	c1 f8 1f             	sar    $0x1f,%eax
 80a7500:	c1 e8 1e             	shr    $0x1e,%eax
 80a7503:	01 c2                	add    %eax,%edx
 80a7505:	83 e2 03             	and    $0x3,%edx
 80a7508:	89 d1                	mov    %edx,%ecx
 80a750a:	29 c1                	sub    %eax,%ecx
 80a750c:	89 c8                	mov    %ecx,%eax
 80a750e:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7512:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7515:	89 d7                	mov    %edx,%edi
 80a7517:	89 c1                	mov    %eax,%ecx
 80a7519:	d3 ef                	shr    %cl,%edi
 80a751b:	89 f8                	mov    %edi,%eax
 80a751d:	31 c6                	xor    %eax,%esi
 80a751f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7522:	89 c2                	mov    %eax,%edx
 80a7524:	c1 fa 1f             	sar    $0x1f,%edx
 80a7527:	c1 ea 1e             	shr    $0x1e,%edx
 80a752a:	01 d0                	add    %edx,%eax
 80a752c:	83 e0 03             	and    $0x3,%eax
 80a752f:	29 d0                	sub    %edx,%eax
 80a7531:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7535:	b8 20 00 00 00       	mov    $0x20,%eax
 80a753a:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a753d:	89 d7                	mov    %edx,%edi
 80a753f:	89 c1                	mov    %eax,%ecx
 80a7541:	d3 e7                	shl    %cl,%edi
 80a7543:	89 f8                	mov    %edi,%eax
 80a7545:	31 f0                	xor    %esi,%eax
 80a7547:	89 03                	mov    %eax,(%ebx)
 80a7549:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a754c:	8d 58 08             	lea    0x8(%eax),%ebx
 80a754f:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 80a7552:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7555:	8d 50 02             	lea    0x2(%eax),%edx
 80a7558:	89 d0                	mov    %edx,%eax
 80a755a:	c1 f8 1f             	sar    $0x1f,%eax
 80a755d:	c1 e8 1e             	shr    $0x1e,%eax
 80a7560:	01 c2                	add    %eax,%edx
 80a7562:	83 e2 03             	and    $0x3,%edx
 80a7565:	89 d1                	mov    %edx,%ecx
 80a7567:	29 c1                	sub    %eax,%ecx
 80a7569:	89 c8                	mov    %ecx,%eax
 80a756b:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a756f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7572:	89 d7                	mov    %edx,%edi
 80a7574:	89 c1                	mov    %eax,%ecx
 80a7576:	d3 ef                	shr    %cl,%edi
 80a7578:	89 f8                	mov    %edi,%eax
 80a757a:	31 c6                	xor    %eax,%esi
 80a757c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a757f:	8d 50 01             	lea    0x1(%eax),%edx
 80a7582:	89 d0                	mov    %edx,%eax
 80a7584:	c1 f8 1f             	sar    $0x1f,%eax
 80a7587:	c1 e8 1e             	shr    $0x1e,%eax
 80a758a:	01 c2                	add    %eax,%edx
 80a758c:	83 e2 03             	and    $0x3,%edx
 80a758f:	89 d1                	mov    %edx,%ecx
 80a7591:	29 c1                	sub    %eax,%ecx
 80a7593:	89 c8                	mov    %ecx,%eax
 80a7595:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7599:	b8 20 00 00 00       	mov    $0x20,%eax
 80a759e:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a75a1:	89 d7                	mov    %edx,%edi
 80a75a3:	89 c1                	mov    %eax,%ecx
 80a75a5:	d3 e7                	shl    %cl,%edi
 80a75a7:	89 f8                	mov    %edi,%eax
 80a75a9:	31 f0                	xor    %esi,%eax
 80a75ab:	89 03                	mov    %eax,(%ebx)
 80a75ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a75b0:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a75b3:	8b 75 e8             	mov    -0x18(%ebp),%esi
 80a75b6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a75b9:	8d 50 03             	lea    0x3(%eax),%edx
 80a75bc:	89 d0                	mov    %edx,%eax
 80a75be:	c1 f8 1f             	sar    $0x1f,%eax
 80a75c1:	c1 e8 1e             	shr    $0x1e,%eax
 80a75c4:	01 c2                	add    %eax,%edx
 80a75c6:	83 e2 03             	and    $0x3,%edx
 80a75c9:	89 d1                	mov    %edx,%ecx
 80a75cb:	29 c1                	sub    %eax,%ecx
 80a75cd:	89 c8                	mov    %ecx,%eax
 80a75cf:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a75d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a75d6:	89 d7                	mov    %edx,%edi
 80a75d8:	89 c1                	mov    %eax,%ecx
 80a75da:	d3 ef                	shr    %cl,%edi
 80a75dc:	89 f8                	mov    %edi,%eax
 80a75de:	31 c6                	xor    %eax,%esi
 80a75e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a75e3:	8d 50 02             	lea    0x2(%eax),%edx
 80a75e6:	89 d0                	mov    %edx,%eax
 80a75e8:	c1 f8 1f             	sar    $0x1f,%eax
 80a75eb:	c1 e8 1e             	shr    $0x1e,%eax
 80a75ee:	01 c2                	add    %eax,%edx
 80a75f0:	83 e2 03             	and    $0x3,%edx
 80a75f3:	89 d1                	mov    %edx,%ecx
 80a75f5:	29 c1                	sub    %eax,%ecx
 80a75f7:	89 c8                	mov    %ecx,%eax
 80a75f9:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a75fd:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7602:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7605:	89 d7                	mov    %edx,%edi
 80a7607:	89 c1                	mov    %eax,%ecx
 80a7609:	d3 e7                	shl    %cl,%edi
 80a760b:	89 f8                	mov    %edi,%eax
 80a760d:	31 f0                	xor    %esi,%eax
 80a760f:	89 03                	mov    %eax,(%ebx)
 80a7611:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a7615:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 80a761c:	c7 45 f0 13 00 00 00 	movl   $0x13,-0x10(%ebp)
 80a7623:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a7626:	8b 75 cc             	mov    -0x34(%ebp),%esi
 80a7629:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a762c:	89 c2                	mov    %eax,%edx
 80a762e:	c1 fa 1f             	sar    $0x1f,%edx
 80a7631:	c1 ea 1e             	shr    $0x1e,%edx
 80a7634:	01 d0                	add    %edx,%eax
 80a7636:	83 e0 03             	and    $0x3,%eax
 80a7639:	29 d0                	sub    %edx,%eax
 80a763b:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a763f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7642:	89 d7                	mov    %edx,%edi
 80a7644:	89 c1                	mov    %eax,%ecx
 80a7646:	d3 ef                	shr    %cl,%edi
 80a7648:	89 f8                	mov    %edi,%eax
 80a764a:	31 c6                	xor    %eax,%esi
 80a764c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a764f:	8d 50 03             	lea    0x3(%eax),%edx
 80a7652:	89 d0                	mov    %edx,%eax
 80a7654:	c1 f8 1f             	sar    $0x1f,%eax
 80a7657:	c1 e8 1e             	shr    $0x1e,%eax
 80a765a:	01 c2                	add    %eax,%edx
 80a765c:	83 e2 03             	and    $0x3,%edx
 80a765f:	89 d1                	mov    %edx,%ecx
 80a7661:	29 c1                	sub    %eax,%ecx
 80a7663:	89 c8                	mov    %ecx,%eax
 80a7665:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7669:	b8 20 00 00 00       	mov    $0x20,%eax
 80a766e:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7671:	89 d7                	mov    %edx,%edi
 80a7673:	89 c1                	mov    %eax,%ecx
 80a7675:	d3 e7                	shl    %cl,%edi
 80a7677:	89 f8                	mov    %edi,%eax
 80a7679:	31 f0                	xor    %esi,%eax
 80a767b:	89 03                	mov    %eax,(%ebx)
 80a767d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7680:	8d 58 04             	lea    0x4(%eax),%ebx
 80a7683:	8b 75 d0             	mov    -0x30(%ebp),%esi
 80a7686:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7689:	8d 50 01             	lea    0x1(%eax),%edx
 80a768c:	89 d0                	mov    %edx,%eax
 80a768e:	c1 f8 1f             	sar    $0x1f,%eax
 80a7691:	c1 e8 1e             	shr    $0x1e,%eax
 80a7694:	01 c2                	add    %eax,%edx
 80a7696:	83 e2 03             	and    $0x3,%edx
 80a7699:	89 d1                	mov    %edx,%ecx
 80a769b:	29 c1                	sub    %eax,%ecx
 80a769d:	89 c8                	mov    %ecx,%eax
 80a769f:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a76a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a76a6:	89 d7                	mov    %edx,%edi
 80a76a8:	89 c1                	mov    %eax,%ecx
 80a76aa:	d3 ef                	shr    %cl,%edi
 80a76ac:	89 f8                	mov    %edi,%eax
 80a76ae:	31 c6                	xor    %eax,%esi
 80a76b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a76b3:	89 c2                	mov    %eax,%edx
 80a76b5:	c1 fa 1f             	sar    $0x1f,%edx
 80a76b8:	c1 ea 1e             	shr    $0x1e,%edx
 80a76bb:	01 d0                	add    %edx,%eax
 80a76bd:	83 e0 03             	and    $0x3,%eax
 80a76c0:	29 d0                	sub    %edx,%eax
 80a76c2:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a76c6:	b8 20 00 00 00       	mov    $0x20,%eax
 80a76cb:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a76ce:	89 d7                	mov    %edx,%edi
 80a76d0:	89 c1                	mov    %eax,%ecx
 80a76d2:	d3 e7                	shl    %cl,%edi
 80a76d4:	89 f8                	mov    %edi,%eax
 80a76d6:	31 f0                	xor    %esi,%eax
 80a76d8:	89 03                	mov    %eax,(%ebx)
 80a76da:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a76dd:	8d 58 08             	lea    0x8(%eax),%ebx
 80a76e0:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 80a76e3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a76e6:	8d 50 02             	lea    0x2(%eax),%edx
 80a76e9:	89 d0                	mov    %edx,%eax
 80a76eb:	c1 f8 1f             	sar    $0x1f,%eax
 80a76ee:	c1 e8 1e             	shr    $0x1e,%eax
 80a76f1:	01 c2                	add    %eax,%edx
 80a76f3:	83 e2 03             	and    $0x3,%edx
 80a76f6:	89 d1                	mov    %edx,%ecx
 80a76f8:	29 c1                	sub    %eax,%ecx
 80a76fa:	89 c8                	mov    %ecx,%eax
 80a76fc:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7700:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7703:	89 d7                	mov    %edx,%edi
 80a7705:	89 c1                	mov    %eax,%ecx
 80a7707:	d3 ef                	shr    %cl,%edi
 80a7709:	89 f8                	mov    %edi,%eax
 80a770b:	31 c6                	xor    %eax,%esi
 80a770d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7710:	8d 50 01             	lea    0x1(%eax),%edx
 80a7713:	89 d0                	mov    %edx,%eax
 80a7715:	c1 f8 1f             	sar    $0x1f,%eax
 80a7718:	c1 e8 1e             	shr    $0x1e,%eax
 80a771b:	01 c2                	add    %eax,%edx
 80a771d:	83 e2 03             	and    $0x3,%edx
 80a7720:	89 d1                	mov    %edx,%ecx
 80a7722:	29 c1                	sub    %eax,%ecx
 80a7724:	89 c8                	mov    %ecx,%eax
 80a7726:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a772a:	b8 20 00 00 00       	mov    $0x20,%eax
 80a772f:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7732:	89 d7                	mov    %edx,%edi
 80a7734:	89 c1                	mov    %eax,%ecx
 80a7736:	d3 e7                	shl    %cl,%edi
 80a7738:	89 f8                	mov    %edi,%eax
 80a773a:	31 f0                	xor    %esi,%eax
 80a773c:	89 03                	mov    %eax,(%ebx)
 80a773e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7741:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a7744:	8b 75 d8             	mov    -0x28(%ebp),%esi
 80a7747:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a774a:	8d 50 03             	lea    0x3(%eax),%edx
 80a774d:	89 d0                	mov    %edx,%eax
 80a774f:	c1 f8 1f             	sar    $0x1f,%eax
 80a7752:	c1 e8 1e             	shr    $0x1e,%eax
 80a7755:	01 c2                	add    %eax,%edx
 80a7757:	83 e2 03             	and    $0x3,%edx
 80a775a:	89 d1                	mov    %edx,%ecx
 80a775c:	29 c1                	sub    %eax,%ecx
 80a775e:	89 c8                	mov    %ecx,%eax
 80a7760:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7764:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7767:	89 d7                	mov    %edx,%edi
 80a7769:	89 c1                	mov    %eax,%ecx
 80a776b:	d3 ef                	shr    %cl,%edi
 80a776d:	89 f8                	mov    %edi,%eax
 80a776f:	31 c6                	xor    %eax,%esi
 80a7771:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7774:	8d 50 02             	lea    0x2(%eax),%edx
 80a7777:	89 d0                	mov    %edx,%eax
 80a7779:	c1 f8 1f             	sar    $0x1f,%eax
 80a777c:	c1 e8 1e             	shr    $0x1e,%eax
 80a777f:	01 c2                	add    %eax,%edx
 80a7781:	83 e2 03             	and    $0x3,%edx
 80a7784:	89 d1                	mov    %edx,%ecx
 80a7786:	29 c1                	sub    %eax,%ecx
 80a7788:	89 c8                	mov    %ecx,%eax
 80a778a:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a778e:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7793:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7796:	89 d7                	mov    %edx,%edi
 80a7798:	89 c1                	mov    %eax,%ecx
 80a779a:	d3 e7                	shl    %cl,%edi
 80a779c:	89 f8                	mov    %edi,%eax
 80a779e:	31 f0                	xor    %esi,%eax
 80a77a0:	89 03                	mov    %eax,(%ebx)
 80a77a2:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a77a6:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 80a77ad:	c7 45 f0 13 00 00 00 	movl   $0x13,-0x10(%ebp)
 80a77b4:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a77b7:	8b 75 bc             	mov    -0x44(%ebp),%esi
 80a77ba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a77bd:	89 c2                	mov    %eax,%edx
 80a77bf:	c1 fa 1f             	sar    $0x1f,%edx
 80a77c2:	c1 ea 1e             	shr    $0x1e,%edx
 80a77c5:	01 d0                	add    %edx,%eax
 80a77c7:	83 e0 03             	and    $0x3,%eax
 80a77ca:	29 d0                	sub    %edx,%eax
 80a77cc:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a77d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a77d3:	89 d7                	mov    %edx,%edi
 80a77d5:	89 c1                	mov    %eax,%ecx
 80a77d7:	d3 ef                	shr    %cl,%edi
 80a77d9:	89 f8                	mov    %edi,%eax
 80a77db:	31 c6                	xor    %eax,%esi
 80a77dd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a77e0:	8d 50 03             	lea    0x3(%eax),%edx
 80a77e3:	89 d0                	mov    %edx,%eax
 80a77e5:	c1 f8 1f             	sar    $0x1f,%eax
 80a77e8:	c1 e8 1e             	shr    $0x1e,%eax
 80a77eb:	01 c2                	add    %eax,%edx
 80a77ed:	83 e2 03             	and    $0x3,%edx
 80a77f0:	89 d1                	mov    %edx,%ecx
 80a77f2:	29 c1                	sub    %eax,%ecx
 80a77f4:	89 c8                	mov    %ecx,%eax
 80a77f6:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a77fa:	b8 20 00 00 00       	mov    $0x20,%eax
 80a77ff:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7802:	89 d7                	mov    %edx,%edi
 80a7804:	89 c1                	mov    %eax,%ecx
 80a7806:	d3 e7                	shl    %cl,%edi
 80a7808:	89 f8                	mov    %edi,%eax
 80a780a:	31 f0                	xor    %esi,%eax
 80a780c:	89 03                	mov    %eax,(%ebx)
 80a780e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7811:	8d 58 04             	lea    0x4(%eax),%ebx
 80a7814:	8b 75 c0             	mov    -0x40(%ebp),%esi
 80a7817:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a781a:	8d 50 01             	lea    0x1(%eax),%edx
 80a781d:	89 d0                	mov    %edx,%eax
 80a781f:	c1 f8 1f             	sar    $0x1f,%eax
 80a7822:	c1 e8 1e             	shr    $0x1e,%eax
 80a7825:	01 c2                	add    %eax,%edx
 80a7827:	83 e2 03             	and    $0x3,%edx
 80a782a:	89 d1                	mov    %edx,%ecx
 80a782c:	29 c1                	sub    %eax,%ecx
 80a782e:	89 c8                	mov    %ecx,%eax
 80a7830:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7834:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7837:	89 d7                	mov    %edx,%edi
 80a7839:	89 c1                	mov    %eax,%ecx
 80a783b:	d3 ef                	shr    %cl,%edi
 80a783d:	89 f8                	mov    %edi,%eax
 80a783f:	31 c6                	xor    %eax,%esi
 80a7841:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7844:	89 c2                	mov    %eax,%edx
 80a7846:	c1 fa 1f             	sar    $0x1f,%edx
 80a7849:	c1 ea 1e             	shr    $0x1e,%edx
 80a784c:	01 d0                	add    %edx,%eax
 80a784e:	83 e0 03             	and    $0x3,%eax
 80a7851:	29 d0                	sub    %edx,%eax
 80a7853:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7857:	b8 20 00 00 00       	mov    $0x20,%eax
 80a785c:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a785f:	89 d7                	mov    %edx,%edi
 80a7861:	89 c1                	mov    %eax,%ecx
 80a7863:	d3 e7                	shl    %cl,%edi
 80a7865:	89 f8                	mov    %edi,%eax
 80a7867:	31 f0                	xor    %esi,%eax
 80a7869:	89 03                	mov    %eax,(%ebx)
 80a786b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a786e:	8d 58 08             	lea    0x8(%eax),%ebx
 80a7871:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 80a7874:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7877:	8d 50 02             	lea    0x2(%eax),%edx
 80a787a:	89 d0                	mov    %edx,%eax
 80a787c:	c1 f8 1f             	sar    $0x1f,%eax
 80a787f:	c1 e8 1e             	shr    $0x1e,%eax
 80a7882:	01 c2                	add    %eax,%edx
 80a7884:	83 e2 03             	and    $0x3,%edx
 80a7887:	89 d1                	mov    %edx,%ecx
 80a7889:	29 c1                	sub    %eax,%ecx
 80a788b:	89 c8                	mov    %ecx,%eax
 80a788d:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7891:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7894:	89 d7                	mov    %edx,%edi
 80a7896:	89 c1                	mov    %eax,%ecx
 80a7898:	d3 ef                	shr    %cl,%edi
 80a789a:	89 f8                	mov    %edi,%eax
 80a789c:	31 c6                	xor    %eax,%esi
 80a789e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a78a1:	8d 50 01             	lea    0x1(%eax),%edx
 80a78a4:	89 d0                	mov    %edx,%eax
 80a78a6:	c1 f8 1f             	sar    $0x1f,%eax
 80a78a9:	c1 e8 1e             	shr    $0x1e,%eax
 80a78ac:	01 c2                	add    %eax,%edx
 80a78ae:	83 e2 03             	and    $0x3,%edx
 80a78b1:	89 d1                	mov    %edx,%ecx
 80a78b3:	29 c1                	sub    %eax,%ecx
 80a78b5:	89 c8                	mov    %ecx,%eax
 80a78b7:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a78bb:	b8 20 00 00 00       	mov    $0x20,%eax
 80a78c0:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a78c3:	89 d7                	mov    %edx,%edi
 80a78c5:	89 c1                	mov    %eax,%ecx
 80a78c7:	d3 e7                	shl    %cl,%edi
 80a78c9:	89 f8                	mov    %edi,%eax
 80a78cb:	31 f0                	xor    %esi,%eax
 80a78cd:	89 03                	mov    %eax,(%ebx)
 80a78cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a78d2:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a78d5:	8b 75 c8             	mov    -0x38(%ebp),%esi
 80a78d8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a78db:	8d 50 03             	lea    0x3(%eax),%edx
 80a78de:	89 d0                	mov    %edx,%eax
 80a78e0:	c1 f8 1f             	sar    $0x1f,%eax
 80a78e3:	c1 e8 1e             	shr    $0x1e,%eax
 80a78e6:	01 c2                	add    %eax,%edx
 80a78e8:	83 e2 03             	and    $0x3,%edx
 80a78eb:	89 d1                	mov    %edx,%ecx
 80a78ed:	29 c1                	sub    %eax,%ecx
 80a78ef:	89 c8                	mov    %ecx,%eax
 80a78f1:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a78f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a78f8:	89 d7                	mov    %edx,%edi
 80a78fa:	89 c1                	mov    %eax,%ecx
 80a78fc:	d3 ef                	shr    %cl,%edi
 80a78fe:	89 f8                	mov    %edi,%eax
 80a7900:	31 c6                	xor    %eax,%esi
 80a7902:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7905:	8d 50 02             	lea    0x2(%eax),%edx
 80a7908:	89 d0                	mov    %edx,%eax
 80a790a:	c1 f8 1f             	sar    $0x1f,%eax
 80a790d:	c1 e8 1e             	shr    $0x1e,%eax
 80a7910:	01 c2                	add    %eax,%edx
 80a7912:	83 e2 03             	and    $0x3,%edx
 80a7915:	89 d1                	mov    %edx,%ecx
 80a7917:	29 c1                	sub    %eax,%ecx
 80a7919:	89 c8                	mov    %ecx,%eax
 80a791b:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a791f:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7924:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7927:	89 d7                	mov    %edx,%edi
 80a7929:	89 c1                	mov    %eax,%ecx
 80a792b:	d3 e7                	shl    %cl,%edi
 80a792d:	89 f8                	mov    %edi,%eax
 80a792f:	31 f0                	xor    %esi,%eax
 80a7931:	89 03                	mov    %eax,(%ebx)
 80a7933:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a7937:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 80a793e:	c7 45 f0 13 00 00 00 	movl   $0x13,-0x10(%ebp)
 80a7945:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a7948:	8b 75 ac             	mov    -0x54(%ebp),%esi
 80a794b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a794e:	89 c2                	mov    %eax,%edx
 80a7950:	c1 fa 1f             	sar    $0x1f,%edx
 80a7953:	c1 ea 1e             	shr    $0x1e,%edx
 80a7956:	01 d0                	add    %edx,%eax
 80a7958:	83 e0 03             	and    $0x3,%eax
 80a795b:	29 d0                	sub    %edx,%eax
 80a795d:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a7961:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7964:	89 d7                	mov    %edx,%edi
 80a7966:	89 c1                	mov    %eax,%ecx
 80a7968:	d3 ef                	shr    %cl,%edi
 80a796a:	89 f8                	mov    %edi,%eax
 80a796c:	31 c6                	xor    %eax,%esi
 80a796e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7971:	8d 50 03             	lea    0x3(%eax),%edx
 80a7974:	89 d0                	mov    %edx,%eax
 80a7976:	c1 f8 1f             	sar    $0x1f,%eax
 80a7979:	c1 e8 1e             	shr    $0x1e,%eax
 80a797c:	01 c2                	add    %eax,%edx
 80a797e:	83 e2 03             	and    $0x3,%edx
 80a7981:	89 d1                	mov    %edx,%ecx
 80a7983:	29 c1                	sub    %eax,%ecx
 80a7985:	89 c8                	mov    %ecx,%eax
 80a7987:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a798b:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7990:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7993:	89 d7                	mov    %edx,%edi
 80a7995:	89 c1                	mov    %eax,%ecx
 80a7997:	d3 e7                	shl    %cl,%edi
 80a7999:	89 f8                	mov    %edi,%eax
 80a799b:	31 f0                	xor    %esi,%eax
 80a799d:	89 03                	mov    %eax,(%ebx)
 80a799f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a79a2:	8d 58 04             	lea    0x4(%eax),%ebx
 80a79a5:	8b 75 b0             	mov    -0x50(%ebp),%esi
 80a79a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a79ab:	8d 50 01             	lea    0x1(%eax),%edx
 80a79ae:	89 d0                	mov    %edx,%eax
 80a79b0:	c1 f8 1f             	sar    $0x1f,%eax
 80a79b3:	c1 e8 1e             	shr    $0x1e,%eax
 80a79b6:	01 c2                	add    %eax,%edx
 80a79b8:	83 e2 03             	and    $0x3,%edx
 80a79bb:	89 d1                	mov    %edx,%ecx
 80a79bd:	29 c1                	sub    %eax,%ecx
 80a79bf:	89 c8                	mov    %ecx,%eax
 80a79c1:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a79c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a79c8:	89 d7                	mov    %edx,%edi
 80a79ca:	89 c1                	mov    %eax,%ecx
 80a79cc:	d3 ef                	shr    %cl,%edi
 80a79ce:	89 f8                	mov    %edi,%eax
 80a79d0:	31 c6                	xor    %eax,%esi
 80a79d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a79d5:	89 c2                	mov    %eax,%edx
 80a79d7:	c1 fa 1f             	sar    $0x1f,%edx
 80a79da:	c1 ea 1e             	shr    $0x1e,%edx
 80a79dd:	01 d0                	add    %edx,%eax
 80a79df:	83 e0 03             	and    $0x3,%eax
 80a79e2:	29 d0                	sub    %edx,%eax
 80a79e4:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a79e8:	b8 20 00 00 00       	mov    $0x20,%eax
 80a79ed:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a79f0:	89 d7                	mov    %edx,%edi
 80a79f2:	89 c1                	mov    %eax,%ecx
 80a79f4:	d3 e7                	shl    %cl,%edi
 80a79f6:	89 f8                	mov    %edi,%eax
 80a79f8:	31 f0                	xor    %esi,%eax
 80a79fa:	89 03                	mov    %eax,(%ebx)
 80a79fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a79ff:	8d 58 08             	lea    0x8(%eax),%ebx
 80a7a02:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 80a7a05:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7a08:	8d 50 02             	lea    0x2(%eax),%edx
 80a7a0b:	89 d0                	mov    %edx,%eax
 80a7a0d:	c1 f8 1f             	sar    $0x1f,%eax
 80a7a10:	c1 e8 1e             	shr    $0x1e,%eax
 80a7a13:	01 c2                	add    %eax,%edx
 80a7a15:	83 e2 03             	and    $0x3,%edx
 80a7a18:	89 d1                	mov    %edx,%ecx
 80a7a1a:	29 c1                	sub    %eax,%ecx
 80a7a1c:	89 c8                	mov    %ecx,%eax
 80a7a1e:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a7a22:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7a25:	89 d7                	mov    %edx,%edi
 80a7a27:	89 c1                	mov    %eax,%ecx
 80a7a29:	d3 ef                	shr    %cl,%edi
 80a7a2b:	89 f8                	mov    %edi,%eax
 80a7a2d:	31 c6                	xor    %eax,%esi
 80a7a2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7a32:	8d 50 01             	lea    0x1(%eax),%edx
 80a7a35:	89 d0                	mov    %edx,%eax
 80a7a37:	c1 f8 1f             	sar    $0x1f,%eax
 80a7a3a:	c1 e8 1e             	shr    $0x1e,%eax
 80a7a3d:	01 c2                	add    %eax,%edx
 80a7a3f:	83 e2 03             	and    $0x3,%edx
 80a7a42:	89 d1                	mov    %edx,%ecx
 80a7a44:	29 c1                	sub    %eax,%ecx
 80a7a46:	89 c8                	mov    %ecx,%eax
 80a7a48:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a7a4c:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7a51:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7a54:	89 d7                	mov    %edx,%edi
 80a7a56:	89 c1                	mov    %eax,%ecx
 80a7a58:	d3 e7                	shl    %cl,%edi
 80a7a5a:	89 f8                	mov    %edi,%eax
 80a7a5c:	31 f0                	xor    %esi,%eax
 80a7a5e:	89 03                	mov    %eax,(%ebx)
 80a7a60:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7a63:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a7a66:	8b 75 b8             	mov    -0x48(%ebp),%esi
 80a7a69:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7a6c:	8d 50 03             	lea    0x3(%eax),%edx
 80a7a6f:	89 d0                	mov    %edx,%eax
 80a7a71:	c1 f8 1f             	sar    $0x1f,%eax
 80a7a74:	c1 e8 1e             	shr    $0x1e,%eax
 80a7a77:	01 c2                	add    %eax,%edx
 80a7a79:	83 e2 03             	and    $0x3,%edx
 80a7a7c:	89 d1                	mov    %edx,%ecx
 80a7a7e:	29 c1                	sub    %eax,%ecx
 80a7a80:	89 c8                	mov    %ecx,%eax
 80a7a82:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a7a86:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7a89:	89 d7                	mov    %edx,%edi
 80a7a8b:	89 c1                	mov    %eax,%ecx
 80a7a8d:	d3 ef                	shr    %cl,%edi
 80a7a8f:	89 f8                	mov    %edi,%eax
 80a7a91:	31 c6                	xor    %eax,%esi
 80a7a93:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7a96:	8d 50 02             	lea    0x2(%eax),%edx
 80a7a99:	89 d0                	mov    %edx,%eax
 80a7a9b:	c1 f8 1f             	sar    $0x1f,%eax
 80a7a9e:	c1 e8 1e             	shr    $0x1e,%eax
 80a7aa1:	01 c2                	add    %eax,%edx
 80a7aa3:	83 e2 03             	and    $0x3,%edx
 80a7aa6:	89 d1                	mov    %edx,%ecx
 80a7aa8:	29 c1                	sub    %eax,%ecx
 80a7aaa:	89 c8                	mov    %ecx,%eax
 80a7aac:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a7ab0:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7ab5:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7ab8:	89 d7                	mov    %edx,%edi
 80a7aba:	89 c1                	mov    %eax,%ecx
 80a7abc:	d3 e7                	shl    %cl,%edi
 80a7abe:	89 f8                	mov    %edi,%eax
 80a7ac0:	31 f0                	xor    %esi,%eax
 80a7ac2:	89 03                	mov    %eax,(%ebx)
 80a7ac4:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a7ac8:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 80a7acf:	c7 45 f0 1f 00 00 00 	movl   $0x1f,-0x10(%ebp)
 80a7ad6:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a7ad9:	8b 75 dc             	mov    -0x24(%ebp),%esi
 80a7adc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7adf:	89 c2                	mov    %eax,%edx
 80a7ae1:	c1 fa 1f             	sar    $0x1f,%edx
 80a7ae4:	c1 ea 1e             	shr    $0x1e,%edx
 80a7ae7:	01 d0                	add    %edx,%eax
 80a7ae9:	83 e0 03             	and    $0x3,%eax
 80a7aec:	29 d0                	sub    %edx,%eax
 80a7aee:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7af2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7af5:	89 d7                	mov    %edx,%edi
 80a7af7:	89 c1                	mov    %eax,%ecx
 80a7af9:	d3 ef                	shr    %cl,%edi
 80a7afb:	89 f8                	mov    %edi,%eax
 80a7afd:	31 c6                	xor    %eax,%esi
 80a7aff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7b02:	8d 50 03             	lea    0x3(%eax),%edx
 80a7b05:	89 d0                	mov    %edx,%eax
 80a7b07:	c1 f8 1f             	sar    $0x1f,%eax
 80a7b0a:	c1 e8 1e             	shr    $0x1e,%eax
 80a7b0d:	01 c2                	add    %eax,%edx
 80a7b0f:	83 e2 03             	and    $0x3,%edx
 80a7b12:	89 d1                	mov    %edx,%ecx
 80a7b14:	29 c1                	sub    %eax,%ecx
 80a7b16:	89 c8                	mov    %ecx,%eax
 80a7b18:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7b1c:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7b21:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7b24:	89 d7                	mov    %edx,%edi
 80a7b26:	89 c1                	mov    %eax,%ecx
 80a7b28:	d3 e7                	shl    %cl,%edi
 80a7b2a:	89 f8                	mov    %edi,%eax
 80a7b2c:	31 f0                	xor    %esi,%eax
 80a7b2e:	89 03                	mov    %eax,(%ebx)
 80a7b30:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7b33:	8d 58 04             	lea    0x4(%eax),%ebx
 80a7b36:	8b 75 e0             	mov    -0x20(%ebp),%esi
 80a7b39:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7b3c:	8d 50 01             	lea    0x1(%eax),%edx
 80a7b3f:	89 d0                	mov    %edx,%eax
 80a7b41:	c1 f8 1f             	sar    $0x1f,%eax
 80a7b44:	c1 e8 1e             	shr    $0x1e,%eax
 80a7b47:	01 c2                	add    %eax,%edx
 80a7b49:	83 e2 03             	and    $0x3,%edx
 80a7b4c:	89 d1                	mov    %edx,%ecx
 80a7b4e:	29 c1                	sub    %eax,%ecx
 80a7b50:	89 c8                	mov    %ecx,%eax
 80a7b52:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7b56:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7b59:	89 d7                	mov    %edx,%edi
 80a7b5b:	89 c1                	mov    %eax,%ecx
 80a7b5d:	d3 ef                	shr    %cl,%edi
 80a7b5f:	89 f8                	mov    %edi,%eax
 80a7b61:	31 c6                	xor    %eax,%esi
 80a7b63:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7b66:	89 c2                	mov    %eax,%edx
 80a7b68:	c1 fa 1f             	sar    $0x1f,%edx
 80a7b6b:	c1 ea 1e             	shr    $0x1e,%edx
 80a7b6e:	01 d0                	add    %edx,%eax
 80a7b70:	83 e0 03             	and    $0x3,%eax
 80a7b73:	29 d0                	sub    %edx,%eax
 80a7b75:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7b79:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7b7e:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7b81:	89 d7                	mov    %edx,%edi
 80a7b83:	89 c1                	mov    %eax,%ecx
 80a7b85:	d3 e7                	shl    %cl,%edi
 80a7b87:	89 f8                	mov    %edi,%eax
 80a7b89:	31 f0                	xor    %esi,%eax
 80a7b8b:	89 03                	mov    %eax,(%ebx)
 80a7b8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7b90:	8d 58 08             	lea    0x8(%eax),%ebx
 80a7b93:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 80a7b96:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7b99:	8d 50 02             	lea    0x2(%eax),%edx
 80a7b9c:	89 d0                	mov    %edx,%eax
 80a7b9e:	c1 f8 1f             	sar    $0x1f,%eax
 80a7ba1:	c1 e8 1e             	shr    $0x1e,%eax
 80a7ba4:	01 c2                	add    %eax,%edx
 80a7ba6:	83 e2 03             	and    $0x3,%edx
 80a7ba9:	89 d1                	mov    %edx,%ecx
 80a7bab:	29 c1                	sub    %eax,%ecx
 80a7bad:	89 c8                	mov    %ecx,%eax
 80a7baf:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7bb3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7bb6:	89 d7                	mov    %edx,%edi
 80a7bb8:	89 c1                	mov    %eax,%ecx
 80a7bba:	d3 ef                	shr    %cl,%edi
 80a7bbc:	89 f8                	mov    %edi,%eax
 80a7bbe:	31 c6                	xor    %eax,%esi
 80a7bc0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7bc3:	8d 50 01             	lea    0x1(%eax),%edx
 80a7bc6:	89 d0                	mov    %edx,%eax
 80a7bc8:	c1 f8 1f             	sar    $0x1f,%eax
 80a7bcb:	c1 e8 1e             	shr    $0x1e,%eax
 80a7bce:	01 c2                	add    %eax,%edx
 80a7bd0:	83 e2 03             	and    $0x3,%edx
 80a7bd3:	89 d1                	mov    %edx,%ecx
 80a7bd5:	29 c1                	sub    %eax,%ecx
 80a7bd7:	89 c8                	mov    %ecx,%eax
 80a7bd9:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7bdd:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7be2:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7be5:	89 d7                	mov    %edx,%edi
 80a7be7:	89 c1                	mov    %eax,%ecx
 80a7be9:	d3 e7                	shl    %cl,%edi
 80a7beb:	89 f8                	mov    %edi,%eax
 80a7bed:	31 f0                	xor    %esi,%eax
 80a7bef:	89 03                	mov    %eax,(%ebx)
 80a7bf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7bf4:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a7bf7:	8b 75 e8             	mov    -0x18(%ebp),%esi
 80a7bfa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7bfd:	8d 50 03             	lea    0x3(%eax),%edx
 80a7c00:	89 d0                	mov    %edx,%eax
 80a7c02:	c1 f8 1f             	sar    $0x1f,%eax
 80a7c05:	c1 e8 1e             	shr    $0x1e,%eax
 80a7c08:	01 c2                	add    %eax,%edx
 80a7c0a:	83 e2 03             	and    $0x3,%edx
 80a7c0d:	89 d1                	mov    %edx,%ecx
 80a7c0f:	29 c1                	sub    %eax,%ecx
 80a7c11:	89 c8                	mov    %ecx,%eax
 80a7c13:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7c17:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7c1a:	89 d7                	mov    %edx,%edi
 80a7c1c:	89 c1                	mov    %eax,%ecx
 80a7c1e:	d3 ef                	shr    %cl,%edi
 80a7c20:	89 f8                	mov    %edi,%eax
 80a7c22:	31 c6                	xor    %eax,%esi
 80a7c24:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7c27:	8d 50 02             	lea    0x2(%eax),%edx
 80a7c2a:	89 d0                	mov    %edx,%eax
 80a7c2c:	c1 f8 1f             	sar    $0x1f,%eax
 80a7c2f:	c1 e8 1e             	shr    $0x1e,%eax
 80a7c32:	01 c2                	add    %eax,%edx
 80a7c34:	83 e2 03             	and    $0x3,%edx
 80a7c37:	89 d1                	mov    %edx,%ecx
 80a7c39:	29 c1                	sub    %eax,%ecx
 80a7c3b:	89 c8                	mov    %ecx,%eax
 80a7c3d:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a7c41:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7c46:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7c49:	89 d7                	mov    %edx,%edi
 80a7c4b:	89 c1                	mov    %eax,%ecx
 80a7c4d:	d3 e7                	shl    %cl,%edi
 80a7c4f:	89 f8                	mov    %edi,%eax
 80a7c51:	31 f0                	xor    %esi,%eax
 80a7c53:	89 03                	mov    %eax,(%ebx)
 80a7c55:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a7c59:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 80a7c60:	c7 45 f0 1f 00 00 00 	movl   $0x1f,-0x10(%ebp)
 80a7c67:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a7c6a:	8b 75 cc             	mov    -0x34(%ebp),%esi
 80a7c6d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7c70:	89 c2                	mov    %eax,%edx
 80a7c72:	c1 fa 1f             	sar    $0x1f,%edx
 80a7c75:	c1 ea 1e             	shr    $0x1e,%edx
 80a7c78:	01 d0                	add    %edx,%eax
 80a7c7a:	83 e0 03             	and    $0x3,%eax
 80a7c7d:	29 d0                	sub    %edx,%eax
 80a7c7f:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7c83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7c86:	89 d7                	mov    %edx,%edi
 80a7c88:	89 c1                	mov    %eax,%ecx
 80a7c8a:	d3 ef                	shr    %cl,%edi
 80a7c8c:	89 f8                	mov    %edi,%eax
 80a7c8e:	31 c6                	xor    %eax,%esi
 80a7c90:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7c93:	8d 50 03             	lea    0x3(%eax),%edx
 80a7c96:	89 d0                	mov    %edx,%eax
 80a7c98:	c1 f8 1f             	sar    $0x1f,%eax
 80a7c9b:	c1 e8 1e             	shr    $0x1e,%eax
 80a7c9e:	01 c2                	add    %eax,%edx
 80a7ca0:	83 e2 03             	and    $0x3,%edx
 80a7ca3:	89 d1                	mov    %edx,%ecx
 80a7ca5:	29 c1                	sub    %eax,%ecx
 80a7ca7:	89 c8                	mov    %ecx,%eax
 80a7ca9:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7cad:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7cb2:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7cb5:	89 d7                	mov    %edx,%edi
 80a7cb7:	89 c1                	mov    %eax,%ecx
 80a7cb9:	d3 e7                	shl    %cl,%edi
 80a7cbb:	89 f8                	mov    %edi,%eax
 80a7cbd:	31 f0                	xor    %esi,%eax
 80a7cbf:	89 03                	mov    %eax,(%ebx)
 80a7cc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7cc4:	8d 58 04             	lea    0x4(%eax),%ebx
 80a7cc7:	8b 75 d0             	mov    -0x30(%ebp),%esi
 80a7cca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7ccd:	8d 50 01             	lea    0x1(%eax),%edx
 80a7cd0:	89 d0                	mov    %edx,%eax
 80a7cd2:	c1 f8 1f             	sar    $0x1f,%eax
 80a7cd5:	c1 e8 1e             	shr    $0x1e,%eax
 80a7cd8:	01 c2                	add    %eax,%edx
 80a7cda:	83 e2 03             	and    $0x3,%edx
 80a7cdd:	89 d1                	mov    %edx,%ecx
 80a7cdf:	29 c1                	sub    %eax,%ecx
 80a7ce1:	89 c8                	mov    %ecx,%eax
 80a7ce3:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7ce7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7cea:	89 d7                	mov    %edx,%edi
 80a7cec:	89 c1                	mov    %eax,%ecx
 80a7cee:	d3 ef                	shr    %cl,%edi
 80a7cf0:	89 f8                	mov    %edi,%eax
 80a7cf2:	31 c6                	xor    %eax,%esi
 80a7cf4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7cf7:	89 c2                	mov    %eax,%edx
 80a7cf9:	c1 fa 1f             	sar    $0x1f,%edx
 80a7cfc:	c1 ea 1e             	shr    $0x1e,%edx
 80a7cff:	01 d0                	add    %edx,%eax
 80a7d01:	83 e0 03             	and    $0x3,%eax
 80a7d04:	29 d0                	sub    %edx,%eax
 80a7d06:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7d0a:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7d0f:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7d12:	89 d7                	mov    %edx,%edi
 80a7d14:	89 c1                	mov    %eax,%ecx
 80a7d16:	d3 e7                	shl    %cl,%edi
 80a7d18:	89 f8                	mov    %edi,%eax
 80a7d1a:	31 f0                	xor    %esi,%eax
 80a7d1c:	89 03                	mov    %eax,(%ebx)
 80a7d1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7d21:	8d 58 08             	lea    0x8(%eax),%ebx
 80a7d24:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 80a7d27:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7d2a:	8d 50 02             	lea    0x2(%eax),%edx
 80a7d2d:	89 d0                	mov    %edx,%eax
 80a7d2f:	c1 f8 1f             	sar    $0x1f,%eax
 80a7d32:	c1 e8 1e             	shr    $0x1e,%eax
 80a7d35:	01 c2                	add    %eax,%edx
 80a7d37:	83 e2 03             	and    $0x3,%edx
 80a7d3a:	89 d1                	mov    %edx,%ecx
 80a7d3c:	29 c1                	sub    %eax,%ecx
 80a7d3e:	89 c8                	mov    %ecx,%eax
 80a7d40:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7d44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7d47:	89 d7                	mov    %edx,%edi
 80a7d49:	89 c1                	mov    %eax,%ecx
 80a7d4b:	d3 ef                	shr    %cl,%edi
 80a7d4d:	89 f8                	mov    %edi,%eax
 80a7d4f:	31 c6                	xor    %eax,%esi
 80a7d51:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7d54:	8d 50 01             	lea    0x1(%eax),%edx
 80a7d57:	89 d0                	mov    %edx,%eax
 80a7d59:	c1 f8 1f             	sar    $0x1f,%eax
 80a7d5c:	c1 e8 1e             	shr    $0x1e,%eax
 80a7d5f:	01 c2                	add    %eax,%edx
 80a7d61:	83 e2 03             	and    $0x3,%edx
 80a7d64:	89 d1                	mov    %edx,%ecx
 80a7d66:	29 c1                	sub    %eax,%ecx
 80a7d68:	89 c8                	mov    %ecx,%eax
 80a7d6a:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7d6e:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7d73:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7d76:	89 d7                	mov    %edx,%edi
 80a7d78:	89 c1                	mov    %eax,%ecx
 80a7d7a:	d3 e7                	shl    %cl,%edi
 80a7d7c:	89 f8                	mov    %edi,%eax
 80a7d7e:	31 f0                	xor    %esi,%eax
 80a7d80:	89 03                	mov    %eax,(%ebx)
 80a7d82:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7d85:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a7d88:	8b 75 d8             	mov    -0x28(%ebp),%esi
 80a7d8b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7d8e:	8d 50 03             	lea    0x3(%eax),%edx
 80a7d91:	89 d0                	mov    %edx,%eax
 80a7d93:	c1 f8 1f             	sar    $0x1f,%eax
 80a7d96:	c1 e8 1e             	shr    $0x1e,%eax
 80a7d99:	01 c2                	add    %eax,%edx
 80a7d9b:	83 e2 03             	and    $0x3,%edx
 80a7d9e:	89 d1                	mov    %edx,%ecx
 80a7da0:	29 c1                	sub    %eax,%ecx
 80a7da2:	89 c8                	mov    %ecx,%eax
 80a7da4:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7da8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7dab:	89 d7                	mov    %edx,%edi
 80a7dad:	89 c1                	mov    %eax,%ecx
 80a7daf:	d3 ef                	shr    %cl,%edi
 80a7db1:	89 f8                	mov    %edi,%eax
 80a7db3:	31 c6                	xor    %eax,%esi
 80a7db5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7db8:	8d 50 02             	lea    0x2(%eax),%edx
 80a7dbb:	89 d0                	mov    %edx,%eax
 80a7dbd:	c1 f8 1f             	sar    $0x1f,%eax
 80a7dc0:	c1 e8 1e             	shr    $0x1e,%eax
 80a7dc3:	01 c2                	add    %eax,%edx
 80a7dc5:	83 e2 03             	and    $0x3,%edx
 80a7dc8:	89 d1                	mov    %edx,%ecx
 80a7dca:	29 c1                	sub    %eax,%ecx
 80a7dcc:	89 c8                	mov    %ecx,%eax
 80a7dce:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a7dd2:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7dd7:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7dda:	89 d7                	mov    %edx,%edi
 80a7ddc:	89 c1                	mov    %eax,%ecx
 80a7dde:	d3 e7                	shl    %cl,%edi
 80a7de0:	89 f8                	mov    %edi,%eax
 80a7de2:	31 f0                	xor    %esi,%eax
 80a7de4:	89 03                	mov    %eax,(%ebx)
 80a7de6:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a7dea:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 80a7df1:	c7 45 f0 1f 00 00 00 	movl   $0x1f,-0x10(%ebp)
 80a7df8:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a7dfb:	8b 75 bc             	mov    -0x44(%ebp),%esi
 80a7dfe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7e01:	89 c2                	mov    %eax,%edx
 80a7e03:	c1 fa 1f             	sar    $0x1f,%edx
 80a7e06:	c1 ea 1e             	shr    $0x1e,%edx
 80a7e09:	01 d0                	add    %edx,%eax
 80a7e0b:	83 e0 03             	and    $0x3,%eax
 80a7e0e:	29 d0                	sub    %edx,%eax
 80a7e10:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7e14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7e17:	89 d7                	mov    %edx,%edi
 80a7e19:	89 c1                	mov    %eax,%ecx
 80a7e1b:	d3 ef                	shr    %cl,%edi
 80a7e1d:	89 f8                	mov    %edi,%eax
 80a7e1f:	31 c6                	xor    %eax,%esi
 80a7e21:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7e24:	8d 50 03             	lea    0x3(%eax),%edx
 80a7e27:	89 d0                	mov    %edx,%eax
 80a7e29:	c1 f8 1f             	sar    $0x1f,%eax
 80a7e2c:	c1 e8 1e             	shr    $0x1e,%eax
 80a7e2f:	01 c2                	add    %eax,%edx
 80a7e31:	83 e2 03             	and    $0x3,%edx
 80a7e34:	89 d1                	mov    %edx,%ecx
 80a7e36:	29 c1                	sub    %eax,%ecx
 80a7e38:	89 c8                	mov    %ecx,%eax
 80a7e3a:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7e3e:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7e43:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7e46:	89 d7                	mov    %edx,%edi
 80a7e48:	89 c1                	mov    %eax,%ecx
 80a7e4a:	d3 e7                	shl    %cl,%edi
 80a7e4c:	89 f8                	mov    %edi,%eax
 80a7e4e:	31 f0                	xor    %esi,%eax
 80a7e50:	89 03                	mov    %eax,(%ebx)
 80a7e52:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7e55:	8d 58 04             	lea    0x4(%eax),%ebx
 80a7e58:	8b 75 c0             	mov    -0x40(%ebp),%esi
 80a7e5b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7e5e:	8d 50 01             	lea    0x1(%eax),%edx
 80a7e61:	89 d0                	mov    %edx,%eax
 80a7e63:	c1 f8 1f             	sar    $0x1f,%eax
 80a7e66:	c1 e8 1e             	shr    $0x1e,%eax
 80a7e69:	01 c2                	add    %eax,%edx
 80a7e6b:	83 e2 03             	and    $0x3,%edx
 80a7e6e:	89 d1                	mov    %edx,%ecx
 80a7e70:	29 c1                	sub    %eax,%ecx
 80a7e72:	89 c8                	mov    %ecx,%eax
 80a7e74:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7e78:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7e7b:	89 d7                	mov    %edx,%edi
 80a7e7d:	89 c1                	mov    %eax,%ecx
 80a7e7f:	d3 ef                	shr    %cl,%edi
 80a7e81:	89 f8                	mov    %edi,%eax
 80a7e83:	31 c6                	xor    %eax,%esi
 80a7e85:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7e88:	89 c2                	mov    %eax,%edx
 80a7e8a:	c1 fa 1f             	sar    $0x1f,%edx
 80a7e8d:	c1 ea 1e             	shr    $0x1e,%edx
 80a7e90:	01 d0                	add    %edx,%eax
 80a7e92:	83 e0 03             	and    $0x3,%eax
 80a7e95:	29 d0                	sub    %edx,%eax
 80a7e97:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7e9b:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7ea0:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7ea3:	89 d7                	mov    %edx,%edi
 80a7ea5:	89 c1                	mov    %eax,%ecx
 80a7ea7:	d3 e7                	shl    %cl,%edi
 80a7ea9:	89 f8                	mov    %edi,%eax
 80a7eab:	31 f0                	xor    %esi,%eax
 80a7ead:	89 03                	mov    %eax,(%ebx)
 80a7eaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7eb2:	8d 58 08             	lea    0x8(%eax),%ebx
 80a7eb5:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 80a7eb8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7ebb:	8d 50 02             	lea    0x2(%eax),%edx
 80a7ebe:	89 d0                	mov    %edx,%eax
 80a7ec0:	c1 f8 1f             	sar    $0x1f,%eax
 80a7ec3:	c1 e8 1e             	shr    $0x1e,%eax
 80a7ec6:	01 c2                	add    %eax,%edx
 80a7ec8:	83 e2 03             	and    $0x3,%edx
 80a7ecb:	89 d1                	mov    %edx,%ecx
 80a7ecd:	29 c1                	sub    %eax,%ecx
 80a7ecf:	89 c8                	mov    %ecx,%eax
 80a7ed1:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7ed5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7ed8:	89 d7                	mov    %edx,%edi
 80a7eda:	89 c1                	mov    %eax,%ecx
 80a7edc:	d3 ef                	shr    %cl,%edi
 80a7ede:	89 f8                	mov    %edi,%eax
 80a7ee0:	31 c6                	xor    %eax,%esi
 80a7ee2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7ee5:	8d 50 01             	lea    0x1(%eax),%edx
 80a7ee8:	89 d0                	mov    %edx,%eax
 80a7eea:	c1 f8 1f             	sar    $0x1f,%eax
 80a7eed:	c1 e8 1e             	shr    $0x1e,%eax
 80a7ef0:	01 c2                	add    %eax,%edx
 80a7ef2:	83 e2 03             	and    $0x3,%edx
 80a7ef5:	89 d1                	mov    %edx,%ecx
 80a7ef7:	29 c1                	sub    %eax,%ecx
 80a7ef9:	89 c8                	mov    %ecx,%eax
 80a7efb:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7eff:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7f04:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7f07:	89 d7                	mov    %edx,%edi
 80a7f09:	89 c1                	mov    %eax,%ecx
 80a7f0b:	d3 e7                	shl    %cl,%edi
 80a7f0d:	89 f8                	mov    %edi,%eax
 80a7f0f:	31 f0                	xor    %esi,%eax
 80a7f11:	89 03                	mov    %eax,(%ebx)
 80a7f13:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7f16:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a7f19:	8b 75 c8             	mov    -0x38(%ebp),%esi
 80a7f1c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7f1f:	8d 50 03             	lea    0x3(%eax),%edx
 80a7f22:	89 d0                	mov    %edx,%eax
 80a7f24:	c1 f8 1f             	sar    $0x1f,%eax
 80a7f27:	c1 e8 1e             	shr    $0x1e,%eax
 80a7f2a:	01 c2                	add    %eax,%edx
 80a7f2c:	83 e2 03             	and    $0x3,%edx
 80a7f2f:	89 d1                	mov    %edx,%ecx
 80a7f31:	29 c1                	sub    %eax,%ecx
 80a7f33:	89 c8                	mov    %ecx,%eax
 80a7f35:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7f39:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7f3c:	89 d7                	mov    %edx,%edi
 80a7f3e:	89 c1                	mov    %eax,%ecx
 80a7f40:	d3 ef                	shr    %cl,%edi
 80a7f42:	89 f8                	mov    %edi,%eax
 80a7f44:	31 c6                	xor    %eax,%esi
 80a7f46:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7f49:	8d 50 02             	lea    0x2(%eax),%edx
 80a7f4c:	89 d0                	mov    %edx,%eax
 80a7f4e:	c1 f8 1f             	sar    $0x1f,%eax
 80a7f51:	c1 e8 1e             	shr    $0x1e,%eax
 80a7f54:	01 c2                	add    %eax,%edx
 80a7f56:	83 e2 03             	and    $0x3,%edx
 80a7f59:	89 d1                	mov    %edx,%ecx
 80a7f5b:	29 c1                	sub    %eax,%ecx
 80a7f5d:	89 c8                	mov    %ecx,%eax
 80a7f5f:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a7f63:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7f68:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7f6b:	89 d7                	mov    %edx,%edi
 80a7f6d:	89 c1                	mov    %eax,%ecx
 80a7f6f:	d3 e7                	shl    %cl,%edi
 80a7f71:	89 f8                	mov    %edi,%eax
 80a7f73:	31 f0                	xor    %esi,%eax
 80a7f75:	89 03                	mov    %eax,(%ebx)
 80a7f77:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a7f7b:	c7 45 ec 04 00 00 00 	movl   $0x4,-0x14(%ebp)
 80a7f82:	c7 45 f0 1f 00 00 00 	movl   $0x1f,-0x10(%ebp)
 80a7f89:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a7f8c:	8b 75 ac             	mov    -0x54(%ebp),%esi
 80a7f8f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7f92:	89 c2                	mov    %eax,%edx
 80a7f94:	c1 fa 1f             	sar    $0x1f,%edx
 80a7f97:	c1 ea 1e             	shr    $0x1e,%edx
 80a7f9a:	01 d0                	add    %edx,%eax
 80a7f9c:	83 e0 03             	and    $0x3,%eax
 80a7f9f:	29 d0                	sub    %edx,%eax
 80a7fa1:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a7fa5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a7fa8:	89 d7                	mov    %edx,%edi
 80a7faa:	89 c1                	mov    %eax,%ecx
 80a7fac:	d3 ef                	shr    %cl,%edi
 80a7fae:	89 f8                	mov    %edi,%eax
 80a7fb0:	31 c6                	xor    %eax,%esi
 80a7fb2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7fb5:	8d 50 03             	lea    0x3(%eax),%edx
 80a7fb8:	89 d0                	mov    %edx,%eax
 80a7fba:	c1 f8 1f             	sar    $0x1f,%eax
 80a7fbd:	c1 e8 1e             	shr    $0x1e,%eax
 80a7fc0:	01 c2                	add    %eax,%edx
 80a7fc2:	83 e2 03             	and    $0x3,%edx
 80a7fc5:	89 d1                	mov    %edx,%ecx
 80a7fc7:	29 c1                	sub    %eax,%ecx
 80a7fc9:	89 c8                	mov    %ecx,%eax
 80a7fcb:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a7fcf:	b8 20 00 00 00       	mov    $0x20,%eax
 80a7fd4:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a7fd7:	89 d7                	mov    %edx,%edi
 80a7fd9:	89 c1                	mov    %eax,%ecx
 80a7fdb:	d3 e7                	shl    %cl,%edi
 80a7fdd:	89 f8                	mov    %edi,%eax
 80a7fdf:	31 f0                	xor    %esi,%eax
 80a7fe1:	89 03                	mov    %eax,(%ebx)
 80a7fe3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a7fe6:	8d 58 04             	lea    0x4(%eax),%ebx
 80a7fe9:	8b 75 b0             	mov    -0x50(%ebp),%esi
 80a7fec:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a7fef:	8d 50 01             	lea    0x1(%eax),%edx
 80a7ff2:	89 d0                	mov    %edx,%eax
 80a7ff4:	c1 f8 1f             	sar    $0x1f,%eax
 80a7ff7:	c1 e8 1e             	shr    $0x1e,%eax
 80a7ffa:	01 c2                	add    %eax,%edx
 80a7ffc:	83 e2 03             	and    $0x3,%edx
 80a7fff:	89 d1                	mov    %edx,%ecx
 80a8001:	29 c1                	sub    %eax,%ecx
 80a8003:	89 c8                	mov    %ecx,%eax
 80a8005:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8009:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a800c:	89 d7                	mov    %edx,%edi
 80a800e:	89 c1                	mov    %eax,%ecx
 80a8010:	d3 ef                	shr    %cl,%edi
 80a8012:	89 f8                	mov    %edi,%eax
 80a8014:	31 c6                	xor    %eax,%esi
 80a8016:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8019:	89 c2                	mov    %eax,%edx
 80a801b:	c1 fa 1f             	sar    $0x1f,%edx
 80a801e:	c1 ea 1e             	shr    $0x1e,%edx
 80a8021:	01 d0                	add    %edx,%eax
 80a8023:	83 e0 03             	and    $0x3,%eax
 80a8026:	29 d0                	sub    %edx,%eax
 80a8028:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a802c:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8031:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8034:	89 d7                	mov    %edx,%edi
 80a8036:	89 c1                	mov    %eax,%ecx
 80a8038:	d3 e7                	shl    %cl,%edi
 80a803a:	89 f8                	mov    %edi,%eax
 80a803c:	31 f0                	xor    %esi,%eax
 80a803e:	89 03                	mov    %eax,(%ebx)
 80a8040:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8043:	8d 58 08             	lea    0x8(%eax),%ebx
 80a8046:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 80a8049:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a804c:	8d 50 02             	lea    0x2(%eax),%edx
 80a804f:	89 d0                	mov    %edx,%eax
 80a8051:	c1 f8 1f             	sar    $0x1f,%eax
 80a8054:	c1 e8 1e             	shr    $0x1e,%eax
 80a8057:	01 c2                	add    %eax,%edx
 80a8059:	83 e2 03             	and    $0x3,%edx
 80a805c:	89 d1                	mov    %edx,%ecx
 80a805e:	29 c1                	sub    %eax,%ecx
 80a8060:	89 c8                	mov    %ecx,%eax
 80a8062:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8066:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8069:	89 d7                	mov    %edx,%edi
 80a806b:	89 c1                	mov    %eax,%ecx
 80a806d:	d3 ef                	shr    %cl,%edi
 80a806f:	89 f8                	mov    %edi,%eax
 80a8071:	31 c6                	xor    %eax,%esi
 80a8073:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8076:	8d 50 01             	lea    0x1(%eax),%edx
 80a8079:	89 d0                	mov    %edx,%eax
 80a807b:	c1 f8 1f             	sar    $0x1f,%eax
 80a807e:	c1 e8 1e             	shr    $0x1e,%eax
 80a8081:	01 c2                	add    %eax,%edx
 80a8083:	83 e2 03             	and    $0x3,%edx
 80a8086:	89 d1                	mov    %edx,%ecx
 80a8088:	29 c1                	sub    %eax,%ecx
 80a808a:	89 c8                	mov    %ecx,%eax
 80a808c:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8090:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8095:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8098:	89 d7                	mov    %edx,%edi
 80a809a:	89 c1                	mov    %eax,%ecx
 80a809c:	d3 e7                	shl    %cl,%edi
 80a809e:	89 f8                	mov    %edi,%eax
 80a80a0:	31 f0                	xor    %esi,%eax
 80a80a2:	89 03                	mov    %eax,(%ebx)
 80a80a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a80a7:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a80aa:	8b 75 b8             	mov    -0x48(%ebp),%esi
 80a80ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a80b0:	8d 50 03             	lea    0x3(%eax),%edx
 80a80b3:	89 d0                	mov    %edx,%eax
 80a80b5:	c1 f8 1f             	sar    $0x1f,%eax
 80a80b8:	c1 e8 1e             	shr    $0x1e,%eax
 80a80bb:	01 c2                	add    %eax,%edx
 80a80bd:	83 e2 03             	and    $0x3,%edx
 80a80c0:	89 d1                	mov    %edx,%ecx
 80a80c2:	29 c1                	sub    %eax,%ecx
 80a80c4:	89 c8                	mov    %ecx,%eax
 80a80c6:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a80ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a80cd:	89 d7                	mov    %edx,%edi
 80a80cf:	89 c1                	mov    %eax,%ecx
 80a80d1:	d3 ef                	shr    %cl,%edi
 80a80d3:	89 f8                	mov    %edi,%eax
 80a80d5:	31 c6                	xor    %eax,%esi
 80a80d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a80da:	8d 50 02             	lea    0x2(%eax),%edx
 80a80dd:	89 d0                	mov    %edx,%eax
 80a80df:	c1 f8 1f             	sar    $0x1f,%eax
 80a80e2:	c1 e8 1e             	shr    $0x1e,%eax
 80a80e5:	01 c2                	add    %eax,%edx
 80a80e7:	83 e2 03             	and    $0x3,%edx
 80a80ea:	89 d1                	mov    %edx,%ecx
 80a80ec:	29 c1                	sub    %eax,%ecx
 80a80ee:	89 c8                	mov    %ecx,%eax
 80a80f0:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a80f4:	b8 20 00 00 00       	mov    $0x20,%eax
 80a80f9:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a80fc:	89 d7                	mov    %edx,%edi
 80a80fe:	89 c1                	mov    %eax,%ecx
 80a8100:	d3 e7                	shl    %cl,%edi
 80a8102:	89 f8                	mov    %edi,%eax
 80a8104:	31 f0                	xor    %esi,%eax
 80a8106:	89 03                	mov    %eax,(%ebx)
 80a8108:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a810c:	c7 45 ec 02 00 00 00 	movl   $0x2,-0x14(%ebp)
 80a8113:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 80a811a:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a811d:	8b 75 dc             	mov    -0x24(%ebp),%esi
 80a8120:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8123:	89 c2                	mov    %eax,%edx
 80a8125:	c1 fa 1f             	sar    $0x1f,%edx
 80a8128:	c1 ea 1e             	shr    $0x1e,%edx
 80a812b:	01 d0                	add    %edx,%eax
 80a812d:	83 e0 03             	and    $0x3,%eax
 80a8130:	29 d0                	sub    %edx,%eax
 80a8132:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8136:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8139:	89 d7                	mov    %edx,%edi
 80a813b:	89 c1                	mov    %eax,%ecx
 80a813d:	d3 ef                	shr    %cl,%edi
 80a813f:	89 f8                	mov    %edi,%eax
 80a8141:	31 c6                	xor    %eax,%esi
 80a8143:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8146:	8d 50 03             	lea    0x3(%eax),%edx
 80a8149:	89 d0                	mov    %edx,%eax
 80a814b:	c1 f8 1f             	sar    $0x1f,%eax
 80a814e:	c1 e8 1e             	shr    $0x1e,%eax
 80a8151:	01 c2                	add    %eax,%edx
 80a8153:	83 e2 03             	and    $0x3,%edx
 80a8156:	89 d1                	mov    %edx,%ecx
 80a8158:	29 c1                	sub    %eax,%ecx
 80a815a:	89 c8                	mov    %ecx,%eax
 80a815c:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8160:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8165:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8168:	89 d7                	mov    %edx,%edi
 80a816a:	89 c1                	mov    %eax,%ecx
 80a816c:	d3 e7                	shl    %cl,%edi
 80a816e:	89 f8                	mov    %edi,%eax
 80a8170:	31 f0                	xor    %esi,%eax
 80a8172:	89 03                	mov    %eax,(%ebx)
 80a8174:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8177:	8d 58 04             	lea    0x4(%eax),%ebx
 80a817a:	8b 75 e0             	mov    -0x20(%ebp),%esi
 80a817d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8180:	8d 50 01             	lea    0x1(%eax),%edx
 80a8183:	89 d0                	mov    %edx,%eax
 80a8185:	c1 f8 1f             	sar    $0x1f,%eax
 80a8188:	c1 e8 1e             	shr    $0x1e,%eax
 80a818b:	01 c2                	add    %eax,%edx
 80a818d:	83 e2 03             	and    $0x3,%edx
 80a8190:	89 d1                	mov    %edx,%ecx
 80a8192:	29 c1                	sub    %eax,%ecx
 80a8194:	89 c8                	mov    %ecx,%eax
 80a8196:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a819a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a819d:	89 d7                	mov    %edx,%edi
 80a819f:	89 c1                	mov    %eax,%ecx
 80a81a1:	d3 ef                	shr    %cl,%edi
 80a81a3:	89 f8                	mov    %edi,%eax
 80a81a5:	31 c6                	xor    %eax,%esi
 80a81a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a81aa:	89 c2                	mov    %eax,%edx
 80a81ac:	c1 fa 1f             	sar    $0x1f,%edx
 80a81af:	c1 ea 1e             	shr    $0x1e,%edx
 80a81b2:	01 d0                	add    %edx,%eax
 80a81b4:	83 e0 03             	and    $0x3,%eax
 80a81b7:	29 d0                	sub    %edx,%eax
 80a81b9:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a81bd:	b8 20 00 00 00       	mov    $0x20,%eax
 80a81c2:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a81c5:	89 d7                	mov    %edx,%edi
 80a81c7:	89 c1                	mov    %eax,%ecx
 80a81c9:	d3 e7                	shl    %cl,%edi
 80a81cb:	89 f8                	mov    %edi,%eax
 80a81cd:	31 f0                	xor    %esi,%eax
 80a81cf:	89 03                	mov    %eax,(%ebx)
 80a81d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a81d4:	8d 58 08             	lea    0x8(%eax),%ebx
 80a81d7:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 80a81da:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a81dd:	8d 50 02             	lea    0x2(%eax),%edx
 80a81e0:	89 d0                	mov    %edx,%eax
 80a81e2:	c1 f8 1f             	sar    $0x1f,%eax
 80a81e5:	c1 e8 1e             	shr    $0x1e,%eax
 80a81e8:	01 c2                	add    %eax,%edx
 80a81ea:	83 e2 03             	and    $0x3,%edx
 80a81ed:	89 d1                	mov    %edx,%ecx
 80a81ef:	29 c1                	sub    %eax,%ecx
 80a81f1:	89 c8                	mov    %ecx,%eax
 80a81f3:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a81f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a81fa:	89 d7                	mov    %edx,%edi
 80a81fc:	89 c1                	mov    %eax,%ecx
 80a81fe:	d3 ef                	shr    %cl,%edi
 80a8200:	89 f8                	mov    %edi,%eax
 80a8202:	31 c6                	xor    %eax,%esi
 80a8204:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8207:	8d 50 01             	lea    0x1(%eax),%edx
 80a820a:	89 d0                	mov    %edx,%eax
 80a820c:	c1 f8 1f             	sar    $0x1f,%eax
 80a820f:	c1 e8 1e             	shr    $0x1e,%eax
 80a8212:	01 c2                	add    %eax,%edx
 80a8214:	83 e2 03             	and    $0x3,%edx
 80a8217:	89 d1                	mov    %edx,%ecx
 80a8219:	29 c1                	sub    %eax,%ecx
 80a821b:	89 c8                	mov    %ecx,%eax
 80a821d:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8221:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8226:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8229:	89 d7                	mov    %edx,%edi
 80a822b:	89 c1                	mov    %eax,%ecx
 80a822d:	d3 e7                	shl    %cl,%edi
 80a822f:	89 f8                	mov    %edi,%eax
 80a8231:	31 f0                	xor    %esi,%eax
 80a8233:	89 03                	mov    %eax,(%ebx)
 80a8235:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8238:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a823b:	8b 75 e8             	mov    -0x18(%ebp),%esi
 80a823e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8241:	8d 50 03             	lea    0x3(%eax),%edx
 80a8244:	89 d0                	mov    %edx,%eax
 80a8246:	c1 f8 1f             	sar    $0x1f,%eax
 80a8249:	c1 e8 1e             	shr    $0x1e,%eax
 80a824c:	01 c2                	add    %eax,%edx
 80a824e:	83 e2 03             	and    $0x3,%edx
 80a8251:	89 d1                	mov    %edx,%ecx
 80a8253:	29 c1                	sub    %eax,%ecx
 80a8255:	89 c8                	mov    %ecx,%eax
 80a8257:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a825b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a825e:	89 d7                	mov    %edx,%edi
 80a8260:	89 c1                	mov    %eax,%ecx
 80a8262:	d3 ef                	shr    %cl,%edi
 80a8264:	89 f8                	mov    %edi,%eax
 80a8266:	31 c6                	xor    %eax,%esi
 80a8268:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a826b:	8d 50 02             	lea    0x2(%eax),%edx
 80a826e:	89 d0                	mov    %edx,%eax
 80a8270:	c1 f8 1f             	sar    $0x1f,%eax
 80a8273:	c1 e8 1e             	shr    $0x1e,%eax
 80a8276:	01 c2                	add    %eax,%edx
 80a8278:	83 e2 03             	and    $0x3,%edx
 80a827b:	89 d1                	mov    %edx,%ecx
 80a827d:	29 c1                	sub    %eax,%ecx
 80a827f:	89 c8                	mov    %ecx,%eax
 80a8281:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8285:	b8 20 00 00 00       	mov    $0x20,%eax
 80a828a:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a828d:	89 d7                	mov    %edx,%edi
 80a828f:	89 c1                	mov    %eax,%ecx
 80a8291:	d3 e7                	shl    %cl,%edi
 80a8293:	89 f8                	mov    %edi,%eax
 80a8295:	31 f0                	xor    %esi,%eax
 80a8297:	89 03                	mov    %eax,(%ebx)
 80a8299:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a829d:	c7 45 ec 02 00 00 00 	movl   $0x2,-0x14(%ebp)
 80a82a4:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 80a82ab:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a82ae:	8b 75 cc             	mov    -0x34(%ebp),%esi
 80a82b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a82b4:	89 c2                	mov    %eax,%edx
 80a82b6:	c1 fa 1f             	sar    $0x1f,%edx
 80a82b9:	c1 ea 1e             	shr    $0x1e,%edx
 80a82bc:	01 d0                	add    %edx,%eax
 80a82be:	83 e0 03             	and    $0x3,%eax
 80a82c1:	29 d0                	sub    %edx,%eax
 80a82c3:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a82c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a82ca:	89 d7                	mov    %edx,%edi
 80a82cc:	89 c1                	mov    %eax,%ecx
 80a82ce:	d3 ef                	shr    %cl,%edi
 80a82d0:	89 f8                	mov    %edi,%eax
 80a82d2:	31 c6                	xor    %eax,%esi
 80a82d4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a82d7:	8d 50 03             	lea    0x3(%eax),%edx
 80a82da:	89 d0                	mov    %edx,%eax
 80a82dc:	c1 f8 1f             	sar    $0x1f,%eax
 80a82df:	c1 e8 1e             	shr    $0x1e,%eax
 80a82e2:	01 c2                	add    %eax,%edx
 80a82e4:	83 e2 03             	and    $0x3,%edx
 80a82e7:	89 d1                	mov    %edx,%ecx
 80a82e9:	29 c1                	sub    %eax,%ecx
 80a82eb:	89 c8                	mov    %ecx,%eax
 80a82ed:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a82f1:	b8 20 00 00 00       	mov    $0x20,%eax
 80a82f6:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a82f9:	89 d7                	mov    %edx,%edi
 80a82fb:	89 c1                	mov    %eax,%ecx
 80a82fd:	d3 e7                	shl    %cl,%edi
 80a82ff:	89 f8                	mov    %edi,%eax
 80a8301:	31 f0                	xor    %esi,%eax
 80a8303:	89 03                	mov    %eax,(%ebx)
 80a8305:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8308:	8d 58 04             	lea    0x4(%eax),%ebx
 80a830b:	8b 75 d0             	mov    -0x30(%ebp),%esi
 80a830e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8311:	8d 50 01             	lea    0x1(%eax),%edx
 80a8314:	89 d0                	mov    %edx,%eax
 80a8316:	c1 f8 1f             	sar    $0x1f,%eax
 80a8319:	c1 e8 1e             	shr    $0x1e,%eax
 80a831c:	01 c2                	add    %eax,%edx
 80a831e:	83 e2 03             	and    $0x3,%edx
 80a8321:	89 d1                	mov    %edx,%ecx
 80a8323:	29 c1                	sub    %eax,%ecx
 80a8325:	89 c8                	mov    %ecx,%eax
 80a8327:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a832b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a832e:	89 d7                	mov    %edx,%edi
 80a8330:	89 c1                	mov    %eax,%ecx
 80a8332:	d3 ef                	shr    %cl,%edi
 80a8334:	89 f8                	mov    %edi,%eax
 80a8336:	31 c6                	xor    %eax,%esi
 80a8338:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a833b:	89 c2                	mov    %eax,%edx
 80a833d:	c1 fa 1f             	sar    $0x1f,%edx
 80a8340:	c1 ea 1e             	shr    $0x1e,%edx
 80a8343:	01 d0                	add    %edx,%eax
 80a8345:	83 e0 03             	and    $0x3,%eax
 80a8348:	29 d0                	sub    %edx,%eax
 80a834a:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a834e:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8353:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8356:	89 d7                	mov    %edx,%edi
 80a8358:	89 c1                	mov    %eax,%ecx
 80a835a:	d3 e7                	shl    %cl,%edi
 80a835c:	89 f8                	mov    %edi,%eax
 80a835e:	31 f0                	xor    %esi,%eax
 80a8360:	89 03                	mov    %eax,(%ebx)
 80a8362:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8365:	8d 58 08             	lea    0x8(%eax),%ebx
 80a8368:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 80a836b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a836e:	8d 50 02             	lea    0x2(%eax),%edx
 80a8371:	89 d0                	mov    %edx,%eax
 80a8373:	c1 f8 1f             	sar    $0x1f,%eax
 80a8376:	c1 e8 1e             	shr    $0x1e,%eax
 80a8379:	01 c2                	add    %eax,%edx
 80a837b:	83 e2 03             	and    $0x3,%edx
 80a837e:	89 d1                	mov    %edx,%ecx
 80a8380:	29 c1                	sub    %eax,%ecx
 80a8382:	89 c8                	mov    %ecx,%eax
 80a8384:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a8388:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a838b:	89 d7                	mov    %edx,%edi
 80a838d:	89 c1                	mov    %eax,%ecx
 80a838f:	d3 ef                	shr    %cl,%edi
 80a8391:	89 f8                	mov    %edi,%eax
 80a8393:	31 c6                	xor    %eax,%esi
 80a8395:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8398:	8d 50 01             	lea    0x1(%eax),%edx
 80a839b:	89 d0                	mov    %edx,%eax
 80a839d:	c1 f8 1f             	sar    $0x1f,%eax
 80a83a0:	c1 e8 1e             	shr    $0x1e,%eax
 80a83a3:	01 c2                	add    %eax,%edx
 80a83a5:	83 e2 03             	and    $0x3,%edx
 80a83a8:	89 d1                	mov    %edx,%ecx
 80a83aa:	29 c1                	sub    %eax,%ecx
 80a83ac:	89 c8                	mov    %ecx,%eax
 80a83ae:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a83b2:	b8 20 00 00 00       	mov    $0x20,%eax
 80a83b7:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a83ba:	89 d7                	mov    %edx,%edi
 80a83bc:	89 c1                	mov    %eax,%ecx
 80a83be:	d3 e7                	shl    %cl,%edi
 80a83c0:	89 f8                	mov    %edi,%eax
 80a83c2:	31 f0                	xor    %esi,%eax
 80a83c4:	89 03                	mov    %eax,(%ebx)
 80a83c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a83c9:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a83cc:	8b 75 d8             	mov    -0x28(%ebp),%esi
 80a83cf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a83d2:	8d 50 03             	lea    0x3(%eax),%edx
 80a83d5:	89 d0                	mov    %edx,%eax
 80a83d7:	c1 f8 1f             	sar    $0x1f,%eax
 80a83da:	c1 e8 1e             	shr    $0x1e,%eax
 80a83dd:	01 c2                	add    %eax,%edx
 80a83df:	83 e2 03             	and    $0x3,%edx
 80a83e2:	89 d1                	mov    %edx,%ecx
 80a83e4:	29 c1                	sub    %eax,%ecx
 80a83e6:	89 c8                	mov    %ecx,%eax
 80a83e8:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a83ec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a83ef:	89 d7                	mov    %edx,%edi
 80a83f1:	89 c1                	mov    %eax,%ecx
 80a83f3:	d3 ef                	shr    %cl,%edi
 80a83f5:	89 f8                	mov    %edi,%eax
 80a83f7:	31 c6                	xor    %eax,%esi
 80a83f9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a83fc:	8d 50 02             	lea    0x2(%eax),%edx
 80a83ff:	89 d0                	mov    %edx,%eax
 80a8401:	c1 f8 1f             	sar    $0x1f,%eax
 80a8404:	c1 e8 1e             	shr    $0x1e,%eax
 80a8407:	01 c2                	add    %eax,%edx
 80a8409:	83 e2 03             	and    $0x3,%edx
 80a840c:	89 d1                	mov    %edx,%ecx
 80a840e:	29 c1                	sub    %eax,%ecx
 80a8410:	89 c8                	mov    %ecx,%eax
 80a8412:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a8416:	b8 20 00 00 00       	mov    $0x20,%eax
 80a841b:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a841e:	89 d7                	mov    %edx,%edi
 80a8420:	89 c1                	mov    %eax,%ecx
 80a8422:	d3 e7                	shl    %cl,%edi
 80a8424:	89 f8                	mov    %edi,%eax
 80a8426:	31 f0                	xor    %esi,%eax
 80a8428:	89 03                	mov    %eax,(%ebx)
 80a842a:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a842e:	c7 45 ec 02 00 00 00 	movl   $0x2,-0x14(%ebp)
 80a8435:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 80a843c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a843f:	8b 75 bc             	mov    -0x44(%ebp),%esi
 80a8442:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8445:	89 c2                	mov    %eax,%edx
 80a8447:	c1 fa 1f             	sar    $0x1f,%edx
 80a844a:	c1 ea 1e             	shr    $0x1e,%edx
 80a844d:	01 d0                	add    %edx,%eax
 80a844f:	83 e0 03             	and    $0x3,%eax
 80a8452:	29 d0                	sub    %edx,%eax
 80a8454:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8458:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a845b:	89 d7                	mov    %edx,%edi
 80a845d:	89 c1                	mov    %eax,%ecx
 80a845f:	d3 ef                	shr    %cl,%edi
 80a8461:	89 f8                	mov    %edi,%eax
 80a8463:	31 c6                	xor    %eax,%esi
 80a8465:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8468:	8d 50 03             	lea    0x3(%eax),%edx
 80a846b:	89 d0                	mov    %edx,%eax
 80a846d:	c1 f8 1f             	sar    $0x1f,%eax
 80a8470:	c1 e8 1e             	shr    $0x1e,%eax
 80a8473:	01 c2                	add    %eax,%edx
 80a8475:	83 e2 03             	and    $0x3,%edx
 80a8478:	89 d1                	mov    %edx,%ecx
 80a847a:	29 c1                	sub    %eax,%ecx
 80a847c:	89 c8                	mov    %ecx,%eax
 80a847e:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8482:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8487:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a848a:	89 d7                	mov    %edx,%edi
 80a848c:	89 c1                	mov    %eax,%ecx
 80a848e:	d3 e7                	shl    %cl,%edi
 80a8490:	89 f8                	mov    %edi,%eax
 80a8492:	31 f0                	xor    %esi,%eax
 80a8494:	89 03                	mov    %eax,(%ebx)
 80a8496:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8499:	8d 58 04             	lea    0x4(%eax),%ebx
 80a849c:	8b 75 c0             	mov    -0x40(%ebp),%esi
 80a849f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a84a2:	8d 50 01             	lea    0x1(%eax),%edx
 80a84a5:	89 d0                	mov    %edx,%eax
 80a84a7:	c1 f8 1f             	sar    $0x1f,%eax
 80a84aa:	c1 e8 1e             	shr    $0x1e,%eax
 80a84ad:	01 c2                	add    %eax,%edx
 80a84af:	83 e2 03             	and    $0x3,%edx
 80a84b2:	89 d1                	mov    %edx,%ecx
 80a84b4:	29 c1                	sub    %eax,%ecx
 80a84b6:	89 c8                	mov    %ecx,%eax
 80a84b8:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a84bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a84bf:	89 d7                	mov    %edx,%edi
 80a84c1:	89 c1                	mov    %eax,%ecx
 80a84c3:	d3 ef                	shr    %cl,%edi
 80a84c5:	89 f8                	mov    %edi,%eax
 80a84c7:	31 c6                	xor    %eax,%esi
 80a84c9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a84cc:	89 c2                	mov    %eax,%edx
 80a84ce:	c1 fa 1f             	sar    $0x1f,%edx
 80a84d1:	c1 ea 1e             	shr    $0x1e,%edx
 80a84d4:	01 d0                	add    %edx,%eax
 80a84d6:	83 e0 03             	and    $0x3,%eax
 80a84d9:	29 d0                	sub    %edx,%eax
 80a84db:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a84df:	b8 20 00 00 00       	mov    $0x20,%eax
 80a84e4:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a84e7:	89 d7                	mov    %edx,%edi
 80a84e9:	89 c1                	mov    %eax,%ecx
 80a84eb:	d3 e7                	shl    %cl,%edi
 80a84ed:	89 f8                	mov    %edi,%eax
 80a84ef:	31 f0                	xor    %esi,%eax
 80a84f1:	89 03                	mov    %eax,(%ebx)
 80a84f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a84f6:	8d 58 08             	lea    0x8(%eax),%ebx
 80a84f9:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 80a84fc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a84ff:	8d 50 02             	lea    0x2(%eax),%edx
 80a8502:	89 d0                	mov    %edx,%eax
 80a8504:	c1 f8 1f             	sar    $0x1f,%eax
 80a8507:	c1 e8 1e             	shr    $0x1e,%eax
 80a850a:	01 c2                	add    %eax,%edx
 80a850c:	83 e2 03             	and    $0x3,%edx
 80a850f:	89 d1                	mov    %edx,%ecx
 80a8511:	29 c1                	sub    %eax,%ecx
 80a8513:	89 c8                	mov    %ecx,%eax
 80a8515:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8519:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a851c:	89 d7                	mov    %edx,%edi
 80a851e:	89 c1                	mov    %eax,%ecx
 80a8520:	d3 ef                	shr    %cl,%edi
 80a8522:	89 f8                	mov    %edi,%eax
 80a8524:	31 c6                	xor    %eax,%esi
 80a8526:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8529:	8d 50 01             	lea    0x1(%eax),%edx
 80a852c:	89 d0                	mov    %edx,%eax
 80a852e:	c1 f8 1f             	sar    $0x1f,%eax
 80a8531:	c1 e8 1e             	shr    $0x1e,%eax
 80a8534:	01 c2                	add    %eax,%edx
 80a8536:	83 e2 03             	and    $0x3,%edx
 80a8539:	89 d1                	mov    %edx,%ecx
 80a853b:	29 c1                	sub    %eax,%ecx
 80a853d:	89 c8                	mov    %ecx,%eax
 80a853f:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8543:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8548:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a854b:	89 d7                	mov    %edx,%edi
 80a854d:	89 c1                	mov    %eax,%ecx
 80a854f:	d3 e7                	shl    %cl,%edi
 80a8551:	89 f8                	mov    %edi,%eax
 80a8553:	31 f0                	xor    %esi,%eax
 80a8555:	89 03                	mov    %eax,(%ebx)
 80a8557:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a855a:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a855d:	8b 75 c8             	mov    -0x38(%ebp),%esi
 80a8560:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8563:	8d 50 03             	lea    0x3(%eax),%edx
 80a8566:	89 d0                	mov    %edx,%eax
 80a8568:	c1 f8 1f             	sar    $0x1f,%eax
 80a856b:	c1 e8 1e             	shr    $0x1e,%eax
 80a856e:	01 c2                	add    %eax,%edx
 80a8570:	83 e2 03             	and    $0x3,%edx
 80a8573:	89 d1                	mov    %edx,%ecx
 80a8575:	29 c1                	sub    %eax,%ecx
 80a8577:	89 c8                	mov    %ecx,%eax
 80a8579:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a857d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8580:	89 d7                	mov    %edx,%edi
 80a8582:	89 c1                	mov    %eax,%ecx
 80a8584:	d3 ef                	shr    %cl,%edi
 80a8586:	89 f8                	mov    %edi,%eax
 80a8588:	31 c6                	xor    %eax,%esi
 80a858a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a858d:	8d 50 02             	lea    0x2(%eax),%edx
 80a8590:	89 d0                	mov    %edx,%eax
 80a8592:	c1 f8 1f             	sar    $0x1f,%eax
 80a8595:	c1 e8 1e             	shr    $0x1e,%eax
 80a8598:	01 c2                	add    %eax,%edx
 80a859a:	83 e2 03             	and    $0x3,%edx
 80a859d:	89 d1                	mov    %edx,%ecx
 80a859f:	29 c1                	sub    %eax,%ecx
 80a85a1:	89 c8                	mov    %ecx,%eax
 80a85a3:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a85a7:	b8 20 00 00 00       	mov    $0x20,%eax
 80a85ac:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a85af:	89 d7                	mov    %edx,%edi
 80a85b1:	89 c1                	mov    %eax,%ecx
 80a85b3:	d3 e7                	shl    %cl,%edi
 80a85b5:	89 f8                	mov    %edi,%eax
 80a85b7:	31 f0                	xor    %esi,%eax
 80a85b9:	89 03                	mov    %eax,(%ebx)
 80a85bb:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a85bf:	c7 45 ec 02 00 00 00 	movl   $0x2,-0x14(%ebp)
 80a85c6:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 80a85cd:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a85d0:	8b 75 ac             	mov    -0x54(%ebp),%esi
 80a85d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a85d6:	89 c2                	mov    %eax,%edx
 80a85d8:	c1 fa 1f             	sar    $0x1f,%edx
 80a85db:	c1 ea 1e             	shr    $0x1e,%edx
 80a85de:	01 d0                	add    %edx,%eax
 80a85e0:	83 e0 03             	and    $0x3,%eax
 80a85e3:	29 d0                	sub    %edx,%eax
 80a85e5:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a85e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a85ec:	89 d7                	mov    %edx,%edi
 80a85ee:	89 c1                	mov    %eax,%ecx
 80a85f0:	d3 ef                	shr    %cl,%edi
 80a85f2:	89 f8                	mov    %edi,%eax
 80a85f4:	31 c6                	xor    %eax,%esi
 80a85f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a85f9:	8d 50 03             	lea    0x3(%eax),%edx
 80a85fc:	89 d0                	mov    %edx,%eax
 80a85fe:	c1 f8 1f             	sar    $0x1f,%eax
 80a8601:	c1 e8 1e             	shr    $0x1e,%eax
 80a8604:	01 c2                	add    %eax,%edx
 80a8606:	83 e2 03             	and    $0x3,%edx
 80a8609:	89 d1                	mov    %edx,%ecx
 80a860b:	29 c1                	sub    %eax,%ecx
 80a860d:	89 c8                	mov    %ecx,%eax
 80a860f:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8613:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8618:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a861b:	89 d7                	mov    %edx,%edi
 80a861d:	89 c1                	mov    %eax,%ecx
 80a861f:	d3 e7                	shl    %cl,%edi
 80a8621:	89 f8                	mov    %edi,%eax
 80a8623:	31 f0                	xor    %esi,%eax
 80a8625:	89 03                	mov    %eax,(%ebx)
 80a8627:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a862a:	8d 58 04             	lea    0x4(%eax),%ebx
 80a862d:	8b 75 b0             	mov    -0x50(%ebp),%esi
 80a8630:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8633:	8d 50 01             	lea    0x1(%eax),%edx
 80a8636:	89 d0                	mov    %edx,%eax
 80a8638:	c1 f8 1f             	sar    $0x1f,%eax
 80a863b:	c1 e8 1e             	shr    $0x1e,%eax
 80a863e:	01 c2                	add    %eax,%edx
 80a8640:	83 e2 03             	and    $0x3,%edx
 80a8643:	89 d1                	mov    %edx,%ecx
 80a8645:	29 c1                	sub    %eax,%ecx
 80a8647:	89 c8                	mov    %ecx,%eax
 80a8649:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a864d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8650:	89 d7                	mov    %edx,%edi
 80a8652:	89 c1                	mov    %eax,%ecx
 80a8654:	d3 ef                	shr    %cl,%edi
 80a8656:	89 f8                	mov    %edi,%eax
 80a8658:	31 c6                	xor    %eax,%esi
 80a865a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a865d:	89 c2                	mov    %eax,%edx
 80a865f:	c1 fa 1f             	sar    $0x1f,%edx
 80a8662:	c1 ea 1e             	shr    $0x1e,%edx
 80a8665:	01 d0                	add    %edx,%eax
 80a8667:	83 e0 03             	and    $0x3,%eax
 80a866a:	29 d0                	sub    %edx,%eax
 80a866c:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8670:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8675:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8678:	89 d7                	mov    %edx,%edi
 80a867a:	89 c1                	mov    %eax,%ecx
 80a867c:	d3 e7                	shl    %cl,%edi
 80a867e:	89 f8                	mov    %edi,%eax
 80a8680:	31 f0                	xor    %esi,%eax
 80a8682:	89 03                	mov    %eax,(%ebx)
 80a8684:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8687:	8d 58 08             	lea    0x8(%eax),%ebx
 80a868a:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 80a868d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8690:	8d 50 02             	lea    0x2(%eax),%edx
 80a8693:	89 d0                	mov    %edx,%eax
 80a8695:	c1 f8 1f             	sar    $0x1f,%eax
 80a8698:	c1 e8 1e             	shr    $0x1e,%eax
 80a869b:	01 c2                	add    %eax,%edx
 80a869d:	83 e2 03             	and    $0x3,%edx
 80a86a0:	89 d1                	mov    %edx,%ecx
 80a86a2:	29 c1                	sub    %eax,%ecx
 80a86a4:	89 c8                	mov    %ecx,%eax
 80a86a6:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a86aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a86ad:	89 d7                	mov    %edx,%edi
 80a86af:	89 c1                	mov    %eax,%ecx
 80a86b1:	d3 ef                	shr    %cl,%edi
 80a86b3:	89 f8                	mov    %edi,%eax
 80a86b5:	31 c6                	xor    %eax,%esi
 80a86b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a86ba:	8d 50 01             	lea    0x1(%eax),%edx
 80a86bd:	89 d0                	mov    %edx,%eax
 80a86bf:	c1 f8 1f             	sar    $0x1f,%eax
 80a86c2:	c1 e8 1e             	shr    $0x1e,%eax
 80a86c5:	01 c2                	add    %eax,%edx
 80a86c7:	83 e2 03             	and    $0x3,%edx
 80a86ca:	89 d1                	mov    %edx,%ecx
 80a86cc:	29 c1                	sub    %eax,%ecx
 80a86ce:	89 c8                	mov    %ecx,%eax
 80a86d0:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a86d4:	b8 20 00 00 00       	mov    $0x20,%eax
 80a86d9:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a86dc:	89 d7                	mov    %edx,%edi
 80a86de:	89 c1                	mov    %eax,%ecx
 80a86e0:	d3 e7                	shl    %cl,%edi
 80a86e2:	89 f8                	mov    %edi,%eax
 80a86e4:	31 f0                	xor    %esi,%eax
 80a86e6:	89 03                	mov    %eax,(%ebx)
 80a86e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a86eb:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a86ee:	8b 75 b8             	mov    -0x48(%ebp),%esi
 80a86f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a86f4:	8d 50 03             	lea    0x3(%eax),%edx
 80a86f7:	89 d0                	mov    %edx,%eax
 80a86f9:	c1 f8 1f             	sar    $0x1f,%eax
 80a86fc:	c1 e8 1e             	shr    $0x1e,%eax
 80a86ff:	01 c2                	add    %eax,%edx
 80a8701:	83 e2 03             	and    $0x3,%edx
 80a8704:	89 d1                	mov    %edx,%ecx
 80a8706:	29 c1                	sub    %eax,%ecx
 80a8708:	89 c8                	mov    %ecx,%eax
 80a870a:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a870e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8711:	89 d7                	mov    %edx,%edi
 80a8713:	89 c1                	mov    %eax,%ecx
 80a8715:	d3 ef                	shr    %cl,%edi
 80a8717:	89 f8                	mov    %edi,%eax
 80a8719:	31 c6                	xor    %eax,%esi
 80a871b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a871e:	8d 50 02             	lea    0x2(%eax),%edx
 80a8721:	89 d0                	mov    %edx,%eax
 80a8723:	c1 f8 1f             	sar    $0x1f,%eax
 80a8726:	c1 e8 1e             	shr    $0x1e,%eax
 80a8729:	01 c2                	add    %eax,%edx
 80a872b:	83 e2 03             	and    $0x3,%edx
 80a872e:	89 d1                	mov    %edx,%ecx
 80a8730:	29 c1                	sub    %eax,%ecx
 80a8732:	89 c8                	mov    %ecx,%eax
 80a8734:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8738:	b8 20 00 00 00       	mov    $0x20,%eax
 80a873d:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8740:	89 d7                	mov    %edx,%edi
 80a8742:	89 c1                	mov    %eax,%ecx
 80a8744:	d3 e7                	shl    %cl,%edi
 80a8746:	89 f8                	mov    %edi,%eax
 80a8748:	31 f0                	xor    %esi,%eax
 80a874a:	89 03                	mov    %eax,(%ebx)
 80a874c:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a8750:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 80a8757:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 80a875e:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a8761:	8b 75 dc             	mov    -0x24(%ebp),%esi
 80a8764:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8767:	89 c2                	mov    %eax,%edx
 80a8769:	c1 fa 1f             	sar    $0x1f,%edx
 80a876c:	c1 ea 1e             	shr    $0x1e,%edx
 80a876f:	01 d0                	add    %edx,%eax
 80a8771:	83 e0 03             	and    $0x3,%eax
 80a8774:	29 d0                	sub    %edx,%eax
 80a8776:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a877a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a877d:	89 d7                	mov    %edx,%edi
 80a877f:	89 c1                	mov    %eax,%ecx
 80a8781:	d3 ef                	shr    %cl,%edi
 80a8783:	89 f8                	mov    %edi,%eax
 80a8785:	31 c6                	xor    %eax,%esi
 80a8787:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a878a:	8d 50 03             	lea    0x3(%eax),%edx
 80a878d:	89 d0                	mov    %edx,%eax
 80a878f:	c1 f8 1f             	sar    $0x1f,%eax
 80a8792:	c1 e8 1e             	shr    $0x1e,%eax
 80a8795:	01 c2                	add    %eax,%edx
 80a8797:	83 e2 03             	and    $0x3,%edx
 80a879a:	89 d1                	mov    %edx,%ecx
 80a879c:	29 c1                	sub    %eax,%ecx
 80a879e:	89 c8                	mov    %ecx,%eax
 80a87a0:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a87a4:	b8 20 00 00 00       	mov    $0x20,%eax
 80a87a9:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a87ac:	89 d7                	mov    %edx,%edi
 80a87ae:	89 c1                	mov    %eax,%ecx
 80a87b0:	d3 e7                	shl    %cl,%edi
 80a87b2:	89 f8                	mov    %edi,%eax
 80a87b4:	31 f0                	xor    %esi,%eax
 80a87b6:	89 03                	mov    %eax,(%ebx)
 80a87b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a87bb:	8d 58 04             	lea    0x4(%eax),%ebx
 80a87be:	8b 75 e0             	mov    -0x20(%ebp),%esi
 80a87c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a87c4:	8d 50 01             	lea    0x1(%eax),%edx
 80a87c7:	89 d0                	mov    %edx,%eax
 80a87c9:	c1 f8 1f             	sar    $0x1f,%eax
 80a87cc:	c1 e8 1e             	shr    $0x1e,%eax
 80a87cf:	01 c2                	add    %eax,%edx
 80a87d1:	83 e2 03             	and    $0x3,%edx
 80a87d4:	89 d1                	mov    %edx,%ecx
 80a87d6:	29 c1                	sub    %eax,%ecx
 80a87d8:	89 c8                	mov    %ecx,%eax
 80a87da:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a87de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a87e1:	89 d7                	mov    %edx,%edi
 80a87e3:	89 c1                	mov    %eax,%ecx
 80a87e5:	d3 ef                	shr    %cl,%edi
 80a87e7:	89 f8                	mov    %edi,%eax
 80a87e9:	31 c6                	xor    %eax,%esi
 80a87eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a87ee:	89 c2                	mov    %eax,%edx
 80a87f0:	c1 fa 1f             	sar    $0x1f,%edx
 80a87f3:	c1 ea 1e             	shr    $0x1e,%edx
 80a87f6:	01 d0                	add    %edx,%eax
 80a87f8:	83 e0 03             	and    $0x3,%eax
 80a87fb:	29 d0                	sub    %edx,%eax
 80a87fd:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8801:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8806:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8809:	89 d7                	mov    %edx,%edi
 80a880b:	89 c1                	mov    %eax,%ecx
 80a880d:	d3 e7                	shl    %cl,%edi
 80a880f:	89 f8                	mov    %edi,%eax
 80a8811:	31 f0                	xor    %esi,%eax
 80a8813:	89 03                	mov    %eax,(%ebx)
 80a8815:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8818:	8d 58 08             	lea    0x8(%eax),%ebx
 80a881b:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 80a881e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8821:	8d 50 02             	lea    0x2(%eax),%edx
 80a8824:	89 d0                	mov    %edx,%eax
 80a8826:	c1 f8 1f             	sar    $0x1f,%eax
 80a8829:	c1 e8 1e             	shr    $0x1e,%eax
 80a882c:	01 c2                	add    %eax,%edx
 80a882e:	83 e2 03             	and    $0x3,%edx
 80a8831:	89 d1                	mov    %edx,%ecx
 80a8833:	29 c1                	sub    %eax,%ecx
 80a8835:	89 c8                	mov    %ecx,%eax
 80a8837:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a883b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a883e:	89 d7                	mov    %edx,%edi
 80a8840:	89 c1                	mov    %eax,%ecx
 80a8842:	d3 ef                	shr    %cl,%edi
 80a8844:	89 f8                	mov    %edi,%eax
 80a8846:	31 c6                	xor    %eax,%esi
 80a8848:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a884b:	8d 50 01             	lea    0x1(%eax),%edx
 80a884e:	89 d0                	mov    %edx,%eax
 80a8850:	c1 f8 1f             	sar    $0x1f,%eax
 80a8853:	c1 e8 1e             	shr    $0x1e,%eax
 80a8856:	01 c2                	add    %eax,%edx
 80a8858:	83 e2 03             	and    $0x3,%edx
 80a885b:	89 d1                	mov    %edx,%ecx
 80a885d:	29 c1                	sub    %eax,%ecx
 80a885f:	89 c8                	mov    %ecx,%eax
 80a8861:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8865:	b8 20 00 00 00       	mov    $0x20,%eax
 80a886a:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a886d:	89 d7                	mov    %edx,%edi
 80a886f:	89 c1                	mov    %eax,%ecx
 80a8871:	d3 e7                	shl    %cl,%edi
 80a8873:	89 f8                	mov    %edi,%eax
 80a8875:	31 f0                	xor    %esi,%eax
 80a8877:	89 03                	mov    %eax,(%ebx)
 80a8879:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a887c:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a887f:	8b 75 e8             	mov    -0x18(%ebp),%esi
 80a8882:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8885:	8d 50 03             	lea    0x3(%eax),%edx
 80a8888:	89 d0                	mov    %edx,%eax
 80a888a:	c1 f8 1f             	sar    $0x1f,%eax
 80a888d:	c1 e8 1e             	shr    $0x1e,%eax
 80a8890:	01 c2                	add    %eax,%edx
 80a8892:	83 e2 03             	and    $0x3,%edx
 80a8895:	89 d1                	mov    %edx,%ecx
 80a8897:	29 c1                	sub    %eax,%ecx
 80a8899:	89 c8                	mov    %ecx,%eax
 80a889b:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a889f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a88a2:	89 d7                	mov    %edx,%edi
 80a88a4:	89 c1                	mov    %eax,%ecx
 80a88a6:	d3 ef                	shr    %cl,%edi
 80a88a8:	89 f8                	mov    %edi,%eax
 80a88aa:	31 c6                	xor    %eax,%esi
 80a88ac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a88af:	8d 50 02             	lea    0x2(%eax),%edx
 80a88b2:	89 d0                	mov    %edx,%eax
 80a88b4:	c1 f8 1f             	sar    $0x1f,%eax
 80a88b7:	c1 e8 1e             	shr    $0x1e,%eax
 80a88ba:	01 c2                	add    %eax,%edx
 80a88bc:	83 e2 03             	and    $0x3,%edx
 80a88bf:	89 d1                	mov    %edx,%ecx
 80a88c1:	29 c1                	sub    %eax,%ecx
 80a88c3:	89 c8                	mov    %ecx,%eax
 80a88c5:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a88c9:	b8 20 00 00 00       	mov    $0x20,%eax
 80a88ce:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a88d1:	89 d7                	mov    %edx,%edi
 80a88d3:	89 c1                	mov    %eax,%ecx
 80a88d5:	d3 e7                	shl    %cl,%edi
 80a88d7:	89 f8                	mov    %edi,%eax
 80a88d9:	31 f0                	xor    %esi,%eax
 80a88db:	89 03                	mov    %eax,(%ebx)
 80a88dd:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a88e1:	81 7d 10 80 00 00 00 	cmpl   $0x80,0x10(%ebp)
 80a88e8:	0f 8e 22 03 00 00    	jle    80a8c10 <_ZN4ARIA11EncKeySetupEPKhPhi+0x1df9>
 80a88ee:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 80a88f5:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 80a88fc:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a88ff:	8b 75 cc             	mov    -0x34(%ebp),%esi
 80a8902:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8905:	89 c2                	mov    %eax,%edx
 80a8907:	c1 fa 1f             	sar    $0x1f,%edx
 80a890a:	c1 ea 1e             	shr    $0x1e,%edx
 80a890d:	01 d0                	add    %edx,%eax
 80a890f:	83 e0 03             	and    $0x3,%eax
 80a8912:	29 d0                	sub    %edx,%eax
 80a8914:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a8918:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a891b:	89 d7                	mov    %edx,%edi
 80a891d:	89 c1                	mov    %eax,%ecx
 80a891f:	d3 ef                	shr    %cl,%edi
 80a8921:	89 f8                	mov    %edi,%eax
 80a8923:	31 c6                	xor    %eax,%esi
 80a8925:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8928:	8d 50 03             	lea    0x3(%eax),%edx
 80a892b:	89 d0                	mov    %edx,%eax
 80a892d:	c1 f8 1f             	sar    $0x1f,%eax
 80a8930:	c1 e8 1e             	shr    $0x1e,%eax
 80a8933:	01 c2                	add    %eax,%edx
 80a8935:	83 e2 03             	and    $0x3,%edx
 80a8938:	89 d1                	mov    %edx,%ecx
 80a893a:	29 c1                	sub    %eax,%ecx
 80a893c:	89 c8                	mov    %ecx,%eax
 80a893e:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a8942:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8947:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a894a:	89 d7                	mov    %edx,%edi
 80a894c:	89 c1                	mov    %eax,%ecx
 80a894e:	d3 e7                	shl    %cl,%edi
 80a8950:	89 f8                	mov    %edi,%eax
 80a8952:	31 f0                	xor    %esi,%eax
 80a8954:	89 03                	mov    %eax,(%ebx)
 80a8956:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8959:	8d 58 04             	lea    0x4(%eax),%ebx
 80a895c:	8b 75 d0             	mov    -0x30(%ebp),%esi
 80a895f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8962:	8d 50 01             	lea    0x1(%eax),%edx
 80a8965:	89 d0                	mov    %edx,%eax
 80a8967:	c1 f8 1f             	sar    $0x1f,%eax
 80a896a:	c1 e8 1e             	shr    $0x1e,%eax
 80a896d:	01 c2                	add    %eax,%edx
 80a896f:	83 e2 03             	and    $0x3,%edx
 80a8972:	89 d1                	mov    %edx,%ecx
 80a8974:	29 c1                	sub    %eax,%ecx
 80a8976:	89 c8                	mov    %ecx,%eax
 80a8978:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a897c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a897f:	89 d7                	mov    %edx,%edi
 80a8981:	89 c1                	mov    %eax,%ecx
 80a8983:	d3 ef                	shr    %cl,%edi
 80a8985:	89 f8                	mov    %edi,%eax
 80a8987:	31 c6                	xor    %eax,%esi
 80a8989:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a898c:	89 c2                	mov    %eax,%edx
 80a898e:	c1 fa 1f             	sar    $0x1f,%edx
 80a8991:	c1 ea 1e             	shr    $0x1e,%edx
 80a8994:	01 d0                	add    %edx,%eax
 80a8996:	83 e0 03             	and    $0x3,%eax
 80a8999:	29 d0                	sub    %edx,%eax
 80a899b:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a899f:	b8 20 00 00 00       	mov    $0x20,%eax
 80a89a4:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a89a7:	89 d7                	mov    %edx,%edi
 80a89a9:	89 c1                	mov    %eax,%ecx
 80a89ab:	d3 e7                	shl    %cl,%edi
 80a89ad:	89 f8                	mov    %edi,%eax
 80a89af:	31 f0                	xor    %esi,%eax
 80a89b1:	89 03                	mov    %eax,(%ebx)
 80a89b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a89b6:	8d 58 08             	lea    0x8(%eax),%ebx
 80a89b9:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 80a89bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a89bf:	8d 50 02             	lea    0x2(%eax),%edx
 80a89c2:	89 d0                	mov    %edx,%eax
 80a89c4:	c1 f8 1f             	sar    $0x1f,%eax
 80a89c7:	c1 e8 1e             	shr    $0x1e,%eax
 80a89ca:	01 c2                	add    %eax,%edx
 80a89cc:	83 e2 03             	and    $0x3,%edx
 80a89cf:	89 d1                	mov    %edx,%ecx
 80a89d1:	29 c1                	sub    %eax,%ecx
 80a89d3:	89 c8                	mov    %ecx,%eax
 80a89d5:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a89d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a89dc:	89 d7                	mov    %edx,%edi
 80a89de:	89 c1                	mov    %eax,%ecx
 80a89e0:	d3 ef                	shr    %cl,%edi
 80a89e2:	89 f8                	mov    %edi,%eax
 80a89e4:	31 c6                	xor    %eax,%esi
 80a89e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a89e9:	8d 50 01             	lea    0x1(%eax),%edx
 80a89ec:	89 d0                	mov    %edx,%eax
 80a89ee:	c1 f8 1f             	sar    $0x1f,%eax
 80a89f1:	c1 e8 1e             	shr    $0x1e,%eax
 80a89f4:	01 c2                	add    %eax,%edx
 80a89f6:	83 e2 03             	and    $0x3,%edx
 80a89f9:	89 d1                	mov    %edx,%ecx
 80a89fb:	29 c1                	sub    %eax,%ecx
 80a89fd:	89 c8                	mov    %ecx,%eax
 80a89ff:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a8a03:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8a08:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8a0b:	89 d7                	mov    %edx,%edi
 80a8a0d:	89 c1                	mov    %eax,%ecx
 80a8a0f:	d3 e7                	shl    %cl,%edi
 80a8a11:	89 f8                	mov    %edi,%eax
 80a8a13:	31 f0                	xor    %esi,%eax
 80a8a15:	89 03                	mov    %eax,(%ebx)
 80a8a17:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8a1a:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a8a1d:	8b 75 d8             	mov    -0x28(%ebp),%esi
 80a8a20:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8a23:	8d 50 03             	lea    0x3(%eax),%edx
 80a8a26:	89 d0                	mov    %edx,%eax
 80a8a28:	c1 f8 1f             	sar    $0x1f,%eax
 80a8a2b:	c1 e8 1e             	shr    $0x1e,%eax
 80a8a2e:	01 c2                	add    %eax,%edx
 80a8a30:	83 e2 03             	and    $0x3,%edx
 80a8a33:	89 d1                	mov    %edx,%ecx
 80a8a35:	29 c1                	sub    %eax,%ecx
 80a8a37:	89 c8                	mov    %ecx,%eax
 80a8a39:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a8a3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8a40:	89 d7                	mov    %edx,%edi
 80a8a42:	89 c1                	mov    %eax,%ecx
 80a8a44:	d3 ef                	shr    %cl,%edi
 80a8a46:	89 f8                	mov    %edi,%eax
 80a8a48:	31 c6                	xor    %eax,%esi
 80a8a4a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8a4d:	8d 50 02             	lea    0x2(%eax),%edx
 80a8a50:	89 d0                	mov    %edx,%eax
 80a8a52:	c1 f8 1f             	sar    $0x1f,%eax
 80a8a55:	c1 e8 1e             	shr    $0x1e,%eax
 80a8a58:	01 c2                	add    %eax,%edx
 80a8a5a:	83 e2 03             	and    $0x3,%edx
 80a8a5d:	89 d1                	mov    %edx,%ecx
 80a8a5f:	29 c1                	sub    %eax,%ecx
 80a8a61:	89 c8                	mov    %ecx,%eax
 80a8a63:	8b 54 85 bc          	mov    -0x44(%ebp,%eax,4),%edx
 80a8a67:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8a6c:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8a6f:	89 d7                	mov    %edx,%edi
 80a8a71:	89 c1                	mov    %eax,%ecx
 80a8a73:	d3 e7                	shl    %cl,%edi
 80a8a75:	89 f8                	mov    %edi,%eax
 80a8a77:	31 f0                	xor    %esi,%eax
 80a8a79:	89 03                	mov    %eax,(%ebx)
 80a8a7b:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a8a7f:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 80a8a86:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 80a8a8d:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a8a90:	8b 75 bc             	mov    -0x44(%ebp),%esi
 80a8a93:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8a96:	89 c2                	mov    %eax,%edx
 80a8a98:	c1 fa 1f             	sar    $0x1f,%edx
 80a8a9b:	c1 ea 1e             	shr    $0x1e,%edx
 80a8a9e:	01 d0                	add    %edx,%eax
 80a8aa0:	83 e0 03             	and    $0x3,%eax
 80a8aa3:	29 d0                	sub    %edx,%eax
 80a8aa5:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8aa9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8aac:	89 d7                	mov    %edx,%edi
 80a8aae:	89 c1                	mov    %eax,%ecx
 80a8ab0:	d3 ef                	shr    %cl,%edi
 80a8ab2:	89 f8                	mov    %edi,%eax
 80a8ab4:	31 c6                	xor    %eax,%esi
 80a8ab6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8ab9:	8d 50 03             	lea    0x3(%eax),%edx
 80a8abc:	89 d0                	mov    %edx,%eax
 80a8abe:	c1 f8 1f             	sar    $0x1f,%eax
 80a8ac1:	c1 e8 1e             	shr    $0x1e,%eax
 80a8ac4:	01 c2                	add    %eax,%edx
 80a8ac6:	83 e2 03             	and    $0x3,%edx
 80a8ac9:	89 d1                	mov    %edx,%ecx
 80a8acb:	29 c1                	sub    %eax,%ecx
 80a8acd:	89 c8                	mov    %ecx,%eax
 80a8acf:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8ad3:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8ad8:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8adb:	89 d7                	mov    %edx,%edi
 80a8add:	89 c1                	mov    %eax,%ecx
 80a8adf:	d3 e7                	shl    %cl,%edi
 80a8ae1:	89 f8                	mov    %edi,%eax
 80a8ae3:	31 f0                	xor    %esi,%eax
 80a8ae5:	89 03                	mov    %eax,(%ebx)
 80a8ae7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8aea:	8d 58 04             	lea    0x4(%eax),%ebx
 80a8aed:	8b 75 c0             	mov    -0x40(%ebp),%esi
 80a8af0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8af3:	8d 50 01             	lea    0x1(%eax),%edx
 80a8af6:	89 d0                	mov    %edx,%eax
 80a8af8:	c1 f8 1f             	sar    $0x1f,%eax
 80a8afb:	c1 e8 1e             	shr    $0x1e,%eax
 80a8afe:	01 c2                	add    %eax,%edx
 80a8b00:	83 e2 03             	and    $0x3,%edx
 80a8b03:	89 d1                	mov    %edx,%ecx
 80a8b05:	29 c1                	sub    %eax,%ecx
 80a8b07:	89 c8                	mov    %ecx,%eax
 80a8b09:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8b0d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8b10:	89 d7                	mov    %edx,%edi
 80a8b12:	89 c1                	mov    %eax,%ecx
 80a8b14:	d3 ef                	shr    %cl,%edi
 80a8b16:	89 f8                	mov    %edi,%eax
 80a8b18:	31 c6                	xor    %eax,%esi
 80a8b1a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8b1d:	89 c2                	mov    %eax,%edx
 80a8b1f:	c1 fa 1f             	sar    $0x1f,%edx
 80a8b22:	c1 ea 1e             	shr    $0x1e,%edx
 80a8b25:	01 d0                	add    %edx,%eax
 80a8b27:	83 e0 03             	and    $0x3,%eax
 80a8b2a:	29 d0                	sub    %edx,%eax
 80a8b2c:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8b30:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8b35:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8b38:	89 d7                	mov    %edx,%edi
 80a8b3a:	89 c1                	mov    %eax,%ecx
 80a8b3c:	d3 e7                	shl    %cl,%edi
 80a8b3e:	89 f8                	mov    %edi,%eax
 80a8b40:	31 f0                	xor    %esi,%eax
 80a8b42:	89 03                	mov    %eax,(%ebx)
 80a8b44:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8b47:	8d 58 08             	lea    0x8(%eax),%ebx
 80a8b4a:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 80a8b4d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8b50:	8d 50 02             	lea    0x2(%eax),%edx
 80a8b53:	89 d0                	mov    %edx,%eax
 80a8b55:	c1 f8 1f             	sar    $0x1f,%eax
 80a8b58:	c1 e8 1e             	shr    $0x1e,%eax
 80a8b5b:	01 c2                	add    %eax,%edx
 80a8b5d:	83 e2 03             	and    $0x3,%edx
 80a8b60:	89 d1                	mov    %edx,%ecx
 80a8b62:	29 c1                	sub    %eax,%ecx
 80a8b64:	89 c8                	mov    %ecx,%eax
 80a8b66:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8b6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8b6d:	89 d7                	mov    %edx,%edi
 80a8b6f:	89 c1                	mov    %eax,%ecx
 80a8b71:	d3 ef                	shr    %cl,%edi
 80a8b73:	89 f8                	mov    %edi,%eax
 80a8b75:	31 c6                	xor    %eax,%esi
 80a8b77:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8b7a:	8d 50 01             	lea    0x1(%eax),%edx
 80a8b7d:	89 d0                	mov    %edx,%eax
 80a8b7f:	c1 f8 1f             	sar    $0x1f,%eax
 80a8b82:	c1 e8 1e             	shr    $0x1e,%eax
 80a8b85:	01 c2                	add    %eax,%edx
 80a8b87:	83 e2 03             	and    $0x3,%edx
 80a8b8a:	89 d1                	mov    %edx,%ecx
 80a8b8c:	29 c1                	sub    %eax,%ecx
 80a8b8e:	89 c8                	mov    %ecx,%eax
 80a8b90:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8b94:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8b99:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8b9c:	89 d7                	mov    %edx,%edi
 80a8b9e:	89 c1                	mov    %eax,%ecx
 80a8ba0:	d3 e7                	shl    %cl,%edi
 80a8ba2:	89 f8                	mov    %edi,%eax
 80a8ba4:	31 f0                	xor    %esi,%eax
 80a8ba6:	89 03                	mov    %eax,(%ebx)
 80a8ba8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8bab:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a8bae:	8b 75 c8             	mov    -0x38(%ebp),%esi
 80a8bb1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8bb4:	8d 50 03             	lea    0x3(%eax),%edx
 80a8bb7:	89 d0                	mov    %edx,%eax
 80a8bb9:	c1 f8 1f             	sar    $0x1f,%eax
 80a8bbc:	c1 e8 1e             	shr    $0x1e,%eax
 80a8bbf:	01 c2                	add    %eax,%edx
 80a8bc1:	83 e2 03             	and    $0x3,%edx
 80a8bc4:	89 d1                	mov    %edx,%ecx
 80a8bc6:	29 c1                	sub    %eax,%ecx
 80a8bc8:	89 c8                	mov    %ecx,%eax
 80a8bca:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8bce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8bd1:	89 d7                	mov    %edx,%edi
 80a8bd3:	89 c1                	mov    %eax,%ecx
 80a8bd5:	d3 ef                	shr    %cl,%edi
 80a8bd7:	89 f8                	mov    %edi,%eax
 80a8bd9:	31 c6                	xor    %eax,%esi
 80a8bdb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8bde:	8d 50 02             	lea    0x2(%eax),%edx
 80a8be1:	89 d0                	mov    %edx,%eax
 80a8be3:	c1 f8 1f             	sar    $0x1f,%eax
 80a8be6:	c1 e8 1e             	shr    $0x1e,%eax
 80a8be9:	01 c2                	add    %eax,%edx
 80a8beb:	83 e2 03             	and    $0x3,%edx
 80a8bee:	89 d1                	mov    %edx,%ecx
 80a8bf0:	29 c1                	sub    %eax,%ecx
 80a8bf2:	89 c8                	mov    %ecx,%eax
 80a8bf4:	8b 54 85 ac          	mov    -0x54(%ebp,%eax,4),%edx
 80a8bf8:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8bfd:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8c00:	89 d7                	mov    %edx,%edi
 80a8c02:	89 c1                	mov    %eax,%ecx
 80a8c04:	d3 e7                	shl    %cl,%edi
 80a8c06:	89 f8                	mov    %edi,%eax
 80a8c08:	31 f0                	xor    %esi,%eax
 80a8c0a:	89 03                	mov    %eax,(%ebx)
 80a8c0c:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a8c10:	81 7d 10 c0 00 00 00 	cmpl   $0xc0,0x10(%ebp)
 80a8c17:	0f 8e 22 03 00 00    	jle    80a8f3f <_ZN4ARIA11EncKeySetupEPKhPhi+0x2128>
 80a8c1d:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 80a8c24:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 80a8c2b:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a8c2e:	8b 75 ac             	mov    -0x54(%ebp),%esi
 80a8c31:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8c34:	89 c2                	mov    %eax,%edx
 80a8c36:	c1 fa 1f             	sar    $0x1f,%edx
 80a8c39:	c1 ea 1e             	shr    $0x1e,%edx
 80a8c3c:	01 d0                	add    %edx,%eax
 80a8c3e:	83 e0 03             	and    $0x3,%eax
 80a8c41:	29 d0                	sub    %edx,%eax
 80a8c43:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8c47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8c4a:	89 d7                	mov    %edx,%edi
 80a8c4c:	89 c1                	mov    %eax,%ecx
 80a8c4e:	d3 ef                	shr    %cl,%edi
 80a8c50:	89 f8                	mov    %edi,%eax
 80a8c52:	31 c6                	xor    %eax,%esi
 80a8c54:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8c57:	8d 50 03             	lea    0x3(%eax),%edx
 80a8c5a:	89 d0                	mov    %edx,%eax
 80a8c5c:	c1 f8 1f             	sar    $0x1f,%eax
 80a8c5f:	c1 e8 1e             	shr    $0x1e,%eax
 80a8c62:	01 c2                	add    %eax,%edx
 80a8c64:	83 e2 03             	and    $0x3,%edx
 80a8c67:	89 d1                	mov    %edx,%ecx
 80a8c69:	29 c1                	sub    %eax,%ecx
 80a8c6b:	89 c8                	mov    %ecx,%eax
 80a8c6d:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8c71:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8c76:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8c79:	89 d7                	mov    %edx,%edi
 80a8c7b:	89 c1                	mov    %eax,%ecx
 80a8c7d:	d3 e7                	shl    %cl,%edi
 80a8c7f:	89 f8                	mov    %edi,%eax
 80a8c81:	31 f0                	xor    %esi,%eax
 80a8c83:	89 03                	mov    %eax,(%ebx)
 80a8c85:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8c88:	8d 58 04             	lea    0x4(%eax),%ebx
 80a8c8b:	8b 75 b0             	mov    -0x50(%ebp),%esi
 80a8c8e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8c91:	8d 50 01             	lea    0x1(%eax),%edx
 80a8c94:	89 d0                	mov    %edx,%eax
 80a8c96:	c1 f8 1f             	sar    $0x1f,%eax
 80a8c99:	c1 e8 1e             	shr    $0x1e,%eax
 80a8c9c:	01 c2                	add    %eax,%edx
 80a8c9e:	83 e2 03             	and    $0x3,%edx
 80a8ca1:	89 d1                	mov    %edx,%ecx
 80a8ca3:	29 c1                	sub    %eax,%ecx
 80a8ca5:	89 c8                	mov    %ecx,%eax
 80a8ca7:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8cab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8cae:	89 d7                	mov    %edx,%edi
 80a8cb0:	89 c1                	mov    %eax,%ecx
 80a8cb2:	d3 ef                	shr    %cl,%edi
 80a8cb4:	89 f8                	mov    %edi,%eax
 80a8cb6:	31 c6                	xor    %eax,%esi
 80a8cb8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8cbb:	89 c2                	mov    %eax,%edx
 80a8cbd:	c1 fa 1f             	sar    $0x1f,%edx
 80a8cc0:	c1 ea 1e             	shr    $0x1e,%edx
 80a8cc3:	01 d0                	add    %edx,%eax
 80a8cc5:	83 e0 03             	and    $0x3,%eax
 80a8cc8:	29 d0                	sub    %edx,%eax
 80a8cca:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8cce:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8cd3:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8cd6:	89 d7                	mov    %edx,%edi
 80a8cd8:	89 c1                	mov    %eax,%ecx
 80a8cda:	d3 e7                	shl    %cl,%edi
 80a8cdc:	89 f8                	mov    %edi,%eax
 80a8cde:	31 f0                	xor    %esi,%eax
 80a8ce0:	89 03                	mov    %eax,(%ebx)
 80a8ce2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8ce5:	8d 58 08             	lea    0x8(%eax),%ebx
 80a8ce8:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 80a8ceb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8cee:	8d 50 02             	lea    0x2(%eax),%edx
 80a8cf1:	89 d0                	mov    %edx,%eax
 80a8cf3:	c1 f8 1f             	sar    $0x1f,%eax
 80a8cf6:	c1 e8 1e             	shr    $0x1e,%eax
 80a8cf9:	01 c2                	add    %eax,%edx
 80a8cfb:	83 e2 03             	and    $0x3,%edx
 80a8cfe:	89 d1                	mov    %edx,%ecx
 80a8d00:	29 c1                	sub    %eax,%ecx
 80a8d02:	89 c8                	mov    %ecx,%eax
 80a8d04:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8d08:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8d0b:	89 d7                	mov    %edx,%edi
 80a8d0d:	89 c1                	mov    %eax,%ecx
 80a8d0f:	d3 ef                	shr    %cl,%edi
 80a8d11:	89 f8                	mov    %edi,%eax
 80a8d13:	31 c6                	xor    %eax,%esi
 80a8d15:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8d18:	8d 50 01             	lea    0x1(%eax),%edx
 80a8d1b:	89 d0                	mov    %edx,%eax
 80a8d1d:	c1 f8 1f             	sar    $0x1f,%eax
 80a8d20:	c1 e8 1e             	shr    $0x1e,%eax
 80a8d23:	01 c2                	add    %eax,%edx
 80a8d25:	83 e2 03             	and    $0x3,%edx
 80a8d28:	89 d1                	mov    %edx,%ecx
 80a8d2a:	29 c1                	sub    %eax,%ecx
 80a8d2c:	89 c8                	mov    %ecx,%eax
 80a8d2e:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8d32:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8d37:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8d3a:	89 d7                	mov    %edx,%edi
 80a8d3c:	89 c1                	mov    %eax,%ecx
 80a8d3e:	d3 e7                	shl    %cl,%edi
 80a8d40:	89 f8                	mov    %edi,%eax
 80a8d42:	31 f0                	xor    %esi,%eax
 80a8d44:	89 03                	mov    %eax,(%ebx)
 80a8d46:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8d49:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a8d4c:	8b 75 b8             	mov    -0x48(%ebp),%esi
 80a8d4f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8d52:	8d 50 03             	lea    0x3(%eax),%edx
 80a8d55:	89 d0                	mov    %edx,%eax
 80a8d57:	c1 f8 1f             	sar    $0x1f,%eax
 80a8d5a:	c1 e8 1e             	shr    $0x1e,%eax
 80a8d5d:	01 c2                	add    %eax,%edx
 80a8d5f:	83 e2 03             	and    $0x3,%edx
 80a8d62:	89 d1                	mov    %edx,%ecx
 80a8d64:	29 c1                	sub    %eax,%ecx
 80a8d66:	89 c8                	mov    %ecx,%eax
 80a8d68:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8d6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8d6f:	89 d7                	mov    %edx,%edi
 80a8d71:	89 c1                	mov    %eax,%ecx
 80a8d73:	d3 ef                	shr    %cl,%edi
 80a8d75:	89 f8                	mov    %edi,%eax
 80a8d77:	31 c6                	xor    %eax,%esi
 80a8d79:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8d7c:	8d 50 02             	lea    0x2(%eax),%edx
 80a8d7f:	89 d0                	mov    %edx,%eax
 80a8d81:	c1 f8 1f             	sar    $0x1f,%eax
 80a8d84:	c1 e8 1e             	shr    $0x1e,%eax
 80a8d87:	01 c2                	add    %eax,%edx
 80a8d89:	83 e2 03             	and    $0x3,%edx
 80a8d8c:	89 d1                	mov    %edx,%ecx
 80a8d8e:	29 c1                	sub    %eax,%ecx
 80a8d90:	89 c8                	mov    %ecx,%eax
 80a8d92:	8b 54 85 dc          	mov    -0x24(%ebp,%eax,4),%edx
 80a8d96:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8d9b:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8d9e:	89 d7                	mov    %edx,%edi
 80a8da0:	89 c1                	mov    %eax,%ecx
 80a8da2:	d3 e7                	shl    %cl,%edi
 80a8da4:	89 f8                	mov    %edi,%eax
 80a8da6:	31 f0                	xor    %esi,%eax
 80a8da8:	89 03                	mov    %eax,(%ebx)
 80a8daa:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a8dae:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 80a8db5:	c7 45 f0 0d 00 00 00 	movl   $0xd,-0x10(%ebp)
 80a8dbc:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80a8dbf:	8b 75 dc             	mov    -0x24(%ebp),%esi
 80a8dc2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8dc5:	89 c2                	mov    %eax,%edx
 80a8dc7:	c1 fa 1f             	sar    $0x1f,%edx
 80a8dca:	c1 ea 1e             	shr    $0x1e,%edx
 80a8dcd:	01 d0                	add    %edx,%eax
 80a8dcf:	83 e0 03             	and    $0x3,%eax
 80a8dd2:	29 d0                	sub    %edx,%eax
 80a8dd4:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8dd8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8ddb:	89 d7                	mov    %edx,%edi
 80a8ddd:	89 c1                	mov    %eax,%ecx
 80a8ddf:	d3 ef                	shr    %cl,%edi
 80a8de1:	89 f8                	mov    %edi,%eax
 80a8de3:	31 c6                	xor    %eax,%esi
 80a8de5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8de8:	8d 50 03             	lea    0x3(%eax),%edx
 80a8deb:	89 d0                	mov    %edx,%eax
 80a8ded:	c1 f8 1f             	sar    $0x1f,%eax
 80a8df0:	c1 e8 1e             	shr    $0x1e,%eax
 80a8df3:	01 c2                	add    %eax,%edx
 80a8df5:	83 e2 03             	and    $0x3,%edx
 80a8df8:	89 d1                	mov    %edx,%ecx
 80a8dfa:	29 c1                	sub    %eax,%ecx
 80a8dfc:	89 c8                	mov    %ecx,%eax
 80a8dfe:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8e02:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8e07:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8e0a:	89 d7                	mov    %edx,%edi
 80a8e0c:	89 c1                	mov    %eax,%ecx
 80a8e0e:	d3 e7                	shl    %cl,%edi
 80a8e10:	89 f8                	mov    %edi,%eax
 80a8e12:	31 f0                	xor    %esi,%eax
 80a8e14:	89 03                	mov    %eax,(%ebx)
 80a8e16:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8e19:	8d 58 04             	lea    0x4(%eax),%ebx
 80a8e1c:	8b 75 e0             	mov    -0x20(%ebp),%esi
 80a8e1f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8e22:	8d 50 01             	lea    0x1(%eax),%edx
 80a8e25:	89 d0                	mov    %edx,%eax
 80a8e27:	c1 f8 1f             	sar    $0x1f,%eax
 80a8e2a:	c1 e8 1e             	shr    $0x1e,%eax
 80a8e2d:	01 c2                	add    %eax,%edx
 80a8e2f:	83 e2 03             	and    $0x3,%edx
 80a8e32:	89 d1                	mov    %edx,%ecx
 80a8e34:	29 c1                	sub    %eax,%ecx
 80a8e36:	89 c8                	mov    %ecx,%eax
 80a8e38:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8e3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8e3f:	89 d7                	mov    %edx,%edi
 80a8e41:	89 c1                	mov    %eax,%ecx
 80a8e43:	d3 ef                	shr    %cl,%edi
 80a8e45:	89 f8                	mov    %edi,%eax
 80a8e47:	31 c6                	xor    %eax,%esi
 80a8e49:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8e4c:	89 c2                	mov    %eax,%edx
 80a8e4e:	c1 fa 1f             	sar    $0x1f,%edx
 80a8e51:	c1 ea 1e             	shr    $0x1e,%edx
 80a8e54:	01 d0                	add    %edx,%eax
 80a8e56:	83 e0 03             	and    $0x3,%eax
 80a8e59:	29 d0                	sub    %edx,%eax
 80a8e5b:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8e5f:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8e64:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8e67:	89 d7                	mov    %edx,%edi
 80a8e69:	89 c1                	mov    %eax,%ecx
 80a8e6b:	d3 e7                	shl    %cl,%edi
 80a8e6d:	89 f8                	mov    %edi,%eax
 80a8e6f:	31 f0                	xor    %esi,%eax
 80a8e71:	89 03                	mov    %eax,(%ebx)
 80a8e73:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8e76:	8d 58 08             	lea    0x8(%eax),%ebx
 80a8e79:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 80a8e7c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8e7f:	8d 50 02             	lea    0x2(%eax),%edx
 80a8e82:	89 d0                	mov    %edx,%eax
 80a8e84:	c1 f8 1f             	sar    $0x1f,%eax
 80a8e87:	c1 e8 1e             	shr    $0x1e,%eax
 80a8e8a:	01 c2                	add    %eax,%edx
 80a8e8c:	83 e2 03             	and    $0x3,%edx
 80a8e8f:	89 d1                	mov    %edx,%ecx
 80a8e91:	29 c1                	sub    %eax,%ecx
 80a8e93:	89 c8                	mov    %ecx,%eax
 80a8e95:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8e99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8e9c:	89 d7                	mov    %edx,%edi
 80a8e9e:	89 c1                	mov    %eax,%ecx
 80a8ea0:	d3 ef                	shr    %cl,%edi
 80a8ea2:	89 f8                	mov    %edi,%eax
 80a8ea4:	31 c6                	xor    %eax,%esi
 80a8ea6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8ea9:	8d 50 01             	lea    0x1(%eax),%edx
 80a8eac:	89 d0                	mov    %edx,%eax
 80a8eae:	c1 f8 1f             	sar    $0x1f,%eax
 80a8eb1:	c1 e8 1e             	shr    $0x1e,%eax
 80a8eb4:	01 c2                	add    %eax,%edx
 80a8eb6:	83 e2 03             	and    $0x3,%edx
 80a8eb9:	89 d1                	mov    %edx,%ecx
 80a8ebb:	29 c1                	sub    %eax,%ecx
 80a8ebd:	89 c8                	mov    %ecx,%eax
 80a8ebf:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8ec3:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8ec8:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8ecb:	89 d7                	mov    %edx,%edi
 80a8ecd:	89 c1                	mov    %eax,%ecx
 80a8ecf:	d3 e7                	shl    %cl,%edi
 80a8ed1:	89 f8                	mov    %edi,%eax
 80a8ed3:	31 f0                	xor    %esi,%eax
 80a8ed5:	89 03                	mov    %eax,(%ebx)
 80a8ed7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80a8eda:	8d 58 0c             	lea    0xc(%eax),%ebx
 80a8edd:	8b 75 e8             	mov    -0x18(%ebp),%esi
 80a8ee0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8ee3:	8d 50 03             	lea    0x3(%eax),%edx
 80a8ee6:	89 d0                	mov    %edx,%eax
 80a8ee8:	c1 f8 1f             	sar    $0x1f,%eax
 80a8eeb:	c1 e8 1e             	shr    $0x1e,%eax
 80a8eee:	01 c2                	add    %eax,%edx
 80a8ef0:	83 e2 03             	and    $0x3,%edx
 80a8ef3:	89 d1                	mov    %edx,%ecx
 80a8ef5:	29 c1                	sub    %eax,%ecx
 80a8ef7:	89 c8                	mov    %ecx,%eax
 80a8ef9:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8efd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80a8f00:	89 d7                	mov    %edx,%edi
 80a8f02:	89 c1                	mov    %eax,%ecx
 80a8f04:	d3 ef                	shr    %cl,%edi
 80a8f06:	89 f8                	mov    %edi,%eax
 80a8f08:	31 c6                	xor    %eax,%esi
 80a8f0a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80a8f0d:	8d 50 02             	lea    0x2(%eax),%edx
 80a8f10:	89 d0                	mov    %edx,%eax
 80a8f12:	c1 f8 1f             	sar    $0x1f,%eax
 80a8f15:	c1 e8 1e             	shr    $0x1e,%eax
 80a8f18:	01 c2                	add    %eax,%edx
 80a8f1a:	83 e2 03             	and    $0x3,%edx
 80a8f1d:	89 d1                	mov    %edx,%ecx
 80a8f1f:	29 c1                	sub    %eax,%ecx
 80a8f21:	89 c8                	mov    %ecx,%eax
 80a8f23:	8b 54 85 cc          	mov    -0x34(%ebp,%eax,4),%edx
 80a8f27:	b8 20 00 00 00       	mov    $0x20,%eax
 80a8f2c:	2b 45 f0             	sub    -0x10(%ebp),%eax
 80a8f2f:	89 d7                	mov    %edx,%edi
 80a8f31:	89 c1                	mov    %eax,%ecx
 80a8f33:	d3 e7                	shl    %cl,%edi
 80a8f35:	89 f8                	mov    %edi,%eax
 80a8f37:	31 f0                	xor    %esi,%eax
 80a8f39:	89 03                	mov    %eax,(%ebx)
 80a8f3b:	83 45 0c 10          	addl   $0x10,0xc(%ebp)
 80a8f3f:	8b 45 10             	mov    0x10(%ebp),%eax
 80a8f42:	05 00 01 00 00       	add    $0x100,%eax
 80a8f47:	89 c2                	mov    %eax,%edx
 80a8f49:	c1 fa 1f             	sar    $0x1f,%edx
 80a8f4c:	c1 ea 1b             	shr    $0x1b,%edx
 80a8f4f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80a8f52:	c1 f8 05             	sar    $0x5,%eax
 80a8f55:	83 c4 54             	add    $0x54,%esp
 80a8f58:	5b                   	pop    %ebx
 80a8f59:	5e                   	pop    %esi
 80a8f5a:	5f                   	pop    %edi
 80a8f5b:	5d                   	pop    %ebp
 80a8f5c:	c3                   	ret

```

```c
// ARIA::EncKeySetup @ 0x80a6e17

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* ARIA::EncKeySetup(unsigned char const*, unsigned char*, int) */

int ARIA::EncKeySetup(uchar *param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0xc);
  iVar6 = (int)(((uint)(param_3 + -0x80 >> 0x1f) >> 0x1a) + param_3 + -0x80) >> 6;
  uVar7 = uVar1 ^ *(uint *)(KRK + iVar6 * 0x10);
  uVar8 = uVar2 ^ *(uint *)(KRK + (iVar6 * 4 + 1) * 4);
  uVar10 = uVar3 ^ *(uint *)(KRK + (iVar6 * 2 + 1) * 8);
  uVar13 = uVar4 ^ *(uint *)(KRK + iVar6 * 0x10 + 0xc);
  uVar10 = *(uint *)(S1 + (uVar10 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar10 >> 0x10 & 0xff) * 4) ^
           *(uint *)(X1 + (uVar10 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar10 & 0xff) * 4);
  uVar13 = *(uint *)(S1 + (uVar13 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar13 >> 0x10 & 0xff) * 4) ^
           *(uint *)(X1 + (uVar13 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar13 & 0xff) * 4);
  uVar8 = *(uint *)(S1 + (uVar8 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar8 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar8 & 0xff) * 4) ^ uVar10;
  uVar7 = *(uint *)(S1 + (uVar7 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar7 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar7 & 0xff) * 4) ^ uVar8;
  uVar14 = uVar13 ^ uVar8;
  uVar10 = uVar10 ^ uVar13 ^ uVar7;
  uVar13 = uVar10 >> 0x10 | uVar10 << 0x10;
  uVar14 = uVar14 << 0x18 ^ uVar14 >> 0x18 ^ (uVar14 & 0xff00) << 8 ^ (uVar14 & 0xff0000) >> 8;
  uVar8 = ((uVar8 ^ uVar10) & 0xff00ff) << 8 ^ (uVar8 ^ uVar10) >> 8 & 0xff00ff ^ uVar13;
  uVar7 = uVar7 ^ uVar8;
  uVar10 = uVar13 ^ uVar14 ^ uVar7;
  if (param_3 < 0x81) {
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
  }
  else {
    local_38 = *(uint *)(param_1 + 0x10);
    local_34 = *(uint *)(param_1 + 0x14);
    if (param_3 < 0xc1) {
      local_2c = 0;
      local_30 = 0;
    }
    else {
      local_30 = *(uint *)(param_1 + 0x18);
      local_2c = *(uint *)(param_1 + 0x1c);
    }
  }
  local_38 = local_38 ^ uVar7;
  local_34 = local_34 ^ uVar8 ^ uVar10;
  local_30 = local_30 ^ uVar10;
  local_2c = local_2c ^ uVar14 ^ uVar8;
  if (iVar6 == 2) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + 1;
  }
  uVar7 = local_38 ^ *(uint *)(KRK + iVar6 * 0x10);
  uVar8 = local_34 ^ *(uint *)(KRK + (iVar6 * 4 + 1) * 4);
  uVar10 = local_30 ^ *(uint *)(KRK + (iVar6 * 2 + 1) * 8);
  uVar13 = local_2c ^ *(uint *)(KRK + iVar6 * 0x10 + 0xc);
  uVar10 = *(uint *)(X1 + (uVar10 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar10 >> 0x10 & 0xff) * 4) ^
           *(uint *)(S1 + (uVar10 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar10 & 0xff) * 4);
  uVar13 = *(uint *)(X1 + (uVar13 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar13 >> 0x10 & 0xff) * 4) ^
           *(uint *)(S1 + (uVar13 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar13 & 0xff) * 4);
  uVar8 = *(uint *)(X1 + (uVar8 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar8 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar8 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar8 & 0xff) * 4) ^ uVar10;
  uVar7 = *(uint *)(X1 + (uVar7 >> 0x18) * 4) ^ *(uint *)(X2 + (uVar7 >> 0x10 & 0xff) * 4) ^
          *(uint *)(S1 + (uVar7 >> 8 & 0xff) * 4) ^ *(uint *)(S2 + (uVar7 & 0xff) * 4) ^ uVar8;
  uVar14 = uVar13 ^ uVar8;
  uVar10 = uVar10 ^ uVar13 ^ uVar7;
  uVar8 = uVar8 ^ uVar10;
  uVar14 = (uVar14 & 0xff00ff) << 8 ^ uVar14 >> 8 & 0xff00ff;
  uVar8 = uVar8 << 0x18 ^ uVar8 >> 0x18 ^ (uVar8 & 0xff00) << 8 ^ (uVar8 & 0xff0000) >> 8 ^ uVar10;
  uVar7 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ uVar8;
  uVar13 = uVar10 ^ uVar14 ^ uVar7;
  uVar7 = uVar7 ^ uVar1;
  uVar10 = uVar8 ^ uVar13 ^ uVar2;
  uVar13 = uVar13 ^ uVar3;
  uVar8 = uVar14 ^ uVar8 ^ uVar4;
  if (iVar6 == 2) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + 1;
  }
  uVar14 = uVar7 ^ *(uint *)(KRK + iVar6 * 0x10);
  uVar9 = uVar10 ^ *(uint *)(KRK + (iVar6 * 4 + 1) * 4);
  uVar11 = uVar13 ^ *(uint *)(KRK + (iVar6 * 2 + 1) * 8);
  uVar15 = uVar8 ^ *(uint *)(KRK + iVar6 * 0x10 + 0xc);
  uVar11 = *(uint *)(S1 + (uVar11 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar11 >> 0x10 & 0xff) * 4) ^
           *(uint *)(X1 + (uVar11 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar11 & 0xff) * 4);
  uVar15 = *(uint *)(S1 + (uVar15 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar15 >> 0x10 & 0xff) * 4) ^
           *(uint *)(X1 + (uVar15 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar15 & 0xff) * 4);
  uVar9 = *(uint *)(S1 + (uVar9 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar9 >> 0x10 & 0xff) * 4) ^
          *(uint *)(X1 + (uVar9 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar9 & 0xff) * 4) ^ uVar11;
  uVar14 = *(uint *)(S1 + (uVar14 >> 0x18) * 4) ^ *(uint *)(S2 + (uVar14 >> 0x10 & 0xff) * 4) ^
           *(uint *)(X1 + (uVar14 >> 8 & 0xff) * 4) ^ *(uint *)(X2 + (uVar14 & 0xff) * 4) ^ uVar9;
  uVar16 = uVar15 ^ uVar9;
  uVar11 = uVar11 ^ uVar15 ^ uVar14;
  uVar12 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar16 = uVar16 << 0x18 ^ uVar16 >> 0x18 ^ (uVar16 & 0xff00) << 8 ^ (uVar16 & 0xff0000) >> 8;
  uVar15 = ((uVar9 ^ uVar11) & 0xff00ff) << 8 ^ (uVar9 ^ uVar11) >> 8 & 0xff00ff ^ uVar12;
  uVar14 = uVar14 ^ uVar15;
  uVar11 = uVar12 ^ uVar16 ^ uVar14;
  uVar14 = local_38 ^ uVar14;
  uVar9 = local_34 ^ uVar15 ^ uVar11;
  uVar11 = local_30 ^ uVar11;
  uVar15 = local_2c ^ uVar16 ^ uVar15;
  *(uint *)param_2 = local_2c << 0xd ^ uVar1 ^ local_38 >> 0x13;
  *(uint *)(param_2 + 4) = local_38 << 0xd ^ uVar2 ^ local_34 >> 0x13;
  *(uint *)(param_2 + 8) = local_34 << 0xd ^ uVar3 ^ local_30 >> 0x13;
  *(uint *)(param_2 + 0xc) = local_30 << 0xd ^ uVar4 ^ local_2c >> 0x13;
  *(uint *)(param_2 + 0x10) = uVar8 << 0xd ^ local_38 ^ uVar7 >> 0x13;
  *(uint *)(param_2 + 0x14) = uVar7 << 0xd ^ local_34 ^ uVar10 >> 0x13;
  *(uint *)(param_2 + 0x18) = uVar10 << 0xd ^ local_30 ^ uVar13 >> 0x13;
  *(uint *)(param_2 + 0x1c) = uVar13 << 0xd ^ local_2c ^ uVar8 >> 0x13;
  *(uint *)(param_2 + 0x20) = uVar15 << 0xd ^ uVar7 ^ uVar14 >> 0x13;
  *(uint *)(param_2 + 0x24) = uVar14 << 0xd ^ uVar10 ^ uVar9 >> 0x13;
  *(uint *)(param_2 + 0x28) = uVar9 << 0xd ^ uVar13 ^ uVar11 >> 0x13;
  *(uint *)(param_2 + 0x2c) = uVar11 << 0xd ^ uVar8 ^ uVar15 >> 0x13;
  *(uint *)(param_2 + 0x30) = uVar4 << 0xd ^ uVar14 ^ uVar1 >> 0x13;
  *(uint *)(param_2 + 0x34) = uVar1 << 0xd ^ uVar9 ^ uVar2 >> 0x13;
  *(uint *)(param_2 + 0x38) = uVar2 << 0xd ^ uVar11 ^ uVar3 >> 0x13;
  *(uint *)(param_2 + 0x3c) = uVar3 << 0xd ^ uVar15 ^ uVar4 >> 0x13;
  *(uint *)(param_2 + 0x40) = local_2c << 1 ^ uVar1 ^ local_38 >> 0x1f;
  *(uint *)(param_2 + 0x44) = local_38 << 1 ^ uVar2 ^ local_34 >> 0x1f;
  *(uint *)(param_2 + 0x48) = local_34 << 1 ^ uVar3 ^ local_30 >> 0x1f;
  *(uint *)(param_2 + 0x4c) = local_30 << 1 ^ uVar4 ^ local_2c >> 0x1f;
  *(uint *)(param_2 + 0x50) = uVar8 << 1 ^ local_38 ^ uVar7 >> 0x1f;
  *(uint *)(param_2 + 0x54) = uVar7 << 1 ^ local_34 ^ uVar10 >> 0x1f;
  *(uint *)(param_2 + 0x58) = uVar10 << 1 ^ local_30 ^ uVar13 >> 0x1f;
  *(uint *)(param_2 + 0x5c) = uVar13 << 1 ^ local_2c ^ uVar8 >> 0x1f;
  *(uint *)(param_2 + 0x60) = uVar15 << 1 ^ uVar7 ^ uVar14 >> 0x1f;
  *(uint *)(param_2 + 100) = uVar14 << 1 ^ uVar10 ^ uVar9 >> 0x1f;
  *(uint *)(param_2 + 0x68) = uVar9 << 1 ^ uVar13 ^ uVar11 >> 0x1f;
  *(uint *)(param_2 + 0x6c) = uVar11 << 1 ^ uVar8 ^ uVar15 >> 0x1f;
  *(uint *)(param_2 + 0x70) = uVar4 << 1 ^ uVar14 ^ uVar1 >> 0x1f;
  *(uint *)(param_2 + 0x74) = uVar1 << 1 ^ uVar9 ^ uVar2 >> 0x1f;
  *(uint *)(param_2 + 0x78) = uVar2 << 1 ^ uVar11 ^ uVar3 >> 0x1f;
  *(uint *)(param_2 + 0x7c) = uVar3 << 1 ^ uVar15 ^ uVar4 >> 0x1f;
  *(uint *)(param_2 + 0x80) = local_34 << 0x1d ^ uVar1 ^ local_30 >> 3;
  *(uint *)(param_2 + 0x84) = local_30 << 0x1d ^ uVar2 ^ local_2c >> 3;
  *(uint *)(param_2 + 0x88) = local_2c << 0x1d ^ uVar3 ^ local_38 >> 3;
  *(uint *)(param_2 + 0x8c) = local_38 << 0x1d ^ uVar4 ^ local_34 >> 3;
  *(uint *)(param_2 + 0x90) = uVar10 << 0x1d ^ local_38 ^ uVar13 >> 3;
  *(uint *)(param_2 + 0x94) = uVar13 << 0x1d ^ local_34 ^ uVar8 >> 3;
  *(uint *)(param_2 + 0x98) = uVar8 << 0x1d ^ local_30 ^ uVar7 >> 3;
  *(uint *)(param_2 + 0x9c) = uVar7 << 0x1d ^ local_2c ^ uVar10 >> 3;
  *(uint *)(param_2 + 0xa0) = uVar9 << 0x1d ^ uVar7 ^ uVar11 >> 3;
  *(uint *)(param_2 + 0xa4) = uVar11 << 0x1d ^ uVar10 ^ uVar15 >> 3;
  *(uint *)(param_2 + 0xa8) = uVar15 << 0x1d ^ uVar13 ^ uVar14 >> 3;
  *(uint *)(param_2 + 0xac) = uVar14 << 0x1d ^ uVar8 ^ uVar9 >> 3;
  *(uint *)(param_2 + 0xb0) = uVar2 << 0x1d ^ uVar14 ^ uVar3 >> 3;
  *(uint *)(param_2 + 0xb4) = uVar3 << 0x1d ^ uVar9 ^ uVar4 >> 3;
  *(uint *)(param_2 + 0xb8) = uVar4 << 0x1d ^ uVar11 ^ uVar1 >> 3;
  *(uint *)(param_2 + 0xbc) = uVar1 << 0x1d ^ uVar15 ^ uVar2 >> 3;
  *(uint *)(param_2 + 0xc0) = local_38 << 0x1f ^ uVar1 ^ local_34 >> 1;
  *(uint *)(param_2 + 0xc4) = local_34 << 0x1f ^ uVar2 ^ local_30 >> 1;
  *(uint *)(param_2 + 200) = local_30 << 0x1f ^ uVar3 ^ local_2c >> 1;
  *(uint *)(param_2 + 0xcc) = local_2c << 0x1f ^ uVar4 ^ local_38 >> 1;
  puVar5 = (uint *)(param_2 + 0xd0);
  if (0x80 < param_3) {
    *(uint *)(param_2 + 0xd0) = uVar7 << 0x1f ^ local_38 ^ uVar10 >> 1;
    *(uint *)(param_2 + 0xd4) = uVar10 << 0x1f ^ local_34 ^ uVar13 >> 1;
    *(uint *)(param_2 + 0xd8) = uVar13 << 0x1f ^ local_30 ^ uVar8 >> 1;
    *(uint *)(param_2 + 0xdc) = uVar8 << 0x1f ^ local_2c ^ uVar7 >> 1;
    *(uint *)(param_2 + 0xe0) = uVar14 << 0x1f ^ uVar7 ^ uVar9 >> 1;
    *(uint *)(param_2 + 0xe4) = uVar9 << 0x1f ^ uVar10 ^ uVar11 >> 1;
    *(uint *)(param_2 + 0xe8) = uVar11 << 0x1f ^ uVar13 ^ uVar15 >> 1;
    *(uint *)(param_2 + 0xec) = uVar15 << 0x1f ^ uVar8 ^ uVar14 >> 1;
    puVar5 = (uint *)(param_2 + 0xf0);
  }
  param_2 = (uchar *)puVar5;
  if (0xc0 < param_3) {
    *(uint *)param_2 = uVar1 << 0x1f ^ uVar14 ^ uVar2 >> 1;
    *(uint *)(param_2 + 4) = uVar2 << 0x1f ^ uVar9 ^ uVar3 >> 1;
    *(uint *)(param_2 + 8) = uVar3 << 0x1f ^ uVar11 ^ uVar4 >> 1;
    *(uint *)(param_2 + 0xc) = uVar4 << 0x1f ^ uVar15 ^ uVar1 >> 1;
    *(uint *)(param_2 + 0x10) = local_38 << 0x13 ^ uVar1 ^ local_34 >> 0xd;
    *(uint *)(param_2 + 0x14) = local_34 << 0x13 ^ uVar2 ^ local_30 >> 0xd;
    *(uint *)(param_2 + 0x18) = local_30 << 0x13 ^ uVar3 ^ local_2c >> 0xd;
    *(uint *)(param_2 + 0x1c) = local_2c << 0x13 ^ uVar4 ^ local_38 >> 0xd;
  }
  return (int)(((uint)(param_3 + 0x100 >> 0x1f) >> 0x1b) + param_3 + 0x100) >> 5;
}

```

