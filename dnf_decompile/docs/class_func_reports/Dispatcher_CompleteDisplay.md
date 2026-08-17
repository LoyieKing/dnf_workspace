# Dispatcher_CompleteDisplay

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08202cda Dispatcher_CompleteDisplay::dispatch_sig  [0x08202cda-0x820334f] ===
 8202cda:	55                   	push   %ebp
 8202cdb:	89 e5                	mov    %esp,%ebp
 8202cdd:	57                   	push   %edi
 8202cde:	56                   	push   %esi
 8202cdf:	53                   	push   %ebx
 8202ce0:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 8202ce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202ce9:	89 04 24             	mov    %eax,(%esp)
 8202cec:	e8 9b 76 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8202cf1:	83 f8 03             	cmp    $0x3,%eax
 8202cf4:	75 0f                	jne    8202d05 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8202cf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202cf9:	89 04 24             	mov    %eax,(%esp)
 8202cfc:	e8 31 d7 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8202d01:	85 c0                	test   %eax,%eax
 8202d03:	75 07                	jne    8202d0c <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8202d05:	b8 01 00 00 00       	mov    $0x1,%eax
 8202d0a:	eb 05                	jmp    8202d11 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x37>
 8202d0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8202d11:	84 c0                	test   %al,%al
 8202d13:	74 2b                	je     8202d40 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x66>
 8202d15:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202d1c:	00 
 8202d1d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202d24:	00 
 8202d25:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 8202d2c:	08 
 8202d2d:	c7 04 24 84 99 00 00 	movl   $0x9984,(%esp)
 8202d34:	e8 9e db 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202d39:	89 c3                	mov    %eax,%ebx
 8202d3b:	e9 03 06 00 00       	jmp    8203343 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x669>
 8202d40:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8202d47:	c6 45 ce 00          	movb   $0x0,-0x32(%ebp)
 8202d4b:	8d 55 95             	lea    -0x6b(%ebp),%edx
 8202d4e:	bb 29 00 00 00       	mov    $0x29,%ebx
 8202d53:	b8 00 00 00 00       	mov    $0x0,%eax
 8202d58:	89 d1                	mov    %edx,%ecx
 8202d5a:	83 e1 01             	and    $0x1,%ecx
 8202d5d:	85 c9                	test   %ecx,%ecx
 8202d5f:	74 08                	je     8202d69 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x8f>
 8202d61:	88 02                	mov    %al,(%edx)
 8202d63:	83 c2 01             	add    $0x1,%edx
 8202d66:	83 eb 01             	sub    $0x1,%ebx
 8202d69:	89 d1                	mov    %edx,%ecx
 8202d6b:	83 e1 02             	and    $0x2,%ecx
 8202d6e:	85 c9                	test   %ecx,%ecx
 8202d70:	74 09                	je     8202d7b <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0xa1>
 8202d72:	66 89 02             	mov    %ax,(%edx)
 8202d75:	83 c2 02             	add    $0x2,%edx
 8202d78:	83 eb 02             	sub    $0x2,%ebx
 8202d7b:	89 d9                	mov    %ebx,%ecx
 8202d7d:	c1 e9 02             	shr    $0x2,%ecx
 8202d80:	89 d7                	mov    %edx,%edi
 8202d82:	f3 ab                	rep stos %eax,%es:(%edi)
 8202d84:	89 fa                	mov    %edi,%edx
 8202d86:	89 d9                	mov    %ebx,%ecx
 8202d88:	83 e1 02             	and    $0x2,%ecx
 8202d8b:	85 c9                	test   %ecx,%ecx
 8202d8d:	74 06                	je     8202d95 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 8202d8f:	66 89 02             	mov    %ax,(%edx)
 8202d92:	83 c2 02             	add    $0x2,%edx
 8202d95:	89 d9                	mov    %ebx,%ecx
 8202d97:	83 e1 01             	and    $0x1,%ecx
 8202d9a:	85 c9                	test   %ecx,%ecx
 8202d9c:	74 05                	je     8202da3 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 8202d9e:	88 02                	mov    %al,(%edx)
 8202da0:	83 c2 01             	add    $0x1,%edx
 8202da3:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8202daa:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8202db0:	89 04 24             	mov    %eax,(%esp)
 8202db3:	e8 c4 17 03 00       	call   823457c <_ZN13private_store16PrivateStoreItemC1Ev>
 8202db8:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8202dbf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8202dc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202dc6:	8b 45 10             	mov    0x10(%ebp),%eax
 8202dc9:	89 04 24             	mov    %eax,(%esp)
 8202dcc:	e8 1f a3 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8202dd1:	83 f0 01             	xor    $0x1,%eax
 8202dd4:	84 c0                	test   %al,%al
 8202dd6:	74 2b                	je     8202e03 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x129>
 8202dd8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202ddf:	00 
 8202de0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202de7:	00 
 8202de8:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 8202def:	08 
 8202df0:	c7 04 24 8e 99 00 00 	movl   $0x998e,(%esp)
 8202df7:	e8 db da 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202dfc:	89 c3                	mov    %eax,%ebx
 8202dfe:	e9 40 05 00 00       	jmp    8203343 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x669>
 8202e03:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8202e06:	83 f8 28             	cmp    $0x28,%eax
 8202e09:	7e 2b                	jle    8202e36 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 8202e0b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202e12:	00 
 8202e13:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202e1a:	00 
 8202e1b:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 8202e22:	08 
 8202e23:	c7 04 24 90 99 00 00 	movl   $0x9990,(%esp)
 8202e2a:	e8 a8 da 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202e2f:	89 c3                	mov    %eax,%ebx
 8202e31:	e9 0d 05 00 00       	jmp    8203343 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x669>
 8202e36:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8202e39:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8202e3d:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 8202e44:	00 
 8202e45:	8d 45 95             	lea    -0x6b(%ebp),%eax
 8202e48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202e4c:	8b 45 10             	mov    0x10(%ebp),%eax
 8202e4f:	89 04 24             	mov    %eax,(%esp)
 8202e52:	e8 65 a4 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8202e57:	83 f0 01             	xor    $0x1,%eax
 8202e5a:	84 c0                	test   %al,%al
 8202e5c:	74 2b                	je     8202e89 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x1af>
 8202e5e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202e65:	00 
 8202e66:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202e6d:	00 
 8202e6e:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 8202e75:	08 
 8202e76:	c7 04 24 93 99 00 00 	movl   $0x9993,(%esp)
 8202e7d:	e8 55 da 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202e82:	89 c3                	mov    %eax,%ebx
 8202e84:	e9 ba 04 00 00       	jmp    8203343 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x669>
 8202e89:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8202e8c:	89 04 24             	mov    %eax,(%esp)
 8202e8f:	e8 3c d2 4d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8202e94:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8202e97:	89 44 24 08          	mov    %eax,0x8(%esp)
 8202e9b:	8d 45 95             	lea    -0x6b(%ebp),%eax
 8202e9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202ea2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8202ea5:	89 04 24             	mov    %eax,(%esp)
 8202ea8:	e8 83 47 50 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8202ead:	eb 1b                	jmp    8202eca <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x1f0>
 8202eaf:	89 d3                	mov    %edx,%ebx
 8202eb1:	89 c6                	mov    %eax,%esi
 8202eb3:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8202eb6:	89 04 24             	mov    %eax,(%esp)
 8202eb9:	e8 32 d2 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8202ebe:	89 f0                	mov    %esi,%eax
 8202ec0:	89 da                	mov    %ebx,%edx
 8202ec2:	89 04 24             	mov    %eax,(%esp)
 8202ec5:	e8 86 08 8e 00       	call   8ae3750 <_Unwind_Resume>
 8202eca:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8202ecd:	89 04 24             	mov    %eax,(%esp)
 8202ed0:	e8 1b d2 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8202ed5:	e8 27 21 03 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 8202eda:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8202edd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202ee1:	89 04 24             	mov    %eax,(%esp)
 8202ee4:	e8 39 b7 42 00       	call   862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>
 8202ee9:	84 c0                	test   %al,%al
 8202eeb:	75 18                	jne    8202f05 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x22b>
 8202eed:	e8 a9 92 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8202ef2:	8d 55 95             	lea    -0x6b(%ebp),%edx
 8202ef5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202ef9:	89 04 24             	mov    %eax,(%esp)
 8202efc:	e8 3f 02 16 00       	call   8363140 <_ZN12CDataManager19hasSpecialCharacterEPKc>
 8202f01:	84 c0                	test   %al,%al
 8202f03:	74 07                	je     8202f0c <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x232>
 8202f05:	b8 01 00 00 00       	mov    $0x1,%eax
 8202f0a:	eb 05                	jmp    8202f11 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x237>
 8202f0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8202f11:	84 c0                	test   %al,%al
 8202f13:	74 25                	je     8202f3a <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x260>
 8202f15:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 8202f1c:	00 
 8202f1d:	c7 44 24 04 5a 00 00 	movl   $0x5a,0x4(%esp)
 8202f24:	00 
 8202f25:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202f28:	89 04 24             	mov    %eax,(%esp)
 8202f2b:	e8 12 90 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8202f30:	bb 00 00 00 00       	mov    $0x0,%ebx
 8202f35:	e9 fe 03 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 8202f3a:	e8 a9 1c 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 8202f3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8202f42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8202f46:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8202f49:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202f4d:	89 04 24             	mov    %eax,(%esp)
 8202f50:	e8 43 77 3c 00       	call   85ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>
 8202f55:	8d 45 ce             	lea    -0x32(%ebp),%eax
 8202f58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202f5c:	8b 45 10             	mov    0x10(%ebp),%eax
 8202f5f:	89 04 24             	mov    %eax,(%esp)
 8202f62:	e8 09 a0 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8202f67:	83 f0 01             	xor    $0x1,%eax
 8202f6a:	84 c0                	test   %al,%al
 8202f6c:	74 2b                	je     8202f99 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x2bf>
 8202f6e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202f75:	00 
 8202f76:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202f7d:	00 
 8202f7e:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 8202f85:	08 
 8202f86:	c7 04 24 a4 99 00 00 	movl   $0x99a4,(%esp)
 8202f8d:	e8 45 d9 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202f92:	89 c3                	mov    %eax,%ebx
 8202f94:	e9 9f 03 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 8202f99:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8202f9c:	89 04 24             	mov    %eax,(%esp)
 8202f9f:	e8 34 16 03 00       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 8202fa4:	0f b6 d8             	movzbl %al,%ebx
 8202fa7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202fae:	00 
 8202faf:	c7 44 24 08 a6 99 00 	movl   $0x99a6,0x8(%esp)
 8202fb6:	00 
 8202fb7:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 8202fbe:	08 
 8202fbf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8202fc2:	89 04 24             	mov    %eax,(%esp)
 8202fc5:	e8 4e c7 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8202fca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8202fce:	c7 44 24 04 f4 28 bc 	movl   $0x8bc28f4,0x4(%esp)
 8202fd5:	08 
 8202fd6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8202fd9:	89 04 24             	mov    %eax,(%esp)
 8202fdc:	e8 a7 c7 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8202fe1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8202fe4:	89 04 24             	mov    %eax,(%esp)
 8202fe7:	e8 ec 15 03 00       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 8202fec:	0f b6 c0             	movzbl %al,%eax
 8202fef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202ff3:	c7 04 24 f4 28 bc 08 	movl   $0x8bc28f4,(%esp)
 8202ffa:	e8 61 ab e7 ff       	call   807db60 <printf@plt>
 8202fff:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8203002:	89 04 24             	mov    %eax,(%esp)
 8203005:	e8 ce 15 03 00       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 820300a:	3c 01                	cmp    $0x1,%al
 820300c:	0f 95 c0             	setne  %al
 820300f:	84 c0                	test   %al,%al
 8203011:	74 0a                	je     820301d <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x343>
 8203013:	bb 00 00 00 00       	mov    $0x0,%ebx
 8203018:	e9 1b 03 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 820301d:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 8203021:	84 c0                	test   %al,%al
 8203023:	75 2b                	jne    8203050 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x376>
 8203025:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820302c:	00 
 820302d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203034:	00 
 8203035:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 820303c:	08 
 820303d:	c7 04 24 ad 99 00 00 	movl   $0x99ad,(%esp)
 8203044:	e8 8e d8 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203049:	89 c3                	mov    %eax,%ebx
 820304b:	e9 e8 02 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 8203050:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8203057:	e9 ce 01 00 00       	jmp    820322a <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x550>
 820305c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8203062:	83 c0 44             	add    $0x44,%eax
 8203065:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203069:	8b 45 10             	mov    0x10(%ebp),%eax
 820306c:	89 04 24             	mov    %eax,(%esp)
 820306f:	e8 4c 9f 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8203074:	83 f0 01             	xor    $0x1,%eax
 8203077:	84 c0                	test   %al,%al
 8203079:	75 7c                	jne    82030f7 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x41d>
 820307b:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8203081:	83 c0 40             	add    $0x40,%eax
 8203084:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203088:	8b 45 10             	mov    0x10(%ebp),%eax
 820308b:	89 04 24             	mov    %eax,(%esp)
 820308e:	e8 5d a0 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8203093:	83 f0 01             	xor    $0x1,%eax
 8203096:	84 c0                	test   %al,%al
 8203098:	75 5d                	jne    82030f7 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x41d>
 820309a:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82030a0:	83 c0 46             	add    $0x46,%eax
 82030a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82030a7:	8b 45 10             	mov    0x10(%ebp),%eax
 82030aa:	89 04 24             	mov    %eax,(%esp)
 82030ad:	e8 70 9e 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82030b2:	83 f0 01             	xor    $0x1,%eax
 82030b5:	84 c0                	test   %al,%al
 82030b7:	75 3e                	jne    82030f7 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x41d>
 82030b9:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82030bf:	83 c0 48             	add    $0x48,%eax
 82030c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82030c6:	8b 45 10             	mov    0x10(%ebp),%eax
 82030c9:	89 04 24             	mov    %eax,(%esp)
 82030cc:	e8 ef 9e 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82030d1:	83 f0 01             	xor    $0x1,%eax
 82030d4:	84 c0                	test   %al,%al
 82030d6:	75 1f                	jne    82030f7 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x41d>
 82030d8:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 82030de:	83 c0 07             	add    $0x7,%eax
 82030e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82030e5:	8b 45 10             	mov    0x10(%ebp),%eax
 82030e8:	89 04 24             	mov    %eax,(%esp)
 82030eb:	e8 00 a0 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82030f0:	83 f0 01             	xor    $0x1,%eax
 82030f3:	84 c0                	test   %al,%al
 82030f5:	74 07                	je     82030fe <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x424>
 82030f7:	b8 01 00 00 00       	mov    $0x1,%eax
 82030fc:	eb 05                	jmp    8203103 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x429>
 82030fe:	b8 00 00 00 00       	mov    $0x0,%eax
 8203103:	84 c0                	test   %al,%al
 8203105:	74 2b                	je     8203132 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x458>
 8203107:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820310e:	00 
 820310f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203116:	00 
 8203117:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 820311e:	08 
 820311f:	c7 04 24 bd 99 00 00 	movl   $0x99bd,(%esp)
 8203126:	e8 ac d7 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820312b:	89 c3                	mov    %eax,%ebx
 820312d:	e9 06 02 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 8203132:	0f b6 45 8e          	movzbl -0x72(%ebp),%eax
 8203136:	3c 01                	cmp    $0x1,%al
 8203138:	74 35                	je     820316f <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x495>
 820313a:	8b 85 4f ff ff ff    	mov    -0xb1(%ebp),%eax
 8203140:	85 c0                	test   %eax,%eax
 8203142:	7f 2b                	jg     820316f <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x495>
 8203144:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820314b:	00 
 820314c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203153:	00 
 8203154:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 820315b:	08 
 820315c:	c7 04 24 c0 99 00 00 	movl   $0x99c0,(%esp)
 8203163:	e8 6f d7 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203168:	89 c3                	mov    %eax,%ebx
 820316a:	e9 c9 01 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 820316f:	0f b7 45 90          	movzwl -0x70(%ebp),%eax
 8203173:	0f bf d8             	movswl %ax,%ebx
 8203176:	0f b6 45 8e          	movzbl -0x72(%ebp),%eax
 820317a:	0f be c0             	movsbl %al,%eax
 820317d:	89 04 24             	mov    %eax,(%esp)
 8203180:	e8 c0 46 ef ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 8203185:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8203189:	89 44 24 04          	mov    %eax,0x4(%esp)
 820318d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203190:	89 04 24             	mov    %eax,(%esp)
 8203193:	e8 aa 37 44 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8203198:	84 c0                	test   %al,%al
 820319a:	74 30                	je     82031cc <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x4f2>
 820319c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 820319f:	89 04 24             	mov    %eax,(%esp)
 82031a2:	e8 ab 1d 3c 00       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 82031a7:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 82031ae:	00 
 82031af:	c7 44 24 04 5a 00 00 	movl   $0x5a,0x4(%esp)
 82031b6:	00 
 82031b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82031ba:	89 04 24             	mov    %eax,(%esp)
 82031bd:	e8 80 8d 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82031c2:	bb 00 00 00 00       	mov    $0x0,%ebx
 82031c7:	e9 6c 01 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 82031cc:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82031cf:	8b 00                	mov    (%eax),%eax
 82031d1:	83 c0 10             	add    $0x10,%eax
 82031d4:	8b 08                	mov    (%eax),%ecx
 82031d6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82031d9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82031dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 82031e0:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 82031e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82031ea:	89 04 24             	mov    %eax,(%esp)
 82031ed:	ff d1                	call   *%ecx
 82031ef:	83 f0 01             	xor    $0x1,%eax
 82031f2:	84 c0                	test   %al,%al
 82031f4:	74 30                	je     8203226 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x54c>
 82031f6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82031f9:	89 04 24             	mov    %eax,(%esp)
 82031fc:	e8 51 1d 3c 00       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 8203201:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8203208:	00 
 8203209:	c7 44 24 04 5a 00 00 	movl   $0x5a,0x4(%esp)
 8203210:	00 
 8203211:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203214:	89 04 24             	mov    %eax,(%esp)
 8203217:	e8 26 8d 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820321c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8203221:	e9 12 01 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 8203226:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 820322a:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 820322e:	0f b6 c0             	movzbl %al,%eax
 8203231:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8203234:	0f 9f c0             	setg   %al
 8203237:	84 c0                	test   %al,%al
 8203239:	0f 85 1d fe ff ff    	jne    820305c <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x382>
 820323f:	8d 45 be             	lea    -0x42(%ebp),%eax
 8203242:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203246:	8b 45 10             	mov    0x10(%ebp),%eax
 8203249:	89 04 24             	mov    %eax,(%esp)
 820324c:	e8 5f 9e 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8203251:	83 f0 01             	xor    $0x1,%eax
 8203254:	84 c0                	test   %al,%al
 8203256:	74 2b                	je     8203283 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x5a9>
 8203258:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820325f:	00 
 8203260:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203267:	00 
 8203268:	c7 44 24 04 00 f3 bc 	movl   $0x8bcf300,0x4(%esp)
 820326f:	08 
 8203270:	c7 04 24 e9 99 00 00 	movl   $0x99e9,(%esp)
 8203277:	e8 5b d6 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820327c:	89 c3                	mov    %eax,%ebx
 820327e:	e9 b5 00 00 00       	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 8203283:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8203286:	89 04 24             	mov    %eax,(%esp)
 8203289:	e8 56 13 03 00       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 820328e:	84 c0                	test   %al,%al
 8203290:	74 4e                	je     82032e0 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x606>
 8203292:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 8203296:	0f b7 d0             	movzwl %ax,%edx
 8203299:	8b 45 c8             	mov    -0x38(%ebp),%eax
 820329c:	89 54 24 04          	mov    %edx,0x4(%esp)
 82032a0:	89 04 24             	mov    %eax,(%esp)
 82032a3:	e8 84 20 3c 00       	call   85c532c <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt>
 82032a8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82032ab:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82032af:	74 2f                	je     82032e0 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x606>
 82032b1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82032b4:	89 04 24             	mov    %eax,(%esp)
 82032b7:	e8 96 1c 3c 00       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 82032bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82032bf:	0f b6 c0             	movzbl %al,%eax
 82032c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82032c6:	c7 44 24 04 5a 00 00 	movl   $0x5a,0x4(%esp)
 82032cd:	00 
 82032ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 82032d1:	89 04 24             	mov    %eax,(%esp)
 82032d4:	e8 69 8c 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82032d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 82032de:	eb 58                	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 82032e0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82032e3:	8b 00                	mov    (%eax),%eax
 82032e5:	83 c0 08             	add    $0x8,%eax
 82032e8:	8b 08                	mov    (%eax),%ecx
 82032ea:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 82032ee:	0f b7 d0             	movzwl %ax,%edx
 82032f1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 82032f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 82032f8:	8d 55 95             	lea    -0x6b(%ebp),%edx
 82032fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82032ff:	89 04 24             	mov    %eax,(%esp)
 8203302:	ff d1                	call   *%ecx
 8203304:	83 f0 01             	xor    $0x1,%eax
 8203307:	84 c0                	test   %al,%al
 8203309:	74 0b                	je     8203316 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x63c>
 820330b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 820330e:	89 04 24             	mov    %eax,(%esp)
 8203311:	e8 3c 1c 3c 00       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 8203316:	bb 00 00 00 00       	mov    $0x0,%ebx
 820331b:	eb 1b                	jmp    8203338 <_ZN26Dispatcher_CompleteDisplay12dispatch_sigEP5CUserR9PacketBuf+0x65e>
 820331d:	89 d3                	mov    %edx,%ebx
 820331f:	89 c6                	mov    %eax,%esi
 8203321:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8203324:	89 04 24             	mov    %eax,(%esp)
 8203327:	e8 b4 48 50 00       	call   8707be0 <_ZNSsD1Ev>
 820332c:	89 f0                	mov    %esi,%eax
 820332e:	89 da                	mov    %ebx,%edx
 8203330:	89 04 24             	mov    %eax,(%esp)
 8203333:	e8 18 04 8e 00       	call   8ae3750 <_Unwind_Resume>
 8203338:	8d 45 c0             	lea    -0x40(%ebp),%eax
 820333b:	89 04 24             	mov    %eax,(%esp)
 820333e:	e8 9d 48 50 00       	call   8707be0 <_ZNSsD1Ev>
 8203343:	89 d8                	mov    %ebx,%eax
 8203345:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 820334b:	5b                   	pop    %ebx
 820334c:	5e                   	pop    %esi
 820334d:	5f                   	pop    %edi
 820334e:	5d                   	pop    %ebp
 820334f:	c3                   	ret

