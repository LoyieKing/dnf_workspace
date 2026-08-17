# Dispatcher_FairPvPScore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822793c Dispatcher_FairPvPScore::dispatch_sig  [0x0822793c-0x8227dff] ===
 822793c:	55                   	push   %ebp
 822793d:	89 e5                	mov    %esp,%ebp
 822793f:	56                   	push   %esi
 8227940:	53                   	push   %ebx
 8227941:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8227947:	8b 45 0c             	mov    0xc(%ebp),%eax
 822794a:	89 04 24             	mov    %eax,(%esp)
 822794d:	e8 3a 2a eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8227952:	83 f8 02             	cmp    $0x2,%eax
 8227955:	7e 0f                	jle    8227966 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 8227957:	8b 45 0c             	mov    0xc(%ebp),%eax
 822795a:	89 04 24             	mov    %eax,(%esp)
 822795d:	e8 d0 8a ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8227962:	85 c0                	test   %eax,%eax
 8227964:	75 07                	jne    822796d <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x31>
 8227966:	b8 01 00 00 00       	mov    $0x1,%eax
 822796b:	eb 05                	jmp    8227972 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x36>
 822796d:	b8 00 00 00 00       	mov    $0x0,%eax
 8227972:	84 c0                	test   %al,%al
 8227974:	74 0a                	je     8227980 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x44>
 8227976:	bb 00 00 00 00       	mov    $0x0,%ebx
 822797b:	e9 73 04 00 00       	jmp    8227df3 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4b7>
 8227980:	66 c7 45 ea 00 00    	movw   $0x0,-0x16(%ebp)
 8227986:	8d 45 ea             	lea    -0x16(%ebp),%eax
 8227989:	89 44 24 04          	mov    %eax,0x4(%esp)
 822798d:	8b 45 10             	mov    0x10(%ebp),%eax
 8227990:	89 04 24             	mov    %eax,(%esp)
 8227993:	e8 18 57 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8227998:	83 f0 01             	xor    $0x1,%eax
 822799b:	84 c0                	test   %al,%al
 822799d:	74 2b                	je     82279ca <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x8e>
 822799f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82279a6:	00 
 82279a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82279ae:	00 
 82279af:	c7 44 24 04 40 c1 bc 	movl   $0x8bcc140,0x4(%esp)
 82279b6:	08 
 82279b7:	c7 04 24 39 e4 00 00 	movl   $0xe439,(%esp)
 82279be:	e8 14 8f 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82279c3:	89 c3                	mov    %eax,%ebx
 82279c5:	e9 29 04 00 00       	jmp    8227df3 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4b7>
 82279ca:	c6 45 e9 00          	movb   $0x0,-0x17(%ebp)
 82279ce:	8d 45 e9             	lea    -0x17(%ebp),%eax
 82279d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82279d5:	8b 45 10             	mov    0x10(%ebp),%eax
 82279d8:	89 04 24             	mov    %eax,(%esp)
 82279db:	e8 90 55 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82279e0:	83 f0 01             	xor    $0x1,%eax
 82279e3:	84 c0                	test   %al,%al
 82279e5:	74 2b                	je     8227a12 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0xd6>
 82279e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82279ee:	00 
 82279ef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82279f6:	00 
 82279f7:	c7 44 24 04 40 c1 bc 	movl   $0x8bcc140,0x4(%esp)
 82279fe:	08 
 82279ff:	c7 04 24 3c e4 00 00 	movl   $0xe43c,(%esp)
 8227a06:	e8 cc 8e 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8227a0b:	89 c3                	mov    %eax,%ebx
 8227a0d:	e9 e1 03 00 00       	jmp    8227df3 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4b7>
 8227a12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227a15:	89 04 24             	mov    %eax,(%esp)
 8227a18:	e8 5f 29 eb ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8227a1d:	0f b7 55 ea          	movzwl -0x16(%ebp),%edx
 8227a21:	66 39 d0             	cmp    %dx,%ax
 8227a24:	0f 94 c0             	sete   %al
 8227a27:	84 c0                	test   %al,%al
 8227a29:	0f 84 ce 00 00 00    	je     8227afd <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x1c1>
 8227a2f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8227a32:	89 04 24             	mov    %eax,(%esp)
 8227a35:	e8 12 63 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8227a3a:	c7 44 24 08 77 01 00 	movl   $0x177,0x8(%esp)
 8227a41:	00 
 8227a42:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227a49:	00 
 8227a4a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8227a4d:	89 04 24             	mov    %eax,(%esp)
 8227a50:	e8 a7 3e ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8227a55:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227a5c:	00 
 8227a5d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8227a60:	89 04 24             	mov    %eax,(%esp)
 8227a63:	e8 b8 3e ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8227a68:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 8227a6c:	0f b7 c0             	movzwl %ax,%eax
 8227a6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227a73:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8227a76:	89 04 24             	mov    %eax,(%esp)
 8227a79:	e8 26 24 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8227a7e:	0f b6 45 e9          	movzbl -0x17(%ebp),%eax
 8227a82:	0f b6 d8             	movzbl %al,%ebx
 8227a85:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8227a8c:	00 
 8227a8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227a90:	89 04 24             	mov    %eax,(%esp)
 8227a93:	e8 ec 5a eb ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8227a98:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8227a9c:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8227a9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8227aa3:	89 04 24             	mov    %eax,(%esp)
 8227aa6:	e8 17 e2 27 00       	call   84a5cc2 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi>
 8227aab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227ab2:	00 
 8227ab3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8227ab6:	89 04 24             	mov    %eax,(%esp)
 8227ab9:	e8 9a 3e ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8227abe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8227ac1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227ac5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227ac8:	89 04 24             	mov    %eax,(%esp)
 8227acb:	e8 ea 0a 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8227ad0:	eb 1b                	jmp    8227aed <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x1b1>
 8227ad2:	89 d3                	mov    %edx,%ebx
 8227ad4:	89 c6                	mov    %eax,%esi
 8227ad6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8227ad9:	89 04 24             	mov    %eax,(%esp)
 8227adc:	e8 9f 63 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8227ae1:	89 f0                	mov    %esi,%eax
 8227ae3:	89 da                	mov    %ebx,%edx
 8227ae5:	89 04 24             	mov    %eax,(%esp)
 8227ae8:	e8 63 bc 8b 00       	call   8ae3750 <_Unwind_Resume>
 8227aed:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8227af0:	89 04 24             	mov    %eax,(%esp)
 8227af3:	e8 88 63 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8227af8:	e9 f1 02 00 00       	jmp    8227dee <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4b2>
 8227afd:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 8227b01:	0f b7 f0             	movzwl %ax,%esi
 8227b04:	e8 9e 28 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8227b09:	89 74 24 04          	mov    %esi,0x4(%esp)
 8227b0d:	89 04 24             	mov    %eax,(%esp)
 8227b10:	e8 87 d0 49 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 8227b15:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8227b18:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8227b1c:	75 25                	jne    8227b43 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x207>
 8227b1e:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8227b25:	00 
 8227b26:	c7 44 24 04 77 01 00 	movl   $0x177,0x4(%esp)
 8227b2d:	00 
 8227b2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227b31:	89 04 24             	mov    %eax,(%esp)
 8227b34:	e8 09 44 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8227b39:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227b3e:	e9 b0 02 00 00       	jmp    8227df3 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4b7>
 8227b43:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227b46:	89 04 24             	mov    %eax,(%esp)
 8227b49:	e8 fe 61 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8227b4e:	0f b6 45 e9          	movzbl -0x17(%ebp),%eax
 8227b52:	3c 01                	cmp    $0x1,%al
 8227b54:	0f 85 c2 01 00 00    	jne    8227d1c <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x3e0>
 8227b5a:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 8227b61:	c7 45 f4 f0 0c 00 00 	movl   $0xcf0,-0xc(%ebp)
 8227b68:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8227b6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227b6e:	89 04 24             	mov    %eax,(%esp)
 8227b71:	e8 08 27 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8227b76:	89 74 24 04          	mov    %esi,0x4(%esp)
 8227b7a:	89 04 24             	mov    %eax,(%esp)
 8227b7d:	e8 f0 d5 2d 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8227b82:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8227b85:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8227b89:	0f 94 c0             	sete   %al
 8227b8c:	84 c0                	test   %al,%al
 8227b8e:	74 2a                	je     8227bba <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x27e>
 8227b90:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8227b97:	00 
 8227b98:	c7 44 24 04 77 01 00 	movl   $0x177,0x4(%esp)
 8227b9f:	00 
 8227ba0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227ba3:	89 04 24             	mov    %eax,(%esp)
 8227ba6:	e8 97 43 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8227bab:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227bb0:	be 00 00 00 00       	mov    $0x0,%esi
 8227bb5:	e9 25 02 00 00       	jmp    8227ddf <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 8227bba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227bbd:	89 04 24             	mov    %eax,(%esp)
 8227bc0:	e8 b9 26 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8227bc5:	8d 55 93             	lea    -0x6d(%ebp),%edx
 8227bc8:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8227bcb:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8227bcf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8227bd6:	00 
 8227bd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227bdb:	89 14 24             	mov    %edx,(%esp)
 8227bde:	e8 35 3d 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8227be3:	83 ec 04             	sub    $0x4,%esp
 8227be6:	8b 45 9a             	mov    -0x66(%ebp),%eax
 8227be9:	85 c0                	test   %eax,%eax
 8227beb:	7f 2a                	jg     8227c17 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 8227bed:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8227bf4:	00 
 8227bf5:	c7 44 24 04 77 01 00 	movl   $0x177,0x4(%esp)
 8227bfc:	00 
 8227bfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227c00:	89 04 24             	mov    %eax,(%esp)
 8227c03:	e8 3a 43 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8227c08:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227c0d:	be 00 00 00 00       	mov    $0x0,%esi
 8227c12:	e9 c8 01 00 00       	jmp    8227ddf <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 8227c17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227c1a:	89 04 24             	mov    %eax,(%esp)
 8227c1d:	e8 6c 26 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8227c22:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8227c29:	00 
 8227c2a:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8227c31:	00 
 8227c32:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8227c39:	00 
 8227c3a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8227c3d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8227c41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227c48:	00 
 8227c49:	89 04 24             	mov    %eax,(%esp)
 8227c4c:	e8 bb c3 2d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8227c51:	83 f0 01             	xor    $0x1,%eax
 8227c54:	84 c0                	test   %al,%al
 8227c56:	74 2a                	je     8227c82 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x346>
 8227c58:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8227c5f:	00 
 8227c60:	c7 44 24 04 77 01 00 	movl   $0x177,0x4(%esp)
 8227c67:	00 
 8227c68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227c6b:	89 04 24             	mov    %eax,(%esp)
 8227c6e:	e8 cf 42 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8227c73:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227c78:	be 00 00 00 00       	mov    $0x0,%esi
 8227c7d:	e9 5d 01 00 00       	jmp    8227ddf <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 8227c82:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227c85:	89 04 24             	mov    %eax,(%esp)
 8227c88:	e8 59 3c ea ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8227c8d:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8227c94:	00 
 8227c95:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8227c9c:	00 
 8227c9d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227ca0:	89 04 24             	mov    %eax,(%esp)
 8227ca3:	e8 54 3c ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8227ca8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8227caf:	00 
 8227cb0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227cb3:	89 04 24             	mov    %eax,(%esp)
 8227cb6:	e8 65 3c ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8227cbb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227cc2:	00 
 8227cc3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227cc6:	89 04 24             	mov    %eax,(%esp)
 8227cc9:	e8 d6 21 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8227cce:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227cd1:	89 04 24             	mov    %eax,(%esp)
 8227cd4:	e8 a5 25 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8227cd9:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8227cdc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8227ce0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8227ce3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8227ce7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227cee:	00 
 8227cef:	89 04 24             	mov    %eax,(%esp)
 8227cf2:	e8 c5 49 2d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8227cf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227cfe:	00 
 8227cff:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227d02:	89 04 24             	mov    %eax,(%esp)
 8227d05:	e8 4e 3c ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8227d0a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227d0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227d11:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227d14:	89 04 24             	mov    %eax,(%esp)
 8227d17:	e8 9e 08 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8227d1c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227d1f:	89 04 24             	mov    %eax,(%esp)
 8227d22:	e8 bf 3b ea ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8227d27:	c7 44 24 08 77 01 00 	movl   $0x177,0x8(%esp)
 8227d2e:	00 
 8227d2f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227d36:	00 
 8227d37:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227d3a:	89 04 24             	mov    %eax,(%esp)
 8227d3d:	e8 ba 3b ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8227d42:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227d49:	00 
 8227d4a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227d4d:	89 04 24             	mov    %eax,(%esp)
 8227d50:	e8 cb 3b ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8227d55:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 8227d59:	0f b7 c0             	movzwl %ax,%eax
 8227d5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227d60:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227d63:	89 04 24             	mov    %eax,(%esp)
 8227d66:	e8 39 21 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8227d6b:	0f b6 45 e9          	movzbl -0x17(%ebp),%eax
 8227d6f:	0f b6 f0             	movzbl %al,%esi
 8227d72:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8227d79:	00 
 8227d7a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8227d7d:	89 04 24             	mov    %eax,(%esp)
 8227d80:	e8 ff 57 eb ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8227d85:	89 74 24 08          	mov    %esi,0x8(%esp)
 8227d89:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8227d8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8227d90:	89 04 24             	mov    %eax,(%esp)
 8227d93:	e8 2a df 27 00       	call   84a5cc2 <_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi>
 8227d98:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8227d9f:	00 
 8227da0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227da3:	89 04 24             	mov    %eax,(%esp)
 8227da6:	e8 ad 3b ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8227dab:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227dae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227db2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227db5:	89 04 24             	mov    %eax,(%esp)
 8227db8:	e8 fd 07 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8227dbd:	be 01 00 00 00       	mov    $0x1,%esi
 8227dc2:	eb 1b                	jmp    8227ddf <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4a3>
 8227dc4:	89 d3                	mov    %edx,%ebx
 8227dc6:	89 c6                	mov    %eax,%esi
 8227dc8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227dcb:	89 04 24             	mov    %eax,(%esp)
 8227dce:	e8 ad 60 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8227dd3:	89 f0                	mov    %esi,%eax
 8227dd5:	89 da                	mov    %ebx,%edx
 8227dd7:	89 04 24             	mov    %eax,(%esp)
 8227dda:	e8 71 b9 8b 00       	call   8ae3750 <_Unwind_Resume>
 8227ddf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8227de2:	89 04 24             	mov    %eax,(%esp)
 8227de5:	e8 96 60 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8227dea:	85 f6                	test   %esi,%esi
 8227dec:	74 05                	je     8227df3 <_ZN23Dispatcher_FairPvPScore12dispatch_sigEP5CUserR9PacketBuf+0x4b7>
 8227dee:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227df3:	89 d8                	mov    %ebx,%eax
 8227df5:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8227df8:	83 c4 00             	add    $0x0,%esp
 8227dfb:	5b                   	pop    %ebx
 8227dfc:	5e                   	pop    %esi
 8227dfd:	5d                   	pop    %ebp
 8227dfe:	c3                   	ret
 8227dff:	90                   	nop

