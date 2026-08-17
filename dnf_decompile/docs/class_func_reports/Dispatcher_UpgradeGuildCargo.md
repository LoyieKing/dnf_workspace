# Dispatcher_UpgradeGuildCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08222958 Dispatcher_UpgradeGuildCargo::dispatch_sig  [0x08222958-0x8222dff] ===
 8222958:	55                   	push   %ebp
 8222959:	89 e5                	mov    %esp,%ebp
 822295b:	57                   	push   %edi
 822295c:	56                   	push   %esi
 822295d:	53                   	push   %ebx
 822295e:	81 ec ac 00 00 00    	sub    $0xac,%esp
 8222964:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222967:	89 04 24             	mov    %eax,(%esp)
 822296a:	e8 1d 7a eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 822296f:	83 f8 03             	cmp    $0x3,%eax
 8222972:	75 0f                	jne    8222983 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8222974:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222977:	89 04 24             	mov    %eax,(%esp)
 822297a:	e8 b3 da ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 822297f:	85 c0                	test   %eax,%eax
 8222981:	75 07                	jne    822298a <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8222983:	b8 01 00 00 00       	mov    $0x1,%eax
 8222988:	eb 05                	jmp    822298f <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x37>
 822298a:	b8 00 00 00 00       	mov    $0x0,%eax
 822298f:	84 c0                	test   %al,%al
 8222991:	74 29                	je     82229bc <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x64>
 8222993:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822299a:	00 
 822299b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82229a2:	00 
 82229a3:	c7 44 24 04 20 cc bc 	movl   $0x8bccc20,0x4(%esp)
 82229aa:	08 
 82229ab:	c7 04 24 7c dc 00 00 	movl   $0xdc7c,(%esp)
 82229b2:	e8 20 df 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82229b7:	e9 39 04 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 82229bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82229bf:	89 04 24             	mov    %eax,(%esp)
 82229c2:	e8 a5 ca 00 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 82229c7:	85 c0                	test   %eax,%eax
 82229c9:	0f 94 c0             	sete   %al
 82229cc:	84 c0                	test   %al,%al
 82229ce:	74 25                	je     82229f5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x9d>
 82229d0:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 82229d7:	00 
 82229d8:	c7 44 24 04 0d 01 00 	movl   $0x10d,0x4(%esp)
 82229df:	00 
 82229e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82229e3:	89 04 24             	mov    %eax,(%esp)
 82229e6:	e8 57 95 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82229eb:	b8 00 00 00 00       	mov    $0x0,%eax
 82229f0:	e9 00 04 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 82229f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82229f8:	89 04 24             	mov    %eax,(%esp)
 82229fb:	e8 d8 d7 00 00       	call   82301d8 <_ZN5CUser16IsExistGuildAgitEv>
 8222a00:	83 f0 01             	xor    $0x1,%eax
 8222a03:	84 c0                	test   %al,%al
 8222a05:	74 25                	je     8222a2c <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0xd4>
 8222a07:	c7 44 24 08 b5 00 00 	movl   $0xb5,0x8(%esp)
 8222a0e:	00 
 8222a0f:	c7 44 24 04 0d 01 00 	movl   $0x10d,0x4(%esp)
 8222a16:	00 
 8222a17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222a1a:	89 04 24             	mov    %eax,(%esp)
 8222a1d:	e8 20 95 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222a22:	b8 00 00 00 00       	mov    $0x0,%eax
 8222a27:	e9 c9 03 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 8222a2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222a2f:	89 04 24             	mov    %eax,(%esp)
 8222a32:	e8 3b d7 00 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 8222a37:	83 f0 01             	xor    $0x1,%eax
 8222a3a:	84 c0                	test   %al,%al
 8222a3c:	74 25                	je     8222a63 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x10b>
 8222a3e:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8222a45:	00 
 8222a46:	c7 44 24 04 0d 01 00 	movl   $0x10d,0x4(%esp)
 8222a4d:	00 
 8222a4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222a51:	89 04 24             	mov    %eax,(%esp)
 8222a54:	e8 e9 94 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222a59:	b8 00 00 00 00       	mov    $0x0,%eax
 8222a5e:	e9 92 03 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 8222a63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222a66:	89 04 24             	mov    %eax,(%esp)
 8222a69:	e8 7e d7 00 00       	call   82301ec <_ZN5CUser21GetGuildCargoCapacityEv>
 8222a6e:	89 c3                	mov    %eax,%ebx
 8222a70:	e8 26 97 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8222a75:	05 0c a5 00 00       	add    $0xa50c,%eax
 8222a7a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8222a7e:	89 04 24             	mov    %eax,(%esp)
 8222a81:	e8 a0 6c 75 00       	call   8979726 <_ZN20GuildParameterScript23getGuildCargoUpradeInfoEi>
 8222a86:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8222a89:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8222a8d:	75 25                	jne    8222ab4 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 8222a8f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8222a96:	00 
 8222a97:	c7 44 24 04 0d 01 00 	movl   $0x10d,0x4(%esp)
 8222a9e:	00 
 8222a9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222aa2:	89 04 24             	mov    %eax,(%esp)
 8222aa5:	e8 98 94 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222aaa:	b8 00 00 00 00       	mov    $0x0,%eax
 8222aaf:	e9 41 03 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 8222ab4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8222ab7:	8b 40 08             	mov    0x8(%eax),%eax
 8222aba:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8222abd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8222ac0:	8b 40 0c             	mov    0xc(%eax),%eax
 8222ac3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8222ac6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8222ac9:	8b 40 04             	mov    0x4(%eax),%eax
 8222acc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8222acf:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8222ad2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222ad5:	89 04 24             	mov    %eax,(%esp)
 8222ad8:	e8 d1 d6 00 00       	call   82301ae <_ZN5CUser21GetGuildPowerWarPointEv>
 8222add:	39 c3                	cmp    %eax,%ebx
 8222adf:	0f 97 c0             	seta   %al
 8222ae2:	84 c0                	test   %al,%al
 8222ae4:	74 25                	je     8222b0b <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x1b3>
 8222ae6:	c7 44 24 08 b3 00 00 	movl   $0xb3,0x8(%esp)
 8222aed:	00 
 8222aee:	c7 44 24 04 0d 01 00 	movl   $0x10d,0x4(%esp)
 8222af5:	00 
 8222af6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222af9:	89 04 24             	mov    %eax,(%esp)
 8222afc:	e8 41 94 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222b01:	b8 00 00 00 00       	mov    $0x0,%eax
 8222b06:	e9 ea 02 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 8222b0b:	8d 85 6b ff ff ff    	lea    -0x95(%ebp),%eax
 8222b11:	89 04 24             	mov    %eax,(%esp)
 8222b14:	e8 3b 8d ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8222b19:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222b1c:	89 04 24             	mov    %eax,(%esp)
 8222b1f:	e8 5a 77 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8222b24:	8d 95 6b ff ff ff    	lea    -0x95(%ebp),%edx
 8222b2a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8222b2e:	c7 44 24 04 bd 0c 00 	movl   $0xcbd,0x4(%esp)
 8222b35:	00 
 8222b36:	89 04 24             	mov    %eax,(%esp)
 8222b39:	e8 ee 93 2d 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 8222b3e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8222b41:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8222b45:	74 36                	je     8222b7d <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x225>
 8222b47:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 8222b4b:	74 0b                	je     8222b58 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x200>
 8222b4d:	8b 85 72 ff ff ff    	mov    -0x8e(%ebp),%eax
 8222b53:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8222b56:	7d 25                	jge    8222b7d <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x225>
 8222b58:	c7 44 24 08 b9 00 00 	movl   $0xb9,0x8(%esp)
 8222b5f:	00 
 8222b60:	c7 44 24 04 0d 01 00 	movl   $0x10d,0x4(%esp)
 8222b67:	00 
 8222b68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222b6b:	89 04 24             	mov    %eax,(%esp)
 8222b6e:	e8 cf 93 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222b73:	b8 00 00 00 00       	mov    $0x0,%eax
 8222b78:	e9 78 02 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 8222b7d:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8222b80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222b83:	89 04 24             	mov    %eax,(%esp)
 8222b86:	e8 d9 d5 00 00       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 8222b8b:	8b 80 a0 00 00 00    	mov    0xa0(%eax),%eax
 8222b91:	39 c3                	cmp    %eax,%ebx
 8222b93:	0f 97 c0             	seta   %al
 8222b96:	84 c0                	test   %al,%al
 8222b98:	74 25                	je     8222bbf <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x267>
 8222b9a:	c7 44 24 08 ba 00 00 	movl   $0xba,0x8(%esp)
 8222ba1:	00 
 8222ba2:	c7 44 24 04 0d 01 00 	movl   $0x10d,0x4(%esp)
 8222ba9:	00 
 8222baa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222bad:	89 04 24             	mov    %eax,(%esp)
 8222bb0:	e8 8d 93 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222bb5:	b8 00 00 00 00       	mov    $0x0,%eax
 8222bba:	e9 36 02 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 8222bbf:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8222bc3:	74 47                	je     8222c0c <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x2b4>
 8222bc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222bc8:	89 04 24             	mov    %eax,(%esp)
 8222bcb:	e8 be 76 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8222bd0:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8222bd7:	00 
 8222bd8:	c7 44 24 10 20 00 00 	movl   $0x20,0x10(%esp)
 8222bdf:	00 
 8222be0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8222be3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8222be7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8222bea:	89 54 24 08          	mov    %edx,0x8(%esp)
 8222bee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8222bf5:	00 
 8222bf6:	89 04 24             	mov    %eax,(%esp)
 8222bf9:	e8 0e 14 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8222bfe:	83 f0 01             	xor    $0x1,%eax
 8222c01:	84 c0                	test   %al,%al
 8222c03:	74 07                	je     8222c0c <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x2b4>
 8222c05:	b8 01 00 00 00       	mov    $0x1,%eax
 8222c0a:	eb 05                	jmp    8222c11 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x2b9>
 8222c0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8222c11:	84 c0                	test   %al,%al
 8222c13:	74 25                	je     8222c3a <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x2e2>
 8222c15:	c7 44 24 08 b9 00 00 	movl   $0xb9,0x8(%esp)
 8222c1c:	00 
 8222c1d:	c7 44 24 04 0d 01 00 	movl   $0x10d,0x4(%esp)
 8222c24:	00 
 8222c25:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222c28:	89 04 24             	mov    %eax,(%esp)
 8222c2b:	e8 12 93 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222c30:	b8 00 00 00 00       	mov    $0x0,%eax
 8222c35:	e9 bb 01 00 00       	jmp    8222df5 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x49d>
 8222c3a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8222c3d:	89 04 24             	mov    %eax,(%esp)
 8222c40:	e8 07 b1 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8222c45:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8222c4c:	00 
 8222c4d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8222c54:	00 
 8222c55:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8222c58:	89 04 24             	mov    %eax,(%esp)
 8222c5b:	e8 9c 8c ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8222c60:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8222c67:	00 
 8222c68:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8222c6b:	89 04 24             	mov    %eax,(%esp)
 8222c6e:	e8 ad 8c ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8222c73:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8222c7a:	00 
 8222c7b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8222c7e:	89 04 24             	mov    %eax,(%esp)
 8222c81:	e8 1e 72 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8222c86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222c89:	89 04 24             	mov    %eax,(%esp)
 8222c8c:	e8 ed 75 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8222c91:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8222c94:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8222c98:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8222c9b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8222c9f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8222ca6:	00 
 8222ca7:	89 04 24             	mov    %eax,(%esp)
 8222caa:	e8 0d 9a 2d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8222caf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8222cb6:	00 
 8222cb7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8222cba:	89 04 24             	mov    %eax,(%esp)
 8222cbd:	e8 96 8c ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8222cc2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8222cc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222cc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222ccc:	89 04 24             	mov    %eax,(%esp)
 8222ccf:	e8 e6 58 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8222cd4:	eb 1b                	jmp    8222cf1 <_ZN28Dispatcher_UpgradeGuildCargo12dispatch_sigEP5CUserR9PacketBuf+0x399>
 8222cd6:	89 d3                	mov    %edx,%ebx
 8222cd8:	89 c6                	mov    %eax,%esi
 8222cda:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8222cdd:	89 04 24             	mov    %eax,(%esp)
 8222ce0:	e8 9b b1 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8222ce5:	89 f0                	mov    %esi,%eax
 8222ce7:	89 da                	mov    %ebx,%edx
 8222ce9:	89 04 24             	mov    %eax,(%esp)
 8222cec:	e8 5f 0a 8c 00       	call   8ae3750 <_Unwind_Resume>
 8222cf1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8222cf4:	89 04 24             	mov    %eax,(%esp)
 8222cf7:	e8 84 b1 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8222cfc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8222cff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222d03:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222d06:	89 04 24             	mov    %eax,(%esp)
 8222d09:	e8 ae d4 00 00       	call   82301bc <_ZN5CUser26DecreaseGuildPowerWarPointEj>
 8222d0e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8222d11:	89 c7                	mov    %eax,%edi
 8222d13:	f7 df                	neg    %edi
 8222d15:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8222d1c:	ff 
 8222d1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222d20:	89 04 24             	mov    %eax,(%esp)
 8222d23:	e8 78 b2 42 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8222d28:	89 c6                	mov    %eax,%esi
 8222d2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222d2d:	89 04 24             	mov    %eax,(%esp)
 8222d30:	e8 37 c7 00 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8222d35:	89 c3                	mov    %eax,%ebx
 8222d37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222d3a:	89 04 24             	mov    %eax,(%esp)
 8222d3d:	e8 4e 8f ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8222d42:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8222d48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222d4c:	89 14 24             	mov    %edx,(%esp)
 8222d4f:	e8 64 a6 ef ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8222d54:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8222d58:	89 74 24 08          	mov    %esi,0x8(%esp)
 8222d5c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8222d60:	89 04 24             	mov    %eax,(%esp)
 8222d63:	e8 ce bf 24 00       	call   846ed36 <_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji>
 8222d68:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 8222d6b:	89 04 24             	mov    %eax,(%esp)
 8222d6e:	e8 77 92 00 00       	call   822bfea <_ZN32Packet_Guild_Guild_Cargo_UpgradeC1Ev>
 8222d73:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222d76:	89 04 24             	mov    %eax,(%esp)
 8222d79:	e8 ee c6 00 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8222d7e:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8222d81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222d84:	89 04 24             	mov    %eax,(%esp)
 8222d87:	e8 c2 8e ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8222d8c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8222d8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222d92:	89 04 24             	mov    %eax,(%esp)
 8222d95:	e8 52 d4 00 00       	call   82301ec <_ZN5CUser21GetGuildCargoCapacityEv>
 8222d9a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8222d9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222da0:	89 04 24             	mov    %eax,(%esp)
 8222da3:	e8 44 d4 00 00       	call   82301ec <_ZN5CUser21GetGuildCargoCapacityEv>
 8222da8:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8222dab:	8b 52 10             	mov    0x10(%edx),%edx
 8222dae:	01 d0                	add    %edx,%eax
 8222db0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8222db3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8222db6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8222db9:	0f b7 45 b8          	movzwl -0x48(%ebp),%eax
 8222dbd:	0f b7 f0             	movzwl %ax,%esi
 8222dc0:	8d 5d b6             	lea    -0x4a(%ebp),%ebx
 8222dc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222dc6:	89 04 24             	mov    %eax,(%esp)
 8222dc9:	e8 c2 8e ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8222dce:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8222dd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222dd8:	89 14 24             	mov    %edx,(%esp)
 8222ddb:	e8 d8 a5 ef ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8222de0:	89 74 24 08          	mov    %esi,0x8(%esp)
 8222de4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8222de8:	89 04 24             	mov    %eax,(%esp)
 8222deb:	e8 de ae 24 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 8222df0:	b8 00 00 00 00       	mov    $0x0,%eax
 8222df5:	81 c4 ac 00 00 00    	add    $0xac,%esp
 8222dfb:	5b                   	pop    %ebx
 8222dfc:	5e                   	pop    %esi
 8222dfd:	5f                   	pop    %edi
 8222dfe:	5d                   	pop    %ebp
 8222dff:	c3                   	ret

