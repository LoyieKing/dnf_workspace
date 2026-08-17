# TaoCrypt__AbstractEuclideanDomain

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Gcd

```asm
// === 087a54e0 TaoCrypt::AbstractEuclideanDomain::Gcd  [0x087a54e0-0x87a58ef] ===
 87a54e0:	55                   	push   %ebp
 87a54e1:	89 e5                	mov    %esp,%ebp
 87a54e3:	57                   	push   %edi
 87a54e4:	56                   	push   %esi
 87a54e5:	53                   	push   %ebx
 87a54e6:	83 ec 4c             	sub    $0x4c,%esp
 87a54e9:	8b 75 08             	mov    0x8(%ebp),%esi
 87a54ec:	e8 07 d9 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a54f1:	81 c3 a7 76 bc 00    	add    $0xbc76a7,%ebx
 87a54f7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a54fc:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 87a5503:	e8 88 22 fc ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 87a5508:	89 c7                	mov    %eax,%edi
 87a550a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 87a550d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a5510:	89 04 24             	mov    %eax,(%esp)
 87a5513:	e8 78 a0 fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a5518:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a551b:	89 3c 24             	mov    %edi,(%esp)
 87a551e:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a5522:	e8 49 9d fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a5527:	8d 47 10             	lea    0x10(%edi),%eax
 87a552a:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87a552d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a5530:	89 04 24             	mov    %eax,(%esp)
 87a5533:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a5537:	e8 34 9d fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a553c:	8d 47 20             	lea    0x20(%edi),%eax
 87a553f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87a5542:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87a5545:	89 04 24             	mov    %eax,(%esp)
 87a5548:	89 54 24 04          	mov    %edx,0x4(%esp)
 87a554c:	e8 1f 9d fb ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87a5551:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a5554:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87a5557:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a555e:	00 
 87a555f:	c1 e0 02             	shl    $0x2,%eax
 87a5562:	89 14 24             	mov    %edx,(%esp)
 87a5565:	89 55 b8             	mov    %edx,-0x48(%ebp)
 87a5568:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a556c:	e8 4f 87 8d ff       	call   807dcc0 <memset@plt>
 87a5571:	8b 55 b8             	mov    -0x48(%ebp),%edx
 87a5574:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a5579:	89 14 24             	mov    %edx,(%esp)
 87a557c:	e8 9f 21 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a5581:	8b 45 10             	mov    0x10(%ebp),%eax
 87a5584:	89 3c 24             	mov    %edi,(%esp)
 87a5587:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a558b:	e8 d0 ae fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a5590:	8b 45 0c             	mov    0xc(%ebp),%eax
 87a5593:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a5597:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a559a:	89 04 24             	mov    %eax,(%esp)
 87a559d:	e8 be ae fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a55a2:	c7 45 c8 02 00 00 00 	movl   $0x2,-0x38(%ebp)
 87a55a9:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 87a55b0:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 87a55b7:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87a55ba:	eb 44                	jmp    87a5600 <_ZNK8TaoCrypt23AbstractEuclideanDomain3GcdERKNS_7IntegerES3_+0x120>
 87a55bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a55c0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87a55c3:	8b 16                	mov    (%esi),%edx
 87a55c5:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87a55c9:	89 34 24             	mov    %esi,(%esp)
 87a55cc:	c1 e0 04             	shl    $0x4,%eax
 87a55cf:	03 45 d4             	add    -0x2c(%ebp),%eax
 87a55d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a55d6:	ff 52 64             	call   *0x64(%edx)
 87a55d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a55dd:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87a55e0:	c1 e0 04             	shl    $0x4,%eax
 87a55e3:	03 45 d4             	add    -0x2c(%ebp),%eax
 87a55e6:	89 04 24             	mov    %eax,(%esp)
 87a55e9:	e8 72 ae fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a55ee:	8b 55 c8             	mov    -0x38(%ebp),%edx
 87a55f1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87a55f4:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87a55f7:	8b 55 cc             	mov    -0x34(%ebp),%edx
 87a55fa:	89 45 cc             	mov    %eax,-0x34(%ebp)
 87a55fd:	89 55 c8             	mov    %edx,-0x38(%ebp)
 87a5600:	8b 06                	mov    (%esi),%eax
 87a5602:	8b 50 08             	mov    0x8(%eax),%edx
 87a5605:	89 34 24             	mov    %esi,(%esp)
 87a5608:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 87a560b:	ff 50 0c             	call   *0xc(%eax)
 87a560e:	8b 7d d0             	mov    -0x30(%ebp),%edi
 87a5611:	89 34 24             	mov    %esi,(%esp)
 87a5614:	c1 e7 04             	shl    $0x4,%edi
 87a5617:	03 7d d4             	add    -0x2c(%ebp),%edi
 87a561a:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a561e:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87a5622:	ff 55 c4             	call   *-0x3c(%ebp)
 87a5625:	84 c0                	test   %al,%al
 87a5627:	74 97                	je     87a55c0 <_ZNK8TaoCrypt23AbstractEuclideanDomain3GcdERKNS_7IntegerES3_+0xe0>
 87a5629:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87a562c:	83 c6 0c             	add    $0xc,%esi
 87a562f:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87a5632:	89 34 24             	mov    %esi,(%esp)
 87a5635:	31 f6                	xor    %esi,%esi
 87a5637:	c1 e0 04             	shl    $0x4,%eax
 87a563a:	8d 04 07             	lea    (%edi,%eax,1),%eax
 87a563d:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a5641:	e8 1a ae fb ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87a5646:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a5649:	8b 07                	mov    (%edi),%eax
 87a564b:	8b 57 04             	mov    0x4(%edi),%edx
 87a564e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a5655:	00 
 87a5656:	c1 e0 02             	shl    $0x2,%eax
 87a5659:	89 14 24             	mov    %edx,(%esp)
 87a565c:	89 55 b8             	mov    %edx,-0x48(%ebp)
 87a565f:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a5663:	e8 58 86 8d ff       	call   807dcc0 <memset@plt>
 87a5668:	8b 55 b8             	mov    -0x48(%ebp),%edx
 87a566b:	89 f0                	mov    %esi,%eax
 87a566d:	88 44 24 04          	mov    %al,0x4(%esp)
 87a5671:	89 14 24             	mov    %edx,(%esp)
 87a5674:	e8 a7 20 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a5679:	8b 45 c0             	mov    -0x40(%ebp),%eax
 87a567c:	8b 50 04             	mov    0x4(%eax),%edx
 87a567f:	8b 47 10             	mov    0x10(%edi),%eax
 87a5682:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a5689:	00 
 87a568a:	89 14 24             	mov    %edx,(%esp)
 87a568d:	c1 e0 02             	shl    $0x2,%eax
 87a5690:	89 55 b8             	mov    %edx,-0x48(%ebp)
 87a5693:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a5697:	e8 24 86 8d ff       	call   807dcc0 <memset@plt>
 87a569c:	8b 55 b8             	mov    -0x48(%ebp),%edx
 87a569f:	89 f0                	mov    %esi,%eax
 87a56a1:	88 44 24 04          	mov    %al,0x4(%esp)
 87a56a5:	89 14 24             	mov    %edx,(%esp)
 87a56a8:	e8 73 20 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a56ad:	8b 45 bc             	mov    -0x44(%ebp),%eax
 87a56b0:	8b 50 04             	mov    0x4(%eax),%edx
 87a56b3:	8b 47 20             	mov    0x20(%edi),%eax
 87a56b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a56bd:	00 
 87a56be:	89 14 24             	mov    %edx,(%esp)
 87a56c1:	c1 e0 02             	shl    $0x2,%eax
 87a56c4:	89 55 b8             	mov    %edx,-0x48(%ebp)
 87a56c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a56cb:	e8 f0 85 8d ff       	call   807dcc0 <memset@plt>
 87a56d0:	8b 55 b8             	mov    -0x48(%ebp),%edx
 87a56d3:	89 f0                	mov    %esi,%eax
 87a56d5:	88 44 24 04          	mov    %al,0x4(%esp)
 87a56d9:	89 14 24             	mov    %edx,(%esp)
 87a56dc:	e8 3f 20 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a56e1:	89 3c 24             	mov    %edi,(%esp)
 87a56e4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a56e9:	e8 32 20 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a56ee:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a56f1:	83 c4 4c             	add    $0x4c,%esp
 87a56f4:	5b                   	pop    %ebx
 87a56f5:	5e                   	pop    %esi
 87a56f6:	5f                   	pop    %edi
 87a56f7:	5d                   	pop    %ebp
 87a56f8:	c3                   	ret
 87a56f9:	90                   	nop
 87a56fa:	90                   	nop
 87a56fb:	90                   	nop
 87a56fc:	90                   	nop
 87a56fd:	90                   	nop
 87a56fe:	90                   	nop
 87a56ff:	90                   	nop

087a5700 <_ZN8TaoCrypt13AbstractGroupD1Ev>:
 87a5700:	e8 bf ee f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a5705:	81 c1 93 74 bc 00    	add    $0xbc7493,%ecx
 87a570b:	55                   	push   %ebp
 87a570c:	89 e5                	mov    %esp,%ebp
 87a570e:	8b 81 6c fe ff ff    	mov    -0x194(%ecx),%eax
 87a5714:	8d 50 08             	lea    0x8(%eax),%edx
 87a5717:	8b 45 08             	mov    0x8(%ebp),%eax
 87a571a:	89 10                	mov    %edx,(%eax)
 87a571c:	5d                   	pop    %ebp
 87a571d:	c3                   	ret
 87a571e:	90                   	nop
 87a571f:	90                   	nop

087a5720 <_ZN8TaoCrypt12AbstractRingD1Ev>:
 87a5720:	e8 9f ee f7 ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87a5725:	81 c1 73 74 bc 00    	add    $0xbc7473,%ecx
 87a572b:	55                   	push   %ebp
 87a572c:	89 e5                	mov    %esp,%ebp
 87a572e:	8b 45 08             	mov    0x8(%ebp),%eax
 87a5731:	8b 91 6c fe ff ff    	mov    -0x194(%ecx),%edx
 87a5737:	83 c2 08             	add    $0x8,%edx
 87a573a:	89 50 04             	mov    %edx,0x4(%eax)
 87a573d:	89 10                	mov    %edx,(%eax)
 87a573f:	5d                   	pop    %ebp
 87a5740:	c3                   	ret
 87a5741:	90                   	nop
 87a5742:	90                   	nop
 87a5743:	90                   	nop
 87a5744:	90                   	nop
 87a5745:	90                   	nop
 87a5746:	90                   	nop
 87a5747:	90                   	nop
 87a5748:	90                   	nop
 87a5749:	90                   	nop
 87a574a:	90                   	nop
 87a574b:	90                   	nop
 87a574c:	90                   	nop
 87a574d:	90                   	nop
 87a574e:	90                   	nop
 87a574f:	90                   	nop

087a5750 <_ZN8TaoCrypt13AbstractGroupD0Ev>:
 87a5750:	55                   	push   %ebp
 87a5751:	89 e5                	mov    %esp,%ebp
 87a5753:	53                   	push   %ebx
 87a5754:	e8 9f d6 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a5759:	81 c3 3f 74 bc 00    	add    $0xbc743f,%ebx
 87a575f:	83 ec 14             	sub    $0x14,%esp
 87a5762:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 87a5768:	8d 50 08             	lea    0x8(%eax),%edx
 87a576b:	8b 45 08             	mov    0x8(%ebp),%eax
 87a576e:	89 10                	mov    %edx,(%eax)
 87a5770:	8d 83 88 33 9a ff    	lea    -0x65cc78(%ebx),%eax
 87a5776:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a577a:	8d 83 90 31 9a ff    	lea    -0x65ce70(%ebx),%eax
 87a5780:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a5784:	8d 83 d5 79 99 ff    	lea    -0x66862b(%ebx),%eax
 87a578a:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 87a5791:	00 
 87a5792:	89 04 24             	mov    %eax,(%esp)
 87a5795:	e8 b6 84 8d ff       	call   807dc50 <__assert_fail@plt>
 87a579a:	90                   	nop
 87a579b:	90                   	nop
 87a579c:	90                   	nop
 87a579d:	90                   	nop
 87a579e:	90                   	nop
 87a579f:	90                   	nop

087a57a0 <_ZN8TaoCrypt12AbstractRingD0Ev>:
 87a57a0:	55                   	push   %ebp
 87a57a1:	89 e5                	mov    %esp,%ebp
 87a57a3:	53                   	push   %ebx
 87a57a4:	e8 4f d6 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a57a9:	81 c3 ef 73 bc 00    	add    $0xbc73ef,%ebx
 87a57af:	83 ec 14             	sub    $0x14,%esp
 87a57b2:	8b 45 08             	mov    0x8(%ebp),%eax
 87a57b5:	8b 93 6c fe ff ff    	mov    -0x194(%ebx),%edx
 87a57bb:	83 c2 08             	add    $0x8,%edx
 87a57be:	89 50 04             	mov    %edx,0x4(%eax)
 87a57c1:	89 10                	mov    %edx,(%eax)
 87a57c3:	8d 83 88 33 9a ff    	lea    -0x65cc78(%ebx),%eax
 87a57c9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a57cd:	8d 83 90 31 9a ff    	lea    -0x65ce70(%ebx),%eax
 87a57d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a57d7:	8d 83 d5 79 99 ff    	lea    -0x66862b(%ebx),%eax
 87a57dd:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 87a57e4:	00 
 87a57e5:	89 04 24             	mov    %eax,(%esp)
 87a57e8:	e8 63 84 8d ff       	call   807dc50 <__assert_fail@plt>
 87a57ed:	90                   	nop
 87a57ee:	90                   	nop
 87a57ef:	90                   	nop

087a57f0 <_ZN8TaoCrypt23AbstractEuclideanDomainD1Ev>:
 87a57f0:	55                   	push   %ebp
 87a57f1:	89 e5                	mov    %esp,%ebp
 87a57f3:	83 ec 28             	sub    $0x28,%esp
 87a57f6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a57f9:	e8 fa d5 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a57fe:	81 c3 9a 73 bc 00    	add    $0xbc739a,%ebx
 87a5804:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a5807:	8b 75 08             	mov    0x8(%ebp),%esi
 87a580a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a580d:	8b 7e 10             	mov    0x10(%esi),%edi
 87a5810:	8b 83 68 fc ff ff    	mov    -0x398(%ebx),%eax
 87a5816:	83 c0 08             	add    $0x8,%eax
 87a5819:	89 06                	mov    %eax,(%esi)
 87a581b:	8b 46 0c             	mov    0xc(%esi),%eax
 87a581e:	89 3c 24             	mov    %edi,(%esp)
 87a5821:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a5828:	00 
 87a5829:	c1 e0 02             	shl    $0x2,%eax
 87a582c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a5830:	e8 8b 84 8d ff       	call   807dcc0 <memset@plt>
 87a5835:	89 3c 24             	mov    %edi,(%esp)
 87a5838:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a583d:	e8 de 1e fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a5842:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 87a5848:	83 c0 08             	add    $0x8,%eax
 87a584b:	89 46 04             	mov    %eax,0x4(%esi)
 87a584e:	89 06                	mov    %eax,(%esi)
 87a5850:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a5853:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a5856:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a5859:	89 ec                	mov    %ebp,%esp
 87a585b:	5d                   	pop    %ebp
 87a585c:	c3                   	ret
 87a585d:	90                   	nop
 87a585e:	90                   	nop
 87a585f:	90                   	nop

087a5860 <_ZN8TaoCrypt23AbstractEuclideanDomainD0Ev>:
 87a5860:	55                   	push   %ebp
 87a5861:	89 e5                	mov    %esp,%ebp
 87a5863:	83 ec 28             	sub    $0x28,%esp
 87a5866:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a5869:	e8 8a d5 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a586e:	81 c3 2a 73 bc 00    	add    $0xbc732a,%ebx
 87a5874:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a5877:	8b 75 08             	mov    0x8(%ebp),%esi
 87a587a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a587d:	8b 7e 10             	mov    0x10(%esi),%edi
 87a5880:	8b 83 68 fc ff ff    	mov    -0x398(%ebx),%eax
 87a5886:	83 c0 08             	add    $0x8,%eax
 87a5889:	89 06                	mov    %eax,(%esi)
 87a588b:	8b 46 0c             	mov    0xc(%esi),%eax
 87a588e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a5895:	00 
 87a5896:	89 3c 24             	mov    %edi,(%esp)
 87a5899:	c1 e0 02             	shl    $0x2,%eax
 87a589c:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a58a0:	e8 1b 84 8d ff       	call   807dcc0 <memset@plt>
 87a58a5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a58aa:	89 3c 24             	mov    %edi,(%esp)
 87a58ad:	e8 6e 1e fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a58b2:	8b 83 6c fe ff ff    	mov    -0x194(%ebx),%eax
 87a58b8:	83 c0 08             	add    $0x8,%eax
 87a58bb:	89 46 04             	mov    %eax,0x4(%esi)
 87a58be:	89 06                	mov    %eax,(%esi)
 87a58c0:	8d 83 88 33 9a ff    	lea    -0x65cc78(%ebx),%eax
 87a58c6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87a58ca:	8d 83 90 31 9a ff    	lea    -0x65ce70(%ebx),%eax
 87a58d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87a58d4:	8d 83 d5 79 99 ff    	lea    -0x66862b(%ebx),%eax
 87a58da:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 87a58e1:	00 
 87a58e2:	89 04 24             	mov    %eax,(%esp)
 87a58e5:	e8 66 83 8d ff       	call   807dc50 <__assert_fail@plt>
 87a58ea:	90                   	nop
 87a58eb:	90                   	nop
 87a58ec:	90                   	nop
 87a58ed:	90                   	nop
 87a58ee:	90                   	nop
 87a58ef:	90                   	nop

```

