# Dispatcher_InvestItemAmplifyOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082194f4 Dispatcher_InvestItemAmplifyOption::dispatch_sig  [0x082194f4-0x821a411] ===
 82194f4:	55                   	push   %ebp
 82194f5:	89 e5                	mov    %esp,%ebp
 82194f7:	57                   	push   %edi
 82194f8:	56                   	push   %esi
 82194f9:	53                   	push   %ebx
 82194fa:	81 ec ec 01 00 00    	sub    $0x1ec,%esp
 8219500:	8b 45 0c             	mov    0xc(%ebp),%eax
 8219503:	89 04 24             	mov    %eax,(%esp)
 8219506:	e8 81 0e ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821950b:	83 f8 03             	cmp    $0x3,%eax
 821950e:	0f 95 c0             	setne  %al
 8219511:	84 c0                	test   %al,%al
 8219513:	74 2b                	je     8219540 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x4c>
 8219515:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821951c:	00 
 821951d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219524:	00 
 8219525:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 821952c:	08 
 821952d:	c7 04 24 82 cc 00 00 	movl   $0xcc82,(%esp)
 8219534:	e8 9e 73 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8219539:	89 c3                	mov    %eax,%ebx
 821953b:	e9 c5 0e 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 8219540:	c6 45 cf 00          	movb   $0x0,-0x31(%ebp)
 8219544:	66 c7 45 cc 00 00    	movw   $0x0,-0x34(%ebp)
 821954a:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8219551:	66 c7 45 c6 00 00    	movw   $0x0,-0x3a(%ebp)
 8219557:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 821955e:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8219561:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219565:	8b 45 10             	mov    0x10(%ebp),%eax
 8219568:	89 04 24             	mov    %eax,(%esp)
 821956b:	e8 00 3a 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8219570:	83 f0 01             	xor    $0x1,%eax
 8219573:	84 c0                	test   %al,%al
 8219575:	74 2b                	je     82195a2 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xae>
 8219577:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821957e:	00 
 821957f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219586:	00 
 8219587:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 821958e:	08 
 821958f:	c7 04 24 89 cc 00 00 	movl   $0xcc89,(%esp)
 8219596:	e8 3c 73 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821959b:	89 c3                	mov    %eax,%ebx
 821959d:	e9 63 0e 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 82195a2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82195a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82195a9:	8b 45 10             	mov    0x10(%ebp),%eax
 82195ac:	89 04 24             	mov    %eax,(%esp)
 82195af:	e8 fc 3a 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 82195b4:	83 f0 01             	xor    $0x1,%eax
 82195b7:	84 c0                	test   %al,%al
 82195b9:	74 2b                	je     82195e6 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf2>
 82195bb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82195c2:	00 
 82195c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82195ca:	00 
 82195cb:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 82195d2:	08 
 82195d3:	c7 04 24 8a cc 00 00 	movl   $0xcc8a,(%esp)
 82195da:	e8 f8 72 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82195df:	89 c3                	mov    %eax,%ebx
 82195e1:	e9 1f 0e 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 82195e6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 82195e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82195ed:	8b 45 10             	mov    0x10(%ebp),%eax
 82195f0:	89 04 24             	mov    %eax,(%esp)
 82195f3:	e8 f0 20 01 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 82195f8:	83 f0 01             	xor    $0x1,%eax
 82195fb:	84 c0                	test   %al,%al
 82195fd:	74 2b                	je     821962a <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x136>
 82195ff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8219606:	00 
 8219607:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821960e:	00 
 821960f:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 8219616:	08 
 8219617:	c7 04 24 8b cc 00 00 	movl   $0xcc8b,(%esp)
 821961e:	e8 b4 72 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8219623:	89 c3                	mov    %eax,%ebx
 8219625:	e9 db 0d 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 821962a:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 821962d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219631:	8b 45 10             	mov    0x10(%ebp),%eax
 8219634:	89 04 24             	mov    %eax,(%esp)
 8219637:	e8 74 3a 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821963c:	83 f0 01             	xor    $0x1,%eax
 821963f:	84 c0                	test   %al,%al
 8219641:	74 2b                	je     821966e <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x17a>
 8219643:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821964a:	00 
 821964b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219652:	00 
 8219653:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 821965a:	08 
 821965b:	c7 04 24 8c cc 00 00 	movl   $0xcc8c,(%esp)
 8219662:	e8 70 72 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8219667:	89 c3                	mov    %eax,%ebx
 8219669:	e9 97 0d 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 821966e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8219671:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219675:	8b 45 10             	mov    0x10(%ebp),%eax
 8219678:	89 04 24             	mov    %eax,(%esp)
 821967b:	e8 68 20 01 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 8219680:	83 f0 01             	xor    $0x1,%eax
 8219683:	84 c0                	test   %al,%al
 8219685:	74 2b                	je     82196b2 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x1be>
 8219687:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821968e:	00 
 821968f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219696:	00 
 8219697:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 821969e:	08 
 821969f:	c7 04 24 8d cc 00 00 	movl   $0xcc8d,(%esp)
 82196a6:	e8 2c 72 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82196ab:	89 c3                	mov    %eax,%ebx
 82196ad:	e9 53 0d 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 82196b2:	c7 45 d0 80 00 00 00 	movl   $0x80,-0x30(%ebp)
 82196b9:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 82196c0:	8d 95 a5 fe ff ff    	lea    -0x15b(%ebp),%edx
 82196c6:	bb 81 00 00 00       	mov    $0x81,%ebx
 82196cb:	b8 00 00 00 00       	mov    $0x0,%eax
 82196d0:	89 d1                	mov    %edx,%ecx
 82196d2:	83 e1 01             	and    $0x1,%ecx
 82196d5:	85 c9                	test   %ecx,%ecx
 82196d7:	74 08                	je     82196e1 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x1ed>
 82196d9:	88 02                	mov    %al,(%edx)
 82196db:	83 c2 01             	add    $0x1,%edx
 82196de:	83 eb 01             	sub    $0x1,%ebx
 82196e1:	89 d1                	mov    %edx,%ecx
 82196e3:	83 e1 02             	and    $0x2,%ecx
 82196e6:	85 c9                	test   %ecx,%ecx
 82196e8:	74 09                	je     82196f3 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x1ff>
 82196ea:	66 89 02             	mov    %ax,(%edx)
 82196ed:	83 c2 02             	add    $0x2,%edx
 82196f0:	83 eb 02             	sub    $0x2,%ebx
 82196f3:	89 d9                	mov    %ebx,%ecx
 82196f5:	c1 e9 02             	shr    $0x2,%ecx
 82196f8:	89 d7                	mov    %edx,%edi
 82196fa:	f3 ab                	rep stos %eax,%es:(%edi)
 82196fc:	89 fa                	mov    %edi,%edx
 82196fe:	89 d9                	mov    %ebx,%ecx
 8219700:	83 e1 02             	and    $0x2,%ecx
 8219703:	85 c9                	test   %ecx,%ecx
 8219705:	74 06                	je     821970d <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x219>
 8219707:	66 89 02             	mov    %ax,(%edx)
 821970a:	83 c2 02             	add    $0x2,%edx
 821970d:	89 d9                	mov    %ebx,%ecx
 821970f:	83 e1 01             	and    $0x1,%ecx
 8219712:	85 c9                	test   %ecx,%ecx
 8219714:	74 05                	je     821971b <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x227>
 8219716:	88 02                	mov    %al,(%edx)
 8219718:	83 c2 01             	add    $0x1,%edx
 821971b:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 821971f:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8219722:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219726:	8b 45 10             	mov    0x10(%ebp),%eax
 8219729:	89 04 24             	mov    %eax,(%esp)
 821972c:	e8 3f 38 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8219731:	83 f0 01             	xor    $0x1,%eax
 8219734:	84 c0                	test   %al,%al
 8219736:	74 2b                	je     8219763 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x26f>
 8219738:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821973f:	00 
 8219740:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219747:	00 
 8219748:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 821974f:	08 
 8219750:	c7 04 24 97 cc 00 00 	movl   $0xcc97,(%esp)
 8219757:	e8 7b 71 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821975c:	89 c3                	mov    %eax,%ebx
 821975e:	e9 a2 0c 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 8219763:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8219767:	3c 04                	cmp    $0x4,%al
 8219769:	76 2b                	jbe    8219796 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x2a2>
 821976b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8219772:	00 
 8219773:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821977a:	00 
 821977b:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 8219782:	08 
 8219783:	c7 04 24 99 cc 00 00 	movl   $0xcc99,(%esp)
 821978a:	e8 48 71 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821978f:	89 c3                	mov    %eax,%ebx
 8219791:	e9 6f 0c 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 8219796:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 821979a:	3c 02                	cmp    $0x2,%al
 821979c:	0f 85 9a 00 00 00    	jne    821983c <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x348>
 82197a2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82197a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82197a9:	8b 45 10             	mov    0x10(%ebp),%eax
 82197ac:	89 04 24             	mov    %eax,(%esp)
 82197af:	e8 8c 3a 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82197b4:	83 f0 01             	xor    $0x1,%eax
 82197b7:	84 c0                	test   %al,%al
 82197b9:	74 2b                	je     82197e6 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x2f2>
 82197bb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82197c2:	00 
 82197c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82197ca:	00 
 82197cb:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 82197d2:	08 
 82197d3:	c7 04 24 a0 cc 00 00 	movl   $0xcca0,(%esp)
 82197da:	e8 f8 70 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82197df:	89 c3                	mov    %eax,%ebx
 82197e1:	e9 1f 0c 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 82197e6:	8b 45 bc             	mov    -0x44(%ebp),%eax
 82197e9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82197ed:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 82197f4:	00 
 82197f5:	8d 85 a5 fe ff ff    	lea    -0x15b(%ebp),%eax
 82197fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82197ff:	8b 45 10             	mov    0x10(%ebp),%eax
 8219802:	89 04 24             	mov    %eax,(%esp)
 8219805:	e8 b2 3a 37 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 821980a:	83 f0 01             	xor    $0x1,%eax
 821980d:	84 c0                	test   %al,%al
 821980f:	74 2b                	je     821983c <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x348>
 8219811:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8219818:	00 
 8219819:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219820:	00 
 8219821:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 8219828:	08 
 8219829:	c7 04 24 a1 cc 00 00 	movl   $0xcca1,(%esp)
 8219830:	e8 a2 70 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8219835:	89 c3                	mov    %eax,%ebx
 8219837:	e9 c9 0b 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 821983c:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 8219840:	3c 02                	cmp    $0x2,%al
 8219842:	76 2b                	jbe    821986f <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x37b>
 8219844:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821984b:	00 
 821984c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219853:	00 
 8219854:	c7 44 24 04 c0 d7 bc 	movl   $0x8bcd7c0,0x4(%esp)
 821985b:	08 
 821985c:	c7 04 24 a6 cc 00 00 	movl   $0xcca6,(%esp)
 8219863:	e8 6f 70 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8219868:	89 c3                	mov    %eax,%ebx
 821986a:	e9 96 0b 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 821986f:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 8219875:	89 04 24             	mov    %eax,(%esp)
 8219878:	e8 d7 1f eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 821987d:	8d 85 26 ff ff ff    	lea    -0xda(%ebp),%eax
 8219883:	89 04 24             	mov    %eax,(%esp)
 8219886:	e8 c9 1f eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 821988b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 821988e:	89 04 24             	mov    %eax,(%esp)
 8219891:	e8 10 16 01 00       	call   822aea6 <_ZN23stInvestAmplifyOption_tC1Ev>
 8219896:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 821989d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82198a0:	89 c3                	mov    %eax,%ebx
 82198a2:	e8 f4 28 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 82198a7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82198ab:	89 04 24             	mov    %eax,(%esp)
 82198ae:	e8 7f 61 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82198b3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 82198b6:	0f b7 45 cc          	movzwl -0x34(%ebp),%eax
 82198ba:	0f b7 c0             	movzwl %ax,%eax
 82198bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 82198c1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82198c8:	00 
 82198c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82198cc:	89 04 24             	mov    %eax,(%esp)
 82198cf:	e8 6e d0 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 82198d4:	84 c0                	test   %al,%al
 82198d6:	74 2c                	je     8219904 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x410>
 82198d8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82198df:	e8 1c bf 50 00       	call   8725800 <__cxa_allocate_exception>
 82198e4:	89 c2                	mov    %eax,%edx
 82198e6:	c7 02 d5 00 00 00    	movl   $0xd5,(%edx)
 82198ec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82198f3:	00 
 82198f4:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82198fb:	08 
 82198fc:	89 04 24             	mov    %eax,(%esp)
 82198ff:	e8 4c b3 50 00       	call   8724c50 <__cxa_throw>
 8219904:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8219908:	75 2c                	jne    8219936 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x442>
 821990a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219911:	e8 ea be 50 00       	call   8725800 <__cxa_allocate_exception>
 8219916:	89 c2                	mov    %eax,%edx
 8219918:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 821991e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219925:	00 
 8219926:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 821992d:	08 
 821992e:	89 04 24             	mov    %eax,(%esp)
 8219931:	e8 1a b3 50 00       	call   8724c50 <__cxa_throw>
 8219936:	0f b7 45 cc          	movzwl -0x34(%ebp),%eax
 821993a:	0f b7 d8             	movzwl %ax,%ebx
 821993d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8219940:	89 04 24             	mov    %eax,(%esp)
 8219943:	e8 36 09 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8219948:	8d 95 58 fe ff ff    	lea    -0x1a8(%ebp),%edx
 821994e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8219952:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8219959:	00 
 821995a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821995e:	89 14 24             	mov    %edx,(%esp)
 8219961:	e8 b2 1f 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8219966:	83 ec 04             	sub    $0x4,%esp
 8219969:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 821996f:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 8219975:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 821997b:	89 85 67 ff ff ff    	mov    %eax,-0x99(%ebp)
 8219981:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 8219987:	89 85 6b ff ff ff    	mov    %eax,-0x95(%ebp)
 821998d:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 8219993:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 8219999:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 821999f:	89 85 73 ff ff ff    	mov    %eax,-0x8d(%ebp)
 82199a5:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 82199ab:	89 85 77 ff ff ff    	mov    %eax,-0x89(%ebp)
 82199b1:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 82199b7:	89 85 7b ff ff ff    	mov    %eax,-0x85(%ebp)
 82199bd:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 82199c3:	89 85 7f ff ff ff    	mov    %eax,-0x81(%ebp)
 82199c9:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 82199cf:	89 45 83             	mov    %eax,-0x7d(%ebp)
 82199d2:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 82199d8:	89 45 87             	mov    %eax,-0x79(%ebp)
 82199db:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 82199e1:	89 45 8b             	mov    %eax,-0x75(%ebp)
 82199e4:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 82199ea:	89 45 8f             	mov    %eax,-0x71(%ebp)
 82199ed:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 82199f3:	89 45 93             	mov    %eax,-0x6d(%ebp)
 82199f6:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 82199fc:	89 45 97             	mov    %eax,-0x69(%ebp)
 82199ff:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 8219a05:	89 45 9b             	mov    %eax,-0x65(%ebp)
 8219a08:	0f b6 85 94 fe ff ff 	movzbl -0x16c(%ebp),%eax
 8219a0f:	88 45 9f             	mov    %al,-0x61(%ebp)
 8219a12:	8b 95 65 ff ff ff    	mov    -0x9b(%ebp),%edx
 8219a18:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8219a1b:	39 c2                	cmp    %eax,%edx
 8219a1d:	74 2c                	je     8219a4b <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x557>
 8219a1f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219a26:	e8 d5 bd 50 00       	call   8725800 <__cxa_allocate_exception>
 8219a2b:	89 c2                	mov    %eax,%edx
 8219a2d:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8219a33:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219a3a:	00 
 8219a3b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219a42:	08 
 8219a43:	89 04 24             	mov    %eax,(%esp)
 8219a46:	e8 05 b2 50 00       	call   8724c50 <__cxa_throw>
 8219a4b:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 8219a4f:	0f b7 d8             	movzwl %ax,%ebx
 8219a52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8219a55:	89 04 24             	mov    %eax,(%esp)
 8219a58:	e8 21 08 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8219a5d:	8d 95 58 fe ff ff    	lea    -0x1a8(%ebp),%edx
 8219a63:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8219a67:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8219a6e:	00 
 8219a6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219a73:	89 14 24             	mov    %edx,(%esp)
 8219a76:	e8 9d 1e 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8219a7b:	83 ec 04             	sub    $0x4,%esp
 8219a7e:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 8219a84:	89 85 26 ff ff ff    	mov    %eax,-0xda(%ebp)
 8219a8a:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 8219a90:	89 85 2a ff ff ff    	mov    %eax,-0xd6(%ebp)
 8219a96:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 8219a9c:	89 85 2e ff ff ff    	mov    %eax,-0xd2(%ebp)
 8219aa2:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 8219aa8:	89 85 32 ff ff ff    	mov    %eax,-0xce(%ebp)
 8219aae:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 8219ab4:	89 85 36 ff ff ff    	mov    %eax,-0xca(%ebp)
 8219aba:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8219ac0:	89 85 3a ff ff ff    	mov    %eax,-0xc6(%ebp)
 8219ac6:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 8219acc:	89 85 3e ff ff ff    	mov    %eax,-0xc2(%ebp)
 8219ad2:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8219ad8:	89 85 42 ff ff ff    	mov    %eax,-0xbe(%ebp)
 8219ade:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 8219ae4:	89 85 46 ff ff ff    	mov    %eax,-0xba(%ebp)
 8219aea:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 8219af0:	89 85 4a ff ff ff    	mov    %eax,-0xb6(%ebp)
 8219af6:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 8219afc:	89 85 4e ff ff ff    	mov    %eax,-0xb2(%ebp)
 8219b02:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 8219b08:	89 85 52 ff ff ff    	mov    %eax,-0xae(%ebp)
 8219b0e:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 8219b14:	89 85 56 ff ff ff    	mov    %eax,-0xaa(%ebp)
 8219b1a:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 8219b20:	89 85 5a ff ff ff    	mov    %eax,-0xa6(%ebp)
 8219b26:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 8219b2c:	89 85 5e ff ff ff    	mov    %eax,-0xa2(%ebp)
 8219b32:	0f b6 85 94 fe ff ff 	movzbl -0x16c(%ebp),%eax
 8219b39:	88 85 62 ff ff ff    	mov    %al,-0x9e(%ebp)
 8219b3f:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 8219b45:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8219b48:	39 c2                	cmp    %eax,%edx
 8219b4a:	74 2c                	je     8219b78 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x684>
 8219b4c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219b53:	e8 a8 bc 50 00       	call   8725800 <__cxa_allocate_exception>
 8219b58:	89 c2                	mov    %eax,%edx
 8219b5a:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8219b60:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219b67:	00 
 8219b68:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219b6f:	08 
 8219b70:	89 04 24             	mov    %eax,(%esp)
 8219b73:	e8 d8 b0 50 00       	call   8724c50 <__cxa_throw>
 8219b78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8219b7b:	89 04 24             	mov    %eax,(%esp)
 8219b7e:	e8 35 07 ec ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8219b83:	8b 15 e8 f7 41 09    	mov    0x941f7e8,%edx
 8219b89:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8219b8d:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 8219b93:	89 44 24 08          	mov    %eax,0x8(%esp)
 8219b97:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8219b9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219b9e:	89 14 24             	mov    %edx,(%esp)
 8219ba1:	e8 da ad 01 00       	call   8234980 <_ZNK14CItemAmplifier19checkInvestableItemEPK5CItemRK10Inven_Itemi>
 8219ba6:	83 f0 01             	xor    $0x1,%eax
 8219ba9:	84 c0                	test   %al,%al
 8219bab:	74 2c                	je     8219bd9 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x6e5>
 8219bad:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219bb4:	e8 47 bc 50 00       	call   8725800 <__cxa_allocate_exception>
 8219bb9:	89 c2                	mov    %eax,%edx
 8219bbb:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 8219bc1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219bc8:	00 
 8219bc9:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219bd0:	08 
 8219bd1:	89 04 24             	mov    %eax,(%esp)
 8219bd4:	e8 77 b0 50 00       	call   8724c50 <__cxa_throw>
 8219bd9:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8219bdc:	89 c3                	mov    %eax,%ebx
 8219bde:	e8 b8 25 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8219be3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8219be7:	89 04 24             	mov    %eax,(%esp)
 8219bea:	e8 43 5e 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8219bef:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8219bf2:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8219bf6:	75 2c                	jne    8219c24 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x730>
 8219bf8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219bff:	e8 fc bb 50 00       	call   8725800 <__cxa_allocate_exception>
 8219c04:	89 c2                	mov    %eax,%edx
 8219c06:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8219c0c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219c13:	00 
 8219c14:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219c1b:	08 
 8219c1c:	89 04 24             	mov    %eax,(%esp)
 8219c1f:	e8 2c b0 50 00       	call   8724c50 <__cxa_throw>
 8219c24:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8219c27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219c2b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8219c2e:	89 04 24             	mov    %eax,(%esp)
 8219c31:	e8 b4 2c 01 00       	call   822c8ea <_ZNK5CItem13IsEnableWorldEPKS_>
 8219c36:	83 f0 01             	xor    $0x1,%eax
 8219c39:	84 c0                	test   %al,%al
 8219c3b:	74 2c                	je     8219c69 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x775>
 8219c3d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219c44:	e8 b7 bb 50 00       	call   8725800 <__cxa_allocate_exception>
 8219c49:	89 c2                	mov    %eax,%edx
 8219c4b:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 8219c51:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219c58:	00 
 8219c59:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219c60:	08 
 8219c61:	89 04 24             	mov    %eax,(%esp)
 8219c64:	e8 e7 af 50 00       	call   8724c50 <__cxa_throw>
 8219c69:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8219c6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219c70:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8219c73:	89 04 24             	mov    %eax,(%esp)
 8219c76:	e8 6f 2c 01 00       	call   822c8ea <_ZNK5CItem13IsEnableWorldEPKS_>
 8219c7b:	83 f0 01             	xor    $0x1,%eax
 8219c7e:	84 c0                	test   %al,%al
 8219c80:	74 2c                	je     8219cae <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x7ba>
 8219c82:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219c89:	e8 72 bb 50 00       	call   8725800 <__cxa_allocate_exception>
 8219c8e:	89 c2                	mov    %eax,%edx
 8219c90:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 8219c96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219c9d:	00 
 8219c9e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219ca5:	08 
 8219ca6:	89 04 24             	mov    %eax,(%esp)
 8219ca9:	e8 a2 af 50 00       	call   8724c50 <__cxa_throw>
 8219cae:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8219cb1:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 8219cb5:	0f b6 d0             	movzbl %al,%edx
 8219cb8:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8219cbd:	8d 5d b0             	lea    -0x50(%ebp),%ebx
 8219cc0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8219cc4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8219cc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8219ccc:	89 04 24             	mov    %eax,(%esp)
 8219ccf:	e8 8a b0 01 00       	call   8234d5e <_ZNK14CItemAmplifier21getInvestMaterialInfoE29ENUM_ITEM_AMPLIFY_INVEST_TYPEmR23stInvestAmplifyOption_t>
 8219cd4:	83 f0 01             	xor    $0x1,%eax
 8219cd7:	84 c0                	test   %al,%al
 8219cd9:	74 2c                	je     8219d07 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x813>
 8219cdb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219ce2:	e8 19 bb 50 00       	call   8725800 <__cxa_allocate_exception>
 8219ce7:	89 c2                	mov    %eax,%edx
 8219ce9:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8219cef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219cf6:	00 
 8219cf7:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219cfe:	08 
 8219cff:	89 04 24             	mov    %eax,(%esp)
 8219d02:	e8 49 af 50 00       	call   8724c50 <__cxa_throw>
 8219d07:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8219d0a:	83 f8 05             	cmp    $0x5,%eax
 8219d0d:	75 34                	jne    8219d43 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x84f>
 8219d0f:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8219d13:	84 c0                	test   %al,%al
 8219d15:	75 2c                	jne    8219d43 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x84f>
 8219d17:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219d1e:	e8 dd ba 50 00       	call   8725800 <__cxa_allocate_exception>
 8219d23:	89 c2                	mov    %eax,%edx
 8219d25:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8219d2b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219d32:	00 
 8219d33:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219d3a:	08 
 8219d3b:	89 04 24             	mov    %eax,(%esp)
 8219d3e:	e8 0d af 50 00       	call   8724c50 <__cxa_throw>
 8219d43:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8219d47:	84 c0                	test   %al,%al
 8219d49:	74 3e                	je     8219d89 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x895>
 8219d4b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8219d4e:	83 f8 05             	cmp    $0x5,%eax
 8219d51:	74 2c                	je     8219d7f <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x88b>
 8219d53:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219d5a:	e8 a1 ba 50 00       	call   8725800 <__cxa_allocate_exception>
 8219d5f:	89 c2                	mov    %eax,%edx
 8219d61:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8219d67:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219d6e:	00 
 8219d6f:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219d76:	08 
 8219d77:	89 04 24             	mov    %eax,(%esp)
 8219d7a:	e8 d1 ae 50 00       	call   8724c50 <__cxa_throw>
 8219d7f:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8219d83:	0f b6 c0             	movzbl %al,%eax
 8219d86:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8219d89:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8219d8c:	85 c0                	test   %eax,%eax
 8219d8e:	74 0d                	je     8219d9d <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x8a9>
 8219d90:	8b 95 2d ff ff ff    	mov    -0xd3(%ebp),%edx
 8219d96:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8219d99:	39 c2                	cmp    %eax,%edx
 8219d9b:	7d 2c                	jge    8219dc9 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x8d5>
 8219d9d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219da4:	e8 57 ba 50 00       	call   8725800 <__cxa_allocate_exception>
 8219da9:	89 c2                	mov    %eax,%edx
 8219dab:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8219db1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219db8:	00 
 8219db9:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219dc0:	08 
 8219dc1:	89 04 24             	mov    %eax,(%esp)
 8219dc4:	e8 87 ae 50 00       	call   8724c50 <__cxa_throw>
 8219dc9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8219dcc:	89 c3                	mov    %eax,%ebx
 8219dce:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 8219dd4:	83 c0 11             	add    $0x11,%eax
 8219dd7:	89 04 24             	mov    %eax,(%esp)
 8219dda:	e8 53 69 f3 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8219ddf:	0f b6 c0             	movzbl %al,%eax
 8219de2:	39 c3                	cmp    %eax,%ebx
 8219de4:	0f 94 c0             	sete   %al
 8219de7:	84 c0                	test   %al,%al
 8219de9:	74 2c                	je     8219e17 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x923>
 8219deb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219df2:	e8 09 ba 50 00       	call   8725800 <__cxa_allocate_exception>
 8219df7:	89 c2                	mov    %eax,%edx
 8219df9:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 8219dff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219e06:	00 
 8219e07:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219e0e:	08 
 8219e0f:	89 04 24             	mov    %eax,(%esp)
 8219e12:	e8 39 ae 50 00       	call   8724c50 <__cxa_throw>
 8219e17:	e8 8b 05 ec ff       	call   80da3a7 <_Z11G_GameWorldv>
 8219e1c:	89 04 24             	mov    %eax,(%esp)
 8219e1f:	e8 c4 86 f2 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 8219e24:	84 c0                	test   %al,%al
 8219e26:	75 11                	jne    8219e39 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x945>
 8219e28:	e8 7a 05 ec ff       	call   80da3a7 <_Z11G_GameWorldv>
 8219e2d:	89 04 24             	mov    %eax,(%esp)
 8219e30:	e8 e9 a5 01 00       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8219e35:	84 c0                	test   %al,%al
 8219e37:	74 07                	je     8219e40 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x94c>
 8219e39:	b8 01 00 00 00       	mov    $0x1,%eax
 8219e3e:	eb 05                	jmp    8219e45 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x951>
 8219e40:	b8 00 00 00 00       	mov    $0x0,%eax
 8219e45:	84 c0                	test   %al,%al
 8219e47:	74 2c                	je     8219e75 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x981>
 8219e49:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219e50:	e8 ab b9 50 00       	call   8725800 <__cxa_allocate_exception>
 8219e55:	89 c2                	mov    %eax,%edx
 8219e57:	c7 02 13 00 00 00    	movl   $0x13,(%edx)
 8219e5d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219e64:	00 
 8219e65:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219e6c:	08 
 8219e6d:	89 04 24             	mov    %eax,(%esp)
 8219e70:	e8 db ad 50 00       	call   8724c50 <__cxa_throw>
 8219e75:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8219e7c:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 8219e80:	0f b6 d0             	movzbl %al,%edx
 8219e83:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8219e88:	89 54 24 08          	mov    %edx,0x8(%esp)
 8219e8c:	8d 95 63 ff ff ff    	lea    -0x9d(%ebp),%edx
 8219e92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8219e96:	89 04 24             	mov    %eax,(%esp)
 8219e99:	e8 9e ad 01 00       	call   8234c3c <_ZNK14CItemAmplifier25enableInvestAmplifyOptionERK10Inven_Item29ENUM_ITEM_AMPLIFY_INVEST_TYPE>
 8219e9e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8219ea1:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8219ea5:	0f 95 c0             	setne  %al
 8219ea8:	84 c0                	test   %al,%al
 8219eaa:	74 2b                	je     8219ed7 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0x9e3>
 8219eac:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219eb3:	e8 48 b9 50 00       	call   8725800 <__cxa_allocate_exception>
 8219eb8:	89 c2                	mov    %eax,%edx
 8219eba:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8219ebd:	89 0a                	mov    %ecx,(%edx)
 8219ebf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219ec6:	00 
 8219ec7:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219ece:	08 
 8219ecf:	89 04 24             	mov    %eax,(%esp)
 8219ed2:	e8 79 ad 50 00       	call   8724c50 <__cxa_throw>
 8219ed7:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 8219edb:	3c 02                	cmp    $0x2,%al
 8219edd:	0f 85 98 00 00 00    	jne    8219f7b <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xa87>
 8219ee3:	e8 b3 22 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8219ee8:	8b 40 20             	mov    0x20(%eax),%eax
 8219eeb:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8219eee:	89 54 24 10          	mov    %edx,0x10(%esp)
 8219ef2:	8d 95 26 ff ff ff    	lea    -0xda(%ebp),%edx
 8219ef8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8219efc:	8d 95 63 ff ff ff    	lea    -0x9d(%ebp),%edx
 8219f02:	89 54 24 08          	mov    %edx,0x8(%esp)
 8219f06:	8b 55 0c             	mov    0xc(%ebp),%edx
 8219f09:	89 54 24 04          	mov    %edx,0x4(%esp)
 8219f0d:	89 04 24             	mov    %eax,(%esp)
 8219f10:	e8 23 10 33 00       	call   854af38 <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri>
 8219f15:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8219f18:	83 7d dc 15          	cmpl   $0x15,-0x24(%ebp)
 8219f1c:	75 2c                	jne    8219f4a <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xa56>
 8219f1e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219f25:	e8 d6 b8 50 00       	call   8725800 <__cxa_allocate_exception>
 8219f2a:	89 c2                	mov    %eax,%edx
 8219f2c:	c7 02 cb 00 00 00    	movl   $0xcb,(%edx)
 8219f32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219f39:	00 
 8219f3a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219f41:	08 
 8219f42:	89 04 24             	mov    %eax,(%esp)
 8219f45:	e8 06 ad 50 00       	call   8724c50 <__cxa_throw>
 8219f4a:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8219f4e:	74 2b                	je     8219f7b <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xa87>
 8219f50:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219f57:	e8 a4 b8 50 00       	call   8725800 <__cxa_allocate_exception>
 8219f5c:	89 c2                	mov    %eax,%edx
 8219f5e:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8219f61:	89 0a                	mov    %ecx,(%edx)
 8219f63:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219f6a:	00 
 8219f6b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219f72:	08 
 8219f73:	89 04 24             	mov    %eax,(%esp)
 8219f76:	e8 d5 ac 50 00       	call   8724c50 <__cxa_throw>
 8219f7b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8219f7e:	89 c6                	mov    %eax,%esi
 8219f80:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 8219f84:	0f b7 d8             	movzwl %ax,%ebx
 8219f87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8219f8a:	89 04 24             	mov    %eax,(%esp)
 8219f8d:	e8 fc 02 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8219f92:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8219f99:	00 
 8219f9a:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8219fa1:	00 
 8219fa2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8219fa6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8219faa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8219fb1:	00 
 8219fb2:	89 04 24             	mov    %eax,(%esp)
 8219fb5:	e8 52 a0 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8219fba:	83 f0 01             	xor    $0x1,%eax
 8219fbd:	84 c0                	test   %al,%al
 8219fbf:	74 2c                	je     8219fed <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xaf9>
 8219fc1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219fc8:	e8 33 b8 50 00       	call   8725800 <__cxa_allocate_exception>
 8219fcd:	89 c2                	mov    %eax,%edx
 8219fcf:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 8219fd5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219fdc:	00 
 8219fdd:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219fe4:	08 
 8219fe5:	89 04 24             	mov    %eax,(%esp)
 8219fe8:	e8 63 ac 50 00       	call   8724c50 <__cxa_throw>
 8219fed:	8b 85 65 ff ff ff    	mov    -0x9b(%ebp),%eax
 8219ff3:	89 c2                	mov    %eax,%edx
 8219ff5:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8219ffb:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8219ffe:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 821a004:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 821a00b:	00 
 821a00c:	89 54 24 08          	mov    %edx,0x8(%esp)
 821a010:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a014:	89 0c 24             	mov    %ecx,(%esp)
 821a017:	e8 60 cc 46 00       	call   8686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>
 821a01c:	eb 5b                	jmp    821a079 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xb85>
 821a01e:	83 fa 01             	cmp    $0x1,%edx
 821a021:	74 08                	je     821a02b <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xb37>
 821a023:	89 04 24             	mov    %eax,(%esp)
 821a026:	e8 25 97 8c 00       	call   8ae3750 <_Unwind_Resume>
 821a02b:	89 04 24             	mov    %eax,(%esp)
 821a02e:	e8 ad bc 50 00       	call   8725ce0 <__cxa_begin_catch>
 821a033:	8b 00                	mov    (%eax),%eax
 821a035:	89 45 e0             	mov    %eax,-0x20(%ebp)
 821a038:	8b 45 e0             	mov    -0x20(%ebp),%eax
 821a03b:	0f b6 c0             	movzbl %al,%eax
 821a03e:	89 44 24 08          	mov    %eax,0x8(%esp)
 821a042:	c7 44 24 04 d0 00 00 	movl   $0xd0,0x4(%esp)
 821a049:	00 
 821a04a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a04d:	89 04 24             	mov    %eax,(%esp)
 821a050:	e8 ed 1e 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a055:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a05a:	e8 d1 bb 50 00       	call   8725c30 <__cxa_end_catch>
 821a05f:	e9 a1 03 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 821a064:	89 d3                	mov    %edx,%ebx
 821a066:	89 c6                	mov    %eax,%esi
 821a068:	e8 c3 bb 50 00       	call   8725c30 <__cxa_end_catch>
 821a06d:	89 f0                	mov    %esi,%eax
 821a06f:	89 da                	mov    %ebx,%edx
 821a071:	89 04 24             	mov    %eax,(%esp)
 821a074:	e8 d7 96 8c 00       	call   8ae3750 <_Unwind_Resume>
 821a079:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 821a07e:	8d 55 b0             	lea    -0x50(%ebp),%edx
 821a081:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821a085:	8d 95 63 ff ff ff    	lea    -0x9d(%ebp),%edx
 821a08b:	89 54 24 08          	mov    %edx,0x8(%esp)
 821a08f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 821a092:	89 54 24 04          	mov    %edx,0x4(%esp)
 821a096:	89 04 24             	mov    %eax,(%esp)
 821a099:	e8 92 aa 01 00       	call   8234b30 <_ZNK14CItemAmplifier19investAmplifyOptionEPK5CItemR10Inven_ItemRK23stInvestAmplifyOption_t>
 821a09e:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 821a0a2:	3c 02                	cmp    $0x2,%al
 821a0a4:	75 6c                	jne    821a112 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xc1e>
 821a0a6:	8b 5d ac             	mov    -0x54(%ebp),%ebx
 821a0a9:	e8 ed 20 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821a0ae:	8b 40 20             	mov    0x20(%eax),%eax
 821a0b1:	8d 95 a5 fe ff ff    	lea    -0x15b(%ebp),%edx
 821a0b7:	89 54 24 14          	mov    %edx,0x14(%esp)
 821a0bb:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 821a0bf:	8d 95 26 ff ff ff    	lea    -0xda(%ebp),%edx
 821a0c5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821a0c9:	8d 95 63 ff ff ff    	lea    -0x9d(%ebp),%edx
 821a0cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 821a0d3:	8b 55 0c             	mov    0xc(%ebp),%edx
 821a0d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 821a0da:	89 04 24             	mov    %eax,(%esp)
 821a0dd:	e8 a8 0b 33 00       	call   854ac8a <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc>
 821a0e2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 821a0e5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 821a0e9:	74 27                	je     821a112 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xc1e>
 821a0eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 821a0ee:	0f b6 c0             	movzbl %al,%eax
 821a0f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 821a0f5:	c7 44 24 04 d0 00 00 	movl   $0xd0,0x4(%esp)
 821a0fc:	00 
 821a0fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a100:	89 04 24             	mov    %eax,(%esp)
 821a103:	e8 3a 1e 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821a108:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a10d:	e9 f3 02 00 00       	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 821a112:	0f b7 45 cc          	movzwl -0x34(%ebp),%eax
 821a116:	0f b7 d8             	movzwl %ax,%ebx
 821a119:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a11c:	89 04 24             	mov    %eax,(%esp)
 821a11f:	e8 6a 01 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 821a124:	8b 95 63 ff ff ff    	mov    -0x9d(%ebp),%edx
 821a12a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821a12e:	8b 95 67 ff ff ff    	mov    -0x99(%ebp),%edx
 821a134:	89 54 24 10          	mov    %edx,0x10(%esp)
 821a138:	8b 95 6b ff ff ff    	mov    -0x95(%ebp),%edx
 821a13e:	89 54 24 14          	mov    %edx,0x14(%esp)
 821a142:	8b 95 6f ff ff ff    	mov    -0x91(%ebp),%edx
 821a148:	89 54 24 18          	mov    %edx,0x18(%esp)
 821a14c:	8b 95 73 ff ff ff    	mov    -0x8d(%ebp),%edx
 821a152:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 821a156:	8b 95 77 ff ff ff    	mov    -0x89(%ebp),%edx
 821a15c:	89 54 24 20          	mov    %edx,0x20(%esp)
 821a160:	8b 95 7b ff ff ff    	mov    -0x85(%ebp),%edx
 821a166:	89 54 24 24          	mov    %edx,0x24(%esp)
 821a16a:	8b 95 7f ff ff ff    	mov    -0x81(%ebp),%edx
 821a170:	89 54 24 28          	mov    %edx,0x28(%esp)
 821a174:	8b 55 83             	mov    -0x7d(%ebp),%edx
 821a177:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 821a17b:	8b 55 87             	mov    -0x79(%ebp),%edx
 821a17e:	89 54 24 30          	mov    %edx,0x30(%esp)
 821a182:	8b 55 8b             	mov    -0x75(%ebp),%edx
 821a185:	89 54 24 34          	mov    %edx,0x34(%esp)
 821a189:	8b 55 8f             	mov    -0x71(%ebp),%edx
 821a18c:	89 54 24 38          	mov    %edx,0x38(%esp)
 821a190:	8b 55 93             	mov    -0x6d(%ebp),%edx
 821a193:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 821a197:	8b 55 97             	mov    -0x69(%ebp),%edx
 821a19a:	89 54 24 40          	mov    %edx,0x40(%esp)
 821a19e:	8b 55 9b             	mov    -0x65(%ebp),%edx
 821a1a1:	89 54 24 44          	mov    %edx,0x44(%esp)
 821a1a5:	0f b6 55 9f          	movzbl -0x61(%ebp),%edx
 821a1a9:	88 54 24 48          	mov    %dl,0x48(%esp)
 821a1ad:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821a1b1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821a1b8:	00 
 821a1b9:	89 04 24             	mov    %eax,(%esp)
 821a1bc:	e8 ed 5e 2e 00       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 821a1c1:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 821a1c5:	0f b7 d8             	movzwl %ax,%ebx
 821a1c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a1cb:	89 04 24             	mov    %eax,(%esp)
 821a1ce:	e8 ab 00 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821a1d3:	8d 95 58 fe ff ff    	lea    -0x1a8(%ebp),%edx
 821a1d9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821a1dd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821a1e4:	00 
 821a1e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a1e9:	89 14 24             	mov    %edx,(%esp)
 821a1ec:	e8 27 17 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 821a1f1:	83 ec 04             	sub    $0x4,%esp
 821a1f4:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 821a1fa:	89 85 26 ff ff ff    	mov    %eax,-0xda(%ebp)
 821a200:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 821a206:	89 85 2a ff ff ff    	mov    %eax,-0xd6(%ebp)
 821a20c:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 821a212:	89 85 2e ff ff ff    	mov    %eax,-0xd2(%ebp)
 821a218:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 821a21e:	89 85 32 ff ff ff    	mov    %eax,-0xce(%ebp)
 821a224:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 821a22a:	89 85 36 ff ff ff    	mov    %eax,-0xca(%ebp)
 821a230:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 821a236:	89 85 3a ff ff ff    	mov    %eax,-0xc6(%ebp)
 821a23c:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 821a242:	89 85 3e ff ff ff    	mov    %eax,-0xc2(%ebp)
 821a248:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 821a24e:	89 85 42 ff ff ff    	mov    %eax,-0xbe(%ebp)
 821a254:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 821a25a:	89 85 46 ff ff ff    	mov    %eax,-0xba(%ebp)
 821a260:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 821a266:	89 85 4a ff ff ff    	mov    %eax,-0xb6(%ebp)
 821a26c:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 821a272:	89 85 4e ff ff ff    	mov    %eax,-0xb2(%ebp)
 821a278:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 821a27e:	89 85 52 ff ff ff    	mov    %eax,-0xae(%ebp)
 821a284:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 821a28a:	89 85 56 ff ff ff    	mov    %eax,-0xaa(%ebp)
 821a290:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 821a296:	89 85 5a ff ff ff    	mov    %eax,-0xa6(%ebp)
 821a29c:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 821a2a2:	89 85 5e ff ff ff    	mov    %eax,-0xa2(%ebp)
 821a2a8:	0f b6 85 94 fe ff ff 	movzbl -0x16c(%ebp),%eax
 821a2af:	88 85 62 ff ff ff    	mov    %al,-0x9e(%ebp)
 821a2b5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a2b8:	89 04 24             	mov    %eax,(%esp)
 821a2bb:	e8 8c 3a 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821a2c0:	c7 44 24 08 d0 00 00 	movl   $0xd0,0x8(%esp)
 821a2c7:	00 
 821a2c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821a2cf:	00 
 821a2d0:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a2d3:	89 04 24             	mov    %eax,(%esp)
 821a2d6:	e8 21 16 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821a2db:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821a2e2:	00 
 821a2e3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a2e6:	89 04 24             	mov    %eax,(%esp)
 821a2e9:	e8 32 16 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821a2ee:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 821a2f2:	0f b6 c0             	movzbl %al,%eax
 821a2f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a2f9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a2fc:	89 04 24             	mov    %eax,(%esp)
 821a2ff:	e8 1c 16 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821a304:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 821a308:	0f b7 c0             	movzwl %ax,%eax
 821a30b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a30f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a312:	89 04 24             	mov    %eax,(%esp)
 821a315:	e8 8a fb eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821a31a:	8b 85 2d ff ff ff    	mov    -0xd3(%ebp),%eax
 821a320:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a324:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a327:	89 04 24             	mov    %eax,(%esp)
 821a32a:	e8 0d 16 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821a32f:	0f b7 45 cc          	movzwl -0x34(%ebp),%eax
 821a333:	0f b7 c0             	movzwl %ax,%eax
 821a336:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a33a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a33d:	89 04 24             	mov    %eax,(%esp)
 821a340:	e8 5f fb eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821a345:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 821a34b:	83 c0 11             	add    $0x11,%eax
 821a34e:	89 04 24             	mov    %eax,(%esp)
 821a351:	e8 dc 63 f3 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 821a356:	0f b6 c0             	movzbl %al,%eax
 821a359:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a35d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a360:	89 04 24             	mov    %eax,(%esp)
 821a363:	e8 b8 15 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821a368:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 821a36e:	83 c0 11             	add    $0x11,%eax
 821a371:	89 04 24             	mov    %eax,(%esp)
 821a374:	e8 f9 63 f3 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 821a379:	0f b7 c0             	movzwl %ax,%eax
 821a37c:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a380:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a383:	89 04 24             	mov    %eax,(%esp)
 821a386:	e8 19 fb eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821a38b:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 821a38f:	3c 02                	cmp    $0x2,%al
 821a391:	75 20                	jne    821a3b3 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xebf>
 821a393:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 821a399:	89 04 24             	mov    %eax,(%esp)
 821a39c:	e8 cb ac ed ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 821a3a1:	0f be c0             	movsbl %al,%eax
 821a3a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a3a8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a3ab:	89 04 24             	mov    %eax,(%esp)
 821a3ae:	e8 6d 15 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821a3b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821a3ba:	00 
 821a3bb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a3be:	89 04 24             	mov    %eax,(%esp)
 821a3c1:	e8 92 15 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821a3c6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a3c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 821a3cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 821a3d0:	89 04 24             	mov    %eax,(%esp)
 821a3d3:	e8 e2 e1 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821a3d8:	bb 00 00 00 00       	mov    $0x0,%ebx
 821a3dd:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a3e0:	89 04 24             	mov    %eax,(%esp)
 821a3e3:	e8 98 3a 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821a3e8:	eb 1b                	jmp    821a405 <_ZN34Dispatcher_InvestItemAmplifyOption12dispatch_sigEP5CUserR9PacketBuf+0xf11>
 821a3ea:	89 d3                	mov    %edx,%ebx
 821a3ec:	89 c6                	mov    %eax,%esi
 821a3ee:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821a3f1:	89 04 24             	mov    %eax,(%esp)
 821a3f4:	e8 87 3a 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821a3f9:	89 f0                	mov    %esi,%eax
 821a3fb:	89 da                	mov    %ebx,%edx
 821a3fd:	89 04 24             	mov    %eax,(%esp)
 821a400:	e8 4b 93 8c 00       	call   8ae3750 <_Unwind_Resume>
 821a405:	89 d8                	mov    %ebx,%eax
 821a407:	8d 65 f4             	lea    -0xc(%ebp),%esp
 821a40a:	83 c4 00             	add    $0x0,%esp
 821a40d:	5b                   	pop    %ebx
 821a40e:	5e                   	pop    %esi
 821a40f:	5f                   	pop    %edi
 821a410:	5d                   	pop    %ebp
 821a411:	c3                   	ret