```

```c
// Dispatcher_UpgradeGuildCargo::dispatch_sig @ 0x8222958

/* Dispatcher_UpgradeGuildCargo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_UpgradeGuildCargo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  CInventory *pCVar7;
  uint uVar8;
  CGuildServerProxy *pCVar9;
  Inven_Item local_99 [7];
  int local_92;
  PacketGuard local_5c [14];
  Packet_Guild_Guild_Cargo_Upgrade local_4e [2];
  ushort local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xdc7c,
                     "virtual int Dispatcher_UpgradeGuildCargo::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  if (iVar3 == 0) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,100);
    return 0;
  }
  cVar2 = CUser::IsExistGuildAgit((CUser *)param_2);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xb5);
    return 0;
  }
  cVar2 = CUser::IsGuildMaster((CUser *)param_2);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0x24);
    return 0;
  }
  iVar3 = CUser::GetGuildCargoCapacity((CUser *)param_2);
  iVar5 = G_CDataManager();
  local_30 = GuildParameterScript::getGuildCargoUpradeInfo
                       ((GuildParameterScript *)(iVar5 + 0xa50c),iVar3);
  if (local_30 == 0) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,1);
    return 0;
  }
  uVar8 = *(uint *)(local_30 + 8);
  local_28 = *(int *)(local_30 + 0xc);
  local_24 = *(uint *)(local_30 + 4);
  local_2c = uVar8;
  uVar6 = CUser::GetGuildPowerWarPoint((CUser *)param_2);
  if (uVar6 < uVar8) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xb3);
    return 0;
  }
  Inven_Item::Inven_Item(local_99);
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  local_20 = CInventory::GetInvenData(pCVar7,0xcbd,local_99);
  uVar8 = local_24;
  if ((local_28 != 0) && ((local_20 == -1 || (local_92 < local_28)))) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xb9);
    return 0;
  }
  iVar3 = CUser::GetGuildDBInfo((CUser *)param_2);
  if (*(uint *)(iVar3 + 0xa0) < uVar8) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xba);
    return 0;
  }
  if (local_28 != 0) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    cVar2 = CInventory::delete_item(pCVar7,1,local_20,local_28,0x20,1);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_08222c11;
    }
  }
  bVar1 = false;
LAB_08222c11:
  if (bVar1) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x10d,0xb9);
  }
  else {
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 08222c5b to 08222cd3 has its CatchHandler @ 08222cd6 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_5c,1);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    CInventory::MakeItemPacket(pCVar7,1,local_20,local_5c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
    CUser::Send((CUser *)param_2,local_5c);
    PacketGuard::~PacketGuard(local_5c);
    CUser::DecreaseGuildPowerWarPoint((CUser *)param_2,local_2c);
    iVar3 = -local_2c;
    uVar8 = CUser::get_charac_no((CUser *)param_2,-1);
    uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    pCVar9 = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4)
    ;
    CGuildServerProxy::SendIncreaseDecreasePowerWarPoint(pCVar9,uVar6,uVar8,iVar3);
    Packet_Guild_Guild_Cargo_Upgrade::Packet_Guild_Guild_Cargo_Upgrade(local_4e);
    local_44 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    local_40 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    local_3c = CUser::GetGuildCargoCapacity((CUser *)param_2);
    local_38 = CUser::GetGuildCargoCapacity((CUser *)param_2);
    local_38 = local_38 + *(int *)(local_30 + 0x10);
    local_34 = local_24;
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    pCVar9 = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4)
    ;
    CGuildServerProxy::SendTcpPacket(pCVar9,(char *)local_4e,(uint)local_4c);
  }
  return 0;
}

```

