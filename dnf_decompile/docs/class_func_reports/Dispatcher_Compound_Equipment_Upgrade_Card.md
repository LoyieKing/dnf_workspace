# Dispatcher_Compound_Equipment_Upgrade_Card

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08227e00 Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig  [0x08227e00-0x8228a2d] ===
 8227e00:	55                   	push   %ebp
 8227e01:	89 e5                	mov    %esp,%ebp
 8227e03:	56                   	push   %esi
 8227e04:	53                   	push   %ebx
 8227e05:	81 ec e0 01 00 00    	sub    $0x1e0,%esp
 8227e0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227e0e:	89 04 24             	mov    %eax,(%esp)
 8227e11:	e8 76 25 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8227e16:	83 f8 03             	cmp    $0x3,%eax
 8227e19:	75 0f                	jne    8227e2a <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 8227e1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227e1e:	89 04 24             	mov    %eax,(%esp)
 8227e21:	e8 0c 86 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8227e26:	85 c0                	test   %eax,%eax
 8227e28:	75 07                	jne    8227e31 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x31>
 8227e2a:	b8 01 00 00 00       	mov    $0x1,%eax
 8227e2f:	eb 05                	jmp    8227e36 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x36>
 8227e31:	b8 00 00 00 00       	mov    $0x0,%eax
 8227e36:	84 c0                	test   %al,%al
 8227e38:	74 0a                	je     8227e44 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x44>
 8227e3a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8227e3f:	e9 dd 0b 00 00       	jmp    8228a21 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xc21>
 8227e44:	e8 5e 25 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8227e49:	89 04 24             	mov    %eax,(%esp)
 8227e4c:	e8 cf ec ee ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8227e51:	83 f8 07             	cmp    $0x7,%eax
 8227e54:	0f 94 c0             	sete   %al
 8227e57:	84 c0                	test   %al,%al
 8227e59:	74 2b                	je     8227e86 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x86>
 8227e5b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8227e62:	00 
 8227e63:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8227e6a:	00 
 8227e6b:	c7 44 24 04 e0 c0 bc 	movl   $0x8bcc0e0,0x4(%esp)
 8227e72:	08 
 8227e73:	c7 04 24 c3 e4 00 00 	movl   $0xe4c3,(%esp)
 8227e7a:	e8 58 8a 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8227e7f:	89 c3                	mov    %eax,%ebx
 8227e81:	e9 9b 0b 00 00       	jmp    8228a21 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xc21>
 8227e86:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8227e89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227e8d:	8b 45 10             	mov    0x10(%ebp),%eax
 8227e90:	89 04 24             	mov    %eax,(%esp)
 8227e93:	e8 18 52 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8227e98:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8227e9b:	83 c0 02             	add    $0x2,%eax
 8227e9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227ea2:	8b 45 10             	mov    0x10(%ebp),%eax
 8227ea5:	89 04 24             	mov    %eax,(%esp)
 8227ea8:	e8 03 52 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8227ead:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 8227eb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227eb4:	8b 45 10             	mov    0x10(%ebp),%eax
 8227eb7:	89 04 24             	mov    %eax,(%esp)
 8227eba:	e8 f1 51 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8227ebf:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 8227ec5:	89 c3                	mov    %eax,%ebx
 8227ec7:	be 01 00 00 00       	mov    $0x1,%esi
 8227ecc:	eb 0e                	jmp    8227edc <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xdc>
 8227ece:	89 1c 24             	mov    %ebx,(%esp)
 8227ed1:	e8 7e 39 ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8227ed6:	83 c3 3d             	add    $0x3d,%ebx
 8227ed9:	83 ee 01             	sub    $0x1,%esi
 8227edc:	83 fe ff             	cmp    $0xffffffff,%esi
 8227edf:	0f 95 c0             	setne  %al
 8227ee2:	84 c0                	test   %al,%al
 8227ee4:	75 e8                	jne    8227ece <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xce>
 8227ee6:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 8227eea:	0f b7 d8             	movzwl %ax,%ebx
 8227eed:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227ef0:	89 04 24             	mov    %eax,(%esp)
 8227ef3:	e8 86 23 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8227ef8:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 8227efe:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8227f02:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8227f09:	00 
 8227f0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8227f0e:	89 14 24             	mov    %edx,(%esp)
 8227f11:	e8 02 3a 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8227f16:	83 ec 04             	sub    $0x4,%esp
 8227f19:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 8227f1f:	89 85 ac fe ff ff    	mov    %eax,-0x154(%ebp)
 8227f25:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8227f2b:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 8227f31:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 8227f37:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 8227f3d:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8227f43:	89 85 b8 fe ff ff    	mov    %eax,-0x148(%ebp)
 8227f49:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 8227f4f:	89 85 bc fe ff ff    	mov    %eax,-0x144(%ebp)
 8227f55:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 8227f5b:	89 85 c0 fe ff ff    	mov    %eax,-0x140(%ebp)
 8227f61:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 8227f67:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 8227f6d:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 8227f73:	89 85 c8 fe ff ff    	mov    %eax,-0x138(%ebp)
 8227f79:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 8227f7f:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 8227f85:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 8227f8b:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 8227f91:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 8227f97:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 8227f9d:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 8227fa3:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 8227fa9:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 8227faf:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 8227fb5:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8227fbb:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8227fc1:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8227fc7:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 8227fcd:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 8227fd4:	88 85 e8 fe ff ff    	mov    %al,-0x118(%ebp)
 8227fda:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8227fde:	0f b7 d8             	movzwl %ax,%ebx
 8227fe1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8227fe4:	89 04 24             	mov    %eax,(%esp)
 8227fe7:	e8 92 22 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8227fec:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 8227ff2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8227ff6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8227ffd:	00 
 8227ffe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228002:	89 14 24             	mov    %edx,(%esp)
 8228005:	e8 0e 39 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 822800a:	83 ec 04             	sub    $0x4,%esp
 822800d:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 8228013:	89 85 e9 fe ff ff    	mov    %eax,-0x117(%ebp)
 8228019:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 822801f:	89 85 ed fe ff ff    	mov    %eax,-0x113(%ebp)
 8228025:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 822802b:	89 85 f1 fe ff ff    	mov    %eax,-0x10f(%ebp)
 8228031:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8228037:	89 85 f5 fe ff ff    	mov    %eax,-0x10b(%ebp)
 822803d:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 8228043:	89 85 f9 fe ff ff    	mov    %eax,-0x107(%ebp)
 8228049:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 822804f:	89 85 fd fe ff ff    	mov    %eax,-0x103(%ebp)
 8228055:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 822805b:	89 85 01 ff ff ff    	mov    %eax,-0xff(%ebp)
 8228061:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 8228067:	89 85 05 ff ff ff    	mov    %eax,-0xfb(%ebp)
 822806d:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 8228073:	89 85 09 ff ff ff    	mov    %eax,-0xf7(%ebp)
 8228079:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 822807f:	89 85 0d ff ff ff    	mov    %eax,-0xf3(%ebp)
 8228085:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 822808b:	89 85 11 ff ff ff    	mov    %eax,-0xef(%ebp)
 8228091:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 8228097:	89 85 15 ff ff ff    	mov    %eax,-0xeb(%ebp)
 822809d:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 82280a3:	89 85 19 ff ff ff    	mov    %eax,-0xe7(%ebp)
 82280a9:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 82280af:	89 85 1d ff ff ff    	mov    %eax,-0xe3(%ebp)
 82280b5:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 82280bb:	89 85 21 ff ff ff    	mov    %eax,-0xdf(%ebp)
 82280c1:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 82280c8:	88 85 25 ff ff ff    	mov    %al,-0xdb(%ebp)
 82280ce:	a1 58 f7 41 09       	mov    0x941f758,%eax
 82280d3:	8d 95 ac fe ff ff    	lea    -0x154(%ebp),%edx
 82280d9:	83 c2 3f             	add    $0x3f,%edx
 82280dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 82280e0:	8d 95 ac fe ff ff    	lea    -0x154(%ebp),%edx
 82280e6:	83 c2 02             	add    $0x2,%edx
 82280e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 82280ed:	89 04 24             	mov    %eax,(%esp)
 82280f0:	e8 15 c9 ec ff       	call   80f4a0a <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_>
 82280f5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82280f8:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 82280fc:	74 14                	je     8228112 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x312>
 82280fe:	8b 85 b3 fe ff ff    	mov    -0x14d(%ebp),%eax
 8228104:	85 c0                	test   %eax,%eax
 8228106:	7e 0a                	jle    8228112 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x312>
 8228108:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 822810e:	85 c0                	test   %eax,%eax
 8228110:	7f 25                	jg     8228137 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x337>
 8228112:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8228119:	00 
 822811a:	c7 44 24 04 69 01 00 	movl   $0x169,0x4(%esp)
 8228121:	00 
 8228122:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228125:	89 04 24             	mov    %eax,(%esp)
 8228128:	e8 15 3e 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822812d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8228132:	e9 ea 08 00 00       	jmp    8228a21 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xc21>
 8228137:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 822813b:	0f b7 d8             	movzwl %ax,%ebx
 822813e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228141:	89 04 24             	mov    %eax,(%esp)
 8228144:	e8 35 21 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8228149:	8d 95 63 ff ff ff    	lea    -0x9d(%ebp),%edx
 822814f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8228153:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 822815a:	00 
 822815b:	89 44 24 04          	mov    %eax,0x4(%esp)
 822815f:	89 14 24             	mov    %edx,(%esp)
 8228162:	e8 b1 37 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8228167:	83 ec 04             	sub    $0x4,%esp
 822816a:	a1 58 f7 41 09       	mov    0x941f758,%eax
 822816f:	8d 95 63 ff ff ff    	lea    -0x9d(%ebp),%edx
 8228175:	89 54 24 04          	mov    %edx,0x4(%esp)
 8228179:	89 04 24             	mov    %eax,(%esp)
 822817c:	e8 2f ca ec ff       	call   80f4bb0 <_ZNK17Event_Upgrade_Jar20check_requiredRecipeERK10Inven_Item>
 8228181:	83 f0 01             	xor    $0x1,%eax
 8228184:	84 c0                	test   %al,%al
 8228186:	74 0a                	je     8228192 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x392>
 8228188:	bb 00 00 00 00       	mov    $0x0,%ebx
 822818d:	e9 8f 08 00 00       	jmp    8228a21 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xc21>
 8228192:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8228195:	e8 01 40 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 822819a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822819e:	89 04 24             	mov    %eax,(%esp)
 82281a1:	e8 8c 78 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82281a6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82281a9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82281ad:	74 17                	je     82281c6 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x3c6>
 82281af:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82281b2:	8b 00                	mov    (%eax),%eax
 82281b4:	83 c0 0c             	add    $0xc,%eax
 82281b7:	8b 10                	mov    (%eax),%edx
 82281b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82281bc:	89 04 24             	mov    %eax,(%esp)
 82281bf:	ff d2                	call   *%edx
 82281c1:	83 f8 0f             	cmp    $0xf,%eax
 82281c4:	74 07                	je     82281cd <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x3cd>
 82281c6:	b8 01 00 00 00       	mov    $0x1,%eax
 82281cb:	eb 05                	jmp    82281d2 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x3d2>
 82281cd:	b8 00 00 00 00       	mov    $0x0,%eax
 82281d2:	84 c0                	test   %al,%al
 82281d4:	74 0a                	je     82281e0 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x3e0>
 82281d6:	bb 00 00 00 00       	mov    $0x0,%ebx
 82281db:	e9 41 08 00 00       	jmp    8228a21 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xc21>
 82281e0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82281e3:	89 04 24             	mov    %eax,(%esp)
 82281e6:	e8 bd 98 ee ff       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 82281eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82281ee:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 82281f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82281f5:	89 04 24             	mov    %eax,(%esp)
 82281f8:	e8 61 75 2e 00       	call   850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>
 82281fd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8228200:	89 04 24             	mov    %eax,(%esp)
 8228203:	e8 44 5b 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8228208:	c7 44 24 08 69 01 00 	movl   $0x169,0x8(%esp)
 822820f:	00 
 8228210:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8228217:	00 
 8228218:	8d 45 b8             	lea    -0x48(%ebp),%eax
 822821b:	89 04 24             	mov    %eax,(%esp)
 822821e:	e8 d9 36 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8228223:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8228226:	89 04 24             	mov    %eax,(%esp)
 8228229:	e8 7e 5f e6 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 822822e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8228231:	89 04 24             	mov    %eax,(%esp)
 8228234:	e8 ed f7 00 00       	call   8237a26 <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5emptyEv>
 8228239:	84 c0                	test   %al,%al
 822823b:	75 10                	jne    822824d <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822823d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8228240:	89 04 24             	mov    %eax,(%esp)
 8228243:	e8 22 f8 00 00       	call   8237a6a <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE4sizeEv>
 8228248:	83 f8 01             	cmp    $0x1,%eax
 822824b:	76 07                	jbe    8228254 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x454>
 822824d:	b8 01 00 00 00       	mov    $0x1,%eax
 8228252:	eb 05                	jmp    8228259 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x459>
 8228254:	b8 00 00 00 00       	mov    $0x0,%eax
 8228259:	84 c0                	test   %al,%al
 822825b:	74 2b                	je     8228288 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x488>
 822825d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8228264:	00 
 8228265:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8228268:	89 04 24             	mov    %eax,(%esp)
 822826b:	e8 b0 36 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8228270:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 8228277:	00 
 8228278:	8d 45 b8             	lea    -0x48(%ebp),%eax
 822827b:	89 04 24             	mov    %eax,(%esp)
 822827e:	e8 9d 36 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8228283:	e9 8c 06 00 00       	jmp    8228914 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xb14>
 8228288:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 822828c:	0f b7 d8             	movzwl %ax,%ebx
 822828f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228292:	89 04 24             	mov    %eax,(%esp)
 8228295:	e8 f4 1f eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 822829a:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 82282a1:	00 
 82282a2:	c7 44 24 10 29 00 00 	movl   $0x29,0x10(%esp)
 82282a9:	00 
 82282aa:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82282b1:	00 
 82282b2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82282b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82282bd:	00 
 82282be:	89 04 24             	mov    %eax,(%esp)
 82282c1:	e8 46 bd 2d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 82282c6:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 82282ca:	0f b7 d8             	movzwl %ax,%ebx
 82282cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82282d0:	89 04 24             	mov    %eax,(%esp)
 82282d3:	e8 b6 1f eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82282d8:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 82282df:	00 
 82282e0:	c7 44 24 10 29 00 00 	movl   $0x29,0x10(%esp)
 82282e7:	00 
 82282e8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82282ef:	00 
 82282f0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82282f4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82282fb:	00 
 82282fc:	89 04 24             	mov    %eax,(%esp)
 82282ff:	e8 08 bd 2d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8228304:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8228308:	0f b7 d8             	movzwl %ax,%ebx
 822830b:	8b 45 0c             	mov    0xc(%ebp),%eax
 822830e:	89 04 24             	mov    %eax,(%esp)
 8228311:	e8 78 1f eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8228316:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 822831d:	00 
 822831e:	c7 44 24 10 29 00 00 	movl   $0x29,0x10(%esp)
 8228325:	00 
 8228326:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 822832d:	00 
 822832e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8228332:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8228339:	00 
 822833a:	89 04 24             	mov    %eax,(%esp)
 822833d:	e8 ca bc 2d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8228342:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 8228346:	0f b7 d8             	movzwl %ax,%ebx
 8228349:	8b 45 0c             	mov    0xc(%ebp),%eax
 822834c:	89 04 24             	mov    %eax,(%esp)
 822834f:	e8 2a 1f eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8228354:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 822835a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 822835e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8228365:	00 
 8228366:	89 44 24 04          	mov    %eax,0x4(%esp)
 822836a:	89 14 24             	mov    %edx,(%esp)
 822836d:	e8 a6 35 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8228372:	83 ec 04             	sub    $0x4,%esp
 8228375:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 822837b:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 8228381:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8228387:	89 85 67 ff ff ff    	mov    %eax,-0x99(%ebp)
 822838d:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 8228393:	89 85 6b ff ff ff    	mov    %eax,-0x95(%ebp)
 8228399:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 822839f:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 82283a5:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 82283ab:	89 85 73 ff ff ff    	mov    %eax,-0x8d(%ebp)
 82283b1:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 82283b7:	89 85 77 ff ff ff    	mov    %eax,-0x89(%ebp)
 82283bd:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 82283c3:	89 85 7b ff ff ff    	mov    %eax,-0x85(%ebp)
 82283c9:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 82283cf:	89 85 7f ff ff ff    	mov    %eax,-0x81(%ebp)
 82283d5:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 82283db:	89 45 83             	mov    %eax,-0x7d(%ebp)
 82283de:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 82283e4:	89 45 87             	mov    %eax,-0x79(%ebp)
 82283e7:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 82283ed:	89 45 8b             	mov    %eax,-0x75(%ebp)
 82283f0:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 82283f6:	89 45 8f             	mov    %eax,-0x71(%ebp)
 82283f9:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 82283ff:	89 45 93             	mov    %eax,-0x6d(%ebp)
 8228402:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8228408:	89 45 97             	mov    %eax,-0x69(%ebp)
 822840b:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8228411:	89 45 9b             	mov    %eax,-0x65(%ebp)
 8228414:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 822841b:	88 45 9f             	mov    %al,-0x61(%ebp)
 822841e:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 8228422:	0f b7 d8             	movzwl %ax,%ebx
 8228425:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228428:	89 04 24             	mov    %eax,(%esp)
 822842b:	e8 4e 1e eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8228430:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 8228436:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 822843a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8228441:	00 
 8228442:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228446:	89 14 24             	mov    %edx,(%esp)
 8228449:	e8 ca 34 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 822844e:	83 ec 04             	sub    $0x4,%esp
 8228451:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 8228457:	89 85 ac fe ff ff    	mov    %eax,-0x154(%ebp)
 822845d:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8228463:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 8228469:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 822846f:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 8228475:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 822847b:	89 85 b8 fe ff ff    	mov    %eax,-0x148(%ebp)
 8228481:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 8228487:	89 85 bc fe ff ff    	mov    %eax,-0x144(%ebp)
 822848d:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 8228493:	89 85 c0 fe ff ff    	mov    %eax,-0x140(%ebp)
 8228499:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 822849f:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 82284a5:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 82284ab:	89 85 c8 fe ff ff    	mov    %eax,-0x138(%ebp)
 82284b1:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 82284b7:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 82284bd:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 82284c3:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 82284c9:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 82284cf:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 82284d5:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 82284db:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 82284e1:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 82284e7:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 82284ed:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 82284f3:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 82284f9:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 82284ff:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 8228505:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 822850c:	88 85 e8 fe ff ff    	mov    %al,-0x118(%ebp)
 8228512:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8228516:	0f b7 d8             	movzwl %ax,%ebx
 8228519:	8b 45 0c             	mov    0xc(%ebp),%eax
 822851c:	89 04 24             	mov    %eax,(%esp)
 822851f:	e8 5a 1d eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8228524:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 822852a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 822852e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8228535:	00 
 8228536:	89 44 24 04          	mov    %eax,0x4(%esp)
 822853a:	89 14 24             	mov    %edx,(%esp)
 822853d:	e8 d6 33 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8228542:	83 ec 04             	sub    $0x4,%esp
 8228545:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 822854b:	89 85 e9 fe ff ff    	mov    %eax,-0x117(%ebp)
 8228551:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8228557:	89 85 ed fe ff ff    	mov    %eax,-0x113(%ebp)
 822855d:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 8228563:	89 85 f1 fe ff ff    	mov    %eax,-0x10f(%ebp)
 8228569:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 822856f:	89 85 f5 fe ff ff    	mov    %eax,-0x10b(%ebp)
 8228575:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 822857b:	89 85 f9 fe ff ff    	mov    %eax,-0x107(%ebp)
 8228581:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 8228587:	89 85 fd fe ff ff    	mov    %eax,-0x103(%ebp)
 822858d:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 8228593:	89 85 01 ff ff ff    	mov    %eax,-0xff(%ebp)
 8228599:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 822859f:	89 85 05 ff ff ff    	mov    %eax,-0xfb(%ebp)
 82285a5:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 82285ab:	89 85 09 ff ff ff    	mov    %eax,-0xf7(%ebp)
 82285b1:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 82285b7:	89 85 0d ff ff ff    	mov    %eax,-0xf3(%ebp)
 82285bd:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 82285c3:	89 85 11 ff ff ff    	mov    %eax,-0xef(%ebp)
 82285c9:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 82285cf:	89 85 15 ff ff ff    	mov    %eax,-0xeb(%ebp)
 82285d5:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 82285db:	89 85 19 ff ff ff    	mov    %eax,-0xe7(%ebp)
 82285e1:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 82285e7:	89 85 1d ff ff ff    	mov    %eax,-0xe3(%ebp)
 82285ed:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 82285f3:	89 85 21 ff ff ff    	mov    %eax,-0xdf(%ebp)
 82285f9:	0f b6 85 a4 fe ff ff 	movzbl -0x15c(%ebp),%eax
 8228600:	88 85 25 ff ff ff    	mov    %al,-0xdb(%ebp)
 8228606:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822860d:	00 
 822860e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8228611:	89 04 24             	mov    %eax,(%esp)
 8228614:	e8 07 33 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8228619:	8b 95 6a ff ff ff    	mov    -0x96(%ebp),%edx
 822861f:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 8228623:	0f b7 c0             	movzwl %ax,%eax
 8228626:	89 54 24 0c          	mov    %edx,0xc(%esp)
 822862a:	89 44 24 08          	mov    %eax,0x8(%esp)
 822862e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8228631:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228635:	8b 45 08             	mov    0x8(%ebp),%eax
 8228638:	89 04 24             	mov    %eax,(%esp)
 822863b:	e8 ee 03 00 00       	call   8228a2e <_ZNK42Dispatcher_Compound_Equipment_Upgrade_Card20set_ReturnSendPacketER11PacketGuardti>
 8228640:	8b 95 b3 fe ff ff    	mov    -0x14d(%ebp),%edx
 8228646:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 822864a:	0f b7 c0             	movzwl %ax,%eax
 822864d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8228651:	89 44 24 08          	mov    %eax,0x8(%esp)
 8228655:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8228658:	89 44 24 04          	mov    %eax,0x4(%esp)
 822865c:	8b 45 08             	mov    0x8(%ebp),%eax
 822865f:	89 04 24             	mov    %eax,(%esp)
 8228662:	e8 c7 03 00 00       	call   8228a2e <_ZNK42Dispatcher_Compound_Equipment_Upgrade_Card20set_ReturnSendPacketER11PacketGuardti>
 8228667:	8b 95 f0 fe ff ff    	mov    -0x110(%ebp),%edx
 822866d:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8228671:	0f b7 c0             	movzwl %ax,%eax
 8228674:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8228678:	89 44 24 08          	mov    %eax,0x8(%esp)
 822867c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 822867f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228683:	8b 45 08             	mov    0x8(%ebp),%eax
 8228686:	89 04 24             	mov    %eax,(%esp)
 8228689:	e8 a0 03 00 00       	call   8228a2e <_ZNK42Dispatcher_Compound_Equipment_Upgrade_Card20set_ReturnSendPacketER11PacketGuardti>
 822868e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8228691:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8228694:	89 54 24 04          	mov    %edx,0x4(%esp)
 8228698:	89 04 24             	mov    %eax,(%esp)
 822869b:	e8 7a 94 ee ff       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 82286a0:	83 ec 04             	sub    $0x4,%esp
 82286a3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82286a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82286aa:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82286ad:	89 04 24             	mov    %eax,(%esp)
 82286b0:	e8 89 94 ee ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 82286b5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82286b8:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 82286bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82286bf:	89 04 24             	mov    %eax,(%esp)
 82286c2:	e8 91 94 ee ff       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 82286c7:	83 ec 04             	sub    $0x4,%esp
 82286ca:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82286cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82286d1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82286d4:	89 04 24             	mov    %eax,(%esp)
 82286d7:	e8 62 94 ee ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 82286dc:	e9 19 02 00 00       	jmp    82288fa <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xafa>
 82286e1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82286e4:	89 04 24             	mov    %eax,(%esp)
 82286e7:	e8 d4 94 ee ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 82286ec:	8b 00                	mov    (%eax),%eax
 82286ee:	89 c3                	mov    %eax,%ebx
 82286f0:	e8 a6 3a ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 82286f5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82286f9:	89 04 24             	mov    %eax,(%esp)
 82286fc:	e8 31 73 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8228701:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8228704:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8228708:	0f 84 e0 01 00 00    	je     82288ee <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xaee>
 822870e:	8d 85 26 ff ff ff    	lea    -0xda(%ebp),%eax
 8228714:	89 04 24             	mov    %eax,(%esp)
 8228717:	e8 38 31 ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 822871c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 822871f:	89 04 24             	mov    %eax,(%esp)
 8228722:	e8 99 94 ee ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8228727:	8b 00                	mov    (%eax),%eax
 8228729:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 822872f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8228732:	8b 00                	mov    (%eax),%eax
 8228734:	83 c0 08             	add    $0x8,%eax
 8228737:	8b 10                	mov    (%eax),%edx
 8228739:	8d 85 26 ff ff ff    	lea    -0xda(%ebp),%eax
 822873f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228743:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8228746:	89 04 24             	mov    %eax,(%esp)
 8228749:	ff d2                	call   *%edx
 822874b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 822874e:	89 04 24             	mov    %eax,(%esp)
 8228751:	e8 6a 94 ee ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8228756:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 822875a:	0f b7 c0             	movzwl %ax,%eax
 822875d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228761:	8d 85 26 ff ff ff    	lea    -0xda(%ebp),%eax
 8228767:	89 04 24             	mov    %eax,(%esp)
 822876a:	e8 15 31 ea ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 822876f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228772:	89 04 24             	mov    %eax,(%esp)
 8228775:	e8 14 1b eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 822877a:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8228781:	00 
 8228782:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8228789:	00 
 822878a:	c7 44 24 44 2b 00 00 	movl   $0x2b,0x44(%esp)
 8228791:	00 
 8228792:	8b 95 26 ff ff ff    	mov    -0xda(%ebp),%edx
 8228798:	89 54 24 04          	mov    %edx,0x4(%esp)
 822879c:	8b 95 2a ff ff ff    	mov    -0xd6(%ebp),%edx
 82287a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 82287a6:	8b 95 2e ff ff ff    	mov    -0xd2(%ebp),%edx
 82287ac:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82287b0:	8b 95 32 ff ff ff    	mov    -0xce(%ebp),%edx
 82287b6:	89 54 24 10          	mov    %edx,0x10(%esp)
 82287ba:	8b 95 36 ff ff ff    	mov    -0xca(%ebp),%edx
 82287c0:	89 54 24 14          	mov    %edx,0x14(%esp)
 82287c4:	8b 95 3a ff ff ff    	mov    -0xc6(%ebp),%edx
 82287ca:	89 54 24 18          	mov    %edx,0x18(%esp)
 82287ce:	8b 95 3e ff ff ff    	mov    -0xc2(%ebp),%edx
 82287d4:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 82287d8:	8b 95 42 ff ff ff    	mov    -0xbe(%ebp),%edx
 82287de:	89 54 24 20          	mov    %edx,0x20(%esp)
 82287e2:	8b 95 46 ff ff ff    	mov    -0xba(%ebp),%edx
 82287e8:	89 54 24 24          	mov    %edx,0x24(%esp)
 82287ec:	8b 95 4a ff ff ff    	mov    -0xb6(%ebp),%edx
 82287f2:	89 54 24 28          	mov    %edx,0x28(%esp)
 82287f6:	8b 95 4e ff ff ff    	mov    -0xb2(%ebp),%edx
 82287fc:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8228800:	8b 95 52 ff ff ff    	mov    -0xae(%ebp),%edx
 8228806:	89 54 24 30          	mov    %edx,0x30(%esp)
 822880a:	8b 95 56 ff ff ff    	mov    -0xaa(%ebp),%edx
 8228810:	89 54 24 34          	mov    %edx,0x34(%esp)
 8228814:	8b 95 5a ff ff ff    	mov    -0xa6(%ebp),%edx
 822881a:	89 54 24 38          	mov    %edx,0x38(%esp)
 822881e:	8b 95 5e ff ff ff    	mov    -0xa2(%ebp),%edx
 8228824:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8228828:	0f b6 95 62 ff ff ff 	movzbl -0x9e(%ebp),%edx
 822882f:	88 54 24 40          	mov    %dl,0x40(%esp)
 8228833:	89 04 24             	mov    %eax,(%esp)
 8228836:	e8 4b a5 2d 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 822883b:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 822883f:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 8228843:	f7 d0                	not    %eax
 8228845:	66 c1 e8 0f          	shr    $0xf,%ax
 8228849:	84 c0                	test   %al,%al
 822884b:	74 1b                	je     8228868 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xa68>
 822884d:	0f bf 45 f6          	movswl -0xa(%ebp),%eax
 8228851:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8228854:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8228857:	89 44 24 04          	mov    %eax,0x4(%esp)
 822885b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 822885e:	89 04 24             	mov    %eax,(%esp)
 8228861:	e8 88 59 e6 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8228866:	eb 6f                	jmp    82288d7 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xad7>
 8228868:	8b 45 0c             	mov    0xc(%ebp),%eax
 822886b:	89 04 24             	mov    %eax,(%esp)
 822886e:	e8 1d 34 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8228873:	89 c6                	mov    %eax,%esi
 8228875:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228878:	89 04 24             	mov    %eax,(%esp)
 822887b:	e8 ce 33 ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8228880:	89 c3                	mov    %eax,%ebx
 8228882:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228885:	89 04 24             	mov    %eax,(%esp)
 8228888:	e8 9b 87 ed ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 822888d:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8228894:	00 
 8228895:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 822889c:	00 
 822889d:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 82288a1:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 82288a8:	00 
 82288a9:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82288b0:	00 
 82288b1:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82288b8:	00 
 82288b9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82288bd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82288c4:	00 
 82288c5:	8d 95 26 ff ff ff    	lea    -0xda(%ebp),%edx
 82288cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 82288cf:	89 04 24             	mov    %eax,(%esp)
 82288d2:	e8 11 cd 32 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 82288d7:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 82288dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82288e1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82288e4:	89 04 24             	mov    %eax,(%esp)
 82288e7:	e8 a8 2e 00 00       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 82288ec:	eb 01                	jmp    82288ef <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xaef>
 82288ee:	90                   	nop
 82288ef:	8d 45 a8             	lea    -0x58(%ebp),%eax
 82288f2:	89 04 24             	mov    %eax,(%esp)
 82288f5:	e8 b0 92 ee ff       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 82288fa:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 82288fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8228901:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8228904:	89 04 24             	mov    %eax,(%esp)
 8228907:	e8 21 f3 00 00       	call   8237c2d <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 822890c:	84 c0                	test   %al,%al
 822890e:	0f 85 cd fd ff ff    	jne    82286e1 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0x8e1>
 8228914:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822891b:	00 
 822891c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 822891f:	89 04 24             	mov    %eax,(%esp)
 8228922:	e8 31 30 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8228927:	8d 45 b8             	lea    -0x48(%ebp),%eax
 822892a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822892e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228931:	89 04 24             	mov    %eax,(%esp)
 8228934:	e8 81 fc 41 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8228939:	8d 45 a0             	lea    -0x60(%ebp),%eax
 822893c:	8d 55 ac             	lea    -0x54(%ebp),%edx
 822893f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8228943:	89 04 24             	mov    %eax,(%esp)
 8228946:	e8 fd 58 e6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 822894b:	83 ec 04             	sub    $0x4,%esp
 822894e:	eb 37                	jmp    8228987 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xb87>
 8228950:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8228953:	89 04 24             	mov    %eax,(%esp)
 8228956:	e8 71 5e e6 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 822895b:	8b 00                	mov    (%eax),%eax
 822895d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8228961:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8228968:	00 
 8228969:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8228970:	00 
 8228971:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228974:	89 04 24             	mov    %eax,(%esp)
 8228977:	e8 5c 39 45 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 822897c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 822897f:	89 04 24             	mov    %eax,(%esp)
 8228982:	e8 05 20 ec ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 8228987:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 822898a:	8d 55 ac             	lea    -0x54(%ebp),%edx
 822898d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8228991:	89 04 24             	mov    %eax,(%esp)
 8228994:	e8 d3 58 e6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8228999:	83 ec 04             	sub    $0x4,%esp
 822899c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 822899f:	89 44 24 04          	mov    %eax,0x4(%esp)
 82289a3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82289a6:	89 04 24             	mov    %eax,(%esp)
 82289a9:	e8 b4 1a ec ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 82289ae:	84 c0                	test   %al,%al
 82289b0:	75 9e                	jne    8228950 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xb50>
 82289b2:	bb 00 00 00 00       	mov    $0x0,%ebx
 82289b7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82289ba:	89 04 24             	mov    %eax,(%esp)
 82289bd:	e8 18 b4 e5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 82289c2:	eb 2a                	jmp    82289ee <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xbee>
 82289c4:	89 d3                	mov    %edx,%ebx
 82289c6:	89 c6                	mov    %eax,%esi
 82289c8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82289cb:	89 04 24             	mov    %eax,(%esp)
 82289ce:	e8 07 b4 e5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 82289d3:	89 f0                	mov    %esi,%eax
 82289d5:	89 da                	mov    %ebx,%edx
 82289d7:	eb 00                	jmp    82289d9 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xbd9>
 82289d9:	89 d3                	mov    %edx,%ebx
 82289db:	89 c6                	mov    %eax,%esi
 82289dd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82289e0:	89 04 24             	mov    %eax,(%esp)
 82289e3:	e8 98 54 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82289e8:	89 f0                	mov    %esi,%eax
 82289ea:	89 da                	mov    %ebx,%edx
 82289ec:	eb 0d                	jmp    82289fb <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xbfb>
 82289ee:	8d 45 b8             	lea    -0x48(%ebp),%eax
 82289f1:	89 04 24             	mov    %eax,(%esp)
 82289f4:	e8 87 54 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82289f9:	eb 1b                	jmp    8228a16 <_ZN42Dispatcher_Compound_Equipment_Upgrade_Card12dispatch_sigEP5CUserR9PacketBuf+0xc16>
 82289fb:	89 d3                	mov    %edx,%ebx
 82289fd:	89 c6                	mov    %eax,%esi
 82289ff:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8228a02:	89 04 24             	mov    %eax,(%esp)
 8228a05:	e8 b2 90 ee ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 8228a0a:	89 f0                	mov    %esi,%eax
 8228a0c:	89 da                	mov    %ebx,%edx
 8228a0e:	89 04 24             	mov    %eax,(%esp)
 8228a11:	e8 3a ad 8b 00       	call   8ae3750 <_Unwind_Resume>
 8228a16:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8228a19:	89 04 24             	mov    %eax,(%esp)
 8228a1c:	e8 9b 90 ee ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 8228a21:	89 d8                	mov    %ebx,%eax
 8228a23:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8228a26:	83 c4 00             	add    $0x0,%esp
 8228a29:	5b                   	pop    %ebx
 8228a2a:	5e                   	pop    %esi
 8228a2b:	5d                   	pop    %ebp
 8228a2c:	c3                   	ret
 8228a2d:	90                   	nop

