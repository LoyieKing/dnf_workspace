# DisPatcher_SellItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f2d0c DisPatcher_SellItem::dispatch_sig  [0x081f2d0c-0x81f353f] ===
 81f2d0c:	55                   	push   %ebp
 81f2d0d:	89 e5                	mov    %esp,%ebp
 81f2d0f:	57                   	push   %edi
 81f2d10:	56                   	push   %esi
 81f2d11:	53                   	push   %ebx
 81f2d12:	83 ec 7c             	sub    $0x7c,%esp
 81f2d15:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2d18:	89 04 24             	mov    %eax,(%esp)
 81f2d1b:	e8 6c 76 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f2d20:	83 f8 03             	cmp    $0x3,%eax
 81f2d23:	74 47                	je     81f2d6c <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x60>
 81f2d25:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2d28:	89 04 24             	mov    %eax,(%esp)
 81f2d2b:	e8 5c 76 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f2d30:	83 f8 08             	cmp    $0x8,%eax
 81f2d33:	74 37                	je     81f2d6c <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x60>
 81f2d35:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2d38:	89 04 24             	mov    %eax,(%esp)
 81f2d3b:	e8 4c 76 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f2d40:	83 f8 05             	cmp    $0x5,%eax
 81f2d43:	74 27                	je     81f2d6c <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x60>
 81f2d45:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2d48:	89 04 24             	mov    %eax,(%esp)
 81f2d4b:	e8 3c 76 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f2d50:	83 f8 0a             	cmp    $0xa,%eax
 81f2d53:	74 17                	je     81f2d6c <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x60>
 81f2d55:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2d58:	89 04 24             	mov    %eax,(%esp)
 81f2d5b:	e8 2c 76 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f2d60:	83 f8 0c             	cmp    $0xc,%eax
 81f2d63:	74 07                	je     81f2d6c <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x60>
 81f2d65:	b8 01 00 00 00       	mov    $0x1,%eax
 81f2d6a:	eb 05                	jmp    81f2d71 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x65>
 81f2d6c:	b8 00 00 00 00       	mov    $0x0,%eax
 81f2d71:	84 c0                	test   %al,%al
 81f2d73:	74 0a                	je     81f2d7f <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x73>
 81f2d75:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2d7a:	e9 b7 07 00 00       	jmp    81f3536 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x82a>
 81f2d7f:	8d 45 ae             	lea    -0x52(%ebp),%eax
 81f2d82:	83 c0 0d             	add    $0xd,%eax
 81f2d85:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2d89:	8b 45 10             	mov    0x10(%ebp),%eax
 81f2d8c:	89 04 24             	mov    %eax,(%esp)
 81f2d8f:	e8 8e a1 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f2d94:	83 f0 01             	xor    $0x1,%eax
 81f2d97:	84 c0                	test   %al,%al
 81f2d99:	74 2b                	je     81f2dc6 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0xba>
 81f2d9b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f2da2:	00 
 81f2da3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f2daa:	00 
 81f2dab:	c7 44 24 04 00 02 bd 	movl   $0x8bd0200,0x4(%esp)
 81f2db2:	08 
 81f2db3:	c7 04 24 15 7e 00 00 	movl   $0x7e15,(%esp)
 81f2dba:	e8 18 db 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f2dbf:	89 c3                	mov    %eax,%ebx
 81f2dc1:	e9 70 07 00 00       	jmp    81f3536 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x82a>
 81f2dc6:	8d 45 ae             	lea    -0x52(%ebp),%eax
 81f2dc9:	83 c0 0e             	add    $0xe,%eax
 81f2dcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2dd0:	8b 45 10             	mov    0x10(%ebp),%eax
 81f2dd3:	89 04 24             	mov    %eax,(%esp)
 81f2dd6:	e8 e5 a1 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f2ddb:	83 f0 01             	xor    $0x1,%eax
 81f2dde:	84 c0                	test   %al,%al
 81f2de0:	74 2b                	je     81f2e0d <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x101>
 81f2de2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f2de9:	00 
 81f2dea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f2df1:	00 
 81f2df2:	c7 44 24 04 00 02 bd 	movl   $0x8bd0200,0x4(%esp)
 81f2df9:	08 
 81f2dfa:	c7 04 24 16 7e 00 00 	movl   $0x7e16,(%esp)
 81f2e01:	e8 d1 da 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f2e06:	89 c3                	mov    %eax,%ebx
 81f2e08:	e9 29 07 00 00       	jmp    81f3536 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x82a>
 81f2e0d:	8d 45 ae             	lea    -0x52(%ebp),%eax
 81f2e10:	83 c0 10             	add    $0x10,%eax
 81f2e13:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2e17:	8b 45 10             	mov    0x10(%ebp),%eax
 81f2e1a:	89 04 24             	mov    %eax,(%esp)
 81f2e1d:	e8 8e a2 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81f2e22:	83 f0 01             	xor    $0x1,%eax
 81f2e25:	84 c0                	test   %al,%al
 81f2e27:	74 2b                	je     81f2e54 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x148>
 81f2e29:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f2e30:	00 
 81f2e31:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f2e38:	00 
 81f2e39:	c7 44 24 04 00 02 bd 	movl   $0x8bd0200,0x4(%esp)
 81f2e40:	08 
 81f2e41:	c7 04 24 17 7e 00 00 	movl   $0x7e17,(%esp)
 81f2e48:	e8 8a da 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f2e4d:	89 c3                	mov    %eax,%ebx
 81f2e4f:	e9 e2 06 00 00       	jmp    81f3536 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x82a>
 81f2e54:	e8 8d f7 f6 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81f2e59:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 81f2e60:	00 
 81f2e61:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81f2e68:	00 
 81f2e69:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2e6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2e70:	89 04 24             	mov    %eax,(%esp)
 81f2e73:	e8 40 b8 f7 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81f2e78:	84 c0                	test   %al,%al
 81f2e7a:	74 25                	je     81f2ea1 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x195>
 81f2e7c:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 81f2e83:	00 
 81f2e84:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 81f2e8b:	00 
 81f2e8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2e8f:	89 04 24             	mov    %eax,(%esp)
 81f2e92:	e8 ab 90 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f2e97:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2e9c:	e9 95 06 00 00       	jmp    81f3536 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x82a>
 81f2ea1:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 81f2ea5:	0f bf c8             	movswl %ax,%ecx
 81f2ea8:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81f2eac:	0f be d0             	movsbl %al,%edx
 81f2eaf:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81f2eb4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81f2eb8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2ebc:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2ebf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2ec3:	89 04 24             	mov    %eax,(%esp)
 81f2ec6:	e8 e3 57 09 00       	call   82886ae <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs>
 81f2ecb:	89 c3                	mov    %eax,%ebx
 81f2ecd:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 81f2ed1:	0f bf c8             	movswl %ax,%ecx
 81f2ed4:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81f2ed8:	0f be d0             	movsbl %al,%edx
 81f2edb:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81f2ee0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81f2ee4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2ee8:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f2eeb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f2eef:	89 04 24             	mov    %eax,(%esp)
 81f2ef2:	e8 df 55 09 00       	call   82884d6 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs>
 81f2ef7:	8b 15 cc f7 41 09    	mov    0x941f7cc,%edx
 81f2efd:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81f2f01:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f2f05:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 81f2f0c:	00 
 81f2f0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2f10:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2f14:	89 14 24             	mov    %edx,(%esp)
 81f2f17:	e8 b4 58 09 00       	call   82887d0 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item>
 81f2f1c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81f2f1f:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 81f2f23:	74 27                	je     81f2f4c <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x240>
 81f2f25:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f2f28:	0f b6 c0             	movzbl %al,%eax
 81f2f2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f2f2f:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 81f2f36:	00 
 81f2f37:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2f3a:	89 04 24             	mov    %eax,(%esp)
 81f2f3d:	e8 00 90 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f2f42:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2f47:	e9 ea 05 00 00       	jmp    81f3536 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x82a>
 81f2f4c:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 81f2f50:	0f bf d0             	movswl %ax,%edx
 81f2f53:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81f2f57:	0f be c0             	movsbl %al,%eax
 81f2f5a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2f5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2f62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2f65:	89 04 24             	mov    %eax,(%esp)
 81f2f68:	e8 83 3a 45 00       	call   86469f0 <_ZNK5CUser22CheckItemLockSlotSpaceEii>
 81f2f6d:	84 c0                	test   %al,%al
 81f2f6f:	74 25                	je     81f2f96 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x28a>
 81f2f71:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81f2f78:	00 
 81f2f79:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 81f2f80:	00 
 81f2f81:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2f84:	89 04 24             	mov    %eax,(%esp)
 81f2f87:	e8 b6 8f 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f2f8c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f2f91:	e9 a0 05 00 00       	jmp    81f3536 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x82a>
 81f2f96:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2f99:	89 04 24             	mov    %eax,(%esp)
 81f2f9c:	e8 eb 73 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f2fa1:	83 f8 05             	cmp    $0x5,%eax
 81f2fa4:	0f 94 c0             	sete   %al
 81f2fa7:	84 c0                	test   %al,%al
 81f2fa9:	74 65                	je     81f3010 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x304>
 81f2fab:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 81f2faf:	0f bf d0             	movswl %ax,%edx
 81f2fb2:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81f2fb6:	0f be c0             	movsbl %al,%eax
 81f2fb9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f2fbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f2fc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2fc4:	89 04 24             	mov    %eax,(%esp)
 81f2fc7:	e8 3a 81 49 00       	call   868b106 <_ZN5CUser25getInDungeonItemSellCountEii>
 81f2fcc:	83 f8 07             	cmp    $0x7,%eax
 81f2fcf:	0f 94 c0             	sete   %al
 81f2fd2:	84 c0                	test   %al,%al
 81f2fd4:	74 3a                	je     81f3010 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x304>
 81f2fd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f2fd9:	89 04 24             	mov    %eax,(%esp)
 81f2fdc:	e8 79 69 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f2fe1:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f2fe8:	00 
 81f2fe9:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f2ff0:	00 
 81f2ff1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f2ff8:	00 
 81f2ff9:	c7 44 24 08 39 01 00 	movl   $0x139,0x8(%esp)
 81f3000:	00 
 81f3001:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f3004:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3008:	89 04 24             	mov    %eax,(%esp)
 81f300b:	e8 6e 5c f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f3010:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3013:	89 04 24             	mov    %eax,(%esp)
 81f3016:	e8 31 ad 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f301b:	e8 c8 1b 3d 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81f3020:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f3023:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3027:	89 04 24             	mov    %eax,(%esp)
 81f302a:	e8 2f 7d 3d 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81f302f:	84 c0                	test   %al,%al
 81f3031:	74 7b                	je     81f30ae <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x3a2>
 81f3033:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3036:	89 04 24             	mov    %eax,(%esp)
 81f3039:	e8 a8 88 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81f303e:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 81f3045:	00 
 81f3046:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f304d:	00 
 81f304e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3051:	89 04 24             	mov    %eax,(%esp)
 81f3054:	e8 a3 88 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f3059:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f3060:	00 
 81f3061:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3064:	89 04 24             	mov    %eax,(%esp)
 81f3067:	e8 b4 88 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f306c:	c7 44 24 04 3c 00 00 	movl   $0x3c,0x4(%esp)
 81f3073:	00 
 81f3074:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3077:	89 04 24             	mov    %eax,(%esp)
 81f307a:	e8 a1 88 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f307f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f3086:	00 
 81f3087:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f308a:	89 04 24             	mov    %eax,(%esp)
 81f308d:	e8 c6 88 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f3092:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3095:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3099:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f309c:	89 04 24             	mov    %eax,(%esp)
 81f309f:	e8 16 55 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f30a4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f30a9:	e9 7d 04 00 00       	jmp    81f352b <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x81f>
 81f30ae:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 81f30b5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81f30b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f30bc:	8b 45 10             	mov    0x10(%ebp),%eax
 81f30bf:	89 04 24             	mov    %eax,(%esp)
 81f30c2:	e8 b7 a1 39 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81f30c7:	83 f0 01             	xor    $0x1,%eax
 81f30ca:	84 c0                	test   %al,%al
 81f30cc:	74 2b                	je     81f30f9 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x3ed>
 81f30ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f30d5:	00 
 81f30d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f30dd:	00 
 81f30de:	c7 44 24 04 00 02 bd 	movl   $0x8bd0200,0x4(%esp)
 81f30e5:	08 
 81f30e6:	c7 04 24 71 7e 00 00 	movl   $0x7e71,(%esp)
 81f30ed:	e8 e5 d7 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f30f2:	89 c3                	mov    %eax,%ebx
 81f30f4:	e9 32 04 00 00       	jmp    81f352b <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x81f>
 81f30f9:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81f3100:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81f3104:	0f be d0             	movsbl %al,%edx
 81f3107:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 81f310b:	98                   	cwtl
 81f310c:	01 c2                	add    %eax,%edx
 81f310e:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 81f3112:	0f b7 c0             	movzwl %ax,%eax
 81f3115:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81f3118:	89 c2                	mov    %eax,%edx
 81f311a:	03 55 c4             	add    -0x3c(%ebp),%edx
 81f311d:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81f3120:	39 c2                	cmp    %eax,%edx
 81f3122:	74 3a                	je     81f315e <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x452>
 81f3124:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3127:	89 04 24             	mov    %eax,(%esp)
 81f312a:	e8 2b 68 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f312f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f3136:	00 
 81f3137:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f313e:	00 
 81f313f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f3146:	00 
 81f3147:	c7 44 24 08 35 03 00 	movl   $0x335,0x8(%esp)
 81f314e:	00 
 81f314f:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f3152:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3156:	89 04 24             	mov    %eax,(%esp)
 81f3159:	e8 20 5b f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f315e:	c7 45 c8 06 00 00 00 	movl   $0x6,-0x38(%ebp)
 81f3165:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81f3169:	0f be c0             	movsbl %al,%eax
 81f316c:	83 f8 01             	cmp    $0x1,%eax
 81f316f:	74 07                	je     81f3178 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x46c>
 81f3171:	83 f8 03             	cmp    $0x3,%eax
 81f3174:	74 27                	je     81f319d <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x491>
 81f3176:	eb 54                	jmp    81f31cc <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x4c0>
 81f3178:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 81f317f:	00 
 81f3180:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 81f3187:	00 
 81f3188:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f318b:	89 04 24             	mov    %eax,(%esp)
 81f318e:	e8 af 8d 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f3193:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f3198:	e9 8e 03 00 00       	jmp    81f352b <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x81f>
 81f319d:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 81f31a1:	66 83 f8 09          	cmp    $0x9,%ax
 81f31a5:	7f 25                	jg     81f31cc <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x4c0>
 81f31a7:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 81f31ae:	00 
 81f31af:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 81f31b6:	00 
 81f31b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f31ba:	89 04 24             	mov    %eax,(%esp)
 81f31bd:	e8 80 8d 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f31c2:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f31c7:	e9 5f 03 00 00       	jmp    81f352b <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x81f>
 81f31cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f31cf:	89 04 24             	mov    %eax,(%esp)
 81f31d2:	e8 b5 71 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f31d7:	83 f8 05             	cmp    $0x5,%eax
 81f31da:	0f 94 c0             	sete   %al
 81f31dd:	84 c0                	test   %al,%al
 81f31df:	0f 84 b8 00 00 00    	je     81f329d <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x591>
 81f31e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f31e8:	89 04 24             	mov    %eax,(%esp)
 81f31eb:	e8 5c 1f 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81f31f0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81f31f3:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81f31f7:	0f 84 a0 00 00 00    	je     81f329d <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x591>
 81f31fd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f3200:	05 24 0b 00 00       	add    $0xb24,%eax
 81f3205:	89 04 24             	mov    %eax,(%esp)
 81f3208:	e8 ef 9d 03 00       	call   822cffc <_ZN13CBattle_Field11get_cur_mapEv>
 81f320d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81f3210:	e8 86 8f ed ff       	call   80cc19b <_Z14G_CDataManagerv>
 81f3215:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81f3218:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f321c:	89 04 24             	mov    %eax,(%esp)
 81f321f:	e8 f0 c7 16 00       	call   835fa14 <_ZNK12CDataManager8find_mapEi>
 81f3224:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81f3227:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81f322b:	74 2d                	je     81f325a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x54e>
 81f322d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81f3230:	89 04 24             	mov    %eax,(%esp)
 81f3233:	e8 5a 82 03 00       	call   822b492 <_ZNK4CMap19getAssignedNPCCountEv>
 81f3238:	85 c0                	test   %eax,%eax
 81f323a:	75 1e                	jne    81f325a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x54e>
 81f323c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f323f:	05 24 0b 00 00       	add    $0xb24,%eax
 81f3244:	89 04 24             	mov    %eax,(%esp)
 81f3247:	e8 96 9c 03 00       	call   822cee2 <_ZN13CBattle_Field19IsAssignNPCByPotionEv>
 81f324c:	83 f0 01             	xor    $0x1,%eax
 81f324f:	84 c0                	test   %al,%al
 81f3251:	74 07                	je     81f325a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x54e>
 81f3253:	b8 01 00 00 00       	mov    $0x1,%eax
 81f3258:	eb 05                	jmp    81f325f <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x553>
 81f325a:	b8 00 00 00 00       	mov    $0x0,%eax
 81f325f:	84 c0                	test   %al,%al
 81f3261:	74 3a                	je     81f329d <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x591>
 81f3263:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3266:	89 04 24             	mov    %eax,(%esp)
 81f3269:	e8 ec 66 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f326e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f3275:	00 
 81f3276:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f327d:	00 
 81f327e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f3285:	00 
 81f3286:	c7 44 24 08 23 03 00 	movl   $0x323,0x8(%esp)
 81f328d:	00 
 81f328e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f3291:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3295:	89 04 24             	mov    %eax,(%esp)
 81f3298:	e8 e1 59 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f329d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f32a0:	89 04 24             	mov    %eax,(%esp)
 81f32a3:	e8 e4 70 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f32a8:	83 f8 03             	cmp    $0x3,%eax
 81f32ab:	0f 94 c0             	sete   %al
 81f32ae:	84 c0                	test   %al,%al
 81f32b0:	0f 84 d4 00 00 00    	je     81f338a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x67e>
 81f32b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f32bd:	00 
 81f32be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f32c1:	89 04 24             	mov    %eax,(%esp)
 81f32c4:	e8 f5 e0 48 00       	call   86813be <_ZN5CUser8get_areaEb>
 81f32c9:	89 c3                	mov    %eax,%ebx
 81f32cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f32ce:	89 04 24             	mov    %eax,(%esp)
 81f32d1:	e8 8e 22 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81f32d6:	0f be f0             	movsbl %al,%esi
 81f32d9:	e8 c9 70 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f32de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f32e2:	89 74 24 04          	mov    %esi,0x4(%esp)
 81f32e6:	89 04 24             	mov    %eax,(%esp)
 81f32e9:	e8 00 17 4d 00       	call   86c49ee <_ZN9GameWorld16check_valid_areaEii>
 81f32ee:	84 c0                	test   %al,%al
 81f32f0:	0f 84 94 00 00 00    	je     81f338a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x67e>
 81f32f6:	e8 ac 70 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f32fb:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f32fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3302:	89 04 24             	mov    %eax,(%esp)
 81f3305:	e8 2e 9d 4d 00       	call   86cd038 <_ZN9GameWorld14getUserVillageEP5CUser>
 81f330a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81f330d:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81f3311:	74 77                	je     81f338a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x67e>
 81f3313:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f331a:	00 
 81f331b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f331e:	89 04 24             	mov    %eax,(%esp)
 81f3321:	e8 98 e0 48 00       	call   86813be <_ZN5CUser8get_areaEb>
 81f3326:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f332a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81f332d:	89 04 24             	mov    %eax,(%esp)
 81f3330:	e8 6d 08 4d 00       	call   86c3ba2 <_ZN7Village7getAreaEi>
 81f3335:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81f3338:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81f333c:	74 4c                	je     81f338a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x67e>
 81f333e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f3341:	89 04 24             	mov    %eax,(%esp)
 81f3344:	e8 61 10 04 00       	call   82343aa <_ZN4Area18IsExistItemShopNPCEv>
 81f3349:	83 f0 01             	xor    $0x1,%eax
 81f334c:	84 c0                	test   %al,%al
 81f334e:	74 3a                	je     81f338a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x67e>
 81f3350:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3353:	89 04 24             	mov    %eax,(%esp)
 81f3356:	e8 ff 65 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f335b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f3362:	00 
 81f3363:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f336a:	00 
 81f336b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f3372:	00 
 81f3373:	c7 44 24 08 24 03 00 	movl   $0x324,0x8(%esp)
 81f337a:	00 
 81f337b:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f337e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3382:	89 04 24             	mov    %eax,(%esp)
 81f3385:	e8 f4 58 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f338a:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 81f338e:	0f bf f8             	movswl %ax,%edi
 81f3391:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 81f3395:	0f bf f0             	movswl %ax,%esi
 81f3398:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81f339c:	0f be d8             	movsbl %al,%ebx
 81f339f:	e8 39 e7 f5 ff       	call   8151add <_Z7G_Storev>
 81f33a4:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81f33a8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81f33ac:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f33b0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f33b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f33b7:	89 04 24             	mov    %eax,(%esp)
 81f33ba:	e8 39 60 42 00       	call   86193f8 <_ZN5Store14user_sell_itemEP5CUsercss>
 81f33bf:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81f33c2:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 81f33c6:	0f 84 8e 00 00 00    	je     81f345a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x74e>
 81f33cc:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 81f33d3:	00 
 81f33d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f33db:	00 
 81f33dc:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f33df:	89 04 24             	mov    %eax,(%esp)
 81f33e2:	e8 15 85 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f33e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f33ee:	00 
 81f33ef:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f33f2:	89 04 24             	mov    %eax,(%esp)
 81f33f5:	e8 26 85 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f33fa:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81f33fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3401:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3404:	89 04 24             	mov    %eax,(%esp)
 81f3407:	e8 14 85 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f340c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f3413:	00 
 81f3414:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3417:	89 04 24             	mov    %eax,(%esp)
 81f341a:	e8 39 85 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f341f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3422:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3426:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3429:	89 04 24             	mov    %eax,(%esp)
 81f342c:	e8 89 51 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f3431:	83 7d cc 16          	cmpl   $0x16,-0x34(%ebp)
 81f3435:	75 23                	jne    81f345a <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x74e>
 81f3437:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f343e:	00 
 81f343f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f3446:	00 
 81f3447:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81f344e:	00 
 81f344f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3452:	89 04 24             	mov    %eax,(%esp)
 81f3455:	e8 ea 93 48 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 81f345a:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81f3461:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81f3468:	e8 3f 24 f5 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 81f346d:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 81f3474:	00 
 81f3475:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f3479:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f347c:	89 04 24             	mov    %eax,(%esp)
 81f347f:	e8 d2 cd 03 00       	call   8230256 <_ZN5CUser19SellItemTimeCheckerEjj>
 81f3484:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81f3487:	83 7d d0 02          	cmpl   $0x2,-0x30(%ebp)
 81f348b:	75 3c                	jne    81f34c9 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x7bd>
 81f348d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f3490:	89 04 24             	mov    %eax,(%esp)
 81f3493:	e8 c2 64 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f3498:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f349f:	00 
 81f34a0:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f34a7:	00 
 81f34a8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f34af:	00 
 81f34b0:	c7 44 24 08 38 01 00 	movl   $0x138,0x8(%esp)
 81f34b7:	00 
 81f34b8:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f34bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f34bf:	89 04 24             	mov    %eax,(%esp)
 81f34c2:	e8 b7 57 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f34c7:	eb 40                	jmp    81f3509 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x7fd>
 81f34c9:	83 7d d0 04          	cmpl   $0x4,-0x30(%ebp)
 81f34cd:	75 3a                	jne    81f3509 <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x7fd>
 81f34cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f34d2:	89 04 24             	mov    %eax,(%esp)
 81f34d5:	e8 80 64 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f34da:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f34e1:	00 
 81f34e2:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f34e9:	00 
 81f34ea:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f34f1:	00 
 81f34f2:	c7 44 24 08 21 03 00 	movl   $0x321,0x8(%esp)
 81f34f9:	00 
 81f34fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f34fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f3501:	89 04 24             	mov    %eax,(%esp)
 81f3504:	e8 75 57 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f3509:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f350e:	eb 1b                	jmp    81f352b <_ZN19DisPatcher_SellItem12dispatch_sigEP5CUserR9PacketBuf+0x81f>
 81f3510:	89 d3                	mov    %edx,%ebx
 81f3512:	89 c6                	mov    %eax,%esi
 81f3514:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f3517:	89 04 24             	mov    %eax,(%esp)
 81f351a:	e8 61 a9 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f351f:	89 f0                	mov    %esi,%eax
 81f3521:	89 da                	mov    %ebx,%edx
 81f3523:	89 04 24             	mov    %eax,(%esp)
 81f3526:	e8 25 02 8f 00       	call   8ae3750 <_Unwind_Resume>
 81f352b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81f352e:	89 04 24             	mov    %eax,(%esp)
 81f3531:	e8 4a a9 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f3536:	89 d8                	mov    %ebx,%eax
 81f3538:	83 c4 7c             	add    $0x7c,%esp
 81f353b:	5b                   	pop    %ebx
 81f353c:	5e                   	pop    %esi
 81f353d:	5f                   	pop    %edi
 81f353e:	5d                   	pop    %ebp
 81f353f:	c3                   	ret

