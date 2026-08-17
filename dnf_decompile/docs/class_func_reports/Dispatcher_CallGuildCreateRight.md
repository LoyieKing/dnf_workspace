# Dispatcher_CallGuildCreateRight

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 081ffcc2 Dispatcher_CallGuildCreateRight::dispatch_sig  [0x081ffcc2-0x8200125] ===
 81ffcc2:	55                   	push   %ebp
 81ffcc3:	89 e5                	mov    %esp,%ebp
 81ffcc5:	57                   	push   %edi
 81ffcc6:	56                   	push   %esi
 81ffcc7:	53                   	push   %ebx
 81ffcc8:	83 ec 3c             	sub    $0x3c,%esp
 81ffccb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffcce:	89 04 24             	mov    %eax,(%esp)
 81ffcd1:	e8 b6 a6 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ffcd6:	83 f8 02             	cmp    $0x2,%eax
 81ffcd9:	7e 0f                	jle    81ffcea <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x28>
 81ffcdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffcde:	89 04 24             	mov    %eax,(%esp)
 81ffce1:	e8 4c 07 f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81ffce6:	85 c0                	test   %eax,%eax
 81ffce8:	75 07                	jne    81ffcf1 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x2f>
 81ffcea:	b8 01 00 00 00       	mov    $0x1,%eax
 81ffcef:	eb 05                	jmp    81ffcf6 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x34>
 81ffcf1:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffcf6:	84 c0                	test   %al,%al
 81ffcf8:	74 2b                	je     81ffd25 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x63>
 81ffcfa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ffd01:	00 
 81ffd02:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ffd09:	00 
 81ffd0a:	c7 44 24 04 e0 f7 bc 	movl   $0x8bcf7e0,0x4(%esp)
 81ffd11:	08 
 81ffd12:	c7 04 24 f4 93 00 00 	movl   $0x93f4,(%esp)
 81ffd19:	e8 b9 0b 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ffd1e:	89 c3                	mov    %eax,%ebx
 81ffd20:	e9 f7 03 00 00       	jmp    820011c <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x45a>
 81ffd25:	e8 bc 28 f6 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81ffd2a:	c7 44 24 0c 1c 00 00 	movl   $0x1c,0xc(%esp)
 81ffd31:	00 
 81ffd32:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81ffd39:	00 
 81ffd3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ffd3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ffd41:	89 04 24             	mov    %eax,(%esp)
 81ffd44:	e8 6f e9 f6 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81ffd49:	84 c0                	test   %al,%al
 81ffd4b:	74 25                	je     81ffd72 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0xb0>
 81ffd4d:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 81ffd54:	00 
 81ffd55:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 81ffd5c:	00 
 81ffd5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffd60:	89 04 24             	mov    %eax,(%esp)
 81ffd63:	e8 da c1 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ffd68:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ffd6d:	e9 aa 03 00 00       	jmp    820011c <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x45a>
 81ffd72:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81ffd77:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 81ffd7e:	00 
 81ffd7f:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ffd82:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ffd86:	89 04 24             	mov    %eax,(%esp)
 81ffd89:	e8 74 8c 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81ffd8e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81ffd91:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81ffd95:	74 27                	je     81ffdbe <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0xfc>
 81ffd97:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ffd9a:	0f b6 c0             	movzbl %al,%eax
 81ffd9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ffda1:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 81ffda8:	00 
 81ffda9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffdac:	89 04 24             	mov    %eax,(%esp)
 81ffdaf:	e8 8e c1 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ffdb4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ffdb9:	e9 5e 03 00 00       	jmp    820011c <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x45a>
 81ffdbe:	8d 45 db             	lea    -0x25(%ebp),%eax
 81ffdc1:	89 04 24             	mov    %eax,(%esp)
 81ffdc4:	e8 07 03 4e 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81ffdc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffdcc:	89 04 24             	mov    %eax,(%esp)
 81ffdcf:	e8 30 f7 02 00       	call   822f504 <_ZN15CUserCharacInfo18getCreateGuildNameEv>
 81ffdd4:	8d 55 db             	lea    -0x25(%ebp),%edx
 81ffdd7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ffddb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ffddf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ffde2:	89 04 24             	mov    %eax,(%esp)
 81ffde5:	e8 46 78 50 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81ffdea:	eb 1b                	jmp    81ffe07 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x145>
 81ffdec:	89 d3                	mov    %edx,%ebx
 81ffdee:	89 c6                	mov    %eax,%esi
 81ffdf0:	8d 45 db             	lea    -0x25(%ebp),%eax
 81ffdf3:	89 04 24             	mov    %eax,(%esp)
 81ffdf6:	e8 f5 02 4e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81ffdfb:	89 f0                	mov    %esi,%eax
 81ffdfd:	89 da                	mov    %ebx,%edx
 81ffdff:	89 04 24             	mov    %eax,(%esp)
 81ffe02:	e8 49 39 8e 00       	call   8ae3750 <_Unwind_Resume>
 81ffe07:	8d 45 db             	lea    -0x25(%ebp),%eax
 81ffe0a:	89 04 24             	mov    %eax,(%esp)
 81ffe0d:	e8 de 02 4e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81ffe12:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ffe15:	89 04 24             	mov    %eax,(%esp)
 81ffe18:	e8 d3 66 50 00       	call   87064f0 <_ZNKSs5c_strEv>
 81ffe1d:	89 04 24             	mov    %eax,(%esp)
 81ffe20:	e8 47 2f 8c 00       	call   8ac2d6c <_ZN23restrict_inputting_name23isUtf8StrInUnicodeRangeEPKc>
 81ffe25:	83 f0 01             	xor    $0x1,%eax
 81ffe28:	84 c0                	test   %al,%al
 81ffe2a:	74 25                	je     81ffe51 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x18f>
 81ffe2c:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 81ffe33:	00 
 81ffe34:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 81ffe3b:	00 
 81ffe3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffe3f:	89 04 24             	mov    %eax,(%esp)
 81ffe42:	e8 fb c0 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ffe47:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ffe4c:	e9 c0 02 00 00       	jmp    8200111 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 81ffe51:	e8 ab 51 03 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81ffe56:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81ffe59:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ffe5d:	89 04 24             	mov    %eax,(%esp)
 81ffe60:	e8 09 e3 42 00       	call   862e16e <_ZN16CSyncSlangFilter12HasSlangNameERKSs>
 81ffe65:	84 c0                	test   %al,%al
 81ffe67:	74 25                	je     81ffe8e <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x1cc>
 81ffe69:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 81ffe70:	00 
 81ffe71:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 81ffe78:	00 
 81ffe79:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffe7c:	89 04 24             	mov    %eax,(%esp)
 81ffe7f:	e8 be c0 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ffe84:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ffe89:	e9 83 02 00 00       	jmp    8200111 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 81ffe8e:	e8 6e 51 03 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81ffe93:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81ffe96:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ffe9a:	89 04 24             	mov    %eax,(%esp)
 81ffe9d:	e8 80 e7 42 00       	call   862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>
 81ffea2:	84 c0                	test   %al,%al
 81ffea4:	75 22                	jne    81ffec8 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x206>
 81ffea6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffea9:	89 04 24             	mov    %eax,(%esp)
 81ffeac:	e8 53 f6 02 00       	call   822f504 <_ZN15CUserCharacInfo18getCreateGuildNameEv>
 81ffeb1:	89 c3                	mov    %eax,%ebx
 81ffeb3:	e8 e3 c2 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ffeb8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ffebc:	89 04 24             	mov    %eax,(%esp)
 81ffebf:	e8 7c 32 16 00       	call   8363140 <_ZN12CDataManager19hasSpecialCharacterEPKc>
 81ffec4:	84 c0                	test   %al,%al
 81ffec6:	74 07                	je     81ffecf <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x20d>
 81ffec8:	b8 01 00 00 00       	mov    $0x1,%eax
 81ffecd:	eb 05                	jmp    81ffed4 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x212>
 81ffecf:	b8 00 00 00 00       	mov    $0x0,%eax
 81ffed4:	84 c0                	test   %al,%al
 81ffed6:	74 25                	je     81ffefd <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x23b>
 81ffed8:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 81ffedf:	00 
 81ffee0:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 81ffee7:	00 
 81ffee8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffeeb:	89 04 24             	mov    %eax,(%esp)
 81ffeee:	e8 4f c0 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ffef3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ffef8:	e9 14 02 00 00       	jmp    8200111 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 81ffefd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fff00:	89 04 24             	mov    %eax,(%esp)
 81fff03:	e8 64 f5 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81fff08:	85 c0                	test   %eax,%eax
 81fff0a:	75 0f                	jne    81fff1b <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x259>
 81fff0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fff0f:	89 04 24             	mov    %eax,(%esp)
 81fff12:	e8 55 f6 02 00       	call   822f56c <_ZN15CUserCharacInfo22get_guild_create_rightEv>
 81fff17:	3c 02                	cmp    $0x2,%al
 81fff19:	75 07                	jne    81fff22 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x260>
 81fff1b:	b8 01 00 00 00       	mov    $0x1,%eax
 81fff20:	eb 05                	jmp    81fff27 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x265>
 81fff22:	b8 00 00 00 00       	mov    $0x0,%eax
 81fff27:	84 c0                	test   %al,%al
 81fff29:	74 25                	je     81fff50 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x28e>
 81fff2b:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 81fff32:	00 
 81fff33:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 81fff3a:	00 
 81fff3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fff3e:	89 04 24             	mov    %eax,(%esp)
 81fff41:	e8 fc bf 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81fff46:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fff4b:	e9 c1 01 00 00       	jmp    8200111 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 81fff50:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fff53:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81fff5a:	00 
 81fff5b:	89 04 24             	mov    %eax,(%esp)
 81fff5e:	e8 77 c1 46 00       	call   866c0da <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt>
 81fff63:	83 f0 01             	xor    $0x1,%eax
 81fff66:	84 c0                	test   %al,%al
 81fff68:	74 25                	je     81fff8f <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x2cd>
 81fff6a:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 81fff71:	00 
 81fff72:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 81fff79:	00 
 81fff7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fff7d:	89 04 24             	mov    %eax,(%esp)
 81fff80:	e8 bd bf 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81fff85:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fff8a:	e9 82 01 00 00       	jmp    8200111 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 81fff8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fff92:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81fff99:	00 
 81fff9a:	89 04 24             	mov    %eax,(%esp)
 81fff9d:	e8 38 c1 46 00       	call   866c0da <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt>
 81fffa2:	83 f0 01             	xor    $0x1,%eax
 81fffa5:	84 c0                	test   %al,%al
 81fffa7:	74 25                	je     81fffce <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x30c>
 81fffa9:	c7 44 24 08 71 00 00 	movl   $0x71,0x8(%esp)
 81fffb0:	00 
 81fffb1:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 81fffb8:	00 
 81fffb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fffbc:	89 04 24             	mov    %eax,(%esp)
 81fffbf:	e8 7e bf 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81fffc4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fffc9:	e9 43 01 00 00       	jmp    8200111 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 81fffce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fffd1:	89 04 24             	mov    %eax,(%esp)
 81fffd4:	e8 a5 a2 ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81fffd9:	89 04 24             	mov    %eax,(%esp)
 81fffdc:	e8 f5 47 f3 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81fffe1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81fffe4:	e8 b2 c1 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 81fffe9:	8b 80 0c a5 00 00    	mov    0xa50c(%eax),%eax
 81fffef:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ffff2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ffff5:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81ffff8:	7e 25                	jle    820001f <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x35d>
 81ffffa:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 8200001:	00 
 8200002:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 8200009:	00 
 820000a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820000d:	89 04 24             	mov    %eax,(%esp)
 8200010:	e8 2d bf 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8200015:	bb 00 00 00 00       	mov    $0x0,%ebx
 820001a:	e9 f2 00 00 00       	jmp    8200111 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 820001f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200022:	89 04 24             	mov    %eax,(%esp)
 8200025:	e8 64 a2 ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 820002a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8200031:	00 
 8200032:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 8200039:	00 
 820003a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 820003d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8200041:	89 04 24             	mov    %eax,(%esp)
 8200044:	e8 03 f5 2f 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8200049:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8200050:	00 
 8200051:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200054:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200058:	8b 45 08             	mov    0x8(%ebp),%eax
 820005b:	89 04 24             	mov    %eax,(%esp)
 820005e:	e8 7b fb ff ff       	call   81ffbde <_ZN31Dispatcher_CallGuildCreateRight28send_packet_guildcreaterightEP5CUserh>
 8200063:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200066:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820006d:	00 
 820006e:	89 04 24             	mov    %eax,(%esp)
 8200071:	e8 1a f5 02 00       	call   822f590 <_ZN15CUserCharacInfo22set_guild_create_rightEh>
 8200076:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200079:	89 04 24             	mov    %eax,(%esp)
 820007c:	e8 ef 31 45 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 8200081:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200084:	89 04 24             	mov    %eax,(%esp)
 8200087:	e8 9a f4 02 00       	call   822f526 <_ZN15CUserCharacInfo18getCreateGuildAddrEv>
 820008c:	89 c7                	mov    %eax,%edi
 820008e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200091:	89 04 24             	mov    %eax,(%esp)
 8200094:	e8 6b f4 02 00       	call   822f504 <_ZN15CUserCharacInfo18getCreateGuildNameEv>
 8200099:	89 c6                	mov    %eax,%esi
 820009b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820009e:	89 04 24             	mov    %eax,(%esp)
 82000a1:	e8 a8 bb ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82000a6:	89 c3                	mov    %eax,%ebx
 82000a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82000ab:	89 04 24             	mov    %eax,(%esp)
 82000ae:	e8 dd bb ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 82000b3:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 82000b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82000bd:	89 14 24             	mov    %edx,(%esp)
 82000c0:	e8 f3 d2 f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 82000c5:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82000c9:	89 74 24 08          	mov    %esi,0x8(%esp)
 82000cd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82000d1:	89 04 24             	mov    %eax,(%esp)
 82000d4:	e8 2b e2 26 00       	call   846e304 <_ZN17CGuildServerProxy15SendGuildCreateEjPcS0_>
 82000d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82000dc:	89 04 24             	mov    %eax,(%esp)
 82000df:	e8 aa f3 02 00       	call   822f48e <_ZN15CUserCharacInfo20resetGuildCreateFlagEv>
 82000e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82000e7:	89 04 24             	mov    %eax,(%esp)
 82000ea:	e8 bd f3 02 00       	call   822f4ac <_ZN15CUserCharacInfo22resetTempGuildNameAddrEv>
 82000ef:	bb 00 00 00 00       	mov    $0x0,%ebx
 82000f4:	eb 1b                	jmp    8200111 <_ZN31Dispatcher_CallGuildCreateRight12dispatch_sigEP5CUserR9PacketBuf+0x44f>
 82000f6:	89 d3                	mov    %edx,%ebx
 82000f8:	89 c6                	mov    %eax,%esi
 82000fa:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82000fd:	89 04 24             	mov    %eax,(%esp)
 8200100:	e8 db 7a 50 00       	call   8707be0 <_ZNSsD1Ev>
 8200105:	89 f0                	mov    %esi,%eax
 8200107:	89 da                	mov    %ebx,%edx
 8200109:	89 04 24             	mov    %eax,(%esp)
 820010c:	e8 3f 36 8e 00       	call   8ae3750 <_Unwind_Resume>
 8200111:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8200114:	89 04 24             	mov    %eax,(%esp)
 8200117:	e8 c4 7a 50 00       	call   8707be0 <_ZNSsD1Ev>
 820011c:	89 d8                	mov    %ebx,%eax
 820011e:	83 c4 3c             	add    $0x3c,%esp
 8200121:	5b                   	pop    %ebx
 8200122:	5e                   	pop    %esi
 8200123:	5f                   	pop    %edi
 8200124:	5d                   	pop    %ebp
 8200125:	c3                   	ret

