# Dispatcher_AuctionRegistItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08213e8a Dispatcher_AuctionRegistItem::dispatch_sig  [0x08213e8a-0x8214b95] ===
 8213e8a:	55                   	push   %ebp
 8213e8b:	89 e5                	mov    %esp,%ebp
 8213e8d:	56                   	push   %esi
 8213e8e:	53                   	push   %ebx
 8213e8f:	81 ec e0 00 00 00    	sub    $0xe0,%esp
 8213e95:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8213e98:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213e9c:	8b 45 10             	mov    0x10(%ebp),%eax
 8213e9f:	89 04 24             	mov    %eax,(%esp)
 8213ea2:	e8 c9 90 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8213ea7:	83 f0 01             	xor    $0x1,%eax
 8213eaa:	84 c0                	test   %al,%al
 8213eac:	74 2b                	je     8213ed9 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x4f>
 8213eae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213eb5:	00 
 8213eb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213ebd:	00 
 8213ebe:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8213ec5:	08 
 8213ec6:	c7 04 24 94 c2 00 00 	movl   $0xc294,(%esp)
 8213ecd:	e8 05 ca 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213ed2:	89 c3                	mov    %eax,%ebx
 8213ed4:	e9 b0 0c 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8213ed9:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8213edd:	3c 01                	cmp    $0x1,%al
 8213edf:	76 2b                	jbe    8213f0c <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x82>
 8213ee1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8213ee8:	00 
 8213ee9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8213ef0:	00 
 8213ef1:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8213ef8:	08 
 8213ef9:	c7 04 24 97 c2 00 00 	movl   $0xc297,(%esp)
 8213f00:	e8 d2 c9 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8213f05:	89 c3                	mov    %eax,%ebx
 8213f07:	e9 7d 0c 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8213f0c:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8213f10:	0f b6 c0             	movzbl %al,%eax
 8213f13:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8213f16:	83 7d d0 01          	cmpl   $0x1,-0x30(%ebp)
 8213f1a:	75 41                	jne    8213f5d <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8213f1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213f1f:	89 04 24             	mov    %eax,(%esp)
 8213f22:	e8 91 63 ec ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8213f27:	83 f8 1e             	cmp    $0x1e,%eax
 8213f2a:	0f 9e c0             	setle  %al
 8213f2d:	84 c0                	test   %al,%al
 8213f2f:	74 2c                	je     8213f5d <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8213f31:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8213f34:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8213f38:	c7 44 24 08 75 00 00 	movl   $0x75,0x8(%esp)
 8213f3f:	00 
 8213f40:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 8213f47:	00 
 8213f48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213f4b:	89 04 24             	mov    %eax,(%esp)
 8213f4e:	e8 cf 80 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8213f53:	bb 00 00 00 00       	mov    $0x0,%ebx
 8213f58:	e9 2c 0c 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8213f5d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8213f60:	89 44 24 08          	mov    %eax,0x8(%esp)
 8213f64:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 8213f6b:	00 
 8213f6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213f6f:	89 04 24             	mov    %eax,(%esp)
 8213f72:	e8 1f cb 46 00       	call   8680a96 <_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE>
 8213f77:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8213f7a:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8213f7e:	78 08                	js     8213f88 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xfe>
 8213f80:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 8213f83:	e9 01 0c 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8213f88:	e8 59 e6 f4 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 8213f8d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8213f94:	00 
 8213f95:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8213f9c:	00 
 8213f9d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8213fa0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8213fa4:	89 04 24             	mov    %eax,(%esp)
 8213fa7:	e8 0c a7 f5 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 8213fac:	84 c0                	test   %al,%al
 8213fae:	74 2c                	je     8213fdc <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x152>
 8213fb0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8213fb3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8213fb7:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 8213fbe:	00 
 8213fbf:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 8213fc6:	00 
 8213fc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213fca:	89 04 24             	mov    %eax,(%esp)
 8213fcd:	e8 50 80 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8213fd2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8213fd7:	e9 ad 0b 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8213fdc:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8213fe1:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 8213fe8:	00 
 8213fe9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8213fec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8213ff0:	89 04 24             	mov    %eax,(%esp)
 8213ff3:	e8 0a 4a 07 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8213ff8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8213ffb:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8213fff:	74 2e                	je     821402f <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x1a5>
 8214001:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8214004:	0f b6 c0             	movzbl %al,%eax
 8214007:	8b 55 d0             	mov    -0x30(%ebp),%edx
 821400a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821400e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8214012:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 8214019:	00 
 821401a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821401d:	89 04 24             	mov    %eax,(%esp)
 8214020:	e8 fd 7f 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8214025:	bb 00 00 00 00       	mov    $0x0,%ebx
 821402a:	e9 5a 0b 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 821402f:	83 7d d0 01          	cmpl   $0x1,-0x30(%ebp)
 8214033:	0f 85 65 03 00 00    	jne    821439e <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x514>
 8214039:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 821403f:	89 04 24             	mov    %eax,(%esp)
 8214042:	e8 6d a9 01 00       	call   822e9b4 <_ZN36PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GPC1Ev>
 8214047:	8b 45 0c             	mov    0xc(%ebp),%eax
 821404a:	89 04 24             	mov    %eax,(%esp)
 821404d:	e8 44 4c eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8214052:	89 45 85             	mov    %eax,-0x7b(%ebp)
 8214055:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214058:	89 04 24             	mov    %eax,(%esp)
 821405b:	e8 ee 7b eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8214060:	89 45 89             	mov    %eax,-0x77(%ebp)
 8214063:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 8214069:	83 c0 1a             	add    $0x1a,%eax
 821406c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214070:	8b 45 10             	mov    0x10(%ebp),%eax
 8214073:	89 04 24             	mov    %eax,(%esp)
 8214076:	e8 f5 8e 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821407b:	83 f0 01             	xor    $0x1,%eax
 821407e:	84 c0                	test   %al,%al
 8214080:	74 2b                	je     82140ad <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x223>
 8214082:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214089:	00 
 821408a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214091:	00 
 8214092:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214099:	08 
 821409a:	c7 04 24 fa c2 00 00 	movl   $0xc2fa,(%esp)
 82140a1:	e8 31 c8 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82140a6:	89 c3                	mov    %eax,%ebx
 82140a8:	e9 dc 0a 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82140ad:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 82140b3:	83 c0 1b             	add    $0x1b,%eax
 82140b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82140ba:	8b 45 10             	mov    0x10(%ebp),%eax
 82140bd:	89 04 24             	mov    %eax,(%esp)
 82140c0:	e8 eb 8f 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 82140c5:	83 f0 01             	xor    $0x1,%eax
 82140c8:	84 c0                	test   %al,%al
 82140ca:	74 2b                	je     82140f7 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x26d>
 82140cc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82140d3:	00 
 82140d4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82140db:	00 
 82140dc:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 82140e3:	08 
 82140e4:	c7 04 24 fc c2 00 00 	movl   $0xc2fc,(%esp)
 82140eb:	e8 e7 c7 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82140f0:	89 c3                	mov    %eax,%ebx
 82140f2:	e9 92 0a 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82140f7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 82140fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82140fe:	8b 45 10             	mov    0x10(%ebp),%eax
 8214101:	89 04 24             	mov    %eax,(%esp)
 8214104:	e8 37 91 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8214109:	83 f0 01             	xor    $0x1,%eax
 821410c:	84 c0                	test   %al,%al
 821410e:	74 2b                	je     821413b <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x2b1>
 8214110:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214117:	00 
 8214118:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821411f:	00 
 8214120:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214127:	08 
 8214128:	c7 04 24 02 c3 00 00 	movl   $0xc302,(%esp)
 821412f:	e8 a3 c7 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214134:	89 c3                	mov    %eax,%ebx
 8214136:	e9 4e 0a 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 821413b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 821413e:	89 45 90             	mov    %eax,-0x70(%ebp)
 8214141:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 8214147:	83 c0 21             	add    $0x21,%eax
 821414a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821414e:	8b 45 10             	mov    0x10(%ebp),%eax
 8214151:	89 04 24             	mov    %eax,(%esp)
 8214154:	e8 97 8f 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8214159:	83 f0 01             	xor    $0x1,%eax
 821415c:	84 c0                	test   %al,%al
 821415e:	74 2b                	je     821418b <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x301>
 8214160:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214167:	00 
 8214168:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821416f:	00 
 8214170:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214177:	08 
 8214178:	c7 04 24 05 c3 00 00 	movl   $0xc305,(%esp)
 821417f:	e8 53 c7 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214184:	89 c3                	mov    %eax,%ebx
 8214186:	e9 fe 09 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 821418b:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 8214191:	83 c0 25             	add    $0x25,%eax
 8214194:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214198:	8b 45 10             	mov    0x10(%ebp),%eax
 821419b:	89 04 24             	mov    %eax,(%esp)
 821419e:	e8 4d 8f 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82141a3:	83 f0 01             	xor    $0x1,%eax
 82141a6:	84 c0                	test   %al,%al
 82141a8:	74 2b                	je     82141d5 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x34b>
 82141aa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82141b1:	00 
 82141b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82141b9:	00 
 82141ba:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 82141c1:	08 
 82141c2:	c7 04 24 06 c3 00 00 	movl   $0xc306,(%esp)
 82141c9:	e8 09 c7 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82141ce:	89 c3                	mov    %eax,%ebx
 82141d0:	e9 b4 09 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82141d5:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 82141db:	83 c0 29             	add    $0x29,%eax
 82141de:	89 44 24 04          	mov    %eax,0x4(%esp)
 82141e2:	8b 45 10             	mov    0x10(%ebp),%eax
 82141e5:	89 04 24             	mov    %eax,(%esp)
 82141e8:	e8 03 8f 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82141ed:	83 f0 01             	xor    $0x1,%eax
 82141f0:	84 c0                	test   %al,%al
 82141f2:	74 2b                	je     821421f <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x395>
 82141f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82141fb:	00 
 82141fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214203:	00 
 8214204:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 821420b:	08 
 821420c:	c7 04 24 07 c3 00 00 	movl   $0xc307,(%esp)
 8214213:	e8 bf c6 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214218:	89 c3                	mov    %eax,%ebx
 821421a:	e9 6a 09 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 821421f:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8214222:	8b 45 98             	mov    -0x68(%ebp),%eax
 8214225:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214229:	89 04 24             	mov    %eax,(%esp)
 821422c:	e8 e4 fb ff ff       	call   8213e15 <_Z12IsPriceErrorii>
 8214231:	84 c0                	test   %al,%al
 8214233:	75 0a                	jne    821423f <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x3b5>
 8214235:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8214238:	3d 40 54 89 00       	cmp    $0x895440,%eax
 821423d:	7e 07                	jle    8214246 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x3bc>
 821423f:	b8 01 00 00 00       	mov    $0x1,%eax
 8214244:	eb 05                	jmp    821424b <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x3c1>
 8214246:	b8 00 00 00 00       	mov    $0x0,%eax
 821424b:	84 c0                	test   %al,%al
 821424d:	74 2c                	je     821427b <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x3f1>
 821424f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8214252:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8214256:	c7 44 24 08 98 00 00 	movl   $0x98,0x8(%esp)
 821425d:	00 
 821425e:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 8214265:	00 
 8214266:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214269:	89 04 24             	mov    %eax,(%esp)
 821426c:	e8 b1 7d 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8214271:	bb 00 00 00 00       	mov    $0x0,%ebx
 8214276:	e9 0e 09 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 821427b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 821427e:	3d 87 d2 28 00       	cmp    $0x28d287,%eax
 8214283:	76 0a                	jbe    821428f <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x405>
 8214285:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8214288:	3d 99 d2 28 00       	cmp    $0x28d299,%eax
 821428d:	76 2c                	jbe    82142bb <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x431>
 821428f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8214292:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8214296:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 821429d:	00 
 821429e:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 82142a5:	00 
 82142a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82142a9:	89 04 24             	mov    %eax,(%esp)
 82142ac:	e8 71 7d 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 82142b1:	bb 00 00 00 00       	mov    $0x0,%ebx
 82142b6:	e9 ce 08 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82142bb:	8b 45 94             	mov    -0x6c(%ebp),%eax
 82142be:	83 f8 01             	cmp    $0x1,%eax
 82142c1:	7e 2c                	jle    82142ef <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x465>
 82142c3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82142c6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82142ca:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 82142d1:	00 
 82142d2:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 82142d9:	00 
 82142da:	8b 45 0c             	mov    0xc(%ebp),%eax
 82142dd:	89 04 24             	mov    %eax,(%esp)
 82142e0:	e8 3d 7d 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 82142e5:	bb 00 00 00 00       	mov    $0x0,%ebx
 82142ea:	e9 9a 08 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82142ef:	8b 45 98             	mov    -0x68(%ebp),%eax
 82142f2:	83 f8 ff             	cmp    $0xffffffff,%eax
 82142f5:	74 4d                	je     8214344 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x4ba>
 82142f7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82142fa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82142fe:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 8214305:	00 
 8214306:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 821430d:	00 
 821430e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214311:	89 04 24             	mov    %eax,(%esp)
 8214314:	e8 09 7d 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8214319:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214320:	00 
 8214321:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214328:	00 
 8214329:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214330:	08 
 8214331:	c7 04 24 22 c3 00 00 	movl   $0xc322,(%esp)
 8214338:	e8 9a c5 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821433d:	89 c3                	mov    %eax,%ebx
 821433f:	e9 45 08 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214344:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8214347:	83 f8 31             	cmp    $0x31,%eax
 821434a:	7e 0a                	jle    8214356 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x4cc>
 821434c:	8b 45 9c             	mov    -0x64(%ebp),%eax
 821434f:	3d 40 54 89 00       	cmp    $0x895440,%eax
 8214354:	7e 2c                	jle    8214382 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x4f8>
 8214356:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8214359:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821435d:	c7 44 24 08 98 00 00 	movl   $0x98,0x8(%esp)
 8214364:	00 
 8214365:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 821436c:	00 
 821436d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214370:	89 04 24             	mov    %eax,(%esp)
 8214373:	e8 aa 7c 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8214378:	bb 00 00 00 00       	mov    $0x0,%ebx
 821437d:	e9 07 08 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214382:	a1 4c be 40 09       	mov    0x940be4c,%eax
 8214387:	8d 95 73 ff ff ff    	lea    -0x8d(%ebp),%edx
 821438d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214391:	89 04 24             	mov    %eax,(%esp)
 8214394:	e8 93 38 0e 00       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8214399:	e9 5d 07 00 00       	jmp    8214afb <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xc71>
 821439e:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 82143a4:	89 04 24             	mov    %eax,(%esp)
 82143a7:	e8 a2 a1 01 00       	call   822e54e <_ZN36PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GAC1Ev>
 82143ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 82143af:	89 04 24             	mov    %eax,(%esp)
 82143b2:	e8 df 48 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82143b7:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 82143bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82143c0:	89 04 24             	mov    %eax,(%esp)
 82143c3:	e8 86 78 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82143c8:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 82143ce:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 82143d4:	83 c0 1a             	add    $0x1a,%eax
 82143d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82143db:	8b 45 10             	mov    0x10(%ebp),%eax
 82143de:	89 04 24             	mov    %eax,(%esp)
 82143e1:	e8 8a 8b 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82143e6:	83 f0 01             	xor    $0x1,%eax
 82143e9:	84 c0                	test   %al,%al
 82143eb:	74 2b                	je     8214418 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x58e>
 82143ed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82143f4:	00 
 82143f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82143fc:	00 
 82143fd:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214404:	08 
 8214405:	c7 04 24 8a c3 00 00 	movl   $0xc38a,(%esp)
 821440c:	e8 c6 c4 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214411:	89 c3                	mov    %eax,%ebx
 8214413:	e9 71 07 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214418:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 821441e:	83 c0 1b             	add    $0x1b,%eax
 8214421:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214425:	8b 45 10             	mov    0x10(%ebp),%eax
 8214428:	89 04 24             	mov    %eax,(%esp)
 821442b:	e8 80 8c 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8214430:	83 f0 01             	xor    $0x1,%eax
 8214433:	84 c0                	test   %al,%al
 8214435:	74 2b                	je     8214462 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x5d8>
 8214437:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821443e:	00 
 821443f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214446:	00 
 8214447:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 821444e:	08 
 821444f:	c7 04 24 8c c3 00 00 	movl   $0xc38c,(%esp)
 8214456:	e8 7c c4 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821445b:	89 c3                	mov    %eax,%ebx
 821445d:	e9 27 07 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214462:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8214465:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214469:	8b 45 10             	mov    0x10(%ebp),%eax
 821446c:	89 04 24             	mov    %eax,(%esp)
 821446f:	e8 cc 8d 37 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8214474:	83 f0 01             	xor    $0x1,%eax
 8214477:	84 c0                	test   %al,%al
 8214479:	74 2b                	je     82144a6 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821447b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214482:	00 
 8214483:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821448a:	00 
 821448b:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214492:	08 
 8214493:	c7 04 24 92 c3 00 00 	movl   $0xc392,(%esp)
 821449a:	e8 38 c4 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821449f:	89 c3                	mov    %eax,%ebx
 82144a1:	e9 e3 06 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82144a6:	8b 45 b0             	mov    -0x50(%ebp),%eax
 82144a9:	89 85 53 ff ff ff    	mov    %eax,-0xad(%ebp)
 82144af:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 82144b5:	83 c0 21             	add    $0x21,%eax
 82144b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82144bc:	8b 45 10             	mov    0x10(%ebp),%eax
 82144bf:	89 04 24             	mov    %eax,(%esp)
 82144c2:	e8 29 8c 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82144c7:	83 f0 01             	xor    $0x1,%eax
 82144ca:	84 c0                	test   %al,%al
 82144cc:	74 2b                	je     82144f9 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x66f>
 82144ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82144d5:	00 
 82144d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82144dd:	00 
 82144de:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 82144e5:	08 
 82144e6:	c7 04 24 95 c3 00 00 	movl   $0xc395,(%esp)
 82144ed:	e8 e5 c3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82144f2:	89 c3                	mov    %eax,%ebx
 82144f4:	e9 90 06 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82144f9:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 82144ff:	83 c0 25             	add    $0x25,%eax
 8214502:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214506:	8b 45 10             	mov    0x10(%ebp),%eax
 8214509:	89 04 24             	mov    %eax,(%esp)
 821450c:	e8 df 8b 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8214511:	83 f0 01             	xor    $0x1,%eax
 8214514:	84 c0                	test   %al,%al
 8214516:	74 2b                	je     8214543 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x6b9>
 8214518:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821451f:	00 
 8214520:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214527:	00 
 8214528:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 821452f:	08 
 8214530:	c7 04 24 96 c3 00 00 	movl   $0xc396,(%esp)
 8214537:	e8 9b c3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821453c:	89 c3                	mov    %eax,%ebx
 821453e:	e9 46 06 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214543:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 8214549:	83 c0 29             	add    $0x29,%eax
 821454c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214550:	8b 45 10             	mov    0x10(%ebp),%eax
 8214553:	89 04 24             	mov    %eax,(%esp)
 8214556:	e8 95 8b 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821455b:	83 f0 01             	xor    $0x1,%eax
 821455e:	84 c0                	test   %al,%al
 8214560:	74 2b                	je     821458d <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x703>
 8214562:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214569:	00 
 821456a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214571:	00 
 8214572:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214579:	08 
 821457a:	c7 04 24 97 c3 00 00 	movl   $0xc397,(%esp)
 8214581:	e8 51 c3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214586:	89 c3                	mov    %eax,%ebx
 8214588:	e9 fc 05 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 821458d:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 8214593:	83 c0 2d             	add    $0x2d,%eax
 8214596:	89 44 24 04          	mov    %eax,0x4(%esp)
 821459a:	8b 45 10             	mov    0x10(%ebp),%eax
 821459d:	89 04 24             	mov    %eax,(%esp)
 82145a0:	e8 4b 8b 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82145a5:	83 f0 01             	xor    $0x1,%eax
 82145a8:	84 c0                	test   %al,%al
 82145aa:	74 2b                	je     82145d7 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x74d>
 82145ac:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82145b3:	00 
 82145b4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82145bb:	00 
 82145bc:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 82145c3:	08 
 82145c4:	c7 04 24 98 c3 00 00 	movl   $0xc398,(%esp)
 82145cb:	e8 07 c3 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82145d0:	89 c3                	mov    %eax,%ebx
 82145d2:	e9 b2 05 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82145d7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82145de:	e9 aa 00 00 00       	jmp    821468d <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x803>
 82145e3:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82145e6:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 82145ec:	83 c2 18             	add    $0x18,%edx
 82145ef:	01 d2                	add    %edx,%edx
 82145f1:	01 d0                	add    %edx,%eax
 82145f3:	83 c0 01             	add    $0x1,%eax
 82145f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82145fa:	8b 45 10             	mov    0x10(%ebp),%eax
 82145fd:	89 04 24             	mov    %eax,(%esp)
 8214600:	e8 bb 89 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8214605:	83 f0 01             	xor    $0x1,%eax
 8214608:	84 c0                	test   %al,%al
 821460a:	74 2b                	je     8214637 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x7ad>
 821460c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214613:	00 
 8214614:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821461b:	00 
 821461c:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214623:	08 
 8214624:	c7 04 24 a2 c3 00 00 	movl   $0xc3a2,(%esp)
 821462b:	e8 a7 c2 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214630:	89 c3                	mov    %eax,%ebx
 8214632:	e9 52 05 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214637:	8b 55 ec             	mov    -0x14(%ebp),%edx
 821463a:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 8214640:	83 c2 30             	add    $0x30,%edx
 8214643:	01 d0                	add    %edx,%eax
 8214645:	83 c0 09             	add    $0x9,%eax
 8214648:	89 44 24 04          	mov    %eax,0x4(%esp)
 821464c:	8b 45 10             	mov    0x10(%ebp),%eax
 821464f:	89 04 24             	mov    %eax,(%esp)
 8214652:	e8 cb 88 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8214657:	83 f0 01             	xor    $0x1,%eax
 821465a:	84 c0                	test   %al,%al
 821465c:	74 2b                	je     8214689 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x7ff>
 821465e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214665:	00 
 8214666:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821466d:	00 
 821466e:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214675:	08 
 8214676:	c7 04 24 a5 c3 00 00 	movl   $0xc3a5,(%esp)
 821467d:	e8 55 c2 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214682:	89 c3                	mov    %eax,%ebx
 8214684:	e9 00 05 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214689:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 821468d:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 8214691:	0f 9e c0             	setle  %al
 8214694:	84 c0                	test   %al,%al
 8214696:	0f 85 47 ff ff ff    	jne    82145e3 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x759>
 821469c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 821469f:	89 c3                	mov    %eax,%ebx
 82146a1:	e8 f5 7a eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 82146a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82146aa:	89 04 24             	mov    %eax,(%esp)
 82146ad:	e8 80 b3 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82146b2:	89 45 dc             	mov    %eax,-0x24(%ebp)
 82146b5:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 82146b9:	75 2b                	jne    82146e6 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x85c>
 82146bb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82146c2:	00 
 82146c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82146ca:	00 
 82146cb:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 82146d2:	08 
 82146d3:	c7 04 24 aa c3 00 00 	movl   $0xc3aa,(%esp)
 82146da:	e8 f8 c1 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82146df:	89 c3                	mov    %eax,%ebx
 82146e1:	e9 a3 04 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82146e6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82146e9:	8b 00                	mov    (%eax),%eax
 82146eb:	83 c0 4c             	add    $0x4c,%eax
 82146ee:	8b 10                	mov    (%eax),%edx
 82146f0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82146f3:	89 04 24             	mov    %eax,(%esp)
 82146f6:	ff d2                	call   *%edx
 82146f8:	84 c0                	test   %al,%al
 82146fa:	74 3b                	je     8214737 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x8ad>
 82146fc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8214703:	eb 27                	jmp    821472c <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x8a2>
 8214705:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8214708:	83 c0 18             	add    $0x18,%eax
 821470b:	0f b7 84 45 37 ff ff 	movzwl -0xc9(%ebp,%eax,2),%eax
 8214712:	ff 
 8214713:	66 85 c0             	test   %ax,%ax
 8214716:	75 10                	jne    8214728 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x89e>
 8214718:	8b 45 f0             	mov    -0x10(%ebp),%eax
 821471b:	83 c0 18             	add    $0x18,%eax
 821471e:	66 c7 84 45 37 ff ff 	movw   $0x7530,-0xc9(%ebp,%eax,2)
 8214725:	ff 30 75 
 8214728:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 821472c:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 8214730:	0f 9e c0             	setle  %al
 8214733:	84 c0                	test   %al,%al
 8214735:	75 ce                	jne    8214705 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x87b>
 8214737:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 821473d:	83 c0 31             	add    $0x31,%eax
 8214740:	89 04 24             	mov    %eax,(%esp)
 8214743:	e8 e8 64 01 00       	call   822ac30 <_ZN12ROI_Category5_sortEv>
 8214748:	e8 4e 7a eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821474d:	05 e8 04 00 00       	add    $0x4e8,%eax
 8214752:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8214755:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 821475c:	e8 3d 75 eb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8214761:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8214764:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8214767:	8b 55 e0             	mov    -0x20(%ebp),%edx
 821476a:	89 54 24 04          	mov    %edx,0x4(%esp)
 821476e:	89 04 24             	mov    %eax,(%esp)
 8214771:	e8 8a 33 02 00       	call   8237b00 <_ZNSt6vectorI25stAuctionLimitItemParam_tSaIS0_EE5beginEv>
 8214776:	83 ec 04             	sub    $0x4,%esp
 8214779:	e9 78 01 00 00       	jmp    82148f6 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xa6c>
 821477e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8214781:	89 04 24             	mov    %eax,(%esp)
 8214784:	e8 03 34 02 00       	call   8237b8c <_ZNK9__gnu_cxx17__normal_iteratorIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEptEv>
 8214789:	8b 00                	mov    (%eax),%eax
 821478b:	83 f8 ff             	cmp    $0xffffffff,%eax
 821478e:	74 16                	je     82147a6 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x91c>
 8214790:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8214793:	89 04 24             	mov    %eax,(%esp)
 8214796:	e8 f1 33 02 00       	call   8237b8c <_ZNK9__gnu_cxx17__normal_iteratorIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEptEv>
 821479b:	8b 00                	mov    (%eax),%eax
 821479d:	89 c2                	mov    %eax,%edx
 821479f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 82147a2:	39 c2                	cmp    %eax,%edx
 82147a4:	75 07                	jne    82147ad <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x923>
 82147a6:	b8 01 00 00 00       	mov    $0x1,%eax
 82147ab:	eb 05                	jmp    82147b2 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x928>
 82147ad:	b8 00 00 00 00       	mov    $0x0,%eax
 82147b2:	84 c0                	test   %al,%al
 82147b4:	0f 84 31 01 00 00    	je     82148eb <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xa61>
 82147ba:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82147bd:	89 04 24             	mov    %eax,(%esp)
 82147c0:	e8 c7 33 02 00       	call   8237b8c <_ZNK9__gnu_cxx17__normal_iteratorIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEptEv>
 82147c5:	8b 40 04             	mov    0x4(%eax),%eax
 82147c8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 82147cb:	73 1a                	jae    82147e7 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x95d>
 82147cd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82147d0:	89 04 24             	mov    %eax,(%esp)
 82147d3:	e8 b4 33 02 00       	call   8237b8c <_ZNK9__gnu_cxx17__normal_iteratorIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEptEv>
 82147d8:	8b 40 08             	mov    0x8(%eax),%eax
 82147db:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 82147de:	76 07                	jbe    82147e7 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x95d>
 82147e0:	b8 01 00 00 00       	mov    $0x1,%eax
 82147e5:	eb 05                	jmp    82147ec <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x962>
 82147e7:	b8 00 00 00 00       	mov    $0x0,%eax
 82147ec:	84 c0                	test   %al,%al
 82147ee:	0f 84 f7 00 00 00    	je     82148eb <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xa61>
 82147f4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82147f7:	89 04 24             	mov    %eax,(%esp)
 82147fa:	e8 4d 95 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82147ff:	c7 44 24 08 ba 00 00 	movl   $0xba,0x8(%esp)
 8214806:	00 
 8214807:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821480e:	00 
 821480f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8214812:	89 04 24             	mov    %eax,(%esp)
 8214815:	e8 e2 70 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821481a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8214821:	00 
 8214822:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8214825:	89 04 24             	mov    %eax,(%esp)
 8214828:	e8 f3 70 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821482d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8214834:	00 
 8214835:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8214838:	89 04 24             	mov    %eax,(%esp)
 821483b:	e8 e0 70 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8214840:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8214843:	89 04 24             	mov    %eax,(%esp)
 8214846:	e8 41 33 02 00       	call   8237b8c <_ZNK9__gnu_cxx17__normal_iteratorIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEptEv>
 821484b:	8b 00                	mov    (%eax),%eax
 821484d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214851:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8214854:	89 04 24             	mov    %eax,(%esp)
 8214857:	e8 e0 70 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821485c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 821485f:	89 04 24             	mov    %eax,(%esp)
 8214862:	e8 25 33 02 00       	call   8237b8c <_ZNK9__gnu_cxx17__normal_iteratorIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEptEv>
 8214867:	8b 40 04             	mov    0x4(%eax),%eax
 821486a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821486e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8214871:	89 04 24             	mov    %eax,(%esp)
 8214874:	e8 c3 70 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8214879:	8d 45 ac             	lea    -0x54(%ebp),%eax
 821487c:	89 04 24             	mov    %eax,(%esp)
 821487f:	e8 08 33 02 00       	call   8237b8c <_ZNK9__gnu_cxx17__normal_iteratorIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEptEv>
 8214884:	8b 40 08             	mov    0x8(%eax),%eax
 8214887:	89 44 24 04          	mov    %eax,0x4(%esp)
 821488b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 821488e:	89 04 24             	mov    %eax,(%esp)
 8214891:	e8 a6 70 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8214896:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821489d:	00 
 821489e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82148a1:	89 04 24             	mov    %eax,(%esp)
 82148a4:	e8 af 70 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82148a9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82148ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 82148b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82148b3:	89 04 24             	mov    %eax,(%esp)
 82148b6:	e8 ff 3c 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82148bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 82148c0:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82148c3:	89 04 24             	mov    %eax,(%esp)
 82148c6:	e8 b5 95 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82148cb:	e9 b9 02 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82148d0:	89 d3                	mov    %edx,%ebx
 82148d2:	89 c6                	mov    %eax,%esi
 82148d4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 82148d7:	89 04 24             	mov    %eax,(%esp)
 82148da:	e8 a1 95 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82148df:	89 f0                	mov    %esi,%eax
 82148e1:	89 da                	mov    %ebx,%edx
 82148e3:	89 04 24             	mov    %eax,(%esp)
 82148e6:	e8 65 ee 8c 00       	call   8ae3750 <_Unwind_Resume>
 82148eb:	8d 45 ac             	lea    -0x54(%ebp),%eax
 82148ee:	89 04 24             	mov    %eax,(%esp)
 82148f1:	e8 80 32 02 00       	call   8237b76 <_ZN9__gnu_cxx17__normal_iteratorIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEppEv>
 82148f6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82148f9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 82148fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214900:	89 04 24             	mov    %eax,(%esp)
 8214903:	e8 1c 32 02 00       	call   8237b24 <_ZNSt6vectorI25stAuctionLimitItemParam_tSaIS0_EE3endEv>
 8214908:	83 ec 04             	sub    $0x4,%esp
 821490b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 821490e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214912:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8214915:	89 04 24             	mov    %eax,(%esp)
 8214918:	e8 2d 32 02 00       	call   8237b4a <_ZN9__gnu_cxxneIP25stAuctionLimitItemParam_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 821491d:	84 c0                	test   %al,%al
 821491f:	0f 85 59 fe ff ff    	jne    821477e <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0x8f4>
 8214925:	0f b7 85 51 ff ff ff 	movzwl -0xaf(%ebp),%eax
 821492c:	0f b7 d8             	movzwl %ax,%ebx
 821492f:	0f b6 85 50 ff ff ff 	movzbl -0xb0(%ebp),%eax
 8214936:	0f b6 c0             	movzbl %al,%eax
 8214939:	89 04 24             	mov    %eax,(%esp)
 821493c:	e8 04 2f ee ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 8214941:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8214945:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214949:	8b 45 0c             	mov    0xc(%ebp),%eax
 821494c:	89 04 24             	mov    %eax,(%esp)
 821494f:	e8 ee 1f 43 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8214954:	84 c0                	test   %al,%al
 8214956:	74 2d                	je     8214985 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xafb>
 8214958:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821495f:	00 
 8214960:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8214967:	00 
 8214968:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 821496f:	00 
 8214970:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214973:	89 04 24             	mov    %eax,(%esp)
 8214976:	e8 a7 76 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 821497b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8214980:	e9 04 02 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214985:	8b 85 5b ff ff ff    	mov    -0xa5(%ebp),%eax
 821498b:	83 f8 ff             	cmp    $0xffffffff,%eax
 821498e:	7c 0b                	jl     821499b <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xb11>
 8214990:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 8214996:	83 f8 ff             	cmp    $0xffffffff,%eax
 8214999:	7d 2d                	jge    82149c8 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xb3e>
 821499b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82149a2:	00 
 82149a3:	c7 44 24 08 98 00 00 	movl   $0x98,0x8(%esp)
 82149aa:	00 
 82149ab:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 82149b2:	00 
 82149b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82149b6:	89 04 24             	mov    %eax,(%esp)
 82149b9:	e8 64 76 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 82149be:	bb 00 00 00 00       	mov    $0x0,%ebx
 82149c3:	e9 c1 01 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 82149c8:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 82149ce:	83 f8 ff             	cmp    $0xffffffff,%eax
 82149d1:	74 3d                	je     8214a10 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xb86>
 82149d3:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 82149d9:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 82149df:	39 c2                	cmp    %eax,%edx
 82149e1:	7c 2d                	jl     8214a10 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xb86>
 82149e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82149ea:	00 
 82149eb:	c7 44 24 08 98 00 00 	movl   $0x98,0x8(%esp)
 82149f2:	00 
 82149f3:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 82149fa:	00 
 82149fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82149fe:	89 04 24             	mov    %eax,(%esp)
 8214a01:	e8 1c 76 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8214a06:	bb 00 00 00 00       	mov    $0x0,%ebx
 8214a0b:	e9 79 01 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214a10:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8214a13:	89 c3                	mov    %eax,%ebx
 8214a15:	e8 81 77 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8214a1a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8214a1e:	89 04 24             	mov    %eax,(%esp)
 8214a21:	e8 0c b0 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8214a26:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8214a29:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8214a2d:	75 2c                	jne    8214a5b <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xbd1>
 8214a2f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8214a32:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8214a36:	c7 44 24 08 91 00 00 	movl   $0x91,0x8(%esp)
 8214a3d:	00 
 8214a3e:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 8214a45:	00 
 8214a46:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214a49:	89 04 24             	mov    %eax,(%esp)
 8214a4c:	e8 d1 75 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8214a51:	bb 00 00 00 00       	mov    $0x0,%ebx
 8214a56:	e9 2e 01 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214a5b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8214a5e:	89 04 24             	mov    %eax,(%esp)
 8214a61:	e8 94 c8 ed ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8214a66:	84 c0                	test   %al,%al
 8214a68:	74 7a                	je     8214ae4 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xc5a>
 8214a6a:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 8214a70:	8b 85 5b ff ff ff    	mov    -0xa5(%ebp),%eax
 8214a76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214a7a:	89 04 24             	mov    %eax,(%esp)
 8214a7d:	e8 be f3 ff ff       	call   8213e40 <_Z21IsValidMultiplyResultii>
 8214a82:	83 f0 01             	xor    $0x1,%eax
 8214a85:	84 c0                	test   %al,%al
 8214a87:	75 1f                	jne    8214aa8 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xc1e>
 8214a89:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 8214a8f:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 8214a95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214a99:	89 04 24             	mov    %eax,(%esp)
 8214a9c:	e8 9f f3 ff ff       	call   8213e40 <_Z21IsValidMultiplyResultii>
 8214aa1:	83 f0 01             	xor    $0x1,%eax
 8214aa4:	84 c0                	test   %al,%al
 8214aa6:	74 07                	je     8214aaf <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xc25>
 8214aa8:	b8 01 00 00 00       	mov    $0x1,%eax
 8214aad:	eb 05                	jmp    8214ab4 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xc2a>
 8214aaf:	b8 00 00 00 00       	mov    $0x0,%eax
 8214ab4:	84 c0                	test   %al,%al
 8214ab6:	74 2c                	je     8214ae4 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xc5a>
 8214ab8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8214abb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8214abf:	c7 44 24 08 98 00 00 	movl   $0x98,0x8(%esp)
 8214ac6:	00 
 8214ac7:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 8214ace:	00 
 8214acf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214ad2:	89 04 24             	mov    %eax,(%esp)
 8214ad5:	e8 48 75 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8214ada:	bb 00 00 00 00       	mov    $0x0,%ebx
 8214adf:	e9 a5 00 00 00       	jmp    8214b89 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcff>
 8214ae4:	a1 48 be 40 09       	mov    0x940be48,%eax
 8214ae9:	8d 95 36 ff ff ff    	lea    -0xca(%ebp),%edx
 8214aef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214af3:	89 04 24             	mov    %eax,(%esp)
 8214af6:	e8 21 30 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8214afb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8214b02:	eb 75                	jmp    8214b79 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcef>
 8214b04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8214b07:	8b 04 85 d8 01 37 09 	mov    0x93701d8(,%eax,4),%eax
 8214b0e:	89 c3                	mov    %eax,%ebx
 8214b10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214b13:	89 04 24             	mov    %eax,(%esp)
 8214b16:	e8 33 71 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8214b1b:	39 c3                	cmp    %eax,%ebx
 8214b1d:	0f 94 c0             	sete   %al
 8214b20:	84 c0                	test   %al,%al
 8214b22:	74 51                	je     8214b75 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xceb>
 8214b24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214b27:	89 04 24             	mov    %eax,(%esp)
 8214b2a:	e8 1f 71 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8214b2f:	89 c3                	mov    %eax,%ebx
 8214b31:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214b38:	00 
 8214b39:	c7 44 24 08 72 c4 00 	movl   $0xc472,0x8(%esp)
 8214b40:	00 
 8214b41:	c7 44 24 04 00 de bc 	movl   $0x8bcde00,0x4(%esp)
 8214b48:	08 
 8214b49:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8214b4c:	89 04 24             	mov    %eax,(%esp)
 8214b4f:	e8 c4 ab 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8214b54:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8214b58:	c7 44 24 08 13 33 bc 	movl   $0x8bc3313,0x8(%esp)
 8214b5f:	08 
 8214b60:	c7 44 24 04 f7 32 bc 	movl   $0x8bc32f7,0x4(%esp)
 8214b67:	08 
 8214b68:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8214b6b:	89 04 24             	mov    %eax,(%esp)
 8214b6e:	e8 15 ac 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8214b73:	eb 0f                	jmp    8214b84 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xcfa>
 8214b75:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8214b79:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8214b7d:	0f 9e c0             	setle  %al
 8214b80:	84 c0                	test   %al,%al
 8214b82:	75 80                	jne    8214b04 <_ZN28Dispatcher_AuctionRegistItem12dispatch_sigEP5CUserR9PacketBuf+0xc7a>
 8214b84:	bb 00 00 00 00       	mov    $0x0,%ebx
 8214b89:	89 d8                	mov    %ebx,%eax
 8214b8b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8214b8e:	83 c4 00             	add    $0x0,%esp
 8214b91:	5b                   	pop    %ebx
 8214b92:	5e                   	pop    %esi
 8214b93:	5d                   	pop    %ebp
 8214b94:	c3                   	ret
 8214b95:	90                   	nop

