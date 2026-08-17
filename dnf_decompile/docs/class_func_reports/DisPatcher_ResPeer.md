# DisPatcher_ResPeer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f088e DisPatcher_ResPeer::dispatch_sig  [0x081f088e-0x81f2d0b] ===
 81f088e:	55                   	push   %ebp
 81f088f:	89 e5                	mov    %esp,%ebp
 81f0891:	57                   	push   %edi
 81f0892:	56                   	push   %esi
 81f0893:	53                   	push   %ebx
 81f0894:	81 ec ec 00 00 00    	sub    $0xec,%esp
 81f089a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f089d:	89 04 24             	mov    %eax,(%esp)
 81f08a0:	e8 e7 9a ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f08a5:	83 f8 03             	cmp    $0x3,%eax
 81f08a8:	0f 95 c0             	setne  %al
 81f08ab:	84 c0                	test   %al,%al
 81f08ad:	74 0a                	je     81f08b9 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 81f08af:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f08b4:	e9 45 24 00 00       	jmp    81f2cfe <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2470>
 81f08b9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f08bf:	89 04 24             	mov    %eax,(%esp)
 81f08c2:	e8 85 d4 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f08c7:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81f08cd:	83 c0 0d             	add    $0xd,%eax
 81f08d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f08d4:	8b 45 10             	mov    0x10(%ebp),%eax
 81f08d7:	89 04 24             	mov    %eax,(%esp)
 81f08da:	e8 d1 c7 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81f08df:	83 f0 01             	xor    $0x1,%eax
 81f08e2:	84 c0                	test   %al,%al
 81f08e4:	74 2b                	je     81f0911 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x83>
 81f08e6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f08ed:	00 
 81f08ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f08f5:	00 
 81f08f6:	c7 44 24 04 60 02 bd 	movl   $0x8bd0260,0x4(%esp)
 81f08fd:	08 
 81f08fe:	c7 04 24 d5 77 00 00 	movl   $0x77d5,(%esp)
 81f0905:	e8 cd ff 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f090a:	89 c3                	mov    %eax,%ebx
 81f090c:	e9 df 23 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f0911:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81f0917:	83 c0 0f             	add    $0xf,%eax
 81f091a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f091e:	8b 45 10             	mov    0x10(%ebp),%eax
 81f0921:	89 04 24             	mov    %eax,(%esp)
 81f0924:	e8 f9 c5 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f0929:	83 f0 01             	xor    $0x1,%eax
 81f092c:	84 c0                	test   %al,%al
 81f092e:	74 2b                	je     81f095b <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xcd>
 81f0930:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f0937:	00 
 81f0938:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f093f:	00 
 81f0940:	c7 44 24 04 60 02 bd 	movl   $0x8bd0260,0x4(%esp)
 81f0947:	08 
 81f0948:	c7 04 24 d6 77 00 00 	movl   $0x77d6,(%esp)
 81f094f:	e8 83 ff 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f0954:	89 c3                	mov    %eax,%ebx
 81f0956:	e9 95 23 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f095b:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81f0961:	83 c0 10             	add    $0x10,%eax
 81f0964:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0968:	8b 45 10             	mov    0x10(%ebp),%eax
 81f096b:	89 04 24             	mov    %eax,(%esp)
 81f096e:	e8 cd c8 39 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81f0973:	83 f0 01             	xor    $0x1,%eax
 81f0976:	84 c0                	test   %al,%al
 81f0978:	74 2b                	je     81f09a5 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x117>
 81f097a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f0981:	00 
 81f0982:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f0989:	00 
 81f098a:	c7 44 24 04 60 02 bd 	movl   $0x8bd0260,0x4(%esp)
 81f0991:	08 
 81f0992:	c7 04 24 d7 77 00 00 	movl   $0x77d7,(%esp)
 81f0999:	e8 39 ff 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f099e:	89 c3                	mov    %eax,%ebx
 81f09a0:	e9 4b 23 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f09a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f09a8:	89 04 24             	mov    %eax,(%esp)
 81f09ab:	e8 38 ff 03 00       	call   82308e8 <_ZNK5CUser22GetReceivedRequestTypeEv>
 81f09b0:	0f be c0             	movsbl %al,%eax
 81f09b3:	83 f8 06             	cmp    $0x6,%eax
 81f09b6:	74 38                	je     81f09f0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x162>
 81f09b8:	83 f8 06             	cmp    $0x6,%eax
 81f09bb:	7f 07                	jg     81f09c4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x136>
 81f09bd:	83 f8 05             	cmp    $0x5,%eax
 81f09c0:	74 0e                	je     81f09d0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x142>
 81f09c2:	eb 4c                	jmp    81f0a10 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x182>
 81f09c4:	83 f8 07             	cmp    $0x7,%eax
 81f09c7:	74 07                	je     81f09d0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x142>
 81f09c9:	83 f8 08             	cmp    $0x8,%eax
 81f09cc:	74 22                	je     81f09f0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x162>
 81f09ce:	eb 40                	jmp    81f0a10 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x182>
 81f09d0:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f09d7:	3c 05                	cmp    $0x5,%al
 81f09d9:	74 5c                	je     81f0a37 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1a9>
 81f09db:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f09e2:	3c 07                	cmp    $0x7,%al
 81f09e4:	74 54                	je     81f0a3a <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1ac>
 81f09e6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f09eb:	e9 00 23 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f09f0:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f09f7:	3c 06                	cmp    $0x6,%al
 81f09f9:	74 42                	je     81f0a3d <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1af>
 81f09fb:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f0a02:	3c 08                	cmp    $0x8,%al
 81f0a04:	74 3a                	je     81f0a40 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1b2>
 81f0a06:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0a0b:	e9 e0 22 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f0a10:	0f b6 b5 6f ff ff ff 	movzbl -0x91(%ebp),%esi
 81f0a17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0a1a:	89 04 24             	mov    %eax,(%esp)
 81f0a1d:	e8 c6 fe 03 00       	call   82308e8 <_ZNK5CUser22GetReceivedRequestTypeEv>
 81f0a22:	89 f2                	mov    %esi,%edx
 81f0a24:	38 c2                	cmp    %al,%dl
 81f0a26:	0f 95 c0             	setne  %al
 81f0a29:	84 c0                	test   %al,%al
 81f0a2b:	74 14                	je     81f0a41 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1b3>
 81f0a2d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0a32:	e9 b9 22 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f0a37:	90                   	nop
 81f0a38:	eb 07                	jmp    81f0a41 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1b3>
 81f0a3a:	90                   	nop
 81f0a3b:	eb 04                	jmp    81f0a41 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1b3>
 81f0a3d:	90                   	nop
 81f0a3e:	eb 01                	jmp    81f0a41 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1b3>
 81f0a40:	90                   	nop
 81f0a41:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0a44:	89 04 24             	mov    %eax,(%esp)
 81f0a47:	e8 70 fe 03 00       	call   82308bc <_ZN5CUser23InitReceivedRequestTypeEv>
 81f0a4c:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f0a53:	0f be c0             	movsbl %al,%eax
 81f0a56:	83 f8 08             	cmp    $0x8,%eax
 81f0a59:	0f 87 6c 22 00 00    	ja     81f2ccb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243d>
 81f0a5f:	8b 04 85 c4 21 bc 08 	mov    0x8bc21c4(,%eax,4),%eax
 81f0a66:	ff e0                	jmp    *%eax
 81f0a68:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0a6e:	89 04 24             	mov    %eax,(%esp)
 81f0a71:	e8 d6 d2 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f0a76:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f0a7d:	0f b7 f0             	movzwl %ax,%esi
 81f0a80:	e8 22 99 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f0a85:	89 74 24 04          	mov    %esi,0x4(%esp)
 81f0a89:	89 04 24             	mov    %eax,(%esp)
 81f0a8c:	e8 0b 41 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81f0a91:	89 45 84             	mov    %eax,-0x7c(%ebp)
 81f0a94:	83 7d 84 00          	cmpl   $0x0,-0x7c(%ebp)
 81f0a98:	0f 85 9a 00 00 00    	jne    81f0b38 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2aa>
 81f0a9e:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f0aa5:	00 
 81f0aa6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0aad:	00 
 81f0aae:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0ab4:	89 04 24             	mov    %eax,(%esp)
 81f0ab7:	e8 40 ae ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f0abc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0ac3:	00 
 81f0ac4:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0aca:	89 04 24             	mov    %eax,(%esp)
 81f0acd:	e8 4e ae ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0ad2:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f0ad9:	00 
 81f0ada:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0ae0:	89 04 24             	mov    %eax,(%esp)
 81f0ae3:	e8 38 ae ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0ae8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0aef:	00 
 81f0af0:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0af6:	89 04 24             	mov    %eax,(%esp)
 81f0af9:	e8 22 ae ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0afe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0b05:	00 
 81f0b06:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0b0c:	89 04 24             	mov    %eax,(%esp)
 81f0b0f:	e8 44 ae ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f0b14:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0b1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0b1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0b21:	89 04 24             	mov    %eax,(%esp)
 81f0b24:	e8 91 7a 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f0b29:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0b2e:	be 00 00 00 00       	mov    $0x0,%esi
 81f0b33:	e9 7c 11 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0b38:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0b3b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81f0b3e:	74 1c                	je     81f0b5c <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2ce>
 81f0b40:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0b43:	89 04 24             	mov    %eax,(%esp)
 81f0b46:	e8 03 b1 ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81f0b4b:	89 c6                	mov    %eax,%esi
 81f0b4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0b50:	89 04 24             	mov    %eax,(%esp)
 81f0b53:	e8 f6 b0 ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81f0b58:	39 c6                	cmp    %eax,%esi
 81f0b5a:	75 07                	jne    81f0b63 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2d5>
 81f0b5c:	b8 01 00 00 00       	mov    $0x1,%eax
 81f0b61:	eb 05                	jmp    81f0b68 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2da>
 81f0b63:	b8 00 00 00 00       	mov    $0x0,%eax
 81f0b68:	84 c0                	test   %al,%al
 81f0b6a:	74 0f                	je     81f0b7b <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2ed>
 81f0b6c:	bb 28 78 00 00       	mov    $0x7828,%ebx
 81f0b71:	be 00 00 00 00       	mov    $0x0,%esi
 81f0b76:	e9 39 11 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0b7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0b7e:	89 04 24             	mov    %eax,(%esp)
 81f0b81:	e8 06 98 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f0b86:	83 f8 05             	cmp    $0x5,%eax
 81f0b89:	74 10                	je     81f0b9b <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x30d>
 81f0b8b:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0b8e:	89 04 24             	mov    %eax,(%esp)
 81f0b91:	e8 f6 97 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f0b96:	83 f8 05             	cmp    $0x5,%eax
 81f0b99:	75 07                	jne    81f0ba2 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x314>
 81f0b9b:	b8 01 00 00 00       	mov    $0x1,%eax
 81f0ba0:	eb 05                	jmp    81f0ba7 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x319>
 81f0ba2:	b8 00 00 00 00       	mov    $0x0,%eax
 81f0ba7:	84 c0                	test   %al,%al
 81f0ba9:	74 0f                	je     81f0bba <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x32c>
 81f0bab:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0bb0:	be 00 00 00 00       	mov    $0x0,%esi
 81f0bb5:	e9 fa 10 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0bba:	e8 e1 44 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81f0bbf:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f0bc6:	00 
 81f0bc7:	8b 55 84             	mov    -0x7c(%ebp),%edx
 81f0bca:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f0bce:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f0bd1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f0bd5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0bdc:	00 
 81f0bdd:	89 04 24             	mov    %eax,(%esp)
 81f0be0:	e8 2f f2 0f 00       	call   82efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>
 81f0be5:	89 45 88             	mov    %eax,-0x78(%ebp)
 81f0be8:	83 7d 88 00          	cmpl   $0x0,-0x78(%ebp)
 81f0bec:	0f 8e 9c 00 00 00    	jle    81f0c8e <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x400>
 81f0bf2:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f0bf9:	00 
 81f0bfa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0c01:	00 
 81f0c02:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0c08:	89 04 24             	mov    %eax,(%esp)
 81f0c0b:	e8 ec ac ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f0c10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0c17:	00 
 81f0c18:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0c1e:	89 04 24             	mov    %eax,(%esp)
 81f0c21:	e8 fa ac ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0c26:	8b 45 88             	mov    -0x78(%ebp),%eax
 81f0c29:	0f be c0             	movsbl %al,%eax
 81f0c2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0c30:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0c36:	89 04 24             	mov    %eax,(%esp)
 81f0c39:	e8 e2 ac ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0c3e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0c45:	00 
 81f0c46:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0c4c:	89 04 24             	mov    %eax,(%esp)
 81f0c4f:	e8 cc ac ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0c54:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0c5b:	00 
 81f0c5c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0c62:	89 04 24             	mov    %eax,(%esp)
 81f0c65:	e8 ee ac ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f0c6a:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0c70:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0c74:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0c77:	89 04 24             	mov    %eax,(%esp)
 81f0c7a:	e8 3b 79 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f0c7f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0c84:	be 00 00 00 00       	mov    $0x0,%esi
 81f0c89:	e9 26 10 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0c8e:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0c91:	89 04 24             	mov    %eax,(%esp)
 81f0c94:	e8 f3 96 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f0c99:	83 f8 03             	cmp    $0x3,%eax
 81f0c9c:	0f 95 c0             	setne  %al
 81f0c9f:	84 c0                	test   %al,%al
 81f0ca1:	0f 84 9a 00 00 00    	je     81f0d41 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x4b3>
 81f0ca7:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f0cae:	00 
 81f0caf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0cb6:	00 
 81f0cb7:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0cbd:	89 04 24             	mov    %eax,(%esp)
 81f0cc0:	e8 37 ac ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f0cc5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0ccc:	00 
 81f0ccd:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0cd3:	89 04 24             	mov    %eax,(%esp)
 81f0cd6:	e8 45 ac ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0cdb:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f0ce2:	00 
 81f0ce3:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0ce9:	89 04 24             	mov    %eax,(%esp)
 81f0cec:	e8 2f ac ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0cf1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0cf8:	00 
 81f0cf9:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0cff:	89 04 24             	mov    %eax,(%esp)
 81f0d02:	e8 19 ac ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0d07:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0d0e:	00 
 81f0d0f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0d15:	89 04 24             	mov    %eax,(%esp)
 81f0d18:	e8 3b ac ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f0d1d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0d23:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0d27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0d2a:	89 04 24             	mov    %eax,(%esp)
 81f0d2d:	e8 88 78 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f0d32:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0d37:	be 00 00 00 00       	mov    $0x0,%esi
 81f0d3c:	e9 73 0f 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0d41:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0d44:	89 04 24             	mov    %eax,(%esp)
 81f0d47:	e8 c8 95 ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81f0d4c:	84 c0                	test   %al,%al
 81f0d4e:	74 16                	je     81f0d66 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x4d8>
 81f0d50:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0d53:	89 04 24             	mov    %eax,(%esp)
 81f0d56:	e8 b9 95 ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81f0d5b:	84 c0                	test   %al,%al
 81f0d5d:	74 07                	je     81f0d66 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x4d8>
 81f0d5f:	b8 01 00 00 00       	mov    $0x1,%eax
 81f0d64:	eb 05                	jmp    81f0d6b <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x4dd>
 81f0d66:	b8 00 00 00 00       	mov    $0x0,%eax
 81f0d6b:	84 c0                	test   %al,%al
 81f0d6d:	0f 84 9a 00 00 00    	je     81f0e0d <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x57f>
 81f0d73:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f0d7a:	00 
 81f0d7b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0d82:	00 
 81f0d83:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0d89:	89 04 24             	mov    %eax,(%esp)
 81f0d8c:	e8 6b ab ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f0d91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0d98:	00 
 81f0d99:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0d9f:	89 04 24             	mov    %eax,(%esp)
 81f0da2:	e8 79 ab ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0da7:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 81f0dae:	00 
 81f0daf:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0db5:	89 04 24             	mov    %eax,(%esp)
 81f0db8:	e8 63 ab ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0dbd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0dc4:	00 
 81f0dc5:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0dcb:	89 04 24             	mov    %eax,(%esp)
 81f0dce:	e8 4d ab ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0dd3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0dda:	00 
 81f0ddb:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0de1:	89 04 24             	mov    %eax,(%esp)
 81f0de4:	e8 6f ab ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f0de9:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0def:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0df3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0df6:	89 04 24             	mov    %eax,(%esp)
 81f0df9:	e8 bc 77 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f0dfe:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0e03:	be 00 00 00 00       	mov    $0x0,%esi
 81f0e08:	e9 a7 0e 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0e0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0e10:	89 04 24             	mov    %eax,(%esp)
 81f0e13:	e8 a8 db 49 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 81f0e18:	84 c0                	test   %al,%al
 81f0e1a:	74 38                	je     81f0e54 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x5c6>
 81f0e1c:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f0e23:	0f be c0             	movsbl %al,%eax
 81f0e26:	c7 44 24 0c ea 00 00 	movl   $0xea,0xc(%esp)
 81f0e2d:	00 
 81f0e2e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f0e32:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f0e39:	00 
 81f0e3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0e3d:	89 04 24             	mov    %eax,(%esp)
 81f0e40:	e8 e9 af 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81f0e45:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0e4a:	be 00 00 00 00       	mov    $0x0,%esi
 81f0e4f:	e9 60 0e 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0e54:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0e57:	89 04 24             	mov    %eax,(%esp)
 81f0e5a:	e8 61 db 49 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 81f0e5f:	84 c0                	test   %al,%al
 81f0e61:	74 38                	je     81f0e9b <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x60d>
 81f0e63:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f0e6a:	0f be c0             	movsbl %al,%eax
 81f0e6d:	c7 44 24 0c ea 00 00 	movl   $0xea,0xc(%esp)
 81f0e74:	00 
 81f0e75:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f0e79:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f0e80:	00 
 81f0e81:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0e84:	89 04 24             	mov    %eax,(%esp)
 81f0e87:	e8 a2 af 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81f0e8c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0e91:	be 00 00 00 00       	mov    $0x0,%esi
 81f0e96:	e9 19 0e 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0e9b:	a1 50 be 40 09       	mov    0x940be50,%eax
 81f0ea0:	89 04 24             	mov    %eax,(%esp)
 81f0ea3:	e8 68 ea 28 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 81f0ea8:	84 c0                	test   %al,%al
 81f0eaa:	0f 84 f9 01 00 00    	je     81f10a9 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x81b>
 81f0eb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0eb3:	89 04 24             	mov    %eax,(%esp)
 81f0eb6:	e8 a9 46 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81f0ebb:	3c 07                	cmp    $0x7,%al
 81f0ebd:	75 16                	jne    81f0ed5 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x647>
 81f0ebf:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0ec2:	89 04 24             	mov    %eax,(%esp)
 81f0ec5:	e8 9a 46 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81f0eca:	3c 07                	cmp    $0x7,%al
 81f0ecc:	75 07                	jne    81f0ed5 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x647>
 81f0ece:	b8 01 00 00 00       	mov    $0x1,%eax
 81f0ed3:	eb 05                	jmp    81f0eda <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x64c>
 81f0ed5:	b8 00 00 00 00       	mov    $0x0,%eax
 81f0eda:	84 c0                	test   %al,%al
 81f0edc:	0f 84 cf 00 00 00    	je     81f0fb1 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x723>
 81f0ee2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0ee5:	89 04 24             	mov    %eax,(%esp)
 81f0ee8:	e8 d9 ed 03 00       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 81f0eed:	89 c6                	mov    %eax,%esi
 81f0eef:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0ef2:	89 04 24             	mov    %eax,(%esp)
 81f0ef5:	e8 cc ed 03 00       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 81f0efa:	89 f2                	mov    %esi,%edx
 81f0efc:	38 c2                	cmp    %al,%dl
 81f0efe:	0f 95 c0             	setne  %al
 81f0f01:	84 c0                	test   %al,%al
 81f0f03:	0f 84 cf 03 00 00    	je     81f12d8 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xa4a>
 81f0f09:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0f0f:	89 04 24             	mov    %eax,(%esp)
 81f0f12:	e8 cf a9 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f0f17:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f0f1e:	00 
 81f0f1f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0f26:	00 
 81f0f27:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0f2d:	89 04 24             	mov    %eax,(%esp)
 81f0f30:	e8 c7 a9 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f0f35:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0f3c:	00 
 81f0f3d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0f43:	89 04 24             	mov    %eax,(%esp)
 81f0f46:	e8 d5 a9 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0f4b:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f0f52:	00 
 81f0f53:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0f59:	89 04 24             	mov    %eax,(%esp)
 81f0f5c:	e8 bf a9 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0f61:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f0f68:	00 
 81f0f69:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0f6f:	89 04 24             	mov    %eax,(%esp)
 81f0f72:	e8 a9 a9 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f0f77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f0f7e:	00 
 81f0f7f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0f85:	89 04 24             	mov    %eax,(%esp)
 81f0f88:	e8 cb a9 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f0f8d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f0f93:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0f97:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0f9a:	89 04 24             	mov    %eax,(%esp)
 81f0f9d:	e8 18 76 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f0fa2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0fa7:	be 00 00 00 00       	mov    $0x0,%esi
 81f0fac:	e9 03 0d 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f0fb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0fb4:	89 04 24             	mov    %eax,(%esp)
 81f0fb7:	e8 a8 45 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81f0fbc:	3c 07                	cmp    $0x7,%al
 81f0fbe:	74 0f                	je     81f0fcf <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x741>
 81f0fc0:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0fc3:	89 04 24             	mov    %eax,(%esp)
 81f0fc6:	e8 99 45 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81f0fcb:	3c 07                	cmp    $0x7,%al
 81f0fcd:	74 1e                	je     81f0fed <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x75f>
 81f0fcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0fd2:	89 04 24             	mov    %eax,(%esp)
 81f0fd5:	e8 8a 45 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81f0fda:	3c 07                	cmp    $0x7,%al
 81f0fdc:	75 16                	jne    81f0ff4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x766>
 81f0fde:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f0fe1:	89 04 24             	mov    %eax,(%esp)
 81f0fe4:	e8 7b 45 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81f0fe9:	3c 07                	cmp    $0x7,%al
 81f0feb:	74 07                	je     81f0ff4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x766>
 81f0fed:	b8 01 00 00 00       	mov    $0x1,%eax
 81f0ff2:	eb 05                	jmp    81f0ff9 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x76b>
 81f0ff4:	b8 00 00 00 00       	mov    $0x0,%eax
 81f0ff9:	84 c0                	test   %al,%al
 81f0ffb:	0f 84 d7 02 00 00    	je     81f12d8 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xa4a>
 81f1001:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1007:	89 04 24             	mov    %eax,(%esp)
 81f100a:	e8 d7 a8 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f100f:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f1016:	00 
 81f1017:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f101e:	00 
 81f101f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1025:	89 04 24             	mov    %eax,(%esp)
 81f1028:	e8 cf a8 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f102d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1034:	00 
 81f1035:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f103b:	89 04 24             	mov    %eax,(%esp)
 81f103e:	e8 dd a8 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1043:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f104a:	00 
 81f104b:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1051:	89 04 24             	mov    %eax,(%esp)
 81f1054:	e8 c7 a8 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1059:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1060:	00 
 81f1061:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1067:	89 04 24             	mov    %eax,(%esp)
 81f106a:	e8 b1 a8 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f106f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1076:	00 
 81f1077:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f107d:	89 04 24             	mov    %eax,(%esp)
 81f1080:	e8 d3 a8 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1085:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f108b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f108f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1092:	89 04 24             	mov    %eax,(%esp)
 81f1095:	e8 20 75 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f109a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f109f:	be 00 00 00 00       	mov    $0x0,%esi
 81f10a4:	e9 0b 0c 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f10a9:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81f10b0:	e8 e9 ab ed ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81f10b5:	89 45 90             	mov    %eax,-0x70(%ebp)
 81f10b8:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f10bb:	89 04 24             	mov    %eax,(%esp)
 81f10be:	e8 eb e6 03 00       	call   822f7ae <_ZN15CUserCharacInfo25GetCurCharacChaosKillTimeEv>
 81f10c3:	89 45 94             	mov    %eax,-0x6c(%ebp)
 81f10c6:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81f10c9:	05 58 02 00 00       	add    $0x258,%eax
 81f10ce:	3b 45 90             	cmp    -0x70(%ebp),%eax
 81f10d1:	7e 1e                	jle    81f10f1 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x863>
 81f10d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f10da:	00 
 81f10db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f10de:	89 04 24             	mov    %eax,(%esp)
 81f10e1:	e8 96 02 3e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 81f10e6:	84 c0                	test   %al,%al
 81f10e8:	74 07                	je     81f10f1 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x863>
 81f10ea:	b8 01 00 00 00       	mov    $0x1,%eax
 81f10ef:	eb 05                	jmp    81f10f6 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x868>
 81f10f1:	b8 00 00 00 00       	mov    $0x0,%eax
 81f10f6:	84 c0                	test   %al,%al
 81f10f8:	74 42                	je     81f113c <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x8ae>
 81f10fa:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f1101:	0f be c0             	movsbl %al,%eax
 81f1104:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 81f110a:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f110e:	c7 44 24 0c fa 00 00 	movl   $0xfa,0xc(%esp)
 81f1115:	00 
 81f1116:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f111a:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f1121:	00 
 81f1122:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1125:	89 04 24             	mov    %eax,(%esp)
 81f1128:	e8 57 ac 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f112d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f1132:	be 00 00 00 00       	mov    $0x0,%esi
 81f1137:	e9 78 0b 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f113c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f113f:	89 04 24             	mov    %eax,(%esp)
 81f1142:	e8 67 e6 03 00       	call   822f7ae <_ZN15CUserCharacInfo25GetCurCharacChaosKillTimeEv>
 81f1147:	89 45 94             	mov    %eax,-0x6c(%ebp)
 81f114a:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81f114d:	05 58 02 00 00       	add    $0x258,%eax
 81f1152:	3b 45 90             	cmp    -0x70(%ebp),%eax
 81f1155:	7e 1e                	jle    81f1175 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x8e7>
 81f1157:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f115e:	00 
 81f115f:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f1162:	89 04 24             	mov    %eax,(%esp)
 81f1165:	e8 12 02 3e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 81f116a:	84 c0                	test   %al,%al
 81f116c:	74 07                	je     81f1175 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x8e7>
 81f116e:	b8 01 00 00 00       	mov    $0x1,%eax
 81f1173:	eb 05                	jmp    81f117a <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x8ec>
 81f1175:	b8 00 00 00 00       	mov    $0x0,%eax
 81f117a:	84 c0                	test   %al,%al
 81f117c:	74 42                	je     81f11c0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x932>
 81f117e:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f1185:	0f be c0             	movsbl %al,%eax
 81f1188:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 81f118e:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f1192:	c7 44 24 0c fa 00 00 	movl   $0xfa,0xc(%esp)
 81f1199:	00 
 81f119a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f119e:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f11a5:	00 
 81f11a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f11a9:	89 04 24             	mov    %eax,(%esp)
 81f11ac:	e8 d3 ab 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f11b1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f11b6:	be 00 00 00 00       	mov    $0x0,%esi
 81f11bb:	e9 f4 0a 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f11c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f11c3:	89 04 24             	mov    %eax,(%esp)
 81f11c6:	e8 81 3f 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81f11cb:	89 45 98             	mov    %eax,-0x68(%ebp)
 81f11ce:	83 7d 98 00          	cmpl   $0x0,-0x68(%ebp)
 81f11d2:	74 2d                	je     81f1201 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x973>
 81f11d4:	8b 45 98             	mov    -0x68(%ebp),%eax
 81f11d7:	89 04 24             	mov    %eax,(%esp)
 81f11da:	e8 d7 b8 3c 00       	call   85bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>
 81f11df:	84 c0                	test   %al,%al
 81f11e1:	74 1e                	je     81f1201 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x973>
 81f11e3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f11ea:	00 
 81f11eb:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f11ee:	89 04 24             	mov    %eax,(%esp)
 81f11f1:	e8 86 01 3e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 81f11f6:	84 c0                	test   %al,%al
 81f11f8:	74 07                	je     81f1201 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x973>
 81f11fa:	b8 01 00 00 00       	mov    $0x1,%eax
 81f11ff:	eb 05                	jmp    81f1206 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x978>
 81f1201:	b8 00 00 00 00       	mov    $0x0,%eax
 81f1206:	84 c0                	test   %al,%al
 81f1208:	74 42                	je     81f124c <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x9be>
 81f120a:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f1211:	0f be c0             	movsbl %al,%eax
 81f1214:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 81f121a:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f121e:	c7 44 24 0c fa 00 00 	movl   $0xfa,0xc(%esp)
 81f1225:	00 
 81f1226:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f122a:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f1231:	00 
 81f1232:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1235:	89 04 24             	mov    %eax,(%esp)
 81f1238:	e8 47 ab 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f123d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f1242:	be 00 00 00 00       	mov    $0x0,%esi
 81f1247:	e9 68 0a 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f124c:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f124f:	89 04 24             	mov    %eax,(%esp)
 81f1252:	e8 f5 3e 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81f1257:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81f125a:	83 7d 9c 00          	cmpl   $0x0,-0x64(%ebp)
 81f125e:	74 2d                	je     81f128d <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x9ff>
 81f1260:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81f1263:	89 04 24             	mov    %eax,(%esp)
 81f1266:	e8 4b b8 3c 00       	call   85bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>
 81f126b:	84 c0                	test   %al,%al
 81f126d:	74 1e                	je     81f128d <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x9ff>
 81f126f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1276:	00 
 81f1277:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f127a:	89 04 24             	mov    %eax,(%esp)
 81f127d:	e8 fa 00 3e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 81f1282:	84 c0                	test   %al,%al
 81f1284:	74 07                	je     81f128d <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x9ff>
 81f1286:	b8 01 00 00 00       	mov    $0x1,%eax
 81f128b:	eb 05                	jmp    81f1292 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xa04>
 81f128d:	b8 00 00 00 00       	mov    $0x0,%eax
 81f1292:	84 c0                	test   %al,%al
 81f1294:	74 42                	je     81f12d8 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xa4a>
 81f1296:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f129d:	0f be c0             	movsbl %al,%eax
 81f12a0:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 81f12a6:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f12aa:	c7 44 24 0c fa 00 00 	movl   $0xfa,0xc(%esp)
 81f12b1:	00 
 81f12b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f12b6:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f12bd:	00 
 81f12be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f12c1:	89 04 24             	mov    %eax,(%esp)
 81f12c4:	e8 bb aa 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f12c9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f12ce:	be 00 00 00 00       	mov    $0x0,%esi
 81f12d3:	e9 dc 09 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f12d8:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 81f12df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f12e2:	89 04 24             	mov    %eax,(%esp)
 81f12e5:	e8 2a 90 ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81f12ea:	83 f0 01             	xor    $0x1,%eax
 81f12ed:	84 c0                	test   %al,%al
 81f12ef:	74 19                	je     81f130a <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xa7c>
 81f12f1:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f12f4:	89 04 24             	mov    %eax,(%esp)
 81f12f7:	e8 18 90 ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81f12fc:	83 f0 01             	xor    $0x1,%eax
 81f12ff:	84 c0                	test   %al,%al
 81f1301:	74 07                	je     81f130a <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xa7c>
 81f1303:	b8 01 00 00 00       	mov    $0x1,%eax
 81f1308:	eb 05                	jmp    81f130f <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xa81>
 81f130a:	b8 00 00 00 00       	mov    $0x0,%eax
 81f130f:	84 c0                	test   %al,%al
 81f1311:	0f 84 e7 01 00 00    	je     81f14fe <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xc70>
 81f1317:	e8 72 ae ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f131c:	89 04 24             	mov    %eax,(%esp)
 81f131f:	e8 ec 3a 0a 00       	call   8294e10 <_ZN12CGameManager8GetPartyEv>
 81f1324:	89 45 8c             	mov    %eax,-0x74(%ebp)
 81f1327:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 81f132b:	0f 85 a8 00 00 00    	jne    81f13d9 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xb4b>
 81f1331:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1337:	89 04 24             	mov    %eax,(%esp)
 81f133a:	e8 a7 a5 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f133f:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f1346:	00 
 81f1347:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f134e:	00 
 81f134f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1355:	89 04 24             	mov    %eax,(%esp)
 81f1358:	e8 9f a5 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f135d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1364:	00 
 81f1365:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f136b:	89 04 24             	mov    %eax,(%esp)
 81f136e:	e8 ad a5 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1373:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81f137a:	00 
 81f137b:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1381:	89 04 24             	mov    %eax,(%esp)
 81f1384:	e8 97 a5 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1389:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1390:	00 
 81f1391:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1397:	89 04 24             	mov    %eax,(%esp)
 81f139a:	e8 81 a5 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f139f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f13a6:	00 
 81f13a7:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f13ad:	89 04 24             	mov    %eax,(%esp)
 81f13b0:	e8 a3 a5 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f13b5:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f13bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f13bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f13c2:	89 04 24             	mov    %eax,(%esp)
 81f13c5:	e8 f0 71 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f13ca:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f13cf:	be 00 00 00 00       	mov    $0x0,%esi
 81f13d4:	e9 db 08 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f13d9:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f13dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f13e0:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f13e3:	89 04 24             	mov    %eax,(%esp)
 81f13e6:	e8 d3 9d 3a 00       	call   859b1be <_ZN6CParty12create_partyEP5CUser>
 81f13eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f13f2:	00 
 81f13f3:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f13f6:	89 04 24             	mov    %eax,(%esp)
 81f13f9:	e8 54 c4 03 00       	call   822d852 <_ZN6CParty12setDungIndexEt>
 81f13fe:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81f1405:	00 
 81f1406:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f1409:	89 04 24             	mov    %eax,(%esp)
 81f140c:	e8 5f c4 03 00       	call   822d870 <_ZN6CParty12setDungDiffiEh>
 81f1411:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1414:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1418:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f141b:	89 04 24             	mov    %eax,(%esp)
 81f141e:	e8 93 9e 3a 00       	call   859b2b6 <_ZN6CParty9join_userEP5CUser>
 81f1423:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f1426:	89 04 24             	mov    %eax,(%esp)
 81f1429:	e8 f6 b8 3a 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 81f142e:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1434:	89 04 24             	mov    %eax,(%esp)
 81f1437:	e8 aa a4 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f143c:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81f1443:	00 
 81f1444:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f144b:	00 
 81f144c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1452:	89 04 24             	mov    %eax,(%esp)
 81f1455:	e8 a2 a4 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f145a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f145d:	89 04 24             	mov    %eax,(%esp)
 81f1460:	e8 17 8f ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81f1465:	0f b7 c0             	movzwl %ax,%eax
 81f1468:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f146c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1472:	89 04 24             	mov    %eax,(%esp)
 81f1475:	e8 2a 8a ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81f147a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1481:	00 
 81f1482:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1488:	89 04 24             	mov    %eax,(%esp)
 81f148b:	e8 90 a4 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1490:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f1497:	0f b7 c0             	movzwl %ax,%eax
 81f149a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f149e:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f14a4:	89 04 24             	mov    %eax,(%esp)
 81f14a7:	e8 90 a4 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f14ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f14b3:	00 
 81f14b4:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f14ba:	89 04 24             	mov    %eax,(%esp)
 81f14bd:	e8 96 a4 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f14c2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f14c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f14cc:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f14cf:	89 04 24             	mov    %eax,(%esp)
 81f14d2:	e8 e3 70 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f14d7:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f14da:	89 04 24             	mov    %eax,(%esp)
 81f14dd:	e8 c0 b9 3a 00       	call   859cea2 <_ZN6CParty17send_party_ipinfoEv>
 81f14e2:	e8 c0 8e ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f14e7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f14ee:	00 
 81f14ef:	8b 55 8c             	mov    -0x74(%ebp),%edx
 81f14f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f14f6:	89 04 24             	mov    %eax,(%esp)
 81f14f9:	e8 8c 72 4d 00       	call   86c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>
 81f14fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1501:	89 04 24             	mov    %eax,(%esp)
 81f1504:	e8 0b 8e ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81f1509:	84 c0                	test   %al,%al
 81f150b:	74 19                	je     81f1526 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xc98>
 81f150d:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f1510:	89 04 24             	mov    %eax,(%esp)
 81f1513:	e8 fc 8d ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81f1518:	83 f0 01             	xor    $0x1,%eax
 81f151b:	84 c0                	test   %al,%al
 81f151d:	74 07                	je     81f1526 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xc98>
 81f151f:	b8 01 00 00 00       	mov    $0x1,%eax
 81f1524:	eb 05                	jmp    81f152b <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xc9d>
 81f1526:	b8 00 00 00 00       	mov    $0x0,%eax
 81f152b:	84 c0                	test   %al,%al
 81f152d:	0f 84 8b 03 00 00    	je     81f18be <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1030>
 81f1533:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1536:	89 04 24             	mov    %eax,(%esp)
 81f1539:	e8 0e 3c 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81f153e:	89 45 8c             	mov    %eax,-0x74(%ebp)
 81f1541:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 81f1545:	0f 85 a8 00 00 00    	jne    81f15f3 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xd65>
 81f154b:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1551:	89 04 24             	mov    %eax,(%esp)
 81f1554:	e8 8d a3 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f1559:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f1560:	00 
 81f1561:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1568:	00 
 81f1569:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f156f:	89 04 24             	mov    %eax,(%esp)
 81f1572:	e8 85 a3 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1577:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f157e:	00 
 81f157f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1585:	89 04 24             	mov    %eax,(%esp)
 81f1588:	e8 93 a3 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f158d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81f1594:	00 
 81f1595:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f159b:	89 04 24             	mov    %eax,(%esp)
 81f159e:	e8 7d a3 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f15a3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f15aa:	00 
 81f15ab:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f15b1:	89 04 24             	mov    %eax,(%esp)
 81f15b4:	e8 67 a3 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f15b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f15c0:	00 
 81f15c1:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f15c7:	89 04 24             	mov    %eax,(%esp)
 81f15ca:	e8 89 a3 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f15cf:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f15d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f15d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f15dc:	89 04 24             	mov    %eax,(%esp)
 81f15df:	e8 d6 6f 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f15e4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f15e9:	be 00 00 00 00       	mov    $0x0,%esi
 81f15ee:	e9 c1 06 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f15f3:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f15f6:	89 04 24             	mov    %eax,(%esp)
 81f15f9:	e8 1a 8d 3a 00       	call   859a318 <_ZN6CParty28CanDoPartyActionAssalutStateEv>
 81f15fe:	83 f0 01             	xor    $0x1,%eax
 81f1601:	84 c0                	test   %al,%al
 81f1603:	0f 84 a8 00 00 00    	je     81f16b1 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xe23>
 81f1609:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f160f:	89 04 24             	mov    %eax,(%esp)
 81f1612:	e8 cf a2 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f1617:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f161e:	00 
 81f161f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1626:	00 
 81f1627:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f162d:	89 04 24             	mov    %eax,(%esp)
 81f1630:	e8 c7 a2 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1635:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f163c:	00 
 81f163d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1643:	89 04 24             	mov    %eax,(%esp)
 81f1646:	e8 d5 a2 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f164b:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f1652:	00 
 81f1653:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1659:	89 04 24             	mov    %eax,(%esp)
 81f165c:	e8 bf a2 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1661:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1668:	00 
 81f1669:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f166f:	89 04 24             	mov    %eax,(%esp)
 81f1672:	e8 a9 a2 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1677:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f167e:	00 
 81f167f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1685:	89 04 24             	mov    %eax,(%esp)
 81f1688:	e8 cb a2 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f168d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1693:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1697:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f169a:	89 04 24             	mov    %eax,(%esp)
 81f169d:	e8 18 6f 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f16a2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f16a7:	be 00 00 00 00       	mov    $0x0,%esi
 81f16ac:	e9 03 06 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f16b1:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f16b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f16b8:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f16bb:	89 04 24             	mov    %eax,(%esp)
 81f16be:	e8 f3 9b 3a 00       	call   859b2b6 <_ZN6CParty9join_userEP5CUser>
 81f16c3:	89 45 a0             	mov    %eax,-0x60(%ebp)
 81f16c6:	83 7d a0 00          	cmpl   $0x0,-0x60(%ebp)
 81f16ca:	0f 8f e5 00 00 00    	jg     81f17b5 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xf27>
 81f16d0:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f16d6:	89 04 24             	mov    %eax,(%esp)
 81f16d9:	e8 08 a2 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f16de:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f16e5:	00 
 81f16e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f16ed:	00 
 81f16ee:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f16f4:	89 04 24             	mov    %eax,(%esp)
 81f16f7:	e8 00 a2 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f16fc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1703:	00 
 81f1704:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f170a:	89 04 24             	mov    %eax,(%esp)
 81f170d:	e8 0e a2 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1712:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81f1715:	83 f8 fe             	cmp    $0xfffffffe,%eax
 81f1718:	74 1d                	je     81f1737 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xea9>
 81f171a:	83 f8 ff             	cmp    $0xffffffff,%eax
 81f171d:	75 30                	jne    81f174f <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xec1>
 81f171f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81f1726:	00 
 81f1727:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f172d:	89 04 24             	mov    %eax,(%esp)
 81f1730:	e8 eb a1 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1735:	eb 2e                	jmp    81f1765 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xed7>
 81f1737:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f173e:	00 
 81f173f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1745:	89 04 24             	mov    %eax,(%esp)
 81f1748:	e8 d3 a1 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f174d:	eb 16                	jmp    81f1765 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0xed7>
 81f174f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1756:	00 
 81f1757:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f175d:	89 04 24             	mov    %eax,(%esp)
 81f1760:	e8 bb a1 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1765:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f176c:	00 
 81f176d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1773:	89 04 24             	mov    %eax,(%esp)
 81f1776:	e8 a5 a1 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f177b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1782:	00 
 81f1783:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1789:	89 04 24             	mov    %eax,(%esp)
 81f178c:	e8 c7 a1 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1791:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1797:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f179b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f179e:	89 04 24             	mov    %eax,(%esp)
 81f17a1:	e8 14 6e 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f17a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f17ab:	be 00 00 00 00       	mov    $0x0,%esi
 81f17b0:	e9 ff 04 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f17b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f17bc:	00 
 81f17bd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f17c4:	00 
 81f17c5:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f17c8:	89 04 24             	mov    %eax,(%esp)
 81f17cb:	e8 6e 9f 3a 00       	call   859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>
 81f17d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f17d7:	00 
 81f17d8:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f17db:	89 04 24             	mov    %eax,(%esp)
 81f17de:	e8 53 c1 03 00       	call   822d936 <_ZN6CParty15set_quick_partyEb>
 81f17e3:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f17e6:	89 04 24             	mov    %eax,(%esp)
 81f17e9:	e8 36 b5 3a 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 81f17ee:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f17f4:	89 04 24             	mov    %eax,(%esp)
 81f17f7:	e8 ea a0 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f17fc:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81f1803:	00 
 81f1804:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f180b:	00 
 81f180c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1812:	89 04 24             	mov    %eax,(%esp)
 81f1815:	e8 e2 a0 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f181a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f181d:	89 04 24             	mov    %eax,(%esp)
 81f1820:	e8 57 8b ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81f1825:	0f b7 c0             	movzwl %ax,%eax
 81f1828:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f182c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1832:	89 04 24             	mov    %eax,(%esp)
 81f1835:	e8 6a 86 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81f183a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1841:	00 
 81f1842:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1848:	89 04 24             	mov    %eax,(%esp)
 81f184b:	e8 d0 a0 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1850:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f1857:	0f b7 c0             	movzwl %ax,%eax
 81f185a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f185e:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1864:	89 04 24             	mov    %eax,(%esp)
 81f1867:	e8 d0 a0 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f186c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1873:	00 
 81f1874:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f187a:	89 04 24             	mov    %eax,(%esp)
 81f187d:	e8 d6 a0 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1882:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1888:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f188c:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f188f:	89 04 24             	mov    %eax,(%esp)
 81f1892:	e8 23 6d 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f1897:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f189a:	89 04 24             	mov    %eax,(%esp)
 81f189d:	e8 00 b6 3a 00       	call   859cea2 <_ZN6CParty17send_party_ipinfoEv>
 81f18a2:	e8 00 8b ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f18a7:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81f18ae:	00 
 81f18af:	8b 55 8c             	mov    -0x74(%ebp),%edx
 81f18b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f18b6:	89 04 24             	mov    %eax,(%esp)
 81f18b9:	e8 cc 6e 4d 00       	call   86c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>
 81f18be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f18c1:	89 04 24             	mov    %eax,(%esp)
 81f18c4:	e8 4b 8a ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81f18c9:	83 f0 01             	xor    $0x1,%eax
 81f18cc:	84 c0                	test   %al,%al
 81f18ce:	74 16                	je     81f18e6 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1058>
 81f18d0:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f18d3:	89 04 24             	mov    %eax,(%esp)
 81f18d6:	e8 39 8a ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81f18db:	84 c0                	test   %al,%al
 81f18dd:	74 07                	je     81f18e6 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1058>
 81f18df:	b8 01 00 00 00       	mov    $0x1,%eax
 81f18e4:	eb 05                	jmp    81f18eb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x105d>
 81f18e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81f18eb:	84 c0                	test   %al,%al
 81f18ed:	0f 84 9f 03 00 00    	je     81f1c92 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1404>
 81f18f3:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f18f6:	89 04 24             	mov    %eax,(%esp)
 81f18f9:	e8 50 e5 03 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81f18fe:	0f bf f0             	movswl %ax,%esi
 81f1901:	e8 88 a8 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f1906:	89 74 24 04          	mov    %esi,0x4(%esp)
 81f190a:	89 04 24             	mov    %eax,(%esp)
 81f190d:	e8 20 36 0a 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81f1912:	89 45 8c             	mov    %eax,-0x74(%ebp)
 81f1915:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 81f1919:	0f 85 a8 00 00 00    	jne    81f19c7 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1139>
 81f191f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1925:	89 04 24             	mov    %eax,(%esp)
 81f1928:	e8 b9 9f ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f192d:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f1934:	00 
 81f1935:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f193c:	00 
 81f193d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1943:	89 04 24             	mov    %eax,(%esp)
 81f1946:	e8 b1 9f ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f194b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1952:	00 
 81f1953:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1959:	89 04 24             	mov    %eax,(%esp)
 81f195c:	e8 bf 9f ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1961:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81f1968:	00 
 81f1969:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f196f:	89 04 24             	mov    %eax,(%esp)
 81f1972:	e8 a9 9f ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1977:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f197e:	00 
 81f197f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1985:	89 04 24             	mov    %eax,(%esp)
 81f1988:	e8 93 9f ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f198d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1994:	00 
 81f1995:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f199b:	89 04 24             	mov    %eax,(%esp)
 81f199e:	e8 b5 9f ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f19a3:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f19a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f19ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f19b0:	89 04 24             	mov    %eax,(%esp)
 81f19b3:	e8 02 6c 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f19b8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f19bd:	be 00 00 00 00       	mov    $0x0,%esi
 81f19c2:	e9 ed 02 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f19c7:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f19ca:	89 04 24             	mov    %eax,(%esp)
 81f19cd:	e8 46 89 3a 00       	call   859a318 <_ZN6CParty28CanDoPartyActionAssalutStateEv>
 81f19d2:	83 f0 01             	xor    $0x1,%eax
 81f19d5:	84 c0                	test   %al,%al
 81f19d7:	0f 84 a8 00 00 00    	je     81f1a85 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x11f7>
 81f19dd:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f19e3:	89 04 24             	mov    %eax,(%esp)
 81f19e6:	e8 fb 9e ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f19eb:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f19f2:	00 
 81f19f3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f19fa:	00 
 81f19fb:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1a01:	89 04 24             	mov    %eax,(%esp)
 81f1a04:	e8 f3 9e ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1a09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1a10:	00 
 81f1a11:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1a17:	89 04 24             	mov    %eax,(%esp)
 81f1a1a:	e8 01 9f ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1a1f:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f1a26:	00 
 81f1a27:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1a2d:	89 04 24             	mov    %eax,(%esp)
 81f1a30:	e8 eb 9e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1a35:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1a3c:	00 
 81f1a3d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1a43:	89 04 24             	mov    %eax,(%esp)
 81f1a46:	e8 d5 9e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1a4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1a52:	00 
 81f1a53:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1a59:	89 04 24             	mov    %eax,(%esp)
 81f1a5c:	e8 f7 9e ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1a61:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1a6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1a6e:	89 04 24             	mov    %eax,(%esp)
 81f1a71:	e8 44 6b 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f1a76:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f1a7b:	be 00 00 00 00       	mov    $0x0,%esi
 81f1a80:	e9 2f 02 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f1a85:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1a88:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1a8c:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f1a8f:	89 04 24             	mov    %eax,(%esp)
 81f1a92:	e8 1f 98 3a 00       	call   859b2b6 <_ZN6CParty9join_userEP5CUser>
 81f1a97:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 81f1a9a:	83 7d a4 00          	cmpl   $0x0,-0x5c(%ebp)
 81f1a9e:	0f 8f e5 00 00 00    	jg     81f1b89 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x12fb>
 81f1aa4:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1aaa:	89 04 24             	mov    %eax,(%esp)
 81f1aad:	e8 34 9e ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f1ab2:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f1ab9:	00 
 81f1aba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1ac1:	00 
 81f1ac2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1ac8:	89 04 24             	mov    %eax,(%esp)
 81f1acb:	e8 2c 9e ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1ad0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1ad7:	00 
 81f1ad8:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1ade:	89 04 24             	mov    %eax,(%esp)
 81f1ae1:	e8 3a 9e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1ae6:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 81f1ae9:	83 f8 fe             	cmp    $0xfffffffe,%eax
 81f1aec:	74 1d                	je     81f1b0b <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x127d>
 81f1aee:	83 f8 ff             	cmp    $0xffffffff,%eax
 81f1af1:	75 30                	jne    81f1b23 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1295>
 81f1af3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81f1afa:	00 
 81f1afb:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1b01:	89 04 24             	mov    %eax,(%esp)
 81f1b04:	e8 17 9e ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1b09:	eb 2e                	jmp    81f1b39 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x12ab>
 81f1b0b:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f1b12:	00 
 81f1b13:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1b19:	89 04 24             	mov    %eax,(%esp)
 81f1b1c:	e8 ff 9d ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1b21:	eb 16                	jmp    81f1b39 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x12ab>
 81f1b23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1b2a:	00 
 81f1b2b:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1b31:	89 04 24             	mov    %eax,(%esp)
 81f1b34:	e8 e7 9d ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1b39:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1b40:	00 
 81f1b41:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1b47:	89 04 24             	mov    %eax,(%esp)
 81f1b4a:	e8 d1 9d ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1b4f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1b56:	00 
 81f1b57:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1b5d:	89 04 24             	mov    %eax,(%esp)
 81f1b60:	e8 f3 9d ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1b65:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1b6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1b6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1b72:	89 04 24             	mov    %eax,(%esp)
 81f1b75:	e8 40 6a 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f1b7a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f1b7f:	be 00 00 00 00       	mov    $0x0,%esi
 81f1b84:	e9 2b 01 00 00       	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f1b89:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f1b90:	00 
 81f1b91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1b98:	00 
 81f1b99:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f1b9c:	89 04 24             	mov    %eax,(%esp)
 81f1b9f:	e8 9a 9b 3a 00       	call   859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>
 81f1ba4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1bab:	00 
 81f1bac:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f1baf:	89 04 24             	mov    %eax,(%esp)
 81f1bb2:	e8 7f bd 03 00       	call   822d936 <_ZN6CParty15set_quick_partyEb>
 81f1bb7:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f1bba:	89 04 24             	mov    %eax,(%esp)
 81f1bbd:	e8 62 b1 3a 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 81f1bc2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1bc8:	89 04 24             	mov    %eax,(%esp)
 81f1bcb:	e8 16 9d ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f1bd0:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81f1bd7:	00 
 81f1bd8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1bdf:	00 
 81f1be0:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1be6:	89 04 24             	mov    %eax,(%esp)
 81f1be9:	e8 0e 9d ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1bee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1bf1:	89 04 24             	mov    %eax,(%esp)
 81f1bf4:	e8 83 87 ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81f1bf9:	0f b7 c0             	movzwl %ax,%eax
 81f1bfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1c00:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1c06:	89 04 24             	mov    %eax,(%esp)
 81f1c09:	e8 96 82 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81f1c0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1c15:	00 
 81f1c16:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1c1c:	89 04 24             	mov    %eax,(%esp)
 81f1c1f:	e8 fc 9c ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1c24:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f1c2b:	0f b7 c0             	movzwl %ax,%eax
 81f1c2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1c32:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1c38:	89 04 24             	mov    %eax,(%esp)
 81f1c3b:	e8 fc 9c ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f1c40:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1c47:	00 
 81f1c48:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1c4e:	89 04 24             	mov    %eax,(%esp)
 81f1c51:	e8 02 9d ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1c56:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1c5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1c60:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81f1c63:	89 04 24             	mov    %eax,(%esp)
 81f1c66:	e8 4f 69 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f1c6b:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81f1c6e:	89 04 24             	mov    %eax,(%esp)
 81f1c71:	e8 2c b2 3a 00       	call   859cea2 <_ZN6CParty17send_party_ipinfoEv>
 81f1c76:	e8 2c 87 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f1c7b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81f1c82:	00 
 81f1c83:	8b 55 8c             	mov    -0x74(%ebp),%edx
 81f1c86:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f1c8a:	89 04 24             	mov    %eax,(%esp)
 81f1c8d:	e8 f8 6a 4d 00       	call   86c878a <_ZN9GameWorld22send_party_info_to_allEP6CPartyi>
 81f1c92:	be 01 00 00 00       	mov    $0x1,%esi
 81f1c97:	eb 1b                	jmp    81f1cb4 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1426>
 81f1c99:	89 d3                	mov    %edx,%ebx
 81f1c9b:	89 c6                	mov    %eax,%esi
 81f1c9d:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1ca3:	89 04 24             	mov    %eax,(%esp)
 81f1ca6:	e8 d5 c1 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f1cab:	89 f0                	mov    %esi,%eax
 81f1cad:	89 da                	mov    %ebx,%edx
 81f1caf:	e9 1e 10 00 00       	jmp    81f2cd2 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2444>
 81f1cb4:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81f1cba:	89 04 24             	mov    %eax,(%esp)
 81f1cbd:	e8 be c1 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f1cc2:	85 f6                	test   %esi,%esi
 81f1cc4:	0f 84 26 10 00 00    	je     81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f1cca:	e9 fc 0f 00 00       	jmp    81f2ccb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243d>
 81f1ccf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1cd2:	89 04 24             	mov    %eax,(%esp)
 81f1cd5:	e8 24 86 ee ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81f1cda:	84 c0                	test   %al,%al
 81f1cdc:	74 0a                	je     81f1ce8 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x145a>
 81f1cde:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f1ce3:	e9 08 10 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f1ce8:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f1cef:	0f b7 d8             	movzwl %ax,%ebx
 81f1cf2:	e8 b0 86 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f1cf7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f1cfb:	89 04 24             	mov    %eax,(%esp)
 81f1cfe:	e8 99 2e 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81f1d03:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81f1d06:	c7 45 ac ff ff ff ff 	movl   $0xffffffff,-0x54(%ebp)
 81f1d0d:	83 7d a8 00          	cmpl   $0x0,-0x58(%ebp)
 81f1d11:	75 09                	jne    81f1d1c <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x148e>
 81f1d13:	c7 45 ac 03 00 00 00 	movl   $0x3,-0x54(%ebp)
 81f1d1a:	eb 40                	jmp    81f1d5c <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x14ce>
 81f1d1c:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81f1d1f:	89 04 24             	mov    %eax,(%esp)
 81f1d22:	e8 d7 85 ee ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81f1d27:	84 c0                	test   %al,%al
 81f1d29:	74 09                	je     81f1d34 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x14a6>
 81f1d2b:	c7 45 ac 12 00 00 00 	movl   $0x12,-0x54(%ebp)
 81f1d32:	eb 28                	jmp    81f1d5c <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x14ce>
 81f1d34:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1d37:	89 04 24             	mov    %eax,(%esp)
 81f1d3a:	e8 4d 86 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f1d3f:	89 c3                	mov    %eax,%ebx
 81f1d41:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81f1d44:	89 04 24             	mov    %eax,(%esp)
 81f1d47:	e8 40 86 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f1d4c:	39 c3                	cmp    %eax,%ebx
 81f1d4e:	0f 95 c0             	setne  %al
 81f1d51:	84 c0                	test   %al,%al
 81f1d53:	74 07                	je     81f1d5c <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x14ce>
 81f1d55:	c7 45 ac 13 00 00 00 	movl   $0x13,-0x54(%ebp)
 81f1d5c:	83 7d ac ff          	cmpl   $0xffffffff,-0x54(%ebp)
 81f1d60:	0f 84 97 00 00 00    	je     81f1dfd <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x156f>
 81f1d66:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f1d6d:	00 
 81f1d6e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1d75:	00 
 81f1d76:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1d7c:	89 04 24             	mov    %eax,(%esp)
 81f1d7f:	e8 78 9b ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1d84:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1d8b:	00 
 81f1d8c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1d92:	89 04 24             	mov    %eax,(%esp)
 81f1d95:	e8 86 9b ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1d9a:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81f1d9d:	0f be c0             	movsbl %al,%eax
 81f1da0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1da4:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1daa:	89 04 24             	mov    %eax,(%esp)
 81f1dad:	e8 6e 9b ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1db2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1db9:	00 
 81f1dba:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1dc0:	89 04 24             	mov    %eax,(%esp)
 81f1dc3:	e8 58 9b ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1dc8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1dcf:	00 
 81f1dd0:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1dd6:	89 04 24             	mov    %eax,(%esp)
 81f1dd9:	e8 7a 9b ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1dde:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1de4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1de8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1deb:	89 04 24             	mov    %eax,(%esp)
 81f1dee:	e8 c7 67 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f1df3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f1df8:	e9 f3 0e 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f1dfd:	e8 9e 32 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81f1e02:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f1e09:	00 
 81f1e0a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 81f1e0d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f1e11:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f1e14:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f1e18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1e1f:	00 
 81f1e20:	89 04 24             	mov    %eax,(%esp)
 81f1e23:	e8 ec df 0f 00       	call   82efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>
 81f1e28:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81f1e2b:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 81f1e2f:	0f 8e 97 00 00 00    	jle    81f1ecc <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x163e>
 81f1e35:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f1e3c:	00 
 81f1e3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1e44:	00 
 81f1e45:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1e4b:	89 04 24             	mov    %eax,(%esp)
 81f1e4e:	e8 a9 9a ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1e53:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1e5a:	00 
 81f1e5b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1e61:	89 04 24             	mov    %eax,(%esp)
 81f1e64:	e8 b7 9a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1e69:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81f1e6c:	0f be c0             	movsbl %al,%eax
 81f1e6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1e73:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1e79:	89 04 24             	mov    %eax,(%esp)
 81f1e7c:	e8 9f 9a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1e81:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1e88:	00 
 81f1e89:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1e8f:	89 04 24             	mov    %eax,(%esp)
 81f1e92:	e8 89 9a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1e97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1e9e:	00 
 81f1e9f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1ea5:	89 04 24             	mov    %eax,(%esp)
 81f1ea8:	e8 ab 9a ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1ead:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1eb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1eb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1eba:	89 04 24             	mov    %eax,(%esp)
 81f1ebd:	e8 f8 66 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f1ec2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f1ec7:	e9 24 0e 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f1ecc:	e8 bd a2 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f1ed1:	89 04 24             	mov    %eax,(%esp)
 81f1ed4:	e8 63 2e 0a 00       	call   8294d3c <_ZN12CGameManager13GetTradeSpaceEv>
 81f1ed9:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81f1edc:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 81f1ee0:	0f 85 95 00 00 00    	jne    81f1f7b <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x16ed>
 81f1ee6:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f1eed:	00 
 81f1eee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1ef5:	00 
 81f1ef6:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1efc:	89 04 24             	mov    %eax,(%esp)
 81f1eff:	e8 f8 99 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1f04:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1f0b:	00 
 81f1f0c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1f12:	89 04 24             	mov    %eax,(%esp)
 81f1f15:	e8 06 9a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1f1a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1f21:	00 
 81f1f22:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1f28:	89 04 24             	mov    %eax,(%esp)
 81f1f2b:	e8 f0 99 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1f30:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1f37:	00 
 81f1f38:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1f3e:	89 04 24             	mov    %eax,(%esp)
 81f1f41:	e8 da 99 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1f46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1f4d:	00 
 81f1f4e:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1f54:	89 04 24             	mov    %eax,(%esp)
 81f1f57:	e8 fc 99 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f1f5c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1f62:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1f66:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1f69:	89 04 24             	mov    %eax,(%esp)
 81f1f6c:	e8 49 66 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f1f71:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f1f76:	e9 75 0d 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f1f7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1f7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f1f82:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81f1f85:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1f89:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81f1f8c:	89 04 24             	mov    %eax,(%esp)
 81f1f8f:	e8 5c 76 33 00       	call   85295f0 <_ZN11CTradeSpace11set_tradersEP5CUserS1_>
 81f1f94:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81f1f9b:	00 
 81f1f9c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f1fa3:	00 
 81f1fa4:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1faa:	89 04 24             	mov    %eax,(%esp)
 81f1fad:	e8 4a 99 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f1fb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f1fb5:	89 04 24             	mov    %eax,(%esp)
 81f1fb8:	e8 bf 83 ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81f1fbd:	0f b7 c0             	movzwl %ax,%eax
 81f1fc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1fc4:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1fca:	89 04 24             	mov    %eax,(%esp)
 81f1fcd:	e8 d2 7e ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81f1fd2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f1fd9:	00 
 81f1fda:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1fe0:	89 04 24             	mov    %eax,(%esp)
 81f1fe3:	e8 38 99 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f1fe8:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81f1fee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f1ff2:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f1ff8:	89 04 24             	mov    %eax,(%esp)
 81f1ffb:	e8 3c 99 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f2000:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2003:	89 04 24             	mov    %eax,(%esp)
 81f2006:	e8 75 d3 03 00       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 81f200b:	0f b6 c0             	movzbl %al,%eax
 81f200e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2012:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2018:	89 04 24             	mov    %eax,(%esp)
 81f201b:	e8 00 99 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2020:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2023:	89 04 24             	mov    %eax,(%esp)
 81f2026:	e8 d7 d1 03 00       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 81f202b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f202f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2035:	89 04 24             	mov    %eax,(%esp)
 81f2038:	e8 ff 98 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f203d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2044:	00 
 81f2045:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f204b:	89 04 24             	mov    %eax,(%esp)
 81f204e:	e8 05 99 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f2053:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2059:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f205d:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81f2060:	89 04 24             	mov    %eax,(%esp)
 81f2063:	e8 52 65 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f2068:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f206e:	89 04 24             	mov    %eax,(%esp)
 81f2071:	e8 70 98 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f2076:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f207d:	00 
 81f207e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2085:	00 
 81f2086:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f208c:	89 04 24             	mov    %eax,(%esp)
 81f208f:	e8 68 98 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f2094:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f209b:	00 
 81f209c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f20a2:	89 04 24             	mov    %eax,(%esp)
 81f20a5:	e8 76 98 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f20aa:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f20b1:	0f b7 c0             	movzwl %ax,%eax
 81f20b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f20b8:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f20be:	89 04 24             	mov    %eax,(%esp)
 81f20c1:	e8 de 7d ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81f20c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f20cd:	00 
 81f20ce:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f20d4:	89 04 24             	mov    %eax,(%esp)
 81f20d7:	e8 44 98 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f20dc:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81f20df:	89 04 24             	mov    %eax,(%esp)
 81f20e2:	e8 99 d2 03 00       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 81f20e7:	0f b6 c0             	movzbl %al,%eax
 81f20ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f20ee:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f20f4:	89 04 24             	mov    %eax,(%esp)
 81f20f7:	e8 24 98 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f20fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2103:	00 
 81f2104:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f210a:	89 04 24             	mov    %eax,(%esp)
 81f210d:	e8 46 98 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f2112:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2118:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f211c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f211f:	89 04 24             	mov    %eax,(%esp)
 81f2122:	e8 93 64 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f2127:	e9 9f 0b 00 00       	jmp    81f2ccb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243d>
 81f212c:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f2133:	0f b7 d8             	movzwl %ax,%ebx
 81f2136:	e8 6c 82 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f213b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f213f:	89 04 24             	mov    %eax,(%esp)
 81f2142:	e8 55 2a 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81f2147:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81f214a:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 81f214e:	0f 85 95 00 00 00    	jne    81f21e9 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x195b>
 81f2154:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f215b:	00 
 81f215c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2163:	00 
 81f2164:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f216a:	89 04 24             	mov    %eax,(%esp)
 81f216d:	e8 8a 97 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f2172:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f2179:	00 
 81f217a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2180:	89 04 24             	mov    %eax,(%esp)
 81f2183:	e8 98 97 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2188:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f218f:	00 
 81f2190:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2196:	89 04 24             	mov    %eax,(%esp)
 81f2199:	e8 82 97 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f219e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81f21a5:	00 
 81f21a6:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f21ac:	89 04 24             	mov    %eax,(%esp)
 81f21af:	e8 6c 97 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f21b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f21bb:	00 
 81f21bc:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f21c2:	89 04 24             	mov    %eax,(%esp)
 81f21c5:	e8 8e 97 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f21ca:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f21d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f21d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f21d7:	89 04 24             	mov    %eax,(%esp)
 81f21da:	e8 db 63 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f21df:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f21e4:	e9 07 0b 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f21e9:	e8 b2 2e 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81f21ee:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f21f5:	00 
 81f21f6:	8b 55 b8             	mov    -0x48(%ebp),%edx
 81f21f9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f21fd:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2200:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2204:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f220b:	00 
 81f220c:	89 04 24             	mov    %eax,(%esp)
 81f220f:	e8 00 dc 0f 00       	call   82efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>
 81f2214:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81f2217:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 81f221b:	0f 8e 97 00 00 00    	jle    81f22b8 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1a2a>
 81f2221:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f2228:	00 
 81f2229:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2230:	00 
 81f2231:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2237:	89 04 24             	mov    %eax,(%esp)
 81f223a:	e8 bd 96 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f223f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f2246:	00 
 81f2247:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f224d:	89 04 24             	mov    %eax,(%esp)
 81f2250:	e8 cb 96 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2255:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f2258:	0f be c0             	movsbl %al,%eax
 81f225b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f225f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2265:	89 04 24             	mov    %eax,(%esp)
 81f2268:	e8 b3 96 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f226d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81f2274:	00 
 81f2275:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f227b:	89 04 24             	mov    %eax,(%esp)
 81f227e:	e8 9d 96 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2283:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f228a:	00 
 81f228b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2291:	89 04 24             	mov    %eax,(%esp)
 81f2294:	e8 bf 96 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f2299:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f229f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f22a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f22a6:	89 04 24             	mov    %eax,(%esp)
 81f22a9:	e8 0c 63 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f22ae:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f22b3:	e9 38 0a 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f22b8:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f22bb:	89 04 24             	mov    %eax,(%esp)
 81f22be:	e8 b1 db 03 00       	call   822fe74 <_ZN5CUser11GetPvpIndexEv>
 81f22c3:	0f bf d8             	movswl %ax,%ebx
 81f22c6:	e8 c3 9e ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f22cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f22d2:	00 
 81f22d3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f22d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f22da:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f22de:	89 04 24             	mov    %eax,(%esp)
 81f22e1:	e8 20 2f 0a 00       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 81f22e6:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81f22e9:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 81f22ed:	0f 85 95 00 00 00    	jne    81f2388 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1afa>
 81f22f3:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f22fa:	00 
 81f22fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2302:	00 
 81f2303:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2309:	89 04 24             	mov    %eax,(%esp)
 81f230c:	e8 eb 95 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f2311:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f2318:	00 
 81f2319:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f231f:	89 04 24             	mov    %eax,(%esp)
 81f2322:	e8 f9 95 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2327:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f232e:	00 
 81f232f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2335:	89 04 24             	mov    %eax,(%esp)
 81f2338:	e8 e3 95 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f233d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81f2344:	00 
 81f2345:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f234b:	89 04 24             	mov    %eax,(%esp)
 81f234e:	e8 cd 95 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2353:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f235a:	00 
 81f235b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2361:	89 04 24             	mov    %eax,(%esp)
 81f2364:	e8 ef 95 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f2369:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f236f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2373:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2376:	89 04 24             	mov    %eax,(%esp)
 81f2379:	e8 3c 62 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f237e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2383:	e9 68 09 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2388:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
 81f238f:	00 00 00 
 81f2392:	e8 10 80 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f2397:	89 04 24             	mov    %eax,(%esp)
 81f239a:	e8 29 20 04 00       	call   82343c8 <_ZN9GameWorld21IsSameTeamChannelJoinEv>
 81f239f:	0f b6 c0             	movzbl %al,%eax
 81f23a2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f23a6:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81f23ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f23b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f23b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f23b7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f23ba:	89 04 24             	mov    %eax,(%esp)
 81f23bd:	e8 30 49 3e 00       	call   85d6cf2 <_ZN8PvP_Room9join_roomEP5CUserRib>
 81f23c2:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81f23c5:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f23c8:	89 04 24             	mov    %eax,(%esp)
 81f23cb:	e8 fc b5 03 00       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 81f23d0:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 81f23d6:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f23d9:	89 04 24             	mov    %eax,(%esp)
 81f23dc:	e8 b3 b5 03 00       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 81f23e1:	89 c7                	mov    %eax,%edi
 81f23e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f23e6:	89 04 24             	mov    %eax,(%esp)
 81f23e9:	e8 3a ec f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81f23ee:	89 c6                	mov    %eax,%esi
 81f23f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f23f3:	89 04 24             	mov    %eax,(%esp)
 81f23f6:	e8 77 ec f0 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 81f23fb:	89 c3                	mov    %eax,%ebx
 81f23fd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f2404:	00 
 81f2405:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f240c:	00 
 81f240d:	c7 44 24 08 82 7a 00 	movl   $0x7a82,0x8(%esp)
 81f2414:	00 
 81f2415:	c7 44 24 04 60 02 bd 	movl   $0x8bd0260,0x4(%esp)
 81f241c:	08 
 81f241d:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81f2423:	89 04 24             	mov    %eax,(%esp)
 81f2426:	e8 11 d9 35 00       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 81f242b:	c7 44 24 1c 0b 00 00 	movl   $0xb,0x1c(%esp)
 81f2432:	00 
 81f2433:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f2436:	89 44 24 18          	mov    %eax,0x18(%esp)
 81f243a:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 81f2440:	89 44 24 14          	mov    %eax,0x14(%esp)
 81f2444:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81f2448:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81f244c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f2450:	c7 44 24 04 ec 20 bc 	movl   $0x8bc20ec,0x4(%esp)
 81f2457:	08 
 81f2458:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81f245e:	89 04 24             	mov    %eax,(%esp)
 81f2461:	e8 fe d8 35 00       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 81f2466:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81f246a:	0f 8e 94 00 00 00    	jle    81f2504 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1c76>
 81f2470:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f2477:	00 
 81f2478:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f247f:	00 
 81f2480:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2486:	89 04 24             	mov    %eax,(%esp)
 81f2489:	e8 6e 94 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f248e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f2495:	00 
 81f2496:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f249c:	89 04 24             	mov    %eax,(%esp)
 81f249f:	e8 7c 94 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f24a4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f24a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f24ab:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f24b1:	89 04 24             	mov    %eax,(%esp)
 81f24b4:	e8 67 94 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f24b9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81f24c0:	00 
 81f24c1:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f24c7:	89 04 24             	mov    %eax,(%esp)
 81f24ca:	e8 51 94 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f24cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f24d6:	00 
 81f24d7:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f24dd:	89 04 24             	mov    %eax,(%esp)
 81f24e0:	e8 73 94 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f24e5:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f24eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f24ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f24f2:	89 04 24             	mov    %eax,(%esp)
 81f24f5:	e8 c0 60 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f24fa:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f24ff:	e9 ec 07 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2504:	e8 85 9c ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f2509:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f2510:	00 
 81f2511:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2514:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2518:	89 04 24             	mov    %eax,(%esp)
 81f251b:	e8 56 57 0a 00       	call   8297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>
 81f2520:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 81f2526:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f252c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2530:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2534:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f2537:	89 04 24             	mov    %eax,(%esp)
 81f253a:	e8 a3 94 3e 00       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 81f253f:	e8 63 7e ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f2544:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 81f254a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f254e:	89 04 24             	mov    %eax,(%esp)
 81f2551:	e8 be 66 4d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81f2556:	e8 4c 7e ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f255b:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f255e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2562:	89 04 24             	mov    %eax,(%esp)
 81f2565:	e8 84 47 4d 00       	call   86c6cee <_ZN9GameWorld8goto_pvpEP5CUser>
 81f256a:	e9 5c 07 00 00       	jmp    81f2ccb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243d>
 81f256f:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f2576:	0f b7 d8             	movzwl %ax,%ebx
 81f2579:	e8 29 7e ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f257e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f2582:	89 04 24             	mov    %eax,(%esp)
 81f2585:	e8 12 26 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81f258a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81f258d:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81f2591:	0f 85 95 00 00 00    	jne    81f262c <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1d9e>
 81f2597:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f259e:	00 
 81f259f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f25a6:	00 
 81f25a7:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f25ad:	89 04 24             	mov    %eax,(%esp)
 81f25b0:	e8 47 93 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f25b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f25bc:	00 
 81f25bd:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f25c3:	89 04 24             	mov    %eax,(%esp)
 81f25c6:	e8 55 93 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f25cb:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f25d2:	00 
 81f25d3:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f25d9:	89 04 24             	mov    %eax,(%esp)
 81f25dc:	e8 3f 93 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f25e1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f25e8:	00 
 81f25e9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f25ef:	89 04 24             	mov    %eax,(%esp)
 81f25f2:	e8 29 93 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f25f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f25fe:	00 
 81f25ff:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2605:	89 04 24             	mov    %eax,(%esp)
 81f2608:	e8 4b 93 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f260d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2613:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2617:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f261a:	89 04 24             	mov    %eax,(%esp)
 81f261d:	e8 98 5f 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f2622:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2627:	e9 c4 06 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f262c:	e8 6f 2a 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81f2631:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f2638:	00 
 81f2639:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81f263c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f2640:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2643:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2647:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f264e:	00 
 81f264f:	89 04 24             	mov    %eax,(%esp)
 81f2652:	e8 bd d7 0f 00       	call   82efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>
 81f2657:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81f265a:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 81f265e:	0f 8e 97 00 00 00    	jle    81f26fb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1e6d>
 81f2664:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f266b:	00 
 81f266c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2673:	00 
 81f2674:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f267a:	89 04 24             	mov    %eax,(%esp)
 81f267d:	e8 7a 92 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f2682:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f2689:	00 
 81f268a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2690:	89 04 24             	mov    %eax,(%esp)
 81f2693:	e8 88 92 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2698:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81f269b:	0f be c0             	movsbl %al,%eax
 81f269e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f26a2:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f26a8:	89 04 24             	mov    %eax,(%esp)
 81f26ab:	e8 70 92 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f26b0:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f26b7:	00 
 81f26b8:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f26be:	89 04 24             	mov    %eax,(%esp)
 81f26c1:	e8 5a 92 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f26c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f26cd:	00 
 81f26ce:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f26d4:	89 04 24             	mov    %eax,(%esp)
 81f26d7:	e8 7c 92 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f26dc:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f26e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f26e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f26e9:	89 04 24             	mov    %eax,(%esp)
 81f26ec:	e8 c9 5e 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f26f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f26f6:	e9 f5 05 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f26fb:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81f26fe:	89 04 24             	mov    %eax,(%esp)
 81f2701:	e8 7e d7 03 00       	call   822fe84 <_ZN5CUser15GetWarRoomIndexEv>
 81f2706:	0f bf d8             	movswl %ax,%ebx
 81f2709:	e8 80 9a ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f270e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f2712:	89 04 24             	mov    %eax,(%esp)
 81f2715:	e8 b6 fe 0a 00       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 81f271a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81f271d:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81f2721:	0f 85 95 00 00 00    	jne    81f27bc <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1f2e>
 81f2727:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f272e:	00 
 81f272f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2736:	00 
 81f2737:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f273d:	89 04 24             	mov    %eax,(%esp)
 81f2740:	e8 b7 91 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f2745:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f274c:	00 
 81f274d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2753:	89 04 24             	mov    %eax,(%esp)
 81f2756:	e8 c5 91 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f275b:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f2762:	00 
 81f2763:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2769:	89 04 24             	mov    %eax,(%esp)
 81f276c:	e8 af 91 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2771:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f2778:	00 
 81f2779:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f277f:	89 04 24             	mov    %eax,(%esp)
 81f2782:	e8 99 91 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2787:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f278e:	00 
 81f278f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2795:	89 04 24             	mov    %eax,(%esp)
 81f2798:	e8 bb 91 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f279d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f27a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f27a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f27aa:	89 04 24             	mov    %eax,(%esp)
 81f27ad:	e8 08 5e 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f27b2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f27b7:	e9 34 05 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f27bc:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
 81f27c3:	00 00 00 
 81f27c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f27c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f27cd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f27d0:	89 04 24             	mov    %eax,(%esp)
 81f27d3:	e8 d6 84 4c 00       	call   86bacae <_ZN7WarRoom10IsJoinableEP5CUser>
 81f27d8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81f27db:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81f27df:	0f 8e 94 00 00 00    	jle    81f2879 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x1feb>
 81f27e5:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f27ec:	00 
 81f27ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f27f4:	00 
 81f27f5:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f27fb:	89 04 24             	mov    %eax,(%esp)
 81f27fe:	e8 f9 90 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f2803:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f280a:	00 
 81f280b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2811:	89 04 24             	mov    %eax,(%esp)
 81f2814:	e8 07 91 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2819:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f281c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2820:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2826:	89 04 24             	mov    %eax,(%esp)
 81f2829:	e8 f2 90 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f282e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f2835:	00 
 81f2836:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f283c:	89 04 24             	mov    %eax,(%esp)
 81f283f:	e8 dc 90 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2844:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f284b:	00 
 81f284c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2852:	89 04 24             	mov    %eax,(%esp)
 81f2855:	e8 fe 90 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f285a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2860:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2864:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2867:	89 04 24             	mov    %eax,(%esp)
 81f286a:	e8 4b 5d 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f286f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2874:	e9 77 04 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2879:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81f287f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f2883:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2886:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f288a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f288d:	89 04 24             	mov    %eax,(%esp)
 81f2890:	e8 05 86 4c 00       	call   86bae9a <_ZN7WarRoom4JoinEP5CUserRi>
 81f2895:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81f2898:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81f289c:	0f 8e 94 00 00 00    	jle    81f2936 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x20a8>
 81f28a2:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 81f28a9:	00 
 81f28aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f28b1:	00 
 81f28b2:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f28b8:	89 04 24             	mov    %eax,(%esp)
 81f28bb:	e8 3c 90 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f28c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f28c7:	00 
 81f28c8:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f28ce:	89 04 24             	mov    %eax,(%esp)
 81f28d1:	e8 4a 90 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f28d6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f28d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f28dd:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f28e3:	89 04 24             	mov    %eax,(%esp)
 81f28e6:	e8 35 90 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f28eb:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f28f2:	00 
 81f28f3:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f28f9:	89 04 24             	mov    %eax,(%esp)
 81f28fc:	e8 1f 90 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f2901:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f2908:	00 
 81f2909:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f290f:	89 04 24             	mov    %eax,(%esp)
 81f2912:	e8 41 90 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f2917:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f291d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2921:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2924:	89 04 24             	mov    %eax,(%esp)
 81f2927:	e8 8e 5c 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f292c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2931:	e9 ba 03 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2936:	e8 53 98 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f293b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f2942:	00 
 81f2943:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2946:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f294a:	89 04 24             	mov    %eax,(%esp)
 81f294d:	e8 24 53 0a 00       	call   8297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>
 81f2952:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 81f2958:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f295e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2962:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2966:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f2969:	89 04 24             	mov    %eax,(%esp)
 81f296c:	e8 2f b5 4c 00       	call   86bdea0 <_ZN7WarRoom12MakeSlotInfoEPci>
 81f2971:	e8 31 7a ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f2976:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 81f297c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2980:	89 04 24             	mov    %eax,(%esp)
 81f2983:	e8 8c 62 4d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81f2988:	e8 1a 7a ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f298d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2990:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2994:	89 04 24             	mov    %eax,(%esp)
 81f2997:	e8 f6 47 4d 00       	call   86c7192 <_ZN9GameWorld12goto_warroomEP5CUser>
 81f299c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f299f:	89 04 24             	mov    %eax,(%esp)
 81f29a2:	e8 25 82 4c 00       	call   86babcc <_ZNK7WarRoom14GetWaiterCountEv>
 81f29a7:	83 f8 02             	cmp    $0x2,%eax
 81f29aa:	0f 9f c0             	setg   %al
 81f29ad:	84 c0                	test   %al,%al
 81f29af:	0f 84 12 03 00 00    	je     81f2cc7 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2439>
 81f29b5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f29b8:	89 04 24             	mov    %eax,(%esp)
 81f29bb:	e8 d6 c4 03 00       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 81f29c0:	85 c0                	test   %eax,%eax
 81f29c2:	0f 94 c0             	sete   %al
 81f29c5:	84 c0                	test   %al,%al
 81f29c7:	0f 84 fd 02 00 00    	je     81f2cca <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243c>
 81f29cd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81f29d0:	89 04 24             	mov    %eax,(%esp)
 81f29d3:	e8 fc ac 4c 00       	call   86bd6d4 <_ZN7WarRoom5StartEv>
 81f29d8:	e9 ee 02 00 00       	jmp    81f2ccb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243d>
 81f29dd:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f29e4:	0f b7 d8             	movzwl %ax,%ebx
 81f29e7:	e8 bb 79 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f29ec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f29f0:	89 04 24             	mov    %eax,(%esp)
 81f29f3:	e8 a4 21 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81f29f8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81f29fb:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81f29ff:	75 3d                	jne    81f2a3e <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x21b0>
 81f2a01:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f2a08:	0f be c0             	movsbl %al,%eax
 81f2a0b:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 81f2a11:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f2a15:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 81f2a1c:	00 
 81f2a1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f2a21:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f2a28:	00 
 81f2a29:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2a2c:	89 04 24             	mov    %eax,(%esp)
 81f2a2f:	e8 50 93 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f2a34:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2a39:	e9 b2 02 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2a3e:	e8 5d 26 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81f2a43:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f2a4a:	00 
 81f2a4b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81f2a4e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f2a52:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2a55:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2a59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f2a60:	00 
 81f2a61:	89 04 24             	mov    %eax,(%esp)
 81f2a64:	e8 ab d3 0f 00       	call   82efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>
 81f2a69:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81f2a6c:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81f2a70:	7e 3f                	jle    81f2ab1 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2223>
 81f2a72:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81f2a75:	0f b6 d0             	movzbl %al,%edx
 81f2a78:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f2a7f:	0f be c0             	movsbl %al,%eax
 81f2a82:	8d 8d 54 ff ff ff    	lea    -0xac(%ebp),%ecx
 81f2a88:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81f2a8c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f2a90:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f2a94:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f2a9b:	00 
 81f2a9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2a9f:	89 04 24             	mov    %eax,(%esp)
 81f2aa2:	e8 dd 92 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f2aa7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2aac:	e9 3f 02 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2ab1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2ab4:	89 04 24             	mov    %eax,(%esp)
 81f2ab7:	e8 d8 cd 03 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81f2abc:	83 f8 01             	cmp    $0x1,%eax
 81f2abf:	0f 95 c0             	setne  %al
 81f2ac2:	84 c0                	test   %al,%al
 81f2ac4:	74 3d                	je     81f2b03 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2275>
 81f2ac6:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f2acd:	0f be c0             	movsbl %al,%eax
 81f2ad0:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 81f2ad6:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f2ada:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 81f2ae1:	00 
 81f2ae2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f2ae6:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f2aed:	00 
 81f2aee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2af1:	89 04 24             	mov    %eax,(%esp)
 81f2af4:	e8 8b 92 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f2af9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2afe:	e9 ed 01 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2b03:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f2b0a:	0f be c8             	movsbl %al,%ecx
 81f2b0d:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81f2b13:	89 c2                	mov    %eax,%edx
 81f2b15:	a1 68 f7 41 09       	mov    0x941f768,%eax
 81f2b1a:	8d 9d 54 ff ff ff    	lea    -0xac(%ebp),%ebx
 81f2b20:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81f2b24:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81f2b28:	89 54 24 14          	mov    %edx,0x14(%esp)
 81f2b2c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81f2b2f:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f2b33:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2b36:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f2b3a:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81f2b3d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2b41:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2b44:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2b48:	89 04 24             	mov    %eax,(%esp)
 81f2b4b:	e8 12 b8 2a 00       	call   849e362 <_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard>
 81f2b50:	e9 76 01 00 00       	jmp    81f2ccb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243d>
 81f2b55:	0f b7 85 6d ff ff ff 	movzwl -0x93(%ebp),%eax
 81f2b5c:	0f b7 d8             	movzwl %ax,%ebx
 81f2b5f:	e8 43 78 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f2b64:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f2b68:	89 04 24             	mov    %eax,(%esp)
 81f2b6b:	e8 2c 20 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81f2b70:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81f2b73:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81f2b77:	75 3d                	jne    81f2bb6 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2328>
 81f2b79:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f2b80:	0f be c0             	movsbl %al,%eax
 81f2b83:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 81f2b89:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f2b8d:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 81f2b94:	00 
 81f2b95:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f2b99:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f2ba0:	00 
 81f2ba1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2ba4:	89 04 24             	mov    %eax,(%esp)
 81f2ba7:	e8 d8 91 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f2bac:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2bb1:	e9 3a 01 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2bb6:	e8 e5 24 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81f2bbb:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f2bc2:	00 
 81f2bc3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81f2bc6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f2bca:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2bcd:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2bd1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f2bd8:	00 
 81f2bd9:	89 04 24             	mov    %eax,(%esp)
 81f2bdc:	e8 33 d2 0f 00       	call   82efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>
 81f2be1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f2be4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81f2be8:	7e 3f                	jle    81f2c29 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x239b>
 81f2bea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f2bed:	0f b6 d0             	movzbl %al,%edx
 81f2bf0:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f2bf7:	0f be c0             	movsbl %al,%eax
 81f2bfa:	8d 8d 54 ff ff ff    	lea    -0xac(%ebp),%ecx
 81f2c00:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81f2c04:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f2c08:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f2c0c:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f2c13:	00 
 81f2c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2c17:	89 04 24             	mov    %eax,(%esp)
 81f2c1a:	e8 65 91 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f2c1f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2c24:	e9 c7 00 00 00       	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2c29:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81f2c2c:	89 04 24             	mov    %eax,(%esp)
 81f2c2f:	e8 60 cc 03 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81f2c34:	83 f8 01             	cmp    $0x1,%eax
 81f2c37:	0f 95 c0             	setne  %al
 81f2c3a:	84 c0                	test   %al,%al
 81f2c3c:	74 3a                	je     81f2c78 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x23ea>
 81f2c3e:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f2c45:	0f be c0             	movsbl %al,%eax
 81f2c48:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 81f2c4e:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f2c52:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 81f2c59:	00 
 81f2c5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f2c5e:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 81f2c65:	00 
 81f2c66:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2c69:	89 04 24             	mov    %eax,(%esp)
 81f2c6c:	e8 13 91 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f2c71:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2c76:	eb 78                	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2c78:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 81f2c7f:	0f be c8             	movsbl %al,%ecx
 81f2c82:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81f2c88:	89 c2                	mov    %eax,%edx
 81f2c8a:	a1 68 f7 41 09       	mov    0x941f768,%eax
 81f2c8f:	8d 9d 54 ff ff ff    	lea    -0xac(%ebp),%ebx
 81f2c95:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81f2c99:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81f2c9d:	89 54 24 14          	mov    %edx,0x14(%esp)
 81f2ca1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2ca4:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f2ca8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81f2cab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f2caf:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81f2cb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2cb6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2cb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2cbd:	89 04 24             	mov    %eax,(%esp)
 81f2cc0:	e8 9d b6 2a 00       	call   849e362 <_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard>
 81f2cc5:	eb 04                	jmp    81f2ccb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243d>
 81f2cc7:	90                   	nop
 81f2cc8:	eb 01                	jmp    81f2ccb <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x243d>
 81f2cca:	90                   	nop
 81f2ccb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2cd0:	eb 1e                	jmp    81f2cf0 <_ZN18DisPatcher_ResPeer12dispatch_sigEP5CUserR9PacketBuf+0x2462>
 81f2cd2:	89 d3                	mov    %edx,%ebx
 81f2cd4:	89 c6                	mov    %eax,%esi
 81f2cd6:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2cdc:	89 04 24             	mov    %eax,(%esp)
 81f2cdf:	e8 9c b1 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f2ce4:	89 f0                	mov    %esi,%eax
 81f2ce6:	89 da                	mov    %ebx,%edx
 81f2ce8:	89 04 24             	mov    %eax,(%esp)
 81f2ceb:	e8 60 0a 8f 00       	call   8ae3750 <_Unwind_Resume>
 81f2cf0:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81f2cf6:	89 04 24             	mov    %eax,(%esp)
 81f2cf9:	e8 82 b1 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f2cfe:	89 d8                	mov    %ebx,%eax
 81f2d00:	81 c4 ec 00 00 00    	add    $0xec,%esp
 81f2d06:	5b                   	pop    %ebx
 81f2d07:	5e                   	pop    %esi
 81f2d08:	5f                   	pop    %edi
 81f2d09:	5d                   	pop    %ebp
 81f2d0a:	c3                   	ret
 81f2d0b:	90                   	nop

