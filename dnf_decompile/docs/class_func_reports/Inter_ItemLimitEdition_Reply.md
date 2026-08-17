# Inter_ItemLimitEdition_Reply

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dbef0 Inter_ItemLimitEdition_Reply::dispatch_sig  [0x084dbef0-0x84dc979] ===
 84dbef0:	55                   	push   %ebp
 84dbef1:	89 e5                	mov    %esp,%ebp
 84dbef3:	57                   	push   %edi
 84dbef4:	56                   	push   %esi
 84dbef5:	53                   	push   %ebx
 84dbef6:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 84dbefc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dbeff:	89 04 24             	mov    %eax,(%esp)
 84dbf02:	e8 85 e4 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84dbf07:	83 f8 02             	cmp    $0x2,%eax
 84dbf0a:	0f 9e c0             	setle  %al
 84dbf0d:	84 c0                	test   %al,%al
 84dbf0f:	74 0a                	je     84dbf1b <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x2b>
 84dbf11:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dbf16:	e9 52 0a 00 00       	jmp    84dc96d <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0xa7d>
 84dbf1b:	8b 45 10             	mov    0x10(%ebp),%eax
 84dbf1e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84dbf21:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84dbf28:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84dbf2f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dbf32:	8b 70 12             	mov    0x12(%eax),%esi
 84dbf35:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dbf38:	8b 58 0e             	mov    0xe(%eax),%ebx
 84dbf3b:	e8 5b 02 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dbf40:	89 04 24             	mov    %eax,(%esp)
 84dbf43:	e8 5e e0 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84dbf48:	89 74 24 08          	mov    %esi,0x8(%esp)
 84dbf4c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dbf50:	89 04 24             	mov    %eax,(%esp)
 84dbf53:	e8 ac d9 00 00       	call   84e9904 <_ZN20CItemLimitEditionMgr10updateItemEjj>
 84dbf58:	83 f0 01             	xor    $0x1,%eax
 84dbf5b:	84 c0                	test   %al,%al
 84dbf5d:	74 2c                	je     84dbf8b <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x9b>
 84dbf5f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dbf66:	e8 95 98 24 00       	call   8725800 <__cxa_allocate_exception>
 84dbf6b:	89 c2                	mov    %eax,%edx
 84dbf6d:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 84dbf73:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dbf7a:	00 
 84dbf7b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dbf82:	08 
 84dbf83:	89 04 24             	mov    %eax,(%esp)
 84dbf86:	e8 c5 8c 24 00       	call   8724c50 <__cxa_throw>
 84dbf8b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dbf8e:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84dbf92:	0f b6 c0             	movzbl %al,%eax
 84dbf95:	83 f8 01             	cmp    $0x1,%eax
 84dbf98:	74 3b                	je     84dbfd5 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0xe5>
 84dbf9a:	83 f8 02             	cmp    $0x2,%eax
 84dbf9d:	74 0a                	je     84dbfa9 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0xb9>
 84dbf9f:	85 c0                	test   %eax,%eax
 84dbfa1:	0f 84 86 00 00 00    	je     84dc02d <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x13d>
 84dbfa7:	eb 58                	jmp    84dc001 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x111>
 84dbfa9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dbfb0:	e8 4b 98 24 00       	call   8725800 <__cxa_allocate_exception>
 84dbfb5:	89 c2                	mov    %eax,%edx
 84dbfb7:	c7 02 5f 00 00 00    	movl   $0x5f,(%edx)
 84dbfbd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dbfc4:	00 
 84dbfc5:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dbfcc:	08 
 84dbfcd:	89 04 24             	mov    %eax,(%esp)
 84dbfd0:	e8 7b 8c 24 00       	call   8724c50 <__cxa_throw>
 84dbfd5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dbfdc:	e8 1f 98 24 00       	call   8725800 <__cxa_allocate_exception>
 84dbfe1:	89 c2                	mov    %eax,%edx
 84dbfe3:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 84dbfe9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dbff0:	00 
 84dbff1:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dbff8:	08 
 84dbff9:	89 04 24             	mov    %eax,(%esp)
 84dbffc:	e8 4f 8c 24 00       	call   8724c50 <__cxa_throw>
 84dc001:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dc008:	e8 f3 97 24 00       	call   8725800 <__cxa_allocate_exception>
 84dc00d:	89 c2                	mov    %eax,%edx
 84dc00f:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 84dc015:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dc01c:	00 
 84dc01d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dc024:	08 
 84dc025:	89 04 24             	mov    %eax,(%esp)
 84dc028:	e8 23 8c 24 00       	call   8724c50 <__cxa_throw>
 84dc02d:	90                   	nop
 84dc02e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc031:	8b 58 0e             	mov    0xe(%eax),%ebx
 84dc034:	e8 62 01 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dc039:	89 04 24             	mov    %eax,(%esp)
 84dc03c:	e8 65 df c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84dc041:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dc045:	89 04 24             	mov    %eax,(%esp)
 84dc048:	e8 5b e0 c9 ff       	call   817a0a8 <_ZNK20CItemLimitEditionMgr11getItemInfoEj>
 84dc04d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84dc050:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 84dc054:	0f 94 c0             	sete   %al
 84dc057:	84 c0                	test   %al,%al
 84dc059:	74 2c                	je     84dc087 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x197>
 84dc05b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dc062:	e8 99 97 24 00       	call   8725800 <__cxa_allocate_exception>
 84dc067:	89 c2                	mov    %eax,%edx
 84dc069:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 84dc06f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dc076:	00 
 84dc077:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dc07e:	08 
 84dc07f:	89 04 24             	mov    %eax,(%esp)
 84dc082:	e8 c9 8b 24 00       	call   8724c50 <__cxa_throw>
 84dc087:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc08a:	89 04 24             	mov    %eax,(%esp)
 84dc08d:	e8 36 0a d5 ff       	call   822cac8 <_ZNK17CItemLimitEdition14isSellCompleteEv>
 84dc092:	84 c0                	test   %al,%al
 84dc094:	0f 84 aa 00 00 00    	je     84dc144 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x254>
 84dc09a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84dc09d:	89 04 24             	mov    %eax,(%esp)
 84dc0a0:	e8 a7 1c 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dc0a5:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 84dc0ac:	00 
 84dc0ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dc0b4:	00 
 84dc0b5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84dc0b8:	89 04 24             	mov    %eax,(%esp)
 84dc0bb:	e8 3c f8 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dc0c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dc0c7:	00 
 84dc0c8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84dc0cb:	89 04 24             	mov    %eax,(%esp)
 84dc0ce:	e8 4d f8 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dc0d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dc0da:	00 
 84dc0db:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84dc0de:	89 04 24             	mov    %eax,(%esp)
 84dc0e1:	e8 3a f8 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dc0e6:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84dc0e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc0ed:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc0f0:	89 04 24             	mov    %eax,(%esp)
 84dc0f3:	e8 f0 6f 03 00       	call   85130e8 <_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard>
 84dc0f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dc0ff:	00 
 84dc100:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84dc103:	89 04 24             	mov    %eax,(%esp)
 84dc106:	e8 4d f8 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dc10b:	e8 97 e2 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dc110:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84dc113:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dc117:	89 04 24             	mov    %eax,(%esp)
 84dc11a:	e8 f5 ca 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84dc11f:	eb 18                	jmp    84dc139 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x249>
 84dc121:	89 d3                	mov    %edx,%ebx
 84dc123:	89 c6                	mov    %eax,%esi
 84dc125:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84dc128:	89 04 24             	mov    %eax,(%esp)
 84dc12b:	e8 50 1d 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dc130:	89 f0                	mov    %esi,%eax
 84dc132:	89 da                	mov    %ebx,%edx
 84dc134:	e9 8e 01 00 00       	jmp    84dc2c7 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x3d7>
 84dc139:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84dc13c:	89 04 24             	mov    %eax,(%esp)
 84dc13f:	e8 3c 1d 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dc144:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc147:	89 04 24             	mov    %eax,(%esp)
 84dc14a:	e8 2b 1e c2 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 84dc14f:	89 c3                	mov    %eax,%ebx
 84dc151:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc154:	89 04 24             	mov    %eax,(%esp)
 84dc157:	e8 9e 09 d5 ff       	call   822cafa <_ZNK17CItemLimitEdition12getPriceCeraEv>
 84dc15c:	39 c3                	cmp    %eax,%ebx
 84dc15e:	0f 92 c0             	setb   %al
 84dc161:	84 c0                	test   %al,%al
 84dc163:	74 2c                	je     84dc191 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x2a1>
 84dc165:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dc16c:	e8 8f 96 24 00       	call   8725800 <__cxa_allocate_exception>
 84dc171:	89 c2                	mov    %eax,%edx
 84dc173:	c7 02 0b 00 00 00    	movl   $0xb,(%edx)
 84dc179:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dc180:	00 
 84dc181:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dc188:	08 
 84dc189:	89 04 24             	mov    %eax,(%esp)
 84dc18c:	e8 bf 8a 24 00       	call   8724c50 <__cxa_throw>
 84dc191:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc194:	89 04 24             	mov    %eax,(%esp)
 84dc197:	e8 e2 e0 bf ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84dc19c:	89 04 24             	mov    %eax,(%esp)
 84dc19f:	e8 32 86 c5 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 84dc1a4:	89 c3                	mov    %eax,%ebx
 84dc1a6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc1a9:	89 04 24             	mov    %eax,(%esp)
 84dc1ac:	e8 55 09 d5 ff       	call   822cb06 <_ZNK17CItemLimitEdition12getPriceGoldEv>
 84dc1b1:	39 c3                	cmp    %eax,%ebx
 84dc1b3:	0f 9c c0             	setl   %al
 84dc1b6:	84 c0                	test   %al,%al
 84dc1b8:	74 2c                	je     84dc1e6 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x2f6>
 84dc1ba:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dc1c1:	e8 3a 96 24 00       	call   8725800 <__cxa_allocate_exception>
 84dc1c6:	89 c2                	mov    %eax,%edx
 84dc1c8:	c7 02 0a 00 00 00    	movl   $0xa,(%edx)
 84dc1ce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dc1d5:	00 
 84dc1d6:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dc1dd:	08 
 84dc1de:	89 04 24             	mov    %eax,(%esp)
 84dc1e1:	e8 6a 8a 24 00       	call   8724c50 <__cxa_throw>
 84dc1e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc1e9:	89 04 24             	mov    %eax,(%esp)
 84dc1ec:	e8 8b df c9 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 84dc1f1:	89 c3                	mov    %eax,%ebx
 84dc1f3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc1f6:	89 04 24             	mov    %eax,(%esp)
 84dc1f9:	e8 14 09 d5 ff       	call   822cb12 <_ZNK17CItemLimitEdition16getPriceWinPointEv>
 84dc1fe:	39 c3                	cmp    %eax,%ebx
 84dc200:	0f 92 c0             	setb   %al
 84dc203:	84 c0                	test   %al,%al
 84dc205:	74 2c                	je     84dc233 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x343>
 84dc207:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dc20e:	e8 ed 95 24 00       	call   8725800 <__cxa_allocate_exception>
 84dc213:	89 c2                	mov    %eax,%edx
 84dc215:	c7 02 0c 00 00 00    	movl   $0xc,(%edx)
 84dc21b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dc222:	00 
 84dc223:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dc22a:	08 
 84dc22b:	89 04 24             	mov    %eax,(%esp)
 84dc22e:	e8 1d 8a 24 00       	call   8724c50 <__cxa_throw>
 84dc233:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc236:	89 04 24             	mov    %eax,(%esp)
 84dc239:	e8 52 de c9 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 84dc23e:	83 f8 01             	cmp    $0x1,%eax
 84dc241:	74 58                	je     84dc29b <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x3ab>
 84dc243:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc246:	89 04 24             	mov    %eax,(%esp)
 84dc249:	e8 42 de c9 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 84dc24e:	89 c3                	mov    %eax,%ebx
 84dc250:	e8 46 ff be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dc255:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dc259:	89 04 24             	mov    %eax,(%esp)
 84dc25c:	e8 d1 37 e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84dc261:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84dc264:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 84dc268:	0f 94 c0             	sete   %al
 84dc26b:	84 c0                	test   %al,%al
 84dc26d:	74 2d                	je     84dc29c <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x3ac>
 84dc26f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84dc276:	e8 85 95 24 00       	call   8725800 <__cxa_allocate_exception>
 84dc27b:	89 c2                	mov    %eax,%edx
 84dc27d:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 84dc283:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dc28a:	00 
 84dc28b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84dc292:	08 
 84dc293:	89 04 24             	mov    %eax,(%esp)
 84dc296:	e8 b5 89 24 00       	call   8724c50 <__cxa_throw>
 84dc29b:	90                   	nop
 84dc29c:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 84dc2a0:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 84dc2a7:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 84dc2ae:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc2b1:	89 04 24             	mov    %eax,(%esp)
 84dc2b4:	e8 e3 dd c9 ff       	call   817a09c <_ZNK17CItemLimitEdition14getFeaturedIdxEv>
 84dc2b9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84dc2bc:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 84dc2c0:	74 60                	je     84dc322 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x432>
 84dc2c2:	e9 99 00 00 00       	jmp    84dc360 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x470>
 84dc2c7:	83 fa 01             	cmp    $0x1,%edx
 84dc2ca:	74 08                	je     84dc2d4 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x3e4>
 84dc2cc:	89 04 24             	mov    %eax,(%esp)
 84dc2cf:	e8 7c 74 60 00       	call   8ae3750 <_Unwind_Resume>
 84dc2d4:	89 04 24             	mov    %eax,(%esp)
 84dc2d7:	e8 04 9a 24 00       	call   8725ce0 <__cxa_begin_catch>
 84dc2dc:	8b 00                	mov    (%eax),%eax
 84dc2de:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84dc2e1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84dc2e4:	0f b6 c0             	movzbl %al,%eax
 84dc2e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dc2eb:	c7 44 24 04 00 01 00 	movl   $0x100,0x4(%esp)
 84dc2f2:	00 
 84dc2f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc2f6:	89 04 24             	mov    %eax,(%esp)
 84dc2f9:	e8 44 fc 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84dc2fe:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dc303:	e8 28 99 24 00       	call   8725c30 <__cxa_end_catch>
 84dc308:	e9 60 06 00 00       	jmp    84dc96d <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0xa7d>
 84dc30d:	89 d3                	mov    %edx,%ebx
 84dc30f:	89 c6                	mov    %eax,%esi
 84dc311:	e8 1a 99 24 00       	call   8725c30 <__cxa_end_catch>
 84dc316:	89 f0                	mov    %esi,%eax
 84dc318:	89 da                	mov    %ebx,%edx
 84dc31a:	89 04 24             	mov    %eax,(%esp)
 84dc31d:	e8 2e 74 60 00       	call   8ae3750 <_Unwind_Resume>
 84dc322:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc325:	89 04 24             	mov    %eax,(%esp)
 84dc328:	e8 63 dd c9 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 84dc32d:	89 c2                	mov    %eax,%edx
 84dc32f:	a1 44 f7 41 09       	mov    0x941f744,%eax
 84dc334:	8d 4d c7             	lea    -0x39(%ebp),%ecx
 84dc337:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84dc33b:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 84dc33e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84dc342:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 84dc345:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84dc349:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dc34d:	89 04 24             	mov    %eax,(%esp)
 84dc350:	e8 c9 86 e4 ff       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 84dc355:	84 c0                	test   %al,%al
 84dc357:	74 07                	je     84dc360 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x470>
 84dc359:	b8 01 00 00 00       	mov    $0x1,%eax
 84dc35e:	eb 05                	jmp    84dc365 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x475>
 84dc360:	b8 00 00 00 00       	mov    $0x0,%eax
 84dc365:	84 c0                	test   %al,%al
 84dc367:	74 24                	je     84dc38d <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x49d>
 84dc369:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc36c:	89 04 24             	mov    %eax,(%esp)
 84dc36f:	e8 1c dd c9 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 84dc374:	89 c3                	mov    %eax,%ebx
 84dc376:	e8 20 fe be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dc37b:	8b 40 0c             	mov    0xc(%eax),%eax
 84dc37e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dc382:	89 04 24             	mov    %eax,(%esp)
 84dc385:	e8 82 dd c9 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 84dc38a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84dc38d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc390:	89 04 24             	mov    %eax,(%esp)
 84dc393:	e8 70 de c9 ff       	call   817a208 <_ZN5CUser13resetUsedCeraEv>
 84dc398:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84dc39d:	c7 44 24 08 d9 46 00 	movl   $0x46d9,0x8(%esp)
 84dc3a4:	00 
 84dc3a5:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84dc3ac:	08 
 84dc3ad:	89 04 24             	mov    %eax,(%esp)
 84dc3b0:	e8 d1 36 db ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84dc3b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dc3bc:	00 
 84dc3bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc3c1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dc3c4:	89 04 24             	mov    %eax,(%esp)
 84dc3c7:	e8 5a c8 be ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84dc3cc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dc3cf:	89 04 24             	mov    %eax,(%esp)
 84dc3d2:	e8 77 c8 be ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84dc3d7:	89 04 24             	mov    %eax,(%esp)
 84dc3da:	e8 2d e1 c9 ff       	call   817a50c <_ZN12CStreamGuard11GetInBufferI22stCeraShopIPGRequest_tEEPT_v>
 84dc3df:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84dc3e2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc3e5:	8b 50 0e             	mov    0xe(%eax),%edx
 84dc3e8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc3eb:	89 10                	mov    %edx,(%eax)
 84dc3ed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc3f0:	c7 40 04 0a 00 00 00 	movl   $0xa,0x4(%eax)
 84dc3f7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc3fa:	89 04 24             	mov    %eax,(%esp)
 84dc3fd:	e8 f8 06 d5 ff       	call   822cafa <_ZNK17CItemLimitEdition12getPriceCeraEv>
 84dc402:	89 c2                	mov    %eax,%edx
 84dc404:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc407:	89 50 10             	mov    %edx,0x10(%eax)
 84dc40a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc40d:	89 04 24             	mov    %eax,(%esp)
 84dc410:	e8 f1 06 d5 ff       	call   822cb06 <_ZNK17CItemLimitEdition12getPriceGoldEv>
 84dc415:	89 c2                	mov    %eax,%edx
 84dc417:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc41a:	89 50 18             	mov    %edx,0x18(%eax)
 84dc41d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc420:	89 04 24             	mov    %eax,(%esp)
 84dc423:	e8 ea 06 d5 ff       	call   822cb12 <_ZNK17CItemLimitEdition16getPriceWinPointEv>
 84dc428:	89 c2                	mov    %eax,%edx
 84dc42a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc42d:	89 50 14             	mov    %edx,0x14(%eax)
 84dc430:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc433:	89 04 24             	mov    %eax,(%esp)
 84dc436:	e8 55 dc c9 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 84dc43b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84dc43e:	89 42 08             	mov    %eax,0x8(%edx)
 84dc441:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc444:	89 04 24             	mov    %eax,(%esp)
 84dc447:	e8 4c 06 d5 ff       	call   822ca98 <_ZNK17CItemLimitEdition17getRelatedItemCntEv>
 84dc44c:	89 c2                	mov    %eax,%edx
 84dc44e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc451:	66 89 50 0c          	mov    %dx,0xc(%eax)
 84dc455:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc458:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 84dc45c:	89 c2                	mov    %eax,%edx
 84dc45e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc461:	88 50 2c             	mov    %dl,0x2c(%eax)
 84dc464:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc467:	89 04 24             	mov    %eax,(%esp)
 84dc46a:	e8 41 06 d5 ff       	call   822cab0 <_ZNK17CItemLimitEdition19getAvatarTypeSelectEv>
 84dc46f:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84dc472:	88 42 2d             	mov    %al,0x2d(%edx)
 84dc475:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc478:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 84dc47f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84dc482:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc485:	89 50 28             	mov    %edx,0x28(%eax)
 84dc488:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc48b:	c7 40 20 01 00 00 00 	movl   $0x1,0x20(%eax)
 84dc492:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc495:	c7 40 24 01 00 00 00 	movl   $0x1,0x24(%eax)
 84dc49c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84dc4a3:	e8 f6 f7 be ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84dc4a8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84dc4ab:	89 42 30             	mov    %eax,0x30(%edx)
 84dc4ae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc4b1:	c6 40 34 00          	movb   $0x0,0x34(%eax)
 84dc4b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc4b8:	89 04 24             	mov    %eax,(%esp)
 84dc4bb:	e8 ae de bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84dc4c0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84dc4c3:	89 42 40             	mov    %eax,0x40(%edx)
 84dc4c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc4c9:	89 04 24             	mov    %eax,(%esp)
 84dc4cc:	e8 7d f7 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84dc4d1:	89 c2                	mov    %eax,%edx
 84dc4d3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc4d6:	89 50 38             	mov    %edx,0x38(%eax)
 84dc4d9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc4dc:	0f b6 50 18          	movzbl 0x18(%eax),%edx
 84dc4e0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc4e3:	88 50 44             	mov    %dl,0x44(%eax)
 84dc4e6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84dc4ed:	eb 4a                	jmp    84dc539 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x649>
 84dc4ef:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84dc4f2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84dc4f5:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 84dc4f8:	89 d0                	mov    %edx,%eax
 84dc4fa:	c1 e0 02             	shl    $0x2,%eax
 84dc4fd:	01 d0                	add    %edx,%eax
 84dc4ff:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84dc502:	83 c0 10             	add    $0x10,%eax
 84dc505:	8b 50 09             	mov    0x9(%eax),%edx
 84dc508:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc50b:	83 c1 08             	add    $0x8,%ecx
 84dc50e:	89 54 c8 08          	mov    %edx,0x8(%eax,%ecx,8)
 84dc512:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84dc515:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84dc518:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 84dc51b:	89 d0                	mov    %edx,%eax
 84dc51d:	c1 e0 02             	shl    $0x2,%eax
 84dc520:	01 d0                	add    %edx,%eax
 84dc522:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84dc525:	83 c0 1d             	add    $0x1d,%eax
 84dc528:	0f b6 10             	movzbl (%eax),%edx
 84dc52b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc52e:	83 c1 08             	add    $0x8,%ecx
 84dc531:	88 54 c8 0c          	mov    %dl,0xc(%eax,%ecx,8)
 84dc535:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84dc539:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc53c:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 84dc540:	0f b6 c0             	movzbl %al,%eax
 84dc543:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84dc546:	0f 9f c0             	setg   %al
 84dc549:	84 c0                	test   %al,%al
 84dc54b:	75 a2                	jne    84dc4ef <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x5ff>
 84dc54d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc550:	0f b6 90 c8 00 00 00 	movzbl 0xc8(%eax),%edx
 84dc557:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc55a:	88 90 60 01 00 00    	mov    %dl,0x160(%eax)
 84dc560:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84dc567:	eb 56                	jmp    84dc5bf <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x6cf>
 84dc569:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84dc56c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dc56f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc572:	83 c2 18             	add    $0x18,%edx
 84dc575:	8b 54 d0 09          	mov    0x9(%eax,%edx,8),%edx
 84dc579:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc57c:	83 c1 2c             	add    $0x2c,%ecx
 84dc57f:	89 54 c8 04          	mov    %edx,0x4(%eax,%ecx,8)
 84dc583:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84dc586:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dc589:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc58c:	83 c2 18             	add    $0x18,%edx
 84dc58f:	0f b7 54 d0 0d       	movzwl 0xd(%eax,%edx,8),%edx
 84dc594:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc597:	83 c1 2c             	add    $0x2c,%ecx
 84dc59a:	66 89 54 c8 08       	mov    %dx,0x8(%eax,%ecx,8)
 84dc59f:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84dc5a2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84dc5a5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc5a8:	83 c2 18             	add    $0x18,%edx
 84dc5ab:	0f b7 54 d0 0f       	movzwl 0xf(%eax,%edx,8),%edx
 84dc5b0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc5b3:	83 c1 2c             	add    $0x2c,%ecx
 84dc5b6:	66 89 54 c8 0a       	mov    %dx,0xa(%eax,%ecx,8)
 84dc5bb:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84dc5bf:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc5c2:	0f b6 80 c8 00 00 00 	movzbl 0xc8(%eax),%eax
 84dc5c9:	0f b6 c0             	movzbl %al,%eax
 84dc5cc:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84dc5cf:	0f 9f c0             	setg   %al
 84dc5d2:	84 c0                	test   %al,%al
 84dc5d4:	75 93                	jne    84dc569 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x679>
 84dc5d6:	8d 9d 58 ff ff ff    	lea    -0xa8(%ebp),%ebx
 84dc5dc:	b8 00 00 00 00       	mov    $0x0,%eax
 84dc5e1:	ba 09 00 00 00       	mov    $0x9,%edx
 84dc5e6:	89 df                	mov    %ebx,%edi
 84dc5e8:	89 d1                	mov    %edx,%ecx
 84dc5ea:	f3 ab                	rep stos %eax,%es:(%edi)
 84dc5ec:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84dc5ef:	ba 15 00 00 00       	mov    $0x15,%edx
 84dc5f4:	b9 00 00 00 00       	mov    $0x0,%ecx
 84dc5f9:	89 c3                	mov    %eax,%ebx
 84dc5fb:	83 e3 01             	and    $0x1,%ebx
 84dc5fe:	85 db                	test   %ebx,%ebx
 84dc600:	74 08                	je     84dc60a <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x71a>
 84dc602:	88 08                	mov    %cl,(%eax)
 84dc604:	83 c0 01             	add    $0x1,%eax
 84dc607:	83 ea 01             	sub    $0x1,%edx
 84dc60a:	89 c3                	mov    %eax,%ebx
 84dc60c:	83 e3 02             	and    $0x2,%ebx
 84dc60f:	85 db                	test   %ebx,%ebx
 84dc611:	74 09                	je     84dc61c <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x72c>
 84dc613:	66 89 08             	mov    %cx,(%eax)
 84dc616:	83 c0 02             	add    $0x2,%eax
 84dc619:	83 ea 02             	sub    $0x2,%edx
 84dc61c:	89 d6                	mov    %edx,%esi
 84dc61e:	83 e6 fc             	and    $0xfffffffc,%esi
 84dc621:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dc626:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 84dc629:	83 c3 04             	add    $0x4,%ebx
 84dc62c:	39 f3                	cmp    %esi,%ebx
 84dc62e:	72 f6                	jb     84dc626 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x736>
 84dc630:	01 d8                	add    %ebx,%eax
 84dc632:	89 d3                	mov    %edx,%ebx
 84dc634:	83 e3 02             	and    $0x2,%ebx
 84dc637:	85 db                	test   %ebx,%ebx
 84dc639:	74 06                	je     84dc641 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x751>
 84dc63b:	66 89 08             	mov    %cx,(%eax)
 84dc63e:	83 c0 02             	add    $0x2,%eax
 84dc641:	83 e2 01             	and    $0x1,%edx
 84dc644:	85 d2                	test   %edx,%edx
 84dc646:	74 05                	je     84dc64d <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x75d>
 84dc648:	88 08                	mov    %cl,(%eax)
 84dc64a:	83 c0 01             	add    $0x1,%eax
 84dc64d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc650:	89 04 24             	mov    %eax,(%esp)
 84dc653:	e8 a2 04 d5 ff       	call   822cafa <_ZNK17CItemLimitEdition12getPriceCeraEv>
 84dc658:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84dc65c:	c7 44 24 08 c7 98 c8 	movl   $0x8c898c7,0x8(%esp)
 84dc663:	08 
 84dc664:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 84dc66b:	00 
 84dc66c:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84dc672:	89 04 24             	mov    %eax,(%esp)
 84dc675:	e8 a2 01 0b 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84dc67a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84dc67d:	8b 40 0e             	mov    0xe(%eax),%eax
 84dc680:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84dc684:	c7 44 24 08 c7 98 c8 	movl   $0x8c898c7,0x8(%esp)
 84dc68b:	08 
 84dc68c:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84dc693:	00 
 84dc694:	8d 45 8b             	lea    -0x75(%ebp),%eax
 84dc697:	89 04 24             	mov    %eax,(%esp)
 84dc69a:	e8 7d 01 0b 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84dc69f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc6a2:	89 04 24             	mov    %eax,(%esp)
 84dc6a5:	e8 e6 d9 c9 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 84dc6aa:	83 f8 01             	cmp    $0x1,%eax
 84dc6ad:	0f 95 c0             	setne  %al
 84dc6b0:	84 c0                	test   %al,%al
 84dc6b2:	0f 84 88 00 00 00    	je     84dc740 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x850>
 84dc6b8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84dc6bb:	89 04 24             	mov    %eax,(%esp)
 84dc6be:	e8 37 4c c1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84dc6c3:	84 c0                	test   %al,%al
 84dc6c5:	74 14                	je     84dc6db <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x7eb>
 84dc6c7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc6ca:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84dc6ce:	66 83 f8 01          	cmp    $0x1,%ax
 84dc6d2:	76 07                	jbe    84dc6db <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x7eb>
 84dc6d4:	b8 01 00 00 00       	mov    $0x1,%eax
 84dc6d9:	eb 05                	jmp    84dc6e0 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x7f0>
 84dc6db:	b8 00 00 00 00       	mov    $0x0,%eax
 84dc6e0:	84 c0                	test   %al,%al
 84dc6e2:	74 3d                	je     84dc721 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x831>
 84dc6e4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc6e7:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84dc6eb:	0f b7 d8             	movzwl %ax,%ebx
 84dc6ee:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84dc6f1:	89 04 24             	mov    %eax,(%esp)
 84dc6f4:	e8 89 26 c4 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 84dc6f9:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84dc6fd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84dc701:	c7 44 24 08 ca 98 c8 	movl   $0x8c898ca,0x8(%esp)
 84dc708:	08 
 84dc709:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 84dc710:	00 
 84dc711:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 84dc717:	89 04 24             	mov    %eax,(%esp)
 84dc71a:	e8 fd 00 0b 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84dc71f:	eb 4b                	jmp    84dc76c <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x87c>
 84dc721:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84dc724:	89 04 24             	mov    %eax,(%esp)
 84dc727:	e8 56 26 c4 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 84dc72c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc730:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 84dc736:	89 04 24             	mov    %eax,(%esp)
 84dc739:	e8 b2 17 ba ff       	call   807def0 <strcpy@plt>
 84dc73e:	eb 2c                	jmp    84dc76c <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x87c>
 84dc740:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84dc743:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84dc747:	0f b7 c0             	movzwl %ax,%eax
 84dc74a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84dc74e:	c7 44 24 08 d2 98 c8 	movl   $0x8c898d2,0x8(%esp)
 84dc755:	08 
 84dc756:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 84dc75d:	00 
 84dc75e:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 84dc764:	89 04 24             	mov    %eax,(%esp)
 84dc767:	e8 b0 00 0b 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84dc76c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc76f:	89 04 24             	mov    %eax,(%esp)
 84dc772:	e8 83 03 d5 ff       	call   822cafa <_ZNK17CItemLimitEdition12getPriceCeraEv>
 84dc777:	85 c0                	test   %eax,%eax
 84dc779:	0f 94 c0             	sete   %al
 84dc77c:	84 c0                	test   %al,%al
 84dc77e:	74 6c                	je     84dc7ec <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x8fc>
 84dc780:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84dc785:	8b 00                	mov    (%eax),%eax
 84dc787:	83 c0 18             	add    $0x18,%eax
 84dc78a:	8b 38                	mov    (%eax),%edi
 84dc78c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dc78f:	89 04 24             	mov    %eax,(%esp)
 84dc792:	e8 63 48 c2 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 84dc797:	89 c6                	mov    %eax,%esi
 84dc799:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc79c:	89 04 24             	mov    %eax,(%esp)
 84dc79f:	e8 84 48 c2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84dc7a4:	89 c3                	mov    %eax,%ebx
 84dc7a6:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84dc7a9:	89 04 24             	mov    %eax,(%esp)
 84dc7ac:	e8 27 af fd ff       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 84dc7b1:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 84dc7b7:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 84dc7bb:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84dc7bf:	8d 8d f4 fe ff ff    	lea    -0x10c(%ebp),%ecx
 84dc7c5:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84dc7c9:	89 44 24 10          	mov    %eax,0x10(%esp)
 84dc7cd:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84dc7d3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84dc7d7:	8d 45 8b             	lea    -0x75(%ebp),%eax
 84dc7da:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dc7de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc7e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc7e5:	89 14 24             	mov    %edx,(%esp)
 84dc7e8:	ff d7                	call   *%edi
 84dc7ea:	eb 6a                	jmp    84dc856 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0x966>
 84dc7ec:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84dc7f1:	8b 00                	mov    (%eax),%eax
 84dc7f3:	83 c0 14             	add    $0x14,%eax
 84dc7f6:	8b 38                	mov    (%eax),%edi
 84dc7f8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dc7fb:	89 04 24             	mov    %eax,(%esp)
 84dc7fe:	e8 f7 47 c2 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 84dc803:	89 c6                	mov    %eax,%esi
 84dc805:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc808:	89 04 24             	mov    %eax,(%esp)
 84dc80b:	e8 18 48 c2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84dc810:	89 c3                	mov    %eax,%ebx
 84dc812:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84dc815:	89 04 24             	mov    %eax,(%esp)
 84dc818:	e8 bb ae fd ff       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 84dc81d:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 84dc823:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 84dc827:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84dc82b:	8d 8d f4 fe ff ff    	lea    -0x10c(%ebp),%ecx
 84dc831:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84dc835:	89 44 24 10          	mov    %eax,0x10(%esp)
 84dc839:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84dc83f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84dc843:	8d 45 8b             	lea    -0x75(%ebp),%eax
 84dc846:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dc84a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc84d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc851:	89 14 24             	mov    %edx,(%esp)
 84dc854:	ff d7                	call   *%edi
 84dc856:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc85c:	89 04 24             	mov    %eax,(%esp)
 84dc85f:	e8 e8 14 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dc864:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 84dc86b:	00 
 84dc86c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dc873:	00 
 84dc874:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc87a:	89 04 24             	mov    %eax,(%esp)
 84dc87d:	e8 7a f0 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dc882:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dc889:	00 
 84dc88a:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc890:	89 04 24             	mov    %eax,(%esp)
 84dc893:	e8 88 f0 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dc898:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc89b:	89 04 24             	mov    %eax,(%esp)
 84dc89e:	e8 79 ce 00 00       	call   84e971c <_ZNK17CItemLimitEdition8getIPGNOEv>
 84dc8a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc8a7:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc8ad:	89 04 24             	mov    %eax,(%esp)
 84dc8b0:	e8 87 f0 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dc8b5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc8b8:	89 04 24             	mov    %eax,(%esp)
 84dc8bb:	e8 fc 01 d5 ff       	call   822cabc <_ZNK17CItemLimitEdition13getCurSellNumEv>
 84dc8c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc8c4:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc8ca:	89 04 24             	mov    %eax,(%esp)
 84dc8cd:	e8 6a f0 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dc8d2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dc8d5:	89 04 24             	mov    %eax,(%esp)
 84dc8d8:	e8 49 ce 00 00       	call   84e9726 <_ZNK17CItemLimitEdition15getTotalSellNumEv>
 84dc8dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc8e1:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc8e7:	89 04 24             	mov    %eax,(%esp)
 84dc8ea:	e8 4d f0 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dc8ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dc8f6:	00 
 84dc8f7:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc8fd:	89 04 24             	mov    %eax,(%esp)
 84dc900:	e8 53 f0 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dc905:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc90b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dc90f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc912:	89 04 24             	mov    %eax,(%esp)
 84dc915:	e8 a0 bc 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dc91a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dc91f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc925:	89 04 24             	mov    %eax,(%esp)
 84dc928:	e8 53 15 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dc92d:	eb 33                	jmp    84dc962 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0xa72>
 84dc92f:	89 d3                	mov    %edx,%ebx
 84dc931:	89 c6                	mov    %eax,%esi
 84dc933:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84dc939:	89 04 24             	mov    %eax,(%esp)
 84dc93c:	e8 3f 15 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dc941:	89 f0                	mov    %esi,%eax
 84dc943:	89 da                	mov    %ebx,%edx
 84dc945:	eb 00                	jmp    84dc947 <_ZN28Inter_ItemLimitEdition_Reply12dispatch_sigEP5CUserPci+0xa57>
 84dc947:	89 d3                	mov    %edx,%ebx
 84dc949:	89 c6                	mov    %eax,%esi
 84dc94b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dc94e:	89 04 24             	mov    %eax,(%esp)
 84dc951:	e8 7c ff 13 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84dc956:	89 f0                	mov    %esi,%eax
 84dc958:	89 da                	mov    %ebx,%edx
 84dc95a:	89 04 24             	mov    %eax,(%esp)
 84dc95d:	e8 ee 6d 60 00       	call   8ae3750 <_Unwind_Resume>
 84dc962:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dc965:	89 04 24             	mov    %eax,(%esp)
 84dc968:	e8 65 ff 13 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84dc96d:	89 d8                	mov    %ebx,%eax
 84dc96f:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 84dc975:	5b                   	pop    %ebx
 84dc976:	5e                   	pop    %esi
 84dc977:	5f                   	pop    %edi
 84dc978:	5d                   	pop    %ebp
 84dc979:	c3                   	ret