```

```c
// Dispatcher_CompleteDisplay::dispatch_sig @ 0x8202cda

/* Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CompleteDisplay::dispatch_sig
          (Dispatcher_CompleteDisplay *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSyncSlangFilter *this_00;
  CDataManager *this_01;
  CPrivateStoreMgr *this_02;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  PrivateStoreItem local_bc [7];
  int local_b5 [14];
  int iStack_7c;
  short sStack_78;
  char local_76 [2];
  short local_74 [2];
  char local_6f;
  char local_6e [40];
  ushort local_46;
  string local_44;
  int local_40;
  ISeller *local_3c;
  byte local_36;
  allocator<char> local_35;
  cMyTrace local_34 [16];
  int local_24;
  uint local_20;
  
  bVar9 = 0;
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 == 3) &&
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 != 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (bVar8) {
    uVar3 = LineFunc(0x9984,
                     "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar3;
  }
  local_24 = 0;
  local_36 = 0;
  pcVar5 = &local_6f;
  uVar6 = 0x29;
  bVar8 = ((uint)pcVar5 & 1) != 0;
  if (bVar8) {
    local_6f = '\0';
    pcVar5 = local_6e;
    uVar6 = 0x28;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar8) {
    *pcVar5 = '\0';
  }
  local_3c = (ISeller *)0x0;
  private_store::PrivateStoreItem::PrivateStoreItem(local_bc);
  local_40 = 0;
  cVar1 = PacketBuf::get_int(param_2,&local_40);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0x998e,
                     "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar3;
  }
  if (0x28 < local_40) {
    uVar3 = LineFunc(0x9990,
                     "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar3;
  }
  cVar1 = PacketBuf::get_str(param_2,&local_6f,0x29,local_40);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0x9993,
                     "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar3;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08202ea8 to 08202eac has its CatchHandler @ 08202eaf */
  std::string::string((string *)&local_44,&local_6f,(allocator *)&local_35);
  std::allocator<char>::~allocator(&local_35);
                    /* try { // try from 08202ed5 to 08203315 has its CatchHandler @ 0820331d */
  this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar1 = CSyncSlangFilter::HasSlang(this_00,&local_44);
  if (cVar1 == '\0') {
    this_01 = (CDataManager *)G_CDataManager();
    cVar1 = CDataManager::hasSpecialCharacter(this_01,&local_6f);
    if (cVar1 == '\0') {
      bVar8 = false;
      goto LAB_08202f11;
    }
  }
  bVar8 = true;
