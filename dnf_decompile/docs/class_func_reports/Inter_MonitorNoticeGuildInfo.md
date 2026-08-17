# Inter_MonitorNoticeGuildInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cb726 Inter_MonitorNoticeGuildInfo::dispatch_sig  [0x084cb726-0x84cbb93] ===
 84cb726:	55                   	push   %ebp
 84cb727:	89 e5                	mov    %esp,%ebp
 84cb729:	56                   	push   %esi
 84cb72a:	53                   	push   %ebx
 84cb72b:	83 ec 50             	sub    $0x50,%esp
 84cb72e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb731:	89 04 24             	mov    %eax,(%esp)
 84cb734:	e8 53 ec c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cb739:	85 c0                	test   %eax,%eax
 84cb73b:	0f 94 c0             	sete   %al
 84cb73e:	84 c0                	test   %al,%al
 84cb740:	74 0a                	je     84cb74c <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x26>
 84cb742:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb747:	e9 3f 04 00 00       	jmp    84cbb8b <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x465>
 84cb74c:	8b 45 10             	mov    0x10(%ebp),%eax
 84cb74f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cb752:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cb759:	ff 
 84cb75a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb75d:	89 04 24             	mov    %eax,(%esp)
 84cb760:	e8 3b 28 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cb765:	89 c2                	mov    %eax,%edx
 84cb767:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb76a:	8b 40 0e             	mov    0xe(%eax),%eax
 84cb76d:	39 c2                	cmp    %eax,%edx
 84cb76f:	0f 95 c0             	setne  %al
 84cb772:	84 c0                	test   %al,%al
 84cb774:	74 57                	je     84cb7cd <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0xa7>
 84cb776:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb779:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cb77c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cb783:	ff 
 84cb784:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb787:	89 04 24             	mov    %eax,(%esp)
 84cb78a:	e8 11 28 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cb78f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cb793:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cb797:	c7 44 24 10 70 81 c8 	movl   $0x8c88170,0x10(%esp)
 84cb79e:	08 
 84cb79f:	c7 44 24 0c 13 26 00 	movl   $0x2613,0xc(%esp)
 84cb7a6:	00 
 84cb7a7:	c7 44 24 08 e0 d5 c8 	movl   $0x8c8d5e0,0x8(%esp)
 84cb7ae:	08 
 84cb7af:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cb7b6:	08 
 84cb7b7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cb7be:	e8 47 84 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cb7c3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cb7c8:	e9 be 03 00 00       	jmp    84cbb8b <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x465>
 84cb7cd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb7d0:	83 c0 16             	add    $0x16,%eax
 84cb7d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb7d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb7da:	89 04 24             	mov    %eax,(%esp)
 84cb7dd:	e8 5a 16 02 00       	call   84ece3c <_ZN5CUser14SetGuildDBInfoER17STGuildDBInfoOnly>
 84cb7e2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb7e5:	89 04 24             	mov    %eax,(%esp)
 84cb7e8:	e8 5f 25 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cb7ed:	c7 44 24 08 46 00 00 	movl   $0x46,0x8(%esp)
 84cb7f4:	00 
 84cb7f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb7fc:	00 
 84cb7fd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb800:	89 04 24             	mov    %eax,(%esp)
 84cb803:	e8 f4 00 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cb808:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb80b:	83 c0 16             	add    $0x16,%eax
 84cb80e:	89 04 24             	mov    %eax,(%esp)
 84cb811:	e8 9a 2b bb ff       	call   807e3b0 <strlen@plt>
 84cb816:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84cb819:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cb81c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb820:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb823:	89 04 24             	mov    %eax,(%esp)
 84cb826:	e8 11 01 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb82b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb82e:	8d 50 16             	lea    0x16(%eax),%edx
 84cb831:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cb834:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cb838:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cb83c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb83f:	89 04 24             	mov    %eax,(%esp)
 84cb842:	e8 9d bb ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cb847:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cb84e:	ff 
 84cb84f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb852:	89 04 24             	mov    %eax,(%esp)
 84cb855:	e8 46 27 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cb85a:	89 c2                	mov    %eax,%edx
 84cb85c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb85f:	8b 40 2d             	mov    0x2d(%eax),%eax
 84cb862:	39 c2                	cmp    %eax,%edx
 84cb864:	0f 94 c0             	sete   %al
 84cb867:	84 c0                	test   %al,%al
 84cb869:	74 15                	je     84cb880 <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x15a>
 84cb86b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cb872:	00 
 84cb873:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb876:	89 04 24             	mov    %eax,(%esp)
 84cb879:	e8 a2 00 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb87e:	eb 13                	jmp    84cb893 <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x16d>
 84cb880:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb887:	00 
 84cb888:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb88b:	89 04 24             	mov    %eax,(%esp)
 84cb88e:	e8 8d 00 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb893:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb896:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 84cb89a:	0f b6 c0             	movzbl %al,%eax
 84cb89d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb8a1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb8a4:	89 04 24             	mov    %eax,(%esp)
 84cb8a7:	e8 74 00 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb8ac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb8af:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 84cb8b3:	d0 e8                	shr    $1,%al
 84cb8b5:	83 e0 01             	and    $0x1,%eax
 84cb8b8:	0f b6 c0             	movzbl %al,%eax
 84cb8bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb8bf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb8c2:	89 04 24             	mov    %eax,(%esp)
 84cb8c5:	e8 56 00 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb8ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb8cd:	0f b7 40 38          	movzwl 0x38(%eax),%eax
 84cb8d1:	0f b7 c0             	movzwl %ax,%eax
 84cb8d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb8d8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb8db:	89 04 24             	mov    %eax,(%esp)
 84cb8de:	e8 c1 e5 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84cb8e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb8e6:	89 04 24             	mov    %eax,(%esp)
 84cb8e9:	e8 7e 3c d6 ff       	call   822f56c <_ZN15CUserCharacInfo22get_guild_create_rightEv>
 84cb8ee:	0f b6 c0             	movzbl %al,%eax
 84cb8f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb8f5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb8f8:	89 04 24             	mov    %eax,(%esp)
 84cb8fb:	e8 20 00 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb900:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb903:	8b 40 3a             	mov    0x3a(%eax),%eax
 84cb906:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb90a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb90d:	89 04 24             	mov    %eax,(%esp)
 84cb910:	e8 27 00 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb915:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb918:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 84cb91c:	0f b6 c0             	movzbl %al,%eax
 84cb91f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb923:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb926:	89 04 24             	mov    %eax,(%esp)
 84cb929:	e8 f2 ff bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb92e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb931:	8b 40 3f             	mov    0x3f(%eax),%eax
 84cb934:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb938:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb93b:	89 04 24             	mov    %eax,(%esp)
 84cb93e:	e8 f9 ff bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cb943:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cb946:	0f b7 40 58          	movzwl 0x58(%eax),%eax
 84cb94a:	0f b7 c0             	movzwl %ax,%eax
 84cb94d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb951:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb954:	89 04 24             	mov    %eax,(%esp)
 84cb957:	e8 48 e5 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84cb95c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb95f:	89 04 24             	mov    %eax,(%esp)
 84cb962:	e8 e5 51 c4 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84cb967:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84cb96a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84cb971:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cb978:	00 
 84cb979:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb97c:	89 04 24             	mov    %eax,(%esp)
 84cb97f:	e8 9c ff bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cb984:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84cb98b:	e9 a0 00 00 00       	jmp    84cba30 <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x30a>
 84cb990:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb993:	89 04 24             	mov    %eax,(%esp)
 84cb996:	e8 ad 3b d6 ff       	call   822f548 <_ZN15CUserCharacInfo19getGuildMemberGradeEv>
 84cb99b:	84 c0                	test   %al,%al
 84cb99d:	74 33                	je     84cb9d2 <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x2ac>
 84cb99f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cb9a2:	89 04 24             	mov    %eax,(%esp)
 84cb9a5:	e8 9e 3b d6 ff       	call   822f548 <_ZN15CUserCharacInfo19getGuildMemberGradeEv>
 84cb9aa:	84 c0                	test   %al,%al
 84cb9ac:	74 24                	je     84cb9d2 <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x2ac>
 84cb9ae:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cb9b1:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84cb9b4:	89 d0                	mov    %edx,%eax
 84cb9b6:	c1 e0 02             	shl    $0x2,%eax
 84cb9b9:	01 d0                	add    %edx,%eax
 84cb9bb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84cb9be:	83 c0 50             	add    $0x50,%eax
 84cb9c1:	8b 40 0b             	mov    0xb(%eax),%eax
 84cb9c4:	3d c7 00 00 00       	cmp    $0xc7,%eax
 84cb9c9:	7e 07                	jle    84cb9d2 <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x2ac>
 84cb9cb:	b8 01 00 00 00       	mov    $0x1,%eax
 84cb9d0:	eb 05                	jmp    84cb9d7 <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x2b1>
 84cb9d2:	b8 00 00 00 00       	mov    $0x0,%eax
 84cb9d7:	84 c0                	test   %al,%al
 84cb9d9:	74 51                	je     84cba2c <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x306>
 84cb9db:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cb9de:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84cb9e1:	89 d0                	mov    %edx,%eax
 84cb9e3:	c1 e0 02             	shl    $0x2,%eax
 84cb9e6:	01 d0                	add    %edx,%eax
 84cb9e8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84cb9eb:	83 c0 50             	add    $0x50,%eax
 84cb9ee:	8b 40 0b             	mov    0xb(%eax),%eax
 84cb9f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cb9f5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cb9f8:	89 04 24             	mov    %eax,(%esp)
 84cb9fb:	e8 3c ff bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cba00:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cba03:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84cba06:	89 d0                	mov    %edx,%eax
 84cba08:	c1 e0 02             	shl    $0x2,%eax
 84cba0b:	01 d0                	add    %edx,%eax
 84cba0d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84cba10:	83 c0 5f             	add    $0x5f,%eax
 84cba13:	0f b6 00             	movzbl (%eax),%eax
 84cba16:	0f be c0             	movsbl %al,%eax
 84cba19:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cba1d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cba20:	89 04 24             	mov    %eax,(%esp)
 84cba23:	e8 f8 fe bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cba28:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84cba2c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84cba30:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cba33:	0f b6 40 5a          	movzbl 0x5a(%eax),%eax
 84cba37:	0f b6 c0             	movzbl %al,%eax
 84cba3a:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84cba3d:	0f 9f c0             	setg   %al
 84cba40:	84 c0                	test   %al,%al
 84cba42:	0f 85 48 ff ff ff    	jne    84cb990 <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x26a>
 84cba48:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cba4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cba4f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cba52:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cba56:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cba59:	89 04 24             	mov    %eax,(%esp)
 84cba5c:	e8 c7 50 c4 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 84cba61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cba64:	05 d4 00 00 00       	add    $0xd4,%eax
 84cba69:	89 04 24             	mov    %eax,(%esp)
 84cba6c:	e8 3f 29 bb ff       	call   807e3b0 <strlen@plt>
 84cba71:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cba74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cba77:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cba7b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cba7e:	89 04 24             	mov    %eax,(%esp)
 84cba81:	e8 b6 fe bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cba86:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cba89:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 84cba8f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cba92:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cba96:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cba9a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cba9d:	89 04 24             	mov    %eax,(%esp)
 84cbaa0:	e8 3f b9 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cbaa5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cbaa8:	0f b6 80 ab 00 00 00 	movzbl 0xab(%eax),%eax
 84cbaaf:	0f b6 c0             	movzbl %al,%eax
 84cbab2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbab6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbab9:	89 04 24             	mov    %eax,(%esp)
 84cbabc:	e8 5f fe bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cbac1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cbac4:	0f b6 80 b5 00 00 00 	movzbl 0xb5(%eax),%eax
 84cbacb:	0f b6 c0             	movzbl %al,%eax
 84cbace:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbad2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbad5:	89 04 24             	mov    %eax,(%esp)
 84cbad8:	e8 43 fe bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cbadd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cbae0:	8b 80 b6 00 00 00    	mov    0xb6(%eax),%eax
 84cbae6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbaea:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbaed:	89 04 24             	mov    %eax,(%esp)
 84cbaf0:	e8 47 fe bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cbaf5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cbaf8:	05 ba 00 00 00       	add    $0xba,%eax
 84cbafd:	89 04 24             	mov    %eax,(%esp)
 84cbb00:	e8 ab 28 bb ff       	call   807e3b0 <strlen@plt>
 84cbb05:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84cbb08:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cbb0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbb0f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbb12:	89 04 24             	mov    %eax,(%esp)
 84cbb15:	e8 22 fe bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cbb1a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cbb1d:	8d 90 ba 00 00 00    	lea    0xba(%eax),%edx
 84cbb23:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cbb26:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cbb2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cbb2e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbb31:	89 04 24             	mov    %eax,(%esp)
 84cbb34:	e8 ab b8 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cbb39:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cbb40:	00 
 84cbb41:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbb44:	89 04 24             	mov    %eax,(%esp)
 84cbb47:	e8 0c fe bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cbb4c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbb4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbb53:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbb56:	89 04 24             	mov    %eax,(%esp)
 84cbb59:	e8 5c ca 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cbb5e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cbb63:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbb66:	89 04 24             	mov    %eax,(%esp)
 84cbb69:	e8 12 23 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cbb6e:	eb 1b                	jmp    84cbb8b <_ZN28Inter_MonitorNoticeGuildInfo12dispatch_sigEP5CUserPci+0x465>
 84cbb70:	89 d3                	mov    %edx,%ebx
 84cbb72:	89 c6                	mov    %eax,%esi
 84cbb74:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cbb77:	89 04 24             	mov    %eax,(%esp)
 84cbb7a:	e8 01 23 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cbb7f:	89 f0                	mov    %esi,%eax
 84cbb81:	89 da                	mov    %ebx,%edx
 84cbb83:	89 04 24             	mov    %eax,(%esp)
 84cbb86:	e8 c5 7b 61 00       	call   8ae3750 <_Unwind_Resume>
 84cbb8b:	89 d8                	mov    %ebx,%eax
 84cbb8d:	83 c4 50             	add    $0x50,%esp
 84cbb90:	5b                   	pop    %ebx
 84cbb91:	5e                   	pop    %esi
 84cbb92:	5d                   	pop    %ebp
 84cbb93:	c3                   	ret

