# Dispatcher_CreatureScriptMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08204d8e Dispatcher_CreatureScriptMessage::dispatch_sig  [0x08204d8e-0x82051cf] ===
 8204d8e:	55                   	push   %ebp
 8204d8f:	89 e5                	mov    %esp,%ebp
 8204d91:	57                   	push   %edi
 8204d92:	56                   	push   %esi
 8204d93:	53                   	push   %ebx
 8204d94:	81 ec cc 02 00 00    	sub    $0x2cc,%esp
 8204d9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204d9d:	89 04 24             	mov    %eax,(%esp)
 8204da0:	e8 e7 55 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8204da5:	83 f8 02             	cmp    $0x2,%eax
 8204da8:	0f 9e c0             	setle  %al
 8204dab:	84 c0                	test   %al,%al
 8204dad:	74 0a                	je     8204db9 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8204daf:	b8 00 00 00 00       	mov    $0x0,%eax
 8204db4:	e9 0c 04 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204db9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204dbc:	89 04 24             	mov    %eax,(%esp)
 8204dbf:	e8 a0 07 44 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8204dc4:	84 c0                	test   %al,%al
 8204dc6:	0f 94 c0             	sete   %al
 8204dc9:	84 c0                	test   %al,%al
 8204dcb:	74 0a                	je     8204dd7 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x49>
 8204dcd:	b8 00 00 00 00       	mov    $0x0,%eax
 8204dd2:	e9 ee 03 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204dd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204dda:	89 04 24             	mov    %eax,(%esp)
 8204ddd:	e8 50 b6 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8204de2:	85 c0                	test   %eax,%eax
 8204de4:	0f 94 c0             	sete   %al
 8204de7:	84 c0                	test   %al,%al
 8204de9:	74 0a                	je     8204df5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x67>
 8204deb:	b8 00 00 00 00       	mov    $0x0,%eax
 8204df0:	e9 d0 03 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204df5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204df8:	89 04 24             	mov    %eax,(%esp)
 8204dfb:	e8 7e 54 ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8204e00:	89 04 24             	mov    %eax,(%esp)
 8204e03:	e8 00 26 fb ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 8204e08:	89 04 24             	mov    %eax,(%esp)
 8204e0b:	e8 98 85 02 00       	call   822d3a8 <_ZNK13user_creature12CCreatureMgr18IsEquippedCreatureEv>
 8204e10:	83 f0 01             	xor    $0x1,%eax
 8204e13:	84 c0                	test   %al,%al
 8204e15:	74 0a                	je     8204e21 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x93>
 8204e17:	b8 00 00 00 00       	mov    $0x0,%eax
 8204e1c:	e9 a4 03 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204e21:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204e27:	83 c0 0d             	add    $0xd,%eax
 8204e2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204e2e:	8b 45 10             	mov    0x10(%ebp),%eax
 8204e31:	89 04 24             	mov    %eax,(%esp)
 8204e34:	e8 e9 80 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8204e39:	83 f0 01             	xor    $0x1,%eax
 8204e3c:	84 c0                	test   %al,%al
 8204e3e:	74 29                	je     8204e69 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0xdb>
 8204e40:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204e47:	00 
 8204e48:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204e4f:	00 
 8204e50:	c7 44 24 04 80 ee bc 	movl   $0x8bcee80,0x4(%esp)
 8204e57:	08 
 8204e58:	c7 04 24 f3 9c 00 00 	movl   $0x9cf3,(%esp)
 8204e5f:	e8 73 ba 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204e64:	e9 5c 03 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204e69:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204e6f:	83 c0 0e             	add    $0xe,%eax
 8204e72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204e76:	8b 45 10             	mov    0x10(%ebp),%eax
 8204e79:	89 04 24             	mov    %eax,(%esp)
 8204e7c:	e8 2f 82 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8204e81:	83 f0 01             	xor    $0x1,%eax
 8204e84:	84 c0                	test   %al,%al
 8204e86:	74 29                	je     8204eb1 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x123>
 8204e88:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204e8f:	00 
 8204e90:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204e97:	00 
 8204e98:	c7 44 24 04 80 ee bc 	movl   $0x8bcee80,0x4(%esp)
 8204e9f:	08 
 8204ea0:	c7 04 24 f4 9c 00 00 	movl   $0x9cf4,(%esp)
 8204ea7:	e8 2b ba 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204eac:	e9 14 03 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204eb1:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204eb7:	83 c0 10             	add    $0x10,%eax
 8204eba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204ebe:	8b 45 10             	mov    0x10(%ebp),%eax
 8204ec1:	89 04 24             	mov    %eax,(%esp)
 8204ec4:	e8 77 83 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8204ec9:	83 f0 01             	xor    $0x1,%eax
 8204ecc:	84 c0                	test   %al,%al
 8204ece:	74 29                	je     8204ef9 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x16b>
 8204ed0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204ed7:	00 
 8204ed8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204edf:	00 
 8204ee0:	c7 44 24 04 80 ee bc 	movl   $0x8bcee80,0x4(%esp)
 8204ee7:	08 
 8204ee8:	c7 04 24 f5 9c 00 00 	movl   $0x9cf5,(%esp)
 8204eef:	e8 e3 b9 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204ef4:	e9 cc 02 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204ef9:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204eff:	83 c0 36             	add    $0x36,%eax
 8204f02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204f06:	8b 45 10             	mov    0x10(%ebp),%eax
 8204f09:	89 04 24             	mov    %eax,(%esp)
 8204f0c:	e8 df 81 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8204f11:	83 f0 01             	xor    $0x1,%eax
 8204f14:	84 c0                	test   %al,%al
 8204f16:	74 29                	je     8204f41 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x1b3>
 8204f18:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204f1f:	00 
 8204f20:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204f27:	00 
 8204f28:	c7 44 24 04 80 ee bc 	movl   $0x8bcee80,0x4(%esp)
 8204f2f:	08 
 8204f30:	c7 04 24 f6 9c 00 00 	movl   $0x9cf6,(%esp)
 8204f37:	e8 9b b9 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204f3c:	e9 84 02 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204f41:	8b 85 df fe ff ff    	mov    -0x121(%ebp),%eax
 8204f47:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8204f4b:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8204f52:	00 
 8204f53:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204f59:	83 c0 3a             	add    $0x3a,%eax
 8204f5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204f60:	8b 45 10             	mov    0x10(%ebp),%eax
 8204f63:	89 04 24             	mov    %eax,(%esp)
 8204f66:	e8 51 83 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8204f6b:	83 f0 01             	xor    $0x1,%eax
 8204f6e:	84 c0                	test   %al,%al
 8204f70:	74 29                	je     8204f9b <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x20d>
 8204f72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204f79:	00 
 8204f7a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204f81:	00 
 8204f82:	c7 44 24 04 80 ee bc 	movl   $0x8bcee80,0x4(%esp)
 8204f89:	08 
 8204f8a:	c7 04 24 f7 9c 00 00 	movl   $0x9cf7,(%esp)
 8204f91:	e8 41 b9 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204f96:	e9 2a 02 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204f9b:	0f b6 85 b6 fe ff ff 	movzbl -0x14a(%ebp),%eax
 8204fa2:	3c 07                	cmp    $0x7,%al
 8204fa4:	74 0f                	je     8204fb5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x227>
 8204fa6:	0f b6 85 b6 fe ff ff 	movzbl -0x14a(%ebp),%eax
 8204fad:	3c 01                	cmp    $0x1,%al
 8204faf:	0f 85 96 01 00 00    	jne    820514b <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x3bd>
 8204fb5:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8204fbb:	83 c0 14             	add    $0x14,%eax
 8204fbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204fc2:	8b 45 10             	mov    0x10(%ebp),%eax
 8204fc5:	89 04 24             	mov    %eax,(%esp)
 8204fc8:	e8 23 81 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8204fcd:	83 f0 01             	xor    $0x1,%eax
 8204fd0:	84 c0                	test   %al,%al
 8204fd2:	74 29                	je     8204ffd <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x26f>
 8204fd4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204fdb:	00 
 8204fdc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204fe3:	00 
 8204fe4:	c7 44 24 04 80 ee bc 	movl   $0x8bcee80,0x4(%esp)
 8204feb:	08 
 8204fec:	c7 04 24 fb 9c 00 00 	movl   $0x9cfb,(%esp)
 8204ff3:	e8 df b8 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204ff8:	e9 c8 01 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8204ffd:	8b 85 bd fe ff ff    	mov    -0x143(%ebp),%eax
 8205003:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8205007:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 820500e:	00 
 820500f:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 8205015:	83 c0 18             	add    $0x18,%eax
 8205018:	89 44 24 04          	mov    %eax,0x4(%esp)
 820501c:	8b 45 10             	mov    0x10(%ebp),%eax
 820501f:	89 04 24             	mov    %eax,(%esp)
 8205022:	e8 95 82 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8205027:	83 f0 01             	xor    $0x1,%eax
 820502a:	84 c0                	test   %al,%al
 820502c:	74 29                	je     8205057 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x2c9>
 820502e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8205035:	00 
 8205036:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820503d:	00 
 820503e:	c7 44 24 04 80 ee bc 	movl   $0x8bcee80,0x4(%esp)
 8205045:	08 
 8205046:	c7 04 24 fc 9c 00 00 	movl   $0x9cfc,(%esp)
 820504d:	e8 85 b8 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8205052:	e9 6e 01 00 00       	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 8205057:	0f b6 85 b6 fe ff ff 	movzbl -0x14a(%ebp),%eax
 820505e:	3c 07                	cmp    $0x7,%al
 8205060:	0f 85 e5 00 00 00    	jne    820514b <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x3bd>
 8205066:	8d 85 6e fd ff ff    	lea    -0x292(%ebp),%eax
 820506c:	89 04 24             	mov    %eax,(%esp)
 820506f:	e8 72 68 02 00       	call   822b8e6 <_ZN33Packet_Monitor_Other_Channel_ChatC1Ev>
 8205074:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205077:	89 04 24             	mov    %eax,(%esp)
 820507a:	e8 cf 6b ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 820507f:	89 85 81 fd ff ff    	mov    %eax,-0x27f(%ebp)
 8205085:	8b 85 bd fe ff ff    	mov    -0x143(%ebp),%eax
 820508b:	88 85 89 fd ff ff    	mov    %al,-0x277(%ebp)
 8205091:	8b 85 bd fe ff ff    	mov    -0x143(%ebp),%eax
 8205097:	89 44 24 08          	mov    %eax,0x8(%esp)
 820509b:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 82050a1:	83 c0 18             	add    $0x18,%eax
 82050a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82050a8:	8d 85 6e fd ff ff    	lea    -0x292(%ebp),%eax
 82050ae:	83 c0 1c             	add    $0x1c,%eax
 82050b1:	89 04 24             	mov    %eax,(%esp)
 82050b4:	e8 e7 87 e7 ff       	call   807d8a0 <memcpy@plt>
 82050b9:	8b 85 df fe ff ff    	mov    -0x121(%ebp),%eax
 82050bf:	88 85 a8 fd ff ff    	mov    %al,-0x258(%ebp)
 82050c5:	8b 85 df fe ff ff    	mov    -0x121(%ebp),%eax
 82050cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 82050cf:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 82050d5:	83 c0 3a             	add    $0x3a,%eax
 82050d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82050dc:	8d 85 6e fd ff ff    	lea    -0x292(%ebp),%eax
 82050e2:	83 c0 3b             	add    $0x3b,%eax
 82050e5:	89 04 24             	mov    %eax,(%esp)
 82050e8:	e8 b3 87 e7 ff       	call   807d8a0 <memcpy@plt>
 82050ed:	0f b6 85 a8 fd ff ff 	movzbl -0x258(%ebp),%eax
 82050f4:	0f b6 c0             	movzbl %al,%eax
 82050f7:	83 c0 3b             	add    $0x3b,%eax
 82050fa:	66 89 85 70 fd ff ff 	mov    %ax,-0x290(%ebp)
 8205101:	0f b7 85 70 fd ff ff 	movzwl -0x290(%ebp),%eax
 8205108:	0f b7 c0             	movzwl %ax,%eax
 820510b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 820510e:	8d 9d 6e fd ff ff    	lea    -0x292(%ebp),%ebx
 8205114:	8b 45 0c             	mov    0xc(%ebp),%eax
 8205117:	89 04 24             	mov    %eax,(%esp)
 820511a:	e8 71 6b ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 820511f:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 8205125:	89 44 24 04          	mov    %eax,0x4(%esp)
 8205129:	89 14 24             	mov    %edx,(%esp)
 820512c:	e8 59 cf f0 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8205131:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8205134:	89 54 24 08          	mov    %edx,0x8(%esp)
 8205138:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820513c:	89 04 24             	mov    %eax,(%esp)
 820513f:	e8 b0 bc 26 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8205144:	b8 00 00 00 00       	mov    $0x0,%eax
 8205149:	eb 7a                	jmp    82051c5 <_ZN32Dispatcher_CreatureScriptMessage12dispatch_sigEP5CUserR9PacketBuf+0x437>
 820514b:	8b 85 df fe ff ff    	mov    -0x121(%ebp),%eax
 8205151:	89 85 64 fd ff ff    	mov    %eax,-0x29c(%ebp)
 8205157:	8b bd b9 fe ff ff    	mov    -0x147(%ebp),%edi
 820515d:	0f b7 85 b7 fe ff ff 	movzwl -0x149(%ebp),%eax
 8205164:	0f b7 f0             	movzwl %ax,%esi
 8205167:	0f b6 85 b6 fe ff ff 	movzbl -0x14a(%ebp),%eax
 820516e:	0f be d8             	movsbl %al,%ebx
 8205171:	e8 31 52 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8205176:	c7 44 24 24 77 00 00 	movl   $0x77,0x24(%esp)
 820517d:	00 
 820517e:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8205185:	00 
 8205186:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 820518d:	00 
 820518e:	8b 95 64 fd ff ff    	mov    -0x29c(%ebp),%edx
 8205194:	89 54 24 18          	mov    %edx,0x18(%esp)
 8205198:	8d 95 a9 fe ff ff    	lea    -0x157(%ebp),%edx
 820519e:	83 c2 3a             	add    $0x3a,%edx
 82051a1:	89 54 24 14          	mov    %edx,0x14(%esp)
 82051a5:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82051a9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82051ad:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82051b1:	8b 55 0c             	mov    0xc(%ebp),%edx
 82051b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 82051b8:	89 04 24             	mov    %eax,(%esp)
 82051bb:	e8 9e 45 4c 00       	call   86c975e <_ZN9GameWorld13send_chat_msgEP5CUserctjPciS2_i15ENUM_NOTIPACKET>
 82051c0:	b8 00 00 00 00       	mov    $0x0,%eax
 82051c5:	81 c4 cc 02 00 00    	add    $0x2cc,%esp
 82051cb:	5b                   	pop    %ebx
 82051cc:	5e                   	pop    %esi
 82051cd:	5f                   	pop    %edi
 82051ce:	5d                   	pop    %ebp
 82051cf:	c3                   	ret