```

```c
// Dispatcher_InvestItemAmplifyOption::dispatch_sig @ 0x82194f4

/* Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_InvestItemAmplifyOption::dispatch_sig
          (Dispatcher_InvestItemAmplifyOption *this,CUser *param_1,PacketBuf *param_2)

{
  ulong uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  undefined4 *puVar7;
  CItem *pCVar8;
  GameWorld *pGVar9;
  int *piVar10;
  CInventory *pCVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  bool bVar16;
  byte bVar17;
  undefined1 local_1ac [8];
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170;
  char local_15f;
  char local_15e [128];
  undefined2 local_de;
  undefined2 uStack_dc;
  undefined2 local_da;
  undefined1 uStack_d8;
  int iStack_d7;
  undefined1 uStack_d3;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined1 local_a2;
  undefined2 local_a1;
  undefined2 uStack_9f;
  undefined2 local_9d;
  undefined2 uStack_9b;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined1 local_65;
  PacketGuard local_64 [12];
  int local_58;
  uint local_54;
  int local_50;
  byte local_49;
  uint local_48;
  ulong local_44;
  ushort local_3e;
  ulong local_3c;
  ushort local_38;
  byte local_35 [5];
  CItem *local_30;
  CItem *local_2c;
  int local_28;
  uint local_20;
  
  bVar17 = 0;
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    uVar5 = LineFunc(0xcc82,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  local_35[0] = 0;
  local_38 = 0;
  local_3c = 0;
  local_3e = 0;
  local_44 = 0;
  cVar3 = PacketBuf::get_byte(param_2,local_35);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc89,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_short(param_2,&local_38);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc8a,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_item_idx(param_2,&local_3c);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc8b,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_short(param_2,&local_3e);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc8c,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  cVar3 = PacketBuf::get_item_idx(param_2,&local_44);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc8d,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  local_35[1] = 0x80;
  local_35[2] = 0;
  local_35[3] = 0;
  local_35[4] = 0;
  local_48 = 0;
  pcVar14 = &local_15f;
  uVar15 = 0x81;
  bVar16 = ((uint)pcVar14 & 1) != 0;
  if (bVar16) {
    local_15f = '\0';
    pcVar14 = local_15e;
    uVar15 = 0x80;
  }
  if (((uint)pcVar14 & 2) != 0) {
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14 = pcVar14 + 2;
    uVar15 = uVar15 - 2;
  }
  for (uVar13 = uVar15 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14[2] = '\0';
    pcVar14[3] = '\0';
    pcVar14 = pcVar14 + ((uint)bVar17 * -2 + 1) * 4;
  }
  if ((uVar15 & 2) != 0) {
    pcVar14[0] = '\0';
    pcVar14[1] = '\0';
    pcVar14 = pcVar14 + 2;
  }
  if (!bVar16) {
    *pcVar14 = '\0';
  }
  local_49 = 0;
  cVar3 = PacketBuf::get_byte(param_2,&local_49);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xcc97,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  if (4 < local_49) {
    uVar5 = LineFunc(0xcc99,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  if (local_35[0] == 2) {
    cVar3 = PacketBuf::get_int(param_2,&local_48);
    if (cVar3 != '\x01') {
      uVar5 = LineFunc(0xcca0,
                       "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
    cVar3 = PacketBuf::get_str(param_2,&local_15f,0x81,local_48);
    if (cVar3 != '\x01') {
      uVar5 = LineFunc(0xcca1,
                       "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar5;
    }
  }
  if (2 < local_35[0]) {
    uVar5 = LineFunc(0xcca6,
                     "virtual int Dispatcher_InvestItemAmplifyOption::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_a1);
  Inven_Item::Inven_Item((Inven_Item *)&local_de);
  stInvestAmplifyOption_t::stInvestAmplifyOption_t((stInvestAmplifyOption_t *)&local_54);
  uVar1 = local_3c;
  local_58 = 0;
  pCVar6 = (CDataManager *)G_CDataManager();
  local_30 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
                    /* try { // try from 082198cf to 0821a01b has its CatchHandler @ 0821a01e */
  cVar3 = CUser::CheckItemLock(param_1,1,(uint)local_38);
  if (cVar3 != '\0') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0xd5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  if (local_30 == (CItem *)0x0) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  uVar15 = (uint)local_38;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_1ac,iVar4);
  local_a1 = (undefined2)local_1ac._0_4_;
  uStack_9f = SUB42(local_1ac._0_4_,2);
  local_9d = (undefined2)local_1ac._4_4_;
  uStack_9b = SUB42(local_1ac._4_4_,2);
  local_99 = local_1a4;
  local_95 = local_1a0;
  local_91 = local_19c;
  local_8d = local_198;
  local_89 = local_194;
  local_85 = local_190;
  local_81 = local_18c;
  local_7d = local_188;
  local_79 = local_184;
  local_75 = local_180;
  local_71 = local_17c;
  local_6d = local_178;
  local_69 = local_174;
  local_65 = local_170;
  if (CONCAT22(local_9d,uStack_9f) != local_3c) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  uVar15 = (uint)local_3e;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_1ac,iVar4);
  local_de = (undefined2)local_1ac._0_4_;
  uStack_dc = SUB42(local_1ac._0_4_,2);
  local_da = (undefined2)local_1ac._4_4_;
  uStack_d8 = SUB41(local_1ac._4_4_,2);
  iStack_d7._1_3_ = (undefined3)local_1a4;
  iStack_d7 = CONCAT31(iStack_d7._1_3_,SUB41(local_1ac._4_4_,3));
  uStack_d3 = (undefined1)((uint)local_1a4 >> 0x18);
  local_d2 = local_1a0;
  local_ce = local_19c;
  local_ca = local_198;
  local_c6 = local_194;
  local_c2 = local_190;
  local_be = local_18c;
  local_ba = local_188;
  local_b6 = local_184;
  local_b2 = local_180;
  local_ae = local_17c;
  local_aa = local_178;
  local_a6 = local_174;
  local_a2 = local_170;
  if (CONCAT22(local_da,uStack_dc) != local_44) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar15);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  cVar3 = CItemAmplifier::checkInvestableItem
                    (GlobalData::s_itemAmplifier_,local_30,(Inven_Item *)&local_a1,iVar4);
  uVar1 = local_44;
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  pCVar6 = (CDataManager *)G_CDataManager();
  pCVar8 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
  local_2c = pCVar8;
  if (pCVar8 == (CItem *)0x0) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = CItem::IsEnableWorld(local_30);
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,pCVar8);
    *puVar7 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  pCVar8 = local_30;
  cVar3 = CItem::IsEnableWorld(local_2c);
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4,pCVar8);
    *puVar7 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = CItemAmplifier::getInvestMaterialInfo
                    (GlobalData::s_itemAmplifier_,local_35[0],local_44,&local_54);
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  if ((local_54 == 5) && (local_49 == 0)) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  if (local_49 != 0) {
    if (local_54 != 5) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    local_54 = (uint)local_49;
  }
  uVar15 = local_54;
  if ((local_54 == 0) || (iStack_d7 < local_50)) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  uVar13 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_91 + 1));
  if (uVar15 == (uVar13 & 0xff)) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsPVPChannel(pGVar9);
  if (cVar3 == '\0') {
    pGVar9 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar9);
    if (cVar3 == '\0') {
      bVar16 = false;
      goto LAB_08219e45;
    }
  }
  bVar16 = true;
