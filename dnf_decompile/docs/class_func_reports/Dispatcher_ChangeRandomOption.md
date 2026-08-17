# Dispatcher_ChangeRandomOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081dc9ba Dispatcher_ChangeRandomOption::process  [0x081dc9ba-0x81dd1e1] ===
 81dc9ba:	55                   	push   %ebp
 81dc9bb:	89 e5                	mov    %esp,%ebp
 81dc9bd:	57                   	push   %edi
 81dc9be:	56                   	push   %esi
 81dc9bf:	53                   	push   %ebx
 81dc9c0:	81 ec ac 00 00 00    	sub    $0xac,%esp
 81dc9c6:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc9c9:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81dc9cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc9cf:	89 04 24             	mov    %eax,(%esp)
 81dc9d2:	e8 b5 d9 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dc9d7:	83 f8 02             	cmp    $0x2,%eax
 81dc9da:	7e 0f                	jle    81dc9eb <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 81dc9dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc9df:	89 04 24             	mov    %eax,(%esp)
 81dc9e2:	e8 4b 3a f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81dc9e7:	85 c0                	test   %eax,%eax
 81dc9e9:	75 07                	jne    81dc9f2 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x38>
 81dc9eb:	b8 01 00 00 00       	mov    $0x1,%eax
 81dc9f0:	eb 05                	jmp    81dc9f7 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x3d>
 81dc9f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc9f7:	84 c0                	test   %al,%al
 81dc9f9:	74 0a                	je     81dca05 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x4b>
 81dc9fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dca00:	e9 cf 07 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dca05:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dca08:	89 04 24             	mov    %eax,(%esp)
 81dca0b:	e8 ee d8 ef ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81dca10:	84 c0                	test   %al,%al
 81dca12:	74 0a                	je     81dca1e <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x64>
 81dca14:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dca19:	e9 b6 07 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dca1e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dca21:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81dca25:	0f b7 c0             	movzwl %ax,%eax
 81dca28:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dca2c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dca33:	00 
 81dca34:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dca37:	89 04 24             	mov    %eax,(%esp)
 81dca3a:	e8 03 9f 46 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81dca3f:	84 c0                	test   %al,%al
 81dca41:	74 25                	je     81dca68 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0xae>
 81dca43:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81dca4a:	00 
 81dca4b:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dca52:	00 
 81dca53:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dca56:	89 04 24             	mov    %eax,(%esp)
 81dca59:	e8 e4 f4 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dca5e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dca63:	e9 6c 07 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dca68:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dca6b:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81dca6f:	0f b7 d8             	movzwl %ax,%ebx
 81dca72:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dca75:	89 04 24             	mov    %eax,(%esp)
 81dca78:	e8 11 d8 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81dca7d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81dca81:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dca88:	00 
 81dca89:	89 04 24             	mov    %eax,(%esp)
 81dca8c:	e8 1d f8 31 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 81dca91:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81dca94:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81dca98:	0f 94 c0             	sete   %al
 81dca9b:	84 c0                	test   %al,%al
 81dca9d:	74 25                	je     81dcac4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x10a>
 81dca9f:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81dcaa6:	00 
 81dcaa7:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcaae:	00 
 81dcaaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcab2:	89 04 24             	mov    %eax,(%esp)
 81dcab5:	e8 88 f4 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcaba:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcabf:	e9 10 07 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcac4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dcac7:	8b 40 02             	mov    0x2(%eax),%eax
 81dcaca:	89 c3                	mov    %eax,%ebx
 81dcacc:	e8 ca f6 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81dcad1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dcad5:	89 04 24             	mov    %eax,(%esp)
 81dcad8:	e8 55 2f 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81dcadd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81dcae0:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81dcae4:	75 25                	jne    81dcb0b <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x151>
 81dcae6:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81dcaed:	00 
 81dcaee:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcaf5:	00 
 81dcaf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcaf9:	89 04 24             	mov    %eax,(%esp)
 81dcafc:	e8 41 f4 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcb01:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcb06:	e9 c9 06 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcb0b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dcb0e:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 81dcb12:	88 45 db             	mov    %al,-0x25(%ebp)
 81dcb15:	0f b6 55 db          	movzbl -0x25(%ebp),%edx
 81dcb19:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 81dcb1c:	89 d0                	mov    %edx,%eax
 81dcb1e:	01 c0                	add    %eax,%eax
 81dcb20:	01 d0                	add    %edx,%eax
 81dcb22:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81dcb25:	83 c0 25             	add    $0x25,%eax
 81dcb28:	0f b6 00             	movzbl (%eax),%eax
 81dcb2b:	84 c0                	test   %al,%al
 81dcb2d:	75 25                	jne    81dcb54 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x19a>
 81dcb2f:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81dcb36:	00 
 81dcb37:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcb3e:	00 
 81dcb3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcb42:	89 04 24             	mov    %eax,(%esp)
 81dcb45:	e8 f8 f3 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcb4a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcb4f:	e9 80 06 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcb54:	e8 8d 5a f8 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81dcb59:	c7 44 24 0c 0f 00 00 	movl   $0xf,0xc(%esp)
 81dcb60:	00 
 81dcb61:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81dcb68:	00 
 81dcb69:	8b 55 0c             	mov    0xc(%ebp),%edx
 81dcb6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dcb70:	89 04 24             	mov    %eax,(%esp)
 81dcb73:	e8 40 1b f9 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81dcb78:	84 c0                	test   %al,%al
 81dcb7a:	74 25                	je     81dcba1 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x1e7>
 81dcb7c:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 81dcb83:	00 
 81dcb84:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcb8b:	00 
 81dcb8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcb8f:	89 04 24             	mov    %eax,(%esp)
 81dcb92:	e8 ab f3 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcb97:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcb9c:	e9 33 06 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcba1:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81dcba6:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 81dcbad:	00 
 81dcbae:	8b 55 0c             	mov    0xc(%ebp),%edx
 81dcbb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dcbb5:	89 04 24             	mov    %eax,(%esp)
 81dcbb8:	e8 45 be 0a 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81dcbbd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81dcbc0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81dcbc4:	74 27                	je     81dcbed <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x233>
 81dcbc6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81dcbc9:	0f b6 c0             	movzbl %al,%eax
 81dcbcc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dcbd0:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcbd7:	00 
 81dcbd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcbdb:	89 04 24             	mov    %eax,(%esp)
 81dcbde:	e8 5f f3 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcbe3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcbe8:	e9 e7 05 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcbed:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dcbf0:	83 c0 25             	add    $0x25,%eax
 81dcbf3:	89 04 24             	mov    %eax,(%esp)
 81dcbf6:	e8 d5 df 04 00       	call   822abd0 <_ZN12RandomOption5emptyEv>
 81dcbfb:	84 c0                	test   %al,%al
 81dcbfd:	74 25                	je     81dcc24 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x26a>
 81dcbff:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81dcc06:	00 
 81dcc07:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcc0e:	00 
 81dcc0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcc12:	89 04 24             	mov    %eax,(%esp)
 81dcc15:	e8 28 f3 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcc1a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcc1f:	e9 b0 05 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcc24:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dcc27:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 81dcc2b:	0f b6 c0             	movzbl %al,%eax
 81dcc2e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81dcc31:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81dcc35:	78 06                	js     81dcc3d <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x283>
 81dcc37:	83 7d dc 02          	cmpl   $0x2,-0x24(%ebp)
 81dcc3b:	7e 25                	jle    81dcc62 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2a8>
 81dcc3d:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81dcc44:	00 
 81dcc45:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcc4c:	00 
 81dcc4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcc50:	89 04 24             	mov    %eax,(%esp)
 81dcc53:	e8 ea f2 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcc58:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcc5d:	e9 72 05 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcc62:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dcc65:	83 c0 2f             	add    $0x2f,%eax
 81dcc68:	89 04 24             	mov    %eax,(%esp)
 81dcc6b:	e8 b2 20 f4 ff       	call   811ed22 <_ZNK17RandomOptionField5emptyEv>
 81dcc70:	83 f0 01             	xor    $0x1,%eax
 81dcc73:	84 c0                	test   %al,%al
 81dcc75:	74 1e                	je     81dcc95 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2db>
 81dcc77:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dcc7a:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 81dcc7e:	83 e0 03             	and    $0x3,%eax
 81dcc81:	0f b6 d0             	movzbl %al,%edx
 81dcc84:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81dcc87:	0f b6 c0             	movzbl %al,%eax
 81dcc8a:	39 c2                	cmp    %eax,%edx
 81dcc8c:	74 07                	je     81dcc95 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2db>
 81dcc8e:	b8 01 00 00 00       	mov    $0x1,%eax
 81dcc93:	eb 05                	jmp    81dcc9a <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2e0>
 81dcc95:	b8 00 00 00 00       	mov    $0x0,%eax
 81dcc9a:	84 c0                	test   %al,%al
 81dcc9c:	74 25                	je     81dccc3 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x309>
 81dcc9e:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81dcca5:	00 
 81dcca6:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dccad:	00 
 81dccae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dccb1:	89 04 24             	mov    %eax,(%esp)
 81dccb4:	e8 89 f2 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dccb9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dccbe:	e9 11 05 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dccc3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dccc6:	89 04 24             	mov    %eax,(%esp)
 81dccc9:	e8 08 46 f1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 81dccce:	89 c3                	mov    %eax,%ebx
 81dccd0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dccd3:	89 04 24             	mov    %eax,(%esp)
 81dccd6:	e8 13 46 f1 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 81dccdb:	0f bf f0             	movswl %ax,%esi
 81dccde:	e8 b8 f4 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81dcce3:	05 10 4e 00 00       	add    $0x4e10,%eax
 81dcce8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81dccec:	89 74 24 04          	mov    %esi,0x4(%esp)
 81dccf0:	89 04 24             	mov    %eax,(%esp)
 81dccf3:	e8 a8 6b 89 00       	call   8a738a0 <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY>
 81dccf8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81dccfb:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
 81dccff:	75 25                	jne    81dcd26 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x36c>
 81dcd01:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81dcd08:	00 
 81dcd09:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcd10:	00 
 81dcd11:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcd14:	89 04 24             	mov    %eax,(%esp)
 81dcd17:	e8 26 f2 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcd1c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcd21:	e9 ae 04 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcd26:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dcd29:	66 c7 40 10 ff ff    	movw   $0xffff,0x10(%eax)
 81dcd2f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dcd32:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81dcd36:	66 83 f8 ff          	cmp    $0xffff,%ax
 81dcd3a:	74 5f                	je     81dcd9b <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x3e1>
 81dcd3c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dcd3f:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81dcd43:	0f b7 d8             	movzwl %ax,%ebx
 81dcd46:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcd49:	89 04 24             	mov    %eax,(%esp)
 81dcd4c:	e8 2d d5 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81dcd51:	8d 55 83             	lea    -0x7d(%ebp),%edx
 81dcd54:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81dcd58:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81dcd5f:	00 
 81dcd60:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dcd64:	89 14 24             	mov    %edx,(%esp)
 81dcd67:	e8 ac eb 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81dcd6c:	83 ec 04             	sub    $0x4,%esp
 81dcd6f:	8b 45 8a             	mov    -0x76(%ebp),%eax
 81dcd72:	85 c0                	test   %eax,%eax
 81dcd74:	7f 67                	jg     81dcddd <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x423>
 81dcd76:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81dcd7d:	00 
 81dcd7e:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcd85:	00 
 81dcd86:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcd89:	89 04 24             	mov    %eax,(%esp)
 81dcd8c:	e8 b1 f1 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcd91:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcd96:	e9 39 04 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcd9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcd9e:	89 04 24             	mov    %eax,(%esp)
 81dcda1:	e8 d8 d4 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81dcda6:	89 04 24             	mov    %eax,(%esp)
 81dcda9:	e8 28 7a f5 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81dcdae:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81dcdb1:	0f 9c c0             	setl   %al
 81dcdb4:	84 c0                	test   %al,%al
 81dcdb6:	74 25                	je     81dcddd <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x423>
 81dcdb8:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 81dcdbf:	00 
 81dcdc0:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcdc7:	00 
 81dcdc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcdcb:	89 04 24             	mov    %eax,(%esp)
 81dcdce:	e8 6f f1 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcdd3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcdd8:	e9 f7 03 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcddd:	b8 c0 a2 40 09       	mov    $0x940a2c0,%eax
 81dcde2:	0f b6 00             	movzbl (%eax),%eax
 81dcde5:	84 c0                	test   %al,%al
 81dcde7:	75 71                	jne    81dce5a <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x4a0>
 81dcde9:	c7 04 24 c0 a2 40 09 	movl   $0x940a2c0,(%esp)
 81dcdf0:	e8 3b 85 54 00       	call   8725330 <__cxa_guard_acquire>
 81dcdf5:	85 c0                	test   %eax,%eax
 81dcdf7:	0f 95 c0             	setne  %al
 81dcdfa:	84 c0                	test   %al,%al
 81dcdfc:	74 5c                	je     81dce5a <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x4a0>
 81dcdfe:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dce03:	c7 04 24 e0 b4 40 09 	movl   $0x940b4e0,(%esp)
 81dce0a:	e8 55 3f 41 00       	call   85f0d64 <_ZN13random_option23CRandomOptionItemHandleC1Ev>
 81dce0f:	c7 04 24 c0 a2 40 09 	movl   $0x940a2c0,(%esp)
 81dce16:	e8 35 84 54 00       	call   8725250 <__cxa_guard_release>
 81dce1b:	b8 46 0e 5f 08       	mov    $0x85f0e46,%eax
 81dce20:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 81dce27:	08 
 81dce28:	c7 44 24 04 e0 b4 40 	movl   $0x940b4e0,0x4(%esp)
 81dce2f:	09 
 81dce30:	89 04 24             	mov    %eax,(%esp)
 81dce33:	e8 98 0f ea ff       	call   807ddd0 <__cxa_atexit@plt>
 81dce38:	eb 20                	jmp    81dce5a <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x4a0>
 81dce3a:	89 d6                	mov    %edx,%esi
 81dce3c:	89 c7                	mov    %eax,%edi
 81dce3e:	84 db                	test   %bl,%bl
 81dce40:	75 0c                	jne    81dce4e <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x494>
 81dce42:	c7 04 24 c0 a2 40 09 	movl   $0x940a2c0,(%esp)
 81dce49:	e8 72 84 54 00       	call   87252c0 <__cxa_guard_abort>
 81dce4e:	89 f8                	mov    %edi,%eax
 81dce50:	89 f2                	mov    %esi,%edx
 81dce52:	89 04 24             	mov    %eax,(%esp)
 81dce55:	e8 f6 68 90 00       	call   8ae3750 <_Unwind_Resume>
 81dce5a:	e8 51 40 41 00       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 81dce5f:	05 54 01 00 00       	add    $0x154,%eax
 81dce64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dce68:	c7 04 24 e0 b4 40 09 	movl   $0x940b4e0,(%esp)
 81dce6f:	e8 2e 40 41 00       	call   85f0ea2 <_ZN13random_option23CRandomOptionItemHandle22set_random_option_giveEP17CRandomOptionGive>
 81dce74:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dce77:	83 c0 25             	add    $0x25,%eax
 81dce7a:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 81dce80:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dce83:	8b 00                	mov    (%eax),%eax
 81dce85:	83 c0 50             	add    $0x50,%eax
 81dce88:	8b 10                	mov    (%eax),%edx
 81dce8a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dce8d:	89 04 24             	mov    %eax,(%esp)
 81dce90:	ff d2                	call   *%edx
 81dce92:	89 c7                	mov    %eax,%edi
 81dce94:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dce97:	89 04 24             	mov    %eax,(%esp)
 81dce9a:	e8 73 44 f1 ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 81dce9f:	89 c6                	mov    %eax,%esi
 81dcea1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dcea4:	89 04 24             	mov    %eax,(%esp)
 81dcea7:	e8 42 44 f1 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 81dceac:	89 c3                	mov    %eax,%ebx
 81dceae:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dceb1:	89 04 24             	mov    %eax,(%esp)
 81dceb4:	e8 1d 44 f1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 81dceb9:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81dcebc:	8b 52 02             	mov    0x2(%edx),%edx
 81dcebf:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 81dcec5:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81dcec9:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 81dcecc:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81dced0:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81dced4:	89 74 24 10          	mov    %esi,0x10(%esp)
 81dced8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81dcedc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dcee0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dcee4:	c7 04 24 e0 b4 40 09 	movl   $0x940b4e0,(%esp)
 81dceeb:	e8 50 64 41 00       	call   85f3340 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption>
 81dcef0:	83 f0 01             	xor    $0x1,%eax
 81dcef3:	84 c0                	test   %al,%al
 81dcef5:	74 25                	je     81dcf1c <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x562>
 81dcef7:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81dcefe:	00 
 81dceff:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcf06:	00 
 81dcf07:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcf0a:	89 04 24             	mov    %eax,(%esp)
 81dcf0d:	e8 30 f0 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcf12:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcf17:	e9 b8 02 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dcf1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcf1f:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 81dcf25:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81dcf2c:	00 
 81dcf2d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dcf30:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dcf34:	89 14 24             	mov    %edx,(%esp)
 81dcf37:	e8 fe 5d 4a 00       	call   8682d3a <_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE>
 81dcf3c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81dcf43:	e8 16 75 05 00       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 81dcf48:	89 c3                	mov    %eax,%ebx
 81dcf4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcf4d:	89 04 24             	mov    %eax,(%esp)
 81dcf50:	e8 4b 24 05 00       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 81dcf55:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81dcf59:	89 44 24 14          	mov    %eax,0x14(%esp)
 81dcf5d:	c7 44 24 10 cc 18 bc 	movl   $0x8bc18cc,0x10(%esp)
 81dcf64:	08 
 81dcf65:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81dcf6c:	00 
 81dcf6d:	c7 44 24 08 5e 1a bc 	movl   $0x8bc1a5e,0x8(%esp)
 81dcf74:	08 
 81dcf75:	c7 44 24 04 de 18 bc 	movl   $0x8bc18de,0x4(%esp)
 81dcf7c:	08 
 81dcf7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcf80:	89 04 24             	mov    %eax,(%esp)
 81dcf83:	e8 4a 2e 43 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 81dcf88:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dcf8b:	66 c7 40 10 ff ff    	movw   $0xffff,0x10(%eax)
 81dcf91:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dcf94:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81dcf98:	66 83 f8 ff          	cmp    $0xffff,%ax
 81dcf9c:	0f 84 8d 00 00 00    	je     81dd02f <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x675>
 81dcfa2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dcfa5:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81dcfa9:	0f b7 d8             	movzwl %ax,%ebx
 81dcfac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcfaf:	89 04 24             	mov    %eax,(%esp)
 81dcfb2:	e8 d7 d2 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81dcfb7:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81dcfbe:	00 
 81dcfbf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81dcfc6:	00 
 81dcfc7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dcfcb:	89 04 24             	mov    %eax,(%esp)
 81dcfce:	e8 0b 29 32 00       	call   84ff8de <_ZN10CInventory8use_itemEiii>
 81dcfd3:	85 c0                	test   %eax,%eax
 81dcfd5:	0f 95 c0             	setne  %al
 81dcfd8:	84 c0                	test   %al,%al
 81dcfda:	74 25                	je     81dd001 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x647>
 81dcfdc:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81dcfe3:	00 
 81dcfe4:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dcfeb:	00 
 81dcfec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dcfef:	89 04 24             	mov    %eax,(%esp)
 81dcff2:	e8 4b ef 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dcff7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dcffc:	e9 d3 01 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dd001:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dd004:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81dd008:	0f b7 c0             	movzwl %ax,%eax
 81dd00b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81dd00f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd016:	00 
 81dd017:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd01e:	00 
 81dd01f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd022:	89 04 24             	mov    %eax,(%esp)
 81dd025:	e8 ae f2 49 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81dd02a:	e9 a1 00 00 00       	jmp    81dd0d0 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x716>
 81dd02f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81dd036:	e8 23 74 05 00       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 81dd03b:	89 c3                	mov    %eax,%ebx
 81dd03d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd040:	89 04 24             	mov    %eax,(%esp)
 81dd043:	e8 58 23 05 00       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 81dd048:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81dd04b:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81dd04f:	89 44 24 14          	mov    %eax,0x14(%esp)
 81dd053:	c7 44 24 10 cc 18 bc 	movl   $0x8bc18cc,0x10(%esp)
 81dd05a:	08 
 81dd05b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81dd05f:	c7 44 24 08 69 1a bc 	movl   $0x8bc1a69,0x8(%esp)
 81dd066:	08 
 81dd067:	c7 44 24 04 de 18 bc 	movl   $0x8bc18de,0x4(%esp)
 81dd06e:	08 
 81dd06f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd072:	89 04 24             	mov    %eax,(%esp)
 81dd075:	e8 58 2d 43 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 81dd07a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd07d:	89 04 24             	mov    %eax,(%esp)
 81dd080:	e8 09 d2 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81dd085:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81dd08c:	00 
 81dd08d:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 81dd094:	00 
 81dd095:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81dd098:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dd09c:	89 04 24             	mov    %eax,(%esp)
 81dd09f:	e8 a8 24 32 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 81dd0a4:	83 f0 01             	xor    $0x1,%eax
 81dd0a7:	84 c0                	test   %al,%al
 81dd0a9:	74 25                	je     81dd0d0 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x716>
 81dd0ab:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 81dd0b2:	00 
 81dd0b3:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dd0ba:	00 
 81dd0bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd0be:	89 04 24             	mov    %eax,(%esp)
 81dd0c1:	e8 7c ee 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd0c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dd0cb:	e9 04 01 00 00       	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dd0d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dd0d7:	00 
 81dd0d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd0df:	00 
 81dd0e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd0e7:	00 
 81dd0e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd0eb:	89 04 24             	mov    %eax,(%esp)
 81dd0ee:	e8 67 f5 49 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81dd0f3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81dd0f6:	89 04 24             	mov    %eax,(%esp)
 81dd0f9:	e8 4e 0c 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dd0fe:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81dd105:	00 
 81dd106:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dd10d:	00 
 81dd10e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81dd111:	89 04 24             	mov    %eax,(%esp)
 81dd114:	e8 e3 e7 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81dd119:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dd120:	00 
 81dd121:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81dd124:	89 04 24             	mov    %eax,(%esp)
 81dd127:	e8 f4 e7 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dd12c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd133:	00 
 81dd134:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81dd137:	89 04 24             	mov    %eax,(%esp)
 81dd13a:	e8 65 cd ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81dd13f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dd142:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81dd146:	0f b7 d8             	movzwl %ax,%ebx
 81dd149:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd14c:	89 04 24             	mov    %eax,(%esp)
 81dd14f:	e8 2a d1 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81dd154:	8d 55 c0             	lea    -0x40(%ebp),%edx
 81dd157:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81dd15b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81dd15f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd166:	00 
 81dd167:	89 04 24             	mov    %eax,(%esp)
 81dd16a:	e8 4d f5 31 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 81dd16f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd176:	00 
 81dd177:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81dd17a:	89 04 24             	mov    %eax,(%esp)
 81dd17d:	e8 d6 e7 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81dd182:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81dd185:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd189:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd18c:	89 04 24             	mov    %eax,(%esp)
 81dd18f:	e8 26 b4 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81dd194:	c7 44 24 04 b6 01 00 	movl   $0x1b6,0x4(%esp)
 81dd19b:	00 
 81dd19c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd19f:	89 04 24             	mov    %eax,(%esp)
 81dd1a2:	e8 f9 ec 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81dd1a7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dd1ac:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81dd1af:	89 04 24             	mov    %eax,(%esp)
 81dd1b2:	e8 c9 0c 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dd1b7:	eb 1b                	jmp    81dd1d4 <_ZN29Dispatcher_ChangeRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x81a>
 81dd1b9:	89 d3                	mov    %edx,%ebx
 81dd1bb:	89 c6                	mov    %eax,%esi
 81dd1bd:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81dd1c0:	89 04 24             	mov    %eax,(%esp)
 81dd1c3:	e8 b8 0c 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dd1c8:	89 f0                	mov    %esi,%eax
 81dd1ca:	89 da                	mov    %ebx,%edx
 81dd1cc:	89 04 24             	mov    %eax,(%esp)
 81dd1cf:	e8 7c 65 90 00       	call   8ae3750 <_Unwind_Resume>
 81dd1d4:	89 d8                	mov    %ebx,%eax
 81dd1d6:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81dd1d9:	83 c4 00             	add    $0x0,%esp
 81dd1dc:	5b                   	pop    %ebx
 81dd1dd:	5e                   	pop    %esi
 81dd1de:	5f                   	pop    %edi
 81dd1df:	5d                   	pop    %ebp
 81dd1e0:	c3                   	ret
 81dd1e1:	90                   	nop

