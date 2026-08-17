# Dispatcher_SecurityCardIssue

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08209c8c Dispatcher_SecurityCardIssue::dispatch_sig  [0x08209c8c-0x820a0f5] ===
 8209c8c:	55                   	push   %ebp
 8209c8d:	89 e5                	mov    %esp,%ebp
 8209c8f:	57                   	push   %edi
 8209c90:	56                   	push   %esi
 8209c91:	53                   	push   %ebx
 8209c92:	81 ec 8c 01 00 00    	sub    $0x18c,%esp
 8209c98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209c9b:	89 04 24             	mov    %eax,(%esp)
 8209c9e:	e8 e9 06 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8209ca3:	83 f8 03             	cmp    $0x3,%eax
 8209ca6:	0f 95 c0             	setne  %al
 8209ca9:	84 c0                	test   %al,%al
 8209cab:	74 2b                	je     8209cd8 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x4c>
 8209cad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209cb4:	00 
 8209cb5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8209cbc:	00 
 8209cbd:	c7 44 24 04 20 e5 bc 	movl   $0x8bce520,0x4(%esp)
 8209cc4:	08 
 8209cc5:	c7 04 24 96 a5 00 00 	movl   $0xa596,(%esp)
 8209ccc:	e8 06 6c 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8209cd1:	89 c3                	mov    %eax,%ebx
 8209cd3:	e9 11 04 00 00       	jmp    820a0e9 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x45d>
 8209cd8:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8209cdf:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8209ce6:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8209ced:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8209cf4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8209cf7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209cfb:	8b 45 10             	mov    0x10(%ebp),%eax
 8209cfe:	89 04 24             	mov    %eax,(%esp)
 8209d01:	e8 3a 35 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8209d06:	83 f0 01             	xor    $0x1,%eax
 8209d09:	84 c0                	test   %al,%al
 8209d0b:	74 2b                	je     8209d38 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0xac>
 8209d0d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209d14:	00 
 8209d15:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8209d1c:	00 
 8209d1d:	c7 44 24 04 20 e5 bc 	movl   $0x8bce520,0x4(%esp)
 8209d24:	08 
 8209d25:	c7 04 24 9f a5 00 00 	movl   $0xa59f,(%esp)
 8209d2c:	e8 a6 6b 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8209d31:	89 c3                	mov    %eax,%ebx
 8209d33:	e9 b1 03 00 00       	jmp    820a0e9 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x45d>
 8209d38:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8209d3b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8209d3f:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8209d46:	00 
 8209d47:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8209d4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209d4e:	8b 45 10             	mov    0x10(%ebp),%eax
 8209d51:	89 04 24             	mov    %eax,(%esp)
 8209d54:	e8 63 35 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8209d59:	83 f0 01             	xor    $0x1,%eax
 8209d5c:	84 c0                	test   %al,%al
 8209d5e:	74 2b                	je     8209d8b <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0xff>
 8209d60:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209d67:	00 
 8209d68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8209d6f:	00 
 8209d70:	c7 44 24 04 20 e5 bc 	movl   $0x8bce520,0x4(%esp)
 8209d77:	08 
 8209d78:	c7 04 24 a0 a5 00 00 	movl   $0xa5a0,(%esp)
 8209d7f:	e8 53 6b 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8209d84:	89 c3                	mov    %eax,%ebx
 8209d86:	e9 5e 03 00 00       	jmp    820a0e9 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x45d>
 8209d8b:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 8209d90:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8209d93:	89 54 24 04          	mov    %edx,0x4(%esp)
 8209d97:	89 04 24             	mov    %eax,(%esp)
 8209d9a:	e8 a5 46 3f 00       	call   85fe444 <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc>
 8209d9f:	83 f0 01             	xor    $0x1,%eax
 8209da2:	84 c0                	test   %al,%al
 8209da4:	74 2b                	je     8209dd1 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x145>
 8209da6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209dad:	00 
 8209dae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8209db5:	00 
 8209db6:	c7 44 24 04 20 e5 bc 	movl   $0x8bce520,0x4(%esp)
 8209dbd:	08 
 8209dbe:	c7 04 24 a3 a5 00 00 	movl   $0xa5a3,(%esp)
 8209dc5:	e8 0d 6b 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8209dca:	89 c3                	mov    %eax,%ebx
 8209dcc:	e9 18 03 00 00       	jmp    820a0e9 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x45d>
 8209dd1:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 8209dd8:	00 
 8209dd9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8209de0:	00 
 8209de1:	8d 85 61 ff ff ff    	lea    -0x9f(%ebp),%eax
 8209de7:	89 04 24             	mov    %eax,(%esp)
 8209dea:	e8 d1 3e e7 ff       	call   807dcc0 <memset@plt>
 8209def:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8209df5:	89 04 24             	mov    %eax,(%esp)
 8209df8:	e8 2b df e7 ff       	call   8087d28 <_ZN5CSHA1C1Ev>
 8209dfd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8209e00:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8209e03:	89 54 24 08          	mov    %edx,0x8(%esp)
 8209e07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209e0b:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8209e11:	89 04 24             	mov    %eax,(%esp)
 8209e14:	e8 85 03 e8 ff       	call   808a19e <_ZN5CSHA16UpdateEPKhj>
 8209e19:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8209e1f:	89 04 24             	mov    %eax,(%esp)
 8209e22:	e8 ab 04 e8 ff       	call   808a2d2 <_ZN5CSHA15FinalEv>
 8209e27:	8d 85 61 ff ff ff    	lea    -0x9f(%ebp),%eax
 8209e2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8209e31:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8209e37:	89 04 24             	mov    %eax,(%esp)
 8209e3a:	e8 d1 05 e8 ff       	call   808a410 <_ZN5CSHA110GetHexHashEPc>
 8209e3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209e42:	89 04 24             	mov    %eax,(%esp)
 8209e45:	e8 d6 5e 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8209e4a:	89 04 24             	mov    %eax,(%esp)
 8209e4d:	e8 bc 50 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 8209e52:	84 c0                	test   %al,%al
 8209e54:	0f 84 87 00 00 00    	je     8209ee1 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x255>
 8209e5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209e5d:	89 04 24             	mov    %eax,(%esp)
 8209e60:	e8 bb 5e 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8209e65:	89 04 24             	mov    %eax,(%esp)
 8209e68:	e8 ad 50 02 00       	call   822ef1a <_ZNK8WongWork13CSecurityCard11isCertifiedEv>
 8209e6d:	83 f0 01             	xor    $0x1,%eax
 8209e70:	84 c0                	test   %al,%al
 8209e72:	74 2b                	je     8209e9f <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x213>
 8209e74:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8209e7b:	00 
 8209e7c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8209e83:	00 
 8209e84:	c7 44 24 04 20 e5 bc 	movl   $0x8bce520,0x4(%esp)
 8209e8b:	08 
 8209e8c:	c7 04 24 b3 a5 00 00 	movl   $0xa5b3,(%esp)
 8209e93:	e8 3f 6a 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8209e98:	89 c3                	mov    %eax,%ebx
 8209e9a:	e9 3c 02 00 00       	jmp    820a0db <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 8209e9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209ea2:	89 04 24             	mov    %eax,(%esp)
 8209ea5:	e8 76 5e 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8209eaa:	89 04 24             	mov    %eax,(%esp)
 8209ead:	e8 74 50 02 00       	call   822ef26 <_ZN8WongWork13CSecurityCard10getFailCntEv>
 8209eb2:	83 f8 02             	cmp    $0x2,%eax
 8209eb5:	0f 97 c0             	seta   %al
 8209eb8:	84 c0                	test   %al,%al
 8209eba:	74 25                	je     8209ee1 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x255>
 8209ebc:	c7 44 24 08 7a 00 00 	movl   $0x7a,0x8(%esp)
 8209ec3:	00 
 8209ec4:	c7 44 24 04 a4 00 00 	movl   $0xa4,0x4(%esp)
 8209ecb:	00 
 8209ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209ecf:	89 04 24             	mov    %eax,(%esp)
 8209ed2:	e8 6b 20 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8209ed7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8209edc:	e9 fa 01 00 00       	jmp    820a0db <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 8209ee1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209ee4:	89 04 24             	mov    %eax,(%esp)
 8209ee7:	e8 42 5e 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 8209eec:	89 04 24             	mov    %eax,(%esp)
 8209eef:	e8 e6 50 02 00       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 8209ef4:	84 c0                	test   %al,%al
 8209ef6:	0f 84 81 00 00 00    	je     8209f7d <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x2f1>
 8209efc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209eff:	89 04 24             	mov    %eax,(%esp)
 8209f02:	e8 27 5e 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 8209f07:	89 04 24             	mov    %eax,(%esp)
 8209f0a:	e8 7f 50 02 00       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 8209f0f:	83 f8 02             	cmp    $0x2,%eax
 8209f12:	0f 9f c0             	setg   %al
 8209f15:	84 c0                	test   %al,%al
 8209f17:	74 25                	je     8209f3e <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 8209f19:	c7 44 24 08 88 00 00 	movl   $0x88,0x8(%esp)
 8209f20:	00 
 8209f21:	c7 44 24 04 a4 00 00 	movl   $0xa4,0x4(%esp)
 8209f28:	00 
 8209f29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209f2c:	89 04 24             	mov    %eax,(%esp)
 8209f2f:	e8 0e 20 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8209f34:	bb 00 00 00 00       	mov    $0x0,%ebx
 8209f39:	e9 9d 01 00 00       	jmp    820a0db <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 8209f3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209f41:	89 04 24             	mov    %eax,(%esp)
 8209f44:	e8 e5 5d 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 8209f49:	89 04 24             	mov    %eax,(%esp)
 8209f4c:	e8 95 50 02 00       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 8209f51:	83 f0 01             	xor    $0x1,%eax
 8209f54:	84 c0                	test   %al,%al
 8209f56:	74 25                	je     8209f7d <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x2f1>
 8209f58:	c7 44 24 08 86 00 00 	movl   $0x86,0x8(%esp)
 8209f5f:	00 
 8209f60:	c7 44 24 04 a4 00 00 	movl   $0xa4,0x4(%esp)
 8209f67:	00 
 8209f68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8209f6b:	89 04 24             	mov    %eax,(%esp)
 8209f6e:	e8 cf 1f 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8209f73:	bb 00 00 00 00       	mov    $0x0,%ebx
 8209f78:	e9 5e 01 00 00       	jmp    820a0db <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 8209f7d:	c7 45 d2 00 00 00 00 	movl   $0x0,-0x2e(%ebp)
 8209f84:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 8209f8a:	8d 55 b1             	lea    -0x4f(%ebp),%edx
 8209f8d:	bb 21 00 00 00       	mov    $0x21,%ebx
 8209f92:	b8 00 00 00 00       	mov    $0x0,%eax
 8209f97:	89 d1                	mov    %edx,%ecx
 8209f99:	83 e1 01             	and    $0x1,%ecx
 8209f9c:	85 c9                	test   %ecx,%ecx
 8209f9e:	74 08                	je     8209fa8 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x31c>
 8209fa0:	88 02                	mov    %al,(%edx)
 8209fa2:	83 c2 01             	add    $0x1,%edx
 8209fa5:	83 eb 01             	sub    $0x1,%ebx
 8209fa8:	89 d1                	mov    %edx,%ecx
 8209faa:	83 e1 02             	and    $0x2,%ecx
 8209fad:	85 c9                	test   %ecx,%ecx
 8209faf:	74 09                	je     8209fba <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x32e>
 8209fb1:	66 89 02             	mov    %ax,(%edx)
 8209fb4:	83 c2 02             	add    $0x2,%edx
 8209fb7:	83 eb 02             	sub    $0x2,%ebx
 8209fba:	89 d9                	mov    %ebx,%ecx
 8209fbc:	c1 e9 02             	shr    $0x2,%ecx
 8209fbf:	89 d7                	mov    %edx,%edi
 8209fc1:	f3 ab                	rep stos %eax,%es:(%edi)
 8209fc3:	89 fa                	mov    %edi,%edx
 8209fc5:	89 d9                	mov    %ebx,%ecx
 8209fc7:	83 e1 02             	and    $0x2,%ecx
 8209fca:	85 c9                	test   %ecx,%ecx
 8209fcc:	74 06                	je     8209fd4 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x348>
 8209fce:	66 89 02             	mov    %ax,(%edx)
 8209fd1:	83 c2 02             	add    $0x2,%edx
 8209fd4:	89 d9                	mov    %ebx,%ecx
 8209fd6:	83 e1 01             	and    $0x1,%ecx
 8209fd9:	85 c9                	test   %ecx,%ecx
 8209fdb:	74 05                	je     8209fe2 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x356>
 8209fdd:	88 02                	mov    %al,(%edx)
 8209fdf:	83 c2 01             	add    $0x1,%edx
 8209fe2:	8d 55 8a             	lea    -0x76(%ebp),%edx
 8209fe5:	bb 27 00 00 00       	mov    $0x27,%ebx
 8209fea:	b8 00 00 00 00       	mov    $0x0,%eax
 8209fef:	89 d1                	mov    %edx,%ecx
 8209ff1:	83 e1 02             	and    $0x2,%ecx
 8209ff4:	85 c9                	test   %ecx,%ecx
 8209ff6:	74 09                	je     820a001 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x375>
 8209ff8:	66 89 02             	mov    %ax,(%edx)
 8209ffb:	83 c2 02             	add    $0x2,%edx
 8209ffe:	83 eb 02             	sub    $0x2,%ebx
 820a001:	89 d9                	mov    %ebx,%ecx
 820a003:	c1 e9 02             	shr    $0x2,%ecx
 820a006:	89 d7                	mov    %edx,%edi
 820a008:	f3 ab                	rep stos %eax,%es:(%edi)
 820a00a:	89 fa                	mov    %edi,%edx
 820a00c:	89 d9                	mov    %ebx,%ecx
 820a00e:	83 e1 02             	and    $0x2,%ecx
 820a011:	85 c9                	test   %ecx,%ecx
 820a013:	74 06                	je     820a01b <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x38f>
 820a015:	66 89 02             	mov    %ax,(%edx)
 820a018:	83 c2 02             	add    $0x2,%edx
 820a01b:	89 d9                	mov    %ebx,%ecx
 820a01d:	83 e1 01             	and    $0x1,%ecx
 820a020:	85 c9                	test   %ecx,%ecx
 820a022:	74 05                	je     820a029 <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x39d>
 820a024:	88 02                	mov    %al,(%edx)
 820a026:	83 c2 01             	add    $0x1,%edx
 820a029:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 820a02e:	8d 55 8a             	lea    -0x76(%ebp),%edx
 820a031:	89 54 24 04          	mov    %edx,0x4(%esp)
 820a035:	89 04 24             	mov    %eax,(%esp)
 820a038:	e8 7d 41 3f 00       	call   85fe1ba <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc>
 820a03d:	89 85 94 fe ff ff    	mov    %eax,-0x16c(%ebp)
 820a043:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 820a048:	8d 55 b1             	lea    -0x4f(%ebp),%edx
 820a04b:	89 54 24 04          	mov    %edx,0x4(%esp)
 820a04f:	89 04 24             	mov    %eax,(%esp)
 820a052:	e8 95 40 3f 00       	call   85fe0ec <_ZN8WongWork19CSecurityCardCenter17generateServerKeyEPc>
 820a057:	89 c7                	mov    %eax,%edi
 820a059:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 820a05e:	8d 55 d2             	lea    -0x2e(%ebp),%edx
 820a061:	89 54 24 04          	mov    %edx,0x4(%esp)
 820a065:	89 04 24             	mov    %eax,(%esp)
 820a068:	e8 11 41 3f 00       	call   85fe17e <_ZN8WongWork19CSecurityCardCenter15generateCertKeyEPc>
 820a06d:	89 c6                	mov    %eax,%esi
 820a06f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a072:	89 04 24             	mov    %eax,(%esp)
 820a075:	e8 f4 02 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820a07a:	89 c3                	mov    %eax,%ebx
 820a07c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a07f:	89 04 24             	mov    %eax,(%esp)
 820a082:	e8 0f ec eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 820a087:	8b 95 94 fe ff ff    	mov    -0x16c(%ebp),%edx
 820a08d:	89 54 24 18          	mov    %edx,0x18(%esp)
 820a091:	8d 95 61 ff ff ff    	lea    -0x9f(%ebp),%edx
 820a097:	89 54 24 14          	mov    %edx,0x14(%esp)
 820a09b:	8d 55 d8             	lea    -0x28(%ebp),%edx
 820a09e:	89 54 24 10          	mov    %edx,0x10(%esp)
 820a0a2:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 820a0a6:	89 74 24 08          	mov    %esi,0x8(%esp)
 820a0aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820a0ae:	89 04 24             	mov    %eax,(%esp)
 820a0b1:	e8 c4 14 22 00       	call   842b57a <_ZN20DB_SecurityCardIssue11makeRequestEijPKcS1_S1_S1_S1_>
 820a0b6:	bb 00 00 00 00       	mov    $0x0,%ebx
 820a0bb:	eb 1e                	jmp    820a0db <_ZN28Dispatcher_SecurityCardIssue12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 820a0bd:	89 d3                	mov    %edx,%ebx
 820a0bf:	89 c6                	mov    %eax,%esi
 820a0c1:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 820a0c7:	89 04 24             	mov    %eax,(%esp)
 820a0ca:	e8 7d dc e7 ff       	call   8087d4c <_ZN5CSHA1D1Ev>
 820a0cf:	89 f0                	mov    %esi,%eax
 820a0d1:	89 da                	mov    %ebx,%edx
 820a0d3:	89 04 24             	mov    %eax,(%esp)
 820a0d6:	e8 75 96 8d 00       	call   8ae3750 <_Unwind_Resume>
 820a0db:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 820a0e1:	89 04 24             	mov    %eax,(%esp)
 820a0e4:	e8 63 dc e7 ff       	call   8087d4c <_ZN5CSHA1D1Ev>
 820a0e9:	89 d8                	mov    %ebx,%eax
 820a0eb:	81 c4 8c 01 00 00    	add    $0x18c,%esp
 820a0f1:	5b                   	pop    %ebx
 820a0f2:	5e                   	pop    %esi
 820a0f3:	5f                   	pop    %edi
 820a0f4:	5d                   	pop    %ebp
 820a0f5:	c3                   	ret

