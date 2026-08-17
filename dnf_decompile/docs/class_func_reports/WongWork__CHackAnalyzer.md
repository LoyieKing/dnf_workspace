# WongWork__CHackAnalyzer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 23

---

## AddCheckRateHackTypeList

```asm
// === 080f8550 WongWork::CHackAnalyzer::AddCheckRateHackTypeList  [0x080f8550-0x80f8ab9] ===
 80f8550:	55                   	push   %ebp
 80f8551:	89 e5                	mov    %esp,%ebp
 80f8553:	81 ec c8 00 00 00    	sub    $0xc8,%esp
 80f8559:	c7 85 50 ff ff ff 84 	movl   $0x84,-0xb0(%ebp)
 80f8560:	00 00 00 
 80f8563:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8566:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f856c:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 80f8572:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8576:	89 14 24             	mov    %edx,(%esp)
 80f8579:	e8 70 5c f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f857e:	c7 85 54 ff ff ff dc 	movl   $0xdc,-0xac(%ebp)
 80f8585:	00 00 00 
 80f8588:	8b 45 08             	mov    0x8(%ebp),%eax
 80f858b:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8591:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 80f8597:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f859b:	89 14 24             	mov    %edx,(%esp)
 80f859e:	e8 4b 5c f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f85a3:	c7 85 58 ff ff ff 38 	movl   $0x138,-0xa8(%ebp)
 80f85aa:	01 00 00 
 80f85ad:	8b 45 08             	mov    0x8(%ebp),%eax
 80f85b0:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f85b6:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 80f85bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f85c0:	89 14 24             	mov    %edx,(%esp)
 80f85c3:	e8 26 5c f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f85c8:	c7 85 5c ff ff ff 39 	movl   $0x139,-0xa4(%ebp)
 80f85cf:	01 00 00 
 80f85d2:	8b 45 08             	mov    0x8(%ebp),%eax
 80f85d5:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f85db:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 80f85e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f85e5:	89 14 24             	mov    %edx,(%esp)
 80f85e8:	e8 01 5c f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f85ed:	c7 85 60 ff ff ff 86 	movl   $0x86,-0xa0(%ebp)
 80f85f4:	00 00 00 
 80f85f7:	8b 45 08             	mov    0x8(%ebp),%eax
 80f85fa:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8600:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 80f8606:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f860a:	89 14 24             	mov    %edx,(%esp)
 80f860d:	e8 dc 5b f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8612:	c7 85 64 ff ff ff de 	movl   $0xde,-0x9c(%ebp)
 80f8619:	00 00 00 
 80f861c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f861f:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8625:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 80f862b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f862f:	89 14 24             	mov    %edx,(%esp)
 80f8632:	e8 b7 5b f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8637:	c7 85 68 ff ff ff a4 	movl   $0x1a4,-0x98(%ebp)
 80f863e:	01 00 00 
 80f8641:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8644:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f864a:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 80f8650:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8654:	89 14 24             	mov    %edx,(%esp)
 80f8657:	e8 92 5b f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f865c:	c7 85 6c ff ff ff a5 	movl   $0x1a5,-0x94(%ebp)
 80f8663:	01 00 00 
 80f8666:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8669:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f866f:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 80f8675:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8679:	89 14 24             	mov    %edx,(%esp)
 80f867c:	e8 6d 5b f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8681:	c7 85 70 ff ff ff a7 	movl   $0x1a7,-0x90(%ebp)
 80f8688:	01 00 00 
 80f868b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f868e:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8694:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80f869a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f869e:	89 14 24             	mov    %edx,(%esp)
 80f86a1:	e8 48 5b f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f86a6:	c7 85 74 ff ff ff df 	movl   $0xdf,-0x8c(%ebp)
 80f86ad:	00 00 00 
 80f86b0:	8b 45 08             	mov    0x8(%ebp),%eax
 80f86b3:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f86b9:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 80f86bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f86c3:	89 14 24             	mov    %edx,(%esp)
 80f86c6:	e8 23 5b f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f86cb:	c7 85 78 ff ff ff e0 	movl   $0xe0,-0x88(%ebp)
 80f86d2:	00 00 00 
 80f86d5:	8b 45 08             	mov    0x8(%ebp),%eax
 80f86d8:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f86de:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 80f86e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f86e8:	89 14 24             	mov    %edx,(%esp)
 80f86eb:	e8 fe 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f86f0:	c7 85 7c ff ff ff e1 	movl   $0xe1,-0x84(%ebp)
 80f86f7:	00 00 00 
 80f86fa:	8b 45 08             	mov    0x8(%ebp),%eax
 80f86fd:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8703:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 80f8709:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f870d:	89 14 24             	mov    %edx,(%esp)
 80f8710:	e8 d9 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8715:	c7 45 80 a4 01 00 00 	movl   $0x1a4,-0x80(%ebp)
 80f871c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f871f:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8725:	8d 45 80             	lea    -0x80(%ebp),%eax
 80f8728:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f872c:	89 14 24             	mov    %edx,(%esp)
 80f872f:	e8 ba 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8734:	c7 45 84 a5 01 00 00 	movl   $0x1a5,-0x7c(%ebp)
 80f873b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f873e:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8744:	8d 45 84             	lea    -0x7c(%ebp),%eax
 80f8747:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f874b:	89 14 24             	mov    %edx,(%esp)
 80f874e:	e8 9b 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8753:	c7 45 88 a7 01 00 00 	movl   $0x1a7,-0x78(%ebp)
 80f875a:	8b 45 08             	mov    0x8(%ebp),%eax
 80f875d:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8763:	8d 45 88             	lea    -0x78(%ebp),%eax
 80f8766:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f876a:	89 14 24             	mov    %edx,(%esp)
 80f876d:	e8 7c 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8772:	c7 45 8c df 00 00 00 	movl   $0xdf,-0x74(%ebp)
 80f8779:	8b 45 08             	mov    0x8(%ebp),%eax
 80f877c:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8782:	8d 45 8c             	lea    -0x74(%ebp),%eax
 80f8785:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8789:	89 14 24             	mov    %edx,(%esp)
 80f878c:	e8 5d 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8791:	c7 45 90 e0 00 00 00 	movl   $0xe0,-0x70(%ebp)
 80f8798:	8b 45 08             	mov    0x8(%ebp),%eax
 80f879b:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f87a1:	8d 45 90             	lea    -0x70(%ebp),%eax
 80f87a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f87a8:	89 14 24             	mov    %edx,(%esp)
 80f87ab:	e8 3e 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f87b0:	c7 45 94 e1 00 00 00 	movl   $0xe1,-0x6c(%ebp)
 80f87b7:	8b 45 08             	mov    0x8(%ebp),%eax
 80f87ba:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f87c0:	8d 45 94             	lea    -0x6c(%ebp),%eax
 80f87c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f87c7:	89 14 24             	mov    %edx,(%esp)
 80f87ca:	e8 1f 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f87cf:	c7 45 98 84 00 00 00 	movl   $0x84,-0x68(%ebp)
 80f87d6:	8b 45 08             	mov    0x8(%ebp),%eax
 80f87d9:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f87df:	8d 45 98             	lea    -0x68(%ebp),%eax
 80f87e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f87e6:	89 14 24             	mov    %edx,(%esp)
 80f87e9:	e8 00 5a f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f87ee:	c7 45 9c ca 00 00 00 	movl   $0xca,-0x64(%ebp)
 80f87f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80f87f8:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f87fe:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80f8801:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8805:	89 14 24             	mov    %edx,(%esp)
 80f8808:	e8 e1 59 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f880d:	c7 45 a0 cd 00 00 00 	movl   $0xcd,-0x60(%ebp)
 80f8814:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8817:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f881d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 80f8820:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8824:	89 14 24             	mov    %edx,(%esp)
 80f8827:	e8 c2 59 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f882c:	c7 45 a4 ce 00 00 00 	movl   $0xce,-0x5c(%ebp)
 80f8833:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8836:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f883c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 80f883f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8843:	89 14 24             	mov    %edx,(%esp)
 80f8846:	e8 a3 59 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f884b:	c7 45 a8 d0 00 00 00 	movl   $0xd0,-0x58(%ebp)
 80f8852:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8855:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f885b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80f885e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8862:	89 14 24             	mov    %edx,(%esp)
 80f8865:	e8 84 59 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f886a:	c7 45 ac d1 00 00 00 	movl   $0xd1,-0x54(%ebp)
 80f8871:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8874:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f887a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 80f887d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8881:	89 14 24             	mov    %edx,(%esp)
 80f8884:	e8 65 59 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8889:	c7 45 b0 d7 00 00 00 	movl   $0xd7,-0x50(%ebp)
 80f8890:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8893:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8899:	8d 45 b0             	lea    -0x50(%ebp),%eax
 80f889c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f88a0:	89 14 24             	mov    %edx,(%esp)
 80f88a3:	e8 46 59 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f88a8:	c7 45 b4 d8 00 00 00 	movl   $0xd8,-0x4c(%ebp)
 80f88af:	8b 45 08             	mov    0x8(%ebp),%eax
 80f88b2:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f88b8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f88bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f88bf:	89 14 24             	mov    %edx,(%esp)
 80f88c2:	e8 27 59 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f88c7:	c7 45 b8 d9 00 00 00 	movl   $0xd9,-0x48(%ebp)
 80f88ce:	8b 45 08             	mov    0x8(%ebp),%eax
 80f88d1:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f88d7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80f88da:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f88de:	89 14 24             	mov    %edx,(%esp)
 80f88e1:	e8 08 59 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f88e6:	c7 45 bc da 00 00 00 	movl   $0xda,-0x44(%ebp)
 80f88ed:	8b 45 08             	mov    0x8(%ebp),%eax
 80f88f0:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f88f6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80f88f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f88fd:	89 14 24             	mov    %edx,(%esp)
 80f8900:	e8 e9 58 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8905:	c7 45 c0 db 00 00 00 	movl   $0xdb,-0x40(%ebp)
 80f890c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f890f:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8915:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80f8918:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f891c:	89 14 24             	mov    %edx,(%esp)
 80f891f:	e8 ca 58 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8924:	c7 45 c4 dc 00 00 00 	movl   $0xdc,-0x3c(%ebp)
 80f892b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f892e:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8934:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80f8937:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f893b:	89 14 24             	mov    %edx,(%esp)
 80f893e:	e8 ab 58 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8943:	c7 45 c8 38 01 00 00 	movl   $0x138,-0x38(%ebp)
 80f894a:	8b 45 08             	mov    0x8(%ebp),%eax
 80f894d:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8953:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80f8956:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f895a:	89 14 24             	mov    %edx,(%esp)
 80f895d:	e8 8c 58 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8962:	c7 45 cc 39 01 00 00 	movl   $0x139,-0x34(%ebp)
 80f8969:	8b 45 08             	mov    0x8(%ebp),%eax
 80f896c:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8972:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f8975:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8979:	89 14 24             	mov    %edx,(%esp)
 80f897c:	e8 6d 58 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8981:	c7 45 d0 93 01 00 00 	movl   $0x193,-0x30(%ebp)
 80f8988:	8b 45 08             	mov    0x8(%ebp),%eax
 80f898b:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8991:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f8994:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8998:	89 14 24             	mov    %edx,(%esp)
 80f899b:	e8 4e 58 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f89a0:	c7 45 d4 9e 01 00 00 	movl   $0x19e,-0x2c(%ebp)
 80f89a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80f89aa:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f89b0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80f89b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f89b7:	89 14 24             	mov    %edx,(%esp)
 80f89ba:	e8 2f 58 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f89bf:	c7 45 d8 86 00 00 00 	movl   $0x86,-0x28(%ebp)
 80f89c6:	8b 45 08             	mov    0x8(%ebp),%eax
 80f89c9:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f89cf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f89d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f89d6:	89 14 24             	mov    %edx,(%esp)
 80f89d9:	e8 10 58 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f89de:	c7 45 dc de 00 00 00 	movl   $0xde,-0x24(%ebp)
 80f89e5:	8b 45 08             	mov    0x8(%ebp),%eax
 80f89e8:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f89ee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f89f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f89f5:	89 14 24             	mov    %edx,(%esp)
 80f89f8:	e8 f1 57 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f89fd:	c7 45 e0 a4 01 00 00 	movl   $0x1a4,-0x20(%ebp)
 80f8a04:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8a07:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8a0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f8a10:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8a14:	89 14 24             	mov    %edx,(%esp)
 80f8a17:	e8 d2 57 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8a1c:	c7 45 e4 a5 01 00 00 	movl   $0x1a5,-0x1c(%ebp)
 80f8a23:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8a26:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8a2c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f8a2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8a33:	89 14 24             	mov    %edx,(%esp)
 80f8a36:	e8 b3 57 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8a3b:	c7 45 e8 a7 01 00 00 	movl   $0x1a7,-0x18(%ebp)
 80f8a42:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8a45:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8a4b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f8a4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8a52:	89 14 24             	mov    %edx,(%esp)
 80f8a55:	e8 94 57 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8a5a:	c7 45 ec df 00 00 00 	movl   $0xdf,-0x14(%ebp)
 80f8a61:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8a64:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8a6a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8a6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8a71:	89 14 24             	mov    %edx,(%esp)
 80f8a74:	e8 75 57 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8a79:	c7 45 f0 e0 00 00 00 	movl   $0xe0,-0x10(%ebp)
 80f8a80:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8a83:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8a89:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f8a8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8a90:	89 14 24             	mov    %edx,(%esp)
 80f8a93:	e8 56 57 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8a98:	c7 45 f4 e1 00 00 00 	movl   $0xe1,-0xc(%ebp)
 80f8a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8aa2:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8aa8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80f8aab:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8aaf:	89 14 24             	mov    %edx,(%esp)
 80f8ab2:	e8 37 57 f9 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80f8ab7:	c9                   	leave
 80f8ab8:	c3                   	ret
 80f8ab9:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::AddCheckRateHackTypeList @ 0x80f8550

/* WongWork::CHackAnalyzer::AddCheckRateHackTypeList() */

void __thiscall WongWork::CHackAnalyzer::AddCheckRateHackTypeList(CHackAnalyzer *this)

{
  int local_b4 [44];
  
  local_b4[0] = 0x84;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4);
  local_b4[1] = 0xdc;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 1);
  local_b4[2] = 0x138;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 2);
  local_b4[3] = 0x139;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 3);
  local_b4[4] = 0x86;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 4);
  local_b4[5] = 0xde;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 5);
  local_b4[6] = 0x1a4;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 6);
  local_b4[7] = 0x1a5;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 7);
  local_b4[8] = 0x1a7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 8);
  local_b4[9] = 0xdf;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 9);
  local_b4[10] = 0xe0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 10);
  local_b4[0xb] = 0xe1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xb);
  local_b4[0xc] = 0x1a4;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xc);
  local_b4[0xd] = 0x1a5;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xd);
  local_b4[0xe] = 0x1a7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xe);
  local_b4[0xf] = 0xdf;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0xf);
  local_b4[0x10] = 0xe0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0x10);
  local_b4[0x11] = 0xe1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a24),local_b4 + 0x11);
  local_b4[0x12] = 0x84;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x12);
  local_b4[0x13] = 0xca;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x13);
  local_b4[0x14] = 0xcd;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x14);
  local_b4[0x15] = 0xce;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x15);
  local_b4[0x16] = 0xd0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x16);
  local_b4[0x17] = 0xd1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x17);
  local_b4[0x18] = 0xd7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x18);
  local_b4[0x19] = 0xd8;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x19);
  local_b4[0x1a] = 0xd9;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1a);
  local_b4[0x1b] = 0xda;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1b);
  local_b4[0x1c] = 0xdb;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1c);
  local_b4[0x1d] = 0xdc;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1d);
  local_b4[0x1e] = 0x138;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1e);
  local_b4[0x1f] = 0x139;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x1f);
  local_b4[0x20] = 0x193;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x20);
  local_b4[0x21] = 0x19e;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x21);
  local_b4[0x22] = 0x86;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x22);
  local_b4[0x23] = 0xde;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x23);
  local_b4[0x24] = 0x1a4;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x24);
  local_b4[0x25] = 0x1a5;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x25);
  local_b4[0x26] = 0x1a7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x26);
  local_b4[0x27] = 0xdf;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x27);
  local_b4[0x28] = 0xe0;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x28);
  local_b4[0x29] = 0xe1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x7a30),local_b4 + 0x29);
  return;
}

```

