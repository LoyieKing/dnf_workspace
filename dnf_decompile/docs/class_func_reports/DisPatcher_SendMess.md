# DisPatcher_SendMess

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f3540 DisPatcher_SendMess::dispatch_sig  [0x081f3540-0x81f4409] ===
 81f3540:	55                   	push   %ebp
 81f3541:	89 e5                	mov    %esp,%ebp
 81f3543:	57                   	push   %edi
 81f3544:	56                   	push   %esi
 81f3545:	53                   	push   %ebx
 81f3546:	81 ec 1c 03 00 00    	sub    $0x31c,%esp
 81f354c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f354f:	89 04 24             	mov    %eax,(%esp)
 81f3552:	e8 35 6e ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f3557:	83 f8 02             	cmp    $0x2,%eax
 81f355a:	0f 9e c0             	setle  %al
 81f355d:	84 c0                	test   %al,%al
 81f355f:	74 0a                	je     81f356b <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 81f3561:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3566:	e9 92 0e 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f356b:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f3571:	83 c0 0d             	add    $0xd,%eax
 81f3574:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3578:	8b 45 10             	mov    0x10(%ebp),%eax
 81f357b:	89 04 24             	mov    %eax,(%esp)
 81f357e:	e8 9f 99 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f3583:	83 f0 01             	xor    $0x1,%eax
 81f3586:	84 c0                	test   %al,%al
 81f3588:	74 2b                	je     81f35b5 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x75>
 81f358a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f3591:	00 
 81f3592:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f3599:	00 
 81f359a:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f35a1:	08 
 81f35a2:	c7 04 24 f5 7e 00 00 	movl   $0x7ef5,(%esp)
 81f35a9:	e8 29 d3 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f35ae:	89 c3                	mov    %eax,%ebx
 81f35b0:	e9 48 0e 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f35b5:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f35bb:	83 c0 0e             	add    $0xe,%eax
 81f35be:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f35c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81f35c5:	89 04 24             	mov    %eax,(%esp)
 81f35c8:	e8 e3 9a 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81f35cd:	83 f0 01             	xor    $0x1,%eax
 81f35d0:	84 c0                	test   %al,%al
 81f35d2:	74 2b                	je     81f35ff <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xbf>
 81f35d4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f35db:	00 
 81f35dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f35e3:	00 
 81f35e4:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f35eb:	08 
 81f35ec:	c7 04 24 f6 7e 00 00 	movl   $0x7ef6,(%esp)
 81f35f3:	e8 df d2 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f35f8:	89 c3                	mov    %eax,%ebx
 81f35fa:	e9 fe 0d 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f35ff:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f3605:	83 c0 10             	add    $0x10,%eax
 81f3608:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f360c:	8b 45 10             	mov    0x10(%ebp),%eax
 81f360f:	89 04 24             	mov    %eax,(%esp)
 81f3612:	e8 29 9c 39 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81f3617:	83 f0 01             	xor    $0x1,%eax
 81f361a:	84 c0                	test   %al,%al
 81f361c:	74 2b                	je     81f3649 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x109>
 81f361e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f3625:	00 
 81f3626:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f362d:	00 
 81f362e:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f3635:	08 
 81f3636:	c7 04 24 f7 7e 00 00 	movl   $0x7ef7,(%esp)
 81f363d:	e8 95 d2 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f3642:	89 c3                	mov    %eax,%ebx
 81f3644:	e9 b4 0d 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3649:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f364f:	83 c0 36             	add    $0x36,%eax
 81f3652:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3656:	8b 45 10             	mov    0x10(%ebp),%eax
 81f3659:	89 04 24             	mov    %eax,(%esp)
 81f365c:	e8 8f 9a 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f3661:	83 f0 01             	xor    $0x1,%eax
 81f3664:	84 c0                	test   %al,%al
 81f3666:	74 2b                	je     81f3693 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x153>
 81f3668:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f366f:	00 
 81f3670:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f3677:	00 
 81f3678:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f367f:	08 
 81f3680:	c7 04 24 f8 7e 00 00 	movl   $0x7ef8,(%esp)
 81f3687:	e8 4b d2 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f368c:	89 c3                	mov    %eax,%ebx
 81f368e:	e9 6a 0d 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3693:	8b 85 93 fe ff ff    	mov    -0x16d(%ebp),%eax
 81f3699:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f369d:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81f36a4:	00 
 81f36a5:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f36ab:	83 c0 3a             	add    $0x3a,%eax
 81f36ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f36b2:	8b 45 10             	mov    0x10(%ebp),%eax
 81f36b5:	89 04 24             	mov    %eax,(%esp)
 81f36b8:	e8 ff 9b 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81f36bd:	83 f0 01             	xor    $0x1,%eax
 81f36c0:	84 c0                	test   %al,%al
 81f36c2:	74 2b                	je     81f36ef <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x1af>
 81f36c4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f36cb:	00 
 81f36cc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f36d3:	00 
 81f36d4:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f36db:	08 
 81f36dc:	c7 04 24 f9 7e 00 00 	movl   $0x7ef9,(%esp)
 81f36e3:	e8 ef d1 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f36e8:	89 c3                	mov    %eax,%ebx
 81f36ea:	e9 0e 0d 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f36ef:	e8 a7 8a ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81f36f4:	8d 95 5d fe ff ff    	lea    -0x1a3(%ebp),%edx
 81f36fa:	83 c2 3a             	add    $0x3a,%edx
 81f36fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f3701:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f3704:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3708:	89 04 24             	mov    %eax,(%esp)
 81f370b:	e8 92 c4 16 00       	call   835fba2 <_ZN12CDataManager21rewriteUsableEmoticonERK5CUserPc>
 81f3710:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3713:	89 04 24             	mov    %eax,(%esp)
 81f3716:	e8 bf 6b ee ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 81f371b:	84 c0                	test   %al,%al
 81f371d:	74 30                	je     81f374f <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x20f>
 81f371f:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3726:	0f be c0             	movsbl %al,%eax
 81f3729:	83 f8 08             	cmp    $0x8,%eax
 81f372c:	77 16                	ja     81f3744 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x204>
 81f372e:	ba 01 00 00 00       	mov    $0x1,%edx
 81f3733:	89 d3                	mov    %edx,%ebx
 81f3735:	89 c1                	mov    %eax,%ecx
 81f3737:	d3 e3                	shl    %cl,%ebx
 81f3739:	89 d8                	mov    %ebx,%eax
 81f373b:	25 44 01 00 00       	and    $0x144,%eax
 81f3740:	85 c0                	test   %eax,%eax
 81f3742:	75 0a                	jne    81f374e <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x20e>
 81f3744:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3749:	e9 af 0c 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f374e:	90                   	nop
 81f374f:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3756:	3c 24                	cmp    $0x24,%al
 81f3758:	74 1a                	je     81f3774 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x234>
 81f375a:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3761:	3c 25                	cmp    $0x25,%al
 81f3763:	74 0f                	je     81f3774 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x234>
 81f3765:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f376c:	3c 26                	cmp    $0x26,%al
 81f376e:	0f 85 21 02 00 00    	jne    81f3995 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x455>
 81f3774:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f377a:	83 c0 14             	add    $0x14,%eax
 81f377d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3781:	8b 45 10             	mov    0x10(%ebp),%eax
 81f3784:	89 04 24             	mov    %eax,(%esp)
 81f3787:	e8 64 99 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f378c:	83 f0 01             	xor    $0x1,%eax
 81f378f:	84 c0                	test   %al,%al
 81f3791:	74 2b                	je     81f37be <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x27e>
 81f3793:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f379a:	00 
 81f379b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f37a2:	00 
 81f37a3:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f37aa:	08 
 81f37ab:	c7 04 24 4b 7f 00 00 	movl   $0x7f4b,(%esp)
 81f37b2:	e8 20 d1 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f37b7:	89 c3                	mov    %eax,%ebx
 81f37b9:	e9 3f 0c 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f37be:	8b 85 71 fe ff ff    	mov    -0x18f(%ebp),%eax
 81f37c4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f37c8:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81f37cf:	00 
 81f37d0:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f37d6:	83 c0 18             	add    $0x18,%eax
 81f37d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f37dd:	8b 45 10             	mov    0x10(%ebp),%eax
 81f37e0:	89 04 24             	mov    %eax,(%esp)
 81f37e3:	e8 d4 9a 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81f37e8:	83 f0 01             	xor    $0x1,%eax
 81f37eb:	84 c0                	test   %al,%al
 81f37ed:	74 2b                	je     81f381a <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x2da>
 81f37ef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f37f6:	00 
 81f37f7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f37fe:	00 
 81f37ff:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f3806:	08 
 81f3807:	c7 04 24 4d 7f 00 00 	movl   $0x7f4d,(%esp)
 81f380e:	e8 c4 d0 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f3813:	89 c3                	mov    %eax,%ebx
 81f3815:	e9 e3 0b 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f381a:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f3820:	05 3a 01 00 00       	add    $0x13a,%eax
 81f3825:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3829:	8b 45 10             	mov    0x10(%ebp),%eax
 81f382c:	89 04 24             	mov    %eax,(%esp)
 81f382f:	e8 ee 96 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f3834:	83 f0 01             	xor    $0x1,%eax
 81f3837:	84 c0                	test   %al,%al
 81f3839:	74 2b                	je     81f3866 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x326>
 81f383b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f3842:	00 
 81f3843:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f384a:	00 
 81f384b:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f3852:	08 
 81f3853:	c7 04 24 4f 7f 00 00 	movl   $0x7f4f,(%esp)
 81f385a:	e8 78 d0 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f385f:	89 c3                	mov    %eax,%ebx
 81f3861:	e9 97 0b 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3866:	8d 85 22 fd ff ff    	lea    -0x2de(%ebp),%eax
 81f386c:	89 04 24             	mov    %eax,(%esp)
 81f386f:	e8 72 80 03 00       	call   822b8e6 <_ZN33Packet_Monitor_Other_Channel_ChatC1Ev>
 81f3874:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f387b:	3c 24                	cmp    $0x24,%al
 81f387d:	75 0c                	jne    81f388b <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x34b>
 81f387f:	c7 85 2c fd ff ff 07 	movl   $0x7,-0x2d4(%ebp)
 81f3886:	00 00 00 
 81f3889:	eb 21                	jmp    81f38ac <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x36c>
 81f388b:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3892:	3c 25                	cmp    $0x25,%al
 81f3894:	75 0c                	jne    81f38a2 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x362>
 81f3896:	c7 85 2c fd ff ff 21 	movl   $0x21,-0x2d4(%ebp)
 81f389d:	00 00 00 
 81f38a0:	eb 0a                	jmp    81f38ac <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x36c>
 81f38a2:	c7 85 2c fd ff ff 01 	movl   $0x1,-0x2d4(%ebp)
 81f38a9:	00 00 00 
 81f38ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f38af:	89 04 24             	mov    %eax,(%esp)
 81f38b2:	e8 b7 6a ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81f38b7:	89 85 30 fd ff ff    	mov    %eax,-0x2d0(%ebp)
 81f38bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f38c0:	89 04 24             	mov    %eax,(%esp)
 81f38c3:	e8 86 83 ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81f38c8:	89 85 35 fd ff ff    	mov    %eax,-0x2cb(%ebp)
 81f38ce:	0f b6 45 97          	movzbl -0x69(%ebp),%eax
 81f38d2:	88 85 34 fd ff ff    	mov    %al,-0x2cc(%ebp)
 81f38d8:	8b 85 6d fe ff ff    	mov    -0x193(%ebp),%eax
 81f38de:	89 85 39 fd ff ff    	mov    %eax,-0x2c7(%ebp)
 81f38e4:	8b 85 71 fe ff ff    	mov    -0x18f(%ebp),%eax
 81f38ea:	88 85 3d fd ff ff    	mov    %al,-0x2c3(%ebp)
 81f38f0:	8b 85 93 fe ff ff    	mov    -0x16d(%ebp),%eax
 81f38f6:	88 85 5c fd ff ff    	mov    %al,-0x2a4(%ebp)
 81f38fc:	8b 85 71 fe ff ff    	mov    -0x18f(%ebp),%eax
 81f3902:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f3906:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f390c:	83 c0 18             	add    $0x18,%eax
 81f390f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3913:	8d 85 22 fd ff ff    	lea    -0x2de(%ebp),%eax
 81f3919:	83 c0 1c             	add    $0x1c,%eax
 81f391c:	89 04 24             	mov    %eax,(%esp)
 81f391f:	e8 7c 9f e8 ff       	call   807d8a0 <memcpy@plt>
 81f3924:	8b 85 93 fe ff ff    	mov    -0x16d(%ebp),%eax
 81f392a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f392e:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f3934:	83 c0 3a             	add    $0x3a,%eax
 81f3937:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f393b:	8d 85 22 fd ff ff    	lea    -0x2de(%ebp),%eax
 81f3941:	83 c0 3b             	add    $0x3b,%eax
 81f3944:	89 04 24             	mov    %eax,(%esp)
 81f3947:	e8 54 9f e8 ff       	call   807d8a0 <memcpy@plt>
 81f394c:	0f b6 85 5c fd ff ff 	movzbl -0x2a4(%ebp),%eax
 81f3953:	0f b6 c0             	movzbl %al,%eax
 81f3956:	83 c0 3b             	add    $0x3b,%eax
 81f3959:	66 89 85 24 fd ff ff 	mov    %ax,-0x2dc(%ebp)
 81f3960:	0f b7 85 24 fd ff ff 	movzwl -0x2dc(%ebp),%eax
 81f3967:	0f b7 c0             	movzwl %ax,%eax
 81f396a:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 81f396d:	8d 95 22 fd ff ff    	lea    -0x2de(%ebp),%edx
 81f3973:	a1 44 be 40 09       	mov    0x940be44,%eax
 81f3978:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 81f397b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81f397f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3983:	89 04 24             	mov    %eax,(%esp)
 81f3986:	e8 39 8e 27 00       	call   846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>
 81f398b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3990:	e9 68 0a 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3995:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f399c:	3c 07                	cmp    $0x7,%al
 81f399e:	74 1a                	je     81f39ba <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x47a>
 81f39a0:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f39a7:	3c 01                	cmp    $0x1,%al
 81f39a9:	74 0f                	je     81f39ba <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x47a>
 81f39ab:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f39b2:	3c 21                	cmp    $0x21,%al
 81f39b4:	0f 85 ee 02 00 00    	jne    81f3ca8 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x768>
 81f39ba:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f39c0:	83 c0 14             	add    $0x14,%eax
 81f39c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f39c7:	8b 45 10             	mov    0x10(%ebp),%eax
 81f39ca:	89 04 24             	mov    %eax,(%esp)
 81f39cd:	e8 1e 97 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f39d2:	83 f0 01             	xor    $0x1,%eax
 81f39d5:	84 c0                	test   %al,%al
 81f39d7:	74 2b                	je     81f3a04 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x4c4>
 81f39d9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f39e0:	00 
 81f39e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f39e8:	00 
 81f39e9:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f39f0:	08 
 81f39f1:	c7 04 24 71 7f 00 00 	movl   $0x7f71,(%esp)
 81f39f8:	e8 da ce 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f39fd:	89 c3                	mov    %eax,%ebx
 81f39ff:	e9 f9 09 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3a04:	8b 85 71 fe ff ff    	mov    -0x18f(%ebp),%eax
 81f3a0a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f3a0e:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81f3a15:	00 
 81f3a16:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f3a1c:	83 c0 18             	add    $0x18,%eax
 81f3a1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3a23:	8b 45 10             	mov    0x10(%ebp),%eax
 81f3a26:	89 04 24             	mov    %eax,(%esp)
 81f3a29:	e8 8e 98 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81f3a2e:	83 f0 01             	xor    $0x1,%eax
 81f3a31:	84 c0                	test   %al,%al
 81f3a33:	74 2b                	je     81f3a60 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x520>
 81f3a35:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f3a3c:	00 
 81f3a3d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f3a44:	00 
 81f3a45:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f3a4c:	08 
 81f3a4d:	c7 04 24 73 7f 00 00 	movl   $0x7f73,(%esp)
 81f3a54:	e8 7e ce 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f3a59:	89 c3                	mov    %eax,%ebx
 81f3a5b:	e9 9d 09 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3a60:	c6 45 a2 00          	movb   $0x0,-0x5e(%ebp)
 81f3a64:	8d 45 a2             	lea    -0x5e(%ebp),%eax
 81f3a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3a6b:	8b 45 10             	mov    0x10(%ebp),%eax
 81f3a6e:	89 04 24             	mov    %eax,(%esp)
 81f3a71:	e8 fa 94 39 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81f3a76:	83 f0 01             	xor    $0x1,%eax
 81f3a79:	84 c0                	test   %al,%al
 81f3a7b:	74 2b                	je     81f3aa8 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x568>
 81f3a7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f3a84:	00 
 81f3a85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f3a8c:	00 
 81f3a8d:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f3a94:	08 
 81f3a95:	c7 04 24 78 7f 00 00 	movl   $0x7f78,(%esp)
 81f3a9c:	e8 36 ce 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f3aa1:	89 c3                	mov    %eax,%ebx
 81f3aa3:	e9 55 09 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3aa8:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3aaf:	3c 07                	cmp    $0x7,%al
 81f3ab1:	0f 85 63 08 00 00    	jne    81f431a <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xdda>
 81f3ab7:	8d 85 22 fd ff ff    	lea    -0x2de(%ebp),%eax
 81f3abd:	89 04 24             	mov    %eax,(%esp)
 81f3ac0:	e8 21 7e 03 00       	call   822b8e6 <_ZN33Packet_Monitor_Other_Channel_ChatC1Ev>
 81f3ac5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3ac8:	89 04 24             	mov    %eax,(%esp)
 81f3acb:	e8 7e 81 ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81f3ad0:	89 85 35 fd ff ff    	mov    %eax,-0x2cb(%ebp)
 81f3ad6:	8b 85 71 fe ff ff    	mov    -0x18f(%ebp),%eax
 81f3adc:	88 85 3d fd ff ff    	mov    %al,-0x2c3(%ebp)
 81f3ae2:	8b 85 71 fe ff ff    	mov    -0x18f(%ebp),%eax
 81f3ae8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f3aec:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f3af2:	83 c0 18             	add    $0x18,%eax
 81f3af5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3af9:	8d 85 22 fd ff ff    	lea    -0x2de(%ebp),%eax
 81f3aff:	83 c0 1c             	add    $0x1c,%eax
 81f3b02:	89 04 24             	mov    %eax,(%esp)
 81f3b05:	e8 96 9d e8 ff       	call   807d8a0 <memcpy@plt>
 81f3b0a:	8b 85 93 fe ff ff    	mov    -0x16d(%ebp),%eax
 81f3b10:	88 85 5c fd ff ff    	mov    %al,-0x2a4(%ebp)
 81f3b16:	8b 85 93 fe ff ff    	mov    -0x16d(%ebp),%eax
 81f3b1c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f3b20:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 81f3b26:	83 c0 3a             	add    $0x3a,%eax
 81f3b29:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3b2d:	8d 85 22 fd ff ff    	lea    -0x2de(%ebp),%eax
 81f3b33:	83 c0 3b             	add    $0x3b,%eax
 81f3b36:	89 04 24             	mov    %eax,(%esp)
 81f3b39:	e8 62 9d e8 ff       	call   807d8a0 <memcpy@plt>
 81f3b3e:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 81f3b41:	89 04 24             	mov    %eax,(%esp)
 81f3b44:	e8 87 c5 4e 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81f3b49:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 81f3b4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f3b50:	8d 85 22 fd ff ff    	lea    -0x2de(%ebp),%eax
 81f3b56:	83 c0 3b             	add    $0x3b,%eax
 81f3b59:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3b5d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81f3b60:	89 04 24             	mov    %eax,(%esp)
 81f3b63:	e8 c8 3a 51 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81f3b68:	eb 1b                	jmp    81f3b85 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x645>
 81f3b6a:	89 d3                	mov    %edx,%ebx
 81f3b6c:	89 c6                	mov    %eax,%esi
 81f3b6e:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 81f3b71:	89 04 24             	mov    %eax,(%esp)
 81f3b74:	e8 77 c5 4e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81f3b79:	89 f0                	mov    %esi,%eax
 81f3b7b:	89 da                	mov    %ebx,%edx
 81f3b7d:	89 04 24             	mov    %eax,(%esp)
 81f3b80:	e8 cb fb 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f3b85:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 81f3b88:	89 04 24             	mov    %eax,(%esp)
 81f3b8b:	e8 60 c5 4e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81f3b90:	e8 6c 14 04 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81f3b95:	8d 55 98             	lea    -0x68(%ebp),%edx
 81f3b98:	8d 4d 9c             	lea    -0x64(%ebp),%ecx
 81f3b9b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81f3b9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3ba3:	89 14 24             	mov    %edx,(%esp)
 81f3ba6:	e8 c1 a8 43 00       	call   862e46c <_ZN16CSyncSlangFilter6FilterERKSs>
 81f3bab:	83 ec 04             	sub    $0x4,%esp
 81f3bae:	8d 45 98             	lea    -0x68(%ebp),%eax
 81f3bb1:	89 04 24             	mov    %eax,(%esp)
 81f3bb4:	e8 a7 2a 51 00       	call   8706660 <_ZNKSs4sizeEv>
 81f3bb9:	85 c0                	test   %eax,%eax
 81f3bbb:	0f 94 c0             	sete   %al
 81f3bbe:	84 c0                	test   %al,%al
 81f3bc0:	74 0a                	je     81f3bcc <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x68c>
 81f3bc2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3bc7:	e9 a4 00 00 00       	jmp    81f3c70 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x730>
 81f3bcc:	8d 45 98             	lea    -0x68(%ebp),%eax
 81f3bcf:	89 04 24             	mov    %eax,(%esp)
 81f3bd2:	e8 89 2a 51 00       	call   8706660 <_ZNKSs4sizeEv>
 81f3bd7:	89 c3                	mov    %eax,%ebx
 81f3bd9:	8d 45 98             	lea    -0x68(%ebp),%eax
 81f3bdc:	89 04 24             	mov    %eax,(%esp)
 81f3bdf:	e8 0c 29 51 00       	call   87064f0 <_ZNKSs5c_strEv>
 81f3be4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f3be8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3bec:	8d 85 22 fd ff ff    	lea    -0x2de(%ebp),%eax
 81f3bf2:	83 c0 3b             	add    $0x3b,%eax
 81f3bf5:	89 04 24             	mov    %eax,(%esp)
 81f3bf8:	e8 d3 9c e8 ff       	call   807d8d0 <strncpy@plt>
 81f3bfd:	0f b6 85 5c fd ff ff 	movzbl -0x2a4(%ebp),%eax
 81f3c04:	0f b6 c0             	movzbl %al,%eax
 81f3c07:	83 c0 3b             	add    $0x3b,%eax
 81f3c0a:	66 89 85 24 fd ff ff 	mov    %ax,-0x2dc(%ebp)
 81f3c11:	0f b7 85 24 fd ff ff 	movzwl -0x2dc(%ebp),%eax
 81f3c18:	0f b7 c0             	movzwl %ax,%eax
 81f3c1b:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81f3c1e:	8d 9d 22 fd ff ff    	lea    -0x2de(%ebp),%ebx
 81f3c24:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3c27:	89 04 24             	mov    %eax,(%esp)
 81f3c2a:	e8 61 80 ed ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81f3c2f:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81f3c35:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3c39:	89 14 24             	mov    %edx,(%esp)
 81f3c3c:	e8 49 e4 f1 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81f3c41:	8b 55 a8             	mov    -0x58(%ebp),%edx
 81f3c44:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f3c48:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f3c4c:	89 04 24             	mov    %eax,(%esp)
 81f3c4f:	e8 a0 d1 27 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 81f3c54:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3c59:	eb 15                	jmp    81f3c70 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x730>
 81f3c5b:	89 d3                	mov    %edx,%ebx
 81f3c5d:	89 c6                	mov    %eax,%esi
 81f3c5f:	8d 45 98             	lea    -0x68(%ebp),%eax
 81f3c62:	89 04 24             	mov    %eax,(%esp)
 81f3c65:	e8 76 3f 51 00       	call   8707be0 <_ZNSsD1Ev>
 81f3c6a:	89 f0                	mov    %esi,%eax
 81f3c6c:	89 da                	mov    %ebx,%edx
 81f3c6e:	eb 0d                	jmp    81f3c7d <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x73d>
 81f3c70:	8d 45 98             	lea    -0x68(%ebp),%eax
 81f3c73:	89 04 24             	mov    %eax,(%esp)
 81f3c76:	e8 65 3f 51 00       	call   8707be0 <_ZNSsD1Ev>
 81f3c7b:	eb 1b                	jmp    81f3c98 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x758>
 81f3c7d:	89 d3                	mov    %edx,%ebx
 81f3c7f:	89 c6                	mov    %eax,%esi
 81f3c81:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81f3c84:	89 04 24             	mov    %eax,(%esp)
 81f3c87:	e8 54 3f 51 00       	call   8707be0 <_ZNSsD1Ev>
 81f3c8c:	89 f0                	mov    %esi,%eax
 81f3c8e:	89 da                	mov    %ebx,%edx
 81f3c90:	89 04 24             	mov    %eax,(%esp)
 81f3c93:	e8 b8 fa 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f3c98:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81f3c9b:	89 04 24             	mov    %eax,(%esp)
 81f3c9e:	e8 3d 3f 51 00       	call   8707be0 <_ZNSsD1Ev>
 81f3ca3:	e9 55 07 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3ca8:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3caf:	3c 0b                	cmp    $0xb,%al
 81f3cb1:	74 1a                	je     81f3ccd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x78d>
 81f3cb3:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3cba:	3c 0c                	cmp    $0xc,%al
 81f3cbc:	74 0f                	je     81f3ccd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x78d>
 81f3cbe:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3cc5:	3c 23                	cmp    $0x23,%al
 81f3cc7:	0f 85 9e 01 00 00    	jne    81f3e6b <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x92b>
 81f3ccd:	0f b7 85 6b fe ff ff 	movzwl -0x195(%ebp),%eax
 81f3cd4:	0f b7 c0             	movzwl %ax,%eax
 81f3cd7:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81f3cda:	8b 85 6d fe ff ff    	mov    -0x193(%ebp),%eax
 81f3ce0:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81f3ce3:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81f3ce6:	89 04 24             	mov    %eax,(%esp)
 81f3ce9:	e8 57 3b f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f3cee:	89 c3                	mov    %eax,%ebx
 81f3cf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3cf3:	89 04 24             	mov    %eax,(%esp)
 81f3cf6:	e8 83 65 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f3cfb:	8b 55 b0             	mov    -0x50(%ebp),%edx
 81f3cfe:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f3d02:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f3d06:	89 04 24             	mov    %eax,(%esp)
 81f3d09:	e8 d0 84 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f3d0e:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81f3d11:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 81f3d15:	74 3f                	je     81f3d56 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x816>
 81f3d17:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f3d1a:	8b 40 02             	mov    0x2(%eax),%eax
 81f3d1d:	83 f8 24             	cmp    $0x24,%eax
 81f3d20:	74 59                	je     81f3d7b <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x83b>
 81f3d22:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f3d25:	8b 40 02             	mov    0x2(%eax),%eax
 81f3d28:	3d 82 03 00 00       	cmp    $0x382,%eax
 81f3d2d:	74 4c                	je     81f3d7b <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x83b>
 81f3d2f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f3d32:	8b 40 02             	mov    0x2(%eax),%eax
 81f3d35:	3d 50 d1 28 00       	cmp    $0x28d150,%eax
 81f3d3a:	74 3f                	je     81f3d7b <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x83b>
 81f3d3c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f3d3f:	8b 40 02             	mov    0x2(%eax),%eax
 81f3d42:	3d dd 90 20 29       	cmp    $0x292090dd,%eax
 81f3d47:	74 32                	je     81f3d7b <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x83b>
 81f3d49:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f3d4c:	8b 40 02             	mov    0x2(%eax),%eax
 81f3d4f:	3d 38 91 20 29       	cmp    $0x29209138,%eax
 81f3d54:	74 25                	je     81f3d7b <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x83b>
 81f3d56:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81f3d5d:	00 
 81f3d5e:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f3d65:	00 
 81f3d66:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3d69:	89 04 24             	mov    %eax,(%esp)
 81f3d6c:	e8 d1 81 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f3d71:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3d76:	e9 82 06 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3d7b:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81f3d80:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81f3d87:	00 
 81f3d88:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f3d8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3d8f:	89 04 24             	mov    %eax,(%esp)
 81f3d92:	e8 6b 4c 09 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81f3d97:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81f3d9a:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 81f3d9e:	74 27                	je     81f3dc7 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x887>
 81f3da0:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f3da3:	0f b6 c0             	movzbl %al,%eax
 81f3da6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f3daa:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f3db1:	00 
 81f3db2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3db5:	89 04 24             	mov    %eax,(%esp)
 81f3db8:	e8 85 81 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f3dbd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3dc2:	e9 36 06 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3dc7:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81f3dca:	89 04 24             	mov    %eax,(%esp)
 81f3dcd:	e8 73 3a f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f3dd2:	8b 55 b0             	mov    -0x50(%ebp),%edx
 81f3dd5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f3dd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3ddd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3de0:	89 04 24             	mov    %eax,(%esp)
 81f3de3:	e8 5a 2b 45 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81f3de8:	84 c0                	test   %al,%al
 81f3dea:	74 25                	je     81f3e11 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x8d1>
 81f3dec:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81f3df3:	00 
 81f3df4:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f3dfb:	00 
 81f3dfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3dff:	89 04 24             	mov    %eax,(%esp)
 81f3e02:	e8 3b 81 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f3e07:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3e0c:	e9 ec 05 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3e11:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81f3e14:	98                   	cwtl
 81f3e15:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 81f3e1c:	ff 
 81f3e1d:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 81f3e24:	ff 
 81f3e25:	8b 55 ac             	mov    -0x54(%ebp),%edx
 81f3e28:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f3e2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3e30:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3e33:	89 04 24             	mov    %eax,(%esp)
 81f3e36:	e8 73 a2 46 00       	call   865e0ae <_ZN5CUser13use_stackableEsiii>
 81f3e3b:	83 f0 01             	xor    $0x1,%eax
 81f3e3e:	84 c0                	test   %al,%al
 81f3e40:	0f 84 d7 04 00 00    	je     81f431d <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xddd>
 81f3e46:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81f3e4d:	00 
 81f3e4e:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f3e55:	00 
 81f3e56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3e59:	89 04 24             	mov    %eax,(%esp)
 81f3e5c:	e8 e1 80 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f3e61:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3e66:	e9 92 05 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3e6b:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3e72:	3c 0d                	cmp    $0xd,%al
 81f3e74:	74 0f                	je     81f3e85 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x945>
 81f3e76:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3e7d:	3c 0f                	cmp    $0xf,%al
 81f3e7f:	0f 85 be 01 00 00    	jne    81f4043 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xb03>
 81f3e85:	0f b7 85 6b fe ff ff 	movzwl -0x195(%ebp),%eax
 81f3e8c:	0f b7 c0             	movzwl %ax,%eax
 81f3e8f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81f3e92:	8b 85 6d fe ff ff    	mov    -0x193(%ebp),%eax
 81f3e98:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81f3e9b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f3e9e:	89 04 24             	mov    %eax,(%esp)
 81f3ea1:	e8 9f 39 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f3ea6:	89 c3                	mov    %eax,%ebx
 81f3ea8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3eab:	89 04 24             	mov    %eax,(%esp)
 81f3eae:	e8 cb 63 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f3eb3:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81f3eb6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f3eba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f3ebe:	89 04 24             	mov    %eax,(%esp)
 81f3ec1:	e8 18 83 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f3ec6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81f3ec9:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81f3ecd:	75 2b                	jne    81f3efa <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x9ba>
 81f3ecf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f3ed6:	00 
 81f3ed7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f3ede:	00 
 81f3edf:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f3ee6:	08 
 81f3ee7:	c7 04 24 20 80 00 00 	movl   $0x8020,(%esp)
 81f3eee:	e8 e4 c9 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f3ef3:	89 c3                	mov    %eax,%ebx
 81f3ef5:	e9 03 05 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3efa:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f3efd:	8b 40 02             	mov    0x2(%eax),%eax
 81f3f00:	83 f8 25             	cmp    $0x25,%eax
 81f3f03:	75 0b                	jne    81f3f10 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x9d0>
 81f3f05:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3f0c:	3c 0d                	cmp    $0xd,%al
 81f3f0e:	74 43                	je     81f3f53 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xa13>
 81f3f10:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f3f13:	8b 40 02             	mov    0x2(%eax),%eax
 81f3f16:	3d 2f 99 28 00       	cmp    $0x28992f,%eax
 81f3f1b:	75 0b                	jne    81f3f28 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0x9e8>
 81f3f1d:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f3f24:	3c 0f                	cmp    $0xf,%al
 81f3f26:	74 2b                	je     81f3f53 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xa13>
 81f3f28:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f3f2f:	00 
 81f3f30:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f3f37:	00 
 81f3f38:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f3f3f:	08 
 81f3f40:	c7 04 24 25 80 00 00 	movl   $0x8025,(%esp)
 81f3f47:	e8 8b c9 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f3f4c:	89 c3                	mov    %eax,%ebx
 81f3f4e:	e9 aa 04 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3f53:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81f3f58:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81f3f5f:	00 
 81f3f60:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f3f63:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3f67:	89 04 24             	mov    %eax,(%esp)
 81f3f6a:	e8 93 4a 09 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81f3f6f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81f3f72:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81f3f76:	74 27                	je     81f3f9f <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xa5f>
 81f3f78:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81f3f7b:	0f b6 c0             	movzbl %al,%eax
 81f3f7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f3f82:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f3f89:	00 
 81f3f8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3f8d:	89 04 24             	mov    %eax,(%esp)
 81f3f90:	e8 ad 7f 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f3f95:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3f9a:	e9 5e 04 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3f9f:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f3fa2:	89 04 24             	mov    %eax,(%esp)
 81f3fa5:	e8 9b 38 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f3faa:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81f3fad:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f3fb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3fb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3fb8:	89 04 24             	mov    %eax,(%esp)
 81f3fbb:	e8 82 29 45 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81f3fc0:	84 c0                	test   %al,%al
 81f3fc2:	74 25                	je     81f3fe9 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xaa9>
 81f3fc4:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81f3fcb:	00 
 81f3fcc:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f3fd3:	00 
 81f3fd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3fd7:	89 04 24             	mov    %eax,(%esp)
 81f3fda:	e8 63 7f 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f3fdf:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3fe4:	e9 14 04 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f3fe9:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f3fec:	98                   	cwtl
 81f3fed:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 81f3ff4:	ff 
 81f3ff5:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 81f3ffc:	ff 
 81f3ffd:	8b 55 bc             	mov    -0x44(%ebp),%edx
 81f4000:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f4004:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4008:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f400b:	89 04 24             	mov    %eax,(%esp)
 81f400e:	e8 9b a0 46 00       	call   865e0ae <_ZN5CUser13use_stackableEsiii>
 81f4013:	83 f0 01             	xor    $0x1,%eax
 81f4016:	84 c0                	test   %al,%al
 81f4018:	0f 84 02 03 00 00    	je     81f4320 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xde0>
 81f401e:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81f4025:	00 
 81f4026:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f402d:	00 
 81f402e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4031:	89 04 24             	mov    %eax,(%esp)
 81f4034:	e8 09 7f 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f4039:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f403e:	e9 ba 03 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f4043:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f404a:	3c 0e                	cmp    $0xe,%al
 81f404c:	0f 85 2b 01 00 00    	jne    81f417d <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xc3d>
 81f4052:	0f b7 85 6b fe ff ff 	movzwl -0x195(%ebp),%eax
 81f4059:	0f b7 c0             	movzwl %ax,%eax
 81f405c:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81f405f:	8b 85 6d fe ff ff    	mov    -0x193(%ebp),%eax
 81f4065:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81f4068:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81f406b:	89 04 24             	mov    %eax,(%esp)
 81f406e:	e8 d2 37 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f4073:	89 c3                	mov    %eax,%ebx
 81f4075:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4078:	89 04 24             	mov    %eax,(%esp)
 81f407b:	e8 fe 61 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f4080:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81f4083:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f4087:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f408b:	89 04 24             	mov    %eax,(%esp)
 81f408e:	e8 4b 81 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f4093:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81f4096:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81f409a:	74 0d                	je     81f40a9 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xb69>
 81f409c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f409f:	8b 40 02             	mov    0x2(%eax),%eax
 81f40a2:	3d 60 04 00 00       	cmp    $0x460,%eax
 81f40a7:	74 2b                	je     81f40d4 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xb94>
 81f40a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f40b0:	00 
 81f40b1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f40b8:	00 
 81f40b9:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f40c0:	08 
 81f40c1:	c7 04 24 53 80 00 00 	movl   $0x8053,(%esp)
 81f40c8:	e8 0a c8 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f40cd:	89 c3                	mov    %eax,%ebx
 81f40cf:	e9 29 03 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f40d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f40d7:	89 04 24             	mov    %eax,(%esp)
 81f40da:	e8 8f 62 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81f40df:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81f40e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f40e9:	89 14 24             	mov    %edx,(%esp)
 81f40ec:	e8 55 52 f1 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81f40f1:	83 f0 01             	xor    $0x1,%eax
 81f40f4:	84 c0                	test   %al,%al
 81f40f6:	74 2b                	je     81f4123 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xbe3>
 81f40f8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f40ff:	00 
 81f4100:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4107:	00 
 81f4108:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f410f:	08 
 81f4110:	c7 04 24 57 80 00 00 	movl   $0x8057,(%esp)
 81f4117:	e8 bb c7 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f411c:	89 c3                	mov    %eax,%ebx
 81f411e:	e9 da 02 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f4123:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f4126:	98                   	cwtl
 81f4127:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 81f412e:	ff 
 81f412f:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 81f4136:	ff 
 81f4137:	8b 55 cc             	mov    -0x34(%ebp),%edx
 81f413a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f413e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4142:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4145:	89 04 24             	mov    %eax,(%esp)
 81f4148:	e8 61 9f 46 00       	call   865e0ae <_ZN5CUser13use_stackableEsiii>
 81f414d:	83 f0 01             	xor    $0x1,%eax
 81f4150:	84 c0                	test   %al,%al
 81f4152:	0f 84 c9 01 00 00    	je     81f4321 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xde1>
 81f4158:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81f415f:	00 
 81f4160:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f4167:	00 
 81f4168:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f416b:	89 04 24             	mov    %eax,(%esp)
 81f416e:	e8 cf 7d 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f4173:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f4178:	e9 80 02 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f417d:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f4184:	3c 22                	cmp    $0x22,%al
 81f4186:	0f 85 95 01 00 00    	jne    81f4321 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xde1>
 81f418c:	0f b7 85 6b fe ff ff 	movzwl -0x195(%ebp),%eax
 81f4193:	0f b7 c0             	movzwl %ax,%eax
 81f4196:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81f4199:	8b 85 6d fe ff ff    	mov    -0x193(%ebp),%eax
 81f419f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81f41a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f41a5:	89 04 24             	mov    %eax,(%esp)
 81f41a8:	e8 df 61 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f41ad:	83 f8 03             	cmp    $0x3,%eax
 81f41b0:	0f 95 c0             	setne  %al
 81f41b3:	84 c0                	test   %al,%al
 81f41b5:	74 0a                	je     81f41c1 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xc81>
 81f41b7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f41bc:	e9 3c 02 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f41c1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f41c4:	89 04 24             	mov    %eax,(%esp)
 81f41c7:	e8 79 36 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f41cc:	89 c3                	mov    %eax,%ebx
 81f41ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f41d1:	89 04 24             	mov    %eax,(%esp)
 81f41d4:	e8 a5 60 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f41d9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81f41dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f41e0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f41e4:	89 04 24             	mov    %eax,(%esp)
 81f41e7:	e8 f2 7f 30 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81f41ec:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81f41ef:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81f41f3:	74 0d                	je     81f4202 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xcc2>
 81f41f5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81f41f8:	8b 40 02             	mov    0x2(%eax),%eax
 81f41fb:	3d 9e 1d 00 00       	cmp    $0x1d9e,%eax
 81f4200:	74 2b                	je     81f422d <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xced>
 81f4202:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4209:	00 
 81f420a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4211:	00 
 81f4212:	c7 44 24 04 a0 01 bd 	movl   $0x8bd01a0,0x4(%esp)
 81f4219:	08 
 81f421a:	c7 04 24 6a 80 00 00 	movl   $0x806a,(%esp)
 81f4221:	e8 b1 c6 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4226:	89 c3                	mov    %eax,%ebx
 81f4228:	e9 d0 01 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f422d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81f4230:	8b 40 02             	mov    0x2(%eax),%eax
 81f4233:	89 c3                	mov    %eax,%ebx
 81f4235:	e8 61 7f ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81f423a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f423e:	89 04 24             	mov    %eax,(%esp)
 81f4241:	e8 ec b7 16 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81f4246:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f4249:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81f424d:	75 25                	jne    81f4274 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xd34>
 81f424f:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81f4256:	00 
 81f4257:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f425e:	00 
 81f425f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4262:	89 04 24             	mov    %eax,(%esp)
 81f4265:	e8 d8 7c 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f426a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f426f:	e9 89 01 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f4274:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f4277:	89 04 24             	mov    %eax,(%esp)
 81f427a:	e8 7b d0 ef ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81f427f:	83 f0 01             	xor    $0x1,%eax
 81f4282:	84 c0                	test   %al,%al
 81f4284:	74 25                	je     81f42ab <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xd6b>
 81f4286:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81f428d:	00 
 81f428e:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f4295:	00 
 81f4296:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4299:	89 04 24             	mov    %eax,(%esp)
 81f429c:	e8 a1 7c 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f42a1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f42a6:	e9 52 01 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f42ab:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81f42ae:	89 04 24             	mov    %eax,(%esp)
 81f42b1:	e8 8f 35 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81f42b6:	89 c3                	mov    %eax,%ebx
 81f42b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f42bb:	89 04 24             	mov    %eax,(%esp)
 81f42be:	e8 cb 5f ee ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81f42c3:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81f42ca:	00 
 81f42cb:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81f42d2:	00 
 81f42d3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f42da:	00 
 81f42db:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81f42de:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f42e2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f42e6:	89 04 24             	mov    %eax,(%esp)
 81f42e9:	e8 1e fd 30 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81f42ee:	83 f0 01             	xor    $0x1,%eax
 81f42f1:	84 c0                	test   %al,%al
 81f42f3:	74 2c                	je     81f4321 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xde1>
 81f42f5:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81f42fc:	00 
 81f42fd:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81f4304:	00 
 81f4305:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4308:	89 04 24             	mov    %eax,(%esp)
 81f430b:	e8 32 7c 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f4310:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f4315:	e9 e3 00 00 00       	jmp    81f43fd <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xebd>
 81f431a:	90                   	nop
 81f431b:	eb 04                	jmp    81f4321 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xde1>
 81f431d:	90                   	nop
 81f431e:	eb 01                	jmp    81f4321 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xde1>
 81f4320:	90                   	nop
 81f4321:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4324:	89 04 24             	mov    %eax,(%esp)
 81f4327:	e8 42 60 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81f432c:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81f4332:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4336:	89 14 24             	mov    %edx,(%esp)
 81f4339:	e8 08 50 f1 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81f433e:	84 c0                	test   %al,%al
 81f4340:	74 2e                	je     81f4370 <_ZN19DisPatcher_SendMess12dispatch_sigEP5CUserR9PacketBuf+0xe30>
 81f4342:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f4349:	0f be d8             	movsbl %al,%ebx
 81f434c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f434f:	89 04 24             	mov    %eax,(%esp)
 81f4352:	e8 f7 78 ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81f4357:	8d 95 5d fe ff ff    	lea    -0x1a3(%ebp),%edx
 81f435d:	83 c2 3a             	add    $0x3a,%edx
 81f4360:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f4364:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f4368:	89 04 24             	mov    %eax,(%esp)
 81f436b:	e8 3a 83 24 00       	call   843c6aa <_ZN27DB_InsertPoliceSaveChatting11makeRequestEjcPc>
 81f4370:	8b 85 71 fe ff ff    	mov    -0x18f(%ebp),%eax
 81f4376:	89 85 10 fd ff ff    	mov    %eax,-0x2f0(%ebp)
 81f437c:	8b 95 93 fe ff ff    	mov    -0x16d(%ebp),%edx
 81f4382:	89 95 14 fd ff ff    	mov    %edx,-0x2ec(%ebp)
 81f4388:	8b bd 6d fe ff ff    	mov    -0x193(%ebp),%edi
 81f438e:	0f b7 85 6b fe ff ff 	movzwl -0x195(%ebp),%eax
 81f4395:	0f b7 f0             	movzwl %ax,%esi
 81f4398:	0f b6 85 6a fe ff ff 	movzbl -0x196(%ebp),%eax
 81f439f:	0f be d8             	movsbl %al,%ebx
 81f43a2:	e8 00 60 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f43a7:	c7 44 24 24 0c 00 00 	movl   $0xc,0x24(%esp)
 81f43ae:	00 
 81f43af:	8b 8d 10 fd ff ff    	mov    -0x2f0(%ebp),%ecx
 81f43b5:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81f43b9:	8d 95 5d fe ff ff    	lea    -0x1a3(%ebp),%edx
 81f43bf:	83 c2 18             	add    $0x18,%edx
 81f43c2:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81f43c6:	8b 95 14 fd ff ff    	mov    -0x2ec(%ebp),%edx
 81f43cc:	89 54 24 18          	mov    %edx,0x18(%esp)
 81f43d0:	8d 95 5d fe ff ff    	lea    -0x1a3(%ebp),%edx
 81f43d6:	83 c2 3a             	add    $0x3a,%edx
 81f43d9:	89 54 24 14          	mov    %edx,0x14(%esp)
 81f43dd:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81f43e1:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81f43e5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f43e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f43ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f43f0:	89 04 24             	mov    %eax,(%esp)
 81f43f3:	e8 66 53 4d 00       	call   86c975e <_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET>
 81f43f8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f43fd:	89 d8                	mov    %ebx,%eax
 81f43ff:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81f4402:	83 c4 00             	add    $0x0,%esp
 81f4405:	5b                   	pop    %ebx
 81f4406:	5e                   	pop    %esi
 81f4407:	5f                   	pop    %edi
 81f4408:	5d                   	pop    %ebp
 81f4409:	c3                   	ret

