# Dispatcher_PurifyItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 08218cb6 Dispatcher_PurifyItem::process  [0x08218cb6-0x82194b5] ===
 8218cb6:	55                   	push   %ebp
 8218cb7:	89 e5                	mov    %esp,%ebp
 8218cb9:	56                   	push   %esi
 8218cba:	53                   	push   %ebx
 8218cbb:	81 ec 30 01 00 00    	sub    $0x130,%esp
 8218cc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218cc4:	89 04 24             	mov    %eax,(%esp)
 8218cc7:	e8 c0 16 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8218ccc:	83 f8 03             	cmp    $0x3,%eax
 8218ccf:	0f 95 c0             	setne  %al
 8218cd2:	84 c0                	test   %al,%al
 8218cd4:	74 2b                	je     8218d01 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x4b>
 8218cd6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8218cdd:	00 
 8218cde:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218ce5:	00 
 8218ce6:	c7 44 24 04 20 d8 bc 	movl   $0x8bcd820,0x4(%esp)
 8218ced:	08 
 8218cee:	c7 04 24 cb cb 00 00 	movl   $0xcbcb,(%esp)
 8218cf5:	e8 dd 7b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8218cfa:	89 c3                	mov    %eax,%ebx
 8218cfc:	e9 a9 07 00 00       	jmp    82194aa <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x7f4>
 8218d01:	e8 a1 16 ec ff       	call   80da3a7 <_Z11G_GameWorldv>
 8218d06:	89 04 24             	mov    %eax,(%esp)
 8218d09:	e8 12 de ef ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8218d0e:	83 f8 07             	cmp    $0x7,%eax
 8218d11:	0f 94 c0             	sete   %al
 8218d14:	84 c0                	test   %al,%al
 8218d16:	74 25                	je     8218d3d <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x87>
 8218d18:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8218d1f:	00 
 8218d20:	c7 44 24 04 cf 00 00 	movl   $0xcf,0x4(%esp)
 8218d27:	00 
 8218d28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218d2b:	89 04 24             	mov    %eax,(%esp)
 8218d2e:	e8 0f 32 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8218d33:	bb 00 00 00 00       	mov    $0x0,%ebx
 8218d38:	e9 6d 07 00 00       	jmp    82194aa <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x7f4>
 8218d3d:	8b 45 10             	mov    0x10(%ebp),%eax
 8218d40:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8218d43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8218d46:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 8218d4a:	0f b7 c0             	movzwl %ax,%eax
 8218d4d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8218d51:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8218d58:	00 
 8218d59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218d5c:	89 04 24             	mov    %eax,(%esp)
 8218d5f:	e8 de db 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8218d64:	84 c0                	test   %al,%al
 8218d66:	74 25                	je     8218d8d <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0xd7>
 8218d68:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8218d6f:	00 
 8218d70:	c7 44 24 04 cf 00 00 	movl   $0xcf,0x4(%esp)
 8218d77:	00 
 8218d78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218d7b:	89 04 24             	mov    %eax,(%esp)
 8218d7e:	e8 bf 31 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8218d83:	bb 00 00 00 00       	mov    $0x0,%ebx
 8218d88:	e9 1d 07 00 00       	jmp    82194aa <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x7f4>
 8218d8d:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8218d90:	89 04 24             	mov    %eax,(%esp)
 8218d93:	e8 bc 2a eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8218d98:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 8218d9e:	89 04 24             	mov    %eax,(%esp)
 8218da1:	e8 ae 2a eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8218da6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8218da9:	8b 40 15             	mov    0x15(%eax),%eax
 8218dac:	89 c2                	mov    %eax,%edx
 8218dae:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8218db3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8218db7:	89 04 24             	mov    %eax,(%esp)
 8218dba:	e8 61 bf 01 00       	call   8234d20 <_ZNK14CItemAmplifier21getPurifyMaterialTypeEi>
 8218dbf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8218dc2:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8218dc6:	75 2c                	jne    8218df4 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x13e>
 8218dc8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8218dcf:	e8 2c ca 50 00       	call   8725800 <__cxa_allocate_exception>
 8218dd4:	89 c2                	mov    %eax,%edx
 8218dd6:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8218ddc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218de3:	00 
 8218de4:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8218deb:	08 
 8218dec:	89 04 24             	mov    %eax,(%esp)
 8218def:	e8 5c be 50 00       	call   8724c50 <__cxa_throw>
 8218df4:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8218df9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8218dfc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8218e00:	89 04 24             	mov    %eax,(%esp)
 8218e03:	e8 cc be 01 00       	call   8234cd4 <_ZNK14CItemAmplifier24getPurifyMaterialItemIdxEi>
 8218e08:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8218e0b:	8b 52 15             	mov    0x15(%edx),%edx
 8218e0e:	39 d0                	cmp    %edx,%eax
 8218e10:	0f 95 c0             	setne  %al
 8218e13:	84 c0                	test   %al,%al
 8218e15:	74 2c                	je     8218e43 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x18d>
 8218e17:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8218e1e:	e8 dd c9 50 00       	call   8725800 <__cxa_allocate_exception>
 8218e23:	89 c2                	mov    %eax,%edx
 8218e25:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8218e2b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218e32:	00 
 8218e33:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8218e3a:	08 
 8218e3b:	89 04 24             	mov    %eax,(%esp)
 8218e3e:	e8 0d be 50 00       	call   8724c50 <__cxa_throw>
 8218e43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8218e46:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 8218e4a:	0f b7 d8             	movzwl %ax,%ebx
 8218e4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218e50:	89 04 24             	mov    %eax,(%esp)
 8218e53:	e8 26 14 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8218e58:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 8218e5e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8218e62:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8218e69:	00 
 8218e6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218e6e:	89 14 24             	mov    %edx,(%esp)
 8218e71:	e8 a2 2a 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8218e76:	83 ec 04             	sub    $0x4,%esp
 8218e79:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8218e7f:	89 45 a3             	mov    %eax,-0x5d(%ebp)
 8218e82:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 8218e88:	89 45 a7             	mov    %eax,-0x59(%ebp)
 8218e8b:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8218e91:	89 45 ab             	mov    %eax,-0x55(%ebp)
 8218e94:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8218e9a:	89 45 af             	mov    %eax,-0x51(%ebp)
 8218e9d:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8218ea3:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 8218ea6:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8218eac:	89 45 b7             	mov    %eax,-0x49(%ebp)
 8218eaf:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 8218eb5:	89 45 bb             	mov    %eax,-0x45(%ebp)
 8218eb8:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8218ebe:	89 45 bf             	mov    %eax,-0x41(%ebp)
 8218ec1:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 8218ec7:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 8218eca:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 8218ed0:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8218ed3:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8218ed9:	89 45 cb             	mov    %eax,-0x35(%ebp)
 8218edc:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8218ee2:	89 45 cf             	mov    %eax,-0x31(%ebp)
 8218ee5:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8218eeb:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 8218eee:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8218ef4:	89 45 d7             	mov    %eax,-0x29(%ebp)
 8218ef7:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 8218efd:	89 45 db             	mov    %eax,-0x25(%ebp)
 8218f00:	0f b6 85 54 ff ff ff 	movzbl -0xac(%ebp),%eax
 8218f07:	88 45 df             	mov    %al,-0x21(%ebp)
 8218f0a:	8b 55 a5             	mov    -0x5b(%ebp),%edx
 8218f0d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8218f10:	8b 40 0f             	mov    0xf(%eax),%eax
 8218f13:	39 c2                	cmp    %eax,%edx
 8218f15:	74 2c                	je     8218f43 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x28d>
 8218f17:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8218f1e:	e8 dd c8 50 00       	call   8725800 <__cxa_allocate_exception>
 8218f23:	89 c2                	mov    %eax,%edx
 8218f25:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8218f2b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218f32:	00 
 8218f33:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8218f3a:	08 
 8218f3b:	89 04 24             	mov    %eax,(%esp)
 8218f3e:	e8 0d bd 50 00       	call   8724c50 <__cxa_throw>
 8218f43:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8218f46:	83 c0 11             	add    $0x11,%eax
 8218f49:	89 04 24             	mov    %eax,(%esp)
 8218f4c:	e8 6b 78 f3 ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 8218f51:	84 c0                	test   %al,%al
 8218f53:	74 2c                	je     8218f81 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x2cb>
 8218f55:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8218f5c:	e8 9f c8 50 00       	call   8725800 <__cxa_allocate_exception>
 8218f61:	89 c2                	mov    %eax,%edx
 8218f63:	c7 02 17 00 00 00    	movl   $0x17,(%edx)
 8218f69:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218f70:	00 
 8218f71:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8218f78:	08 
 8218f79:	89 04 24             	mov    %eax,(%esp)
 8218f7c:	e8 cf bc 50 00       	call   8724c50 <__cxa_throw>
 8218f81:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8218f84:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 8218f88:	0f b7 d8             	movzwl %ax,%ebx
 8218f8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218f8e:	89 04 24             	mov    %eax,(%esp)
 8218f91:	e8 e8 12 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8218f96:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 8218f9c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8218fa0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8218fa7:	00 
 8218fa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218fac:	89 14 24             	mov    %edx,(%esp)
 8218faf:	e8 64 29 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8218fb4:	83 ec 04             	sub    $0x4,%esp
 8218fb7:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8218fbd:	89 85 66 ff ff ff    	mov    %eax,-0x9a(%ebp)
 8218fc3:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 8218fc9:	89 85 6a ff ff ff    	mov    %eax,-0x96(%ebp)
 8218fcf:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8218fd5:	89 85 6e ff ff ff    	mov    %eax,-0x92(%ebp)
 8218fdb:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8218fe1:	89 85 72 ff ff ff    	mov    %eax,-0x8e(%ebp)
 8218fe7:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8218fed:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 8218ff3:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8218ff9:	89 85 7a ff ff ff    	mov    %eax,-0x86(%ebp)
 8218fff:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 8219005:	89 85 7e ff ff ff    	mov    %eax,-0x82(%ebp)
 821900b:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8219011:	89 45 82             	mov    %eax,-0x7e(%ebp)
 8219014:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 821901a:	89 45 86             	mov    %eax,-0x7a(%ebp)
 821901d:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 8219023:	89 45 8a             	mov    %eax,-0x76(%ebp)
 8219026:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 821902c:	89 45 8e             	mov    %eax,-0x72(%ebp)
 821902f:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8219035:	89 45 92             	mov    %eax,-0x6e(%ebp)
 8219038:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 821903e:	89 45 96             	mov    %eax,-0x6a(%ebp)
 8219041:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8219047:	89 45 9a             	mov    %eax,-0x66(%ebp)
 821904a:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 8219050:	89 45 9e             	mov    %eax,-0x62(%ebp)
 8219053:	0f b6 85 54 ff ff ff 	movzbl -0xac(%ebp),%eax
 821905a:	88 45 a2             	mov    %al,-0x5e(%ebp)
 821905d:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8219063:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8219066:	8b 40 15             	mov    0x15(%eax),%eax
 8219069:	39 c2                	cmp    %eax,%edx
 821906b:	75 1e                	jne    821908b <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x3d5>
 821906d:	8b 9d 6d ff ff ff    	mov    -0x93(%ebp),%ebx
 8219073:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8219078:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821907b:	89 54 24 04          	mov    %edx,0x4(%esp)
 821907f:	89 04 24             	mov    %eax,(%esp)
 8219082:	e8 73 bc 01 00       	call   8234cfa <_ZNK14CItemAmplifier26getPurifyMaterialItemCountEi>
 8219087:	39 c3                	cmp    %eax,%ebx
 8219089:	7d 07                	jge    8219092 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x3dc>
 821908b:	b8 01 00 00 00       	mov    $0x1,%eax
 8219090:	eb 05                	jmp    8219097 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x3e1>
 8219092:	b8 00 00 00 00       	mov    $0x0,%eax
 8219097:	84 c0                	test   %al,%al
 8219099:	74 2c                	je     82190c7 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x411>
 821909b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 82190a2:	e8 59 c7 50 00       	call   8725800 <__cxa_allocate_exception>
 82190a7:	89 c2                	mov    %eax,%edx
 82190a9:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 82190af:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82190b6:	00 
 82190b7:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 82190be:	08 
 82190bf:	89 04 24             	mov    %eax,(%esp)
 82190c2:	e8 89 bb 50 00       	call   8724c50 <__cxa_throw>
 82190c7:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 82190cc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82190cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 82190d3:	89 04 24             	mov    %eax,(%esp)
 82190d6:	e8 1f bc 01 00       	call   8234cfa <_ZNK14CItemAmplifier26getPurifyMaterialItemCountEi>
 82190db:	89 c6                	mov    %eax,%esi
 82190dd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82190e0:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 82190e4:	0f b7 d8             	movzwl %ax,%ebx
 82190e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82190ea:	89 04 24             	mov    %eax,(%esp)
 82190ed:	e8 9c 11 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82190f2:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 82190f9:	00 
 82190fa:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8219101:	00 
 8219102:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8219106:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 821910a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8219111:	00 
 8219112:	89 04 24             	mov    %eax,(%esp)
 8219115:	e8 f2 ae 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 821911a:	83 f0 01             	xor    $0x1,%eax
 821911d:	84 c0                	test   %al,%al
 821911f:	74 2c                	je     821914d <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x497>
 8219121:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219128:	e8 d3 c6 50 00       	call   8725800 <__cxa_allocate_exception>
 821912d:	89 c2                	mov    %eax,%edx
 821912f:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 8219135:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821913c:	00 
 821913d:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219144:	08 
 8219145:	89 04 24             	mov    %eax,(%esp)
 8219148:	e8 03 bb 50 00       	call   8724c50 <__cxa_throw>
 821914d:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8219150:	89 44 24 08          	mov    %eax,0x8(%esp)
 8219154:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8219157:	89 44 24 04          	mov    %eax,0x4(%esp)
 821915b:	8b 45 08             	mov    0x8(%ebp),%eax
 821915e:	89 04 24             	mov    %eax,(%esp)
 8219161:	e8 50 03 00 00       	call   82194b6 <_ZN21Dispatcher_PurifyItem17processPurifyTypeEiR10Inven_Item>
 8219166:	83 f0 01             	xor    $0x1,%eax
 8219169:	84 c0                	test   %al,%al
 821916b:	74 2c                	je     8219199 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x4e3>
 821916d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8219174:	e8 87 c6 50 00       	call   8725800 <__cxa_allocate_exception>
 8219179:	89 c2                	mov    %eax,%edx
 821917b:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 8219181:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8219188:	00 
 8219189:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8219190:	08 
 8219191:	89 04 24             	mov    %eax,(%esp)
 8219194:	e8 b7 ba 50 00       	call   8724c50 <__cxa_throw>
 8219199:	8b 45 a5             	mov    -0x5b(%ebp),%eax
 821919c:	89 c2                	mov    %eax,%edx
 821919e:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 82191a4:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82191a7:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 82191ad:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 82191b4:	00 
 82191b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 82191b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82191bd:	89 0c 24             	mov    %ecx,(%esp)
 82191c0:	e8 b7 da 46 00       	call   8686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>
 82191c5:	eb 5b                	jmp    8219222 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x56c>
 82191c7:	83 fa 01             	cmp    $0x1,%edx
 82191ca:	74 08                	je     82191d4 <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x51e>
 82191cc:	89 04 24             	mov    %eax,(%esp)
 82191cf:	e8 7c a5 8c 00       	call   8ae3750 <_Unwind_Resume>
 82191d4:	89 04 24             	mov    %eax,(%esp)
 82191d7:	e8 04 cb 50 00       	call   8725ce0 <__cxa_begin_catch>
 82191dc:	8b 00                	mov    (%eax),%eax
 82191de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82191e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82191e4:	0f b6 c0             	movzbl %al,%eax
 82191e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 82191eb:	c7 44 24 04 cf 00 00 	movl   $0xcf,0x4(%esp)
 82191f2:	00 
 82191f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82191f6:	89 04 24             	mov    %eax,(%esp)
 82191f9:	e8 44 2d 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82191fe:	bb 00 00 00 00       	mov    $0x0,%ebx
 8219203:	e8 28 ca 50 00       	call   8725c30 <__cxa_end_catch>
 8219208:	e9 9d 02 00 00       	jmp    82194aa <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x7f4>
 821920d:	89 d3                	mov    %edx,%ebx
 821920f:	89 c6                	mov    %eax,%esi
 8219211:	e8 1a ca 50 00       	call   8725c30 <__cxa_end_catch>
 8219216:	89 f0                	mov    %esi,%eax
 8219218:	89 da                	mov    %ebx,%edx
 821921a:	89 04 24             	mov    %eax,(%esp)
 821921d:	e8 2e a5 8c 00       	call   8ae3750 <_Unwind_Resume>
 8219222:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8219225:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 8219229:	0f b7 d8             	movzwl %ax,%ebx
 821922c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821922f:	89 04 24             	mov    %eax,(%esp)
 8219232:	e8 57 10 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8219237:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 821923a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821923e:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8219241:	89 54 24 10          	mov    %edx,0x10(%esp)
 8219245:	8b 55 ab             	mov    -0x55(%ebp),%edx
 8219248:	89 54 24 14          	mov    %edx,0x14(%esp)
 821924c:	8b 55 af             	mov    -0x51(%ebp),%edx
 821924f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8219253:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 8219256:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 821925a:	8b 55 b7             	mov    -0x49(%ebp),%edx
 821925d:	89 54 24 20          	mov    %edx,0x20(%esp)
 8219261:	8b 55 bb             	mov    -0x45(%ebp),%edx
 8219264:	89 54 24 24          	mov    %edx,0x24(%esp)
 8219268:	8b 55 bf             	mov    -0x41(%ebp),%edx
 821926b:	89 54 24 28          	mov    %edx,0x28(%esp)
 821926f:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8219272:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8219276:	8b 55 c7             	mov    -0x39(%ebp),%edx
 8219279:	89 54 24 30          	mov    %edx,0x30(%esp)
 821927d:	8b 55 cb             	mov    -0x35(%ebp),%edx
 8219280:	89 54 24 34          	mov    %edx,0x34(%esp)
 8219284:	8b 55 cf             	mov    -0x31(%ebp),%edx
 8219287:	89 54 24 38          	mov    %edx,0x38(%esp)
 821928b:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 821928e:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8219292:	8b 55 d7             	mov    -0x29(%ebp),%edx
 8219295:	89 54 24 40          	mov    %edx,0x40(%esp)
 8219299:	8b 55 db             	mov    -0x25(%ebp),%edx
 821929c:	89 54 24 44          	mov    %edx,0x44(%esp)
 82192a0:	0f b6 55 df          	movzbl -0x21(%ebp),%edx
 82192a4:	88 54 24 48          	mov    %dl,0x48(%esp)
 82192a8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82192ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82192b3:	00 
 82192b4:	89 04 24             	mov    %eax,(%esp)
 82192b7:	e8 f2 6d 2e 00       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 82192bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82192bf:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 82192c3:	0f b7 d8             	movzwl %ax,%ebx
 82192c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82192c9:	89 04 24             	mov    %eax,(%esp)
 82192cc:	e8 ad 0f ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82192d1:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 82192d7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82192db:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82192e2:	00 
 82192e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82192e7:	89 14 24             	mov    %edx,(%esp)
 82192ea:	e8 29 26 2e 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 82192ef:	83 ec 04             	sub    $0x4,%esp
 82192f2:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 82192f8:	89 85 66 ff ff ff    	mov    %eax,-0x9a(%ebp)
 82192fe:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 8219304:	89 85 6a ff ff ff    	mov    %eax,-0x96(%ebp)
 821930a:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8219310:	89 85 6e ff ff ff    	mov    %eax,-0x92(%ebp)
 8219316:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 821931c:	89 85 72 ff ff ff    	mov    %eax,-0x8e(%ebp)
 8219322:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8219328:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 821932e:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8219334:	89 85 7a ff ff ff    	mov    %eax,-0x86(%ebp)
 821933a:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 8219340:	89 85 7e ff ff ff    	mov    %eax,-0x82(%ebp)
 8219346:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 821934c:	89 45 82             	mov    %eax,-0x7e(%ebp)
 821934f:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 8219355:	89 45 86             	mov    %eax,-0x7a(%ebp)
 8219358:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 821935e:	89 45 8a             	mov    %eax,-0x76(%ebp)
 8219361:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8219367:	89 45 8e             	mov    %eax,-0x72(%ebp)
 821936a:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8219370:	89 45 92             	mov    %eax,-0x6e(%ebp)
 8219373:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8219379:	89 45 96             	mov    %eax,-0x6a(%ebp)
 821937c:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8219382:	89 45 9a             	mov    %eax,-0x66(%ebp)
 8219385:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 821938b:	89 45 9e             	mov    %eax,-0x62(%ebp)
 821938e:	0f b6 85 54 ff ff ff 	movzbl -0xac(%ebp),%eax
 8219395:	88 45 a2             	mov    %al,-0x5e(%ebp)
 8219398:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821939b:	89 04 24             	mov    %eax,(%esp)
 821939e:	e8 a9 49 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82193a3:	c7 44 24 08 cf 00 00 	movl   $0xcf,0x8(%esp)
 82193aa:	00 
 82193ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82193b2:	00 
 82193b3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82193b6:	89 04 24             	mov    %eax,(%esp)
 82193b9:	e8 3e 25 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82193be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82193c5:	00 
 82193c6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82193c9:	89 04 24             	mov    %eax,(%esp)
 82193cc:	e8 4f 25 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82193d1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82193d4:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 82193d8:	0f b7 c0             	movzwl %ax,%eax
 82193db:	89 44 24 04          	mov    %eax,0x4(%esp)
 82193df:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82193e2:	89 04 24             	mov    %eax,(%esp)
 82193e5:	e8 ba 0a ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82193ea:	8b 85 6d ff ff ff    	mov    -0x93(%ebp),%eax
 82193f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82193f4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82193f7:	89 04 24             	mov    %eax,(%esp)
 82193fa:	e8 3d 25 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82193ff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8219402:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 8219406:	0f b7 c0             	movzwl %ax,%eax
 8219409:	89 44 24 04          	mov    %eax,0x4(%esp)
 821940d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8219410:	89 04 24             	mov    %eax,(%esp)
 8219413:	e8 8c 0a ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8219418:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 821941b:	83 c0 11             	add    $0x11,%eax
 821941e:	89 04 24             	mov    %eax,(%esp)
 8219421:	e8 0c 73 f3 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8219426:	0f b6 c0             	movzbl %al,%eax
 8219429:	89 44 24 04          	mov    %eax,0x4(%esp)
 821942d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8219430:	89 04 24             	mov    %eax,(%esp)
 8219433:	e8 e8 24 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8219438:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 821943b:	83 c0 11             	add    $0x11,%eax
 821943e:	89 04 24             	mov    %eax,(%esp)
 8219441:	e8 2c 73 f3 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 8219446:	0f b7 c0             	movzwl %ax,%eax
 8219449:	89 44 24 04          	mov    %eax,0x4(%esp)
 821944d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8219450:	89 04 24             	mov    %eax,(%esp)
 8219453:	e8 4c 0a ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8219458:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821945f:	00 
 8219460:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8219463:	89 04 24             	mov    %eax,(%esp)
 8219466:	e8 ed 24 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821946b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821946e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8219472:	8b 45 0c             	mov    0xc(%ebp),%eax
 8219475:	89 04 24             	mov    %eax,(%esp)
 8219478:	e8 3d f1 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821947d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8219482:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8219485:	89 04 24             	mov    %eax,(%esp)
 8219488:	e8 f3 49 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821948d:	eb 1b                	jmp    82194aa <_ZN21Dispatcher_PurifyItem7processEP5CUserR8MSG_BASER9ParamBase+0x7f4>
 821948f:	89 d3                	mov    %edx,%ebx
 8219491:	89 c6                	mov    %eax,%esi
 8219493:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8219496:	89 04 24             	mov    %eax,(%esp)
 8219499:	e8 e2 49 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821949e:	89 f0                	mov    %esi,%eax
 82194a0:	89 da                	mov    %ebx,%edx
 82194a2:	89 04 24             	mov    %eax,(%esp)
 82194a5:	e8 a6 a2 8c 00       	call   8ae3750 <_Unwind_Resume>
 82194aa:	89 d8                	mov    %ebx,%eax
 82194ac:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82194af:	83 c4 00             	add    $0x0,%esp
 82194b2:	5b                   	pop    %ebx
 82194b3:	5e                   	pop    %esi
 82194b4:	5d                   	pop    %ebp
 82194b5:	c3                   	ret