```

```c
// Dispatcher_CallGuildCreateRight::dispatch_sig @ 0x81ffcc2

/* Dispatcher_CallGuildCreateRight::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CallGuildCreateRight::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ServiceRestrictManager *pSVar5;
  char *pcVar6;
  CSyncSlangFilter *pCVar7;
  CDataManager *this;
  CInventory *pCVar8;
  char *pcVar9;
  uint uVar10;
  string local_30;
  allocator<char> local_29;
  uint local_28;
  int local_24;
  int local_20;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x93f4,
                     "virtual int Dispatcher_CallGuildCreateRight::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_2,1,0x1c);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0xd1);
    return 0;
  }
  local_28 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,6);
  if (local_28 != 0) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,local_28 & 0xff);
    return 0;
  }
  std::allocator<char>::allocator();
  pcVar6 = (char *)CUserCharacInfo::getCreateGuildName((CUserCharacInfo *)param_2);
                    /* try { // try from 081ffde5 to 081ffde9 has its CatchHandler @ 081ffdec */
  std::string::string((string *)&local_30,pcVar6,(allocator *)&local_29);
  std::allocator<char>::~allocator(&local_29);
                    /* try { // try from 081ffe18 to 082000d8 has its CatchHandler @ 082000f6 */
  pcVar6 = (char *)std::string::c_str((string *)&local_30);
  cVar2 = restrict_inputting_name::isUtf8StrInUnicodeRange(pcVar6);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x9f);
    goto LAB_08200111;
  }
  pCVar7 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar2 = CSyncSlangFilter::HasSlangName(pCVar7,&local_30);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x9f);
    goto LAB_08200111;
  }
  pCVar7 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar2 = CSyncSlangFilter::HasSlang(pCVar7,&local_30);
  if (cVar2 == '\0') {
    pcVar6 = (char *)CUserCharacInfo::getCreateGuildName((CUserCharacInfo *)param_2);
    this = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasSpecialCharacter(this,pcVar6);
    if (cVar2 != '\0') goto LAB_081ffec8;
    bVar1 = false;
  }
  else {
LAB_081ffec8:
    bVar1 = true;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x9f);
  }
  else {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if ((iVar3 == 0) &&
       (cVar2 = CUserCharacInfo::get_guild_create_right((CUserCharacInfo *)param_2), cVar2 != '\x02'
       )) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x20);
    }
    else {
      cVar2 = CUserCharacInfo::isSetGuildCreateFlag((CUserCharacInfo *)param_2,2);
      if (cVar2 == '\x01') {
        cVar2 = CUserCharacInfo::isSetGuildCreateFlag((CUserCharacInfo *)param_2,4);
        if (cVar2 == '\x01') {
          pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
          local_24 = CInventory::get_money(pCVar8);
          iVar3 = G_CDataManager();
          local_20 = *(int *)(iVar3 + 0xa50c);
          if (local_24 < local_20) {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x1f);
          }
          else {
            pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            CInventory::use_money(pCVar8,local_20,0xb,1);
            send_packet_guildcreateright(param_1,(uchar)param_2);
            CUserCharacInfo::set_guild_create_right((CUserCharacInfo *)param_2,'\x01');
            CUser::UpdateData((CUser *)param_2);
            CUserCharacInfo::getCreateGuildAddr((CUserCharacInfo *)param_2);
            pcVar6 = (char *)CUserCharacInfo::getCreateGuildName((CUserCharacInfo *)param_2);
            pcVar9 = (char *)CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            uVar4 = CUser::GetServerGroup((CUser *)param_2);
            uVar10 = CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                               (GlobalData::s_guild_proxy_mgr,uVar4);
            CGuildServerProxy::SendGuildCreate(uVar10,pcVar9,pcVar6);
            CUserCharacInfo::resetGuildCreateFlag((CUserCharacInfo *)param_2);
            CUserCharacInfo::resetTempGuildNameAddr((CUserCharacInfo *)param_2);
          }
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x71);
        }
      }
      else {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x47,0x6d);
      }
    }
  }