```

```c
// DisPatcher_ResPeer::dispatch_sig @ 0x81f088e

/* DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ResPeer::dispatch_sig(DisPatcher_ResPeer *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  CGameManager *pCVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  CUser *pCVar14;
  GameWorld *pGVar15;
  CAssaultMgr *pCVar16;
  undefined4 unaff_EBX;
  int local_c4;
  int local_c0;
  PacketGuard local_bc [12];
  PacketGuard local_b0 [25];
  ushort local_97;
  char local_95;
  uint local_94;
  CSwitchLog local_90 [16];
  CUserCharacInfo *local_80;
  int local_7c;
  CParty *local_78;
  int local_74;
  int local_70;
  CParty *local_6c;
  CParty *local_68;
  int local_64;
  int local_60;
  CUser *local_5c;
  int local_58;
  int local_54;
  CTradeSpace *local_50;
  CUser *local_4c;
  int local_48;
  PvP_Room *local_44;
  int local_40;
  CUser *local_3c;
  int local_38;
  WarRoom *local_34;
  int local_30;
  CUser *local_2c;
  uint local_28;
  CUser *local_24;
  uint local_20;
  
  iVar6 = CUser::get_state(param_1);
  if (iVar6 != 3) {
    return 0;
  }
  PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 081f08da to 081f0a75 has its CatchHandler @ 081f2cd2 */
  cVar2 = PacketBuf::get_short(param_2,&local_97);
  if (cVar2 != '\x01') {
    unaff_EBX = LineFunc(0x77d5,"virtual int DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
    goto LAB_081f2cf0;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_95);
  if (cVar2 != '\x01') {
    unaff_EBX = LineFunc(0x77d6,"virtual int DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
    goto LAB_081f2cf0;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_94);
  if (cVar2 != '\x01') {
    unaff_EBX = LineFunc(0x77d7,"virtual int DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
    goto LAB_081f2cf0;
  }
  cVar3 = CUser::GetReceivedRequestType(param_1);
  cVar2 = local_95;
  if (cVar3 == '\x06') {
LAB_081f09f0:
    if ((local_95 != '\x06') && (local_95 != '\b')) {
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
  }
  else {
    if (cVar3 < '\a') {
      if (cVar3 == '\x05') {
LAB_081f09d0:
        if ((local_95 != '\x05') && (local_95 != '\a')) {
          unaff_EBX = 0;
          goto LAB_081f2cf0;
        }
        goto LAB_081f0a41;
      }
    }
    else {
      if (cVar3 == '\a') goto LAB_081f09d0;
      if (cVar3 == '\b') goto LAB_081f09f0;
    }
    cVar3 = CUser::GetReceivedRequestType(param_1);
    if (cVar2 != cVar3) {
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
  }
LAB_081f0a41:
  CUser::InitReceivedRequestType(param_1);
  switch(local_95) {
  case '\0':
    PacketGuard::PacketGuard(local_bc);
    uVar1 = local_97;
                    /* try { // try from 081f0a80 to 081f1c91 has its CatchHandler @ 081f1c99 */
    pGVar15 = (GameWorld *)G_GameWorld();
    local_80 = (CUserCharacInfo *)GameWorld::find_from_world(pGVar15,uVar1);
    if (local_80 == (CUserCharacInfo *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
      CUser::Send(param_1,local_bc);
      unaff_EBX = 0;
      bVar4 = false;
    }
    else {
      if (local_80 == (CUserCharacInfo *)param_1) {
LAB_081f0b5c:
        bVar4 = true;
      }
      else {
        iVar6 = CUserCharacInfo::getCurCharacNo(local_80);
        iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        if (iVar6 == iVar7) goto LAB_081f0b5c;
        bVar4 = false;
      }
      if (bVar4) {
        unaff_EBX = 0x7828;
        bVar4 = false;
      }
      else {
        iVar6 = CUser::get_state(param_1);
        if ((iVar6 == 5) || (iVar6 = CUser::get_state((CUser *)local_80), iVar6 == 5)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          unaff_EBX = 0;
          bVar4 = false;
        }
        else {
          pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
          local_7c = pvp_assault::CAssaultMgr::check_party_teleport_user
                               (pCVar16,'\0',param_1,(CUser *)local_80,false);
          if (local_7c < 1) {
            iVar6 = CUser::get_state((CUser *)local_80);
            if (iVar6 == 3) {
              cVar2 = CUser::CheckInParty(param_1);
              if ((cVar2 == '\0') || (cVar2 = CUser::CheckInParty((CUser *)local_80), cVar2 == '\0')
                 ) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x12);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                CUser::Send(param_1,local_bc);
                unaff_EBX = 0;
                bVar4 = false;
              }
              else {
                cVar2 = CUser::isCompetitionMercenary(param_1);
                if (cVar2 == '\0') {
                  cVar2 = CUser::isCompetitionMercenary((CUser *)local_80);
                  if (cVar2 == '\0') {
                    cVar2 = CPowerManager::IsPowerWarEventOn();
                    if (cVar2 == '\0') {
                      local_74 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                      local_70 = CUserCharacInfo::GetCurCharacChaosKillTime(local_80);
                      if ((local_74 < local_70 + 600) &&
                         (cVar2 = expert_job::CAlchemist::GetAssaultPrevent(param_1,(bool *)0x0),
                         cVar2 != '\0')) {
                        bVar4 = true;
                      }
                      else {
                        bVar4 = false;
                      }
                      if (bVar4) {
                        CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xfa,local_bc);
                        unaff_EBX = 0;
                        bVar4 = false;
                      }
                      else {
                        local_70 = CUserCharacInfo::GetCurCharacChaosKillTime
                                             ((CUserCharacInfo *)param_1);
                        if ((local_74 < local_70 + 600) &&
                           (cVar2 = expert_job::CAlchemist::GetAssaultPrevent
                                              ((CUser *)local_80,(bool *)0x0), cVar2 != '\0')) {
                          bVar4 = true;
                        }
                        else {
                          bVar4 = false;
                        }
                        if (bVar4) {
                          CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xfa,local_bc);
                          unaff_EBX = 0;
                          bVar4 = false;
                        }
                        else {
                          local_6c = (CParty *)CUser::GetParty(param_1);
                          if (((local_6c == (CParty *)0x0) ||
                              (cVar2 = CParty::CheckMemberLastTryAssaultTime(local_6c),
                              cVar2 == '\0')) ||
                             (cVar2 = expert_job::CAlchemist::GetAssaultPrevent
                                                ((CUser *)local_80,(bool *)0x0), cVar2 == '\0')) {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                          if (bVar4) {
                            CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xfa,local_bc);
                            unaff_EBX = 0;
                            bVar4 = false;
                          }
                          else {
                            local_68 = (CParty *)CUser::GetParty((CUser *)local_80);
                            if (((local_68 == (CParty *)0x0) ||
                                (cVar2 = CParty::CheckMemberLastTryAssaultTime(local_68),
                                cVar2 == '\0')) ||
                               (cVar2 = expert_job::CAlchemist::GetAssaultPrevent
                                                  (param_1,(bool *)0x0), cVar2 == '\0')) {
                              bVar4 = false;
                            }
                            else {
                              bVar4 = true;
                            }
                            if (!bVar4) goto LAB_081f12d8;
                            CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xfa,local_bc);
                            unaff_EBX = 0;
                            bVar4 = false;
                          }
                        }
                      }
                    }
                    else {
                      cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                      if ((cVar2 == '\a') &&
                         (cVar2 = CUserCharacInfo::getCurCharacVill(local_80), cVar2 == '\a')) {
                        bVar4 = true;
                      }
                      else {
                        bVar4 = false;
                      }
                      if (bVar4) {
                        cVar2 = CUser::getPowerSide(param_1);
                        cVar3 = CUser::getPowerSide((CUser *)local_80);
                        if (cVar2 == cVar3) {
LAB_081f12d8:
                          local_78 = (CParty *)0x0;
                          cVar2 = CUser::CheckInParty(param_1);
                          if ((cVar2 == '\x01') ||
                             (cVar2 = CUser::CheckInParty((CUser *)local_80), cVar2 == '\x01')) {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                          if (bVar4) {
                            pCVar9 = (CGameManager *)G_CGameManager();
                            local_78 = (CParty *)CGameManager::GetParty(pCVar9);
                            if (local_78 == (CParty *)0x0) {
                              InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                              CUser::Send(param_1,local_bc);
                              unaff_EBX = 0;
                              bVar4 = false;
                              goto LAB_081f1cb4;
                            }
                            CParty::create_party(local_78,(CUser *)local_80);
                            CParty::setDungIndex(local_78,0);
                            CParty::setDungDiffi(local_78,'\x05');
                            CParty::join_user(local_78,param_1);
                            CParty::send_party_realtime_info(local_78);
                            InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,0,8);
                            uVar8 = CUser::get_unique_id(param_1);
                            InterfacePacketBuf::put_short
                                      ((InterfacePacketBuf *)local_bc,uVar8 & 0xffff);
                            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                            InterfacePacketBuf::put_int
                                      ((InterfacePacketBuf *)local_bc,(uint)local_97);
                            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                            CUser::Send((CUser *)local_80,local_bc);
                            CParty::send_party_ipinfo(local_78);
                            pGVar15 = (GameWorld *)G_GameWorld();
                            GameWorld::send_party_info_to_all(pGVar15,local_78,0);
                          }
                          cVar2 = CUser::CheckInParty(param_1);
                          if ((cVar2 == '\0') ||
                             (cVar2 = CUser::CheckInParty((CUser *)local_80), cVar2 == '\x01')) {
                            bVar4 = false;
                          }
                          else {
                            bVar4 = true;
                          }
                          if (bVar4) {
                            local_78 = (CParty *)CUser::GetParty(param_1);
                            if (local_78 == (CParty *)0x0) {
                              InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                              CUser::Send(param_1,local_bc);
                              unaff_EBX = 0;
                              bVar4 = false;
                            }
                            else {
                              cVar2 = CParty::CanDoPartyActionAssalutState(local_78);
                              if (cVar2 == '\x01') {
                                local_64 = CParty::join_user(local_78,(CUser *)local_80);
                                if (0 < local_64) {
                                  CParty::send_quick_party_matching_result
                                            (local_78,false,(CUser *)0x0);
                                  CParty::set_quick_party(local_78,false);
                                  CParty::send_party_realtime_info(local_78);
                                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,0,8)
                                  ;
                                  uVar8 = CUser::get_unique_id(param_1);
                                  InterfacePacketBuf::put_short
                                            ((InterfacePacketBuf *)local_bc,uVar8 & 0xffff);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  InterfacePacketBuf::put_int
                                            ((InterfacePacketBuf *)local_bc,(uint)local_97);
                                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                  CUser::Send((CUser *)local_80,local_bc);
                                  CParty::send_party_ipinfo(local_78);
                                  pGVar15 = (GameWorld *)G_GameWorld();
                                  GameWorld::send_party_info_to_all(pGVar15,local_78,2);
                                  goto LAB_081f18be;
                                }
                                InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb)
                                ;
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                if (local_64 == -2) {
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                                }
                                else if (local_64 == -1) {
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                                }
                                else {
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,1);
                                }
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                CUser::Send(param_1,local_bc);
                                unaff_EBX = 0;
                                bVar4 = false;
                              }
                              else {
                                InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb)
                                ;
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                CUser::Send(param_1,local_bc);
                                unaff_EBX = 0;
                                bVar4 = false;
                              }
                            }
                          }
                          else {
LAB_081f18be:
                            cVar2 = CUser::CheckInParty(param_1);
                            if ((cVar2 == '\x01') ||
                               (cVar2 = CUser::CheckInParty((CUser *)local_80), cVar2 == '\0')) {
                              bVar4 = false;
                            }
                            else {
                              bVar4 = true;
                            }
                            if (bVar4) {
                              CUser::GetPartyIndex((CUser *)local_80);
                              iVar6 = G_CGameManager();
                              local_78 = (CParty *)CGameManager::GetParty(iVar6);
                              if (local_78 == (CParty *)0x0) {
                                InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb)
                                ;
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                CUser::Send(param_1,local_bc);
                                unaff_EBX = 0;
                                bVar4 = false;
                              }
                              else {
                                cVar2 = CParty::CanDoPartyActionAssalutState(local_78);
                                if (cVar2 == '\x01') {
                                  local_60 = CParty::join_user(local_78,param_1);
                                  if (0 < local_60) {
                                    CParty::send_quick_party_matching_result
                                              (local_78,false,(CUser *)0x0);
                                    CParty::set_quick_party(local_78,false);
                                    CParty::send_party_realtime_info(local_78);
                                    InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                    InterfacePacketBuf::put_header
                                              ((InterfacePacketBuf *)local_bc,0,8);
                                    uVar8 = CUser::get_unique_id(param_1);
                                    InterfacePacketBuf::put_short
                                              ((InterfacePacketBuf *)local_bc,uVar8 & 0xffff);
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                    InterfacePacketBuf::put_int
                                              ((InterfacePacketBuf *)local_bc,(uint)local_97);
                                    InterfacePacketBuf::finalize
                                              ((InterfacePacketBuf *)local_bc,true);
                                    CUser::Send((CUser *)local_80,local_bc);
                                    CParty::send_party_ipinfo(local_78);
                                    pGVar15 = (GameWorld *)G_GameWorld();
                                    GameWorld::send_party_info_to_all(pGVar15,local_78,2);
                                    goto LAB_081f1c92;
                                  }
                                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                  InterfacePacketBuf::put_header
                                            ((InterfacePacketBuf *)local_bc,1,0xb);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  if (local_60 == -2) {
                                    InterfacePacketBuf::put_byte
                                              ((InterfacePacketBuf *)local_bc,0x13);
                                  }
                                  else if (local_60 == -1) {
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,4);
                                  }
                                  else {
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,1);
                                  }
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                  CUser::Send(param_1,local_bc);
                                  unaff_EBX = 0;
                                  bVar4 = false;
                                }
                                else {
                                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                                  InterfacePacketBuf::put_header
                                            ((InterfacePacketBuf *)local_bc,1,0xb);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                                  CUser::Send(param_1,local_bc);
                                  unaff_EBX = 0;
                                  bVar4 = false;
                                }
                              }
                            }
                            else {
LAB_081f1c92:
                              bVar4 = true;
                            }
                          }
                        }
                        else {
                          InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                          CUser::Send(param_1,local_bc);
                          unaff_EBX = 0;
                          bVar4 = false;
                        }
                      }
                      else {
                        cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                        if (((cVar2 == '\a') ||
                            (cVar2 = CUserCharacInfo::getCurCharacVill(local_80), cVar2 != '\a')) &&
                           ((cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1),
                            cVar2 != '\a' ||
                            (cVar2 = CUserCharacInfo::getCurCharacVill(local_80), cVar2 == '\a'))))
                        {
                          bVar4 = false;
                        }
                        else {
                          bVar4 = true;
                        }
                        if (!bVar4) goto LAB_081f12d8;
                        InterfacePacketBuf::clear((InterfacePacketBuf *)local_bc);
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
                        CUser::Send(param_1,local_bc);
                        unaff_EBX = 0;
                        bVar4 = false;
                      }
                    }
                  }
                  else {
                    CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xea);
                    unaff_EBX = 0;
                    bVar4 = false;
                  }
                }
                else {
                  CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0xea);
                  unaff_EBX = 0;
                  bVar4 = false;
                }
              }
            }
            else {
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0x13);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
              CUser::Send(param_1,local_bc);
              unaff_EBX = 0;
              bVar4 = false;
            }
          }
          else {
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,1,0xb);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,(int)(char)local_7c);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
            CUser::Send(param_1,local_bc);
            unaff_EBX = 0;
            bVar4 = false;
          }
        }
      }
    }