LAB_08219e45:
  if (bVar16) {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  local_28 = 0;
  local_28 = CItemAmplifier::enableInvestAmplifyOption
                       (GlobalData::s_itemAmplifier_,&local_a1,local_35[0]);
  if (local_28 != 0) {
    piVar10 = (int *)__cxa_allocate_exception(4);
    *piVar10 = local_28;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar10,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = 0;
  if (local_35[0] == 2) {
    iVar4 = G_CDataManager();
    local_28 = WongWork::CItemUpgrade::enableAmplifyRandomUpgrade
                         (*(CItemUpgrade **)(iVar4 + 0x20),param_1,(Inven_Item *)&local_a1,
                          (Inven_Item *)&local_de,&local_58);
    if (local_28 == 0x15) {
      puVar7 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar7 = 0xcb;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
    }
    iVar4 = local_28;
    if (local_28 != 0) {
      piVar10 = (int *)__cxa_allocate_exception(4);
      *piVar10 = local_28;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(piVar10,&ENUM_ERROR::typeinfo,0);
    }
  }
  local_28 = iVar4;
  uVar2 = local_3e;
  pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  cVar3 = CInventory::delete_item(pCVar11,1,uVar2,local_50,3,1);
  if (cVar3 != '\x01') {
    puVar7 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar7 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&ENUM_ERROR::typeinfo,0);
  }
  cUserHistoryLog::apply_Item
            ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_da,uStack_dc),
             CONCAT22(local_9d,uStack_9f),2);
  CItemAmplifier::investAmplifyOption
            (GlobalData::s_itemAmplifier_,local_30,(Inven_Item *)&local_a1,
             (stInvestAmplifyOption_t *)&local_54);
  iVar4 = local_58;
  if (local_35[0] == 2) {
    iVar12 = G_CDataManager();
    local_20 = WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade
                         (*(CItemUpgrade **)(iVar12 + 0x20),param_1,(Inven_Item *)&local_a1,
                          (Inven_Item *)&local_de,iVar4,&local_15f);
    if (local_20 != 0) {
      CUser::SendCmdErrorPacket(param_1,0xd0,local_20 & 0xff);
      return 0;
    }
  }
  uVar2 = local_38;
  uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::update_item
            (uVar5,1,uVar2,CONCAT22(uStack_9f,local_a1),CONCAT22(uStack_9b,local_9d),local_99,
             local_95,local_91,local_8d,local_89,local_85,local_81,local_7d,local_79,local_75,
             local_71,local_6d,local_69,local_65);
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_1ac,iVar4);
  local_de = (undefined2)local_1ac._0_4_;
  uStack_dc = SUB42(local_1ac._0_4_,2);
  local_da = (undefined2)local_1ac._4_4_;
  uStack_d8 = SUB41(local_1ac._4_4_,2);
  iStack_d7._1_3_ = (undefined3)local_1a4;
  iStack_d7 = CONCAT31(iStack_d7._1_3_,SUB41(local_1ac._4_4_,3));
  uStack_d3 = (undefined1)((uint)local_1a4 >> 0x18);
  local_d2 = local_1a0;
  local_ce = local_19c;
  local_ca = local_198;
  local_c6 = local_194;
  local_c2 = local_190;
  local_be = local_18c;
  local_ba = local_188;
  local_b6 = local_184;
  local_b2 = local_180;
  local_ae = local_17c;
  local_aa = local_178;
  local_a6 = local_174;
  local_a2 = local_170;
  PacketGuard::PacketGuard(local_64);
                    /* try { // try from 0821a2d6 to 0821a3d7 has its CatchHandler @ 0821a3ea */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0xd0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,(uint)local_35[0]);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,(uint)local_3e);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,iStack_d7);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,(uint)local_38);
  uVar15 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_91 + 1));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,uVar15 & 0xff);
  uVar15 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((int)&local_91 + 1));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,uVar15 & 0xffff);
  if (local_35[0] == 2) {
    cVar3 = Inven_Item::GetUpgrade((Inven_Item *)&local_a1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,(int)cVar3);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
  CUser::Send(param_1,local_64);
  PacketGuard::~PacketGuard(local_64);
  return 0;
}

```

