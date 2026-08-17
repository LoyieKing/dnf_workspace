# Dispatcher_Lag_Statistics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08223de0 Dispatcher_Lag_Statistics::dispatch_sig  [0x08223de0-0x8224499] ===
 8223de0:	55                   	push   %ebp
 8223de1:	89 e5                	mov    %esp,%ebp
 8223de3:	56                   	push   %esi
 8223de4:	53                   	push   %ebx
 8223de5:	81 ec 70 01 00 00    	sub    $0x170,%esp
 8223deb:	8d 85 a3 fe ff ff    	lea    -0x15d(%ebp),%eax
 8223df1:	89 04 24             	mov    %eax,(%esp)
 8223df4:	e8 4b 83 00 00       	call   822c144 <_ZN26Packet_Stat_Lag_StatisticsC1Ev>
 8223df9:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8223dfd:	8d 85 a3 fe ff ff    	lea    -0x15d(%ebp),%eax
 8223e03:	83 c0 0a             	add    $0xa,%eax
 8223e06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223e0a:	8b 45 10             	mov    0x10(%ebp),%eax
 8223e0d:	89 04 24             	mov    %eax,(%esp)
 8223e10:	e8 5b 91 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8223e15:	83 f0 01             	xor    $0x1,%eax
 8223e18:	84 c0                	test   %al,%al
 8223e1a:	74 2b                	je     8223e47 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x67>
 8223e1c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223e23:	00 
 8223e24:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223e2b:	00 
 8223e2c:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8223e33:	08 
 8223e34:	c7 04 24 9f de 00 00 	movl   $0xde9f,(%esp)
 8223e3b:	e8 97 ca 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223e40:	89 c3                	mov    %eax,%ebx
 8223e42:	e9 38 06 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8223e47:	0f b6 85 ad fe ff ff 	movzbl -0x153(%ebp),%eax
 8223e4e:	3c 07                	cmp    $0x7,%al
 8223e50:	76 2b                	jbe    8223e7d <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x9d>
 8223e52:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223e59:	00 
 8223e5a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223e61:	00 
 8223e62:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8223e69:	08 
 8223e6a:	c7 04 24 a1 de 00 00 	movl   $0xdea1,(%esp)
 8223e71:	e8 61 ca 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223e76:	89 c3                	mov    %eax,%ebx
 8223e78:	e9 02 06 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8223e7d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8223e84:	e9 82 05 00 00       	jmp    822440b <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x62b>
 8223e89:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8223e8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223e90:	8b 45 10             	mov    0x10(%ebp),%eax
 8223e93:	89 04 24             	mov    %eax,(%esp)
 8223e96:	e8 d5 90 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8223e9b:	83 f0 01             	xor    $0x1,%eax
 8223e9e:	84 c0                	test   %al,%al
 8223ea0:	74 2b                	je     8223ecd <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0xed>
 8223ea2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223ea9:	00 
 8223eaa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223eb1:	00 
 8223eb2:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8223eb9:	08 
 8223eba:	c7 04 24 a7 de 00 00 	movl   $0xdea7,(%esp)
 8223ec1:	e8 11 ca 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223ec6:	89 c3                	mov    %eax,%ebx
 8223ec8:	e9 b2 05 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8223ecd:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8223ed1:	3c 07                	cmp    $0x7,%al
 8223ed3:	76 2b                	jbe    8223f00 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x120>
 8223ed5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223edc:	00 
 8223edd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223ee4:	00 
 8223ee5:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8223eec:	08 
 8223eed:	c7 04 24 ab de 00 00 	movl   $0xdeab,(%esp)
 8223ef4:	e8 de c9 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223ef9:	89 c3                	mov    %eax,%ebx
 8223efb:	e9 7f 05 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8223f00:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8223f04:	0f b6 d0             	movzbl %al,%edx
 8223f07:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 8223f0d:	89 d0                	mov    %edx,%eax
 8223f0f:	c1 e0 02             	shl    $0x2,%eax
 8223f12:	01 d0                	add    %edx,%eax
 8223f14:	01 c0                	add    %eax,%eax
 8223f16:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8223f19:	83 c0 0b             	add    $0xb,%eax
 8223f1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223f20:	8b 45 10             	mov    0x10(%ebp),%eax
 8223f23:	89 04 24             	mov    %eax,(%esp)
 8223f26:	e8 c5 91 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8223f2b:	83 f0 01             	xor    $0x1,%eax
 8223f2e:	84 c0                	test   %al,%al
 8223f30:	74 2b                	je     8223f5d <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x17d>
 8223f32:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223f39:	00 
 8223f3a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223f41:	00 
 8223f42:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8223f49:	08 
 8223f4a:	c7 04 24 ad de 00 00 	movl   $0xdead,(%esp)
 8223f51:	e8 81 c9 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223f56:	89 c3                	mov    %eax,%ebx
 8223f58:	e9 22 05 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8223f5d:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8223f61:	0f b6 d0             	movzbl %al,%edx
 8223f64:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 8223f6a:	89 d0                	mov    %edx,%eax
 8223f6c:	c1 e0 02             	shl    $0x2,%eax
 8223f6f:	01 d0                	add    %edx,%eax
 8223f71:	01 c0                	add    %eax,%eax
 8223f73:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8223f76:	83 c0 0f             	add    $0xf,%eax
 8223f79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223f7d:	8b 45 10             	mov    0x10(%ebp),%eax
 8223f80:	89 04 24             	mov    %eax,(%esp)
 8223f83:	e8 68 91 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8223f88:	83 f0 01             	xor    $0x1,%eax
 8223f8b:	84 c0                	test   %al,%al
 8223f8d:	74 2b                	je     8223fba <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x1da>
 8223f8f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223f96:	00 
 8223f97:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223f9e:	00 
 8223f9f:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8223fa6:	08 
 8223fa7:	c7 04 24 ae de 00 00 	movl   $0xdeae,(%esp)
 8223fae:	e8 24 c9 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223fb3:	89 c3                	mov    %eax,%ebx
 8223fb5:	e9 c5 04 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8223fba:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8223fbe:	0f b6 d0             	movzbl %al,%edx
 8223fc1:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 8223fc7:	89 d0                	mov    %edx,%eax
 8223fc9:	c1 e0 02             	shl    $0x2,%eax
 8223fcc:	01 d0                	add    %edx,%eax
 8223fce:	01 c0                	add    %eax,%eax
 8223fd0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8223fd3:	83 c0 13             	add    $0x13,%eax
 8223fd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223fda:	8b 45 10             	mov    0x10(%ebp),%eax
 8223fdd:	89 04 24             	mov    %eax,(%esp)
 8223fe0:	e8 cb 90 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8223fe5:	83 f0 01             	xor    $0x1,%eax
 8223fe8:	84 c0                	test   %al,%al
 8223fea:	74 2b                	je     8224017 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x237>
 8223fec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223ff3:	00 
 8223ff4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223ffb:	00 
 8223ffc:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8224003:	08 
 8224004:	c7 04 24 af de 00 00 	movl   $0xdeaf,(%esp)
 822400b:	e8 c7 c8 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224010:	89 c3                	mov    %eax,%ebx
 8224012:	e9 68 04 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8224017:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 822401b:	3c 01                	cmp    $0x1,%al
 822401d:	0f 85 e4 03 00 00    	jne    8224407 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x627>
 8224023:	8d 85 a3 fe ff ff    	lea    -0x15d(%ebp),%eax
 8224029:	83 c0 5b             	add    $0x5b,%eax
 822402c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224030:	8b 45 10             	mov    0x10(%ebp),%eax
 8224033:	89 04 24             	mov    %eax,(%esp)
 8224036:	e8 35 8f 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 822403b:	83 f0 01             	xor    $0x1,%eax
 822403e:	84 c0                	test   %al,%al
 8224040:	74 2b                	je     822406d <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x28d>
 8224042:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224049:	00 
 822404a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224051:	00 
 8224052:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8224059:	08 
 822405a:	c7 04 24 b4 de 00 00 	movl   $0xdeb4,(%esp)
 8224061:	e8 71 c8 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224066:	89 c3                	mov    %eax,%ebx
 8224068:	e9 12 04 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 822406d:	0f b6 85 fe fe ff ff 	movzbl -0x102(%ebp),%eax
 8224074:	3c 0a                	cmp    $0xa,%al
 8224076:	76 2b                	jbe    82240a3 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x2c3>
 8224078:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822407f:	00 
 8224080:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224087:	00 
 8224088:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 822408f:	08 
 8224090:	c7 04 24 b6 de 00 00 	movl   $0xdeb6,(%esp)
 8224097:	e8 3b c8 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822409c:	89 c3                	mov    %eax,%ebx
 822409e:	e9 dc 03 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 82240a3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82240aa:	e9 40 03 00 00       	jmp    82243ef <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x60f>
 82240af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82240b2:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 82240b8:	89 d0                	mov    %edx,%eax
 82240ba:	01 c0                	add    %eax,%eax
 82240bc:	01 d0                	add    %edx,%eax
 82240be:	c1 e0 03             	shl    $0x3,%eax
 82240c1:	83 c0 50             	add    $0x50,%eax
 82240c4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82240c7:	83 c0 0c             	add    $0xc,%eax
 82240ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 82240ce:	8b 45 10             	mov    0x10(%ebp),%eax
 82240d1:	89 04 24             	mov    %eax,(%esp)
 82240d4:	e8 d7 8f 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 82240d9:	83 f0 01             	xor    $0x1,%eax
 82240dc:	84 c0                	test   %al,%al
 82240de:	74 2b                	je     822410b <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x32b>
 82240e0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82240e7:	00 
 82240e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82240ef:	00 
 82240f0:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 82240f7:	08 
 82240f8:	c7 04 24 bc de 00 00 	movl   $0xdebc,(%esp)
 82240ff:	e8 d3 c7 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224104:	89 c3                	mov    %eax,%ebx
 8224106:	e9 74 03 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 822410b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 822410e:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 8224114:	89 d0                	mov    %edx,%eax
 8224116:	01 c0                	add    %eax,%eax
 8224118:	01 d0                	add    %edx,%eax
 822411a:	c1 e0 03             	shl    $0x3,%eax
 822411d:	83 c0 50             	add    $0x50,%eax
 8224120:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8224123:	83 c0 0e             	add    $0xe,%eax
 8224126:	89 44 24 04          	mov    %eax,0x4(%esp)
 822412a:	8b 45 10             	mov    0x10(%ebp),%eax
 822412d:	89 04 24             	mov    %eax,(%esp)
 8224130:	e8 3b 8e 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8224135:	83 f0 01             	xor    $0x1,%eax
 8224138:	84 c0                	test   %al,%al
 822413a:	74 2b                	je     8224167 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x387>
 822413c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224143:	00 
 8224144:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822414b:	00 
 822414c:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8224153:	08 
 8224154:	c7 04 24 bd de 00 00 	movl   $0xdebd,(%esp)
 822415b:	e8 77 c7 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224160:	89 c3                	mov    %eax,%ebx
 8224162:	e9 18 03 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8224167:	8b 55 f4             	mov    -0xc(%ebp),%edx
 822416a:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 8224170:	89 d0                	mov    %edx,%eax
 8224172:	01 c0                	add    %eax,%eax
 8224174:	01 d0                	add    %edx,%eax
 8224176:	c1 e0 03             	shl    $0x3,%eax
 8224179:	83 c0 50             	add    $0x50,%eax
 822417c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 822417f:	83 c0 0f             	add    $0xf,%eax
 8224182:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224186:	8b 45 10             	mov    0x10(%ebp),%eax
 8224189:	89 04 24             	mov    %eax,(%esp)
 822418c:	e8 5f 8f 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8224191:	83 f0 01             	xor    $0x1,%eax
 8224194:	84 c0                	test   %al,%al
 8224196:	74 2b                	je     82241c3 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x3e3>
 8224198:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822419f:	00 
 82241a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82241a7:	00 
 82241a8:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 82241af:	08 
 82241b0:	c7 04 24 be de 00 00 	movl   $0xdebe,(%esp)
 82241b7:	e8 1b c7 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82241bc:	89 c3                	mov    %eax,%ebx
 82241be:	e9 bc 02 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 82241c3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82241c6:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 82241cc:	89 d0                	mov    %edx,%eax
 82241ce:	01 c0                	add    %eax,%eax
 82241d0:	01 d0                	add    %edx,%eax
 82241d2:	c1 e0 03             	shl    $0x3,%eax
 82241d5:	83 c0 50             	add    $0x50,%eax
 82241d8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82241db:	83 c0 13             	add    $0x13,%eax
 82241de:	89 44 24 04          	mov    %eax,0x4(%esp)
 82241e2:	8b 45 10             	mov    0x10(%ebp),%eax
 82241e5:	89 04 24             	mov    %eax,(%esp)
 82241e8:	e8 03 8f 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82241ed:	83 f0 01             	xor    $0x1,%eax
 82241f0:	84 c0                	test   %al,%al
 82241f2:	74 2b                	je     822421f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x43f>
 82241f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82241fb:	00 
 82241fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224203:	00 
 8224204:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 822420b:	08 
 822420c:	c7 04 24 bf de 00 00 	movl   $0xdebf,(%esp)
 8224213:	e8 bf c6 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224218:	89 c3                	mov    %eax,%ebx
 822421a:	e9 60 02 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 822421f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8224222:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 8224228:	89 d0                	mov    %edx,%eax
 822422a:	01 c0                	add    %eax,%eax
 822422c:	01 d0                	add    %edx,%eax
 822422e:	c1 e0 03             	shl    $0x3,%eax
 8224231:	83 c0 50             	add    $0x50,%eax
 8224234:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8224237:	83 c0 17             	add    $0x17,%eax
 822423a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822423e:	8b 45 10             	mov    0x10(%ebp),%eax
 8224241:	89 04 24             	mov    %eax,(%esp)
 8224244:	e8 67 8e 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8224249:	83 f0 01             	xor    $0x1,%eax
 822424c:	84 c0                	test   %al,%al
 822424e:	74 2b                	je     822427b <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x49b>
 8224250:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8224257:	00 
 8224258:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822425f:	00 
 8224260:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 8224267:	08 
 8224268:	c7 04 24 c0 de 00 00 	movl   $0xdec0,(%esp)
 822426f:	e8 63 c6 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224274:	89 c3                	mov    %eax,%ebx
 8224276:	e9 04 02 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 822427b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 822427e:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 8224284:	89 d0                	mov    %edx,%eax
 8224286:	01 c0                	add    %eax,%eax
 8224288:	01 d0                	add    %edx,%eax
 822428a:	c1 e0 03             	shl    $0x3,%eax
 822428d:	83 c0 50             	add    $0x50,%eax
 8224290:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8224293:	83 c0 19             	add    $0x19,%eax
 8224296:	89 44 24 04          	mov    %eax,0x4(%esp)
 822429a:	8b 45 10             	mov    0x10(%ebp),%eax
 822429d:	89 04 24             	mov    %eax,(%esp)
 82242a0:	e8 cb 8c 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82242a5:	83 f0 01             	xor    $0x1,%eax
 82242a8:	84 c0                	test   %al,%al
 82242aa:	74 2b                	je     82242d7 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x4f7>
 82242ac:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82242b3:	00 
 82242b4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82242bb:	00 
 82242bc:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 82242c3:	08 
 82242c4:	c7 04 24 c1 de 00 00 	movl   $0xdec1,(%esp)
 82242cb:	e8 07 c6 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82242d0:	89 c3                	mov    %eax,%ebx
 82242d2:	e9 a8 01 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 82242d7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82242da:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 82242e0:	89 d0                	mov    %edx,%eax
 82242e2:	01 c0                	add    %eax,%eax
 82242e4:	01 d0                	add    %edx,%eax
 82242e6:	c1 e0 03             	shl    $0x3,%eax
 82242e9:	83 c0 50             	add    $0x50,%eax
 82242ec:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82242ef:	83 c0 1a             	add    $0x1a,%eax
 82242f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82242f6:	8b 45 10             	mov    0x10(%ebp),%eax
 82242f9:	89 04 24             	mov    %eax,(%esp)
 82242fc:	e8 ef 8d 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8224301:	83 f0 01             	xor    $0x1,%eax
 8224304:	84 c0                	test   %al,%al
 8224306:	74 2b                	je     8224333 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x553>
 8224308:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822430f:	00 
 8224310:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224317:	00 
 8224318:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 822431f:	08 
 8224320:	c7 04 24 c2 de 00 00 	movl   $0xdec2,(%esp)
 8224327:	e8 ab c5 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822432c:	89 c3                	mov    %eax,%ebx
 822432e:	e9 4c 01 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8224333:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8224336:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 822433c:	89 d0                	mov    %edx,%eax
 822433e:	01 c0                	add    %eax,%eax
 8224340:	01 d0                	add    %edx,%eax
 8224342:	c1 e0 03             	shl    $0x3,%eax
 8224345:	83 c0 60             	add    $0x60,%eax
 8224348:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 822434b:	83 c0 0e             	add    $0xe,%eax
 822434e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8224352:	8b 45 10             	mov    0x10(%ebp),%eax
 8224355:	89 04 24             	mov    %eax,(%esp)
 8224358:	e8 93 8d 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 822435d:	83 f0 01             	xor    $0x1,%eax
 8224360:	84 c0                	test   %al,%al
 8224362:	74 2b                	je     822438f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x5af>
 8224364:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822436b:	00 
 822436c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8224373:	00 
 8224374:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 822437b:	08 
 822437c:	c7 04 24 c3 de 00 00 	movl   $0xdec3,(%esp)
 8224383:	e8 4f c5 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8224388:	89 c3                	mov    %eax,%ebx
 822438a:	e9 f0 00 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 822438f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8224392:	8d 8d a3 fe ff ff    	lea    -0x15d(%ebp),%ecx
 8224398:	89 d0                	mov    %edx,%eax
 822439a:	01 c0                	add    %eax,%eax
 822439c:	01 d0                	add    %edx,%eax
 822439e:	c1 e0 03             	shl    $0x3,%eax
 82243a1:	83 c0 60             	add    $0x60,%eax
 82243a4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82243a7:	83 c0 12             	add    $0x12,%eax
 82243aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82243ae:	8b 45 10             	mov    0x10(%ebp),%eax
 82243b1:	89 04 24             	mov    %eax,(%esp)
 82243b4:	e8 f7 8c 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 82243b9:	83 f0 01             	xor    $0x1,%eax
 82243bc:	84 c0                	test   %al,%al
 82243be:	74 2b                	je     82243eb <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x60b>
 82243c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82243c7:	00 
 82243c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82243cf:	00 
 82243d0:	c7 44 24 04 20 c9 bc 	movl   $0x8bcc920,0x4(%esp)
 82243d7:	08 
 82243d8:	c7 04 24 c4 de 00 00 	movl   $0xdec4,(%esp)
 82243df:	e8 f3 c4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82243e4:	89 c3                	mov    %eax,%ebx
 82243e6:	e9 94 00 00 00       	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 82243eb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82243ef:	0f b6 85 fe fe ff ff 	movzbl -0x102(%ebp),%eax
 82243f6:	0f b6 c0             	movzbl %al,%eax
 82243f9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 82243fc:	0f 9f c0             	setg   %al
 82243ff:	84 c0                	test   %al,%al
 8224401:	0f 85 a8 fc ff ff    	jne    82240af <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x2cf>
 8224407:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 822440b:	0f b6 85 ad fe ff ff 	movzbl -0x153(%ebp),%eax
 8224412:	0f b6 c0             	movzbl %al,%eax
 8224415:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8224418:	0f 9f c0             	setg   %al
 822441b:	84 c0                	test   %al,%al
 822441d:	0f 85 66 fa ff ff    	jne    8223e89 <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0xa9>
 8224423:	8d 9d a3 fe ff ff    	lea    -0x15d(%ebp),%ebx
 8224429:	8b 45 0c             	mov    0xc(%ebp),%eax
 822442c:	89 04 24             	mov    %eax,(%esp)
 822442f:	e8 5c 78 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8224434:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 822443a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822443e:	89 14 24             	mov    %edx,(%esp)
 8224441:	e8 b2 d8 ee ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8224446:	c7 44 24 08 4c 01 00 	movl   $0x14c,0x8(%esp)
 822444d:	00 
 822444e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8224452:	89 04 24             	mov    %eax,(%esp)
 8224455:	e8 ea db 24 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 822445a:	bb 00 00 00 00       	mov    $0x0,%ebx
 822445f:	eb 1e                	jmp    822447f <_ZN25Dispatcher_Lag_Statistics12dispatch_sigEP5CUserR9PacketBuf+0x69f>
 8224461:	89 d3                	mov    %edx,%ebx
 8224463:	89 c6                	mov    %eax,%esi
 8224465:	8d 85 a3 fe ff ff    	lea    -0x15d(%ebp),%eax
 822446b:	89 04 24             	mov    %eax,(%esp)
 822446e:	e8 79 10 01 00       	call   82354ec <_ZN26Packet_Stat_Lag_StatisticsD1Ev>
 8224473:	89 f0                	mov    %esi,%eax
 8224475:	89 da                	mov    %ebx,%edx
 8224477:	89 04 24             	mov    %eax,(%esp)
 822447a:	e8 d1 f2 8b 00       	call   8ae3750 <_Unwind_Resume>
 822447f:	8d 85 a3 fe ff ff    	lea    -0x15d(%ebp),%eax
 8224485:	89 04 24             	mov    %eax,(%esp)
 8224488:	e8 5f 10 01 00       	call   82354ec <_ZN26Packet_Stat_Lag_StatisticsD1Ev>
 822448d:	89 d8                	mov    %ebx,%eax
 822448f:	81 c4 70 01 00 00    	add    $0x170,%esp
 8224495:	5b                   	pop    %ebx
 8224496:	5e                   	pop    %esi
 8224497:	5d                   	pop    %ebp
 8224498:	c3                   	ret
 8224499:	90                   	nop