```

```c
// Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig @ 0x8227e00

/* Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig
          (Dispatcher_Compound_Equipment_Upgrade_Card *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  GameWorld *this_00;
  undefined4 uVar5;
  CDataManager *pCVar6;
  CInventory *pCVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  Inven_Item *this_01;
  uint uVar12;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_11b;
  undefined4 local_117;
  undefined4 local_113;
  undefined4 local_10f;
  undefined4 local_10b;
  undefined4 local_107;
  undefined4 local_103;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined1 local_df;
  undefined2 local_de;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined4 local_d6;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined1 local_a2;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined1 local_65;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_64 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_60 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_5c [4];
  vector<int,std::allocator<int>> local_58 [12];
  PacketGuard local_4c [12];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_40 [14];
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  int local_24;
  __normal_iterator local_20 [4];
  int local_1c;
  CStackableItem *local_18;
  int *local_14;
  short local_e;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return 0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(this_00);
  if (iVar4 == 7) {
    uVar5 = LineFunc(0xe4c3,
                     "virtual int Dispatcher_Compound_Equipment_Upgrade_Card::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar5;
  }
  PacketBuf::get_short(param_2,&local_30);
  PacketBuf::get_short(param_2,&local_2e);
  PacketBuf::get_short(param_2,&local_32);
  this_01 = (Inven_Item *)local_158;
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
    Inven_Item::Inven_Item(this_01);
    this_01 = this_01 + 0x3d;
  }
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_19c,iVar4);
  local_158 = (undefined1  [4])local_19c;
  local_154 = local_198;
  local_150 = local_194;
  local_14c = local_190;
  local_148 = local_18c;
  local_144 = local_188;
  local_140 = local_184;
  local_13c = local_180;
  local_138 = local_17c;
  local_134 = local_178;
  local_130 = local_174;
  local_12c = local_170;
  local_128 = local_16c;
  local_124 = local_168;
  local_120 = local_164;
  local_11c = local_160;
  uVar12 = (uint)local_2e;
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_19c,iVar4);
  local_11b = local_19c;
  local_117 = local_198;
  local_113 = local_194;
  local_10f = local_190;
  local_10b = local_18c;
  local_107 = local_188;
  local_103 = local_184;
  local_ff = local_180;
  local_fb = local_17c;
  local_f7 = local_178;
  local_f3 = local_174;
  local_ef = local_170;
  local_eb = local_16c;
  local_e7 = local_168;
  local_e3 = local_164;
  local_df = local_160;
  local_1c = Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex
                       ((ulong *)GlobalData::s_pEvent_UpGrade_Jar,(ulong *)(local_158 + 2));
  if (local_1c != 0) {
    if (0 < CONCAT31((undefined3)local_150,local_154._3_1_)) {
      if (0 < CONCAT31((undefined3)local_113,local_117._3_1_)) {
        uVar12 = (uint)local_32;
        iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar5 = 1;
        CInventory::GetInvenSlot((int)&local_a1,iVar4);
        cVar2 = Event_Upgrade_Jar::check_requiredRecipe
                          (GlobalData::s_pEvent_UpGrade_Jar,(Inven_Item *)&local_a1);
        iVar4 = local_1c;
        if (cVar2 != '\x01') {
          return 0;
        }
        pCVar6 = (CDataManager *)G_CDataManager();
        local_18 = (CStackableItem *)CDataManager::find_item(pCVar6,iVar4);
        if ((local_18 == (CStackableItem *)0x0) ||
           (iVar4 = (**(code **)(*(int *)local_18 + 0xc))(local_18,iVar4,uVar5,uVar12), iVar4 != 0xf
           )) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) {
          std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
          vector(local_40);
                    /* try { // try from 082281f8 to 08228207 has its CatchHandler @ 082289fb */
          CStackableItem::getBoosterItem(local_18,(vector *)local_40);
          PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 0822821e to 0822822d has its CatchHandler @ 082289d9 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,1,0x169);
          std::vector<int,std::allocator<int>>::vector(local_58);
                    /* try { // try from 08228234 to 082289ad has its CatchHandler @ 082289c4 */
          cVar2 = std::
                  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                  ::empty();
          if ((cVar2 == '\0') &&
             (uVar12 = std::
                       vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                       ::size(local_40), uVar12 < 2)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          uVar1 = local_32;
          if (bVar3) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,0x13);
          }
          else {
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar7,1,uVar1,1,0x29,1);
            uVar1 = local_30;
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar7,1,uVar1,1,0x29,1);
            uVar1 = local_2e;
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar7,1,uVar1,1,0x29,1);
            iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)&local_19c,iVar4);
            local_a1 = local_19c;
            local_9d = local_198;
            local_99 = local_194;
            local_95 = local_190;
            local_91 = local_18c;
            local_8d = local_188;
            local_89 = local_184;
            local_85 = local_180;
            local_81 = local_17c;
            local_7d = local_178;
            local_79 = local_174;
            local_75 = local_170;
            local_71 = local_16c;
            local_6d = local_168;
            local_69 = local_164;
            local_65 = local_160;
            iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)&local_19c,iVar4);
            local_158 = (undefined1  [4])local_19c;
            local_154 = local_198;
            local_150 = local_194;
            local_14c = local_190;
            local_148 = local_18c;
            local_144 = local_188;
            local_140 = local_184;
            local_13c = local_180;
            local_138 = local_17c;
            local_134 = local_178;
            local_130 = local_174;
            local_12c = local_170;
            local_128 = local_16c;
            local_124 = local_168;
            local_120 = local_164;
            local_11c = local_160;
            iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            CInventory::GetInvenSlot((int)&local_19c,iVar4);
            local_11b = local_19c;
            local_117 = local_198;
            local_113 = local_194;
            local_10f = local_190;
            local_10b = local_18c;
            local_107 = local_188;
            local_103 = local_184;
            local_ff = local_180;
            local_fb = local_17c;
            local_f7 = local_178;
            local_f3 = local_174;
            local_ef = local_170;
            local_eb = local_16c;
            local_e7 = local_168;
            local_e3 = local_164;
            local_df = local_160;
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,1);
            set_ReturnSendPacket
                      (this,local_4c,local_32,CONCAT31((undefined3)local_99,local_9d._3_1_));
            set_ReturnSendPacket
                      (this,local_4c,local_30,CONCAT31((undefined3)local_150,local_154._3_1_));
            set_ReturnSendPacket
                      (this,local_4c,local_2e,CONCAT31((undefined3)local_113,local_117._3_1_));
            std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
            begin();
            __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_5c,local_2c);
            std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
            end();
            __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_60,local_28);
            while (bVar3 = __gnu_cxx::operator!=(local_5c,local_60), bVar3) {
              piVar8 = (int *)__gnu_cxx::
                              __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                              ::operator->(local_5c);
              iVar4 = *piVar8;
              pCVar6 = (CDataManager *)G_CDataManager();
              local_14 = (int *)CDataManager::find_item(pCVar6,iVar4);
              if (local_14 != (int *)0x0) {
                Inven_Item::Inven_Item((Inven_Item *)&local_de);
                puVar11 = (undefined4 *)
                          __gnu_cxx::
                          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                          ::operator->(local_5c);
                uStack_dc = (undefined2)*puVar11;
                uStack_da = (undefined2)((uint)*puVar11 >> 0x10);
                (**(code **)(*local_14 + 8))(local_14,&local_de);
                iVar4 = __gnu_cxx::
                        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                        ::operator->(local_5c);
                Inven_Item::set_add_info((Inven_Item *)&local_de,(uint)*(ushort *)(iVar4 + 8));
                uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                local_e = CInventory::insertItemIntoInventory
                                    (uVar5,CONCAT22(uStack_dc,local_de),
                                     CONCAT22(uStack_d8,uStack_da),local_d6,local_d2,local_ce,
                                     local_ca,local_c6,local_c2,local_be,local_ba,local_b6,local_b2,
                                     local_ae,local_aa,local_a6,local_a2,0x2b,1,1);
                if (local_e < 0) {
                  uVar5 = CUser::GetServerGroup(param_1);
                  uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                            (uVar10,&local_de,0,uVar9,0,0,0,uVar5,0,0);
                }
                else {
                  local_24 = (int)local_e;
                  std::vector<int,std::allocator<int>>::push_back(local_58,&local_24);
                }
                InterfacePacketBuf::put_item_idx
                          ((InterfacePacketBuf *)local_4c,CONCAT22(uStack_da,uStack_dc));
              }
              __gnu_cxx::
              __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
              ::operator++(local_5c);
            }
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
          CUser::Send(param_1,local_4c);
          std::vector<int,std::allocator<int>>::begin();
          while( true ) {
            std::vector<int,std::allocator<int>>::end();
            bVar3 = __gnu_cxx::operator!=(local_64,local_20);
            if (!bVar3) break;
            puVar11 = (undefined4 *)
                      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_64);
            CUser::SendUpdateItem(param_1,1,0,*puVar11);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_64);
          }
                    /* try { // try from 082289bd to 082289c1 has its CatchHandler @ 082289d9 */
          std::vector<int,std::allocator<int>>::~vector(local_58);
                    /* try { // try from 082289f4 to 082289f8 has its CatchHandler @ 082289fb */
          PacketGuard::~PacketGuard(local_4c);
          std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
          ~vector(local_40);
          return 0;
        }
        return 0;
      }
    }
  }
  CUser::SendCmdErrorPacket(param_1,0x169,0x13,uVar12);
  return 0;
}