```

```c
// Dispatcher_PurifyItem::process @ 0x8218cb6

/* Dispatcher_PurifyItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_PurifyItem::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  GameWorld *this;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  CInventory *pCVar9;
  uint uVar10;
  undefined1 local_ec [8];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined2 local_9e;
  undefined2 uStack_9c;
  undefined2 local_9a;
  undefined1 uStack_98;
  int iStack_97;
  undefined1 uStack_93;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined1 local_62;
  undefined2 local_61;
  undefined2 uStack_5f;
  undefined2 local_5d;
  undefined2 uStack_5b;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined1 local_25;
  PacketGuard local_24 [12];
  ParamBase *local_18;
  int local_14;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 != 3) {
    uVar5 = LineFunc(0xcbcb,
                     "virtual int Dispatcher_PurifyItem::process(CUser*, MSG_BASE&, ParamBase&)",0,0
                    );
    return uVar5;
  }
  this = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(this);
  if (iVar4 == 7) {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xcf,0x11);
    return 0;
  }
  local_18 = param_3;
  cVar3 = CUser::CheckItemLock((CUser *)param_2,1,(uint)*(ushort *)(param_3 + 0xd));
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xcf,0xd5);
    return 0;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_61);
  Inven_Item::Inven_Item((Inven_Item *)&local_9e);
  local_14 = CItemAmplifier::getPurifyMaterialType
                       (GlobalData::s_itemAmplifier_,*(int *)(local_18 + 0x15));
  if (local_14 == -1) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08218def to 082191c4 has its CatchHandler @ 082191c7 */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CItemAmplifier::getPurifyMaterialItemIdx(GlobalData::s_itemAmplifier_,local_14);
  if (iVar4 != *(int *)(local_18 + 0x15)) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  uVar10 = (uint)*(ushort *)(local_18 + 0xd);
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_ec,iVar4);
  local_61 = (undefined2)local_ec._0_4_;
  uStack_5f = SUB42(local_ec._0_4_,2);
  local_5d = (undefined2)local_ec._4_4_;
  uStack_5b = SUB42(local_ec._4_4_,2);
  local_59 = local_e4;
  local_55 = local_e0;
  local_51 = local_dc;
  local_4d = local_d8;
  local_49 = local_d4;
  local_45 = local_d0;
  local_41 = local_cc;
  local_3d = local_c8;
  local_39 = local_c4;
  local_35 = local_c0;
  local_31 = local_bc;
  local_2d = local_b8;
  local_29 = local_b4;
  local_25 = local_b0;
  if (CONCAT22(local_5d,uStack_5f) != *(int *)(local_18 + 0xf)) {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar10);
    *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  cVar3 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)((int)&local_51 + 1));
  if (cVar3 != '\0') {
    puVar6 = (undefined4 *)__cxa_allocate_exception(4,iVar4,uVar5,uVar10);
    *puVar6 = 0x17;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  uVar10 = (uint)*(ushort *)(local_18 + 0x13);
  iVar7 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  uVar5 = 1;
  CInventory::GetInvenSlot((int)local_ec,iVar7);
  local_9e = (undefined2)local_ec._0_4_;
  uStack_9c = SUB42(local_ec._0_4_,2);
  local_9a = (undefined2)local_ec._4_4_;
  uStack_98 = SUB41(local_ec._4_4_,2);
  iStack_97._1_3_ = (undefined3)local_e4;
  iVar4 = CONCAT31(iStack_97._1_3_,SUB41(local_ec._4_4_,3));
  uStack_93 = (undefined1)((uint)local_e4 >> 0x18);
  local_92 = local_e0;
  local_8e = local_dc;
  local_8a = local_d8;
  local_86 = local_d4;
  local_82 = local_d0;
  local_7e = local_cc;
  local_7a = local_c8;
  local_76 = local_c4;
  local_72 = local_c0;
  local_6e = local_bc;
  local_6a = local_b8;
  local_66 = local_b4;
  local_62 = local_b0;
  iStack_97 = iVar4;
  if ((CONCAT22(local_9a,uStack_9c) == *(int *)(local_18 + 0x15)) &&
     (iVar7 = local_14,
     iVar8 = CItemAmplifier::getPurifyMaterialItemCount(GlobalData::s_itemAmplifier_,local_14),
     iVar8 <= iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    uVar5 = CItemAmplifier::getPurifyMaterialItemCount(GlobalData::s_itemAmplifier_,local_14);
    uVar1 = *(undefined2 *)(local_18 + 0x13);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    cVar3 = CInventory::delete_item(pCVar9,1,uVar1,uVar5,3,1);
    if (cVar3 != '\x01') {
      puVar6 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar6 = 0x16;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
    }
    cVar3 = processPurifyType((Dispatcher_PurifyItem *)param_1,local_14,(Inven_Item *)&local_61);
    if (cVar3 == '\x01') {
      cUserHistoryLog::apply_Item
                ((cUserHistoryLog *)(param_2 + 0x79700),CONCAT22(local_9a,uStack_9c),
                 CONCAT22(local_5d,uStack_5f),2);
      uVar1 = *(undefined2 *)(local_18 + 0xd);
      uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      CInventory::update_item
                (uVar5,1,uVar1,CONCAT22(uStack_5f,local_61),CONCAT22(uStack_5b,local_5d),local_59,
                 local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,local_39,local_35,
                 local_31,local_2d,local_29,local_25);
      iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::GetInvenSlot((int)local_ec,iVar4);
      local_9e = (undefined2)local_ec._0_4_;
      uStack_9c = SUB42(local_ec._0_4_,2);
      local_9a = (undefined2)local_ec._4_4_;
      uStack_98 = SUB41(local_ec._4_4_,2);
      iStack_97._1_3_ = (undefined3)local_e4;
      iStack_97 = CONCAT31(iStack_97._1_3_,SUB41(local_ec._4_4_,3));
      uStack_93 = (undefined1)((uint)local_e4 >> 0x18);
      local_92 = local_e0;
      local_8e = local_dc;
      local_8a = local_d8;
      local_86 = local_d4;
      local_82 = local_d0;
      local_7e = local_cc;
      local_7a = local_c8;
      local_76 = local_c4;
      local_72 = local_c0;
      local_6e = local_bc;
      local_6a = local_b8;
      local_66 = local_b4;
      local_62 = local_b0;
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 082193b9 to 0821947c has its CatchHandler @ 0821948f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xcf);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_24,(uint)*(ushort *)(local_18 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,iStack_97);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_24,(uint)*(ushort *)(local_18 + 0xd));
      uVar10 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((int)&local_51 + 1));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,uVar10 & 0xff);
      uVar10 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((int)&local_51 + 1));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar10 & 0xffff);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
      return 0;
    }
    puVar6 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar6 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
  }
  puVar6 = (undefined4 *)__cxa_allocate_exception(4,iVar7,uVar5,uVar10);
  *puVar6 = 0x11;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar6,&ENUM_ERROR::typeinfo,0);
}