```c
// TaoCrypt::AbstractEuclideanDomain::Gcd @ 0x87a54e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractEuclideanDomain::Gcd(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
    */

undefined4 __thiscall
TaoCrypt::AbstractEuclideanDomain::Gcd
          (AbstractEuclideanDomain *this,Integer *param_1,Integer *param_2)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  Integer *this_00;
  Integer *pIVar6;
  undefined4 uVar7;
  uint in_stack_ffffffa8;
  uint uVar8;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  void *local_28;
  
  this_00 = operator_new__(0x30,in_stack_ffffffa8 & 0xffffff00);
  Integer::Integer((Integer *)&local_2c);
  Integer::Integer(this_00,(Integer *)&local_2c);
  Integer::Integer(this_00 + 0x10,(Integer *)&local_2c);
  Integer::Integer(this_00 + 0x20,(Integer *)&local_2c);
  uVar8 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar8 & 0xffffff00);
  Integer::operator=(this_00,param_2);
  Integer::operator=(this_00 + 0x10,param_1);
  local_3c = 2;
  local_34 = 1;
  local_38 = 0;
  while( true ) {
    iVar4 = local_34;
    iVar3 = local_38;
    pcVar1 = *(code **)(*(int *)this + 8);
    uVar7 = (**(code **)(*(int *)this + 0xc))(this);
    cVar5 = (*pcVar1)(this,this_00 + local_34 * 0x10,uVar7);
    if (cVar5 != '\0') break;
    pIVar6 = (Integer *)
             (**(code **)(*(int *)this + 100))
                       (this,this_00 + local_38 * 0x10,this_00 + local_34 * 0x10);
    Integer::operator=(this_00 + local_3c * 0x10,pIVar6);
    local_34 = local_3c;
    local_38 = iVar4;
    local_3c = iVar3;
  }
  uVar7 = Integer::operator=((Integer *)(this + 0xc),this_00 + local_38 * 0x10);
  pvVar2 = *(void **)(this_00 + 4);
  uVar8 = 0;
  memset(pvVar2,0,*(int *)this_00 << 2);
  operator_delete__(pvVar2,uVar8 & 0xffffff00);
  pvVar2 = *(void **)(this_00 + 0x14);
  uVar8 = 0;
  memset(pvVar2,0,*(int *)(this_00 + 0x10) << 2);
  operator_delete__(pvVar2,uVar8 & 0xffffff00);
  pvVar2 = *(void **)(this_00 + 0x24);
  uVar8 = 0;
  memset(pvVar2,0,*(int *)(this_00 + 0x20) << 2);
  uVar8 = uVar8 & 0xffffff00;
  operator_delete__(pvVar2,uVar8);
  operator_delete__(this_00,uVar8 & 0xffffff00);
  return uVar7;
}

```