LAB_08200111:
  std::string::~string((string *)&local_30);
  return 0;
}

```

---

## send_packet_guildcreateright

```asm
// === 081ffbde Dispatcher_CallGuildCreateRight::send_packet_guildcreateright  [0x081ffbde-0x81ffcc1] ===
 81ffbde:	55                   	push   %ebp
 81ffbdf:	89 e5                	mov    %esp,%ebp
 81ffbe1:	56                   	push   %esi
 81ffbe2:	53                   	push   %ebx
 81ffbe3:	83 ec 30             	sub    $0x30,%esp
 81ffbe6:	8b 45 10             	mov    0x10(%ebp),%eax
 81ffbe9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 81ffbec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffbef:	89 04 24             	mov    %eax,(%esp)
 81ffbf2:	e8 55 e1 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ffbf7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffbfa:	89 04 24             	mov    %eax,(%esp)
 81ffbfd:	e8 e4 bc ec ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81ffc02:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81ffc09:	00 
 81ffc0a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ffc11:	00 
 81ffc12:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffc15:	89 04 24             	mov    %eax,(%esp)
 81ffc18:	e8 df bc ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ffc1d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ffc24:	00 
 81ffc25:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffc28:	89 04 24             	mov    %eax,(%esp)
 81ffc2b:	e8 f0 bc ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ffc30:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ffc37:	00 
 81ffc38:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffc3b:	89 04 24             	mov    %eax,(%esp)
 81ffc3e:	e8 61 a2 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ffc43:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffc46:	89 04 24             	mov    %eax,(%esp)
 81ffc49:	e8 30 a6 ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ffc4e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81ffc51:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ffc55:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ffc5c:	00 
 81ffc5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ffc64:	00 
 81ffc65:	89 04 24             	mov    %eax,(%esp)
 81ffc68:	e8 4f ca 2f 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 81ffc6d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ffc74:	00 
 81ffc75:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffc78:	89 04 24             	mov    %eax,(%esp)
 81ffc7b:	e8 d8 bc ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ffc80:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffc83:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ffc87:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ffc8a:	89 04 24             	mov    %eax,(%esp)
 81ffc8d:	e8 28 89 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ffc92:	eb 1b                	jmp    81ffcaf <_ZN31Dispatcher_CallGuildCreateRight28send_packet_guildcreaterightEP5CUserh+0xd1>
 81ffc94:	89 d3                	mov    %edx,%ebx
 81ffc96:	89 c6                	mov    %eax,%esi
 81ffc98:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffc9b:	89 04 24             	mov    %eax,(%esp)
 81ffc9e:	e8 dd e1 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ffca3:	89 f0                	mov    %esi,%eax
 81ffca5:	89 da                	mov    %ebx,%edx
 81ffca7:	89 04 24             	mov    %eax,(%esp)
 81ffcaa:	e8 a1 3a 8e 00       	call   8ae3750 <_Unwind_Resume>
 81ffcaf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ffcb2:	89 04 24             	mov    %eax,(%esp)
 81ffcb5:	e8 c6 e1 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ffcba:	83 c4 30             	add    $0x30,%esp
 81ffcbd:	5b                   	pop    %ebx
 81ffcbe:	5e                   	pop    %esi
 81ffcbf:	5d                   	pop    %ebp
 81ffcc0:	c3                   	ret
 81ffcc1:	90                   	nop

```

```c
// Dispatcher_CallGuildCreateRight::send_packet_guildcreateright @ 0x81ffbde

/* Dispatcher_CallGuildCreateRight::send_packet_guildcreateright(CUser*, unsigned char) */

void Dispatcher_CallGuildCreateRight::send_packet_guildcreateright(CUser *param_1,uchar param_2)

{
  CInventory *pCVar1;
  undefined3 in_stack_00000009;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081ffbfd to 081ffc91 has its CatchHandler @ 081ffc94 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(_param_2);
  CInventory::MakeItemPacket(pCVar1,1,0,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send((CUser *)_param_2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

