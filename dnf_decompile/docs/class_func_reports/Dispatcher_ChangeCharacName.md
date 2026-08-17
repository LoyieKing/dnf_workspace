# Dispatcher_ChangeCharacName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08205898 Dispatcher_ChangeCharacName::dispatch_sig  [0x08205898-0x8205f67] ===
 8205898:	55                   	push   %ebp
 8205899:	89 e5                	mov    %esp,%ebp
 820589b:	57                   	push   %edi
 820589c:	56                   	push   %esi
 820589d:	53                   	push   %ebx
 820589e:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 82058a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82058a7:	89 04 24             	mov    %eax,(%esp)
 82058aa:	e8 dd 4a ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82058af:	83 f8 02             	cmp    $0x2,%eax
 82058b2:	0f 95 c0             	setne  %al
 82058b5:	84 c0                	test   %al,%al
 82058b7:	74 29                	je     82058e2 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x4a>
 82058b9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82058c0:	00 
 82058c1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82058c8:	00 
 82058c9:	c7 44 24 04 60 ed bc 	movl   $0x8bced60,0x4(%esp)
 82058d0:	08 
 82058d1:	c7 04 24 b3 9e 00 00 	movl   $0x9eb3,(%esp)
 82058d8:	e8 fa af 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82058dd:	e9 7a 06 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 82058e2:	c6 45 9b 00          	movb   $0x0,-0x65(%ebp)
 82058e6:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 82058ed:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 82058f4:	8d 85 72 ff ff ff    	lea    -0x8e(%ebp),%eax
 82058fa:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 82058ff:	ba 00 00 00 00       	mov    $0x0,%edx
 8205904:	89 c1                	mov    %eax,%ecx
 8205906:	83 e1 02             	and    $0x2,%ecx
 8205909:	85 c9                	test   %ecx,%ecx
 820590b:	74 09                	je     8205916 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x7e>
 820590d:	66 89 10             	mov    %dx,(%eax)
 8205910:	83 c0 02             	add    $0x2,%eax
 8205913:	83 eb 02             	sub    $0x2,%ebx
 8205916:	89 de                	mov    %ebx,%esi
 8205918:	83 e6 fc             	and    $0xfffffffc,%esi
 820591b:	b9 00 00 00 00       	mov    $0x0,%ecx
 8205920:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 8205923:	83 c1 04             	add    $0x4,%ecx
 8205926:	39 f1                	cmp    %esi,%ecx
 8205928:	72 f6                	jb     8205920 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x88>
 820592a:	01 c8                	add    %ecx,%eax
 820592c:	89 d9                	mov    %ebx,%ecx
 820592e:	83 e1 02             	and    $0x2,%ecx
 8205931:	85 c9                	test   %ecx,%ecx
 8205933:	74 06                	je     820593b <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0xa3>
 8205935:	66 89 10             	mov    %dx,(%eax)
 8205938:	83 c0 02             	add    $0x2,%eax
 820593b:	89 d9                	mov    %ebx,%ecx
 820593d:	83 e1 01             	and    $0x1,%ecx
 8205940:	85 c9                	test   %ecx,%ecx
 8205942:	74 05                	je     8205949 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0xb1>
 8205944:	88 10                	mov    %dl,(%eax)
 8205946:	83 c0 01             	add    $0x1,%eax
 8205949:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 820594f:	b9 00 00 00 00       	mov    $0x0,%ecx
 8205954:	ba 1e 00 00 00       	mov    $0x1e,%edx
 8205959:	89 d3                	mov    %edx,%ebx
 820595b:	83 e3 fc             	and    $0xfffffffc,%ebx
 820595e:	ba 00 00 00 00       	mov    $0x0,%edx
 8205963:	89 0c 10             	mov    %ecx,(%eax,%edx,1)
 8205966:	83 c2 04             	add    $0x4,%edx
 8205969:	39 da                	cmp    %ebx,%edx
 820596b:	72 f6                	jb     8205963 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0xcb>
 820596d:	01 d0                	add    %edx,%eax
 820596f:	66 89 08             	mov    %cx,(%eax)
 8205972:	83 c0 02             	add    $0x2,%eax
 8205975:	8d 45 9b             	lea    -0x65(%ebp),%eax
 8205978:	89 44 24 04          	mov    %eax,0x4(%esp)
 820597c:	8b 45 10             	mov    0x10(%ebp),%eax
 820597f:	89 04 24             	mov    %eax,(%esp)
 8205982:	e8 e9 75 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8205987:	83 f0 01             	xor    $0x1,%eax
 820598a:	84 c0                	test   %al,%al
 820598c:	74 25                	je     82059b3 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x11b>
 820598e:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8205995:	00 
 8205996:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 820599d:	00 
 820599e:	8b 45 0c             	mov    0xc(%ebp),%eax
 82059a1:	89 04 24             	mov    %eax,(%esp)
 82059a4:	e8 99 65 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82059a9:	b8 00 00 00 00       	mov    $0x0,%eax
 82059ae:	e9 a9 05 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 82059b3:	8d 45 90             	lea    -0x70(%ebp),%eax
 82059b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82059ba:	8b 45 10             	mov    0x10(%ebp),%eax
 82059bd:	89 04 24             	mov    %eax,(%esp)
 82059c0:	e8 2b 77 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82059c5:	88 45 df             	mov    %al,-0x21(%ebp)
 82059c8:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82059cc:	83 f0 01             	xor    $0x1,%eax
 82059cf:	84 c0                	test   %al,%al
 82059d1:	0f 84 8b 00 00 00    	je     8205a62 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x1ca>
 82059d7:	0f b6 7d df          	movzbl -0x21(%ebp),%edi
 82059db:	8b 75 90             	mov    -0x70(%ebp),%esi
 82059de:	8b 45 0c             	mov    0xc(%ebp),%eax
 82059e1:	89 04 24             	mov    %eax,(%esp)
 82059e4:	e8 85 49 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82059e9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82059f0:	00 
 82059f1:	89 04 24             	mov    %eax,(%esp)
 82059f4:	e8 52 36 f0 ff       	call   810904b <_Z14NumberToStringji>
 82059f9:	89 c3                	mov    %eax,%ebx
 82059fb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205a02:	00 
 8205a03:	c7 44 24 08 c7 9e 00 	movl   $0x9ec7,0x8(%esp)
 8205a0a:	00 
 8205a0b:	c7 44 24 04 60 ed bc 	movl   $0x8bced60,0x4(%esp)
 8205a12:	08 
 8205a13:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8205a16:	89 04 24             	mov    %eax,(%esp)
 8205a19:	e8 fa 9c 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8205a1e:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8205a22:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8205a26:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8205a2a:	c7 44 24 04 e0 29 bc 	movl   $0x8bc29e0,0x4(%esp)
 8205a31:	08 
 8205a32:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8205a35:	89 04 24             	mov    %eax,(%esp)
 8205a38:	e8 4b 9d 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8205a3d:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8205a44:	00 
 8205a45:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205a4c:	00 
 8205a4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205a50:	89 04 24             	mov    %eax,(%esp)
 8205a53:	e8 ea 64 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205a58:	b8 00 00 00 00       	mov    $0x0,%eax
 8205a5d:	e9 fa 04 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205a62:	8b 45 90             	mov    -0x70(%ebp),%eax
 8205a65:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8205a69:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8205a70:	00 
 8205a71:	8d 85 72 ff ff ff    	lea    -0x8e(%ebp),%eax
 8205a77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205a7b:	8b 45 10             	mov    0x10(%ebp),%eax
 8205a7e:	89 04 24             	mov    %eax,(%esp)
 8205a81:	e8 36 78 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8205a86:	83 f0 01             	xor    $0x1,%eax
 8205a89:	84 c0                	test   %al,%al
 8205a8b:	74 25                	je     8205ab2 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x21a>
 8205a8d:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8205a94:	00 
 8205a95:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205a9c:	00 
 8205a9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205aa0:	89 04 24             	mov    %eax,(%esp)
 8205aa3:	e8 9a 64 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205aa8:	b8 00 00 00 00       	mov    $0x0,%eax
 8205aad:	e9 aa 04 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205ab2:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8205ab5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205ab9:	8b 45 10             	mov    0x10(%ebp),%eax
 8205abc:	89 04 24             	mov    %eax,(%esp)
 8205abf:	e8 2c 76 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8205ac4:	88 45 df             	mov    %al,-0x21(%ebp)
 8205ac7:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8205acb:	83 f0 01             	xor    $0x1,%eax
 8205ace:	84 c0                	test   %al,%al
 8205ad0:	0f 84 8b 00 00 00    	je     8205b61 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x2c9>
 8205ad6:	0f b6 7d df          	movzbl -0x21(%ebp),%edi
 8205ada:	8b 75 94             	mov    -0x6c(%ebp),%esi
 8205add:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205ae0:	89 04 24             	mov    %eax,(%esp)
 8205ae3:	e8 86 48 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8205ae8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8205aef:	00 
 8205af0:	89 04 24             	mov    %eax,(%esp)
 8205af3:	e8 53 35 f0 ff       	call   810904b <_Z14NumberToStringji>
 8205af8:	89 c3                	mov    %eax,%ebx
 8205afa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205b01:	00 
 8205b02:	c7 44 24 08 d4 9e 00 	movl   $0x9ed4,0x8(%esp)
 8205b09:	00 
 8205b0a:	c7 44 24 04 60 ed bc 	movl   $0x8bced60,0x4(%esp)
 8205b11:	08 
 8205b12:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8205b15:	89 04 24             	mov    %eax,(%esp)
 8205b18:	e8 fb 9b 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8205b1d:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8205b21:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8205b25:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8205b29:	c7 44 24 04 14 2a bc 	movl   $0x8bc2a14,0x4(%esp)
 8205b30:	08 
 8205b31:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8205b34:	89 04 24             	mov    %eax,(%esp)
 8205b37:	e8 4c 9c 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8205b3c:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8205b43:	00 
 8205b44:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205b4b:	00 
 8205b4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205b4f:	89 04 24             	mov    %eax,(%esp)
 8205b52:	e8 eb 63 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205b57:	b8 00 00 00 00       	mov    $0x0,%eax
 8205b5c:	e9 fb 03 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205b61:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8205b64:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8205b68:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8205b6f:	00 
 8205b70:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8205b76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205b7a:	8b 45 10             	mov    0x10(%ebp),%eax
 8205b7d:	89 04 24             	mov    %eax,(%esp)
 8205b80:	e8 37 77 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8205b85:	83 f0 01             	xor    $0x1,%eax
 8205b88:	84 c0                	test   %al,%al
 8205b8a:	74 25                	je     8205bb1 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x319>
 8205b8c:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8205b93:	00 
 8205b94:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205b9b:	00 
 8205b9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205b9f:	89 04 24             	mov    %eax,(%esp)
 8205ba2:	e8 9b 63 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205ba7:	b8 00 00 00 00       	mov    $0x0,%eax
 8205bac:	e9 ab 03 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205bb1:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8205bb4:	83 f8 03             	cmp    $0x3,%eax
 8205bb7:	7e 08                	jle    8205bc1 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x329>
 8205bb9:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8205bbc:	83 f8 12             	cmp    $0x12,%eax
 8205bbf:	7e 25                	jle    8205be6 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x34e>
 8205bc1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8205bc8:	00 
 8205bc9:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205bd0:	00 
 8205bd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205bd4:	89 04 24             	mov    %eax,(%esp)
 8205bd7:	e8 66 63 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205bdc:	b8 00 00 00 00       	mov    $0x0,%eax
 8205be1:	e9 76 03 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205be6:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 8205bea:	0f b6 c0             	movzbl %al,%eax
 8205bed:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205bf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205bf4:	89 04 24             	mov    %eax,(%esp)
 8205bf7:	e8 ba a2 02 00       	call   822feb6 <_ZNK5CUser15get_charac_nameEi>
 8205bfc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8205bff:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8205c03:	74 25                	je     8205c2a <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x392>
 8205c05:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8205c0c:	00 
 8205c0d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8205c10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205c14:	8d 85 72 ff ff ff    	lea    -0x8e(%ebp),%eax
 8205c1a:	89 04 24             	mov    %eax,(%esp)
 8205c1d:	e8 9e 8c e7 ff       	call   807e8c0 <strncmp@plt>
 8205c22:	85 c0                	test   %eax,%eax
 8205c24:	0f 84 cb 00 00 00    	je     8205cf5 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x45d>
 8205c2a:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8205c2e:	75 59                	jne    8205c89 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x3f1>
 8205c30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205c33:	89 04 24             	mov    %eax,(%esp)
 8205c36:	e8 33 47 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8205c3b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8205c42:	00 
 8205c43:	89 04 24             	mov    %eax,(%esp)
 8205c46:	e8 00 34 f0 ff       	call   810904b <_Z14NumberToStringji>
 8205c4b:	89 c3                	mov    %eax,%ebx
 8205c4d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205c54:	00 
 8205c55:	c7 44 24 08 f6 9e 00 	movl   $0x9ef6,0x8(%esp)
 8205c5c:	00 
 8205c5d:	c7 44 24 04 60 ed bc 	movl   $0x8bced60,0x4(%esp)
 8205c64:	08 
 8205c65:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8205c68:	89 04 24             	mov    %eax,(%esp)
 8205c6b:	e8 a8 9a 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8205c70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8205c74:	c7 44 24 04 44 2a bc 	movl   $0x8bc2a44,0x4(%esp)
 8205c7b:	08 
 8205c7c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8205c7f:	89 04 24             	mov    %eax,(%esp)
 8205c82:	e8 01 9b 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8205c87:	eb 47                	jmp    8205cd0 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x438>
 8205c89:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205c90:	00 
 8205c91:	c7 44 24 08 f8 9e 00 	movl   $0x9ef8,0x8(%esp)
 8205c98:	00 
 8205c99:	c7 44 24 04 60 ed bc 	movl   $0x8bced60,0x4(%esp)
 8205ca0:	08 
 8205ca1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8205ca4:	89 04 24             	mov    %eax,(%esp)
 8205ca7:	e8 6c 9a 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8205cac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8205caf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8205cb3:	8d 85 72 ff ff ff    	lea    -0x8e(%ebp),%eax
 8205cb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8205cbd:	c7 44 24 04 6c 2a bc 	movl   $0x8bc2a6c,0x4(%esp)
 8205cc4:	08 
 8205cc5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8205cc8:	89 04 24             	mov    %eax,(%esp)
 8205ccb:	e8 b8 9a 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8205cd0:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8205cd7:	00 
 8205cd8:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205cdf:	00 
 8205ce0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205ce3:	89 04 24             	mov    %eax,(%esp)
 8205ce6:	e8 57 62 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205ceb:	b8 00 00 00 00       	mov    $0x0,%eax
 8205cf0:	e9 67 02 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205cf5:	8d 85 53 ff ff ff    	lea    -0xad(%ebp),%eax
 8205cfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205cff:	8b 45 10             	mov    0x10(%ebp),%eax
 8205d02:	89 04 24             	mov    %eax,(%esp)
 8205d05:	e8 66 72 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8205d0a:	83 f0 01             	xor    $0x1,%eax
 8205d0d:	84 c0                	test   %al,%al
 8205d0f:	74 29                	je     8205d3a <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x4a2>
 8205d11:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205d18:	00 
 8205d19:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8205d20:	00 
 8205d21:	c7 44 24 04 60 ed bc 	movl   $0x8bced60,0x4(%esp)
 8205d28:	08 
 8205d29:	c7 04 24 ff 9e 00 00 	movl   $0x9eff,(%esp)
 8205d30:	e8 a2 ab 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205d35:	e9 22 02 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205d3a:	0f b6 85 53 ff ff ff 	movzbl -0xad(%ebp),%eax
 8205d41:	3c 02                	cmp    $0x2,%al
 8205d43:	75 53                	jne    8205d98 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x500>
 8205d45:	8b 5d 90             	mov    -0x70(%ebp),%ebx
 8205d48:	e8 4e 64 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8205d4d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8205d51:	8d 95 72 ff ff ff    	lea    -0x8e(%ebp),%edx
 8205d57:	89 54 24 04          	mov    %edx,0x4(%esp)
 8205d5b:	89 04 24             	mov    %eax,(%esp)
 8205d5e:	e8 a9 d8 15 00       	call   836360c <_ZN12CDataManager26hasPreventPrefixCharacNameEPKci>
 8205d63:	84 c0                	test   %al,%al
 8205d65:	74 0c                	je     8205d73 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x4db>
 8205d67:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 8205d6e:	e9 36 01 00 00       	jmp    8205ea9 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x611>
 8205d73:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8205d7a:	00 
 8205d7b:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205d82:	00 
 8205d83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205d86:	89 04 24             	mov    %eax,(%esp)
 8205d89:	e8 b4 61 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205d8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8205d93:	e9 c4 01 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205d98:	e8 fe 63 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8205d9d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8205da0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8205da4:	89 04 24             	mov    %eax,(%esp)
 8205da7:	e8 94 d3 15 00       	call   8363140 <_ZN12CDataManager19hasSpecialCharacterEPKc>
 8205dac:	84 c0                	test   %al,%al
 8205dae:	74 0c                	je     8205dbc <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x524>
 8205db0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8205db7:	e9 ed 00 00 00       	jmp    8205ea9 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x611>
 8205dbc:	e8 da 63 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8205dc1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8205dc4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8205dc8:	89 04 24             	mov    %eax,(%esp)
 8205dcb:	e8 a2 d6 15 00       	call   8363472 <_ZN12CDataManager16hasPreventStringEPKc>
 8205dd0:	84 c0                	test   %al,%al
 8205dd2:	75 18                	jne    8205dec <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x554>
 8205dd4:	e8 c2 63 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8205dd9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8205ddc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8205de0:	89 04 24             	mov    %eax,(%esp)
 8205de3:	e8 52 d7 15 00       	call   836353a <_ZN12CDataManager20hasPreventStringNameEPKc>
 8205de8:	84 c0                	test   %al,%al
 8205dea:	74 07                	je     8205df3 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x55b>
 8205dec:	b8 01 00 00 00       	mov    $0x1,%eax
 8205df1:	eb 05                	jmp    8205df8 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x560>
 8205df3:	b8 00 00 00 00       	mov    $0x0,%eax
 8205df8:	84 c0                	test   %al,%al
 8205dfa:	74 0c                	je     8205e08 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x570>
 8205dfc:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 8205e03:	e9 a1 00 00 00       	jmp    8205ea9 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x611>
 8205e08:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 8205e0c:	0f b6 c0             	movzbl %al,%eax
 8205e0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205e13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205e16:	89 04 24             	mov    %eax,(%esp)
 8205e19:	e8 44 a1 02 00       	call   822ff62 <_ZNK5CUser31CheckPossibleRequestRenameStateEi>
 8205e1e:	83 f0 01             	xor    $0x1,%eax
 8205e21:	84 c0                	test   %al,%al
 8205e23:	74 25                	je     8205e4a <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x5b2>
 8205e25:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8205e2c:	00 
 8205e2d:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205e34:	00 
 8205e35:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205e38:	89 04 24             	mov    %eax,(%esp)
 8205e3b:	e8 02 61 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205e40:	b8 00 00 00 00       	mov    $0x0,%eax
 8205e45:	e9 12 01 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205e4a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8205e50:	89 04 24             	mov    %eax,(%esp)
 8205e53:	e8 d3 f9 ff ff       	call   820582b <_Z20checkValidCharacNamePKc>
 8205e58:	83 f0 01             	xor    $0x1,%eax
 8205e5b:	84 c0                	test   %al,%al
 8205e5d:	74 25                	je     8205e84 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x5ec>
 8205e5f:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 8205e66:	00 
 8205e67:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205e6e:	00 
 8205e6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205e72:	89 04 24             	mov    %eax,(%esp)
 8205e75:	e8 c8 60 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205e7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8205e7f:	e9 d8 00 00 00       	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205e84:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 8205e88:	0f b6 c0             	movzbl %al,%eax
 8205e8b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8205e92:	00 
 8205e93:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205e97:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205e9a:	89 04 24             	mov    %eax,(%esp)
 8205e9d:	e8 4a a1 02 00       	call   822ffec <_ZN5CUser18SetCharacViewStateEii>
 8205ea2:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 8205ea9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8205eaf:	89 04 24             	mov    %eax,(%esp)
 8205eb2:	e8 b5 ce 8b 00       	call   8ac2d6c <_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc>
 8205eb7:	83 f0 01             	xor    $0x1,%eax
 8205eba:	84 c0                	test   %al,%al
 8205ebc:	74 22                	je     8205ee0 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x648>
 8205ebe:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 8205ec5:	00 
 8205ec6:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205ecd:	00 
 8205ece:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205ed1:	89 04 24             	mov    %eax,(%esp)
 8205ed4:	e8 69 60 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205ed9:	b8 00 00 00 00       	mov    $0x0,%eax
 8205ede:	eb 7c                	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205ee0:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8205ee6:	89 04 24             	mov    %eax,(%esp)
 8205ee9:	e8 3d f9 ff ff       	call   820582b <_Z20checkValidCharacNamePKc>
 8205eee:	83 f0 01             	xor    $0x1,%eax
 8205ef1:	84 c0                	test   %al,%al
 8205ef3:	74 22                	je     8205f17 <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x67f>
 8205ef5:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 8205efc:	00 
 8205efd:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 8205f04:	00 
 8205f05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205f08:	89 04 24             	mov    %eax,(%esp)
 8205f0b:	e8 32 60 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8205f10:	b8 00 00 00 00       	mov    $0x0,%eax
 8205f15:	eb 45                	jmp    8205f5c <_ZN27Dispatcher_ChangeCharacName12dispatch_sigEP5CUserR9PacketBuf+0x6c4>
 8205f17:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8205f1a:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 8205f1e:	0f b6 c0             	movzbl %al,%eax
 8205f21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205f25:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205f28:	89 04 24             	mov    %eax,(%esp)
 8205f2b:	e8 70 80 44 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8205f30:	89 c3                	mov    %eax,%ebx
 8205f32:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205f35:	89 04 24             	mov    %eax,(%esp)
 8205f38:	e8 59 2d ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8205f3d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8205f41:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 8205f47:	89 54 24 08          	mov    %edx,0x8(%esp)
 8205f4b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8205f4f:	89 04 24             	mov    %eax,(%esp)
 8205f52:	e8 39 06 22 00       	call   8426590 <_ZN22DB_ReqChangeCharacName11makeRequestEiiPKci>
 8205f57:	b8 00 00 00 00       	mov    $0x0,%eax
 8205f5c:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 8205f62:	5b                   	pop    %ebx
 8205f63:	5e                   	pop    %esi
 8205f64:	5f                   	pop    %edi
 8205f65:	5d                   	pop    %ebp
 8205f66:	c3                   	ret
 8205f67:	90                   	nop