---

## Mod

```asm
// === 087a3f20 TaoCrypt::AbstractEuclideanDomain::Mod  [0x087a3f20-0x87a3faf] ===
 87a3f20:	55                   	push   %ebp
 87a3f21:	89 e5                	mov    %esp,%ebp
 87a3f23:	83 ec 58             	sub    $0x58,%esp
 87a3f26:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87a3f29:	8d 45 d8             	lea    -0x28(%ebp),%eax
 87a3f2c:	e8 c7 ee f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a3f31:	81 c3 67 8c bc 00    	add    $0xbc8c67,%ebx
 87a3f37:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87a3f3a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87a3f3d:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a3f40:	89 04 24             	mov    %eax,(%esp)
 87a3f43:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87a3f46:	e8 45 b6 fb ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87a3f4b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87a3f4e:	8d 77 0c             	lea    0xc(%edi),%esi
 87a3f51:	8b 17                	mov    (%edi),%edx
 87a3f53:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87a3f56:	89 74 24 04          	mov    %esi,0x4(%esp)
 87a3f5a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 87a3f5e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a3f61:	89 3c 24             	mov    %edi,(%esp)
 87a3f64:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a3f68:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 87a3f6c:	ff 52 60             	call   *0x60(%edx)
 87a3f6f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87a3f72:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87a3f75:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87a3f7c:	00 
 87a3f7d:	c1 e0 02             	shl    $0x2,%eax
 87a3f80:	89 3c 24             	mov    %edi,(%esp)
 87a3f83:	89 44 24 08          	mov    %eax,0x8(%esp)
 87a3f87:	e8 34 9d 8d ff       	call   807dcc0 <memset@plt>
 87a3f8c:	89 3c 24             	mov    %edi,(%esp)
 87a3f8f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87a3f94:	e8 87 37 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87a3f99:	89 f0                	mov    %esi,%eax
 87a3f9b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87a3f9e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87a3fa1:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87a3fa4:	89 ec                	mov    %ebp,%esp
 87a3fa6:	5d                   	pop    %ebp
 87a3fa7:	c3                   	ret
 87a3fa8:	90                   	nop
 87a3fa9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::AbstractEuclideanDomain::Mod @ 0x87a3f20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AbstractEuclideanDomain::Mod(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
    */

AbstractEuclideanDomain * __thiscall
TaoCrypt::AbstractEuclideanDomain::Mod
          (AbstractEuclideanDomain *this,Integer *param_1,Integer *param_2)

{
  uint uVar1;
  int local_2c;
  void *local_28;
  
  Integer::Integer((Integer *)&local_2c);
  (**(code **)(*(int *)this + 0x60))(this,this + 0xc,(Integer *)&local_2c,param_1,param_2);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return this + 0xc;
}

```

