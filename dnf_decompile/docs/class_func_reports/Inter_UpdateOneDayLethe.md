# Inter_UpdateOneDayLethe

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d894c Inter_UpdateOneDayLethe::dispatch_sig  [0x084d894c-0x84d8e67] ===
 84d894c:	55                   	push   %ebp
 84d894d:	89 e5                	mov    %esp,%ebp
 84d894f:	56                   	push   %esi
 84d8950:	53                   	push   %ebx
 84d8951:	83 ec 50             	sub    $0x50,%esp
 84d8954:	8b 45 10             	mov    0x10(%ebp),%eax
 84d8957:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d895a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d895d:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 84d8961:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 84d8968:	38 c2                	cmp    %al,%dl
 84d896a:	0f 85 38 02 00 00    	jne    84d8ba8 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x25c>
 84d8970:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8973:	8b 00                	mov    (%eax),%eax
 84d8975:	85 c0                	test   %eax,%eax
 84d8977:	0f 84 df 04 00 00    	je     84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d897d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8980:	89 04 24             	mov    %eax,(%esp)
 84d8983:	e8 a0 86 c2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84d8988:	89 c3                	mov    %eax,%ebx
 84d898a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d8991:	00 
 84d8992:	c7 44 24 08 8f 3f 00 	movl   $0x3f8f,0x8(%esp)
 84d8999:	00 
 84d899a:	c7 44 24 04 e0 c0 c8 	movl   $0x8c8c0e0,0x4(%esp)
 84d89a1:	08 
 84d89a2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d89a5:	89 04 24             	mov    %eax,(%esp)
 84d89a8:	e8 6b 6d 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d89ad:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d89b1:	c7 44 24 04 88 94 c8 	movl   $0x8c89488,0x4(%esp)
 84d89b8:	08 
 84d89b9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d89bc:	89 04 24             	mov    %eax,(%esp)
 84d89bf:	e8 c4 6d 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d89c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d89c7:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d89ce:	3c ff                	cmp    $0xff,%al
 84d89d0:	74 0e                	je     84d89e0 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x94>
 84d89d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d89d5:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d89dc:	84 c0                	test   %al,%al
 84d89de:	75 38                	jne    84d8a18 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0xcc>
 84d89e0:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 84d89e7:	0f b6 d0             	movzbl %al,%edx
 84d89ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d89ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d89f1:	89 04 24             	mov    %eax,(%esp)
 84d89f4:	e8 31 39 01 00       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 84d89f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d89fc:	83 c0 05             	add    $0x5,%eax
 84d89ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d8a06:	00 
 84d8a07:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8a0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8a0e:	89 04 24             	mov    %eax,(%esp)
 84d8a11:	e8 76 8a 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d8a16:	eb 36                	jmp    84d8a4e <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x102>
 84d8a18:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 84d8a1f:	0f b6 d0             	movzbl %al,%edx
 84d8a22:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8a25:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d8a29:	89 04 24             	mov    %eax,(%esp)
 84d8a2c:	e8 49 39 01 00       	call   84ec37a <_ZN15CUserCharacInfo21SetOneDayLetheFlag2NDEh>
 84d8a31:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8a34:	83 c0 05             	add    $0x5,%eax
 84d8a37:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d8a3e:	00 
 84d8a3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8a43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8a46:	89 04 24             	mov    %eax,(%esp)
 84d8a49:	e8 3e 8a 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d8a4e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8a51:	89 04 24             	mov    %eax,(%esp)
 84d8a54:	e8 f3 52 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d8a59:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8a5c:	89 04 24             	mov    %eax,(%esp)
 84d8a5f:	e8 d8 68 d5 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 84d8a64:	83 f8 ff             	cmp    $0xffffffff,%eax
 84d8a67:	0f 94 c0             	sete   %al
 84d8a6a:	84 c0                	test   %al,%al
 84d8a6c:	74 7d                	je     84d8aeb <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x19f>
 84d8a6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8a71:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8a78:	84 c0                	test   %al,%al
 84d8a7a:	0f 85 18 01 00 00    	jne    84d8b98 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x24c>
 84d8a80:	c7 44 24 08 b4 00 00 	movl   $0xb4,0x8(%esp)
 84d8a87:	00 
 84d8a88:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d8a8f:	00 
 84d8a90:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8a93:	89 04 24             	mov    %eax,(%esp)
 84d8a96:	e8 61 2e bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d8a9b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d8aa2:	00 
 84d8aa3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8aa6:	89 04 24             	mov    %eax,(%esp)
 84d8aa9:	e8 72 2e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d8aae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d8ab5:	00 
 84d8ab6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8ab9:	89 04 24             	mov    %eax,(%esp)
 84d8abc:	e8 5f 2e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d8ac1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d8ac8:	00 
 84d8ac9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8acc:	89 04 24             	mov    %eax,(%esp)
 84d8acf:	e8 84 2e bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d8ad4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8ad7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8adb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8ade:	89 04 24             	mov    %eax,(%esp)
 84d8ae1:	e8 d4 fa 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d8ae6:	e9 ad 00 00 00       	jmp    84d8b98 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x24c>
 84d8aeb:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 84d8aef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8af2:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8af9:	3c ff                	cmp    $0xff,%al
 84d8afb:	74 0e                	je     84d8b0b <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x1bf>
 84d8afd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8b00:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8b07:	84 c0                	test   %al,%al
 84d8b09:	75 06                	jne    84d8b11 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x1c5>
 84d8b0b:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 84d8b0f:	eb 04                	jmp    84d8b15 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x1c9>
 84d8b11:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
 84d8b15:	c7 44 24 08 b4 00 00 	movl   $0xb4,0x8(%esp)
 84d8b1c:	00 
 84d8b1d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d8b24:	00 
 84d8b25:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8b28:	89 04 24             	mov    %eax,(%esp)
 84d8b2b:	e8 cc 2d bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d8b30:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d8b37:	00 
 84d8b38:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8b3b:	89 04 24             	mov    %eax,(%esp)
 84d8b3e:	e8 dd 2d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d8b43:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 84d8b47:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8b4b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8b4e:	89 04 24             	mov    %eax,(%esp)
 84d8b51:	e8 ca 2d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d8b56:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d8b5d:	00 
 84d8b5e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8b61:	89 04 24             	mov    %eax,(%esp)
 84d8b64:	e8 ef 2d bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d8b69:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8b6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8b70:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8b73:	89 04 24             	mov    %eax,(%esp)
 84d8b76:	e8 3f fa 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d8b7b:	eb 1b                	jmp    84d8b98 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x24c>
 84d8b7d:	89 d3                	mov    %edx,%ebx
 84d8b7f:	89 c6                	mov    %eax,%esi
 84d8b81:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8b84:	89 04 24             	mov    %eax,(%esp)
 84d8b87:	e8 f4 52 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d8b8c:	89 f0                	mov    %esi,%eax
 84d8b8e:	89 da                	mov    %ebx,%edx
 84d8b90:	89 04 24             	mov    %eax,(%esp)
 84d8b93:	e8 b8 ab 60 00       	call   8ae3750 <_Unwind_Resume>
 84d8b98:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d8b9b:	89 04 24             	mov    %eax,(%esp)
 84d8b9e:	e8 dd 52 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d8ba3:	e9 b4 02 00 00       	jmp    84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d8ba8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8bab:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 84d8baf:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 84d8bb6:	38 c2                	cmp    %al,%dl
 84d8bb8:	0f 85 12 01 00 00    	jne    84d8cd0 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x384>
 84d8bbe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8bc1:	8b 00                	mov    (%eax),%eax
 84d8bc3:	85 c0                	test   %eax,%eax
 84d8bc5:	0f 84 90 02 00 00    	je     84d8e5b <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x50f>
 84d8bcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8bce:	89 04 24             	mov    %eax,(%esp)
 84d8bd1:	e8 52 84 c2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84d8bd6:	89 c3                	mov    %eax,%ebx
 84d8bd8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d8bdf:	00 
 84d8be0:	c7 44 24 08 bd 3f 00 	movl   $0x3fbd,0x8(%esp)
 84d8be7:	00 
 84d8be8:	c7 44 24 04 e0 c0 c8 	movl   $0x8c8c0e0,0x4(%esp)
 84d8bef:	08 
 84d8bf0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d8bf3:	89 04 24             	mov    %eax,(%esp)
 84d8bf6:	e8 1d 6b 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d8bfb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d8bff:	c7 44 24 04 b4 94 c8 	movl   $0x8c894b4,0x4(%esp)
 84d8c06:	08 
 84d8c07:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d8c0a:	89 04 24             	mov    %eax,(%esp)
 84d8c0d:	e8 76 6b 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d8c12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8c15:	89 04 24             	mov    %eax,(%esp)
 84d8c18:	e8 77 79 1d 00       	call   86b0594 <_ZN8WongWork14CHandlePremium30handleRemoveOneDayLethePremiumEP5CUser>
 84d8c1d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8c20:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8c27:	3c ff                	cmp    $0xff,%al
 84d8c29:	74 0e                	je     84d8c39 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x2ed>
 84d8c2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8c2e:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8c35:	84 c0                	test   %al,%al
 84d8c37:	75 4c                	jne    84d8c85 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x339>
 84d8c39:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 84d8c40:	0f b6 d0             	movzbl %al,%edx
 84d8c43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8c46:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d8c4a:	89 04 24             	mov    %eax,(%esp)
 84d8c4d:	e8 d8 36 01 00       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 84d8c52:	0f b6 15 61 bc 3a 09 	movzbl 0x93abc61,%edx
 84d8c59:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8c5c:	88 90 9d 01 00 00    	mov    %dl,0x19d(%eax)
 84d8c62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8c65:	83 c0 05             	add    $0x5,%eax
 84d8c68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d8c6f:	00 
 84d8c70:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8c74:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8c77:	89 04 24             	mov    %eax,(%esp)
 84d8c7a:	e8 0d 88 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d8c7f:	90                   	nop
 84d8c80:	e9 d7 01 00 00       	jmp    84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d8c85:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 84d8c8c:	0f b6 d0             	movzbl %al,%edx
 84d8c8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8c92:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d8c96:	89 04 24             	mov    %eax,(%esp)
 84d8c99:	e8 dc 36 01 00       	call   84ec37a <_ZN15CUserCharacInfo21SetOneDayLetheFlag2NDEh>
 84d8c9e:	0f b6 15 61 bc 3a 09 	movzbl 0x93abc61,%edx
 84d8ca5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8ca8:	88 90 9d 01 00 00    	mov    %dl,0x19d(%eax)
 84d8cae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8cb1:	83 c0 05             	add    $0x5,%eax
 84d8cb4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d8cbb:	00 
 84d8cbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8cc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8cc3:	89 04 24             	mov    %eax,(%esp)
 84d8cc6:	e8 c1 87 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d8ccb:	e9 8c 01 00 00       	jmp    84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d8cd0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8cd3:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 84d8cd7:	0f b6 05 63 bc 3a 09 	movzbl 0x93abc63,%eax
 84d8cde:	38 c2                	cmp    %al,%dl
 84d8ce0:	0f 85 b3 00 00 00    	jne    84d8d99 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x44d>
 84d8ce6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8ce9:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8cf0:	3c ff                	cmp    $0xff,%al
 84d8cf2:	74 0e                	je     84d8d02 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x3b6>
 84d8cf4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8cf7:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8cfe:	84 c0                	test   %al,%al
 84d8d00:	75 4c                	jne    84d8d4e <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x402>
 84d8d02:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 84d8d09:	0f b6 d0             	movzbl %al,%edx
 84d8d0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8d0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d8d13:	89 04 24             	mov    %eax,(%esp)
 84d8d16:	e8 0f 36 01 00       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 84d8d1b:	0f b6 15 60 bc 3a 09 	movzbl 0x93abc60,%edx
 84d8d22:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8d25:	88 90 9d 01 00 00    	mov    %dl,0x19d(%eax)
 84d8d2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8d2e:	83 c0 05             	add    $0x5,%eax
 84d8d31:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d8d38:	00 
 84d8d39:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8d3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8d40:	89 04 24             	mov    %eax,(%esp)
 84d8d43:	e8 44 87 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d8d48:	90                   	nop
 84d8d49:	e9 0e 01 00 00       	jmp    84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d8d4e:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 84d8d55:	0f b6 d0             	movzbl %al,%edx
 84d8d58:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8d5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d8d5f:	89 04 24             	mov    %eax,(%esp)
 84d8d62:	e8 13 36 01 00       	call   84ec37a <_ZN15CUserCharacInfo21SetOneDayLetheFlag2NDEh>
 84d8d67:	0f b6 15 60 bc 3a 09 	movzbl 0x93abc60,%edx
 84d8d6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8d71:	88 90 9d 01 00 00    	mov    %dl,0x19d(%eax)
 84d8d77:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8d7a:	83 c0 05             	add    $0x5,%eax
 84d8d7d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d8d84:	00 
 84d8d85:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8d89:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8d8c:	89 04 24             	mov    %eax,(%esp)
 84d8d8f:	e8 f8 86 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d8d94:	e9 c3 00 00 00       	jmp    84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d8d99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8d9c:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 84d8da0:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 84d8da7:	38 c2                	cmp    %al,%dl
 84d8da9:	0f 85 ad 00 00 00    	jne    84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d8daf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8db2:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8db9:	3c ff                	cmp    $0xff,%al
 84d8dbb:	74 0e                	je     84d8dcb <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x47f>
 84d8dbd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8dc0:	0f b6 80 9e 01 00 00 	movzbl 0x19e(%eax),%eax
 84d8dc7:	84 c0                	test   %al,%al
 84d8dc9:	75 48                	jne    84d8e13 <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x4c7>
 84d8dcb:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 84d8dd2:	0f b6 d0             	movzbl %al,%edx
 84d8dd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8dd8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d8ddc:	89 04 24             	mov    %eax,(%esp)
 84d8ddf:	e8 46 35 01 00       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 84d8de4:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 84d8deb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8dee:	88 90 9d 01 00 00    	mov    %dl,0x19d(%eax)
 84d8df4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8df7:	83 c0 05             	add    $0x5,%eax
 84d8dfa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d8e01:	00 
 84d8e02:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8e06:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8e09:	89 04 24             	mov    %eax,(%esp)
 84d8e0c:	e8 7b 86 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d8e11:	eb 49                	jmp    84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d8e13:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 84d8e1a:	0f b6 d0             	movzbl %al,%edx
 84d8e1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8e20:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d8e24:	89 04 24             	mov    %eax,(%esp)
 84d8e27:	e8 4e 35 01 00       	call   84ec37a <_ZN15CUserCharacInfo21SetOneDayLetheFlag2NDEh>
 84d8e2c:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 84d8e33:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8e36:	88 90 9d 01 00 00    	mov    %dl,0x19d(%eax)
 84d8e3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8e3f:	83 c0 05             	add    $0x5,%eax
 84d8e42:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d8e49:	00 
 84d8e4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8e4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8e51:	89 04 24             	mov    %eax,(%esp)
 84d8e54:	e8 33 86 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d8e59:	eb 01                	jmp    84d8e5c <_ZN23Inter_UpdateOneDayLethe12dispatch_sigEP5CUserPci+0x510>
 84d8e5b:	90                   	nop
 84d8e5c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d8e61:	83 c4 50             	add    $0x50,%esp
 84d8e64:	5b                   	pop    %ebx
 84d8e65:	5e                   	pop    %esi
 84d8e66:	5d                   	pop    %ebp
 84d8e67:	c3                   	ret