```

```c
// Inter_MonitorNoticeGuildInfo::dispatch_sig @ 0x84cb726

/* Inter_MonitorNoticeGuildInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_30;
  PacketGuard local_2c [12];
  int local_20;
  size_t local_1c;
  int local_18;
  size_t local_14;
  int local_10;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 != 0) {
    local_20 = param_3;
    iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar4 == *(int *)(local_20 + 0xe)) {
      CUser::SetGuildDBInfo((CUser *)param_2,(STGuildDBInfoOnly *)(local_20 + 0x16));
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084cb803 to 084cbb5d has its CatchHandler @ 084cbb70 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x46);
      local_1c = strlen((char *)(local_20 + 0x16));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0x16),local_1c)
      ;
      iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar4 == *(int *)(local_20 + 0x2d)) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0x31));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_2c,(uint)(*(byte *)(local_20 + 0x32) >> 1 & 1));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_2c,(uint)*(ushort *)(local_20 + 0x38));
      uVar6 = CUserCharacInfo::get_guild_create_right((CUserCharacInfo *)param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,uVar6 & 0xff);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0x3a));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0x3e));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0x3f));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_2c,(uint)*(ushort *)(local_20 + 0x58));
      local_30 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_2c);
      local_18 = 0;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_20 + 0x5a); local_10 = local_10 + 1)
      {
        cVar3 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)param_2);
        if (((cVar3 == '\0') ||
            (cVar3 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)param_2), cVar3 == '\0'
            )) || (*(int *)(local_20 + local_10 * 5 + 0x5b) < 200)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_2c,*(int *)(local_20 + local_10 * 5 + 0x5b));
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_2c,(int)*(char *)(local_20 + local_10 * 5 + 0x5f));
          local_18 = local_18 + 1;
        }
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,&local_30,local_18);
      local_14 = strlen((char *)(local_20 + 0xd4));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0xd4),local_14)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0xab));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(uint)*(byte *)(local_20 + 0xb5));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0xb6));
      local_1c = strlen((char *)(local_20 + 0xba));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,(char *)(local_20 + 0xba),local_1c)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      uVar1 = *(undefined4 *)(local_20 + 0xe);
      uVar5 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildInfo::dispatch_sig(CUser*, char*, int)",0x2613
                 ,
                 "Inter_MonitorNoticeGuildInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar5,uVar1);
    }
  }
  return 0;
}

```