LAB_08202f11:
  if (bVar8) {
    CUser::SendCmdErrorPacket(param_1,0x5a,0x9f);
    uVar3 = 0;
  }
  else {
    this_02 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreSeller(this_02,&local_3c,param_1);
    cVar1 = PacketBuf::get_byte(param_2,&local_36);
    if (cVar1 == '\x01') {
      uVar6 = private_store::CPrivateStore::GetState((CPrivateStore *)local_3c);
      cMyTrace::cMyTrace(local_34,
                         "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",
                         0x99a6,0);
      cMyTrace::operator()
                (local_34,"(private_store::CPrivateStore*)seller)->GetState()=%d",uVar6 & 0xff);
      uVar6 = private_store::CPrivateStore::GetState((CPrivateStore *)local_3c);
      printf("(private_store::CPrivateStore*)seller)->GetState()=%d",uVar6 & 0xff);
      cVar1 = private_store::CPrivateStore::GetState((CPrivateStore *)local_3c);
      if (cVar1 == '\x01') {
        if (local_36 == 0) {
          uVar3 = LineFunc(0x99ad,
                           "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
        else {
          for (local_24 = 0; local_24 < (int)(uint)local_36; local_24 = local_24 + 1) {
            cVar1 = PacketBuf::get_short(param_2,&sStack_78);
            if ((((cVar1 == '\x01') &&
                 (cVar1 = PacketBuf::get_int(param_2,&iStack_7c), cVar1 == '\x01')) &&
                (cVar1 = PacketBuf::get_byte(param_2,local_76), cVar1 == '\x01')) &&
               ((cVar1 = PacketBuf::get_short(param_2,local_74), cVar1 == '\x01' &&
                (cVar1 = PacketBuf::get_int(param_2,local_b5), cVar1 == '\x01')))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              uVar3 = LineFunc(0x99bd,
                               "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_08203338;
            }
            if ((local_76[0] != '\x01') && (local_b5[0] < 1)) {
              uVar3 = LineFunc(0x99c0,
                               "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_08203338;
            }
            iVar7 = (int)local_74[0];
            iVar2 = GetInvenTypeFromItemSpace((int)local_76[0]);
            cVar1 = CUser::CheckItemLock(param_1,iVar2,iVar7);
            if (cVar1 != '\0') {
              private_store::CPrivateStore::ResetItems((CPrivateStore *)local_3c);
              CUser::SendCmdErrorPacket(param_1,0x5a,0xd5);
              uVar3 = 0;
              goto LAB_08203338;
            }
            cVar1 = (**(code **)(*(int *)local_3c + 0x10))(local_3c,local_bc,local_24);
            if (cVar1 != '\x01') {
              private_store::CPrivateStore::ResetItems((CPrivateStore *)local_3c);
              CUser::SendCmdErrorPacket(param_1,0x5a,0x11);
              uVar3 = 0;
              goto LAB_08203338;
            }
          }
          cVar1 = PacketBuf::get_short(param_2,&local_46);
          if (cVar1 == '\x01') {
            cVar1 = private_store::CPrivateStore::isDollCreated((CPrivateStore *)local_3c);
            if ((cVar1 == '\0') ||
               (local_20 = private_store::CPrivateStore::CheckPrivateStoreDoll((ushort)local_3c),
               local_20 == 0)) {
              cVar1 = (**(code **)(*(int *)local_3c + 8))(local_3c,&local_6f,local_46);
              if (cVar1 != '\x01') {
                private_store::CPrivateStore::ResetItems((CPrivateStore *)local_3c);
              }
              uVar3 = 0;
            }
            else {
              private_store::CPrivateStore::ResetItems((CPrivateStore *)local_3c);
              CUser::SendCmdErrorPacket(param_1,0x5a,local_20 & 0xff);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = LineFunc(0x99e9,
                             "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = LineFunc(0x99a4,
                       "virtual int Dispatcher_CompleteDisplay::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
LAB_08203338:
  std::string::~string((string *)&local_44);
  return uVar3;
}

```