```

---

## set_ReturnSendPacket

```asm
// === 08228a2e Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket  [0x08228a2e-0x8228a75] ===
 8228a2e:	55                   	push   %ebp
 8228a2f:	89 e5                	mov    %esp,%ebp
 8228a31:	83 ec 28             	sub    $0x28,%esp
 8228a34:	8b 45 10             	mov    0x10(%ebp),%eax
 8228a37:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8228a3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228a3e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8228a45:	00 
 8228a46:	89 04 24             	mov    %eax,(%esp)
 8228a49:	e8 d2 2e ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8228a4e:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8228a52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228a55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8228a59:	89 04 24             	mov    %eax,(%esp)
 8228a5c:	e8 43 14 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8228a61:	8b 45 0c             	mov    0xc(%ebp),%eax
 8228a64:	8b 55 14             	mov    0x14(%ebp),%edx
 8228a67:	89 54 24 04          	mov    %edx,0x4(%esp)
 8228a6b:	89 04 24             	mov    %eax,(%esp)
 8228a6e:	e8 c9 2e ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8228a73:	c9                   	leave
 8228a74:	c3                   	ret
 8228a75:	90                   	nop

```

```c
// Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket @ 0x8228a2e

/* Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket(PacketGuard&, unsigned short,
   int) const */

void __thiscall
Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket
          (Dispatcher_Compound_Equipment_Upgrade_Card *this,PacketGuard *param_1,ushort param_2,
          int param_3)

{
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_3);
  return;
}

```