```

```c
// DisPatcher_SendMess::dispatch_sig @ 0x81f3540

/* DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SendMess::dispatch_sig(DisPatcher_SendMess *this,CUser *param_1,PacketBuf *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  size_t __n;
  char *__src;
  CMonitorServerProxy *this_00;
  CInventory *pCVar5;
  uint uVar6;
  GameWorld *pGVar7;
  undefined4 uVar8;
  Packet_Monitor_Other_Channel_Chat local_2e2 [2];
  ushort local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  char local_2d0;
  undefined4 local_2cf;
  uint local_2cb;
  undefined1 local_2c7;
  undefined1 auStack_2c6 [30];
  byte local_2a8;
  char acStack_2a7 [269];
  byte local_19a;
  ushort local_199;
  uint local_197;
  size_t local_193;
  char acStack_18f [30];
  size_t local_171;
  char acStack_16d [256];
  char local_6d;
  string local_6c;
  string local_68 [6];
  uchar local_62;
  allocator<char> local_61;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  CItem *local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    uVar8 = 0;
  }
  else {
    cVar2 = PacketBuf::get_byte(param_2,(char *)&local_19a);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_short(param_2,&local_199);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_int(param_2,&local_197);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_int(param_2,(int *)&local_171);
          if (cVar2 == '\x01') {
            cVar2 = PacketBuf::get_str(param_2,acStack_16d,0x100,local_171);
            if (cVar2 == '\x01') {
              pCVar4 = (CDataManager *)G_CDataManager();
              CDataManager::rewriteUsableEmoticon(pCVar4,param_1,acStack_16d);
              cVar2 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
              if ((cVar2 == '\0') || ((local_19a < 9 && ((1 << (local_19a & 0x1f) & 0x144U) != 0))))
              {
                if ((local_19a == 0x24) || ((local_19a == 0x25 || (local_19a == 0x26)))) {
                  cVar2 = PacketBuf::get_int(param_2,(int *)&local_193);
                  if (cVar2 == '\x01') {
                    cVar2 = PacketBuf::get_str(param_2,acStack_18f,0x1e,local_193);
                    if (cVar2 == '\x01') {
                      cVar2 = PacketBuf::get_byte(param_2,&local_6d);
                      if (cVar2 == '\x01') {
                        Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat
                                  (local_2e2);
                        if (local_19a == 0x24) {
                          local_2d8 = 7;
                        }
                        else if (local_19a == 0x25) {
                          local_2d8 = 0x21;
                        }
                        else {
                          local_2d8 = 1;
                        }
                        local_2d4 = CUser::get_acc_id(param_1);
                        local_2cf = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                        local_2d0 = local_6d;
                        local_2cb = local_197;
                        local_2c7 = (undefined1)local_193;
                        local_2a8 = (byte)local_171;
                        memcpy(auStack_2c6,acStack_18f,local_193);
                        memcpy(acStack_2a7,acStack_16d,local_171);
                        local_2e0 = local_2a8 + 0x3b;
                        local_60 = (uint)local_2e0;
                        CCommunityServerProxy::SendTcpPacket
                                  (GlobalData::s_community_proxy,(char *)local_2e2,local_60);
                        uVar8 = 0;
                      }
                      else {
                        uVar8 = LineFunc(0x7f4f,
                                         "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar8 = LineFunc(0x7f4d,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar8 = LineFunc(0x7f4b,
                                     "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  if (((local_19a == 7) || (local_19a == 1)) || (local_19a == 0x21)) {
                    cVar2 = PacketBuf::get_int(param_2,(int *)&local_193);
                    if (cVar2 != '\x01') {
                      uVar8 = LineFunc(0x7f71,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    cVar2 = PacketBuf::get_str(param_2,acStack_18f,0x1e,local_193);
                    if (cVar2 != '\x01') {
                      uVar8 = LineFunc(0x7f73,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    local_62 = '\0';
                    cVar2 = PacketBuf::get_byte(param_2,&local_62);
                    if (cVar2 != '\x01') {
                      uVar8 = LineFunc(0x7f78,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    if (local_19a == 7) {
                      Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat
                                (local_2e2);
                      local_2cf = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      local_2c7 = (undefined1)local_193;
                      memcpy(auStack_2c6,acStack_18f,local_193);
                      local_2a8 = (byte)local_171;
                      memcpy(acStack_2a7,acStack_16d,local_171);
                      std::allocator<char>::allocator();
                    /* try { // try from 081f3b63 to 081f3b67 has its CatchHandler @ 081f3b6a */
                      std::string::string(local_68,acStack_2a7,(allocator *)&local_61);
                      std::allocator<char>::~allocator(&local_61);
                    /* try { // try from 081f3b90 to 081f3baa has its CatchHandler @ 081f3c7d */
                      CSyncSlangFilter::GetInstance();
                      CSyncSlangFilter::Filter(&local_6c);
                    /* try { // try from 081f3bb4 to 081f3c53 has its CatchHandler @ 081f3c5b */
                      iVar3 = std::string::size((string *)&local_6c);
                      if (iVar3 != 0) {
                        __n = std::string::size((string *)&local_6c);
                        __src = (char *)std::string::c_str((string *)&local_6c);
                        strncpy(acStack_2a7,__src,__n);
                        local_2e0 = local_2a8 + 0x3b;
                        local_5c = (uint)local_2e0;
                        uVar8 = CUser::GetServerGroup(param_1);
                        this_00 = (CMonitorServerProxy *)
                                  CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                            (GlobalData::s_monitor_proxy_mgr,uVar8);
                        CMonitorServerProxy::SendPacket(this_00,(char *)local_2e2,local_5c);
                      }
                    /* try { // try from 081f3c76 to 081f3c7a has its CatchHandler @ 081f3c7d */
                      std::string::~string((string *)&local_6c);
                      std::string::~string(local_68);
                      return 0;
                    }
                  }
                  else if (((local_19a == 0xb) || (local_19a == 0xc)) || (local_19a == 0x23)) {
                    local_58 = (uint)local_199;
                    local_54 = local_197;
                    iVar3 = GetInvenTypeFromItemSpace(local_58);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    local_50 = CInventory::GetInvenRef(pCVar5,iVar3,local_54);
                    if ((local_50 == 0) ||
                       (((*(int *)(local_50 + 2) != 0x24 && (*(int *)(local_50 + 2) != 0x382)) &&
                        ((*(int *)(local_50 + 2) != 0x28d150 &&
                         ((*(int *)(local_50 + 2) != 0x292090dd &&
                          (*(int *)(local_50 + 2) != 0x29209138)))))))) {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                    local_4c = CSecu_ProtectionField::Check
                                         (GlobalData::s_pSecuProtectionField,param_1,0x24);
                    if (local_4c != 0) {
                      CUser::SendCmdErrorPacket(param_1,0x11,local_4c & 0xff);
                      return 0;
                    }
                    iVar3 = GetInvenTypeFromItemSpace(local_58);
                    cVar2 = CUser::CheckItemLock(param_1,iVar3,local_54);
                    if (cVar2 != '\0') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0xd5);
                      return 0;
                    }
                    cVar2 = CUser::use_stackable(param_1,(short)local_54,local_58,-1,-1);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                  }
                  else if ((local_19a == 0xd) || (local_19a == 0xf)) {
                    local_48 = (uint)local_199;
                    local_44 = local_197;
                    iVar3 = GetInvenTypeFromItemSpace(local_48);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    local_40 = CInventory::GetInvenRef(pCVar5,iVar3,local_44);
                    if (local_40 == 0) {
                      uVar8 = LineFunc(0x8020,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    if (((*(int *)(local_40 + 2) != 0x25) || (local_19a != 0xd)) &&
                       ((*(int *)(local_40 + 2) != 0x28992f || (local_19a != 0xf)))) {
                      uVar8 = LineFunc(0x8025,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    local_3c = CSecu_ProtectionField::Check
                                         (GlobalData::s_pSecuProtectionField,param_1,0x24);
                    if (local_3c != 0) {
                      CUser::SendCmdErrorPacket(param_1,0x11,local_3c & 0xff);
                      return 0;
                    }
                    iVar3 = GetInvenTypeFromItemSpace(local_48);
                    cVar2 = CUser::CheckItemLock(param_1,iVar3,local_44);
                    if (cVar2 != '\0') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0xd5);
                      return 0;
                    }
                    cVar2 = CUser::use_stackable(param_1,(short)local_44,local_48,-1,-1);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                  }
                  else if (local_19a == 0xe) {
                    local_38 = (uint)local_199;
                    local_34 = local_197;
                    iVar3 = GetInvenTypeFromItemSpace(local_38);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    local_30 = CInventory::GetInvenRef(pCVar5,iVar3,local_34);
                    if ((local_30 == 0) || (*(int *)(local_30 + 2) != 0x460)) {
                      uVar8 = LineFunc(0x8053,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    uVar6 = CUser::get_acc_id(param_1);
                    cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
                    if (cVar2 != '\x01') {
                      uVar8 = LineFunc(0x8057,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    cVar2 = CUser::use_stackable(param_1,(short)local_34,local_38,-1,-1);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                  }
                  else if (local_19a == 0x22) {
                    local_2c = (uint)local_199;
                    local_28 = local_197;
                    iVar3 = CUser::get_state(param_1);
                    if (iVar3 != 3) {
                      return 0;
                    }
                    iVar3 = GetInvenTypeFromItemSpace(local_2c);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    local_24 = CInventory::GetInvenRef(pCVar5,iVar3,local_28);
                    if ((local_24 == 0) || (*(int *)(local_24 + 2) != 0x1d9e)) {
                      uVar8 = LineFunc(0x806a,
                                       "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar8;
                    }
                    iVar3 = *(int *)(local_24 + 2);
                    pCVar4 = (CDataManager *)G_CDataManager();
                    local_20 = (CItem *)CDataManager::find_item(pCVar4,iVar3);
                    if (local_20 == (CItem *)0x0) {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                    cVar2 = CItem::is_stackable(local_20);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                    uVar8 = GetInvenTypeFromItemSpace(local_2c);
                    pCVar5 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    cVar2 = CInventory::delete_item(pCVar5,uVar8,local_28,1,3,1);
                    if (cVar2 != '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x11,0x11);
                      return 0;
                    }
                  }
                  uVar6 = CUser::get_acc_id(param_1);
                  cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar6);
                  bVar1 = local_19a;
                  if (cVar2 != '\0') {
                    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                    DB_InsertPoliceSaveChatting::makeRequest(uVar6,bVar1,acStack_16d);
                  }
                  pGVar7 = (GameWorld *)G_GameWorld();
                  GameWorld::send_chat_msg
                            (pGVar7,param_1,(int)(char)local_19a,local_199,local_197,acStack_16d,
                             local_171,acStack_18f,local_193,0xc);
                  uVar8 = 0;
                }
              }
              else {
                uVar8 = 0;
              }
            }
            else {
              uVar8 = LineFunc(0x7ef9,
                               "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",0
                               ,0);
            }
          }
          else {
            uVar8 = LineFunc(0x7ef8,
                             "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",0,0
                            );
          }
        }
        else {
          uVar8 = LineFunc(0x7ef7,
                           "virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",0,0);
        }
      }
      else {
        uVar8 = LineFunc(0x7ef6,"virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar8 = LineFunc(0x7ef5,"virtual int DisPatcher_SendMess::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar8;
}

```