```

```c
// Dispatcher_ChangeRandomOption::process @ 0x81dc9ba

/* Dispatcher_ChangeRandomOption::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_ChangeRandomOption::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  CInventory *pCVar7;
  CDataManager *this;
  ServiceRestrictManager *pSVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_81 [7];
  int local_7a;
  PacketGuard local_44 [12];
  ParamBase *local_38;
  int local_34;
  CItem *local_30;
  ParamBase local_29;
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_38 = param_3;
  iVar6 = CUser::get_state((CUser *)param_2);
  if ((iVar6 < 3) ||
     (iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar6 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((!bVar3) && (cVar4 = CUser::CheckInTrade((CUser *)param_2), cVar4 == '\0')) {
    cVar4 = CUser::CheckItemLock((CUser *)param_2,1,(uint)*(ushort *)(local_38 + 0xe));
    if (cVar4 == '\0') {
      uVar1 = *(ushort *)(local_38 + 0xe);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_34 = CInventory::GetInvenRef(pCVar7,1,(uint)uVar1);
      if (local_34 == 0) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x11);
      }
      else {
        iVar6 = *(int *)(local_34 + 2);
        this = (CDataManager *)G_CDataManager();
        local_30 = (CItem *)CDataManager::find_item(this,iVar6);
        if (local_30 == (CItem *)0x0) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x11);
        }
        else {
          local_29 = local_38[0x12];
          if (*(char *)(local_34 + (uint)(byte)local_29 * 3 + 0x25) == '\0') {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x11);
          }
          else {
            pSVar8 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
            uVar14 = 0xf;
            cVar4 = ServiceRestrictManager::isRestricted(pSVar8,param_2,1,0xf);
            if (cVar4 == '\0') {
              local_20 = CSecu_ProtectionField::Check
                                   (GlobalData::s_pSecuProtectionField,param_2,0x25);
              if (local_20 == 0) {
                cVar4 = RandomOption::empty((RandomOption *)(local_34 + 0x25));
                if (cVar4 == '\0') {
                  local_28 = (uint)(byte)local_38[0x12];
                  if (local_28 < 3) {
                    cVar4 = RandomOptionField::empty((RandomOptionField *)(local_34 + 0x2f));
                    if ((cVar4 == '\x01') ||
                       ((uint)(*(byte *)(local_34 + 0x32) & 3) == (local_28 & 0xff))) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,4);
                    }
                    else {
                      uVar9 = CItem::get_rarity(local_30);
                      sVar5 = CItem::getUsableLevel(local_30);
                      iVar13 = (int)sVar5;
                      iVar6 = G_CDataManager();
                      local_24 = RandomOptionScript::getOptionModificationCost
                                           ((RandomOptionScript *)(iVar6 + 0x4e10),iVar13,uVar9);
                      if (local_24 == 0xffffffff) {
                        CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x11);
                      }
                      else {
                        *(undefined2 *)(local_38 + 0x10) = 0xffff;
                        if (*(short *)(local_38 + 0x10) == -1) {
                          pCVar7 = (CInventory *)
                                   CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
                          iVar6 = CInventory::get_money(pCVar7);
                          if (iVar6 < (int)local_24) {
                            CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,10);
                            return 0;
                          }
                        }
                        else {
                          uVar14 = (uint)*(ushort *)(local_38 + 0x10);
                          iVar13 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
                          uVar9 = 1;
                          CInventory::GetInvenSlot((int)local_81,iVar13);
                          if (local_7a < 1) {
                            CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x16);
                            return 0;
                          }
                        }
                        if ((process(CUser*,MSG_BASE&,ParamBase&)::handle == '\0') &&
                           (iVar6 = __cxa_guard_acquire(&process(CUser*,MSG_BASE&,ParamBase&)::
                                                         handle,iVar13,uVar9,uVar14), iVar6 != 0)) {
                    /* try { // try from 081dce0a to 081dce0e has its CatchHandler @ 081dce3a */
                          random_option::CRandomOptionItemHandle::CRandomOptionItemHandle
                                    ((CRandomOptionItemHandle *)
                                     process(CUser*,MSG_BASE&,ParamBase&)::handle);
                          __cxa_guard_release(&process(CUser*,MSG_BASE&,ParamBase&)::handle);
                          __cxa_atexit(random_option::CRandomOptionItemHandle::
                                       ~CRandomOptionItemHandle,
                                       process(CUser*,MSG_BASE&,ParamBase&)::handle,&__dso_handle);
                        }
                        iVar6 = random_option::GetRandomOption();
                        random_option::CRandomOptionItemHandle::set_random_option_give
                                  ((CRandomOptionItemHandle *)
                                   process(CUser*,MSG_BASE&,ParamBase&)::handle,
                                   (CRandomOptionGive *)(iVar6 + 0x154));
                        iVar6 = local_34 + 0x25;
                        uVar9 = (**(code **)(*(int *)local_30 + 0x50))(local_30);
                        uVar10 = CItem::getItemGroupName(local_30);
                        uVar11 = CItem::getUsableLevel(local_30);
                        uVar12 = CItem::get_rarity(local_30);
                        cVar4 = random_option::CRandomOptionItemHandle::change_option
                                          ((CRandomOptionItemHandle *)
                                           process(CUser*,MSG_BASE&,ParamBase&)::handle,
                                           *(undefined4 *)(local_34 + 2),uVar12,uVar11,uVar10,uVar9,
                                           local_28,iVar6);
                        if (cVar4 == '\x01') {
                          cUserHistoryLog::RandomOption
                                    ((cUserHistoryLog *)(param_2 + 0x79700),local_34,2);
                          uVar9 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
                          uVar10 = CUserCharacInfo::get_charac_10_level_section
                                             ((CUserCharacInfo *)param_2);
                          statistc_proxy::add((CUser *)param_2,"log_random_option","change_cnt",1,
                                              "%d,\'%s\'",uVar10,uVar9);
                          *(undefined2 *)(local_38 + 0x10) = 0xffff;
                          if (*(short *)(local_38 + 0x10) == -1) {
                            uVar9 = CSystemTime::getCurDate
                                              ((CSystemTime *)GlobalData::s_systemTime_);
                            uVar10 = CUserCharacInfo::get_charac_10_level_section
                                               ((CUserCharacInfo *)param_2);
                            statistc_proxy::add((CUser *)param_2,"log_random_option","change_gold",
                                                local_24,"%d,\'%s\'",uVar10,uVar9);
                            pCVar7 = (CInventory *)
                                     CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2)
                            ;
                            cVar4 = CInventory::use_money(pCVar7,local_24,0x2c,1);
                            if (cVar4 != '\x01') {
                              CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,10);
                              return 0;
                            }
                          }
                          else {
                            uVar1 = *(ushort *)(local_38 + 0x10);
                            pCVar7 = (CInventory *)
                                     CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2)
                            ;
                            iVar6 = CInventory::use_item(pCVar7,(uint)uVar1,1,1);
                            if (iVar6 != 0) {
                              CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x16);
                              return 0;
                            }
                            CUser::SendUpdateItem
                                      ((CUser *)param_2,1,0,*(undefined2 *)(local_38 + 0x10));
                          }
                          CUser::SendUpdateItemList((CUser *)param_2,1,0,0);
                          PacketGuard::PacketGuard(local_44);
                    /* try { // try from 081dd114 to 081dd1a6 has its CatchHandler @ 081dd1b9 */
                          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0xe);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,0);
                          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,1);
                          uVar2 = *(undefined2 *)(local_38 + 0xe);
                          pCVar7 = (CInventory *)
                                   CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
                          CInventory::MakeItemPacket(pCVar7,1,uVar2,local_44);
                          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
                          CUser::Send((CUser *)param_2,local_44);
                          CUser::SendCmdOkPacket((CUser *)param_2,0x1b6);
                          PacketGuard::~PacketGuard(local_44);
                        }
                        else {
                          CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x13);
                        }
                      }
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x13);
                  }
                }
                else {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0x13);
                }
              }
              else {
                CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,local_20 & 0xff);
              }
            }
            else {
              CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0xd1);
            }
          }
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x1b6,0xd5);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081dc8de Dispatcher_ChangeRandomOption::read  [0x081dc8de-0x81dc9b9] ===
 81dc8de:	55                   	push   %ebp
 81dc8df:	89 e5                	mov    %esp,%ebp
 81dc8e1:	83 ec 28             	sub    $0x28,%esp
 81dc8e4:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc8e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dc8ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc8ed:	83 c0 0e             	add    $0xe,%eax
 81dc8f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc8f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc8f7:	89 04 24             	mov    %eax,(%esp)
 81dc8fa:	e8 b1 07 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81dc8ff:	83 f0 01             	xor    $0x1,%eax
 81dc902:	84 c0                	test   %al,%al
 81dc904:	74 29                	je     81dc92f <_ZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASE+0x51>
 81dc906:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dc90d:	00 
 81dc90e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dc915:	00 
 81dc916:	c7 44 24 04 a0 1f bd 	movl   $0x8bd1fa0,0x4(%esp)
 81dc91d:	08 
 81dc91e:	c7 04 24 d8 4c 00 00 	movl   $0x4cd8,(%esp)
 81dc925:	e8 ad 3f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dc92a:	e9 89 00 00 00       	jmp    81dc9b8 <_ZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASE+0xda>
 81dc92f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc932:	83 c0 10             	add    $0x10,%eax
 81dc935:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc939:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc93c:	89 04 24             	mov    %eax,(%esp)
 81dc93f:	e8 6c 07 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81dc944:	83 f0 01             	xor    $0x1,%eax
 81dc947:	84 c0                	test   %al,%al
 81dc949:	74 26                	je     81dc971 <_ZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASE+0x93>
 81dc94b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dc952:	00 
 81dc953:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dc95a:	00 
 81dc95b:	c7 44 24 04 a0 1f bd 	movl   $0x8bd1fa0,0x4(%esp)
 81dc962:	08 
 81dc963:	c7 04 24 db 4c 00 00 	movl   $0x4cdb,(%esp)
 81dc96a:	e8 68 3f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dc96f:	eb 47                	jmp    81dc9b8 <_ZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASE+0xda>
 81dc971:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc974:	83 c0 12             	add    $0x12,%eax
 81dc977:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc97b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc97e:	89 04 24             	mov    %eax,(%esp)
 81dc981:	e8 ea 05 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81dc986:	83 f0 01             	xor    $0x1,%eax
 81dc989:	84 c0                	test   %al,%al
 81dc98b:	74 26                	je     81dc9b3 <_ZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASE+0xd5>
 81dc98d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dc994:	00 
 81dc995:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dc99c:	00 
 81dc99d:	c7 44 24 04 a0 1f bd 	movl   $0x8bd1fa0,0x4(%esp)
 81dc9a4:	08 
 81dc9a5:	c7 04 24 de 4c 00 00 	movl   $0x4cde,(%esp)
 81dc9ac:	e8 26 3f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dc9b1:	eb 05                	jmp    81dc9b8 <_ZN29Dispatcher_ChangeRandomOption4readER9PacketBufR8MSG_BASE+0xda>
 81dc9b3:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc9b8:	c9                   	leave
 81dc9b9:	c3                   	ret

```

```c
// Dispatcher_ChangeRandomOption::read @ 0x81dc8de

/* Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeRandomOption::read
          (Dispatcher_ChangeRandomOption *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x4cde,
                         "virtual int Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x4cdb,
                       "virtual int Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x4cd8,"virtual int Dispatcher_ChangeRandomOption::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