```

```c
// Dispatcher_AuctionRegistItem::dispatch_sig @ 0x8213e8a

/* Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&) */

int __thiscall
Dispatcher_AuctionRegistItem::dispatch_sig
          (Dispatcher_AuctionRegistItem *this,CUser *param_1,PacketBuf *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  CDataManager *pCVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GA local_ce;
  short asStack_cd [8];
  undefined4 local_bc;
  undefined4 local_b8;
  uchar local_b4;
  ushort local_b3;
  uint local_b1;
  int local_ad;
  int local_a9;
  int local_a5;
  int iStack_a1;
  ROI_Category aRStack_9d [8];
  char acStack_95 [4];
  PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GP local_91 [18];
  undefined4 local_7f;
  undefined4 local_7b;
  uchar uStack_77;
  ushort uStack_76;
  uint local_74;
  int local_70;
  int local_6c;
  int local_68;
  PacketGuard local_64 [12];
  __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
  local_58 [4];
  uint local_54;
  uint local_50;
  byte local_49;
  __normal_iterator local_48 [4];
  cMyTrace local_44 [16];
  uint local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  CItem *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_49);
  if (cVar2 == '\x01') {
    if (local_49 < 2) {
      local_34 = (uint)local_49;
      if ((local_34 == 1) &&
         (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar4 < 0x1f)) {
        CUser::SendCmdErrorPacket(param_1,0xba,0x75,local_34);
        local_30 = 0;
      }
      else {
        local_30 = CUser::AuctionPreCheck(param_1,0xba,local_34);
        if (local_30 < 0) {
          pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,5);
          if (cVar2 == '\0') {
            local_2c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x32)
            ;
            if (local_2c == 0) {
              if (local_34 == 1) {
                PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GP::PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GP(local_91)
                ;
                local_7f = CUser::GetUID(param_1);
                local_7b = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                cVar2 = PacketBuf::get_byte(param_2,&uStack_77);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc2fa,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_short(param_2,&uStack_76);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc2fc,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_50);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc302,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                local_74 = local_50;
                cVar2 = PacketBuf::get_int(param_2,&local_70);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc305,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_6c);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc306,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_68);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc307,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = IsPriceError(local_6c,local_68);
                if ((cVar2 == '\0') && (local_68 < 0x895441)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x98,local_34);
                  return 0;
                }
                if ((local_50 < 0x28d288) || (0x28d299 < local_50)) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x91,local_34);
                  return 0;
                }
                if (1 < local_70) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x91,local_34);
                  return 0;
                }
                if (local_6c != -1) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x91,local_34);
                  iVar4 = LineFunc(0xc322,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                if ((local_68 < 0x32) || (9000000 < local_68)) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x98,local_34);
                  return 0;
                }
                CCeraAuctionServerProxy::SendPacket
                          (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_91);
              }
              else {
                PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GA::PCK_AUCTION_ASK_REGISTED_ITEM_NUM_GA
                          (&local_ce);
                local_bc = CUser::GetUID(param_1);
                local_b8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                cVar2 = PacketBuf::get_byte(param_2,&local_b4);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc38a,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_short(param_2,&local_b3);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc38c,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_54);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc392,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                local_b1 = local_54;
                cVar2 = PacketBuf::get_int(param_2,&local_ad);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc395,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_a9);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc396,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&local_a5);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc397,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = PacketBuf::get_int(param_2,&iStack_a1);
                if (cVar2 != '\x01') {
                  iVar4 = LineFunc(0xc398,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                for (local_18 = 0; uVar1 = local_54, local_18 < 3; local_18 = local_18 + 1) {
                  cVar2 = PacketBuf::get_short(param_2,asStack_cd + local_18 + 0x18);
                  if (cVar2 != '\x01') {
                    iVar4 = LineFunc(0xc3a2,
                                     "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    return iVar4;
                  }
                  cVar2 = PacketBuf::get_byte(param_2,acStack_95 + local_18);
                  if (cVar2 != '\x01') {
                    iVar4 = LineFunc(0xc3a5,
                                     "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    return iVar4;
                  }
                }
                pCVar6 = (CDataManager *)G_CDataManager();
                local_28 = (int *)CDataManager::find_item(pCVar6,uVar1);
                if (local_28 == (int *)0x0) {
                  iVar4 = LineFunc(0xc3aa,
                                   "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return iVar4;
                }
                cVar2 = (**(code **)(*local_28 + 0x4c))(local_28);
                if (cVar2 != '\0') {
                  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
                    if (asStack_cd[local_14 + 0x18] == 0) {
                      asStack_cd[local_14 + 0x18] = 30000;
                    }
                  }
                }
                ROI_Category::_sort(aRStack_9d);
                local_24 = G_CDataManager();
                local_24 = local_24 + 0x4e8;
                local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>::
                begin();
                while( true ) {
                  std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>::
                  end();
                  bVar3 = __gnu_cxx::operator!=(local_58,local_48);
                  if (!bVar3) break;
                  piVar7 = (int *)__gnu_cxx::
                                  __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                                  ::operator->(local_58);
                  if ((*piVar7 == -1) ||
                     (puVar8 = (uint *)__gnu_cxx::
                                       __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                                       ::operator->(local_58), *puVar8 == local_54)) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (bVar3) {
                    iVar4 = __gnu_cxx::
                            __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                            ::operator->(local_58);
                    if ((*(uint *)(iVar4 + 4) < local_20) &&
                       (iVar4 = __gnu_cxx::
                                __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                                ::operator->(local_58), local_20 < *(uint *)(iVar4 + 8))) {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                    if (bVar3) {
                      PacketGuard::PacketGuard(local_64);
                    /* try { // try from 08214815 to 082148ba has its CatchHandler @ 082148d0 */
                      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0xba);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,7);
                      piVar7 = (int *)__gnu_cxx::
                                      __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                                      ::operator->(local_58);
                      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,*piVar7);
                      iVar4 = __gnu_cxx::
                              __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                              ::operator->(local_58);
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_64,*(int *)(iVar4 + 4));
                      iVar4 = __gnu_cxx::
                              __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                              ::operator->(local_58);
                      InterfacePacketBuf::put_int
                                ((InterfacePacketBuf *)local_64,*(int *)(iVar4 + 8));
                      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
                      CUser::Send(param_1,local_64);
                      PacketGuard::~PacketGuard(local_64);
                      return 0;
                    }
                  }
                  __gnu_cxx::
                  __normal_iterator<stAuctionLimitItemParam_t*,std::vector<stAuctionLimitItemParam_t,std::allocator<stAuctionLimitItemParam_t>>>
                  ::operator++(local_58);
                }
                iVar4 = GetInvenTypeFromItemSpace(local_b4);
                cVar2 = CUser::CheckItemLock(param_1,iVar4,(uint)local_b3);
                if (cVar2 != '\0') {
                  CUser::SendCmdErrorPacket(param_1,0xba,0xd5,0);
                  return 0;
                }
                if ((local_a9 < -1) || (local_a5 < -1)) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x98,0);
                  return 0;
                }
                if ((local_a5 != -1) && (local_a5 <= local_a9)) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x98,0);
                  return 0;
                }
                pCVar6 = (CDataManager *)G_CDataManager();
                local_1c = (CItem *)CDataManager::find_item(pCVar6,local_54);
                if (local_1c == (CItem *)0x0) {
                  CUser::SendCmdErrorPacket(param_1,0xba,0x91,local_34);
                  return 0;
                }
                cVar2 = CItem::is_stackable(local_1c);
                if (cVar2 != '\0') {
                  cVar2 = IsValidMultiplyResult(local_a9,local_ad);
                  if ((cVar2 == '\x01') &&
                     (cVar2 = IsValidMultiplyResult(local_a5,local_ad), cVar2 == '\x01')) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    CUser::SendCmdErrorPacket(param_1,0xba,0x98,local_34);
                    return 0;
                  }
                }
                CAuctionServerProxy::SendPacket
                          (GlobalData::s_auction_proxy,(PACKET_HEADER *)&local_ce);
              }
              for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
                iVar4 = *(int *)(gmList + local_10 * 4);
                iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                if (iVar4 == iVar9) {
                  uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_44,
                                     "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0xc472,0);
                  cMyTrace::operator()
                            (local_44,"Trace Auction Delay, %s(%d)","REQ AuctionRegistItem",uVar10);
                  break;
                }
              }
              local_30 = 0;
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xba,local_2c & 0xff,local_34);
              local_30 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xba,0xd1,local_34);
            local_30 = 0;
          }
        }
      }
    }
    else {
      local_30 = LineFunc(0xc297,
                          "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                          ,0,0);
    }
  }
  else {
    local_30 = LineFunc(0xc294,
                        "virtual int Dispatcher_AuctionRegistItem::dispatch_sig(CUser*, PacketBuf&)"
                        ,0,0);
  }
  return local_30;
}

```