---

## CheckExceptionCnt

```asm
// === 080f81fc WongWork::CHackAnalyzer::CheckExceptionCnt  [0x080f81fc-0x80f831f] ===
 80f81fc:	55                   	push   %ebp
 80f81fd:	89 e5                	mov    %esp,%ebp
 80f81ff:	53                   	push   %ebx
 80f8200:	83 ec 44             	sub    $0x44,%esp
 80f8203:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8206:	89 c1                	mov    %eax,%ecx
 80f8208:	8b 15 d4 f7 41 09    	mov    0x941f7d4,%edx
 80f820e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f8211:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80f8215:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f8219:	89 04 24             	mov    %eax,(%esp)
 80f821c:	e8 09 15 00 00       	call   80f972a <_ZN8WongWork26CAutoPunishRuleHackTypeMgr15GetExceptionCntEi>
 80f8221:	83 ec 04             	sub    $0x4,%esp
 80f8224:	0f b7 45 d8          	movzwl -0x28(%ebp),%eax
 80f8228:	66 85 c0             	test   %ax,%ax
 80f822b:	0f 84 ca 00 00 00    	je     80f82fb <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi+0xff>
 80f8231:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f8234:	89 04 24             	mov    %eax,(%esp)
 80f8237:	e8 1a 1b 00 00       	call   80f9d56 <_ZNSt4pairISt17_Rb_tree_iteratorIS_IKiiEEbEC1Ev>
 80f823c:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 80f8243:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8246:	8d 55 f4             	lea    -0xc(%ebp),%edx
 80f8249:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f824d:	8d 55 0c             	lea    0xc(%ebp),%edx
 80f8250:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f8254:	89 04 24             	mov    %eax,(%esp)
 80f8257:	e8 14 1b 00 00       	call   80f9d70 <_ZSt9make_pairIRN8WongWork13ENUM_HACKTYPEEiESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 80f825c:	83 ec 04             	sub    $0x4,%esp
 80f825f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8262:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8266:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f8269:	89 04 24             	mov    %eax,(%esp)
 80f826c:	e8 41 1b 00 00       	call   80f9db2 <_ZNSt4pairIKiiEC1IN8WongWork13ENUM_HACKTYPEEiEEOS_IT_T0_E>
 80f8271:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8274:	8d 88 0c 7a 00 00    	lea    0x7a0c(%eax),%ecx
 80f827a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f827d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 80f8280:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f8284:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f8288:	89 04 24             	mov    %eax,(%esp)
 80f828b:	e8 c0 ea fc ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 80f8290:	83 ec 04             	sub    $0x4,%esp
 80f8293:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f8296:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f829a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f829d:	89 04 24             	mov    %eax,(%esp)
 80f82a0:	e8 3f 1b 00 00       	call   80f9de4 <_ZNSt4pairISt17_Rb_tree_iteratorIS_IKiiEEbEaSEOS4_>
 80f82a5:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 80f82a9:	83 f0 01             	xor    $0x1,%eax
 80f82ac:	84 c0                	test   %al,%al
 80f82ae:	74 44                	je     80f82f4 <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi+0xf8>
 80f82b0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f82b3:	89 04 24             	mov    %eax,(%esp)
 80f82b6:	e8 85 50 fd ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80f82bb:	89 c3                	mov    %eax,%ebx
 80f82bd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f82c0:	89 04 24             	mov    %eax,(%esp)
 80f82c3:	e8 78 50 fd ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80f82c8:	8b 40 04             	mov    0x4(%eax),%eax
 80f82cb:	03 45 10             	add    0x10(%ebp),%eax
 80f82ce:	89 43 04             	mov    %eax,0x4(%ebx)
 80f82d1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f82d4:	89 04 24             	mov    %eax,(%esp)
 80f82d7:	e8 64 50 fd ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80f82dc:	8b 50 04             	mov    0x4(%eax),%edx
 80f82df:	0f b7 45 d8          	movzwl -0x28(%ebp),%eax
 80f82e3:	98                   	cwtl
 80f82e4:	39 c2                	cmp    %eax,%edx
 80f82e6:	0f 9d c0             	setge  %al
 80f82e9:	84 c0                	test   %al,%al
 80f82eb:	74 07                	je     80f82f4 <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi+0xf8>
 80f82ed:	b8 00 00 00 00       	mov    $0x0,%eax
 80f82f2:	eb 26                	jmp    80f831a <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi+0x11e>
 80f82f4:	b8 01 00 00 00       	mov    $0x1,%eax
 80f82f9:	eb 1f                	jmp    80f831a <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi+0x11e>
 80f82fb:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 80f82ff:	66 85 c0             	test   %ax,%ax
 80f8302:	74 11                	je     80f8315 <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi+0x119>
 80f8304:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 80f8308:	98                   	cwtl
 80f8309:	3b 45 10             	cmp    0x10(%ebp),%eax
 80f830c:	7c 07                	jl     80f8315 <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi+0x119>
 80f830e:	b8 01 00 00 00       	mov    $0x1,%eax
 80f8313:	eb 05                	jmp    80f831a <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi+0x11e>
 80f8315:	b8 00 00 00 00       	mov    $0x0,%eax
 80f831a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80f831d:	c9                   	leave
 80f831e:	c3                   	ret
 80f831f:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::CheckExceptionCnt @ 0x80f81fc

/* WongWork::CHackAnalyzer::CheckExceptionCnt(WongWork::ENUM_HACKTYPE, int) */

undefined4 __thiscall
WongWork::CHackAnalyzer::CheckExceptionCnt(undefined4 this,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  pair<std::_Rb_tree_iterator<std::pair<int_const,int>>,bool> local_34 [4];
  char local_30;
  short local_2c;
  short local_2a;
  pair local_28 [8];
  pair<int_const,int> local_20 [8];
  ENUM_HACKTYPE local_18 [8];
  undefined4 local_10;
  
  CAutoPunishRuleHackTypeMgr::GetExceptionCnt((int)&local_2c);
  if (local_2c == 0) {
    if ((local_2a == 0) || (local_2a < param_3)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    std::pair<std::_Rb_tree_iterator<std::pair<int_const,int>>,bool>::pair(local_34);
    local_10 = 1;
    std::make_pair<WongWork::ENUM_HACKTYPE&,int>(local_18,&param_2);
    std::pair<int_const,int>::pair<WongWork::ENUM_HACKTYPE,int>(local_20,local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_28);
    std::pair<std::_Rb_tree_iterator<std::pair<int_const,int>>,bool>::operator=(local_34,local_28);
    if (local_30 != '\x01') {
      iVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_34);
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_34);
      *(int *)(iVar1 + 4) = *(int *)(iVar2 + 4) + param_3;
      iVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_34);
      if ((int)local_2c <= *(int *)(iVar1 + 4)) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## CheckHackRateByDifficult

```asm
// === 080f842e WongWork::CHackAnalyzer::CheckHackRateByDifficult  [0x080f842e-0x80f854f] ===
 80f842e:	55                   	push   %ebp
 80f842f:	89 e5                	mov    %esp,%ebp
 80f8431:	83 ec 38             	sub    $0x38,%esp
 80f8434:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8437:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80f843a:	8b 45 08             	mov    0x8(%ebp),%eax
 80f843d:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f8443:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f8446:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f844a:	89 04 24             	mov    %eax,(%esp)
 80f844d:	e8 1a 5e f9 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 80f8452:	83 ec 04             	sub    $0x4,%esp
 80f8455:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8458:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f845e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8461:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f8465:	89 04 24             	mov    %eax,(%esp)
 80f8468:	e8 db 5d f9 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 80f846d:	83 ec 04             	sub    $0x4,%esp
 80f8470:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f8473:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 80f8476:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80f847a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80f847d:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f8481:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80f8484:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f8488:	89 04 24             	mov    %eax,(%esp)
 80f848b:	e8 07 15 00 00       	call   80f9997 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_>
 80f8490:	83 ec 04             	sub    $0x4,%esp
 80f8493:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f8496:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f849a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f849d:	89 04 24             	mov    %eax,(%esp)
 80f84a0:	e8 47 15 00 00       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 80f84a5:	8b 45 08             	mov    0x8(%ebp),%eax
 80f84a8:	8d 90 30 7a 00 00    	lea    0x7a30(%eax),%edx
 80f84ae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f84b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f84b5:	89 04 24             	mov    %eax,(%esp)
 80f84b8:	e8 af 5d f9 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 80f84bd:	83 ec 04             	sub    $0x4,%esp
 80f84c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f84c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f84c7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f84ca:	89 04 24             	mov    %eax,(%esp)
 80f84cd:	e8 46 19 00 00       	call   80f9e18 <_ZN9__gnu_cxxeqIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 80f84d2:	84 c0                	test   %al,%al
 80f84d4:	74 07                	je     80f84dd <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0xaf>
 80f84d6:	b8 01 00 00 00       	mov    $0x1,%eax
 80f84db:	eb 71                	jmp    80f854e <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0x120>
 80f84dd:	81 7d 0c 86 00 00 00 	cmpl   $0x86,0xc(%ebp)
 80f84e4:	75 03                	jne    80f84e9 <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0xbb>
 80f84e6:	d1 65 10             	shll   $1,0x10(%ebp)
 80f84e9:	b8 64 00 00 00       	mov    $0x64,%eax
 80f84ee:	2b 45 10             	sub    0x10(%ebp),%eax
 80f84f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f84f4:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80f84f8:	78 06                	js     80f8500 <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0xd2>
 80f84fa:	83 7d 14 04          	cmpl   $0x4,0x14(%ebp)
 80f84fe:	7e 07                	jle    80f8507 <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0xd9>
 80f8500:	b8 01 00 00 00       	mov    $0x1,%eax
 80f8505:	eb 47                	jmp    80f854e <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0x120>
 80f8507:	8b 45 14             	mov    0x14(%ebp),%eax
 80f850a:	0f b7 84 00 9c e0 b3 	movzwl 0x8b3e09c(%eax,%eax,1),%eax
 80f8511:	08 
 80f8512:	98                   	cwtl
 80f8513:	29 45 f4             	sub    %eax,-0xc(%ebp)
 80f8516:	83 7d f4 18          	cmpl   $0x18,-0xc(%ebp)
 80f851a:	7f 10                	jg     80f852c <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0xfe>
 80f851c:	81 7d 0c 86 00 00 00 	cmpl   $0x86,0xc(%ebp)
 80f8523:	74 07                	je     80f852c <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0xfe>
 80f8525:	c7 45 f4 19 00 00 00 	movl   $0x19,-0xc(%ebp)
 80f852c:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 80f8533:	e8 4f 96 5b 00       	call   86b1b87 <_Z12get_rand_inti>
 80f8538:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80f853b:	0f 9e c0             	setle  %al
 80f853e:	84 c0                	test   %al,%al
 80f8540:	74 07                	je     80f8549 <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0x11b>
 80f8542:	b8 01 00 00 00       	mov    $0x1,%eax
 80f8547:	eb 05                	jmp    80f854e <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii+0x120>
 80f8549:	b8 00 00 00 00       	mov    $0x0,%eax
 80f854e:	c9                   	leave
 80f854f:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::CheckHackRateByDifficult @ 0x80f842e

/* WongWork::CHackAnalyzer::CheckHackRateByDifficult(WongWork::ENUM_HACKTYPE, int, int) */