LAB_081f1cb4:
                    /* try { // try from 081f1cbd to 081f2cc4 has its CatchHandler @ 081f2cd2 */
    PacketGuard::~PacketGuard(local_bc);
    if (!bVar4) goto LAB_081f2cf0;
    break;
  case '\x01':
    cVar2 = CUser::CheckInTrade(param_1);
    uVar1 = local_97;
    if (cVar2 != '\0') {
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pGVar15 = (GameWorld *)G_GameWorld();
    local_5c = (CUser *)GameWorld::find_from_world(pGVar15,uVar1);
    local_58 = -1;
    if (local_5c == (CUser *)0x0) {
      local_58 = 3;
    }
    else {
      cVar2 = CUser::CheckInTrade(local_5c);
      if (cVar2 == '\0') {
        iVar6 = CUser::get_state(param_1);
        iVar7 = CUser::get_state(local_5c);
        if (iVar6 != iVar7) {
          local_58 = 0x13;
        }
      }
      else {
        local_58 = 0x12;
      }
    }
    if (local_58 != -1) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_58);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_54 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_5c,false);
    if (0 < local_54) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_54);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar9 = (CGameManager *)G_CGameManager();
    local_50 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar9);
    if (local_50 == (CTradeSpace *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    CTradeSpace::set_traders(local_50,local_5c,param_1);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,0,8);
    uVar8 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,uVar8 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,local_94);
    uVar8 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar8 & 0xff);
    iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,iVar6);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
    CUser::Send(local_5c,local_b0);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_b0);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,(uint)local_97);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
    uVar8 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)local_5c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar8 & 0xff);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
    CUser::Send(param_1,local_b0);
    break;
  case '\x02':
    pGVar15 = (GameWorld *)G_GameWorld();
    local_4c = (CUser *)GameWorld::find_from_world(pGVar15,local_97);
    if (local_4c == (CUser *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_48 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_4c,false);
    if (0 < local_48) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_48);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    sVar5 = CUser::GetPvpIndex(local_4c);
    pCVar9 = (CGameManager *)G_CGameManager();
    local_44 = (PvP_Room *)CGameManager::GetPvp(pCVar9,(int)sVar5,param_1,0);
    if (local_44 == (PvP_Room *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x13);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    local_c0 = 0;
    pGVar15 = (GameWorld *)G_GameWorld();
    bVar4 = (bool)GameWorld::IsSameTeamChannelJoin(pGVar15);
    local_40 = PvP_Room::join_room(local_44,param_1,&local_c0,bVar4);
    uVar10 = PvP_Room::get_pvp_battle_mode(local_44);
    uVar11 = PvP_Room::get_index(local_44);
    uVar12 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar13 = CUser::get_acc_name(param_1);
    CSwitchLog::CSwitchLog
              (local_90,"virtual int DisPatcher_ResPeer::dispatch_sig(CUser*, PacketBuf&)",0x7a82,0,
               0);
    CSwitchLog::operator()
              (local_90,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar13,uVar12,uVar11,uVar10,local_40,0xb);
    if (0 < local_40) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,local_40);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar14 = (CUser *)G_CGameManager();
    CGameManager::CheckOutParty(pCVar14,SUB41(param_1,0));
    PvP_Room::make_seat_info(local_44,(char *)local_b0,local_c0);
    pGVar15 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar15,local_b0);
    pGVar15 = (GameWorld *)G_GameWorld();
    GameWorld::goto_pvp(pGVar15,param_1);
    break;
  case '\x03':
    pGVar15 = (GameWorld *)G_GameWorld();
    local_3c = (CUser *)GameWorld::find_from_world(pGVar15,local_97);
    if (local_3c == (CUser *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_38 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_3c,false);
    if (0 < local_38) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_38);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    CUser::GetWarRoomIndex(local_3c);
    iVar6 = G_CGameManager();
    local_34 = (WarRoom *)CGameManager::GetWarRoom(iVar6);
    if (local_34 == (WarRoom *)0x0) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x13);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    local_c4 = 0;
    local_30 = WarRoom::IsJoinable(local_34,param_1);
    if (0 < local_30) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,local_30);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    local_30 = WarRoom::Join(local_34,param_1,&local_c4);
    if (0 < local_30) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,0xb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,local_30);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
      CUser::Send(param_1,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar14 = (CUser *)G_CGameManager();
    CGameManager::CheckOutParty(pCVar14,SUB41(param_1,0));
    WarRoom::MakeSlotInfo(local_34,(char *)local_b0,local_c4);
    pGVar15 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar15,local_b0);
    pGVar15 = (GameWorld *)G_GameWorld();
    GameWorld::goto_warroom(pGVar15,param_1);
    iVar6 = WarRoom::GetWaiterCount(local_34);
    if ((2 < iVar6) && (iVar6 = WarRoom::GetState(local_34), iVar6 == 0)) {
      WarRoom::Start(local_34);
    }
    break;
  case '\x05':
  case '\a':
    pGVar15 = (GameWorld *)G_GameWorld();
    local_2c = (CUser *)GameWorld::find_from_world(pGVar15,local_97);
    if (local_2c == (CUser *)0x0) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,3,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_28 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_2c,false);
    if (0 < (int)local_28) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,local_28 & 0xff,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    if (iVar6 != 1) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0x17,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    expert_job::CExpertJobMgr::OnResponsePeer
              (GlobalData::s_ExpertJobMgr,param_1,local_2c,param_1,local_2c,local_94,(int)local_95,
               local_b0);
    break;
  case '\x06':
  case '\b':
    pGVar15 = (GameWorld *)G_GameWorld();
    local_24 = (CUser *)GameWorld::find_from_world(pGVar15,local_97);
    if (local_24 == (CUser *)0x0) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,3,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    pCVar16 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    local_20 = pvp_assault::CAssaultMgr::check_party_teleport_user
                         (pCVar16,'\0',param_1,local_24,false);
    if (0 < (int)local_20) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,local_20 & 0xff,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)local_24);
    if (iVar6 != 1) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,(int)local_95,0x17,local_b0);
      unaff_EBX = 0;
      goto LAB_081f2cf0;
    }
    expert_job::CExpertJobMgr::OnResponsePeer
              (GlobalData::s_ExpertJobMgr,param_1,local_24,local_24,param_1,local_94,(int)local_95,
               local_b0);
  }
  unaff_EBX = 0;
LAB_081f2cf0:
  PacketGuard::~PacketGuard(local_b0);
  return unaff_EBX;
}

```

