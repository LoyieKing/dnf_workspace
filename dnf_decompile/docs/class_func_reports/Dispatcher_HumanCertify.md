# Dispatcher_HumanCertify

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082064d6 Dispatcher_HumanCertify::dispatch_sig  [0x082064d6-0x820697b] ===
 82064d6:	55                   	push   %ebp
 82064d7:	89 e5                	mov    %esp,%ebp
 82064d9:	83 ec 48             	sub    $0x48,%esp
 82064dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82064df:	89 04 24             	mov    %eax,(%esp)
 82064e2:	e8 a5 3e ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82064e7:	83 f8 02             	cmp    $0x2,%eax
 82064ea:	0f 9e c0             	setle  %al
 82064ed:	84 c0                	test   %al,%al
 82064ef:	74 29                	je     820651a <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x44>
 82064f1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82064f8:	00 
 82064f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206500:	00 
 8206501:	c7 44 24 04 40 ec bc 	movl   $0x8bcec40,0x4(%esp)
 8206508:	08 
 8206509:	c7 04 24 07 a0 00 00 	movl   $0xa007,(%esp)
 8206510:	e8 c2 a3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206515:	e9 5f 04 00 00       	jmp    8206979 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 820651a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820651d:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 8206522:	89 04 24             	mov    %eax,(%esp)
 8206525:	e8 7a 89 02 00       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 820652a:	3d 1b 25 00 00       	cmp    $0x251b,%eax
 820652f:	0f 97 c0             	seta   %al
 8206532:	84 c0                	test   %al,%al
 8206534:	74 65                	je     820659b <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0xc5>
 8206536:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 820653d:	e8 45 b6 4a 00       	call   86b1b87 <_Z12get_rand_inti>
 8206542:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8206545:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8206549:	7f 50                	jg     820659b <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0xc5>
 820654b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820654e:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 8206553:	89 04 24             	mov    %eax,(%esp)
 8206556:	e8 49 89 02 00       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 820655b:	8b 55 0c             	mov    0xc(%ebp),%edx
 820655e:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8206564:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 820656b:	00 
 820656c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206570:	89 14 24             	mov    %edx,(%esp)
 8206573:	e8 6e ee 47 00       	call   86853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>
 8206578:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820657f:	00 
 8206580:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8206587:	00 
 8206588:	c7 44 24 04 35 00 00 	movl   $0x35,0x4(%esp)
 820658f:	00 
 8206590:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206593:	89 04 24             	mov    %eax,(%esp)
 8206596:	e8 59 24 44 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 820659b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82065a2:	c7 45 ec 0a 00 00 00 	movl   $0xa,-0x14(%ebp)
 82065a9:	c7 45 de 00 00 00 00 	movl   $0x0,-0x22(%ebp)
 82065b0:	c7 45 e2 00 00 00 00 	movl   $0x0,-0x1e(%ebp)
 82065b7:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 82065bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82065c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82065c4:	8b 45 10             	mov    0x10(%ebp),%eax
 82065c7:	89 04 24             	mov    %eax,(%esp)
 82065ca:	e8 21 6b 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82065cf:	83 f0 01             	xor    $0x1,%eax
 82065d2:	84 c0                	test   %al,%al
 82065d4:	75 08                	jne    82065de <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x108>
 82065d6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82065d9:	83 f8 0a             	cmp    $0xa,%eax
 82065dc:	7e 07                	jle    82065e5 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x10f>
 82065de:	b8 01 00 00 00       	mov    $0x1,%eax
 82065e3:	eb 05                	jmp    82065ea <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x114>
 82065e5:	b8 00 00 00 00       	mov    $0x0,%eax
 82065ea:	84 c0                	test   %al,%al
 82065ec:	74 29                	je     8206617 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x141>
 82065ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82065f5:	00 
 82065f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82065fd:	00 
 82065fe:	c7 44 24 04 40 ec bc 	movl   $0x8bcec40,0x4(%esp)
 8206605:	08 
 8206606:	c7 04 24 23 a0 00 00 	movl   $0xa023,(%esp)
 820660d:	e8 c5 a2 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206612:	e9 62 03 00 00       	jmp    8206979 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 8206617:	8d 45 de             	lea    -0x22(%ebp),%eax
 820661a:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8206621:	00 
 8206622:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206626:	8b 45 10             	mov    0x10(%ebp),%eax
 8206629:	89 04 24             	mov    %eax,(%esp)
 820662c:	e8 81 6d 38 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8206631:	83 f0 01             	xor    $0x1,%eax
 8206634:	84 c0                	test   %al,%al
 8206636:	74 29                	je     8206661 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x18b>
 8206638:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820663f:	00 
 8206640:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206647:	00 
 8206648:	c7 44 24 04 40 ec bc 	movl   $0x8bcec40,0x4(%esp)
 820664f:	08 
 8206650:	c7 04 24 24 a0 00 00 	movl   $0xa024,(%esp)
 8206657:	e8 7b a2 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820665c:	e9 18 03 00 00       	jmp    8206979 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 8206661:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8206665:	66 c7 45 dc 00 00    	movw   $0x0,-0x24(%ebp)
 820666b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 820666e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206672:	8b 45 10             	mov    0x10(%ebp),%eax
 8206675:	89 04 24             	mov    %eax,(%esp)
 8206678:	e8 33 6a 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 820667d:	83 f0 01             	xor    $0x1,%eax
 8206680:	84 c0                	test   %al,%al
 8206682:	74 29                	je     82066ad <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x1d7>
 8206684:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820668b:	00 
 820668c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206693:	00 
 8206694:	c7 44 24 04 40 ec bc 	movl   $0x8bcec40,0x4(%esp)
 820669b:	08 
 820669c:	c7 04 24 2f a0 00 00 	movl   $0xa02f,(%esp)
 82066a3:	e8 2f a2 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82066a8:	e9 cc 02 00 00       	jmp    8206979 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 82066ad:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 82066b1:	8d 45 db             	lea    -0x25(%ebp),%eax
 82066b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82066b8:	8b 45 10             	mov    0x10(%ebp),%eax
 82066bb:	89 04 24             	mov    %eax,(%esp)
 82066be:	e8 ad 68 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82066c3:	83 f0 01             	xor    $0x1,%eax
 82066c6:	84 c0                	test   %al,%al
 82066c8:	74 29                	je     82066f3 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x21d>
 82066ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82066d1:	00 
 82066d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82066d9:	00 
 82066da:	c7 44 24 04 40 ec bc 	movl   $0x8bcec40,0x4(%esp)
 82066e1:	08 
 82066e2:	c7 04 24 32 a0 00 00 	movl   $0xa032,(%esp)
 82066e9:	e8 e9 a1 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82066ee:	e9 86 02 00 00       	jmp    8206979 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 82066f3:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 82066f7:	3c 02                	cmp    $0x2,%al
 82066f9:	75 41                	jne    820673c <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x266>
 82066fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8206702:	00 
 8206703:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206706:	89 04 24             	mov    %eax,(%esp)
 8206709:	e8 1c 9b 02 00       	call   823022a <_ZN5CUser17setHumanCertifiedEb>
 820670e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8206715:	00 
 8206716:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206719:	89 04 24             	mov    %eax,(%esp)
 820671c:	e8 f1 37 48 00       	call   8689f12 <_ZN5CUser8SendMailEb>
 8206721:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206724:	89 04 24             	mov    %eax,(%esp)
 8206727:	e8 ae a0 02 00       	call   82307da <_ZN5CUser20resetCleanpadFailCntEv>
 820672c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820672f:	89 04 24             	mov    %eax,(%esp)
 8206732:	e8 e9 8f 47 00       	call   867f720 <_ZN5CUser21resetHumanCertifyDataEv>
 8206737:	e9 d3 01 00 00       	jmp    820690f <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x439>
 820673c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 820673f:	8d 55 de             	lea    -0x22(%ebp),%edx
 8206742:	89 54 24 08          	mov    %edx,0x8(%esp)
 8206746:	89 44 24 04          	mov    %eax,0x4(%esp)
 820674a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820674d:	89 04 24             	mov    %eax,(%esp)
 8206750:	e8 73 8d 47 00       	call   867f4c8 <_ZN5CUser17checkHumanCertifyEiPt>
 8206755:	83 f0 01             	xor    $0x1,%eax
 8206758:	84 c0                	test   %al,%al
 820675a:	0f 84 ff 00 00 00    	je     820685f <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x389>
 8206760:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206763:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 8206768:	89 04 24             	mov    %eax,(%esp)
 820676b:	e8 34 87 02 00       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 8206770:	8b 55 0c             	mov    0xc(%ebp),%edx
 8206773:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8206779:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8206780:	00 
 8206781:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206785:	89 14 24             	mov    %edx,(%esp)
 8206788:	e8 59 ec 47 00       	call   86853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>
 820678d:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8206791:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206794:	89 04 24             	mov    %eax,(%esp)
 8206797:	e8 50 a0 02 00       	call   82307ec <_ZN5CUser21isCleanPadVerifyLimitEv>
 820679c:	84 c0                	test   %al,%al
 820679e:	74 5e                	je     82067fe <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x328>
 82067a0:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 82067a4:	3c 01                	cmp    $0x1,%al
 82067a6:	75 2e                	jne    82067d6 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x300>
 82067a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82067af:	00 
 82067b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82067b3:	89 04 24             	mov    %eax,(%esp)
 82067b6:	e8 57 37 48 00       	call   8689f12 <_ZN5CUser8SendMailEb>
 82067bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82067be:	89 04 24             	mov    %eax,(%esp)
 82067c1:	e8 5a 8f 47 00       	call   867f720 <_ZN5CUser21resetHumanCertifyDataEv>
 82067c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82067c9:	89 04 24             	mov    %eax,(%esp)
 82067cc:	e8 09 a0 02 00       	call   82307da <_ZN5CUser20resetCleanpadFailCntEv>
 82067d1:	e9 39 01 00 00       	jmp    820690f <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x439>
 82067d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82067dd:	00 
 82067de:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82067e5:	00 
 82067e6:	c7 44 24 04 1f 00 00 	movl   $0x1f,0x4(%esp)
 82067ed:	00 
 82067ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 82067f1:	89 04 24             	mov    %eax,(%esp)
 82067f4:	e8 fb 21 44 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 82067f9:	e9 11 01 00 00       	jmp    820690f <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x439>
 82067fe:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 8206802:	3c 01                	cmp    $0x1,%al
 8206804:	75 2e                	jne    8206834 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x35e>
 8206806:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206809:	89 04 24             	mov    %eax,(%esp)
 820680c:	e8 09 3d 48 00       	call   868a51a <_ZN5CUser18reqSendMailCertifyEv>
 8206811:	83 f0 01             	xor    $0x1,%eax
 8206814:	84 c0                	test   %al,%al
 8206816:	0f 84 f3 00 00 00    	je     820690f <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x439>
 820681c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8206823:	00 
 8206824:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206827:	89 04 24             	mov    %eax,(%esp)
 820682a:	e8 e3 36 48 00       	call   8689f12 <_ZN5CUser8SendMailEb>
 820682f:	e9 db 00 00 00       	jmp    820690f <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x439>
 8206834:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820683b:	00 
 820683c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820683f:	89 04 24             	mov    %eax,(%esp)
 8206842:	e8 e3 99 02 00       	call   823022a <_ZN5CUser17setHumanCertifiedEb>
 8206847:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820684e:	00 
 820684f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206852:	89 04 24             	mov    %eax,(%esp)
 8206855:	e8 5e 9a 47 00       	call   86802b8 <_ZN5CUser24reqHumanCertify4ClearMapEb>
 820685a:	e9 b0 00 00 00       	jmp    820690f <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x439>
 820685f:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 8206863:	3c 01                	cmp    $0x1,%al
 8206865:	75 13                	jne    820687a <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x3a4>
 8206867:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820686e:	00 
 820686f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206872:	89 04 24             	mov    %eax,(%esp)
 8206875:	e8 98 36 48 00       	call   8689f12 <_ZN5CUser8SendMailEb>
 820687a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820687d:	89 04 24             	mov    %eax,(%esp)
 8206880:	e8 55 9f 02 00       	call   82307da <_ZN5CUser20resetCleanpadFailCntEv>
 8206885:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206888:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 820688d:	89 04 24             	mov    %eax,(%esp)
 8206890:	e8 0f 86 02 00       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 8206895:	8b 55 0c             	mov    0xc(%ebp),%edx
 8206898:	81 c2 00 97 07 00    	add    $0x79700,%edx
 820689e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82068a5:	00 
 82068a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82068aa:	89 14 24             	mov    %edx,(%esp)
 82068ad:	e8 34 eb 47 00       	call   86853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>
 82068b2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82068b9:	e8 ee ef f3 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 82068be:	8b 55 0c             	mov    0xc(%ebp),%edx
 82068c1:	8b 92 4c e9 08 00    	mov    0x8e94c(%edx),%edx
 82068c7:	29 d0                	sub    %edx,%eax
 82068c9:	3d cf 07 00 00       	cmp    $0x7cf,%eax
 82068ce:	0f 96 c0             	setbe  %al
 82068d1:	84 c0                	test   %al,%al
 82068d3:	74 3a                	je     820690f <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x439>
 82068d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82068d8:	89 04 24             	mov    %eax,(%esp)
 82068db:	e8 7a 30 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82068e0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82068e7:	00 
 82068e8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82068ef:	00 
 82068f0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82068f7:	00 
 82068f8:	c7 44 24 08 41 03 00 	movl   $0x341,0x8(%esp)
 82068ff:	00 
 8206900:	8b 55 0c             	mov    0xc(%ebp),%edx
 8206903:	89 54 24 04          	mov    %edx,0x4(%esp)
 8206907:	89 04 24             	mov    %eax,(%esp)
 820690a:	e8 6f 23 ef ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 820690f:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 8206913:	0f b7 c0             	movzwl %ax,%eax
 8206916:	89 44 24 04          	mov    %eax,0x4(%esp)
 820691a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820691d:	89 04 24             	mov    %eax,(%esp)
 8206920:	e8 1f 32 44 00       	call   8649b44 <_ZN5CUser22VerifyCleanPadVeriDataEj>
 8206925:	84 c0                	test   %al,%al
 8206927:	74 3a                	je     8206963 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x48d>
 8206929:	8b 45 0c             	mov    0xc(%ebp),%eax
 820692c:	89 04 24             	mov    %eax,(%esp)
 820692f:	e8 26 30 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8206934:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 820693b:	00 
 820693c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8206943:	00 
 8206944:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 820694b:	00 
 820694c:	c7 44 24 08 37 03 00 	movl   $0x337,0x8(%esp)
 8206953:	00 
 8206954:	8b 55 0c             	mov    0xc(%ebp),%edx
 8206957:	89 54 24 04          	mov    %edx,0x4(%esp)
 820695b:	89 04 24             	mov    %eax,(%esp)
 820695e:	e8 1b 23 ef ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8206963:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8206967:	74 0b                	je     8206974 <_ZN23Dispatcher_HumanCertify12dispatch_sigEP5CUserR9PacketBuf+0x49e>
 8206969:	8b 45 0c             	mov    0xc(%ebp),%eax
 820696c:	89 04 24             	mov    %eax,(%esp)
 820696f:	e8 ac 8d 47 00       	call   867f720 <_ZN5CUser21resetHumanCertifyDataEv>
 8206974:	b8 00 00 00 00       	mov    $0x0,%eax
 8206979:	c9                   	leave
 820697a:	c3                   	ret
 820697b:	90                   	nop