undefined4 __thiscall
WongWork::CHackAnalyzer::CheckHackRateByDifficult
          (undefined4 this,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  int local_10;
  
  local_20 = param_2;
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
            (local_24,local_18,local_1c,&local_20);
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_28,local_24);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator==(local_28,local_14);
  if (bVar1) {
    uVar2 = 1;
  }
  else {
    if (param_2 == 0x86) {
      param_3 = param_3 << 1;
    }
    if ((param_4 < 0) || (4 < param_4)) {
      uVar2 = 1;
    }
    else {
      local_10 = (100 - param_3) - (int)*(short *)(_S_HACK_CHECK_RATE_BY_DIFFICULT + param_4 * 2);
      if ((local_10 < 0x19) && (param_2 != 0x86)) {
        local_10 = 0x19;
      }
      iVar3 = get_rand_int(100);
      if (local_10 < iVar3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

```

---

## CheckHackRateByPartyCount

```asm
// === 080f8320 WongWork::CHackAnalyzer::CheckHackRateByPartyCount  [0x080f8320-0x80f842d] ===
 80f8320:	55                   	push   %ebp
 80f8321:	89 e5                	mov    %esp,%ebp
 80f8323:	83 ec 38             	sub    $0x38,%esp
 80f8326:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8329:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80f832c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f832f:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8335:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f8338:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f833c:	89 04 24             	mov    %eax,(%esp)
 80f833f:	e8 28 5f f9 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 80f8344:	83 ec 04             	sub    $0x4,%esp
 80f8347:	8b 45 08             	mov    0x8(%ebp),%eax
 80f834a:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f8350:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8353:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f8357:	89 04 24             	mov    %eax,(%esp)
 80f835a:	e8 e9 5e f9 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 80f835f:	83 ec 04             	sub    $0x4,%esp
 80f8362:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f8365:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 80f8368:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80f836c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80f836f:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f8373:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80f8376:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f837a:	89 04 24             	mov    %eax,(%esp)
 80f837d:	e8 15 16 00 00       	call   80f9997 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_>
 80f8382:	83 ec 04             	sub    $0x4,%esp
 80f8385:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f8388:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f838c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f838f:	89 04 24             	mov    %eax,(%esp)
 80f8392:	e8 55 16 00 00       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 80f8397:	8b 45 08             	mov    0x8(%ebp),%eax
 80f839a:	8d 90 24 7a 00 00    	lea    0x7a24(%eax),%edx
 80f83a0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f83a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f83a7:	89 04 24             	mov    %eax,(%esp)
 80f83aa:	e8 bd 5e f9 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 80f83af:	83 ec 04             	sub    $0x4,%esp
 80f83b2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f83b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f83b9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f83bc:	89 04 24             	mov    %eax,(%esp)
 80f83bf:	e8 54 1a 00 00       	call   80f9e18 <_ZN9__gnu_cxxeqIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 80f83c4:	84 c0                	test   %al,%al
 80f83c6:	74 07                	je     80f83cf <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi+0xaf>
 80f83c8:	b8 01 00 00 00       	mov    $0x1,%eax
 80f83cd:	eb 5c                	jmp    80f842b <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi+0x10b>
 80f83cf:	8b 45 10             	mov    0x10(%ebp),%eax
 80f83d2:	83 e8 01             	sub    $0x1,%eax
 80f83d5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f83d8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80f83dc:	78 17                	js     80f83f5 <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi+0xd5>
 80f83de:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 80f83e2:	7f 11                	jg     80f83f5 <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi+0xd5>
 80f83e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f83e7:	0f b7 84 00 94 e0 b3 	movzwl 0x8b3e094(%eax,%eax,1),%eax
 80f83ee:	08 
 80f83ef:	66 83 f8 64          	cmp    $0x64,%ax
 80f83f3:	75 07                	jne    80f83fc <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi+0xdc>
 80f83f5:	b8 01 00 00 00       	mov    $0x1,%eax
 80f83fa:	eb 2f                	jmp    80f842b <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi+0x10b>
 80f83fc:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 80f8403:	e8 7f 97 5b 00       	call   86b1b87 <_Z12get_rand_inti>
 80f8408:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f840b:	0f b7 94 12 94 e0 b3 	movzwl 0x8b3e094(%edx,%edx,1),%edx
 80f8412:	08 
 80f8413:	0f bf d2             	movswl %dx,%edx
 80f8416:	39 d0                	cmp    %edx,%eax
 80f8418:	0f 9e c0             	setle  %al
 80f841b:	84 c0                	test   %al,%al
 80f841d:	74 07                	je     80f8426 <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi+0x106>
 80f841f:	b8 01 00 00 00       	mov    $0x1,%eax
 80f8424:	eb 05                	jmp    80f842b <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi+0x10b>
 80f8426:	b8 00 00 00 00       	mov    $0x0,%eax
 80f842b:	c9                   	leave
 80f842c:	c3                   	ret
 80f842d:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::CheckHackRateByPartyCount @ 0x80f8320

/* WongWork::CHackAnalyzer::CheckHackRateByPartyCount(WongWork::ENUM_HACKTYPE, int) */

undefined4 __thiscall
WongWork::CHackAnalyzer::CheckHackRateByPartyCount(undefined4 this,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_28 [4];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  int local_10;
  
  local_20 = param_2;
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
            (local_24,local_18,local_1c,&local_20);
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_28,local_24);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator==(local_28,local_14);
  if (bVar1) {
    uVar2 = 1;
  }
  else {
    local_10 = param_3 + -1;
    if (((local_10 < 0) || (3 < local_10)) ||
       (*(short *)((int)&_S_HACK_CHECK_RATE_BY_PARTYCOUNT + local_10 * 2) == 100)) {
      uVar2 = 1;
    }
    else {
      iVar3 = get_rand_int(100);
      if (*(short *)((int)&_S_HACK_CHECK_RATE_BY_PARTYCOUNT + local_10 * 2) < iVar3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

```

---

## ReqDBSaveHackInfo

```asm
// === 080f8f62 WongWork::CHackAnalyzer::ReqDBSaveHackInfo  [0x080f8f62-0x80f9069] ===
 80f8f62:	55                   	push   %ebp
 80f8f63:	89 e5                	mov    %esp,%ebp
 80f8f65:	56                   	push   %esi
 80f8f66:	53                   	push   %ebx
 80f8f67:	83 ec 30             	sub    $0x30,%esp
 80f8f6a:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8f6d:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 80f8f71:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80f8f76:	c7 44 24 08 49 02 00 	movl   $0x249,0x8(%esp)
 80f8f7d:	00 
 80f8f7e:	c7 44 24 04 22 d6 b3 	movl   $0x8b3d622,0x4(%esp)
 80f8f85:	08 
 80f8f86:	89 04 24             	mov    %eax,(%esp)
 80f8f89:	e8 f8 6a 19 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80f8f8e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80f8f95:	00 
 80f8f96:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8f9a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8f9d:	89 04 24             	mov    %eax,(%esp)
 80f8fa0:	e8 81 fc fc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80f8fa5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8fa8:	89 04 24             	mov    %eax,(%esp)
 80f8fab:	e8 96 fc fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80f8fb0:	c7 44 24 04 9a 00 00 	movl   $0x9a,0x4(%esp)
 80f8fb7:	00 
 80f8fb8:	89 04 24             	mov    %eax,(%esp)
 80f8fbb:	e8 96 fc fc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80f8fc0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8fc3:	89 04 24             	mov    %eax,(%esp)
 80f8fc6:	e8 7b fc fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80f8fcb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80f8fd2:	ff 
 80f8fd3:	89 04 24             	mov    %eax,(%esp)
 80f8fd6:	e8 7b fc fc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80f8fdb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f8fde:	89 04 24             	mov    %eax,(%esp)
 80f8fe1:	e8 68 fc fc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80f8fe6:	89 04 24             	mov    %eax,(%esp)
 80f8fe9:	e8 56 0e 00 00       	call   80f9e44 <_ZN12CStreamGuard11GetInBufferI24SIG_SAVE_CLIENT_HACK_LOGEEPT_v>
 80f8fee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f8ff1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f8ff4:	8b 55 08             	mov    0x8(%ebp),%edx
 80f8ff7:	89 10                	mov    %edx,(%eax)
 80f8ff9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f8ffc:	8b 55 0c             	mov    0xc(%ebp),%edx
 80f8fff:	89 50 04             	mov    %edx,0x4(%eax)
 80f9002:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f9005:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 80f9009:	66 89 50 08          	mov    %dx,0x8(%eax)
 80f900d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f9010:	8b 55 14             	mov    0x14(%ebp),%edx
 80f9013:	89 50 0a             	mov    %edx,0xa(%eax)
 80f9016:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f9019:	8b 55 18             	mov    0x18(%ebp),%edx
 80f901c:	89 50 0e             	mov    %edx,0xe(%eax)
 80f901f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80f9024:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80f9027:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f902b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80f9032:	00 
 80f9033:	89 04 24             	mov    %eax,(%esp)
 80f9036:	e8 a3 7f 47 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80f903b:	eb 1b                	jmp    80f9058 <_ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii+0xf6>
 80f903d:	89 d3                	mov    %edx,%ebx
 80f903f:	89 c6                	mov    %eax,%esi
 80f9041:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f9044:	89 04 24             	mov    %eax,(%esp)
 80f9047:	e8 86 38 52 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80f904c:	89 f0                	mov    %esi,%eax
 80f904e:	89 da                	mov    %ebx,%edx
 80f9050:	89 04 24             	mov    %eax,(%esp)
 80f9053:	e8 f8 a6 9e 00       	call   8ae3750 <_Unwind_Resume>
 80f9058:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f905b:	89 04 24             	mov    %eax,(%esp)
 80f905e:	e8 6f 38 52 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80f9063:	83 c4 30             	add    $0x30,%esp
 80f9066:	5b                   	pop    %ebx
 80f9067:	5e                   	pop    %esi
 80f9068:	5d                   	pop    %ebp
 80f9069:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::ReqDBSaveHackInfo @ 0x80f8f62

/* WongWork::CHackAnalyzer::ReqDBSaveHackInfo(unsigned int, unsigned int, unsigned short, int, int)
    */

void WongWork::CHackAnalyzer::ReqDBSaveHackInfo
               (uint param_1,uint param_2,ushort param_3,int param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_CLIENT_HACK_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"HackAnalyzer.cpp",0x249);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080f8fbb to 080f903a has its CatchHandler @ 080f903d */
  CStreamGuard::operator<<(pCVar2,0x9a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CLIENT_HACK_LOG>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(ushort *)(local_10 + 8) = param_3;
  *(int *)(local_10 + 10) = param_4;
  *(int *)(local_10 + 0xe) = param_5;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## ReqDBSaveHackUserPunish

```asm
// === 080f906a WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish  [0x080f906a-0x80f908b] ===
 80f906a:	55                   	push   %ebp
 80f906b:	89 e5                	mov    %esp,%ebp
 80f906d:	83 ec 18             	sub    $0x18,%esp
 80f9070:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f9077:	00 
 80f9078:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f907b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f907f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f9082:	89 04 24             	mov    %eax,(%esp)
 80f9085:	e8 0a c4 32 00       	call   8425494 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc>
 80f908a:	c9                   	leave
 80f908b:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish @ 0x80f906a

/* WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish(unsigned int, unsigned int) */

void WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish(uint param_1,uint param_2)

{
  DB_ReqSaveHackUserPunish::makeRequest(param_1,param_2,(char *)0x0);
  return;
}

```

---

## ValidateFixMobDiePos

```asm
// === 080f908c WongWork::CHackAnalyzer::ValidateFixMobDiePos  [0x080f908c-0x80f9217] ===
 80f908c:	55                   	push   %ebp
 80f908d:	89 e5                	mov    %esp,%ebp
 80f908f:	83 ec 48             	sub    $0x48,%esp
 80f9092:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 80f9095:	8b 55 10             	mov    0x10(%ebp),%edx
 80f9098:	8b 45 14             	mov    0x14(%ebp),%eax
 80f909b:	66 89 4d e4          	mov    %cx,-0x1c(%ebp)
 80f909f:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 80f90a3:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 80f90a7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f90ae:	e9 3f 01 00 00       	jmp    80f91f2 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x166>
 80f90b3:	0f b7 4d e4          	movzwl -0x1c(%ebp),%ecx
 80f90b7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f90ba:	89 d0                	mov    %edx,%eax
 80f90bc:	01 c0                	add    %eax,%eax
 80f90be:	01 d0                	add    %edx,%eax
 80f90c0:	c1 e0 02             	shl    $0x2,%eax
 80f90c3:	8b 80 c0 f9 36 09    	mov    0x936f9c0(%eax),%eax
 80f90c9:	39 c1                	cmp    %eax,%ecx
 80f90cb:	0f 85 1d 01 00 00    	jne    80f91ee <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x162>
 80f90d1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f90d4:	89 d0                	mov    %edx,%eax
 80f90d6:	01 c0                	add    %eax,%eax
 80f90d8:	01 d0                	add    %edx,%eax
 80f90da:	c1 e0 02             	shl    $0x2,%eax
 80f90dd:	0f b7 80 c4 f9 36 09 	movzwl 0x936f9c4(%eax),%eax
 80f90e4:	66 3b 45 e0          	cmp    -0x20(%ebp),%ax
 80f90e8:	77 4b                	ja     80f9135 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0xa9>
 80f90ea:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f90ed:	89 d0                	mov    %edx,%eax
 80f90ef:	01 c0                	add    %eax,%eax
 80f90f1:	01 d0                	add    %edx,%eax
 80f90f3:	c1 e0 02             	shl    $0x2,%eax
 80f90f6:	0f b7 80 c6 f9 36 09 	movzwl 0x936f9c6(%eax),%eax
 80f90fd:	66 3b 45 e0          	cmp    -0x20(%ebp),%ax
 80f9101:	72 32                	jb     80f9135 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0xa9>
 80f9103:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f9106:	89 d0                	mov    %edx,%eax
 80f9108:	01 c0                	add    %eax,%eax
 80f910a:	01 d0                	add    %edx,%eax
 80f910c:	c1 e0 02             	shl    $0x2,%eax
 80f910f:	0f b7 80 c8 f9 36 09 	movzwl 0x936f9c8(%eax),%eax
 80f9116:	66 3b 45 dc          	cmp    -0x24(%ebp),%ax
 80f911a:	77 19                	ja     80f9135 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0xa9>
 80f911c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f911f:	89 d0                	mov    %edx,%eax
 80f9121:	01 c0                	add    %eax,%eax
 80f9123:	01 d0                	add    %edx,%eax
 80f9125:	c1 e0 02             	shl    $0x2,%eax
 80f9128:	0f b7 80 ca f9 36 09 	movzwl 0x936f9ca(%eax),%eax
 80f912f:	66 3b 45 dc          	cmp    -0x24(%ebp),%ax
 80f9133:	73 3f                	jae    80f9174 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0xe8>
 80f9135:	8b 45 08             	mov    0x8(%ebp),%eax
 80f9138:	89 04 24             	mov    %eax,(%esp)
 80f913b:	e8 1a 08 00 00       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 80f9140:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 80f9147:	00 
 80f9148:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 80f914f:	00 
 80f9150:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80f9157:	00 
 80f9158:	c7 44 24 08 d2 00 00 	movl   $0xd2,0x8(%esp)
 80f915f:	00 
 80f9160:	8b 55 08             	mov    0x8(%ebp),%edx
 80f9163:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f9167:	89 04 24             	mov    %eax,(%esp)
 80f916a:	e8 0f fb ff ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 80f916f:	e9 a2 00 00 00       	jmp    80f9216 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x18a>
 80f9174:	66 81 7d e4 ed d6    	cmpw   $0xd6ed,-0x1c(%ebp)
 80f917a:	0f 85 8f 00 00 00    	jne    80f920f <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x183>
 80f9180:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f9183:	89 d0                	mov    %edx,%eax
 80f9185:	01 c0                	add    %eax,%eax
 80f9187:	01 d0                	add    %edx,%eax
 80f9189:	c1 e0 02             	shl    $0x2,%eax
 80f918c:	0f b7 80 c4 f9 36 09 	movzwl 0x936f9c4(%eax),%eax
 80f9193:	66 3b 45 e0          	cmp    -0x20(%ebp),%ax
 80f9197:	74 79                	je     80f9212 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x186>
 80f9199:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f919c:	89 d0                	mov    %edx,%eax
 80f919e:	01 c0                	add    %eax,%eax
 80f91a0:	01 d0                	add    %edx,%eax
 80f91a2:	c1 e0 02             	shl    $0x2,%eax
 80f91a5:	0f b7 80 c6 f9 36 09 	movzwl 0x936f9c6(%eax),%eax
 80f91ac:	66 3b 45 e0          	cmp    -0x20(%ebp),%ax
 80f91b0:	74 63                	je     80f9215 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x189>
 80f91b2:	8b 45 08             	mov    0x8(%ebp),%eax
 80f91b5:	89 04 24             	mov    %eax,(%esp)
 80f91b8:	e8 9d 07 00 00       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 80f91bd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 80f91c4:	00 
 80f91c5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 80f91cc:	00 
 80f91cd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80f91d4:	00 
 80f91d5:	c7 44 24 08 d2 00 00 	movl   $0xd2,0x8(%esp)
 80f91dc:	00 
 80f91dd:	8b 55 08             	mov    0x8(%ebp),%edx
 80f91e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f91e4:	89 04 24             	mov    %eax,(%esp)
 80f91e7:	e8 92 fa ff ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 80f91ec:	eb 28                	jmp    80f9216 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x18a>
 80f91ee:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80f91f2:	0f b7 05 44 fa 36 09 	movzwl 0x936fa44,%eax
 80f91f9:	0f b7 c0             	movzwl %ax,%eax
 80f91fc:	83 e8 01             	sub    $0x1,%eax
 80f91ff:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80f9202:	0f 9f c0             	setg   %al
 80f9205:	84 c0                	test   %al,%al
 80f9207:	0f 85 a6 fe ff ff    	jne    80f90b3 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x27>
 80f920d:	eb 07                	jmp    80f9216 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x18a>
 80f920f:	90                   	nop
 80f9210:	eb 04                	jmp    80f9216 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x18a>
 80f9212:	90                   	nop
 80f9213:	eb 01                	jmp    80f9216 <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt+0x18a>
 80f9215:	90                   	nop
 80f9216:	c9                   	leave
 80f9217:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::ValidateFixMobDiePos @ 0x80f908c

/* WongWork::CHackAnalyzer::ValidateFixMobDiePos(CUser*, unsigned short, unsigned short, unsigned
   short) */

void WongWork::CHackAnalyzer::ValidateFixMobDiePos
               (CUser *param_1,ushort param_2,ushort param_3,ushort param_4)

{
  CHackAnalyzer *pCVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if ((int)(ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::
              FixMobInfoSize - 1) <= local_10) {
      return;
    }
    if ((uint)param_2 ==
        *(uint *)(ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::
                  FixMobInfo + local_10 * 0xc)) break;
    local_10 = local_10 + 1;
  }
  if ((((param_3 < *(ushort *)
                    (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::
                     FixMobInfo + local_10 * 0xc + 4)) ||
       (*(ushort *)
         (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::FixMobInfo +
         local_10 * 0xc + 6) < param_3)) ||
      (param_4 < *(ushort *)
                  (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::
                   FixMobInfo + local_10 * 0xc + 8))) ||
     (*(ushort *)
       (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::FixMobInfo +
       local_10 * 0xc + 10) < param_4)) {
    pCVar1 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    addServerHackCnt(pCVar1,param_1,0xd2,1,0,0);
    return;
  }
  if (param_2 != 0xd6ed) {
    return;
  }
  if (*(ushort *)
       (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::FixMobInfo +
       local_10 * 0xc + 4) == param_3) {
    return;
  }
  if (*(ushort *)
       (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::FixMobInfo +
       local_10 * 0xc + 6) == param_3) {
    return;
  }
  pCVar1 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
  addServerHackCnt(pCVar1,param_1,0xd2,1,0,0);
  return;
}

```

---

## _addHackInfo

```asm
// === 080f7fd2 WongWork::CHackAnalyzer::_addHackInfo  [0x080f7fd2-0x80f8031] ===
 80f7fd2:	55                   	push   %ebp
 80f7fd3:	89 e5                	mov    %esp,%ebp
 80f7fd5:	83 ec 28             	sub    $0x28,%esp
 80f7fd8:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7fdb:	8b 00                	mov    (%eax),%eax
 80f7fdd:	89 04 24             	mov    %eax,(%esp)
 80f7fe0:	e8 89 23 fe ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80f7fe5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80f7fe8:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7feb:	8b 00                	mov    (%eax),%eax
 80f7fed:	89 04 24             	mov    %eax,(%esp)
 80f7ff0:	e8 59 3c fd ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80f7ff5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80f7ff8:	8b 45 10             	mov    0x10(%ebp),%eax
 80f7ffb:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 80f7fff:	8b 45 14             	mov    0x14(%ebp),%eax
 80f8002:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f8005:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8008:	8d 50 08             	lea    0x8(%eax),%edx
 80f800b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f800e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8012:	89 14 24             	mov    %edx,(%esp)
 80f8015:	e8 ae 1b 00 00       	call   80f9bc8 <_ZNSt6vectorIN8WongWork12stHackInfo_tESaIS1_EE9push_backERKS1_>
 80f801a:	8b 45 08             	mov    0x8(%ebp),%eax
 80f801d:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80f8021:	89 c2                	mov    %eax,%edx
 80f8023:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8026:	09 d0                	or     %edx,%eax
 80f8028:	89 c2                	mov    %eax,%edx
 80f802a:	8b 45 08             	mov    0x8(%ebp),%eax
 80f802d:	88 50 04             	mov    %dl,0x4(%eax)
 80f8030:	c9                   	leave
 80f8031:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::_addHackInfo @ 0x80f7fd2

/* WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int) */

void __thiscall
WongWork::CHackAnalyzer::_addHackInfo
          (CHackAnalyzer *this,byte param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined4 local_10;
  
  local_1c = CUser::get_acc_id(*(CUser **)this);
  local_18 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
  local_14 = param_3;
  local_10 = param_4;
  std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::push_back
            ((vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>> *)(this + 8),
             (stHackInfo_t *)&local_1c);
  this[4] = (CHackAnalyzer)(param_2 | (byte)this[4]);
  return;
}

```

---

## _analyzeDifficultyHack

```asm
// === 080f7d82 WongWork::CHackAnalyzer::_analyzeDifficultyHack  [0x080f7d82-0x80f7dcd] ===
 80f7d82:	55                   	push   %ebp
 80f7d83:	89 e5                	mov    %esp,%ebp
 80f7d85:	83 ec 28             	sub    $0x28,%esp
 80f7d88:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7d8b:	88 45 f4             	mov    %al,-0xc(%ebp)
 80f7d8e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80f7d95:	00 
 80f7d96:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7d99:	89 04 24             	mov    %eax,(%esp)
 80f7d9c:	e8 d5 1a 00 00       	call   80f9876 <_ZN8WongWork13CHackAnalyzer18checkCollectedHackE23ENUM_REPORT_4_HACK_FLAG>
 80f7da1:	84 c0                	test   %al,%al
 80f7da3:	75 25                	jne    80f7dca <_ZN8WongWork13CHackAnalyzer22_analyzeDifficultyHackEc+0x48>
 80f7da5:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 80f7da9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f7dad:	c7 44 24 08 bf 03 00 	movl   $0x3bf,0x8(%esp)
 80f7db4:	00 
 80f7db5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80f7dbc:	00 
 80f7dbd:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7dc0:	89 04 24             	mov    %eax,(%esp)
 80f7dc3:	e8 0a 02 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7dc8:	eb 01                	jmp    80f7dcb <_ZN8WongWork13CHackAnalyzer22_analyzeDifficultyHackEc+0x49>
 80f7dca:	90                   	nop
 80f7dcb:	c9                   	leave
 80f7dcc:	c3                   	ret
 80f7dcd:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::_analyzeDifficultyHack @ 0x80f7d82

/* WongWork::CHackAnalyzer::_analyzeDifficultyHack(char) */

void __thiscall WongWork::CHackAnalyzer::_analyzeDifficultyHack(CHackAnalyzer *this,char param_1)

{
  char cVar1;
  
  cVar1 = checkCollectedHack(this,2);
  if (cVar1 == '\0') {
    _addHackInfo(this,2,0x3bf,(int)param_1);
  }
  return;
}

```

---

## _analyzeEquipmentUpgradeHack

```asm
// === 080f7e18 WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack  [0x080f7e18-0x80f7eb5] ===
 80f7e18:	55                   	push   %ebp
 80f7e19:	89 e5                	mov    %esp,%ebp
 80f7e1b:	83 ec 28             	sub    $0x28,%esp
 80f7e1e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80f7e25:	00 
 80f7e26:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7e29:	89 04 24             	mov    %eax,(%esp)
 80f7e2c:	e8 45 1a 00 00       	call   80f9876 <_ZN8WongWork13CHackAnalyzer18checkCollectedHackE23ENUM_REPORT_4_HACK_FLAG>
 80f7e31:	84 c0                	test   %al,%al
 80f7e33:	75 7e                	jne    80f7eb3 <_ZN8WongWork13CHackAnalyzer28_analyzeEquipmentUpgradeHackEPKt+0x9b>
 80f7e35:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7e38:	8b 00                	mov    (%eax),%eax
 80f7e3a:	89 04 24             	mov    %eax,(%esp)
 80f7e3d:	e8 3c 24 fe ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 80f7e42:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80f7e45:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f7e4c:	eb 58                	jmp    80f7ea6 <_ZN8WongWork13CHackAnalyzer28_analyzeEquipmentUpgradeHackEPKt+0x8e>
 80f7e4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f7e51:	6b c0 3d             	imul   $0x3d,%eax,%eax
 80f7e54:	83 c0 10             	add    $0x10,%eax
 80f7e57:	03 45 f0             	add    -0x10(%ebp),%eax
 80f7e5a:	83 c0 0c             	add    $0xc,%eax
 80f7e5d:	89 04 24             	mov    %eax,(%esp)
 80f7e60:	e8 07 d2 ff ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 80f7e65:	0f b6 d0             	movzbl %al,%edx
 80f7e68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f7e6b:	01 c0                	add    %eax,%eax
 80f7e6d:	03 45 0c             	add    0xc(%ebp),%eax
 80f7e70:	0f b7 00             	movzwl (%eax),%eax
 80f7e73:	66 39 c2             	cmp    %ax,%dx
 80f7e76:	0f 95 c0             	setne  %al
 80f7e79:	84 c0                	test   %al,%al
 80f7e7b:	74 25                	je     80f7ea2 <_ZN8WongWork13CHackAnalyzer28_analyzeEquipmentUpgradeHackEPKt+0x8a>
 80f7e7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f7e84:	00 
 80f7e85:	c7 44 24 08 c3 03 00 	movl   $0x3c3,0x8(%esp)
 80f7e8c:	00 
 80f7e8d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80f7e94:	00 
 80f7e95:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7e98:	89 04 24             	mov    %eax,(%esp)
 80f7e9b:	e8 32 01 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7ea0:	eb 12                	jmp    80f7eb4 <_ZN8WongWork13CHackAnalyzer28_analyzeEquipmentUpgradeHackEPKt+0x9c>
 80f7ea2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80f7ea6:	83 7d f4 15          	cmpl   $0x15,-0xc(%ebp)
 80f7eaa:	0f 9e c0             	setle  %al
 80f7ead:	84 c0                	test   %al,%al
 80f7eaf:	75 9d                	jne    80f7e4e <_ZN8WongWork13CHackAnalyzer28_analyzeEquipmentUpgradeHackEPKt+0x36>
 80f7eb1:	eb 01                	jmp    80f7eb4 <_ZN8WongWork13CHackAnalyzer28_analyzeEquipmentUpgradeHackEPKt+0x9c>
 80f7eb3:	90                   	nop
 80f7eb4:	c9                   	leave
 80f7eb5:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack @ 0x80f7e18

/* WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack(unsigned short const*) */

void __thiscall
WongWork::CHackAnalyzer::_analyzeEquipmentUpgradeHack(CHackAnalyzer *this,ushort *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int local_10;
  
  cVar1 = checkCollectedHack(this,4);
  if (cVar1 == '\0') {
    iVar3 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
    for (local_10 = 0; local_10 < 0x16; local_10 = local_10 + 1) {
      uVar2 = Inven_Item::GetUpgrade((Inven_Item *)(local_10 * 0x3d + iVar3 + 0x1c));
      if ((uVar2 & 0xff) != param_1[local_10]) {
        _addHackInfo(this,4,0x3c3,0);
        return;
      }
    }
  }
  return;
}

```

---

## _analyzeMemoryHack

```asm
// === 080f7dce WongWork::CHackAnalyzer::_analyzeMemoryHack  [0x080f7dce-0x80f7e17] ===
 80f7dce:	55                   	push   %ebp
 80f7dcf:	89 e5                	mov    %esp,%ebp
 80f7dd1:	83 ec 18             	sub    $0x18,%esp
 80f7dd4:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 80f7ddb:	00 
 80f7ddc:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7ddf:	89 04 24             	mov    %eax,(%esp)
 80f7de2:	e8 8f 1a 00 00       	call   80f9876 <_ZN8WongWork13CHackAnalyzer18checkCollectedHackE23ENUM_REPORT_4_HACK_FLAG>
 80f7de7:	84 c0                	test   %al,%al
 80f7de9:	75 2a                	jne    80f7e15 <_ZN8WongWork13CHackAnalyzer18_analyzeMemoryHackEj+0x47>
 80f7deb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80f7def:	74 25                	je     80f7e16 <_ZN8WongWork13CHackAnalyzer18_analyzeMemoryHackEj+0x48>
 80f7df1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7df4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f7df8:	c7 44 24 08 bc 03 00 	movl   $0x3bc,0x8(%esp)
 80f7dff:	00 
 80f7e00:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 80f7e07:	00 
 80f7e08:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7e0b:	89 04 24             	mov    %eax,(%esp)
 80f7e0e:	e8 bf 01 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7e13:	eb 01                	jmp    80f7e16 <_ZN8WongWork13CHackAnalyzer18_analyzeMemoryHackEj+0x48>
 80f7e15:	90                   	nop
 80f7e16:	c9                   	leave
 80f7e17:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::_analyzeMemoryHack @ 0x80f7dce

/* WongWork::CHackAnalyzer::_analyzeMemoryHack(unsigned int) */

void __thiscall WongWork::CHackAnalyzer::_analyzeMemoryHack(CHackAnalyzer *this,uint param_1)

{
  char cVar1;
  
  cVar1 = checkCollectedHack(this,8);
  if ((cVar1 == '\0') && (param_1 != 0)) {
    _addHackInfo(this,8,0x3bc,param_1);
  }
  return;
}

```

---

## _analyzeMonsterDieHack

```asm
// === 080f7eb6 WongWork::CHackAnalyzer::_analyzeMonsterDieHack  [0x080f7eb6-0x80f7fd1] ===
 80f7eb6:	55                   	push   %ebp
 80f7eb7:	89 e5                	mov    %esp,%ebp
 80f7eb9:	83 ec 28             	sub    $0x28,%esp
 80f7ebc:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 80f7ec3:	00 
 80f7ec4:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7ec7:	89 04 24             	mov    %eax,(%esp)
 80f7eca:	e8 a7 19 00 00       	call   80f9876 <_ZN8WongWork13CHackAnalyzer18checkCollectedHackE23ENUM_REPORT_4_HACK_FLAG>
 80f7ecf:	84 c0                	test   %al,%al
 80f7ed1:	0f 85 f7 00 00 00    	jne    80f7fce <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv+0x118>
 80f7ed7:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7eda:	8b 50 24             	mov    0x24(%eax),%edx
 80f7edd:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7ee0:	8b 40 20             	mov    0x20(%eax),%eax
 80f7ee3:	89 d1                	mov    %edx,%ecx
 80f7ee5:	29 c1                	sub    %eax,%ecx
 80f7ee7:	89 c8                	mov    %ecx,%eax
 80f7ee9:	83 f8 0a             	cmp    $0xa,%eax
 80f7eec:	0f 8f dd 00 00 00    	jg     80f7fcf <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv+0x119>
 80f7ef2:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7ef5:	8d 50 14             	lea    0x14(%eax),%edx
 80f7ef8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f7efb:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f7eff:	89 04 24             	mov    %eax,(%esp)
 80f7f02:	e8 41 63 f9 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 80f7f07:	83 ec 04             	sub    $0x4,%esp
 80f7f0a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f7f0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7f11:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f7f14:	89 04 24             	mov    %eax,(%esp)
 80f7f17:	e8 d0 1a 00 00       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 80f7f1c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7f1f:	8d 50 14             	lea    0x14(%eax),%edx
 80f7f22:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80f7f25:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f7f29:	89 04 24             	mov    %eax,(%esp)
 80f7f2c:	e8 3b 63 f9 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 80f7f31:	83 ec 04             	sub    $0x4,%esp
 80f7f34:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80f7f37:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7f3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7f3e:	89 04 24             	mov    %eax,(%esp)
 80f7f41:	e8 a6 1a 00 00       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 80f7f46:	eb 24                	jmp    80f7f6c <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv+0xb6>
 80f7f48:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f7f4b:	89 04 24             	mov    %eax,(%esp)
 80f7f4e:	e8 c9 1a 00 00       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 80f7f53:	8b 00                	mov    (%eax),%eax
 80f7f55:	3d ff ff 00 00       	cmp    $0xffff,%eax
 80f7f5a:	0f 95 c0             	setne  %al
 80f7f5d:	84 c0                	test   %al,%al
 80f7f5f:	75 23                	jne    80f7f84 <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv+0xce>
 80f7f61:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f7f64:	89 04 24             	mov    %eax,(%esp)
 80f7f67:	e8 9a 1a 00 00       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 80f7f6c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7f6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7f73:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f7f76:	89 04 24             	mov    %eax,(%esp)
 80f7f79:	e8 a8 1a 00 00       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 80f7f7e:	84 c0                	test   %al,%al
 80f7f80:	75 c6                	jne    80f7f48 <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv+0x92>
 80f7f82:	eb 01                	jmp    80f7f85 <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv+0xcf>
 80f7f84:	90                   	nop
 80f7f85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7f88:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7f8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f7f8f:	89 04 24             	mov    %eax,(%esp)
 80f7f92:	e8 05 1c 00 00       	call   80f9b9c <_ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 80f7f97:	84 c0                	test   %al,%al
 80f7f99:	74 34                	je     80f7fcf <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv+0x119>
 80f7f9b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7f9e:	8b 50 24             	mov    0x24(%eax),%edx
 80f7fa1:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7fa4:	8b 40 20             	mov    0x20(%eax),%eax
 80f7fa7:	89 d1                	mov    %edx,%ecx
 80f7fa9:	29 c1                	sub    %eax,%ecx
 80f7fab:	89 c8                	mov    %ecx,%eax
 80f7fad:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f7fb1:	c7 44 24 08 c0 03 00 	movl   $0x3c0,0x8(%esp)
 80f7fb8:	00 
 80f7fb9:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 80f7fc0:	00 
 80f7fc1:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7fc4:	89 04 24             	mov    %eax,(%esp)
 80f7fc7:	e8 06 00 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7fcc:	eb 01                	jmp    80f7fcf <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv+0x119>
 80f7fce:	90                   	nop
 80f7fcf:	c9                   	leave
 80f7fd0:	c3                   	ret
 80f7fd1:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::_analyzeMonsterDieHack @ 0x80f7eb6

/* WongWork::CHackAnalyzer::_analyzeMonsterDieHack() */

void __thiscall WongWork::CHackAnalyzer::_analyzeMonsterDieHack(CHackAnalyzer *this)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  cVar1 = checkCollectedHack(this,0x80);
  if ((cVar1 == '\0') && (*(int *)(this + 0x24) - *(int *)(this + 0x20) < 0xb)) {
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_18,local_14);
    std::vector<int,std::allocator<int>>::end();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_1c,local_10);
    while ((bVar2 = __gnu_cxx::operator!=(local_18,local_1c), bVar2 &&
           (piVar3 = (int *)__gnu_cxx::
                            __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                            operator*(local_18), *piVar3 == 0xffff))) {
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_18);
    }
    bVar2 = __gnu_cxx::operator==(local_18,local_1c);
    if (bVar2) {
      _addHackInfo(this,0x80,0x3c0,*(int *)(this + 0x24) - *(int *)(this + 0x20));
    }
  }
  return;
}

```

---

## _analyzeSpeedHack

```asm
// === 080f7cca WongWork::CHackAnalyzer::_analyzeSpeedHack  [0x080f7cca-0x80f7d81] ===
 80f7cca:	55                   	push   %ebp
 80f7ccb:	89 e5                	mov    %esp,%ebp
 80f7ccd:	83 ec 38             	sub    $0x38,%esp
 80f7cd0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f7cd7:	00 
 80f7cd8:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7cdb:	89 04 24             	mov    %eax,(%esp)
 80f7cde:	e8 93 1b 00 00       	call   80f9876 <_ZN8WongWork13CHackAnalyzer18checkCollectedHackE23ENUM_REPORT_4_HACK_FLAG>
 80f7ce3:	84 c0                	test   %al,%al
 80f7ce5:	0f 85 93 00 00 00    	jne    80f7d7e <_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj+0xb4>
 80f7ceb:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7cee:	8b 40 24             	mov    0x24(%eax),%eax
 80f7cf1:	85 c0                	test   %eax,%eax
 80f7cf3:	75 0d                	jne    80f7d02 <_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj+0x38>
 80f7cf5:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7cf8:	89 04 24             	mov    %eax,(%esp)
 80f7cfb:	e8 32 03 00 00       	call   80f8032 <_ZN8WongWork13CHackAnalyzer22_reportIncurrectReportEv>
 80f7d00:	eb 7d                	jmp    80f7d7f <_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj+0xb5>
 80f7d02:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7d05:	8b 50 24             	mov    0x24(%eax),%edx
 80f7d08:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7d0b:	8b 40 20             	mov    0x20(%eax),%eax
 80f7d0e:	89 d1                	mov    %edx,%ecx
 80f7d10:	29 c1                	sub    %eax,%ecx
 80f7d12:	89 c8                	mov    %ecx,%eax
 80f7d14:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80f7d17:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7d1a:	ba 00 00 00 00       	mov    $0x0,%edx
 80f7d1f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80f7d22:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 80f7d25:	df 6d e0             	fildll -0x20(%ebp)
 80f7d28:	db 45 f0             	fildl  -0x10(%ebp)
 80f7d2b:	de f9                	fdivrp %st,%st(1)
 80f7d2d:	d9 05 a0 e2 b3 08    	flds   0x8b3e2a0
 80f7d33:	de c9                	fmulp  %st,%st(1)
 80f7d35:	d9 7d de             	fnstcw -0x22(%ebp)
 80f7d38:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 80f7d3c:	b4 0c                	mov    $0xc,%ah
 80f7d3e:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 80f7d42:	d9 6d dc             	fldcw  -0x24(%ebp)
 80f7d45:	db 5d f4             	fistpl -0xc(%ebp)
 80f7d48:	d9 6d de             	fldcw  -0x22(%ebp)
 80f7d4b:	83 7d f4 45          	cmpl   $0x45,-0xc(%ebp)
 80f7d4f:	7e 09                	jle    80f7d5a <_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj+0x90>
 80f7d51:	81 7d f4 82 00 00 00 	cmpl   $0x82,-0xc(%ebp)
 80f7d58:	7e 25                	jle    80f7d7f <_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj+0xb5>
 80f7d5a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f7d5d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f7d61:	c7 44 24 08 c1 03 00 	movl   $0x3c1,0x8(%esp)
 80f7d68:	00 
 80f7d69:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f7d70:	00 
 80f7d71:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7d74:	89 04 24             	mov    %eax,(%esp)
 80f7d77:	e8 56 02 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7d7c:	eb 01                	jmp    80f7d7f <_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj+0xb5>
 80f7d7e:	90                   	nop
 80f7d7f:	c9                   	leave
 80f7d80:	c3                   	ret
 80f7d81:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::_analyzeSpeedHack @ 0x80f7cca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CHackAnalyzer::_analyzeSpeedHack(unsigned int) */

void __thiscall WongWork::CHackAnalyzer::_analyzeSpeedHack(CHackAnalyzer *this,uint param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = checkCollectedHack(this,1);
  if (cVar2 == '\0') {
    if (*(int *)(this + 0x24) == 0) {
      _reportIncurrectReport(this);
    }
    else {
      iVar1 = (int)ROUND(_DAT_08b3e2a0 *
                         ((float)param_1 / (float)(*(int *)(this + 0x24) - *(int *)(this + 0x20))));
      if ((iVar1 < 0x46) || (0x82 < iVar1)) {
        _addHackInfo(this,1,0x3c1,iVar1);
      }
    }
  }
  return;
}

```

---

## _reportIncurrectReport

```asm
// === 080f8032 WongWork::CHackAnalyzer::_reportIncurrectReport  [0x080f8032-0x80f807f] ===
 80f8032:	55                   	push   %ebp
 80f8033:	89 e5                	mov    %esp,%ebp
 80f8035:	83 ec 18             	sub    $0x18,%esp
 80f8038:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 80f803f:	00 
 80f8040:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8043:	89 04 24             	mov    %eax,(%esp)
 80f8046:	e8 2b 18 00 00       	call   80f9876 <_ZN8WongWork13CHackAnalyzer18checkCollectedHackE23ENUM_REPORT_4_HACK_FLAG>
 80f804b:	84 c0                	test   %al,%al
 80f804d:	75 2e                	jne    80f807d <_ZN8WongWork13CHackAnalyzer22_reportIncurrectReportEv+0x4b>
 80f804f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8052:	8b 00                	mov    (%eax),%eax
 80f8054:	89 04 24             	mov    %eax,(%esp)
 80f8057:	e8 30 23 fe ff       	call   80da38c <_ZN5CUser9get_stateEv>
 80f805c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f8060:	c7 44 24 08 c4 03 00 	movl   $0x3c4,0x8(%esp)
 80f8067:	00 
 80f8068:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 80f806f:	00 
 80f8070:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8073:	89 04 24             	mov    %eax,(%esp)
 80f8076:	e8 57 ff ff ff       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f807b:	eb 01                	jmp    80f807e <_ZN8WongWork13CHackAnalyzer22_reportIncurrectReportEv+0x4c>
 80f807d:	90                   	nop
 80f807e:	c9                   	leave
 80f807f:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::_reportIncurrectReport @ 0x80f8032

/* WongWork::CHackAnalyzer::_reportIncurrectReport() */

void __thiscall WongWork::CHackAnalyzer::_reportIncurrectReport(CHackAnalyzer *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = checkCollectedHack(this,0x40);
  if (cVar1 == '\0') {
    uVar2 = CUser::get_state(*(CUser **)this);
    _addHackInfo(this,0x40,0x3c4,uVar2);
  }
  return;
}

```

---

## addServerHackCnt

```asm
// === 080f8c7e WongWork::CHackAnalyzer::addServerHackCnt  [0x080f8c7e-0x80f8f61] ===
 80f8c7e:	55                   	push   %ebp
 80f8c7f:	89 e5                	mov    %esp,%ebp
 80f8c81:	53                   	push   %ebx
 80f8c82:	83 ec 34             	sub    $0x34,%esp
 80f8c85:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8c88:	85 c0                	test   %eax,%eax
 80f8c8a:	78 0a                	js     80f8c96 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x18>
 80f8c8c:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8c8f:	3d a1 0f 00 00       	cmp    $0xfa1,%eax
 80f8c94:	7e 67                	jle    80f8cfd <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x7f>
 80f8c96:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8c99:	89 04 24             	mov    %eax,(%esp)
 80f8c9c:	e8 c7 0b 00 00       	call   80f9868 <_ZN8WongWork13CHackAnalyzer15getBaseHackTypeEv>
 80f8ca1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f8ca5:	c7 44 24 04 4e 03 00 	movl   $0x34e,0x4(%esp)
 80f8cac:	00 
 80f8cad:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8cb0:	89 04 24             	mov    %eax,(%esp)
 80f8cb3:	e8 b0 0c 00 00       	call   80f9968 <_ZN5CUser6SetETCEsi>
 80f8cb8:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 80f8cbf:	00 
 80f8cc0:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f8cc4:	8b 45 14             	mov    0x14(%ebp),%eax
 80f8cc7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f8ccb:	c7 44 24 08 4e 03 00 	movl   $0x34e,0x8(%esp)
 80f8cd2:	00 
 80f8cd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8cd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8cda:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8cdd:	89 04 24             	mov    %eax,(%esp)
 80f8ce0:	e8 99 ff ff ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 80f8ce5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f8cec:	00 
 80f8ced:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8cf0:	89 04 24             	mov    %eax,(%esp)
 80f8cf3:	e8 5e 0b 00 00       	call   80f9856 <_ZN8WongWork13CHackAnalyzer15setBaseHackTypeENS_13ENUM_HACKTYPEE>
 80f8cf8:	e9 5e 02 00 00       	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8cfd:	8b 45 14             	mov    0x14(%ebp),%eax
 80f8d00:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f8d04:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8d07:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8d0b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8d0e:	89 04 24             	mov    %eax,(%esp)
 80f8d11:	e8 e6 f4 ff ff       	call   80f81fc <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi>
 80f8d16:	84 c0                	test   %al,%al
 80f8d18:	0f 85 1b 02 00 00    	jne    80f8f39 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2bb>
 80f8d1e:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8d21:	89 04 24             	mov    %eax,(%esp)
 80f8d24:	e8 1f fd 17 00       	call   8278a48 <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE>
 80f8d29:	84 c0                	test   %al,%al
 80f8d2b:	74 1e                	je     80f8d4b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0xcd>
 80f8d2d:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8d30:	8d 50 9b             	lea    -0x65(%eax),%edx
 80f8d33:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8d36:	81 c2 44 0f 00 00    	add    $0xf44,%edx
 80f8d3c:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80f8d40:	85 c0                	test   %eax,%eax
 80f8d42:	74 07                	je     80f8d4b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0xcd>
 80f8d44:	b8 01 00 00 00       	mov    $0x1,%eax
 80f8d49:	eb 05                	jmp    80f8d50 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0xd2>
 80f8d4b:	b8 00 00 00 00       	mov    $0x0,%eax
 80f8d50:	84 c0                	test   %al,%al
 80f8d52:	0f 85 e4 01 00 00    	jne    80f8f3c <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2be>
 80f8d58:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8d5b:	89 04 24             	mov    %eax,(%esp)
 80f8d5e:	e8 e9 c3 55 00       	call   865514c <_ZN5CUser8GetPartyEv>
 80f8d63:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80f8d66:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80f8d6a:	0f 84 e4 00 00 00    	je     80f8e54 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x1d6>
 80f8d70:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8d73:	89 04 24             	mov    %eax,(%esp)
 80f8d76:	e8 11 16 fe ff       	call   80da38c <_ZN5CUser9get_stateEv>
 80f8d7b:	83 f8 05             	cmp    $0x5,%eax
 80f8d7e:	0f 94 c0             	sete   %al
 80f8d81:	84 c0                	test   %al,%al
 80f8d83:	0f 84 cb 00 00 00    	je     80f8e54 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x1d6>
 80f8d89:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f8d8c:	89 04 24             	mov    %eax,(%esp)
 80f8d8f:	e8 d6 13 4a 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 80f8d94:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f8d98:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8d9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8d9f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8da2:	89 04 24             	mov    %eax,(%esp)
 80f8da5:	e8 76 f5 ff ff       	call   80f8320 <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi>
 80f8daa:	83 f0 01             	xor    $0x1,%eax
 80f8dad:	84 c0                	test   %al,%al
 80f8daf:	0f 85 8a 01 00 00    	jne    80f8f3f <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2c1>
 80f8db5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f8db8:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 80f8dbe:	85 c0                	test   %eax,%eax
 80f8dc0:	0f 84 8e 00 00 00    	je     80f8e54 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x1d6>
 80f8dc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8dc9:	89 04 24             	mov    %eax,(%esp)
 80f8dcc:	e8 e7 14 fe ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 80f8dd1:	89 c3                	mov    %eax,%ebx
 80f8dd3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f8dd6:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 80f8ddc:	89 04 24             	mov    %eax,(%esp)
 80f8ddf:	e8 2c 0a 00 00       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 80f8de4:	89 da                	mov    %ebx,%edx
 80f8de6:	29 c2                	sub    %eax,%edx
 80f8de8:	89 d0                	mov    %edx,%eax
 80f8dea:	85 c0                	test   %eax,%eax
 80f8dec:	78 26                	js     80f8e14 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x196>
 80f8dee:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8df1:	89 04 24             	mov    %eax,(%esp)
 80f8df4:	e8 bf 14 fe ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 80f8df9:	89 c3                	mov    %eax,%ebx
 80f8dfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f8dfe:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 80f8e04:	89 04 24             	mov    %eax,(%esp)
 80f8e07:	e8 04 0a 00 00       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 80f8e0c:	89 da                	mov    %ebx,%edx
 80f8e0e:	29 c2                	sub    %eax,%edx
 80f8e10:	89 d0                	mov    %edx,%eax
 80f8e12:	eb 05                	jmp    80f8e19 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x19b>
 80f8e14:	b8 00 00 00 00       	mov    $0x0,%eax
 80f8e19:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f8e1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f8e1f:	05 24 0b 00 00       	add    $0xb24,%eax
 80f8e24:	89 04 24             	mov    %eax,(%esp)
 80f8e27:	e8 f0 09 00 00       	call   80f981c <_ZN13CBattle_Field16get_dungeon_diffEv>
 80f8e2c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f8e30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f8e33:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f8e37:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8e3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8e41:	89 04 24             	mov    %eax,(%esp)
 80f8e44:	e8 e5 f5 ff ff       	call   80f842e <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii>
 80f8e49:	83 f0 01             	xor    $0x1,%eax
 80f8e4c:	84 c0                	test   %al,%al
 80f8e4e:	0f 85 ee 00 00 00    	jne    80f8f42 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2c4>
 80f8e54:	81 7d 10 5b 02 00 00 	cmpl   $0x25b,0x10(%ebp)
 80f8e5b:	0f 84 e4 00 00 00    	je     80f8f45 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2c7>
 80f8e61:	81 7d 10 5c 02 00 00 	cmpl   $0x25c,0x10(%ebp)
 80f8e68:	0f 84 da 00 00 00    	je     80f8f48 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2ca>
 80f8e6e:	81 7d 10 5d 02 00 00 	cmpl   $0x25d,0x10(%ebp)
 80f8e75:	0f 84 d0 00 00 00    	je     80f8f4b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2cd>
 80f8e7b:	81 7d 10 5e 02 00 00 	cmpl   $0x25e,0x10(%ebp)
 80f8e82:	0f 84 c6 00 00 00    	je     80f8f4e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2d0>
 80f8e88:	81 7d 10 5f 02 00 00 	cmpl   $0x25f,0x10(%ebp)
 80f8e8f:	0f 84 bc 00 00 00    	je     80f8f51 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2d3>
 80f8e95:	81 7d 10 60 02 00 00 	cmpl   $0x260,0x10(%ebp)
 80f8e9c:	0f 84 b2 00 00 00    	je     80f8f54 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2d6>
 80f8ea2:	81 7d 10 25 03 00 00 	cmpl   $0x325,0x10(%ebp)
 80f8ea9:	0f 84 a8 00 00 00    	je     80f8f57 <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2d9>
 80f8eaf:	83 7d 10 6f          	cmpl   $0x6f,0x10(%ebp)
 80f8eb3:	0f 84 a1 00 00 00    	je     80f8f5a <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dc>
 80f8eb9:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8ebc:	8d 48 9b             	lea    -0x65(%eax),%ecx
 80f8ebf:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8ec2:	8d 50 9b             	lea    -0x65(%eax),%edx
 80f8ec5:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8ec8:	83 c2 08             	add    $0x8,%edx
 80f8ecb:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80f8ecf:	03 45 14             	add    0x14(%ebp),%eax
 80f8ed2:	89 c2                	mov    %eax,%edx
 80f8ed4:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8ed7:	83 c1 08             	add    $0x8,%ecx
 80f8eda:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 80f8ede:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8ee1:	8d 48 9b             	lea    -0x65(%eax),%ecx
 80f8ee4:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8ee7:	8d 50 9b             	lea    -0x65(%eax),%edx
 80f8eea:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8eed:	81 c2 44 0f 00 00    	add    $0xf44,%edx
 80f8ef3:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 80f8ef7:	03 45 14             	add    0x14(%ebp),%eax
 80f8efa:	89 c2                	mov    %eax,%edx
 80f8efc:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8eff:	81 c1 44 0f 00 00    	add    $0xf44,%ecx
 80f8f05:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 80f8f09:	8b 45 14             	mov    0x14(%ebp),%eax
 80f8f0c:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80f8f0f:	89 54 24 14          	mov    %edx,0x14(%esp)
 80f8f13:	8b 55 18             	mov    0x18(%ebp),%edx
 80f8f16:	89 54 24 10          	mov    %edx,0x10(%esp)
 80f8f1a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f8f1e:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8f21:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f8f25:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8f28:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8f2c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f8f2f:	89 04 24             	mov    %eax,(%esp)
 80f8f32:	e8 17 fd ff ff       	call   80f8c4e <_ZN8WongWork13CHackAnalyzer17onUpdateHackCountEP5CUserNS_13ENUM_HACKTYPEEijj>
 80f8f37:	eb 22                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f39:	90                   	nop
 80f8f3a:	eb 1f                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f3c:	90                   	nop
 80f8f3d:	eb 1c                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f3f:	90                   	nop
 80f8f40:	eb 19                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f42:	90                   	nop
 80f8f43:	eb 16                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f45:	90                   	nop
 80f8f46:	eb 13                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f48:	90                   	nop
 80f8f49:	eb 10                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f4b:	90                   	nop
 80f8f4c:	eb 0d                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f4e:	90                   	nop
 80f8f4f:	eb 0a                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f51:	90                   	nop
 80f8f52:	eb 07                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f54:	90                   	nop
 80f8f55:	eb 04                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f57:	90                   	nop
 80f8f58:	eb 01                	jmp    80f8f5b <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj+0x2dd>
 80f8f5a:	90                   	nop
 80f8f5b:	83 c4 34             	add    $0x34,%esp
 80f8f5e:	5b                   	pop    %ebx
 80f8f5f:	5d                   	pop    %ebp
 80f8f60:	c3                   	ret
 80f8f61:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::addServerHackCnt @ 0x80f8c7e

/* WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
WongWork::CHackAnalyzer::addServerHackCnt
          (CHackAnalyzer *this,CUser *param_1,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CParty *this_00;
  int iVar5;
  
  if ((param_3 < 0) || (0xfa1 < param_3)) {
    iVar3 = getBaseHackType(this);
    uVar4 = CUser::SetETC(param_1,0x34e,iVar3);
    addServerHackCnt(this,param_1,0x34e,param_4,uVar4,0);
    setBaseHackType(this,0);
  }
  else {
    cVar2 = CheckExceptionCnt(this,param_3,param_4);
    if (cVar2 == '\0') {
      cVar2 = Secu_AccountHacking::checkAccountHackingHackType(param_3);
      if ((cVar2 == '\0') || (*(int *)(this + (param_3 + 0xedf) * 4 + 8) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        this_00 = (CParty *)CUser::GetParty(param_1);
        if ((this_00 != (CParty *)0x0) && (iVar3 = CUser::get_state(param_1), iVar3 == 5)) {
          uVar4 = CParty::get_member_count(this_00);
          cVar2 = CheckHackRateByPartyCount(this,param_3,uVar4);
          if (cVar2 != '\x01') {
            return;
          }
          if (*(int *)(this_00 + 0xcac) != 0) {
            iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
            iVar5 = CDungeon::get_standard_level(*(CDungeon **)(this_00 + 0xcac));
            if (iVar3 - iVar5 < 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
              iVar5 = CDungeon::get_standard_level(*(CDungeon **)(this_00 + 0xcac));
              iVar3 = iVar3 - iVar5;
            }
            uVar4 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this_00 + 0xb24));
            cVar2 = CheckHackRateByDifficult(this,param_3,iVar3,uVar4);
            if (cVar2 != '\x01') {
              return;
            }
          }
        }
        if (((((param_3 != 0x25b) && (param_3 != 0x25c)) && (param_3 != 0x25d)) &&
            ((param_3 != 0x25e && (param_3 != 0x25f)))) &&
           ((param_3 != 0x260 && ((param_3 != 0x325 && (param_3 != 0x6f)))))) {
          *(int *)(this + (param_3 + -0x5d) * 4 + 8) =
               *(int *)(this + (param_3 + -0x5d) * 4 + 8) + param_4;
          *(int *)(this + (param_3 + 0xedf) * 4 + 8) =
               *(int *)(this + (param_3 + 0xedf) * 4 + 8) + param_4;
          onUpdateHackCount(this,param_1,param_3,param_4,param_5,param_6);
        }
      }
    }
  }
  return;
}

```

---

## analyzeHackReport

```asm
// === 080f7a22 WongWork::CHackAnalyzer::analyzeHackReport  [0x080f7a22-0x80f7cb5] ===
 80f7a22:	55                   	push   %ebp
 80f7a23:	89 e5                	mov    %esp,%ebp
 80f7a25:	83 ec 78             	sub    $0x78,%esp
 80f7a28:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f7a2b:	83 c0 0d             	add    $0xd,%eax
 80f7a2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7a32:	8b 45 10             	mov    0x10(%ebp),%eax
 80f7a35:	89 04 24             	mov    %eax,(%esp)
 80f7a38:	e8 45 21 00 00       	call   80f9b82 <_ZN21stGetHackTypeOperatorItLi2EE11getHackTypeEP9PacketBufRt>
 80f7a3d:	83 f0 01             	xor    $0x1,%eax
 80f7a40:	84 c0                	test   %al,%al
 80f7a42:	74 0a                	je     80f7a4e <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x2c>
 80f7a44:	b8 00 00 00 00       	mov    $0x0,%eax
 80f7a49:	e9 65 02 00 00       	jmp    80f7cb3 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x291>
 80f7a4e:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7a51:	8b 00                	mov    (%eax),%eax
 80f7a53:	85 c0                	test   %eax,%eax
 80f7a55:	75 0a                	jne    80f7a61 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x3f>
 80f7a57:	b8 01 00 00 00       	mov    $0x1,%eax
 80f7a5c:	e9 52 02 00 00       	jmp    80f7cb3 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x291>
 80f7a61:	0f b7 45 c1          	movzwl -0x3f(%ebp),%eax
 80f7a65:	0f b7 c0             	movzwl %ax,%eax
 80f7a68:	83 e0 01             	and    $0x1,%eax
 80f7a6b:	84 c0                	test   %al,%al
 80f7a6d:	74 38                	je     80f7aa7 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x85>
 80f7a6f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f7a72:	83 c0 0f             	add    $0xf,%eax
 80f7a75:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7a79:	8b 45 10             	mov    0x10(%ebp),%eax
 80f7a7c:	89 04 24             	mov    %eax,(%esp)
 80f7a7f:	e8 bc 57 49 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 80f7a84:	83 f0 01             	xor    $0x1,%eax
 80f7a87:	84 c0                	test   %al,%al
 80f7a89:	74 0a                	je     80f7a95 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x73>
 80f7a8b:	b8 00 00 00 00       	mov    $0x0,%eax
 80f7a90:	e9 1e 02 00 00       	jmp    80f7cb3 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x291>
 80f7a95:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 80f7a98:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7a9c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7a9f:	89 04 24             	mov    %eax,(%esp)
 80f7aa2:	e8 23 02 00 00       	call   80f7cca <_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj>
 80f7aa7:	0f b7 45 c1          	movzwl -0x3f(%ebp),%eax
 80f7aab:	0f b7 c0             	movzwl %ax,%eax
 80f7aae:	83 e0 02             	and    $0x2,%eax
 80f7ab1:	85 c0                	test   %eax,%eax
 80f7ab3:	74 38                	je     80f7aed <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0xcb>
 80f7ab5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f7abc:	00 
 80f7abd:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7ac0:	89 04 24             	mov    %eax,(%esp)
 80f7ac3:	e8 ba 02 00 00       	call   80f7d82 <_ZN8WongWork13CHackAnalyzer22_analyzeDifficultyHackEc>
 80f7ac8:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7acb:	8b 00                	mov    (%eax),%eax
 80f7acd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f7ad4:	00 
 80f7ad5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f7adc:	00 
 80f7add:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 80f7ae4:	00 
 80f7ae5:	89 04 24             	mov    %eax,(%esp)
 80f7ae8:	e8 07 0f 55 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 80f7aed:	0f b7 45 c1          	movzwl -0x3f(%ebp),%eax
 80f7af1:	0f b7 c0             	movzwl %ax,%eax
 80f7af4:	83 e0 08             	and    $0x8,%eax
 80f7af7:	85 c0                	test   %eax,%eax
 80f7af9:	74 38                	je     80f7b33 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x111>
 80f7afb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f7afe:	83 c0 40             	add    $0x40,%eax
 80f7b01:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7b05:	8b 45 10             	mov    0x10(%ebp),%eax
 80f7b08:	89 04 24             	mov    %eax,(%esp)
 80f7b0b:	e8 30 57 49 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 80f7b10:	83 f0 01             	xor    $0x1,%eax
 80f7b13:	84 c0                	test   %al,%al
 80f7b15:	74 0a                	je     80f7b21 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0xff>
 80f7b17:	b8 00 00 00 00       	mov    $0x0,%eax
 80f7b1c:	e9 92 01 00 00       	jmp    80f7cb3 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x291>
 80f7b21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f7b24:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7b28:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7b2b:	89 04 24             	mov    %eax,(%esp)
 80f7b2e:	e8 9b 02 00 00       	call   80f7dce <_ZN8WongWork13CHackAnalyzer18_analyzeMemoryHackEj>
 80f7b33:	0f b7 45 c1          	movzwl -0x3f(%ebp),%eax
 80f7b37:	0f b7 c0             	movzwl %ax,%eax
 80f7b3a:	83 e0 04             	and    $0x4,%eax
 80f7b3d:	85 c0                	test   %eax,%eax
 80f7b3f:	74 65                	je     80f7ba6 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x184>
 80f7b41:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f7b48:	00 
 80f7b49:	c7 44 24 08 c5 03 00 	movl   $0x3c5,0x8(%esp)
 80f7b50:	00 
 80f7b51:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80f7b58:	00 
 80f7b59:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7b5c:	89 04 24             	mov    %eax,(%esp)
 80f7b5f:	e8 6e 04 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7b64:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7b67:	8b 00                	mov    (%eax),%eax
 80f7b69:	89 04 24             	mov    %eax,(%esp)
 80f7b6c:	e8 fd 27 fe ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80f7b71:	c7 44 24 04 a8 00 00 	movl   $0xa8,0x4(%esp)
 80f7b78:	00 
 80f7b79:	89 04 24             	mov    %eax,(%esp)
 80f7b7c:	e8 e9 14 00 00       	call   80f906a <_ZN8WongWork13CHackAnalyzer23ReqDBSaveHackUserPunishEjj>
 80f7b81:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7b84:	8b 00                	mov    (%eax),%eax
 80f7b86:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f7b8d:	00 
 80f7b8e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f7b95:	00 
 80f7b96:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 80f7b9d:	00 
 80f7b9e:	89 04 24             	mov    %eax,(%esp)
 80f7ba1:	e8 4e 0e 55 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 80f7ba6:	0f b7 45 c1          	movzwl -0x3f(%ebp),%eax
 80f7baa:	0f b7 c0             	movzwl %ax,%eax
 80f7bad:	25 80 00 00 00       	and    $0x80,%eax
 80f7bb2:	85 c0                	test   %eax,%eax
 80f7bb4:	74 23                	je     80f7bd9 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x1b7>
 80f7bb6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f7bbd:	00 
 80f7bbe:	c7 44 24 08 bd 03 00 	movl   $0x3bd,0x8(%esp)
 80f7bc5:	00 
 80f7bc6:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 80f7bcd:	00 
 80f7bce:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7bd1:	89 04 24             	mov    %eax,(%esp)
 80f7bd4:	e8 f9 03 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7bd9:	0f b7 45 c1          	movzwl -0x3f(%ebp),%eax
 80f7bdd:	0f b7 c0             	movzwl %ax,%eax
 80f7be0:	83 e0 10             	and    $0x10,%eax
 80f7be3:	85 c0                	test   %eax,%eax
 80f7be5:	74 4c                	je     80f7c33 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x211>
 80f7be7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f7bea:	83 c0 13             	add    $0x13,%eax
 80f7bed:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7bf1:	8b 45 10             	mov    0x10(%ebp),%eax
 80f7bf4:	89 04 24             	mov    %eax,(%esp)
 80f7bf7:	e8 26 53 49 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 80f7bfc:	83 f0 01             	xor    $0x1,%eax
 80f7bff:	84 c0                	test   %al,%al
 80f7c01:	74 0a                	je     80f7c0d <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x1eb>
 80f7c03:	b8 00 00 00 00       	mov    $0x0,%eax
 80f7c08:	e9 a6 00 00 00       	jmp    80f7cb3 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x291>
 80f7c0d:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 80f7c11:	0f be c0             	movsbl %al,%eax
 80f7c14:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f7c18:	c7 44 24 08 be 03 00 	movl   $0x3be,0x8(%esp)
 80f7c1f:	00 
 80f7c20:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 80f7c27:	00 
 80f7c28:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7c2b:	89 04 24             	mov    %eax,(%esp)
 80f7c2e:	e8 9f 03 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7c33:	0f b7 45 c1          	movzwl -0x3f(%ebp),%eax
 80f7c37:	0f b7 c0             	movzwl %ax,%eax
 80f7c3a:	83 e0 20             	and    $0x20,%eax
 80f7c3d:	85 c0                	test   %eax,%eax
 80f7c3f:	74 23                	je     80f7c64 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x242>
 80f7c41:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f7c48:	00 
 80f7c49:	c7 44 24 08 c6 03 00 	movl   $0x3c6,0x8(%esp)
 80f7c50:	00 
 80f7c51:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 80f7c58:	00 
 80f7c59:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7c5c:	89 04 24             	mov    %eax,(%esp)
 80f7c5f:	e8 6e 03 00 00       	call   80f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>
 80f7c64:	0f b7 45 c1          	movzwl -0x3f(%ebp),%eax
 80f7c68:	0f b7 c0             	movzwl %ax,%eax
 80f7c6b:	25 00 01 00 00       	and    $0x100,%eax
 80f7c70:	85 c0                	test   %eax,%eax
 80f7c72:	74 3a                	je     80f7cae <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf+0x28c>
 80f7c74:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7c77:	89 04 24             	mov    %eax,(%esp)
 80f7c7a:	e8 db 1c 00 00       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 80f7c7f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 80f7c86:	00 
 80f7c87:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 80f7c8e:	00 
 80f7c8f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80f7c96:	00 
 80f7c97:	c7 44 24 08 2c 03 00 	movl   $0x32c,0x8(%esp)
 80f7c9e:	00 
 80f7c9f:	8b 55 0c             	mov    0xc(%ebp),%edx
 80f7ca2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f7ca6:	89 04 24             	mov    %eax,(%esp)
 80f7ca9:	e8 d0 0f 00 00       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 80f7cae:	b8 01 00 00 00       	mov    $0x1,%eax
 80f7cb3:	c9                   	leave
 80f7cb4:	c3                   	ret
 80f7cb5:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::analyzeHackReport @ 0x80f7a22

/* WongWork::CHackAnalyzer::analyzeHackReport(CUser*, PacketBuf*) */

undefined4 __thiscall
WongWork::CHackAnalyzer::analyzeHackReport(CHackAnalyzer *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  CHackAnalyzer *pCVar4;
  ushort local_43;
  uint local_41;
  char local_3d [45];
  uint local_10 [3];
  
  cVar1 = stGetHackTypeOperator<unsigned_short,2>::getHackType(param_2,&local_43);
  if (cVar1 == '\x01') {
    if (*(int *)this == 0) {
      uVar2 = 1;
    }
    else {
      if ((local_43 & 1) != 0) {
        cVar1 = PacketBuf::get_int(param_2,&local_41);
        if (cVar1 != '\x01') {
          return 0;
        }
        _analyzeSpeedHack(this,local_41);
      }
      if ((local_43 & 2) != 0) {
        _analyzeDifficultyHack(this,'\0');
        CUser::DisConnSig(*(CUser **)this,0x18,0,0);
      }
      if ((local_43 & 8) != 0) {
        cVar1 = PacketBuf::get_int(param_2,local_10);
        if (cVar1 != '\x01') {
          return 0;
        }
        _analyzeMemoryHack(this,local_10[0]);
      }
      if ((local_43 & 4) != 0) {
        _addHackInfo(this,4,0x3c5,0);
        uVar3 = CUser::get_acc_id(*(CUser **)this);
        ReqDBSaveHackUserPunish(uVar3,0xa8);
        CUser::DisConnSig(*(CUser **)this,0x18,0,0);
      }
      if ((local_43 & 0x80) != 0) {
        _addHackInfo(this,0x80,0x3bd,0);
      }
      if ((local_43 & 0x10) != 0) {
        cVar1 = PacketBuf::get_byte(param_2,local_3d);
        if (cVar1 != '\x01') {
          return 0;
        }
        _addHackInfo(this,0x10,0x3be,(int)local_3d[0]);
      }
      if ((local_43 & 0x20) != 0) {
        _addHackInfo(this,0x20,0x3c6,0);
      }
      if ((local_43 & 0x100) != 0) {
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        addServerHackCnt(pCVar4,param_1,0x32c,1,0,0);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## analyzeMonsterDieHack

```asm
// === 080f7cb6 WongWork::CHackAnalyzer::analyzeMonsterDieHack  [0x080f7cb6-0x80f7cc9] ===
 80f7cb6:	55                   	push   %ebp
 80f7cb7:	89 e5                	mov    %esp,%ebp
 80f7cb9:	83 ec 18             	sub    $0x18,%esp
 80f7cbc:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7cbf:	89 04 24             	mov    %eax,(%esp)
 80f7cc2:	e8 ef 01 00 00       	call   80f7eb6 <_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv>
 80f7cc7:	c9                   	leave
 80f7cc8:	c3                   	ret
 80f7cc9:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::analyzeMonsterDieHack @ 0x80f7cb6

/* WongWork::CHackAnalyzer::analyzeMonsterDieHack() */

void __thiscall WongWork::CHackAnalyzer::analyzeMonsterDieHack(CHackAnalyzer *this)

{
  _analyzeMonsterDieHack(this);
  return;
}

```

---

## beginCollectHackInfo

```asm
// === 080f79e8 WongWork::CHackAnalyzer::beginCollectHackInfo  [0x080f79e8-0x80f7a21] ===
 80f79e8:	55                   	push   %ebp
 80f79e9:	89 e5                	mov    %esp,%ebp
 80f79eb:	83 ec 18             	sub    $0x18,%esp
 80f79ee:	8b 45 08             	mov    0x8(%ebp),%eax
 80f79f1:	8b 55 0c             	mov    0xc(%ebp),%edx
 80f79f4:	89 10                	mov    %edx,(%eax)
 80f79f6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 80f79fd:	e8 9c 42 fd ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 80f7a02:	8b 55 08             	mov    0x8(%ebp),%edx
 80f7a05:	89 42 20             	mov    %eax,0x20(%edx)
 80f7a08:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7a0b:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 80f7a12:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7a15:	83 c0 14             	add    $0x14,%eax
 80f7a18:	89 04 24             	mov    %eax,(%esp)
 80f7a1b:	e8 4e f1 f9 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 80f7a20:	c9                   	leave
 80f7a21:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::beginCollectHackInfo @ 0x80f79e8

/* WongWork::CHackAnalyzer::beginCollectHackInfo(CUser*) */

void __thiscall WongWork::CHackAnalyzer::beginCollectHackInfo(CHackAnalyzer *this,CUser *param_1)

{
  undefined4 uVar1;
  
  *(CUser **)this = param_1;
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x14));
  return;
}

```

---

## getUserP

```asm
// === 080f79ce WongWork::CHackAnalyzer::getUserP  [0x080f79ce-0x80f79e7] ===
 80f79ce:	55                   	push   %ebp
 80f79cf:	89 e5                	mov    %esp,%ebp
 80f79d1:	8b 45 08             	mov    0x8(%ebp),%eax
 80f79d4:	8b 00                	mov    (%eax),%eax
 80f79d6:	85 c0                	test   %eax,%eax
 80f79d8:	74 07                	je     80f79e1 <_ZN8WongWork13CHackAnalyzer8getUserPEv+0x13>
 80f79da:	8b 45 08             	mov    0x8(%ebp),%eax
 80f79dd:	8b 00                	mov    (%eax),%eax
 80f79df:	eb 05                	jmp    80f79e6 <_ZN8WongWork13CHackAnalyzer8getUserPEv+0x18>
 80f79e1:	b8 00 00 00 00       	mov    $0x0,%eax
 80f79e6:	5d                   	pop    %ebp
 80f79e7:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::getUserP @ 0x80f79ce

/* WongWork::CHackAnalyzer::getUserP() */

undefined4 __thiscall WongWork::CHackAnalyzer::getUserP(CHackAnalyzer *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)this;
  }
  return uVar1;
}

```

---

## onUpdateHackCount

```asm
// === 080f8c4e WongWork::CHackAnalyzer::onUpdateHackCount  [0x080f8c4e-0x80f8c7d] ===
 80f8c4e:	55                   	push   %ebp
 80f8c4f:	89 e5                	mov    %esp,%ebp
 80f8c51:	83 ec 28             	sub    $0x28,%esp
 80f8c54:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80f8c57:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f8c5b:	8b 45 18             	mov    0x18(%ebp),%eax
 80f8c5e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f8c62:	8b 45 14             	mov    0x14(%ebp),%eax
 80f8c65:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f8c69:	8b 45 10             	mov    0x10(%ebp),%eax
 80f8c6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8c70:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f8c73:	89 04 24             	mov    %eax,(%esp)
 80f8c76:	e8 8f 70 58 00       	call   867fd0a <_ZN5CUser17onUpdateHackCountEN8WongWork13ENUM_HACKTYPEEijj>
 80f8c7b:	c9                   	leave
 80f8c7c:	c3                   	ret
 80f8c7d:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::onUpdateHackCount @ 0x80f8c4e

/* WongWork::CHackAnalyzer::onUpdateHackCount(CUser*, WongWork::ENUM_HACKTYPE, int, unsigned int,
   unsigned int) */

void __thiscall
WongWork::CHackAnalyzer::onUpdateHackCount
          (undefined4 this,CUser *param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  CUser::onUpdateHackCount(param_1,param_3,param_4,param_5,param_6);
  return;
}

```

---

## reportHackInfo

```asm
// === 080f8080 WongWork::CHackAnalyzer::reportHackInfo  [0x080f8080-0x80f81a5] ===
 80f8080:	55                   	push   %ebp
 80f8081:	89 e5                	mov    %esp,%ebp
 80f8083:	57                   	push   %edi
 80f8084:	56                   	push   %esi
 80f8085:	53                   	push   %ebx
 80f8086:	83 ec 4c             	sub    $0x4c,%esp
 80f8089:	8b 45 08             	mov    0x8(%ebp),%eax
 80f808c:	83 c0 08             	add    $0x8,%eax
 80f808f:	89 04 24             	mov    %eax,(%esp)
 80f8092:	e8 a5 1b 00 00       	call   80f9c3c <_ZNKSt6vectorIN8WongWork12stHackInfo_tESaIS1_EE5emptyEv>
 80f8097:	84 c0                	test   %al,%al
 80f8099:	0f 85 fb 00 00 00    	jne    80f819a <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv+0x11a>
 80f809f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f80a2:	8d 50 08             	lea    0x8(%eax),%edx
 80f80a5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f80a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f80ac:	89 04 24             	mov    %eax,(%esp)
 80f80af:	e8 cc 1b 00 00       	call   80f9c80 <_ZNSt6vectorIN8WongWork12stHackInfo_tESaIS1_EE5beginEv>
 80f80b4:	83 ec 04             	sub    $0x4,%esp
 80f80b7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f80ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f80be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f80c1:	89 04 24             	mov    %eax,(%esp)
 80f80c4:	e8 db 1b 00 00       	call   80f9ca4 <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 80f80c9:	8b 45 08             	mov    0x8(%ebp),%eax
 80f80cc:	8d 50 08             	lea    0x8(%eax),%edx
 80f80cf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f80d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f80d6:	89 04 24             	mov    %eax,(%esp)
 80f80d9:	e8 e0 1b 00 00       	call   80f9cbe <_ZNSt6vectorIN8WongWork12stHackInfo_tESaIS1_EE3endEv>
 80f80de:	83 ec 04             	sub    $0x4,%esp
 80f80e1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f80e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f80e8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f80eb:	89 04 24             	mov    %eax,(%esp)
 80f80ee:	e8 b1 1b 00 00       	call   80f9ca4 <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 80f80f3:	e9 86 00 00 00       	jmp    80f817e <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv+0xfe>
 80f80f8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f80fb:	89 04 24             	mov    %eax,(%esp)
 80f80fe:	e8 23 1c 00 00       	call   80f9d26 <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEdeEv>
 80f8103:	8b 10                	mov    (%eax),%edx
 80f8105:	89 55 c8             	mov    %edx,-0x38(%ebp)
 80f8108:	8b 50 04             	mov    0x4(%eax),%edx
 80f810b:	89 55 cc             	mov    %edx,-0x34(%ebp)
 80f810e:	8b 50 08             	mov    0x8(%eax),%edx
 80f8111:	89 55 d0             	mov    %edx,-0x30(%ebp)
 80f8114:	8b 40 0c             	mov    0xc(%eax),%eax
 80f8117:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80f811a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f811d:	89 04 24             	mov    %eax,(%esp)
 80f8120:	e8 0b 1c 00 00       	call   80f9d30 <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEptEv>
 80f8125:	8b 40 0c             	mov    0xc(%eax),%eax
 80f8128:	89 c7                	mov    %eax,%edi
 80f812a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f812d:	89 04 24             	mov    %eax,(%esp)
 80f8130:	e8 fb 1b 00 00       	call   80f9d30 <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEptEv>
 80f8135:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 80f8139:	0f b7 f0             	movzwl %ax,%esi
 80f813c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f813f:	89 04 24             	mov    %eax,(%esp)
 80f8142:	e8 e9 1b 00 00       	call   80f9d30 <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEptEv>
 80f8147:	8b 58 04             	mov    0x4(%eax),%ebx
 80f814a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f814d:	89 04 24             	mov    %eax,(%esp)
 80f8150:	e8 db 1b 00 00       	call   80f9d30 <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEptEv>
 80f8155:	8b 00                	mov    (%eax),%eax
 80f8157:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 80f815e:	00 
 80f815f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 80f8163:	89 74 24 08          	mov    %esi,0x8(%esp)
 80f8167:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f816b:	89 04 24             	mov    %eax,(%esp)
 80f816e:	e8 ef 0d 00 00       	call   80f8f62 <_ZN8WongWork13CHackAnalyzer17ReqDBSaveHackInfoEjjtii>
 80f8173:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f8176:	89 04 24             	mov    %eax,(%esp)
 80f8179:	e8 92 1b 00 00       	call   80f9d10 <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEppEv>
 80f817e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f8181:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f8185:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f8188:	89 04 24             	mov    %eax,(%esp)
 80f818b:	e8 54 1b 00 00       	call   80f9ce4 <_ZN9__gnu_cxxneIPKN8WongWork12stHackInfo_tESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 80f8190:	84 c0                	test   %al,%al
 80f8192:	0f 85 60 ff ff ff    	jne    80f80f8 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv+0x78>
 80f8198:	eb 01                	jmp    80f819b <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv+0x11b>
 80f819a:	90                   	nop
 80f819b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80f819e:	83 c4 00             	add    $0x0,%esp
 80f81a1:	5b                   	pop    %ebx
 80f81a2:	5e                   	pop    %esi
 80f81a3:	5f                   	pop    %edi
 80f81a4:	5d                   	pop    %ebp
 80f81a5:	c3                   	ret

```

```c
// WongWork::CHackAnalyzer::reportHackInfo @ 0x80f8080

/* WongWork::CHackAnalyzer::reportHackInfo() */

void WongWork::CHackAnalyzer::reportHackInfo(void)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
  local_2c [4];
  __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator local_20 [16];
  
  cVar3 = std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::empty();
  if (cVar3 == '\0') {
    std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::begin();
    __gnu_cxx::
    __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
    ::__normal_iterator<WongWork::stHackInfo_t*>(local_28,local_24);
    std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::end();
    __gnu_cxx::
    __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
    ::__normal_iterator<WongWork::stHackInfo_t*>(local_2c,local_20);
    while (bVar4 = __gnu_cxx::operator!=(local_28,local_2c), bVar4) {
      __gnu_cxx::
      __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
      ::operator*(local_28);
      iVar5 = __gnu_cxx::
              __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
              ::operator->(local_28);
      iVar5 = *(int *)(iVar5 + 0xc);
      iVar6 = __gnu_cxx::
              __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
              ::operator->(local_28);
      uVar1 = *(ushort *)(iVar6 + 8);
      iVar6 = __gnu_cxx::
              __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
              ::operator->(local_28);
      uVar2 = *(uint *)(iVar6 + 4);
      puVar7 = (uint *)__gnu_cxx::
                       __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
                       ::operator->(local_28);
      ReqDBSaveHackInfo(*puVar7,uVar2,uVar1,iVar5,1);
      __gnu_cxx::
      __normal_iterator<WongWork::stHackInfo_t_const*,std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>>
      ::operator++(local_28);
    }
  }
  return;
}

```

---

## resetHackInfo

```asm
// === 080f81a6 WongWork::CHackAnalyzer::resetHackInfo  [0x080f81a6-0x80f81fb] ===
 80f81a6:	55                   	push   %ebp
 80f81a7:	89 e5                	mov    %esp,%ebp
 80f81a9:	83 ec 18             	sub    $0x18,%esp
 80f81ac:	8b 45 08             	mov    0x8(%ebp),%eax
 80f81af:	83 c0 08             	add    $0x8,%eax
 80f81b2:	89 04 24             	mov    %eax,(%esp)
 80f81b5:	e8 80 1b 00 00       	call   80f9d3a <_ZNSt6vectorIN8WongWork12stHackInfo_tESaIS1_EE5clearEv>
 80f81ba:	8b 45 08             	mov    0x8(%ebp),%eax
 80f81bd:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 80f81c1:	8b 45 08             	mov    0x8(%ebp),%eax
 80f81c4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80f81ca:	8b 45 08             	mov    0x8(%ebp),%eax
 80f81cd:	83 c0 14             	add    $0x14,%eax
 80f81d0:	89 04 24             	mov    %eax,(%esp)
 80f81d3:	e8 96 e9 f9 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 80f81d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80f81db:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 80f81e2:	8b 45 08             	mov    0x8(%ebp),%eax
 80f81e5:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 80f81ec:	8b 45 08             	mov    0x8(%ebp),%eax
 80f81ef:	c7 80 08 7a 00 00 00 	movl   $0x0,0x7a08(%eax)
 80f81f6:	00 00 00 
 80f81f9:	c9                   	leave
 80f81fa:	c3                   	ret
 80f81fb:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::resetHackInfo @ 0x80f81a6

/* WongWork::CHackAnalyzer::resetHackInfo() */

void __thiscall WongWork::CHackAnalyzer::resetHackInfo(CHackAnalyzer *this)

{
  std::vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>>::clear
            ((vector<WongWork::stHackInfo_t,std::allocator<WongWork::stHackInfo_t>> *)(this + 8));
  this[4] = (CHackAnalyzer)0x0;
  *(undefined4 *)this = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x14));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x7a08) = 0;
  return;
}

```

---

## setUserP

```asm
// === 080f79c0 WongWork::CHackAnalyzer::setUserP  [0x080f79c0-0x80f79cd] ===
 80f79c0:	55                   	push   %ebp
 80f79c1:	89 e5                	mov    %esp,%ebp
 80f79c3:	8b 45 08             	mov    0x8(%ebp),%eax
 80f79c6:	8b 55 0c             	mov    0xc(%ebp),%edx
 80f79c9:	89 10                	mov    %edx,(%eax)
 80f79cb:	5d                   	pop    %ebp
 80f79cc:	c3                   	ret
 80f79cd:	90                   	nop

```

```c
// WongWork::CHackAnalyzer::setUserP @ 0x80f79c0

/* WongWork::CHackAnalyzer::setUserP(CUser*) */

void __thiscall WongWork::CHackAnalyzer::setUserP(CHackAnalyzer *this,CUser *param_1)

{
  *(CUser **)this = param_1;
  return;
}

```