```

```c
// Dispatcher_ChangeCharacName::dispatch_sig @ 0x8205898

/* WARNING: Removing unreachable block (ram,0x08205944) */
/* Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeCharacName::dispatch_sig
          (Dispatcher_ChangeCharacName *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  CDataManager *pCVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uchar local_b1;
  char local_b0 [4];
  undefined2 auStack_ac [13];
  char local_92 [30];
  int local_74;
  int local_70;
  byte local_69;
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [19];
  byte local_25;
  char *local_24;
  int local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 2) {
    uVar4 = LineFunc(0x9eb3,
                     "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar4;
  }
  local_69 = 0;
  local_70 = 0;
  local_74 = 0;
  pcVar5 = local_92;
  uVar10 = 0x1e;
  bVar11 = ((uint)pcVar5 & 2) != 0;
  if (bVar11) {
    local_92[0] = '\0';
    local_92[1] = '\0';
    pcVar5 = local_92 + 2;
    uVar10 = 0x1c;
  }
  uVar9 = 0;
  do {
    pcVar1 = pcVar5 + uVar9;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar9 = uVar9 + 4;
  } while (uVar9 < (uVar10 & 0xfffffffc));
  if (!bVar11) {
    (pcVar5 + uVar9)[0] = '\0';
    (pcVar5 + uVar9)[1] = '\0';
  }
  uVar10 = 0;
  do {
    uVar9 = uVar10;
    *(undefined4 *)((int)auStack_ac + (uVar9 - 4)) = 0;
    uVar10 = uVar9 + 4;
  } while (uVar9 + 4 < 0x1c);
  *(undefined2 *)((int)auStack_ac + uVar9) = 0;
  cVar2 = PacketBuf::get_byte(param_2,&local_69);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  local_25 = PacketBuf::get_int(param_2,&local_74);
  iVar3 = local_74;
  if (local_25 != 1) {
    uVar9 = (uint)local_25;
    uVar10 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar10,0);
    cMyTrace::cMyTrace(local_68,
                       "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)",
                       0x9ec7,0);
    cMyTrace::operator()
              (local_68,"ting : m_id(%s) src char name length(%d), ret(%d)",uVar4,iVar3,uVar9);
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  cVar2 = PacketBuf::get_str(param_2,local_92,0x1e,local_74);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  local_25 = PacketBuf::get_int(param_2,&local_70);
  iVar3 = local_70;
  if (local_25 != 1) {
    uVar9 = (uint)local_25;
    uVar10 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar10,0);
    cMyTrace::cMyTrace(local_58,
                       "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)",
                       0x9ed4,0);
    cMyTrace::operator()(local_58,"ting : m_id(%s) char name length(%d), ret(%d)",uVar4,iVar3,uVar9)
    ;
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  cVar2 = PacketBuf::get_str(param_2,local_b0,0x1e,local_70);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  if ((local_70 < 4) || (0x12 < local_70)) {
    CUser::SendCmdErrorPacket(param_1,0x8a,1);
    return 0;
  }
  local_24 = (char *)CUser::get_charac_name(param_1,(uint)local_69);
  if ((local_24 == (char *)0x0) || (iVar3 = strncmp(local_92,local_24,0x1d), iVar3 != 0)) {
    if (local_24 == (char *)0x0) {
      uVar10 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar10,0);
      cMyTrace::cMyTrace(local_48,
                         "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)"
                         ,0x9ef6,0);
      cMyTrace::operator()(local_48,"ting : m_id(%s) srcCharacName2 is null",uVar4);
    }
    else {
      cMyTrace::cMyTrace(local_38,
                         "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)"
                         ,0x9ef8,0);
      cMyTrace::operator()
                (local_38,"ting : src char name(%s), src server char name(%s)",local_92,local_24);
    }
    CUser::SendCmdErrorPacket(param_1,0x8a,7);
    return 0;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_b1);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9eff,
                     "virtual int Dispatcher_ChangeCharacName::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar4;
  }
  if (local_b1 == '\x02') {
    pcVar5 = (char *)G_CDataManager();
    cVar2 = CDataManager::hasPreventPrefixCharacName(pcVar5,(int)local_92);
    if (cVar2 == '\0') {
      CUser::SendCmdErrorPacket(param_1,0x8a,7);
      return 0;
    }
    local_20 = 2;
    goto LAB_08205ea9;
  }
  pCVar6 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasSpecialCharacter(pCVar6,local_24);
  if (cVar2 != '\0') {
    local_20 = 0;
    goto LAB_08205ea9;
  }
  pCVar6 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasPreventString(pCVar6,local_24);
  if (cVar2 == '\0') {
    pCVar6 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasPreventStringName(pCVar6,local_24);
    if (cVar2 != '\0') goto LAB_08205dec;
    bVar11 = false;
  }
  else {
LAB_08205dec:
    bVar11 = true;
  }
  if (bVar11) {
    local_20 = 1;
  }
  else {
    cVar2 = CUser::CheckPossibleRequestRenameState(param_1,(uint)local_69);
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x8a,7);
      return 0;
    }
    cVar2 = checkValidCharacName(local_b0);
    if (cVar2 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x8a,0x9f);
      return 0;
    }
    CUser::SetCharacViewState(param_1,(uint)local_69,1);
    local_20 = 3;
  }
LAB_08205ea9:
  cVar2 = restrict_inputting_name::isUtf8StrInUnicodeRange(local_b0);
  if (cVar2 == '\x01') {
    cVar2 = checkValidCharacName(local_b0);
    iVar3 = local_20;
    if (cVar2 == '\x01') {
      iVar7 = CUser::get_charac_no(param_1,(uint)local_69);
      iVar8 = CUser::GetUID(param_1);
      DB_ReqChangeCharacName::makeRequest(iVar8,iVar7,local_b0,iVar3);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x8a,0x9f);
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x8a,0x9f);
  }
  return 0;
}

```