```

```c
// Inter_ItemLimitEdition_Reply::dispatch_sig @ 0x84dbef0

/* Inter_ItemLimitEdition_Reply::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ItemLimitEdition_Reply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  stCeraShopIPGRequest_t sVar5;
  undefined2 uVar6;
  int iVar7;
  CDataManager *pCVar8;
  CItemLimitEditionMgr *this;
  undefined4 *puVar9;
  uint uVar10;
  GameWorld *this_00;
  uint uVar11;
  CInventory *this_01;
  int iVar12;
  Stream *pSVar13;
  CStreamGuard *this_02;
  undefined4 uVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  byte bVar19;
  char local_110 [100];
  char local_ac [36];
  PacketGuard local_88 [15];
  char local_79 [8];
  char local_71;
  char local_70 [20];
  PacketGuard local_5c [12];
  CStreamGuard local_50 [8];
  int local_48 [2];
  bool local_3d;
  int local_3c;
  CItemLimitEdition *local_38;
  CItem *local_34;
  int local_30;
  stCeraShopIPGRequest_t *local_28;
  int local_24;
  int local_20;
  
  bVar19 = 0;
  iVar7 = CUser::get_state((CUser *)param_2);
  if (iVar7 < 3) {
    return 0;
  }
  local_3c = param_3;
  local_38 = (CItemLimitEdition *)0x0;
  local_34 = (CItem *)0x0;
  uVar10 = *(uint *)(param_3 + 0x12);
  uVar11 = *(uint *)(param_3 + 0xe);
                    /* try { // try from 084dbf3b to 084dc0a4 has its CatchHandler @ 084dc2c7 */
  pCVar8 = (CDataManager *)G_CDataManager();
  this = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar8);
  cVar4 = CItemLimitEditionMgr::updateItem(this,uVar11,uVar10);
  if (cVar4 != '\x01') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  cVar4 = *(char *)(local_3c + 0x16);
  if (cVar4 == '\x01') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  if (cVar4 == '\x02') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0x5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  if (cVar4 != '\0') {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  uVar14 = *(undefined4 *)(local_3c + 0xe);
  pCVar8 = (CDataManager *)G_CDataManager();
  uVar10 = CDataManager::getItemLimitEditionMgr(pCVar8);
  local_38 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar10);
  if (local_38 == (CItemLimitEdition *)0x0) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4,uVar14);
    *puVar9 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  cVar4 = CItemLimitEdition::isSellComplete(local_38);
  if (cVar4 != '\0') {
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 084dc0bb to 084dc11e has its CatchHandler @ 084dc121 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0xe1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,1);
    CItemLimitEdition::makeInfoPacket(local_38,local_5c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_5c);
                    /* try { // try from 084dc13f to 084dc29a has its CatchHandler @ 084dc2c7 */
    PacketGuard::~PacketGuard(local_5c);
  }
  uVar10 = CUser::GetCera((CUser *)param_2);
  uVar11 = CItemLimitEdition::getPriceCera(local_38);
  if (uVar10 < uVar11) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0xb;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  iVar7 = CInventory::get_money(this_01);
  iVar12 = CItemLimitEdition::getPriceGold(local_38);
  if (iVar7 < iVar12) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  uVar10 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_2);
  uVar11 = CItemLimitEdition::getPriceWinPoint();
  if (uVar10 < uVar11) {
    puVar9 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar9 = 0xc;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
  }
  iVar7 = CItemLimitEdition::getRelateditem(local_38);
  if (iVar7 != 1) {
    iVar7 = CItemLimitEdition::getRelateditem(local_38);
    pCVar8 = (CDataManager *)G_CDataManager();
    local_34 = (CItem *)CDataManager::find_item(pCVar8,iVar7);
    if (local_34 == (CItem *)0x0) {
      puVar9 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar9 = 0x11;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&ENUM_ERROR::typeinfo,0);
    }
  }
  local_3d = false;
  local_48[1] = 0;
  local_48[0] = 0;
  local_30 = CItemLimitEdition::getFeaturedIdx(local_38);
  if (local_30 == 0) {
    iVar7 = CItemLimitEdition::getRelateditem(local_38);
    cVar4 = WongWork::CCeraShop::IsSpecialItem
                      (GlobalData::s_pCeraShop,iVar7,local_48 + 1,local_48,&local_3d);
    if (cVar4 != '\0') {
      bVar18 = true;
      goto LAB_084dc365;
    }
  }
  bVar18 = false;