```

```c
// DisPatcher_SellItem::dispatch_sig @ 0x81f2d0c

/* DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SellItem::dispatch_sig(DisPatcher_SellItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ServiceRestrictManager *pSVar4;
  undefined4 uVar5;
  CHackAnalyzer *pCVar6;
  CPrivateStoreMgr *this_00;
  GameWorld *pGVar7;
  Store *this_01;
  uint uVar8;
  undefined4 uVar9;
  ulong local_68;
  PacketGuard local_64 [27];
  char local_49;
  short local_48;
  ushort local_46;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  CMap *local_28;
  Village *local_24;
  Area *local_20;
  
  iVar3 = CUser::get_state(param_1);
  if ((((iVar3 == 3) || (iVar3 = CUser::get_state(param_1), iVar3 == 8)) ||
      (iVar3 = CUser::get_state(param_1), iVar3 == 5)) ||
     ((iVar3 = CUser::get_state(param_1), iVar3 == 10 ||
      (iVar3 = CUser::get_state(param_1), iVar3 == 0xc)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar9 = 0;
  }
  else {
    cVar2 = PacketBuf::get_byte(param_2,&local_49);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_short(param_2,&local_48);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_short(param_2,&local_46);
        if (cVar2 == '\x01') {
          pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar2 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,3);
          if (cVar2 == '\0') {
            uVar9 = CSecu_ProtectionField::GetInvenItemPtr
                              (GlobalData::s_pSecuProtectionField,param_1,local_49,local_48);
            uVar5 = CSecu_ProtectionField::GetItemPtr
                              (GlobalData::s_pSecuProtectionField,param_1,local_49,local_48);
            local_44 = CSecu_ProtectionField::CheckItemRarity
                                 (GlobalData::s_pSecuProtectionField,param_1,0x23,uVar5,uVar9);
            if (local_44 == 0) {
              cVar2 = CUser::CheckItemLockSlotSpace(param_1,(int)local_49,(int)local_48);
              if (cVar2 == '\0') {
                iVar3 = CUser::get_state(param_1);
                if ((iVar3 == 5) &&
                   (iVar3 = CUser::getInDungeonItemSellCount(param_1,(int)local_49,(int)local_48),
                   iVar3 == 7)) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x139,1,0,0);
                }
                PacketGuard::PacketGuard(local_64);
                    /* try { // try from 081f301b to 081f3508 has its CatchHandler @ 081f3510 */
                this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
                cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
                if (cVar2 == '\0') {
                  local_68 = 0;
                  cVar2 = PacketBuf::get_int(param_2,&local_68);
                  if (cVar2 == '\x01') {
                    local_40 = 0;
                    if ((int)local_49 + (int)local_48 + (uint)local_46 != local_68) {
                      pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                      WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x335,1,0,0);
                    }
                    local_3c = 6;
                    if (local_49 == '\x01') {
                      CUser::SendCmdErrorPacket(param_1,0x18,0x17);
                      uVar9 = 0;
                    }
                    else if ((local_49 == '\x03') && (local_48 < 10)) {
                      CUser::SendCmdErrorPacket(param_1,0x18,0x17);
                      uVar9 = 0;
                    }
                    else {
                      iVar3 = CUser::get_state(param_1);
                      if ((iVar3 == 5) && (local_30 = CUser::GetParty(param_1), local_30 != 0)) {
                        local_2c = CBattle_Field::get_cur_map((CBattle_Field *)(local_30 + 0xb24));
                        iVar3 = G_CDataManager();
                        local_28 = (CMap *)CDataManager::find_map(iVar3);
                        if ((local_28 == (CMap *)0x0) ||
                           ((iVar3 = CMap::getAssignedNPCCount(local_28), iVar3 != 0 ||
                            (cVar2 = CBattle_Field::IsAssignNPCByPotion
                                               ((CBattle_Field *)(local_30 + 0xb24)),
                            cVar2 == '\x01')))) {
                          bVar1 = false;
                        }
                        else {
                          bVar1 = true;
                        }
                        if (bVar1) {
                          pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                          WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x323,1,0,0);
                        }
                      }
                      iVar3 = CUser::get_state(param_1);
                      if (iVar3 == 3) {
                        iVar3 = CUser::get_area(param_1,false);
                        cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                        pGVar7 = (GameWorld *)G_GameWorld();
                        cVar2 = GameWorld::check_valid_area(pGVar7,(int)cVar2,iVar3);
                        if (cVar2 != '\0') {
                          pGVar7 = (GameWorld *)G_GameWorld();
                          local_24 = (Village *)GameWorld::getUserVillage(pGVar7,param_1);
                          if (local_24 != (Village *)0x0) {
                            iVar3 = CUser::get_area(param_1,false);
                            local_20 = (Area *)Village::getArea(local_24,iVar3);
                            if ((local_20 != (Area *)0x0) &&
                               (cVar2 = Area::IsExistItemShopNPC(local_20), cVar2 != '\x01')) {
                              pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                              WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x324,1,0,0);
                            }
                          }
                        }
                      }
                      this_01 = (Store *)G_Store();
                      local_38 = Store::user_sell_item(this_01,param_1,local_49,local_48,local_46);
                      if (local_38 != 0) {
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x18);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,local_38);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
                        CUser::Send(param_1,local_64);
                        if (local_38 == 0x16) {
                          CUser::SendMoneyFullReason(param_1,3,0,0);
                        }
                      }
                      local_34 = 0;
                      uVar8 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_)
                      ;
                      local_34 = CUser::SellItemTimeChecker(param_1,uVar8,1000);
                      if (local_34 == 2) {
                        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x138,1,0,0);
                      }
                      else if (local_34 == 4) {
                        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x321,1,0,0);
                      }
                      uVar9 = 0;
                    }
                  }
                  else {
                    uVar9 = LineFunc(0x7e71,
                                     "virtual int DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x18);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0x3c);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
                  CUser::Send(param_1,local_64);
                  uVar9 = 0;
                }
                PacketGuard::~PacketGuard(local_64);
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x18,0xd5);
                uVar9 = 0;
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x18,local_44 & 0xff);
              uVar9 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x18,0xd1);
            uVar9 = 0;
          }
        }
        else {
          uVar9 = LineFunc(0x7e17,
                           "virtual int DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)",0,0);
        }
      }
      else {
        uVar9 = LineFunc(0x7e16,"virtual int DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar9 = LineFunc(0x7e15,"virtual int DisPatcher_SellItem::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar9;
}

```