```

```c
// Dispatcher_SecurityCardIssue::dispatch_sig @ 0x8209c8c

/* Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SecurityCardIssue::dispatch_sig
          (Dispatcher_SecurityCardIssue *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSecurityCard *pCVar4;
  uint uVar5;
  CPad *pCVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  char acStackY_1062 [3782];
  CSHA1 local_168 [197];
  char local_a3 [41];
  char local_7a [39];
  char local_53;
  char local_52 [32];
  char local_32 [18];
  uint local_20 [4];
  
  bVar12 = 0;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 != 3) {
    uVar3 = LineFunc(0xa596,
                     "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar3;
  }
  local_20[0] = 0;
  local_32[6] = '\0';
  local_32[7] = '\0';
  local_32[8] = '\0';
  local_32[9] = '\0';
  local_32[10] = '\0';
  local_32[0xb] = '\0';
  local_32[0xc] = '\0';
  local_32[0xd] = '\0';
  local_32[0xe] = '\0';
  local_32[0xf] = '\0';
  local_32[0x10] = '\0';
  local_32[0x11] = '\0';
  cVar1 = PacketBuf::get_int(param_2,local_20);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa59f,
                     "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar3;
  }
  cVar1 = PacketBuf::get_str(param_2,local_32 + 6,0xc,local_20[0]);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa5a0,
                     "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar3;
  }
  cVar1 = WongWork::CSecurityCardCenter::checkPhoneNumber
                    (GlobalData::s_securityCardCenter,local_32 + 6);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa5a3,
                     "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar3;
  }
  memset(local_a3,0,0x29);
  CSHA1::CSHA1(local_168);
                    /* try { // try from 08209e14 to 0820a0b5 has its CatchHandler @ 0820a0bd */
  CSHA1::Update(local_168,(uchar *)(local_32 + 6),local_20[0]);
  CSHA1::Final(local_168);
  CSHA1::GetHexHash(local_168,local_a3);
  pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar1 = WongWork::CSecurityCard::isActivate(pCVar4);
  if (cVar1 != '\0') {
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    cVar1 = WongWork::CSecurityCard::isCertified(pCVar4);
    if (cVar1 != '\x01') {
      uVar3 = LineFunc(0xa5b3,
                       "virtual int Dispatcher_SecurityCardIssue::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      goto LAB_0820a0db;
    }
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar5 = WongWork::CSecurityCard::getFailCnt(pCVar4);
    if (2 < uVar5) {
      CUser::SendCmdErrorPacket(param_1,0xa4,0x7a);
      uVar3 = 0;
      goto LAB_0820a0db;
    }
  }
  pCVar6 = (CPad *)CUser::getPad(param_1);
  cVar1 = Sanicova::CPad::isActivate(pCVar6);
  if (cVar1 != '\0') {
    pCVar6 = (CPad *)CUser::getPad(param_1);
    iVar2 = Sanicova::CPad::getFailCnt(pCVar6);
    if (2 < iVar2) {
      CUser::SendCmdErrorPacket(param_1,0xa4,0x88);
      uVar3 = 0;
      goto LAB_0820a0db;
    }
    pCVar6 = (CPad *)CUser::getPad(param_1);
    cVar1 = Sanicova::CPad::isCertified(pCVar6);
    if (cVar1 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0xa4,0x86);
      uVar3 = 0;
      goto LAB_0820a0db;
    }
  }
  local_32[0] = '\0';
  local_32[1] = '\0';
  local_32[2] = '\0';
  local_32[3] = '\0';
  local_32[4] = '\0';
  local_32[5] = '\0';
  pcVar10 = &local_53;
  uVar5 = 0x21;
  bVar11 = ((uint)pcVar10 & 1) != 0;
  if (bVar11) {
    local_53 = '\0';
    pcVar10 = local_52;
    uVar5 = 0x20;
  }
  if (((uint)pcVar10 & 2) != 0) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10 = pcVar10 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10 = pcVar10 + 2;
  }
  if (!bVar11) {
    *pcVar10 = '\0';
  }
  pcVar10 = local_7a;
  uVar5 = 0x27;
  bVar11 = ((uint)pcVar10 & 2) != 0;
  if (bVar11) {
    local_7a[0] = '\0';
    local_7a[1] = '\0';
    pcVar10 = local_7a + 2;
    uVar5 = 0x25;
  }
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
  }
  if (!bVar11) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10 = pcVar10 + 2;
  }
  *pcVar10 = '\0';
  pcVar10 = (char *)WongWork::CSecurityCardCenter::generateCardData
                              (GlobalData::s_securityCardCenter,local_7a);
  pcVar7 = (char *)WongWork::CSecurityCardCenter::generateServerKey
                             (GlobalData::s_securityCardCenter,&local_53);
  pcVar8 = (char *)WongWork::CSecurityCardCenter::generateCertKey
                             (GlobalData::s_securityCardCenter,local_32);
  uVar5 = CUser::get_acc_id(param_1);
  iVar2 = CUser::GetUID(param_1);
  DB_SecurityCardIssue::makeRequest(iVar2,uVar5,pcVar8,pcVar7,local_32 + 6,local_a3,pcVar10);
  uVar3 = 0;
LAB_0820a0db:
  CSHA1::~CSHA1(local_168);
  return uVar3;
}

```