```

```c
// Dispatcher_CreatureScriptMessage::dispatch_sig @ 0x8204d8e

/* Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CreatureScriptMessage::dispatch_sig
          (Dispatcher_CreatureScriptMessage *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *this_00;
  CCreatureMgr *this_01;
  CMonitorServerProxy *this_02;
  GameWorld *pGVar4;
  Packet_Monitor_Other_Channel_Chat local_296 [2];
  ushort local_294;
  undefined4 local_283;
  undefined1 local_27b;
  undefined1 auStack_27a [30];
  byte local_25c;
  undefined1 auStack_25b [269];
  char local_14e;
  ushort local_14d;
  uint local_14b;
  size_t local_147;
  char acStack_143 [30];
  size_t local_125;
  char acStack_121 [257];
  uint local_20;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this_00);
        cVar1 = user_creature::CCreatureMgr::IsEquippedCreature(this_01);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_2,&local_14e);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&local_14d);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_2,&local_14b);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_int(param_2,(int *)&local_125);
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_str(param_2,acStack_121,0x100,local_125);
                  if (cVar1 == '\x01') {
                    if ((local_14e == '\a') || (local_14e == '\x01')) {
                      cVar1 = PacketBuf::get_int(param_2,(int *)&local_147);
                      if (cVar1 != '\x01') {
                        uVar3 = LineFunc(0x9cfb,
                                         "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar3;
                      }
                      cVar1 = PacketBuf::get_str(param_2,acStack_143,0x1e,local_147);
                      if (cVar1 != '\x01') {
                        uVar3 = LineFunc(0x9cfc,
                                         "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar3;
                      }
                      if (local_14e == '\a') {
                        Packet_Monitor_Other_Channel_Chat::Packet_Monitor_Other_Channel_Chat
                                  (local_296);
                        local_283 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                        local_27b = (undefined1)local_147;
                        memcpy(auStack_27a,acStack_143,local_147);
                        local_25c = (byte)local_125;
                        memcpy(auStack_25b,acStack_121,local_125);
                        local_294 = local_25c + 0x3b;
                        local_20 = (uint)local_294;
                        uVar3 = CUser::GetServerGroup(param_1);
                        this_02 = (CMonitorServerProxy *)
                                  CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                            (GlobalData::s_monitor_proxy_mgr,uVar3);
                        CMonitorServerProxy::SendPacket(this_02,(char *)local_296,local_20);
                        return 0;
                      }
                    }
                    pGVar4 = (GameWorld *)G_GameWorld();
                    GameWorld::send_chat_msg
                              (pGVar4,param_1,(int)local_14e,local_14d,local_14b,acStack_121,
                               local_125,0,0,0x77);
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = LineFunc(0x9cf7,
                                     "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar3 = LineFunc(0x9cf6,
                                   "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0x9cf5,
                                 "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x9cf4,
                               "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x9cf3,
                             "virtual int Dispatcher_CreatureScriptMessage::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}

```