```

```c
// Dispatcher_FairPvPScore::dispatch_sig @ 0x822793c

/* Dispatcher_FairPvPScore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_FairPvPScore::dispatch_sig
          (Dispatcher_FairPvPScore *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  CFairPvPScore *pCVar7;
  GameWorld *this_00;
  CInventory *pCVar8;
  int iVar9;
  undefined4 unaff_EBX;
  uint uVar10;
  undefined1 local_71 [7];
  int local_6a;
  PacketGuard local_34 [12];
  PacketGuard local_28 [13];
  byte local_1b;
  ushort local_1a;
  CUser *local_18;
  int local_14;
  undefined4 local_10;
  
  iVar5 = CUser::get_state(param_1);
  if ((iVar5 < 3) ||
     (iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar5 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  local_1a = 0;
  cVar3 = PacketBuf::get_short(param_2,&local_1a);
  if (cVar3 != '\x01') {
    uVar6 = LineFunc(0xe439,"virtual int Dispatcher_FairPvPScore::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar6;
  }
  local_1b = 0;
  cVar3 = PacketBuf::get_byte(param_2,&local_1b);
  if (cVar3 != '\x01') {
    uVar6 = LineFunc(0xe43c,"virtual int Dispatcher_FairPvPScore::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar6;
  }
  uVar4 = CUser::get_unique_id(param_1);
  uVar2 = local_1a;
  if (uVar4 == local_1a) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08227a50 to 08227acf has its CatchHandler @ 08227ad2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x177);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(uint)local_1a);
    uVar10 = (uint)local_1b;
    pCVar7 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    fair_pvp::CFairPvPScore::MakePacketSocre(pCVar7,local_28,uVar10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
    return 0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  local_18 = (CUser *)GameWorld::find_from_world(this_00,uVar2);
  if (local_18 == (CUser *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x177,3);
    return 0;
  }
  PacketGuard::PacketGuard(local_34);
  if (local_1b == 1) {
    local_14 = 0xffffffff;
    local_10 = 0xcf0;
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    /* try { // try from 08227b7d to 08227dbc has its CatchHandler @ 08227dc4 */
    local_14 = CInventory::check_item_exist(pCVar8,0xcf0);
    if (local_14 == -1) {
      CUser::SendCmdErrorPacket(param_1,0x177,0x11);
      unaff_EBX = 0;
      bVar1 = false;
      goto LAB_08227ddf;
    }
    iVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar5 = local_14;
    CInventory::GetInvenSlot((int)local_71,iVar9);
    if (local_6a < 1) {
      CUser::SendCmdErrorPacket(param_1,0x177,0x11,iVar5);
      unaff_EBX = 0;
      bVar1 = false;
      goto LAB_08227ddf;
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar8,1,local_14,1,3,1);
    if (cVar3 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x177,0x11);
      unaff_EBX = 0;
      bVar1 = false;
      goto LAB_08227ddf;
    }
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::MakeItemPacket(pCVar8,1,local_14,local_34);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    CUser::Send(param_1,local_34);
  }
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x177);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,(uint)local_1a);
  uVar10 = (uint)local_1b;
  pCVar7 = (CFairPvPScore *)CUser::GetCharacExpandData(local_18,7);
  fair_pvp::CFairPvPScore::MakePacketSocre(pCVar7,local_34,uVar10);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  CUser::Send(param_1,local_34);
  bVar1 = true;
LAB_08227ddf:
  PacketGuard::~PacketGuard(local_34);
  if (bVar1) {
    return 0;
  }
  return unaff_EBX;
}

```