```

---

## processPurifyType

```asm
// === 082194b6 Dispatcher_PurifyItem::processPurifyType  [0x082194b6-0x82194f3] ===
 82194b6:	55                   	push   %ebp
 82194b7:	89 e5                	mov    %esp,%ebp
 82194b9:	83 ec 18             	sub    $0x18,%esp
 82194bc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82194c0:	75 10                	jne    82194d2 <_ZN21Dispatcher_PurifyItem17processPurifyTypeEiR10Inven_Item+0x1c>
 82194c2:	8b 45 10             	mov    0x10(%ebp),%eax
 82194c5:	83 c0 11             	add    $0x11,%eax
 82194c8:	89 04 24             	mov    %eax,(%esp)
 82194cb:	e8 08 1f 01 00       	call   822b3d8 <_ZN17stAmplifyOption_t8identifyEv>
 82194d0:	eb 20                	jmp    82194f2 <_ZN21Dispatcher_PurifyItem17processPurifyTypeEiR10Inven_Item+0x3c>
 82194d2:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 82194d6:	75 15                	jne    82194ed <_ZN21Dispatcher_PurifyItem17processPurifyTypeEiR10Inven_Item+0x37>
 82194d8:	8b 45 10             	mov    0x10(%ebp),%eax
 82194db:	83 c0 11             	add    $0x11,%eax
 82194de:	89 04 24             	mov    %eax,(%esp)
 82194e1:	e8 76 22 eb ff       	call   80cb75c <_ZN17stAmplifyOption_t5resetEv>
 82194e6:	b8 01 00 00 00       	mov    $0x1,%eax
 82194eb:	eb 05                	jmp    82194f2 <_ZN21Dispatcher_PurifyItem17processPurifyTypeEiR10Inven_Item+0x3c>
 82194ed:	b8 00 00 00 00       	mov    $0x0,%eax
 82194f2:	c9                   	leave
 82194f3:	c3                   	ret