LAB_084dc365:
  if (bVar18) {
    iVar7 = CItemLimitEdition::getRelateditem(local_38);
    iVar12 = G_CDataManager();
    local_30 = CItemList::GetRestrictCode(*(CItemList **)(iVar12 + 0xc),iVar7);
  }
  CUser::resetUsedCera((CUser *)param_2);
  pSVar13 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x46d9);
  CStreamGuard::CStreamGuard(local_50,pSVar13,false);
  this_02 = (CStreamGuard *)CStreamGuard::operator->(local_50);
                    /* try { // try from 084dc3da to 084dc863 has its CatchHandler @ 084dc947 */
  local_28 = CStreamGuard::GetInBuffer<stCeraShopIPGRequest_t>(this_02);
  *(undefined4 *)local_28 = *(undefined4 *)(local_3c + 0xe);
  *(undefined4 *)(local_28 + 4) = 10;
  uVar14 = CItemLimitEdition::getPriceCera(local_38);
  *(undefined4 *)(local_28 + 0x10) = uVar14;
  uVar14 = CItemLimitEdition::getPriceGold(local_38);
  *(undefined4 *)(local_28 + 0x18) = uVar14;
  uVar14 = CItemLimitEdition::getPriceWinPoint();
  *(undefined4 *)(local_28 + 0x14) = uVar14;
  uVar14 = CItemLimitEdition::getRelateditem(local_38);
  *(undefined4 *)(local_28 + 8) = uVar14;
  uVar6 = CItemLimitEdition::getRelatedItemCnt(local_38);
  *(undefined2 *)(local_28 + 0xc) = uVar6;
  local_28[0x2c] = *(stCeraShopIPGRequest_t *)(local_3c + 0x17);
  sVar5 = (stCeraShopIPGRequest_t)CItemLimitEdition::getAvatarTypeSelect(local_38);
  local_28[0x2d] = sVar5;
  *(undefined4 *)(local_28 + 0x1c) = 0;
  *(int *)(local_28 + 0x28) = local_30;
  *(undefined4 *)(local_28 + 0x20) = 1;
  *(undefined4 *)(local_28 + 0x24) = 1;
  uVar14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(local_28 + 0x30) = uVar14;
  local_28[0x34] = (stCeraShopIPGRequest_t)0x0;
  uVar14 = CUser::get_acc_id((CUser *)param_2);
  *(undefined4 *)(local_28 + 0x40) = uVar14;
  uVar14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  *(undefined4 *)(local_28 + 0x38) = uVar14;
  local_28[0x44] = *(stCeraShopIPGRequest_t *)(local_3c + 0x18);
  for (local_24 = 0; local_24 < (int)(uint)*(byte *)(local_3c + 0x18); local_24 = local_24 + 1) {
    *(undefined4 *)(local_28 + (local_24 + 8) * 8 + 8) =
         *(undefined4 *)(local_3c + local_24 * 5 + 0x19);
    local_28[(local_24 + 8) * 8 + 0xc] = *(stCeraShopIPGRequest_t *)(local_3c + local_24 * 5 + 0x1d)
    ;
  }
  local_28[0x160] = *(stCeraShopIPGRequest_t *)(local_3c + 200);
  for (local_20 = 0; local_20 < (int)(uint)*(byte *)(local_3c + 200); local_20 = local_20 + 1) {
    *(undefined4 *)(local_28 + (local_20 + 0x2c) * 8 + 4) =
         *(undefined4 *)(local_3c + 9 + (local_20 + 0x18) * 8);
    *(undefined2 *)(local_28 + (local_20 + 0x2c) * 8 + 8) =
         *(undefined2 *)(local_3c + 0xd + (local_20 + 0x18) * 8);
    *(undefined2 *)(local_28 + (local_20 + 0x2c) * 8 + 10) =
         *(undefined2 *)(local_3c + 0xf + (local_20 + 0x18) * 8);
  }
  pcVar15 = local_ac;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar19 * -2 + 1) * 4;
  }
  pcVar15 = &local_71;
  uVar10 = 0x15;
  bVar18 = ((uint)pcVar15 & 1) != 0;
  if (bVar18) {
    local_71 = '\0';
    pcVar15 = local_70;
    uVar10 = 0x14;
  }
  if (((uint)pcVar15 & 2) != 0) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15 = pcVar15 + 2;
    uVar10 = uVar10 - 2;
  }
  uVar11 = 0;
  do {
    pcVar1 = pcVar15 + uVar11;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar11 = uVar11 + 4;
  } while (uVar11 < (uVar10 & 0xfffffffc));
  pcVar15 = pcVar15 + uVar11;
  if ((uVar10 & 2) != 0) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15 = pcVar15 + 2;
  }
  if (!bVar18) {
    *pcVar15 = '\0';
  }
  uVar14 = CItemLimitEdition::getPriceCera(local_38);
  OS_API::snprintf(local_ac,0x24,"%d",uVar14);
  OS_API::snprintf(local_79,8,"%d",*(undefined4 *)(local_3c + 0xe));
  iVar7 = CItemLimitEdition::getRelateditem(local_38);
  if (iVar7 == 1) {
    OS_API::snprintf(local_110,0x62,&DAT_08c898d2,(uint)*(ushort *)(local_28 + 0xc));
  }
  else {
    cVar4 = CItem::is_stackable(local_34);
    if ((cVar4 == '\0') || (*(ushort *)(local_28 + 0xc) < 2)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18) {
      uVar2 = *(ushort *)(local_28 + 0xc);
      uVar14 = CItem::GetItemName(local_34);
      OS_API::snprintf(local_110,0x62,&DAT_08c898ca,uVar14,(uint)uVar2);
    }
    else {
      pcVar15 = (char *)CItem::GetItemName(local_34);
      strcpy(local_110,pcVar15);
    }
  }
  iVar7 = CItemLimitEdition::getPriceCera(local_38);
  if (iVar7 == 0) {
    pcVar3 = *(code **)(*GlobalData::s_pIPGHelper + 0x18);
    uVar14 = CStreamGuard::Get(local_50);
    uVar16 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar17 = WongWork::CGenUniqueNo::GenUniqueNo(&local_71);
    (*pcVar3)(GlobalData::s_pIPGHelper,param_2,local_79,local_ac,uVar17,local_110,uVar16,uVar14);
  }
  else {
    pcVar3 = *(code **)(*GlobalData::s_pIPGHelper + 0x14);
    uVar14 = CStreamGuard::Get(local_50);
    uVar16 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
    uVar17 = WongWork::CGenUniqueNo::GenUniqueNo(&local_71);
    (*pcVar3)(GlobalData::s_pIPGHelper,param_2,local_79,local_ac,uVar17,local_110,uVar16,uVar14);
  }
  PacketGuard::PacketGuard(local_88);
                    /* try { // try from 084dc87d to 084dc919 has its CatchHandler @ 084dc92f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,1,0x100);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,1);
  iVar7 = CItemLimitEdition::getIPGNO(local_38);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar7);
  iVar7 = CItemLimitEdition::getCurSellNum(local_38);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar7);
  iVar7 = CItemLimitEdition::getTotalSellNum(local_38);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar7);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_88,true);
  CUser::Send((CUser *)param_2,local_88);
                    /* try { // try from 084dc928 to 084dc92c has its CatchHandler @ 084dc947 */
  PacketGuard::~PacketGuard(local_88);
  CStreamGuard::~CStreamGuard(local_50);
  return 0;
}

```