```

```c
// Dispatcher_HumanCertify::dispatch_sig @ 0x82064d6

/* Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_HumanCertify::dispatch_sig
          (Dispatcher_HumanCertify *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CHackAnalyzer *pCVar6;
  uchar local_29;
  ushort local_28;
  ushort local_26 [5];
  int local_1c [2];
  char local_11;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    uVar4 = LineFunc(0xa007,"virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
    if (0x251b < uVar5) {
      local_10 = get_rand_int(100);
      if (local_10 < 0xb) {
        uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
        cUserHistoryLog::RequestCleanPad((cUserHistoryLog *)(param_1 + 0x79700),uVar5,'\x02');
        CUser::DisConnSig(param_1,0x35,1,0);
      }
    }
    local_1c[0] = 0;
    local_1c[1] = 10;
    local_26[0] = 0;
    local_26[1] = 0;
    local_26[2] = 0;
    local_26[3] = 0;
    local_26[4] = 0;
    cVar2 = PacketBuf::get_int(param_2,local_1c);
    if ((cVar2 == '\x01') && (local_1c[0] < 0xb)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = LineFunc(0xa023,
                       "virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
    else {
      cVar2 = PacketBuf::get_binary(param_2,(char *)local_26,10);
      if (cVar2 == '\x01') {
        local_11 = '\x01';
        local_28 = 0;
        cVar2 = PacketBuf::get_short(param_2,&local_28);
        if (cVar2 == '\x01') {
          local_29 = '\0';
          cVar2 = PacketBuf::get_byte(param_2,&local_29);
          if (cVar2 == '\x01') {
            if (local_29 == '\x02') {
              CUser::setHumanCertified(param_1,true);
              CUser::SendMail(param_1,false);
              CUser::resetCleanpadFailCnt(param_1);
              CUser::resetHumanCertifyData(param_1);
            }
            else {
              cVar2 = CUser::checkHumanCertify(param_1,local_1c[0],local_26);
              if (cVar2 == '\x01') {
                if (local_29 == '\x01') {
                  CUser::SendMail(param_1,true);
                }
                CUser::resetCleanpadFailCnt(param_1);
                uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
                cUserHistoryLog::RequestCleanPad
                          ((cUserHistoryLog *)(param_1 + 0x79700),uVar5,'\x01');
                iVar3 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
                if ((uint)(iVar3 - *(int *)(param_1 + 0x8e94c)) < 2000) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x341,1,0,0);
                }
              }
              else {
                uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
                cUserHistoryLog::RequestCleanPad
                          ((cUserHistoryLog *)(param_1 + 0x79700),uVar5,'\x02');
                local_11 = '\0';
                cVar2 = CUser::isCleanPadVerifyLimit(param_1);
                if (cVar2 == '\0') {
                  if (local_29 == '\x01') {
                    cVar2 = CUser::reqSendMailCertify(param_1);
                    if (cVar2 != '\x01') {
                      CUser::SendMail(param_1,true);
                    }
                  }
                  else {
                    CUser::setHumanCertified(param_1,true);
                    CUser::reqHumanCertify4ClearMap(param_1,false);
                  }
                }
                else if (local_29 == '\x01') {
                  CUser::SendMail(param_1,false);
                  CUser::resetHumanCertifyData(param_1);
                  CUser::resetCleanpadFailCnt(param_1);
                }
                else {
                  CUser::DisConnSig(param_1,0x1f,1,0);
                }
              }
            }
            cVar2 = CUser::VerifyCleanPadVeriData(param_1,(uint)local_28);
            if (cVar2 != '\0') {
              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x337,1,0,0);
            }
            if (local_11 != '\0') {
              CUser::resetHumanCertifyData(param_1);
            }
            uVar4 = 0;
          }
          else {
            uVar4 = LineFunc(0xa032,
                             "virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar4 = LineFunc(0xa02f,
                           "virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)",0
                           ,0);
        }
      }
      else {
        uVar4 = LineFunc(0xa024,
                         "virtual int Dispatcher_HumanCertify::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
  }
  return uVar4;
}

```