```

```c
// Dispatcher_PurifyItem::processPurifyType @ 0x82194b6

/* Dispatcher_PurifyItem::processPurifyType(int, Inven_Item&) */

undefined4 __thiscall
Dispatcher_PurifyItem::processPurifyType
          (Dispatcher_PurifyItem *this,int param_1,Inven_Item *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = stAmplifyOption_t::identify((stAmplifyOption_t *)(param_2 + 0x11));
  }
  else if (param_1 == 1) {
    stAmplifyOption_t::reset((stAmplifyOption_t *)(param_2 + 0x11));
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 08218b94 Dispatcher_PurifyItem::read  [0x08218b94-0x8218cb5] ===
 8218b94:	55                   	push   %ebp
 8218b95:	89 e5                	mov    %esp,%ebp
 8218b97:	83 ec 28             	sub    $0x28,%esp
 8218b9a:	8b 45 10             	mov    0x10(%ebp),%eax
 8218b9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8218ba0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218ba3:	83 c0 0d             	add    $0xd,%eax
 8218ba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218baa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218bad:	89 04 24             	mov    %eax,(%esp)
 8218bb0:	e8 fb 44 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8218bb5:	83 f0 01             	xor    $0x1,%eax
 8218bb8:	84 c0                	test   %al,%al
 8218bba:	74 29                	je     8218be5 <_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE+0x51>
 8218bbc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8218bc3:	00 
 8218bc4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218bcb:	00 
 8218bcc:	c7 44 24 04 80 d8 bc 	movl   $0x8bcd880,0x4(%esp)
 8218bd3:	08 
 8218bd4:	c7 04 24 bf cb 00 00 	movl   $0xcbbf,(%esp)
 8218bdb:	e8 f7 7c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8218be0:	e9 ce 00 00 00       	jmp    8218cb3 <_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE+0x11f>
 8218be5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218be8:	83 c0 0f             	add    $0xf,%eax
 8218beb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218bef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218bf2:	89 04 24             	mov    %eax,(%esp)
 8218bf5:	e8 ee 2a 01 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 8218bfa:	83 f0 01             	xor    $0x1,%eax
 8218bfd:	84 c0                	test   %al,%al
 8218bff:	74 29                	je     8218c2a <_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE+0x96>
 8218c01:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8218c08:	00 
 8218c09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218c10:	00 
 8218c11:	c7 44 24 04 80 d8 bc 	movl   $0x8bcd880,0x4(%esp)
 8218c18:	08 
 8218c19:	c7 04 24 c1 cb 00 00 	movl   $0xcbc1,(%esp)
 8218c20:	e8 b2 7c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8218c25:	e9 89 00 00 00       	jmp    8218cb3 <_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE+0x11f>
 8218c2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218c2d:	83 c0 13             	add    $0x13,%eax
 8218c30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218c34:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218c37:	89 04 24             	mov    %eax,(%esp)
 8218c3a:	e8 71 44 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8218c3f:	83 f0 01             	xor    $0x1,%eax
 8218c42:	84 c0                	test   %al,%al
 8218c44:	74 26                	je     8218c6c <_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE+0xd8>
 8218c46:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8218c4d:	00 
 8218c4e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218c55:	00 
 8218c56:	c7 44 24 04 80 d8 bc 	movl   $0x8bcd880,0x4(%esp)
 8218c5d:	08 
 8218c5e:	c7 04 24 c3 cb 00 00 	movl   $0xcbc3,(%esp)
 8218c65:	e8 6d 7c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8218c6a:	eb 47                	jmp    8218cb3 <_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE+0x11f>
 8218c6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8218c6f:	83 c0 15             	add    $0x15,%eax
 8218c72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8218c76:	8b 45 0c             	mov    0xc(%ebp),%eax
 8218c79:	89 04 24             	mov    %eax,(%esp)
 8218c7c:	e8 67 2a 01 00       	call   822b6e8 <_ZN9PacketBuf12get_item_idxERm>
 8218c81:	83 f0 01             	xor    $0x1,%eax
 8218c84:	84 c0                	test   %al,%al
 8218c86:	74 26                	je     8218cae <_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE+0x11a>
 8218c88:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8218c8f:	00 
 8218c90:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8218c97:	00 
 8218c98:	c7 44 24 04 80 d8 bc 	movl   $0x8bcd880,0x4(%esp)
 8218c9f:	08 
 8218ca0:	c7 04 24 c5 cb 00 00 	movl   $0xcbc5,(%esp)
 8218ca7:	e8 2b 7c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8218cac:	eb 05                	jmp    8218cb3 <_ZN21Dispatcher_PurifyItem4readER9PacketBufR8MSG_BASE+0x11f>
 8218cae:	b8 00 00 00 00       	mov    $0x0,%eax
 8218cb3:	c9                   	leave
 8218cb4:	c3                   	ret
 8218cb5:	90                   	nop

```

```c
// Dispatcher_PurifyItem::read @ 0x8218b94

/* Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PurifyItem::read(Dispatcher_PurifyItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_item_idx(param_1,(ulong *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x13));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_item_idx(param_1,(ulong *)(param_2 + 0x15));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0xcbc5,"virtual int Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)",0
                           ,0);
        }
      }
      else {
        uVar2 = LineFunc(0xcbc3,"virtual int Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)",0,0
                        );
      }
    }
    else {
      uVar2 = LineFunc(0xcbc1,"virtual int Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xcbbf,"virtual int Dispatcher_PurifyItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