```

```c
// Inter_UpdateOneDayLethe::dispatch_sig @ 0x84d894c

/* Inter_UpdateOneDayLethe::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateOneDayLethe::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  char local_d;
  
  local_14 = param_3;
  if (*(uchar *)(param_3 + 4) == CPremiumLetheManager::USE_LETHE_STATE) {
    if (*(int *)param_3 != 0) {
      uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      cMyTrace::cMyTrace(local_34,
                         "virtual int Inter_UpdateOneDayLethe::dispatch_sig(CUser*, char*, int)",
                         0x3f8f,0);
      cMyTrace::operator()(local_34,"ONE_DAY_LETHE : INTER_USE_LETHE, char(%s)",uVar1);
      if ((*(char *)(local_14 + 0x19e) == -1) || (*(char *)(local_14 + 0x19e) == '\0')) {
        CUserCharacInfo::SetOneDayLetheFlag
                  ((CUserCharacInfo *)param_2,CPremiumLetheManager::USE_LETHE_STATE);
        CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,0);
      }
      else {
        CUserCharacInfo::SetOneDayLetheFlag2ND
                  ((CUserCharacInfo *)param_2,CPremiumLetheManager::USE_LETHE_STATE);
        CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,1);
      }
      PacketGuard::PacketGuard(local_40);
      iVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_2);
      if (iVar2 == -1) {
        if (*(char *)(local_14 + 0x19e) == '\0') {
                    /* try { // try from 084d8a96 to 084d8b7a has its CatchHandler @ 084d8b7d */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0xb4);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
          CUser::Send((CUser *)param_2,local_40);
        }
      }
      else {
        if ((*(char *)(local_14 + 0x19e) == -1) || (*(char *)(local_14 + 0x19e) == '\0')) {
          local_d = '\x01';
        }
        else {
          local_d = '\x02';
        }
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0xb4);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)local_d);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
        CUser::Send((CUser *)param_2,local_40);
      }
      PacketGuard::~PacketGuard(local_40);
    }
  }
  else if (*(char *)(param_3 + 4) == CPremiumLetheManager::SKILL_CONFIRM_STATE) {
    if (*(int *)param_3 != 0) {
      uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      cMyTrace::cMyTrace(local_24,
                         "virtual int Inter_UpdateOneDayLethe::dispatch_sig(CUser*, char*, int)",
                         0x3fbd,0);
      cMyTrace::operator()(local_24,"ONE_DAY_LETHE : INTER_CONFIRM_SKILL_STATE, char(%s)",uVar1);
      WongWork::CHandlePremium::handleRemoveOneDayLethePremium((CUser *)param_2);
      if ((*(char *)(local_14 + 0x19e) == -1) || (*(char *)(local_14 + 0x19e) == '\0')) {
        CUserCharacInfo::SetOneDayLetheFlag
                  ((CUserCharacInfo *)param_2,CPremiumLetheManager::NOT_USE_LETHE_STATE);
        *(char *)(local_14 + 0x19d) = CPremiumLetheManager::SKILL_CONFIRM_STATE;
        CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,0);
      }
      else {
        CUserCharacInfo::SetOneDayLetheFlag2ND
                  ((CUserCharacInfo *)param_2,CPremiumLetheManager::NOT_USE_LETHE_STATE);
        *(char *)(local_14 + 0x19d) = CPremiumLetheManager::SKILL_CONFIRM_STATE;
        CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,1);
      }
    }
  }
  else if (*(char *)(param_3 + 4) == CPremiumLetheManager::INIT_LETHE_SKILL) {
    if ((*(char *)(param_3 + 0x19e) == -1) || (*(char *)(param_3 + 0x19e) == '\0')) {
      CUserCharacInfo::SetOneDayLetheFlag
                ((CUserCharacInfo *)param_2,CPremiumLetheManager::USE_LETHE_STATE);
      *(uchar *)(local_14 + 0x19d) = CPremiumLetheManager::USE_LETHE_STATE;
      CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,0);
    }
    else {
      CUserCharacInfo::SetOneDayLetheFlag2ND
                ((CUserCharacInfo *)param_2,CPremiumLetheManager::USE_LETHE_STATE);
      *(uchar *)(local_14 + 0x19d) = CPremiumLetheManager::USE_LETHE_STATE;
      CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,1);
    }
  }
  else if (*(uchar *)(param_3 + 4) == CPremiumLetheManager::NOT_USE_LETHE_STATE) {
    if ((*(char *)(param_3 + 0x19e) == -1) || (*(char *)(param_3 + 0x19e) == '\0')) {
      CUserCharacInfo::SetOneDayLetheFlag
                ((CUserCharacInfo *)param_2,CPremiumLetheManager::NOT_USE_LETHE_STATE);
      *(uchar *)(local_14 + 0x19d) = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,0);
    }
    else {
      CUserCharacInfo::SetOneDayLetheFlag2ND
                ((CUserCharacInfo *)param_2,CPremiumLetheManager::NOT_USE_LETHE_STATE);
      *(uchar *)(local_14 + 0x19d) = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      CUser::SaveBackupSkillInfo((CUser *)param_2,local_14 + 5,1);
    }
  }
  return 0;
}

```