```

```c
// Dispatcher_Lag_Statistics::dispatch_sig @ 0x8223de0

/* Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Lag_Statistics::dispatch_sig
          (Dispatcher_Lag_Statistics *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Stat_Lag_Statistics local_161 [10];
  byte local_157;
  int aiStack_156 [2];
  ushort auStack_14e [36];
  byte local_106;
  ushort uStack_105;
  uchar uStack_103;
  int aiStack_102 [2];
  ushort uStack_fa;
  uchar uStack_f8;
  int aiStack_f7 [2];
  ushort auStack_ef [109];
  byte local_15;
  int local_14;
  int local_10;
  
  Packet_Stat_Lag_Statistics::Packet_Stat_Lag_Statistics(local_161);
  local_15 = 0;
                    /* try { // try from 08223e10 to 08224459 has its CatchHandler @ 08224461 */
  cVar1 = PacketBuf::get_byte(param_2,&local_157);
  if (cVar1 == '\x01') {
    if (local_157 < 8) {
      for (local_14 = 0; local_14 < (int)(uint)local_157; local_14 = local_14 + 1) {
        cVar1 = PacketBuf::get_byte(param_2,&local_15);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(56999,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        if (7 < local_15) {
          uVar2 = LineFunc(0xdeab,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        cVar1 = PacketBuf::get_int(param_2,(int *)((int)aiStack_156 + (uint)local_15 * 10));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xdead,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        cVar1 = PacketBuf::get_int(param_2,(int *)((int)aiStack_156 + (uint)local_15 * 10 + 4));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xdeae,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        cVar1 = PacketBuf::get_short(param_2,auStack_14e + (uint)local_15 * 5);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xdeaf,
                           "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          goto LAB_0822447f;
        }
        if (local_15 == 1) {
          cVar1 = PacketBuf::get_byte(param_2,&local_106);
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xdeb4,
                             "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            goto LAB_0822447f;
          }
          if (10 < local_106) {
            uVar2 = LineFunc(0xdeb6,
                             "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            goto LAB_0822447f;
          }
          for (local_10 = 0; local_10 < (int)(uint)local_106; local_10 = local_10 + 1) {
            cVar1 = PacketBuf::get_short(param_2,&uStack_105 + local_10 * 0xc);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdebc,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_byte(param_2,(uchar *)((int)aiStack_102 + local_10 * 0x18 + -1));
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdebd,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_int(param_2,aiStack_102 + local_10 * 6);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdebe,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_int(param_2,aiStack_102 + local_10 * 6 + 1);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdebf,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_short(param_2,&uStack_fa + local_10 * 0xc);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec0,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_byte(param_2,(uchar *)((int)aiStack_f7 + local_10 * 0x18 + -1));
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec1,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_int(param_2,aiStack_f7 + local_10 * 6);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec2,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_int(param_2,aiStack_f7 + local_10 * 6 + 1);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec3,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
            cVar1 = PacketBuf::get_short(param_2,auStack_ef + local_10 * 0xc);
            if (cVar1 != '\x01') {
              uVar2 = LineFunc(0xdec4,
                               "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              goto LAB_0822447f;
            }
          }
        }
      }
      uVar2 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar2);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_161,0x14c);
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xdea1,
                       "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0xde9f,
                     "virtual int Dispatcher_Lag_Statistics::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
LAB_0822447f:
  Packet_Stat_Lag_Statistics::~Packet_Stat_Lag_Statistics(local_161);
  return uVar2;
}

```

