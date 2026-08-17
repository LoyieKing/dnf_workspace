# DisPatcher_DieMob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081eb0c4 DisPatcher_DieMob::dispatch_sig  [0x081eb0c4-0x81ecce5] ===
 81eb0c4:	55                   	push   %ebp
 81eb0c5:	89 e5                	mov    %esp,%ebp
 81eb0c7:	56                   	push   %esi
 81eb0c8:	53                   	push   %ebx
 81eb0c9:	81 ec 10 0b 00 00    	sub    $0xb10,%esp
 81eb0cf:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 81eb0d6:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb0dc:	83 c0 0d             	add    $0xd,%eax
 81eb0df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb0e3:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb0e6:	89 04 24             	mov    %eax,(%esp)
 81eb0e9:	e8 c2 1f 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eb0ee:	83 f0 01             	xor    $0x1,%eax
 81eb0f1:	84 c0                	test   %al,%al
 81eb0f3:	74 29                	je     81eb11e <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x5a>
 81eb0f5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb0fc:	00 
 81eb0fd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb104:	00 
 81eb105:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb10c:	08 
 81eb10d:	c7 04 24 09 6d 00 00 	movl   $0x6d09,(%esp)
 81eb114:	e8 be 57 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb119:	e9 bd 1b 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb11e:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb124:	83 c0 0f             	add    $0xf,%eax
 81eb127:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb12b:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb12e:	89 04 24             	mov    %eax,(%esp)
 81eb131:	e8 7a 1f 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eb136:	83 f0 01             	xor    $0x1,%eax
 81eb139:	84 c0                	test   %al,%al
 81eb13b:	74 29                	je     81eb166 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xa2>
 81eb13d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb144:	00 
 81eb145:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb14c:	00 
 81eb14d:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb154:	08 
 81eb155:	c7 04 24 0a 6d 00 00 	movl   $0x6d0a,(%esp)
 81eb15c:	e8 76 57 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb161:	e9 75 1b 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb166:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb16c:	83 c0 11             	add    $0x11,%eax
 81eb16f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb173:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb176:	89 04 24             	mov    %eax,(%esp)
 81eb179:	e8 72 1f 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81eb17e:	83 f0 01             	xor    $0x1,%eax
 81eb181:	84 c0                	test   %al,%al
 81eb183:	74 29                	je     81eb1ae <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xea>
 81eb185:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb18c:	00 
 81eb18d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb194:	00 
 81eb195:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb19c:	08 
 81eb19d:	c7 04 24 0c 6d 00 00 	movl   $0x6d0c,(%esp)
 81eb1a4:	e8 2e 57 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb1a9:	e9 2d 1b 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb1ae:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb1b4:	83 c0 15             	add    $0x15,%eax
 81eb1b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb1bb:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb1be:	89 04 24             	mov    %eax,(%esp)
 81eb1c1:	e8 2a 1f 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81eb1c6:	83 f0 01             	xor    $0x1,%eax
 81eb1c9:	84 c0                	test   %al,%al
 81eb1cb:	74 29                	je     81eb1f6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x132>
 81eb1cd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb1d4:	00 
 81eb1d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb1dc:	00 
 81eb1dd:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb1e4:	08 
 81eb1e5:	c7 04 24 0d 6d 00 00 	movl   $0x6d0d,(%esp)
 81eb1ec:	e8 e6 56 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb1f1:	e9 e5 1a 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb1f6:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb1fc:	05 1a 0a 00 00       	add    $0xa1a,%eax
 81eb201:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb205:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb208:	89 04 24             	mov    %eax,(%esp)
 81eb20b:	e8 30 20 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81eb210:	83 f0 01             	xor    $0x1,%eax
 81eb213:	84 c0                	test   %al,%al
 81eb215:	74 29                	je     81eb240 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 81eb217:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb21e:	00 
 81eb21f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb226:	00 
 81eb227:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb22e:	08 
 81eb22f:	c7 04 24 0e 6d 00 00 	movl   $0x6d0e,(%esp)
 81eb236:	e8 9c 56 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb23b:	e9 9b 1a 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb240:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb246:	05 1e 0a 00 00       	add    $0xa1e,%eax
 81eb24b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb24f:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb252:	89 04 24             	mov    %eax,(%esp)
 81eb255:	e8 e6 1f 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81eb25a:	83 f0 01             	xor    $0x1,%eax
 81eb25d:	84 c0                	test   %al,%al
 81eb25f:	74 29                	je     81eb28a <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c6>
 81eb261:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb268:	00 
 81eb269:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb270:	00 
 81eb271:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb278:	08 
 81eb279:	c7 04 24 0f 6d 00 00 	movl   $0x6d0f,(%esp)
 81eb280:	e8 52 56 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb285:	e9 51 1a 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb28a:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb290:	83 c0 19             	add    $0x19,%eax
 81eb293:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb297:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb29a:	89 04 24             	mov    %eax,(%esp)
 81eb29d:	e8 ce 1c 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81eb2a2:	83 f0 01             	xor    $0x1,%eax
 81eb2a5:	84 c0                	test   %al,%al
 81eb2a7:	74 29                	je     81eb2d2 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x20e>
 81eb2a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb2b0:	00 
 81eb2b1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb2b8:	00 
 81eb2b9:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb2c0:	08 
 81eb2c1:	c7 04 24 11 6d 00 00 	movl   $0x6d11,(%esp)
 81eb2c8:	e8 0a 56 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb2cd:	e9 09 1a 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb2d2:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81eb2d9:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81eb2e0:	e9 56 01 00 00       	jmp    81eb43b <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x377>
 81eb2e5:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81eb2e8:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb2ee:	83 c2 08             	add    $0x8,%edx
 81eb2f1:	01 d2                	add    %edx,%edx
 81eb2f3:	01 d0                	add    %edx,%eax
 81eb2f5:	83 c0 0a             	add    $0xa,%eax
 81eb2f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb2fc:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb2ff:	89 04 24             	mov    %eax,(%esp)
 81eb302:	e8 a9 1d 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eb307:	83 f0 01             	xor    $0x1,%eax
 81eb30a:	84 c0                	test   %al,%al
 81eb30c:	74 29                	je     81eb337 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x273>
 81eb30e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb315:	00 
 81eb316:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb31d:	00 
 81eb31e:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb325:	08 
 81eb326:	c7 04 24 16 6d 00 00 	movl   $0x6d16,(%esp)
 81eb32d:	e8 a5 55 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb332:	e9 a4 19 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb337:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81eb33a:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb340:	81 c2 08 01 00 00    	add    $0x108,%edx
 81eb346:	01 d2                	add    %edx,%edx
 81eb348:	01 d0                	add    %edx,%eax
 81eb34a:	83 c0 0a             	add    $0xa,%eax
 81eb34d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb351:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb354:	89 04 24             	mov    %eax,(%esp)
 81eb357:	e8 54 1d 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eb35c:	83 f0 01             	xor    $0x1,%eax
 81eb35f:	84 c0                	test   %al,%al
 81eb361:	74 29                	je     81eb38c <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x2c8>
 81eb363:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb36a:	00 
 81eb36b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb372:	00 
 81eb373:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb37a:	08 
 81eb37b:	c7 04 24 17 6d 00 00 	movl   $0x6d17,(%esp)
 81eb382:	e8 50 55 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb387:	e9 4f 19 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb38c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81eb38f:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb395:	81 c2 04 01 00 00    	add    $0x104,%edx
 81eb39b:	c1 e2 02             	shl    $0x2,%edx
 81eb39e:	01 d0                	add    %edx,%eax
 81eb3a0:	83 c0 0a             	add    $0xa,%eax
 81eb3a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb3a7:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb3aa:	89 04 24             	mov    %eax,(%esp)
 81eb3ad:	e8 8e 1e 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81eb3b2:	83 f0 01             	xor    $0x1,%eax
 81eb3b5:	84 c0                	test   %al,%al
 81eb3b7:	74 29                	je     81eb3e2 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x31e>
 81eb3b9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb3c0:	00 
 81eb3c1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb3c8:	00 
 81eb3c9:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb3d0:	08 
 81eb3d1:	c7 04 24 18 6d 00 00 	movl   $0x6d18,(%esp)
 81eb3d8:	e8 fa 54 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb3dd:	e9 f9 18 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb3e2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81eb3e5:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb3eb:	81 c2 08 04 00 00    	add    $0x408,%edx
 81eb3f1:	01 d2                	add    %edx,%edx
 81eb3f3:	01 d0                	add    %edx,%eax
 81eb3f5:	83 c0 0a             	add    $0xa,%eax
 81eb3f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb3fc:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb3ff:	89 04 24             	mov    %eax,(%esp)
 81eb402:	e8 a9 1c 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eb407:	83 f0 01             	xor    $0x1,%eax
 81eb40a:	84 c0                	test   %al,%al
 81eb40c:	74 29                	je     81eb437 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x373>
 81eb40e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb415:	00 
 81eb416:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb41d:	00 
 81eb41e:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb425:	08 
 81eb426:	c7 04 24 19 6d 00 00 	movl   $0x6d19,(%esp)
 81eb42d:	e8 a5 54 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb432:	e9 a4 18 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb437:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 81eb43b:	0f b6 85 3e f5 ff ff 	movzbl -0xac2(%ebp),%eax
 81eb442:	0f b6 c0             	movzbl %al,%eax
 81eb445:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 81eb448:	0f 9f c0             	setg   %al
 81eb44b:	84 c0                	test   %al,%al
 81eb44d:	0f 85 92 fe ff ff    	jne    81eb2e5 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x221>
 81eb453:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb459:	05 24 0a 00 00       	add    $0xa24,%eax
 81eb45e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb462:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb465:	89 04 24             	mov    %eax,(%esp)
 81eb468:	e8 43 1c 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eb46d:	83 f0 01             	xor    $0x1,%eax
 81eb470:	84 c0                	test   %al,%al
 81eb472:	74 29                	je     81eb49d <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x3d9>
 81eb474:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb47b:	00 
 81eb47c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb483:	00 
 81eb484:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb48b:	08 
 81eb48c:	c7 04 24 25 6d 00 00 	movl   $0x6d25,(%esp)
 81eb493:	e8 3f 54 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb498:	e9 3e 18 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb49d:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb4a3:	05 26 0a 00 00       	add    $0xa26,%eax
 81eb4a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb4ac:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb4af:	89 04 24             	mov    %eax,(%esp)
 81eb4b2:	e8 f9 1b 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eb4b7:	83 f0 01             	xor    $0x1,%eax
 81eb4ba:	84 c0                	test   %al,%al
 81eb4bc:	74 29                	je     81eb4e7 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x423>
 81eb4be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb4c5:	00 
 81eb4c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb4cd:	00 
 81eb4ce:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb4d5:	08 
 81eb4d6:	c7 04 24 26 6d 00 00 	movl   $0x6d26,(%esp)
 81eb4dd:	e8 f5 53 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb4e2:	e9 f4 17 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb4e7:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb4ed:	05 22 0a 00 00       	add    $0xa22,%eax
 81eb4f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb4f6:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb4f9:	89 04 24             	mov    %eax,(%esp)
 81eb4fc:	e8 6f 1a 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81eb501:	83 f0 01             	xor    $0x1,%eax
 81eb504:	84 c0                	test   %al,%al
 81eb506:	74 29                	je     81eb531 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x46d>
 81eb508:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb50f:	00 
 81eb510:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb517:	00 
 81eb518:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb51f:	08 
 81eb520:	c7 04 24 28 6d 00 00 	movl   $0x6d28,(%esp)
 81eb527:	e8 ab 53 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb52c:	e9 aa 17 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb531:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb537:	05 23 0a 00 00       	add    $0xa23,%eax
 81eb53c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb540:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb543:	89 04 24             	mov    %eax,(%esp)
 81eb546:	e8 25 1a 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81eb54b:	83 f0 01             	xor    $0x1,%eax
 81eb54e:	84 c0                	test   %al,%al
 81eb550:	74 29                	je     81eb57b <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x4b7>
 81eb552:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb559:	00 
 81eb55a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb561:	00 
 81eb562:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb569:	08 
 81eb56a:	c7 04 24 2b 6d 00 00 	movl   $0x6d2b,(%esp)
 81eb571:	e8 61 53 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb576:	e9 60 17 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb57b:	c6 45 8b 00          	movb   $0x0,-0x75(%ebp)
 81eb57f:	8d 45 8b             	lea    -0x75(%ebp),%eax
 81eb582:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb586:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb589:	89 04 24             	mov    %eax,(%esp)
 81eb58c:	e8 df 19 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81eb591:	83 f0 01             	xor    $0x1,%eax
 81eb594:	84 c0                	test   %al,%al
 81eb596:	74 29                	je     81eb5c1 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x4fd>
 81eb598:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb59f:	00 
 81eb5a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb5a7:	00 
 81eb5a8:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb5af:	08 
 81eb5b0:	c7 04 24 2f 6d 00 00 	movl   $0x6d2f,(%esp)
 81eb5b7:	e8 1b 53 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb5bc:	e9 1a 17 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb5c1:	c6 45 8a 00          	movb   $0x0,-0x76(%ebp)
 81eb5c5:	8d 45 8a             	lea    -0x76(%ebp),%eax
 81eb5c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb5cc:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb5cf:	89 04 24             	mov    %eax,(%esp)
 81eb5d2:	e8 99 19 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81eb5d7:	83 f0 01             	xor    $0x1,%eax
 81eb5da:	84 c0                	test   %al,%al
 81eb5dc:	74 29                	je     81eb607 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x543>
 81eb5de:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb5e5:	00 
 81eb5e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb5ed:	00 
 81eb5ee:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb5f5:	08 
 81eb5f6:	c7 04 24 32 6d 00 00 	movl   $0x6d32,(%esp)
 81eb5fd:	e8 d5 52 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb602:	e9 d4 16 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb607:	0f b6 45 8a          	movzbl -0x76(%ebp),%eax
 81eb60b:	84 c0                	test   %al,%al
 81eb60d:	74 17                	je     81eb626 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x562>
 81eb60f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eb612:	89 04 24             	mov    %eax,(%esp)
 81eb615:	e8 72 ed ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eb61a:	83 f8 05             	cmp    $0x5,%eax
 81eb61d:	75 07                	jne    81eb626 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x562>
 81eb61f:	b8 01 00 00 00       	mov    $0x1,%eax
 81eb624:	eb 05                	jmp    81eb62b <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x567>
 81eb626:	b8 00 00 00 00       	mov    $0x0,%eax
 81eb62b:	84 c0                	test   %al,%al
 81eb62d:	74 5c                	je     81eb68b <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x5c7>
 81eb62f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eb632:	89 04 24             	mov    %eax,(%esp)
 81eb635:	e8 14 48 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81eb63a:	0f bf d8             	movswl %ax,%ebx
 81eb63d:	e8 4c 0b ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81eb642:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eb646:	89 04 24             	mov    %eax,(%esp)
 81eb649:	e8 e4 98 0a 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81eb64e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81eb651:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81eb655:	75 29                	jne    81eb680 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x5bc>
 81eb657:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb65e:	00 
 81eb65f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb666:	00 
 81eb667:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb66e:	08 
 81eb66f:	c7 04 24 38 6d 00 00 	movl   $0x6d38,(%esp)
 81eb676:	e8 5c 52 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb67b:	e9 5b 16 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb680:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81eb683:	89 04 24             	mov    %eax,(%esp)
 81eb686:	e8 d7 f0 3c 00       	call   85ba762 <_ZN6CParty18setMonsterMoveHackEv>
 81eb68b:	8d 45 88             	lea    -0x78(%ebp),%eax
 81eb68e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb692:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb695:	89 04 24             	mov    %eax,(%esp)
 81eb698:	e8 13 1a 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eb69d:	83 f0 01             	xor    $0x1,%eax
 81eb6a0:	84 c0                	test   %al,%al
 81eb6a2:	74 29                	je     81eb6cd <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x609>
 81eb6a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb6ab:	00 
 81eb6ac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb6b3:	00 
 81eb6b4:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb6bb:	08 
 81eb6bc:	c7 04 24 3e 6d 00 00 	movl   $0x6d3e,(%esp)
 81eb6c3:	e8 0f 52 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb6c8:	e9 0e 16 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb6cd:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb6d3:	05 28 0a 00 00       	add    $0xa28,%eax
 81eb6d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb6dc:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb6df:	89 04 24             	mov    %eax,(%esp)
 81eb6e2:	e8 3b 18 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81eb6e7:	83 f0 01             	xor    $0x1,%eax
 81eb6ea:	84 c0                	test   %al,%al
 81eb6ec:	74 29                	je     81eb717 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x653>
 81eb6ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb6f5:	00 
 81eb6f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb6fd:	00 
 81eb6fe:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb705:	08 
 81eb706:	c7 04 24 41 6d 00 00 	movl   $0x6d41,(%esp)
 81eb70d:	e8 c5 51 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb712:	e9 c4 15 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb717:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb71d:	05 2d 0a 00 00       	add    $0xa2d,%eax
 81eb722:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb726:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb729:	89 04 24             	mov    %eax,(%esp)
 81eb72c:	e8 bf 19 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81eb731:	83 f0 01             	xor    $0x1,%eax
 81eb734:	84 c0                	test   %al,%al
 81eb736:	74 29                	je     81eb761 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x69d>
 81eb738:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb73f:	00 
 81eb740:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb747:	00 
 81eb748:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb74f:	08 
 81eb750:	c7 04 24 42 6d 00 00 	movl   $0x6d42,(%esp)
 81eb757:	e8 7b 51 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb75c:	e9 7a 15 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb761:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb767:	05 31 0a 00 00       	add    $0xa31,%eax
 81eb76c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb770:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb773:	89 04 24             	mov    %eax,(%esp)
 81eb776:	e8 75 19 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81eb77b:	83 f0 01             	xor    $0x1,%eax
 81eb77e:	84 c0                	test   %al,%al
 81eb780:	74 29                	je     81eb7ab <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x6e7>
 81eb782:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb789:	00 
 81eb78a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb791:	00 
 81eb792:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb799:	08 
 81eb79a:	c7 04 24 43 6d 00 00 	movl   $0x6d43,(%esp)
 81eb7a1:	e8 31 51 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb7a6:	e9 30 15 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb7ab:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb7b1:	05 29 0a 00 00       	add    $0xa29,%eax
 81eb7b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb7ba:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb7bd:	89 04 24             	mov    %eax,(%esp)
 81eb7c0:	e8 fb 17 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eb7c5:	83 f0 01             	xor    $0x1,%eax
 81eb7c8:	84 c0                	test   %al,%al
 81eb7ca:	74 29                	je     81eb7f5 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x731>
 81eb7cc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb7d3:	00 
 81eb7d4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb7db:	00 
 81eb7dc:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb7e3:	08 
 81eb7e4:	c7 04 24 44 6d 00 00 	movl   $0x6d44,(%esp)
 81eb7eb:	e8 e7 50 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb7f0:	e9 e6 14 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb7f5:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb7fb:	05 2b 0a 00 00       	add    $0xa2b,%eax
 81eb800:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb804:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb807:	89 04 24             	mov    %eax,(%esp)
 81eb80a:	e8 b1 17 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eb80f:	83 f0 01             	xor    $0x1,%eax
 81eb812:	84 c0                	test   %al,%al
 81eb814:	74 29                	je     81eb83f <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x77b>
 81eb816:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb81d:	00 
 81eb81e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb825:	00 
 81eb826:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb82d:	08 
 81eb82e:	c7 04 24 45 6d 00 00 	movl   $0x6d45,(%esp)
 81eb835:	e8 9d 50 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb83a:	e9 9c 14 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb83f:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb845:	05 35 0a 00 00       	add    $0xa35,%eax
 81eb84a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb84e:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb851:	89 04 24             	mov    %eax,(%esp)
 81eb854:	e8 67 17 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eb859:	83 f0 01             	xor    $0x1,%eax
 81eb85c:	84 c0                	test   %al,%al
 81eb85e:	74 29                	je     81eb889 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x7c5>
 81eb860:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb867:	00 
 81eb868:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb86f:	00 
 81eb870:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb877:	08 
 81eb878:	c7 04 24 46 6d 00 00 	movl   $0x6d46,(%esp)
 81eb87f:	e8 53 50 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb884:	e9 52 14 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb889:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb88f:	05 37 0a 00 00       	add    $0xa37,%eax
 81eb894:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb898:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb89b:	89 04 24             	mov    %eax,(%esp)
 81eb89e:	e8 1d 17 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eb8a3:	83 f0 01             	xor    $0x1,%eax
 81eb8a6:	84 c0                	test   %al,%al
 81eb8a8:	74 29                	je     81eb8d3 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x80f>
 81eb8aa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb8b1:	00 
 81eb8b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb8b9:	00 
 81eb8ba:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb8c1:	08 
 81eb8c2:	c7 04 24 47 6d 00 00 	movl   $0x6d47,(%esp)
 81eb8c9:	e8 09 50 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb8ce:	e9 08 14 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb8d3:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb8d9:	05 39 0a 00 00       	add    $0xa39,%eax
 81eb8de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb8e2:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb8e5:	89 04 24             	mov    %eax,(%esp)
 81eb8e8:	e8 d3 16 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eb8ed:	83 f0 01             	xor    $0x1,%eax
 81eb8f0:	84 c0                	test   %al,%al
 81eb8f2:	74 29                	je     81eb91d <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x859>
 81eb8f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb8fb:	00 
 81eb8fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb903:	00 
 81eb904:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb90b:	08 
 81eb90c:	c7 04 24 48 6d 00 00 	movl   $0x6d48,(%esp)
 81eb913:	e8 bf 4f 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb918:	e9 be 13 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb91d:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb923:	05 3b 0a 00 00       	add    $0xa3b,%eax
 81eb928:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb92c:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb92f:	89 04 24             	mov    %eax,(%esp)
 81eb932:	e8 89 16 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eb937:	83 f0 01             	xor    $0x1,%eax
 81eb93a:	84 c0                	test   %al,%al
 81eb93c:	74 29                	je     81eb967 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x8a3>
 81eb93e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb945:	00 
 81eb946:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb94d:	00 
 81eb94e:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb955:	08 
 81eb956:	c7 04 24 49 6d 00 00 	movl   $0x6d49,(%esp)
 81eb95d:	e8 75 4f 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb962:	e9 74 13 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb967:	8d 85 25 f5 ff ff    	lea    -0xadb(%ebp),%eax
 81eb96d:	05 3d 0a 00 00       	add    $0xa3d,%eax
 81eb972:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eb976:	8b 45 10             	mov    0x10(%ebp),%eax
 81eb979:	89 04 24             	mov    %eax,(%esp)
 81eb97c:	e8 3f 16 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eb981:	83 f0 01             	xor    $0x1,%eax
 81eb984:	84 c0                	test   %al,%al
 81eb986:	74 29                	je     81eb9b1 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x8ed>
 81eb988:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb98f:	00 
 81eb990:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb997:	00 
 81eb998:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eb99f:	08 
 81eb9a0:	c7 04 24 4a 6d 00 00 	movl   $0x6d4a,(%esp)
 81eb9a7:	e8 2b 4f 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb9ac:	e9 2a 13 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eb9b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eb9b4:	89 04 24             	mov    %eax,(%esp)
 81eb9b7:	e8 d0 e9 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eb9bc:	83 f8 05             	cmp    $0x5,%eax
 81eb9bf:	0f 94 c0             	sete   %al
 81eb9c2:	84 c0                	test   %al,%al
 81eb9c4:	0f 84 c6 09 00 00    	je     81ec390 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x12cc>
 81eb9ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eb9cd:	89 04 24             	mov    %eax,(%esp)
 81eb9d0:	e8 79 44 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81eb9d5:	0f bf d8             	movswl %ax,%ebx
 81eb9d8:	e8 b1 07 ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81eb9dd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eb9e1:	89 04 24             	mov    %eax,(%esp)
 81eb9e4:	e8 49 95 0a 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81eb9e9:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81eb9ec:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 81eb9f0:	75 29                	jne    81eba1b <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x957>
 81eb9f2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eb9f9:	00 
 81eb9fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eba01:	00 
 81eba02:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81eba09:	08 
 81eba0a:	c7 04 24 54 6d 00 00 	movl   $0x6d54,(%esp)
 81eba11:	e8 c1 4e 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eba16:	e9 c0 12 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81eba1b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81eba1e:	05 44 18 00 00       	add    $0x1844,%eax
 81eba23:	89 04 24             	mov    %eax,(%esp)
 81eba26:	e8 15 9e 04 00       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 81eba2b:	3d c7 00 00 00       	cmp    $0xc7,%eax
 81eba30:	0f 96 c0             	setbe  %al
 81eba33:	84 c0                	test   %al,%al
 81eba35:	0f 84 d3 00 00 00    	je     81ebb0e <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xa4a>
 81eba3b:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81eba42:	0f b7 c0             	movzwl %ax,%eax
 81eba45:	89 45 90             	mov    %eax,-0x70(%ebp)
 81eba48:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81eba4b:	8d 88 44 18 00 00    	lea    0x1844(%eax),%ecx
 81eba51:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81eba54:	8d 55 90             	lea    -0x70(%ebp),%edx
 81eba57:	89 54 24 08          	mov    %edx,0x8(%esp)
 81eba5b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81eba5f:	89 04 24             	mov    %eax,(%esp)
 81eba62:	e8 87 18 ee ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 81eba67:	83 ec 04             	sub    $0x4,%esp
 81eba6a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81eba6d:	8d 90 44 18 00 00    	lea    0x1844(%eax),%edx
 81eba73:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81eba76:	89 54 24 04          	mov    %edx,0x4(%esp)
 81eba7a:	89 04 24             	mov    %eax,(%esp)
 81eba7d:	e8 98 18 ee ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 81eba82:	83 ec 04             	sub    $0x4,%esp
 81eba85:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81eba88:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eba8c:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81eba8f:	89 04 24             	mov    %eax,(%esp)
 81eba92:	e8 31 e9 ee ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 81eba97:	84 c0                	test   %al,%al
 81eba99:	74 16                	je     81ebab1 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x9ed>
 81eba9b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81eba9e:	89 04 24             	mov    %eax,(%esp)
 81ebaa1:	e8 9a 18 ee ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 81ebaa6:	8b 50 04             	mov    0x4(%eax),%edx
 81ebaa9:	83 c2 01             	add    $0x1,%edx
 81ebaac:	89 50 04             	mov    %edx,0x4(%eax)
 81ebaaf:	eb 5d                	jmp    81ebb0e <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xa4a>
 81ebab1:	c7 45 b0 01 00 00 00 	movl   $0x1,-0x50(%ebp)
 81ebab8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81ebabb:	8d 55 b0             	lea    -0x50(%ebp),%edx
 81ebabe:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ebac2:	8d 95 25 f5 ff ff    	lea    -0xadb(%ebp),%edx
 81ebac8:	83 c2 0d             	add    $0xd,%edx
 81ebacb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebacf:	89 04 24             	mov    %eax,(%esp)
 81ebad2:	e8 50 bc 04 00       	call   8237727 <_ZSt9make_pairIRtiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 81ebad7:	83 ec 04             	sub    $0x4,%esp
 81ebada:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81ebadd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ebae1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81ebae4:	89 04 24             	mov    %eax,(%esp)
 81ebae7:	e8 7e bc 04 00       	call   823776a <_ZNSt4pairIKiiEC1ItiEEOS_IT_T0_E>
 81ebaec:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebaef:	8d 88 44 18 00 00    	lea    0x1844(%eax),%ecx
 81ebaf5:	8d 45 98             	lea    -0x68(%ebp),%eax
 81ebaf8:	8d 55 a0             	lea    -0x60(%ebp),%edx
 81ebafb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ebaff:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81ebb03:	89 04 24             	mov    %eax,(%esp)
 81ebb06:	e8 45 b2 ed ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 81ebb0b:	83 ec 04             	sub    $0x4,%esp
 81ebb0e:	0f b6 45 8b          	movzbl -0x75(%ebp),%eax
 81ebb12:	3c 01                	cmp    $0x1,%al
 81ebb14:	75 23                	jne    81ebb39 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xa75>
 81ebb16:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81ebb1d:	0f b7 c0             	movzwl %ax,%eax
 81ebb20:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ebb24:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebb27:	89 04 24             	mov    %eax,(%esp)
 81ebb2a:	e8 11 aa 3c 00       	call   85b6540 <_ZN6CParty20DestroyPassiveObjectEi>
 81ebb2f:	b8 00 00 00 00       	mov    $0x0,%eax
 81ebb34:	e9 a2 11 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81ebb39:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ebb40:	0f b7 d0             	movzwl %ax,%edx
 81ebb43:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81ebb4a:	0f b7 c0             	movzwl %ax,%eax
 81ebb4d:	8d 4d 8c             	lea    -0x74(%ebp),%ecx
 81ebb50:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81ebb54:	8d 8d 25 f5 ff ff    	lea    -0xadb(%ebp),%ecx
 81ebb5a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81ebb5e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ebb62:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ebb66:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebb69:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ebb6d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebb70:	89 04 24             	mov    %eax,(%esp)
 81ebb73:	e8 70 6c 3b 00       	call   85a27e8 <_ZN6CParty12kill_monsterEP5CUseritRK15MSG_MONSTER_DIEPi>
 81ebb78:	83 f0 01             	xor    $0x1,%eax
 81ebb7b:	84 c0                	test   %al,%al
 81ebb7d:	0f 84 d2 00 00 00    	je     81ebc55 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xb91>
 81ebb83:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebb89:	89 04 24             	mov    %eax,(%esp)
 81ebb8c:	e8 bb 21 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ebb91:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 81ebb98:	00 
 81ebb99:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ebba0:	00 
 81ebba1:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebba7:	89 04 24             	mov    %eax,(%esp)
 81ebbaa:	e8 4d fd ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ebbaf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ebbb6:	00 
 81ebbb7:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebbbd:	89 04 24             	mov    %eax,(%esp)
 81ebbc0:	e8 5b fd ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ebbc5:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81ebbcc:	00 
 81ebbcd:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebbd3:	89 04 24             	mov    %eax,(%esp)
 81ebbd6:	e8 45 fd ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ebbdb:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81ebbe2:	0f b7 c0             	movzwl %ax,%eax
 81ebbe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ebbe9:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebbef:	89 04 24             	mov    %eax,(%esp)
 81ebbf2:	e8 ad e2 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ebbf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ebbfe:	00 
 81ebbff:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebc05:	89 04 24             	mov    %eax,(%esp)
 81ebc08:	e8 4b fd ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ebc0d:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebc13:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ebc17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebc1a:	89 04 24             	mov    %eax,(%esp)
 81ebc1d:	e8 98 c9 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ebc22:	eb 1e                	jmp    81ebc42 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xb7e>
 81ebc24:	89 d3                	mov    %edx,%ebx
 81ebc26:	89 c6                	mov    %eax,%esi
 81ebc28:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebc2e:	89 04 24             	mov    %eax,(%esp)
 81ebc31:	e8 4a 22 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ebc36:	89 f0                	mov    %esi,%eax
 81ebc38:	89 da                	mov    %ebx,%edx
 81ebc3a:	89 04 24             	mov    %eax,(%esp)
 81ebc3d:	e8 0e 7b 8f 00       	call   8ae3750 <_Unwind_Resume>
 81ebc42:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81ebc48:	89 04 24             	mov    %eax,(%esp)
 81ebc4b:	e8 30 22 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ebc50:	e9 81 10 00 00       	jmp    81eccd6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c12>
 81ebc55:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebc58:	89 04 24             	mov    %eax,(%esp)
 81ebc5b:	e8 ae 4b 04 00       	call   823080e <_ZN5CUser12GetHackCheckEv>
 81ebc60:	8d 95 25 f5 ff ff    	lea    -0xadb(%ebp),%edx
 81ebc66:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebc6a:	89 04 24             	mov    %eax,(%esp)
 81ebc6d:	e8 aa eb 08 00       	call   827a81c <_ZN17Secu_HackLogCheck6DieMobEPK15MSG_MONSTER_DIE>
 81ebc72:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ebc79:	66 83 f8 ff          	cmp    $0xffff,%ax
 81ebc7d:	0f 84 a5 00 00 00    	je     81ebd28 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xc64>
 81ebc83:	0f b7 85 4b ff ff ff 	movzwl -0xb5(%ebp),%eax
 81ebc8a:	0f b7 f0             	movzwl %ax,%esi
 81ebc8d:	0f b7 85 49 ff ff ff 	movzwl -0xb7(%ebp),%eax
 81ebc94:	0f b7 d8             	movzwl %ax,%ebx
 81ebc97:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81ebc9e:	e8 09 9c f5 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 81ebca3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ebca6:	81 c2 48 e4 08 00    	add    $0x8e448,%edx
 81ebcac:	c7 44 24 18 e8 03 00 	movl   $0x3e8,0x18(%esp)
 81ebcb3:	00 
 81ebcb4:	c7 44 24 14 58 02 00 	movl   $0x258,0x14(%esp)
 81ebcbb:	00 
 81ebcbc:	c7 44 24 10 58 02 00 	movl   $0x258,0x10(%esp)
 81ebcc3:	00 
 81ebcc4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ebcc8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ebccc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ebcd0:	89 14 24             	mov    %edx,(%esp)
 81ebcd3:	e8 c4 47 04 00       	call   823049c <_ZN5CUser14st_monstorkill5CheckEjttttj>
 81ebcd8:	84 c0                	test   %al,%al
 81ebcda:	74 3a                	je     81ebd16 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xc52>
 81ebcdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebcdf:	89 04 24             	mov    %eax,(%esp)
 81ebce2:	e8 73 dc f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ebce7:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ebcee:	00 
 81ebcef:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ebcf6:	00 
 81ebcf7:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ebcfe:	00 
 81ebcff:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 81ebd06:	00 
 81ebd07:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ebd0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebd0e:	89 04 24             	mov    %eax,(%esp)
 81ebd11:	e8 68 cf f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ebd16:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebd19:	c7 80 80 e4 08 00 00 	movl   $0x0,0x8e480(%eax)
 81ebd20:	00 00 00 
 81ebd23:	e9 08 02 00 00       	jmp    81ebf30 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xe6c>
 81ebd28:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebd2b:	8b 80 80 e4 08 00    	mov    0x8e480(%eax),%eax
 81ebd31:	8d 50 01             	lea    0x1(%eax),%edx
 81ebd34:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebd37:	89 90 80 e4 08 00    	mov    %edx,0x8e480(%eax)
 81ebd3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebd40:	8b 80 80 e4 08 00    	mov    0x8e480(%eax),%eax
 81ebd46:	83 f8 04             	cmp    $0x4,%eax
 81ebd49:	0f 86 e1 01 00 00    	jbe    81ebf30 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xe6c>
 81ebd4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebd52:	c7 80 80 e4 08 00 00 	movl   $0x0,0x8e480(%eax)
 81ebd59:	00 00 00 
 81ebd5c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebd5f:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ebd65:	85 c0                	test   %eax,%eax
 81ebd67:	75 3f                	jne    81ebda8 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xce4>
 81ebd69:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebd6c:	89 04 24             	mov    %eax,(%esp)
 81ebd6f:	e8 e6 db f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ebd74:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ebd7b:	00 
 81ebd7c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ebd83:	00 
 81ebd84:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ebd8b:	00 
 81ebd8c:	c7 44 24 08 cd 00 00 	movl   $0xcd,0x8(%esp)
 81ebd93:	00 
 81ebd94:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ebd97:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebd9b:	89 04 24             	mov    %eax,(%esp)
 81ebd9e:	e8 db ce f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ebda3:	e9 93 00 00 00       	jmp    81ebe3b <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xd77>
 81ebda8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebdab:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ebdb1:	89 04 24             	mov    %eax,(%esp)
 81ebdb4:	e8 37 1f f1 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81ebdb9:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 81ebdbe:	0f 94 c0             	sete   %al
 81ebdc1:	84 c0                	test   %al,%al
 81ebdc3:	74 3c                	je     81ebe01 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xd3d>
 81ebdc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebdc8:	89 04 24             	mov    %eax,(%esp)
 81ebdcb:	e8 8a db f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ebdd0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ebdd7:	00 
 81ebdd8:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 81ebddf:	00 
 81ebde0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ebde7:	00 
 81ebde8:	c7 44 24 08 cd 00 00 	movl   $0xcd,0x8(%esp)
 81ebdef:	00 
 81ebdf0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ebdf3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebdf7:	89 04 24             	mov    %eax,(%esp)
 81ebdfa:	e8 7f ce f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ebdff:	eb 3a                	jmp    81ebe3b <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xd77>
 81ebe01:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebe04:	89 04 24             	mov    %eax,(%esp)
 81ebe07:	e8 4e db f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ebe0c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ebe13:	00 
 81ebe14:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ebe1b:	00 
 81ebe1c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ebe23:	00 
 81ebe24:	c7 44 24 08 cd 00 00 	movl   $0xcd,0x8(%esp)
 81ebe2b:	00 
 81ebe2c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ebe2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebe33:	89 04 24             	mov    %eax,(%esp)
 81ebe36:	e8 43 ce f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ebe3b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebe3e:	89 04 24             	mov    %eax,(%esp)
 81ebe41:	e8 b0 1a 04 00       	call   822d8f6 <_ZN6CParty13checkBossRoomEv>
 81ebe46:	83 f0 01             	xor    $0x1,%eax
 81ebe49:	84 c0                	test   %al,%al
 81ebe4b:	0f 84 df 00 00 00    	je     81ebf30 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xe6c>
 81ebe51:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebe54:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ebe5a:	85 c0                	test   %eax,%eax
 81ebe5c:	75 3f                	jne    81ebe9d <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xdd9>
 81ebe5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebe61:	89 04 24             	mov    %eax,(%esp)
 81ebe64:	e8 f1 da f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ebe69:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ebe70:	00 
 81ebe71:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ebe78:	00 
 81ebe79:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ebe80:	00 
 81ebe81:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 81ebe88:	00 
 81ebe89:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ebe8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebe90:	89 04 24             	mov    %eax,(%esp)
 81ebe93:	e8 e6 cd f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ebe98:	e9 93 00 00 00       	jmp    81ebf30 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xe6c>
 81ebe9d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebea0:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ebea6:	89 04 24             	mov    %eax,(%esp)
 81ebea9:	e8 42 1e f1 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81ebeae:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 81ebeb3:	0f 94 c0             	sete   %al
 81ebeb6:	84 c0                	test   %al,%al
 81ebeb8:	74 3c                	je     81ebef6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xe32>
 81ebeba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebebd:	89 04 24             	mov    %eax,(%esp)
 81ebec0:	e8 95 da f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ebec5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ebecc:	00 
 81ebecd:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 81ebed4:	00 
 81ebed5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ebedc:	00 
 81ebedd:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 81ebee4:	00 
 81ebee5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ebee8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebeec:	89 04 24             	mov    %eax,(%esp)
 81ebeef:	e8 8a cd f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ebef4:	eb 3a                	jmp    81ebf30 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xe6c>
 81ebef6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ebef9:	89 04 24             	mov    %eax,(%esp)
 81ebefc:	e8 59 da f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ebf01:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ebf08:	00 
 81ebf09:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ebf10:	00 
 81ebf11:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ebf18:	00 
 81ebf19:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 81ebf20:	00 
 81ebf21:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ebf24:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ebf28:	89 04 24             	mov    %eax,(%esp)
 81ebf2b:	e8 4e cd f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ebf30:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81ebf37:	e9 7b 03 00 00       	jmp    81ec2b7 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x11f3>
 81ebf3c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ebf3f:	83 c0 08             	add    $0x8,%eax
 81ebf42:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ebf49:	ff 
 81ebf4a:	66 3d 11 01          	cmp    $0x111,%ax
 81ebf4e:	0f 85 5f 03 00 00    	jne    81ec2b3 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x11ef>
 81ebf54:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81ebf5b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ebf5e:	05 08 01 00 00       	add    $0x108,%eax
 81ebf63:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ebf6a:	ff 
 81ebf6b:	0f b7 d8             	movzwl %ax,%ebx
 81ebf6e:	e8 34 e4 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ebf73:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ebf77:	89 04 24             	mov    %eax,(%esp)
 81ebf7a:	e8 1d 8c 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81ebf7f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81ebf82:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81ebf86:	74 2d                	je     81ebfb5 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xef1>
 81ebf88:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ebf8b:	05 08 01 00 00       	add    $0x108,%eax
 81ebf90:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ebf97:	ff 
 81ebf98:	0f b7 c0             	movzwl %ax,%eax
 81ebf9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ebf9f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ebfa2:	89 04 24             	mov    %eax,(%esp)
 81ebfa5:	e8 50 a7 3c 00       	call   85b66fa <_ZN6CParty10isMyMemberEj>
 81ebfaa:	84 c0                	test   %al,%al
 81ebfac:	74 07                	je     81ebfb5 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xef1>
 81ebfae:	b8 01 00 00 00       	mov    $0x1,%eax
 81ebfb3:	eb 05                	jmp    81ebfba <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xef6>
 81ebfb5:	b8 00 00 00 00       	mov    $0x0,%eax
 81ebfba:	84 c0                	test   %al,%al
 81ebfbc:	0f 84 f1 02 00 00    	je     81ec2b3 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x11ef>
 81ebfc2:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%ebp)
 81ebfc9:	00 00 00 
 81ebfcc:	c7 85 70 ff ff ff 6b 	movl   $0x6b,-0x90(%ebp)
 81ebfd3:	00 00 00 
 81ebfd6:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81ebfdc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ebfe0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81ebfe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ebfea:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ebfed:	89 04 24             	mov    %eax,(%esp)
 81ebff0:	e8 9b a7 09 00       	call   8286790 <_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE>
 81ebff5:	8b 85 43 ff ff ff    	mov    -0xbd(%ebp),%eax
 81ebffb:	3d dc 05 00 00       	cmp    $0x5dc,%eax
 81ec000:	0f 86 84 00 00 00    	jbe    81ec08a <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xfc6>
 81ec006:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec009:	89 04 24             	mov    %eax,(%esp)
 81ec00c:	e8 49 d9 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec011:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec018:	00 
 81ec019:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec020:	00 
 81ec021:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec028:	00 
 81ec029:	c7 44 24 08 6f 00 00 	movl   $0x6f,0x8(%esp)
 81ec030:	00 
 81ec031:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec034:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec038:	89 04 24             	mov    %eax,(%esp)
 81ec03b:	e8 3e cc f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec040:	8b 9d 43 ff ff ff    	mov    -0xbd(%ebp),%ebx
 81ec046:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ec04d:	00 
 81ec04e:	c7 44 24 08 db 6d 00 	movl   $0x6ddb,0x8(%esp)
 81ec055:	00 
 81ec056:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81ec05d:	08 
 81ec05e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81ec061:	89 04 24             	mov    %eax,(%esp)
 81ec064:	e8 af 36 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ec069:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ec06d:	c7 44 24 04 70 20 bc 	movl   $0x8bc2070,0x4(%esp)
 81ec074:	08 
 81ec075:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81ec078:	89 04 24             	mov    %eax,(%esp)
 81ec07b:	e8 08 37 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ec080:	c7 85 43 ff ff ff 01 	movl   $0x1,-0xbd(%ebp)
 81ec087:	00 00 00 
 81ec08a:	8b 85 43 ff ff ff    	mov    -0xbd(%ebp),%eax
 81ec090:	83 f8 01             	cmp    $0x1,%eax
 81ec093:	75 27                	jne    81ec0bc <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xff8>
 81ec095:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ec098:	89 04 24             	mov    %eax,(%esp)
 81ec09b:	e8 ac 90 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ec0a0:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ec0a6:	89 04 24             	mov    %eax,(%esp)
 81ec0a9:	e8 42 1c f1 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81ec0ae:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 81ec0b3:	75 07                	jne    81ec0bc <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xff8>
 81ec0b5:	b8 01 00 00 00       	mov    $0x1,%eax
 81ec0ba:	eb 05                	jmp    81ec0c1 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xffd>
 81ec0bc:	b8 00 00 00 00       	mov    $0x0,%eax
 81ec0c1:	84 c0                	test   %al,%al
 81ec0c3:	74 3c                	je     81ec101 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x103d>
 81ec0c5:	8b 9d 3f ff ff ff    	mov    -0xc1(%ebp),%ebx
 81ec0cb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ec0ce:	89 04 24             	mov    %eax,(%esp)
 81ec0d1:	e8 84 d8 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec0d6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec0dd:	00 
 81ec0de:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81ec0e2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec0e9:	00 
 81ec0ea:	c7 44 24 08 7f 00 00 	movl   $0x7f,0x8(%esp)
 81ec0f1:	00 
 81ec0f2:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ec0f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec0f9:	89 04 24             	mov    %eax,(%esp)
 81ec0fc:	e8 7d cb f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec101:	8b 85 3f ff ff ff    	mov    -0xc1(%ebp),%eax
 81ec107:	85 c0                	test   %eax,%eax
 81ec109:	75 44                	jne    81ec14f <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x108b>
 81ec10b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec10e:	89 04 24             	mov    %eax,(%esp)
 81ec111:	e8 44 d8 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec116:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec11d:	00 
 81ec11e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec125:	00 
 81ec126:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec12d:	00 
 81ec12e:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 81ec135:	00 
 81ec136:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec139:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec13d:	89 04 24             	mov    %eax,(%esp)
 81ec140:	e8 39 cb f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec145:	c7 85 3f ff ff ff 01 	movl   $0x1,-0xc1(%ebp)
 81ec14c:	00 00 00 
 81ec14f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec152:	05 08 04 00 00       	add    $0x408,%eax
 81ec157:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ec15e:	ff 
 81ec15f:	66 85 c0             	test   %ax,%ax
 81ec162:	75 4c                	jne    81ec1b0 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x10ec>
 81ec164:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec167:	89 04 24             	mov    %eax,(%esp)
 81ec16a:	e8 eb d7 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec16f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec176:	00 
 81ec177:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec17e:	00 
 81ec17f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec186:	00 
 81ec187:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 81ec18e:	00 
 81ec18f:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec192:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec196:	89 04 24             	mov    %eax,(%esp)
 81ec199:	e8 e0 ca f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec19e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec1a1:	05 08 04 00 00       	add    $0x408,%eax
 81ec1a6:	66 c7 84 45 2f f5 ff 	movw   $0x1,-0xad1(%ebp,%eax,2)
 81ec1ad:	ff 01 00 
 81ec1b0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec1b3:	05 04 01 00 00       	add    $0x104,%eax
 81ec1b8:	8b 84 85 2f f5 ff ff 	mov    -0xad1(%ebp,%eax,4),%eax
 81ec1bf:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ec1c2:	81 c2 08 04 00 00    	add    $0x408,%edx
 81ec1c8:	0f b7 94 55 2f f5 ff 	movzwl -0xad1(%ebp,%edx,2),%edx
 81ec1cf:	ff 
 81ec1d0:	0f b7 d2             	movzwl %dx,%edx
 81ec1d3:	89 95 14 f5 ff ff    	mov    %edx,-0xaec(%ebp)
 81ec1d9:	ba 00 00 00 00       	mov    $0x0,%edx
 81ec1de:	f7 b5 14 f5 ff ff    	divl   -0xaec(%ebp)
 81ec1e4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81ec1e7:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81ec1ed:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
 81ec1f0:	76 2c                	jbe    81ec21e <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x115a>
 81ec1f2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ec1f5:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ec1fb:	85 c0                	test   %eax,%eax
 81ec1fd:	74 18                	je     81ec217 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1153>
 81ec1ff:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ec202:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81ec208:	89 04 24             	mov    %eax,(%esp)
 81ec20b:	e8 e0 1a f1 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 81ec210:	3d fe 2a 00 00       	cmp    $0x2afe,%eax
 81ec215:	74 07                	je     81ec21e <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x115a>
 81ec217:	b8 01 00 00 00       	mov    $0x1,%eax
 81ec21c:	eb 05                	jmp    81ec223 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x115f>
 81ec21e:	b8 00 00 00 00       	mov    $0x0,%eax
 81ec223:	84 c0                	test   %al,%al
 81ec225:	0f 84 88 00 00 00    	je     81ec2b3 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x11ef>
 81ec22b:	8b 9d 70 ff ff ff    	mov    -0x90(%ebp),%ebx
 81ec231:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ec234:	89 04 24             	mov    %eax,(%esp)
 81ec237:	e8 1e d7 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec23c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec243:	00 
 81ec244:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec24b:	00 
 81ec24c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec253:	00 
 81ec254:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ec258:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ec25b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec25f:	89 04 24             	mov    %eax,(%esp)
 81ec262:	e8 17 ca f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec267:	e8 2c a7 09 00       	call   8286998 <_ZN19CHackLog_OverDamage24GetDungeonLimitMaxDamageEv>
 81ec26c:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81ec26f:	0f 92 c0             	setb   %al
 81ec272:	84 c0                	test   %al,%al
 81ec274:	74 3d                	je     81ec2b3 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x11ef>
 81ec276:	e8 27 a7 09 00       	call   82869a2 <_ZN19CHackLog_OverDamage29GetHackTypeOverLimitMaxDamageEv>
 81ec27b:	89 c3                	mov    %eax,%ebx
 81ec27d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ec280:	89 04 24             	mov    %eax,(%esp)
 81ec283:	e8 d2 d6 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec288:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec28f:	00 
 81ec290:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec297:	00 
 81ec298:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec29f:	00 
 81ec2a0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ec2a4:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81ec2a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec2ab:	89 04 24             	mov    %eax,(%esp)
 81ec2ae:	e8 cb c9 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec2b3:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 81ec2b7:	0f b6 85 3e f5 ff ff 	movzbl -0xac2(%ebp),%eax
 81ec2be:	0f b6 c0             	movzbl %al,%eax
 81ec2c1:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 81ec2c4:	0f 9f c0             	setg   %al
 81ec2c7:	84 c0                	test   %al,%al
 81ec2c9:	0f 85 6d fc ff ff    	jne    81ebf3c <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0xe78>
 81ec2cf:	8b 8d 43 ff ff ff    	mov    -0xbd(%ebp),%ecx
 81ec2d5:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 81ec2da:	89 c8                	mov    %ecx,%eax
 81ec2dc:	f7 e2                	mul    %edx
 81ec2de:	c1 ea 03             	shr    $0x3,%edx
 81ec2e1:	89 d0                	mov    %edx,%eax
 81ec2e3:	c1 e0 02             	shl    $0x2,%eax
 81ec2e6:	01 d0                	add    %edx,%eax
 81ec2e8:	01 c0                	add    %eax,%eax
 81ec2ea:	89 ca                	mov    %ecx,%edx
 81ec2ec:	29 c2                	sub    %eax,%edx
 81ec2ee:	85 d2                	test   %edx,%edx
 81ec2f0:	75 5d                	jne    81ec34f <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x128b>
 81ec2f2:	8b 8d 3f ff ff ff    	mov    -0xc1(%ebp),%ecx
 81ec2f8:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 81ec2fd:	89 c8                	mov    %ecx,%eax
 81ec2ff:	f7 e2                	mul    %edx
 81ec301:	c1 ea 03             	shr    $0x3,%edx
 81ec304:	89 d0                	mov    %edx,%eax
 81ec306:	c1 e0 02             	shl    $0x2,%eax
 81ec309:	01 d0                	add    %edx,%eax
 81ec30b:	01 c0                	add    %eax,%eax
 81ec30d:	89 ca                	mov    %ecx,%edx
 81ec30f:	29 c2                	sub    %eax,%edx
 81ec311:	85 d2                	test   %edx,%edx
 81ec313:	75 3a                	jne    81ec34f <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x128b>
 81ec315:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec318:	89 04 24             	mov    %eax,(%esp)
 81ec31b:	e8 3a d6 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec320:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec327:	00 
 81ec328:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec32f:	00 
 81ec330:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec337:	00 
 81ec338:	c7 44 24 08 ca 00 00 	movl   $0xca,0x8(%esp)
 81ec33f:	00 
 81ec340:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec343:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec347:	89 04 24             	mov    %eax,(%esp)
 81ec34a:	e8 2f c9 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec34f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec352:	89 04 24             	mov    %eax,(%esp)
 81ec355:	e8 00 d6 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec35a:	0f b7 85 4b ff ff ff 	movzwl -0xb5(%ebp),%eax
 81ec361:	0f b7 c8             	movzwl %ax,%ecx
 81ec364:	0f b7 85 49 ff ff ff 	movzwl -0xb7(%ebp),%eax
 81ec36b:	0f b7 d0             	movzwl %ax,%edx
 81ec36e:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81ec371:	0f b7 c0             	movzwl %ax,%eax
 81ec374:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81ec378:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ec37c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ec380:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec383:	89 04 24             	mov    %eax,(%esp)
 81ec386:	e8 01 cd f0 ff       	call   80f908c <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt>
 81ec38b:	e9 46 09 00 00       	jmp    81eccd6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c12>
 81ec390:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec393:	89 04 24             	mov    %eax,(%esp)
 81ec396:	e8 f1 df ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ec39b:	83 f8 0a             	cmp    $0xa,%eax
 81ec39e:	0f 94 c0             	sete   %al
 81ec3a1:	84 c0                	test   %al,%al
 81ec3a3:	0f 84 f3 03 00 00    	je     81ec79c <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x16d8>
 81ec3a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec3ac:	89 04 24             	mov    %eax,(%esp)
 81ec3af:	e8 f0 8e 46 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 81ec3b4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81ec3b7:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81ec3bb:	0f 84 15 09 00 00    	je     81eccd6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c12>
 81ec3c1:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ec3c8:	66 83 f8 ff          	cmp    $0xffff,%ax
 81ec3cc:	0f 84 93 00 00 00    	je     81ec465 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x13a1>
 81ec3d2:	0f b7 85 4b ff ff ff 	movzwl -0xb5(%ebp),%eax
 81ec3d9:	0f b7 f0             	movzwl %ax,%esi
 81ec3dc:	0f b7 85 49 ff ff ff 	movzwl -0xb7(%ebp),%eax
 81ec3e3:	0f b7 d8             	movzwl %ax,%ebx
 81ec3e6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81ec3ed:	e8 ba 94 f5 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 81ec3f2:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec3f5:	81 c2 48 e4 08 00    	add    $0x8e448,%edx
 81ec3fb:	c7 44 24 18 e8 03 00 	movl   $0x3e8,0x18(%esp)
 81ec402:	00 
 81ec403:	c7 44 24 14 58 02 00 	movl   $0x258,0x14(%esp)
 81ec40a:	00 
 81ec40b:	c7 44 24 10 58 02 00 	movl   $0x258,0x10(%esp)
 81ec412:	00 
 81ec413:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ec417:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ec41b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ec41f:	89 14 24             	mov    %edx,(%esp)
 81ec422:	e8 75 40 04 00       	call   823049c <_ZN5CUser14st_monstorkill5CheckEjttttj>
 81ec427:	84 c0                	test   %al,%al
 81ec429:	74 3a                	je     81ec465 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x13a1>
 81ec42b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec42e:	89 04 24             	mov    %eax,(%esp)
 81ec431:	e8 24 d5 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec436:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec43d:	00 
 81ec43e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec445:	00 
 81ec446:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec44d:	00 
 81ec44e:	c7 44 24 08 d4 00 00 	movl   $0xd4,0x8(%esp)
 81ec455:	00 
 81ec456:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec459:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec45d:	89 04 24             	mov    %eax,(%esp)
 81ec460:	e8 19 c8 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec465:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81ec46c:	e9 7b 01 00 00       	jmp    81ec5ec <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1528>
 81ec471:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec474:	83 c0 08             	add    $0x8,%eax
 81ec477:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ec47e:	ff 
 81ec47f:	66 3d 11 01          	cmp    $0x111,%ax
 81ec483:	0f 85 5f 01 00 00    	jne    81ec5e8 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1524>
 81ec489:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81ec490:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec493:	05 08 01 00 00       	add    $0x108,%eax
 81ec498:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ec49f:	ff 
 81ec4a0:	0f b7 d8             	movzwl %ax,%ebx
 81ec4a3:	e8 ff de ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ec4a8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ec4ac:	89 04 24             	mov    %eax,(%esp)
 81ec4af:	e8 e8 86 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81ec4b4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81ec4b7:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81ec4bb:	0f 84 27 01 00 00    	je     81ec5e8 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1524>
 81ec4c1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec4c4:	05 08 04 00 00       	add    $0x408,%eax
 81ec4c9:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ec4d0:	ff 
 81ec4d1:	66 85 c0             	test   %ax,%ax
 81ec4d4:	75 4c                	jne    81ec522 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x145e>
 81ec4d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec4d9:	89 04 24             	mov    %eax,(%esp)
 81ec4dc:	e8 79 d4 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec4e1:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec4e8:	00 
 81ec4e9:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec4f0:	00 
 81ec4f1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec4f8:	00 
 81ec4f9:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 81ec500:	00 
 81ec501:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec504:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec508:	89 04 24             	mov    %eax,(%esp)
 81ec50b:	e8 6e c7 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec510:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec513:	05 08 04 00 00       	add    $0x408,%eax
 81ec518:	66 c7 84 45 2f f5 ff 	movw   $0x1,-0xad1(%ebp,%eax,2)
 81ec51f:	ff 01 00 
 81ec522:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec525:	05 04 01 00 00       	add    $0x104,%eax
 81ec52a:	8b 84 85 2f f5 ff ff 	mov    -0xad1(%ebp,%eax,4),%eax
 81ec531:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ec534:	81 c2 08 04 00 00    	add    $0x408,%edx
 81ec53a:	0f b7 94 55 2f f5 ff 	movzwl -0xad1(%ebp,%edx,2),%edx
 81ec541:	ff 
 81ec542:	0f b7 d2             	movzwl %dx,%edx
 81ec545:	89 95 14 f5 ff ff    	mov    %edx,-0xaec(%ebp)
 81ec54b:	ba 00 00 00 00       	mov    $0x0,%edx
 81ec550:	f7 b5 14 f5 ff ff    	divl   -0xaec(%ebp)
 81ec556:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ec559:	81 7d e0 c7 32 00 00 	cmpl   $0x32c7,-0x20(%ebp)
 81ec560:	76 3a                	jbe    81ec59c <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x14d8>
 81ec562:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec565:	89 04 24             	mov    %eax,(%esp)
 81ec568:	e8 ed d3 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec56d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec574:	00 
 81ec575:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec57c:	00 
 81ec57d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec584:	00 
 81ec585:	c7 44 24 08 6c 00 00 	movl   $0x6c,0x8(%esp)
 81ec58c:	00 
 81ec58d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec590:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec594:	89 04 24             	mov    %eax,(%esp)
 81ec597:	e8 e2 c6 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec59c:	e8 e3 a3 09 00       	call   8286984 <_ZN19CHackLog_OverDamage24GetDeathTowerLimitDamageEv>
 81ec5a1:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81ec5a4:	0f 92 c0             	setb   %al
 81ec5a7:	84 c0                	test   %al,%al
 81ec5a9:	74 3d                	je     81ec5e8 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1524>
 81ec5ab:	e8 de a3 09 00       	call   828698e <_ZN19CHackLog_OverDamage31GetDeathTowerOverDamageHackTypeEv>
 81ec5b0:	89 c3                	mov    %eax,%ebx
 81ec5b2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ec5b5:	89 04 24             	mov    %eax,(%esp)
 81ec5b8:	e8 9d d3 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec5bd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec5c4:	00 
 81ec5c5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec5cc:	00 
 81ec5cd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec5d4:	00 
 81ec5d5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ec5d9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81ec5dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec5e0:	89 04 24             	mov    %eax,(%esp)
 81ec5e3:	e8 96 c6 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec5e8:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 81ec5ec:	0f b6 85 3e f5 ff ff 	movzbl -0xac2(%ebp),%eax
 81ec5f3:	0f b6 c0             	movzbl %al,%eax
 81ec5f6:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 81ec5f9:	0f 9f c0             	setg   %al
 81ec5fc:	84 c0                	test   %al,%al
 81ec5fe:	0f 85 6d fe ff ff    	jne    81ec471 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x13ad>
 81ec604:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ec60b:	66 83 f8 ff          	cmp    $0xffff,%ax
 81ec60f:	74 12                	je     81ec623 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x155f>
 81ec611:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec614:	c7 80 80 e4 08 00 00 	movl   $0x0,0x8e480(%eax)
 81ec61b:	00 00 00 
 81ec61e:	e9 f9 00 00 00       	jmp    81ec71c <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1658>
 81ec623:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec626:	89 04 24             	mov    %eax,(%esp)
 81ec629:	e8 20 38 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81ec62e:	0f bf d8             	movswl %ax,%ebx
 81ec631:	e8 58 fb ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ec636:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ec63a:	89 04 24             	mov    %eax,(%esp)
 81ec63d:	e8 f0 88 0a 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81ec642:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ec645:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81ec649:	75 29                	jne    81ec674 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x15b0>
 81ec64b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ec652:	00 
 81ec653:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ec65a:	00 
 81ec65b:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81ec662:	08 
 81ec663:	c7 04 24 7f 6e 00 00 	movl   $0x6e7f,(%esp)
 81ec66a:	e8 68 42 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ec66f:	e9 67 06 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81ec674:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec677:	8b 80 80 e4 08 00    	mov    0x8e480(%eax),%eax
 81ec67d:	8d 50 01             	lea    0x1(%eax),%edx
 81ec680:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec683:	89 90 80 e4 08 00    	mov    %edx,0x8e480(%eax)
 81ec689:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec68c:	8b 80 80 e4 08 00    	mov    0x8e480(%eax),%eax
 81ec692:	83 f8 04             	cmp    $0x4,%eax
 81ec695:	0f 86 81 00 00 00    	jbe    81ec71c <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1658>
 81ec69b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec69e:	c7 80 80 e4 08 00 00 	movl   $0x0,0x8e480(%eax)
 81ec6a5:	00 00 00 
 81ec6a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec6ab:	89 04 24             	mov    %eax,(%esp)
 81ec6ae:	e8 a7 d2 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec6b3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec6ba:	00 
 81ec6bb:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81ec6c2:	00 
 81ec6c3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec6ca:	00 
 81ec6cb:	c7 44 24 08 cd 00 00 	movl   $0xcd,0x8(%esp)
 81ec6d2:	00 
 81ec6d3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec6d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec6da:	89 04 24             	mov    %eax,(%esp)
 81ec6dd:	e8 9c c5 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec6e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec6e5:	89 04 24             	mov    %eax,(%esp)
 81ec6e8:	e8 6d d2 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec6ed:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec6f4:	00 
 81ec6f5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81ec6fc:	00 
 81ec6fd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec704:	00 
 81ec705:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 81ec70c:	00 
 81ec70d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec710:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec714:	89 04 24             	mov    %eax,(%esp)
 81ec717:	e8 62 c5 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec71c:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ec723:	0f b7 d0             	movzwl %ax,%edx
 81ec726:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81ec72d:	0f b7 c0             	movzwl %ax,%eax
 81ec730:	8d 4d 8c             	lea    -0x74(%ebp),%ecx
 81ec733:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81ec737:	8d 8d 25 f5 ff ff    	lea    -0xadb(%ebp),%ecx
 81ec73d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81ec741:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ec745:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ec749:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec74c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ec750:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81ec753:	89 04 24             	mov    %eax,(%esp)
 81ec756:	e8 e3 80 27 00       	call   846483e <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi>
 81ec75b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec75e:	89 04 24             	mov    %eax,(%esp)
 81ec761:	e8 f4 d1 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec766:	0f b7 85 4b ff ff ff 	movzwl -0xb5(%ebp),%eax
 81ec76d:	0f b7 c8             	movzwl %ax,%ecx
 81ec770:	0f b7 85 49 ff ff ff 	movzwl -0xb7(%ebp),%eax
 81ec777:	0f b7 d0             	movzwl %ax,%edx
 81ec77a:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81ec77d:	0f b7 c0             	movzwl %ax,%eax
 81ec780:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81ec784:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ec788:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ec78c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec78f:	89 04 24             	mov    %eax,(%esp)
 81ec792:	e8 f5 c8 f0 ff       	call   80f908c <_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt>
 81ec797:	e9 3a 05 00 00       	jmp    81eccd6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c12>
 81ec79c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec79f:	89 04 24             	mov    %eax,(%esp)
 81ec7a2:	e8 e5 db ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ec7a7:	83 f8 0c             	cmp    $0xc,%eax
 81ec7aa:	0f 94 c0             	sete   %al
 81ec7ad:	84 c0                	test   %al,%al
 81ec7af:	0f 84 0a 03 00 00    	je     81ecabf <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x19fb>
 81ec7b5:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ec7bc:	66 83 f8 ff          	cmp    $0xffff,%ax
 81ec7c0:	75 74                	jne    81ec836 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1772>
 81ec7c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec7c5:	89 04 24             	mov    %eax,(%esp)
 81ec7c8:	e8 8d d1 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec7cd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec7d4:	00 
 81ec7d5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec7dc:	00 
 81ec7dd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec7e4:	00 
 81ec7e5:	c7 44 24 08 cd 00 00 	movl   $0xcd,0x8(%esp)
 81ec7ec:	00 
 81ec7ed:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec7f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec7f4:	89 04 24             	mov    %eax,(%esp)
 81ec7f7:	e8 82 c4 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec7fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec7ff:	89 04 24             	mov    %eax,(%esp)
 81ec802:	e8 53 d1 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec807:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec80e:	00 
 81ec80f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec816:	00 
 81ec817:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec81e:	00 
 81ec81f:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 81ec826:	00 
 81ec827:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec82a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec82e:	89 04 24             	mov    %eax,(%esp)
 81ec831:	e8 48 c4 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec836:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81ec83d:	e9 27 02 00 00       	jmp    81eca69 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x19a5>
 81ec842:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec845:	83 c0 08             	add    $0x8,%eax
 81ec848:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ec84f:	ff 
 81ec850:	66 3d 11 01          	cmp    $0x111,%ax
 81ec854:	0f 85 0b 02 00 00    	jne    81eca65 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x19a1>
 81ec85a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81ec861:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec864:	05 08 01 00 00       	add    $0x108,%eax
 81ec869:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ec870:	ff 
 81ec871:	0f b7 d8             	movzwl %ax,%ebx
 81ec874:	e8 2e db ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ec879:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ec87d:	89 04 24             	mov    %eax,(%esp)
 81ec880:	e8 17 83 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81ec885:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ec888:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81ec88c:	0f 84 d3 01 00 00    	je     81eca65 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x19a1>
 81ec892:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec895:	05 04 01 00 00       	add    $0x104,%eax
 81ec89a:	8b 84 85 2f f5 ff ff 	mov    -0xad1(%ebp,%eax,4),%eax
 81ec8a1:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ec8a4:	81 c2 08 04 00 00    	add    $0x408,%edx
 81ec8aa:	0f b7 94 55 2f f5 ff 	movzwl -0xad1(%ebp,%edx,2),%edx
 81ec8b1:	ff 
 81ec8b2:	0f b7 d2             	movzwl %dx,%edx
 81ec8b5:	89 95 14 f5 ff ff    	mov    %edx,-0xaec(%ebp)
 81ec8bb:	ba 00 00 00 00       	mov    $0x0,%edx
 81ec8c0:	f7 b5 14 f5 ff ff    	divl   -0xaec(%ebp)
 81ec8c6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ec8c9:	e8 de a0 09 00       	call   82869ac <_ZN19CHackLog_OverDamage23GetBossTowerLimitDamageEv>
 81ec8ce:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81ec8d1:	0f 92 c0             	setb   %al
 81ec8d4:	84 c0                	test   %al,%al
 81ec8d6:	0f 84 89 00 00 00    	je     81ec965 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x18a1>
 81ec8dc:	e8 d5 a0 09 00       	call   82869b6 <_ZN19CHackLog_OverDamage30GetBossTowerOverDamageHackTypeEv>
 81ec8e1:	89 c3                	mov    %eax,%ebx
 81ec8e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ec8e6:	89 04 24             	mov    %eax,(%esp)
 81ec8e9:	e8 6c d0 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec8ee:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec8f5:	00 
 81ec8f6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec8fd:	00 
 81ec8fe:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec905:	00 
 81ec906:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ec90a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81ec90d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec911:	89 04 24             	mov    %eax,(%esp)
 81ec914:	e8 65 c3 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec919:	e8 7a a0 09 00       	call   8286998 <_ZN19CHackLog_OverDamage24GetDungeonLimitMaxDamageEv>
 81ec91e:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81ec921:	0f 92 c0             	setb   %al
 81ec924:	84 c0                	test   %al,%al
 81ec926:	74 3d                	je     81ec965 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x18a1>
 81ec928:	e8 75 a0 09 00       	call   82869a2 <_ZN19CHackLog_OverDamage29GetHackTypeOverLimitMaxDamageEv>
 81ec92d:	89 c3                	mov    %eax,%ebx
 81ec92f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ec932:	89 04 24             	mov    %eax,(%esp)
 81ec935:	e8 20 d0 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec93a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec941:	00 
 81ec942:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec949:	00 
 81ec94a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec951:	00 
 81ec952:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ec956:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81ec959:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec95d:	89 04 24             	mov    %eax,(%esp)
 81ec960:	e8 19 c3 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec965:	8b 85 43 ff ff ff    	mov    -0xbd(%ebp),%eax
 81ec96b:	3d dc 05 00 00       	cmp    $0x5dc,%eax
 81ec970:	76 44                	jbe    81ec9b6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x18f2>
 81ec972:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec975:	89 04 24             	mov    %eax,(%esp)
 81ec978:	e8 dd cf f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec97d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec984:	00 
 81ec985:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec98c:	00 
 81ec98d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec994:	00 
 81ec995:	c7 44 24 08 6f 00 00 	movl   $0x6f,0x8(%esp)
 81ec99c:	00 
 81ec99d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec9a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec9a4:	89 04 24             	mov    %eax,(%esp)
 81ec9a7:	e8 d2 c2 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ec9ac:	c7 85 43 ff ff ff 01 	movl   $0x1,-0xbd(%ebp)
 81ec9b3:	00 00 00 
 81ec9b6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ec9b9:	05 08 04 00 00       	add    $0x408,%eax
 81ec9be:	0f b7 84 45 2f f5 ff 	movzwl -0xad1(%ebp,%eax,2),%eax
 81ec9c5:	ff 
 81ec9c6:	66 85 c0             	test   %ax,%ax
 81ec9c9:	75 4c                	jne    81eca17 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1953>
 81ec9cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ec9ce:	89 04 24             	mov    %eax,(%esp)
 81ec9d1:	e8 84 cf f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ec9d6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ec9dd:	00 
 81ec9de:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ec9e5:	00 
 81ec9e6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ec9ed:	00 
 81ec9ee:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 81ec9f5:	00 
 81ec9f6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ec9f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ec9fd:	89 04 24             	mov    %eax,(%esp)
 81eca00:	e8 79 c2 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81eca05:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81eca08:	05 08 04 00 00       	add    $0x408,%eax
 81eca0d:	66 c7 84 45 2f f5 ff 	movw   $0x1,-0xad1(%ebp,%eax,2)
 81eca14:	ff 01 00 
 81eca17:	8b 85 3f ff ff ff    	mov    -0xc1(%ebp),%eax
 81eca1d:	85 c0                	test   %eax,%eax
 81eca1f:	75 44                	jne    81eca65 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x19a1>
 81eca21:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eca24:	89 04 24             	mov    %eax,(%esp)
 81eca27:	e8 2e cf f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81eca2c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81eca33:	00 
 81eca34:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81eca3b:	00 
 81eca3c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81eca43:	00 
 81eca44:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 81eca4b:	00 
 81eca4c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81eca4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81eca53:	89 04 24             	mov    %eax,(%esp)
 81eca56:	e8 23 c2 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81eca5b:	c7 85 3f ff ff ff 01 	movl   $0x1,-0xc1(%ebp)
 81eca62:	00 00 00 
 81eca65:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 81eca69:	0f b6 85 3e f5 ff ff 	movzbl -0xac2(%ebp),%eax
 81eca70:	0f b6 c0             	movzbl %al,%eax
 81eca73:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 81eca76:	0f 9f c0             	setg   %al
 81eca79:	84 c0                	test   %al,%al
 81eca7b:	0f 85 c1 fd ff ff    	jne    81ec842 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x177e>
 81eca81:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81eca88:	0f b7 d0             	movzwl %ax,%edx
 81eca8b:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81eca92:	0f b7 c0             	movzwl %ax,%eax
 81eca95:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81eca9c:	00 
 81eca9d:	8d 8d 25 f5 ff ff    	lea    -0xadb(%ebp),%ecx
 81ecaa3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81ecaa7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ecaab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ecaaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecab2:	89 04 24             	mov    %eax,(%esp)
 81ecab5:	e8 f0 9d f5 ff       	call   81468aa <_ZN6Global14CBossTowerFunc6DieMobEP5CUserttRK15MSG_MONSTER_DIEPi>
 81ecaba:	e9 17 02 00 00       	jmp    81eccd6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c12>
 81ecabf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecac2:	89 04 24             	mov    %eax,(%esp)
 81ecac5:	e8 c2 d8 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ecaca:	83 f8 0d             	cmp    $0xd,%eax
 81ecacd:	0f 94 c0             	sete   %al
 81ecad0:	84 c0                	test   %al,%al
 81ecad2:	74 36                	je     81ecb0a <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1a46>
 81ecad4:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ecadb:	0f b7 d0             	movzwl %ax,%edx
 81ecade:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81ecae5:	0f b7 c0             	movzwl %ax,%eax
 81ecae8:	8d 8d 25 f5 ff ff    	lea    -0xadb(%ebp),%ecx
 81ecaee:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81ecaf2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ecaf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ecafa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecafd:	89 04 24             	mov    %eax,(%esp)
 81ecb00:	e8 b3 40 f4 ff       	call   8130bb8 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE>
 81ecb05:	e9 cc 01 00 00       	jmp    81eccd6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c12>
 81ecb0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecb0d:	89 04 24             	mov    %eax,(%esp)
 81ecb10:	e8 77 d8 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ecb15:	83 f8 08             	cmp    $0x8,%eax
 81ecb18:	0f 94 c0             	sete   %al
 81ecb1b:	84 c0                	test   %al,%al
 81ecb1d:	0f 84 b3 01 00 00    	je     81eccd6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c12>
 81ecb23:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecb26:	89 04 24             	mov    %eax,(%esp)
 81ecb29:	e8 56 33 04 00       	call   822fe84 <_ZN5CUser15GetWarRoomIndexEv>
 81ecb2e:	0f bf d8             	movswl %ax,%ebx
 81ecb31:	e8 58 f6 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ecb36:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ecb3a:	89 04 24             	mov    %eax,(%esp)
 81ecb3d:	e8 8e 5a 0b 00       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 81ecb42:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ecb45:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ecb49:	75 29                	jne    81ecb74 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1ab0>
 81ecb4b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ecb52:	00 
 81ecb53:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ecb5a:	00 
 81ecb5b:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81ecb62:	08 
 81ecb63:	c7 04 24 d0 6e 00 00 	movl   $0x6ed0,(%esp)
 81ecb6a:	e8 68 3d 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ecb6f:	e9 67 01 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81ecb74:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ecb7b:	66 83 f8 ff          	cmp    $0xffff,%ax
 81ecb7f:	75 09                	jne    81ecb8a <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1ac6>
 81ecb81:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ecb88:	eb 4d                	jmp    81ecbd7 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1b13>
 81ecb8a:	0f b7 85 34 f5 ff ff 	movzwl -0xacc(%ebp),%eax
 81ecb91:	0f b7 d8             	movzwl %ax,%ebx
 81ecb94:	e8 0e d8 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ecb99:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ecb9d:	89 04 24             	mov    %eax,(%esp)
 81ecba0:	e8 f7 7f 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81ecba5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ecba8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ecbac:	75 29                	jne    81ecbd7 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1b13>
 81ecbae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ecbb5:	00 
 81ecbb6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ecbbd:	00 
 81ecbbe:	c7 44 24 04 40 06 bd 	movl   $0x8bd0640,0x4(%esp)
 81ecbc5:	08 
 81ecbc6:	c7 04 24 db 6e 00 00 	movl   $0x6edb,(%esp)
 81ecbcd:	e8 05 3d 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ecbd2:	e9 04 01 00 00       	jmp    81eccdb <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c17>
 81ecbd7:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81ecbde:	0f b7 c0             	movzwl %ax,%eax
 81ecbe1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ecbe4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ecbe8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ecbec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecbef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ecbf3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ecbf6:	89 04 24             	mov    %eax,(%esp)
 81ecbf9:	e8 00 16 4d 00       	call   86be1fe <_ZN7WarRoom17HandleMonsterKillEP5CUseriS1_>
 81ecbfe:	83 f0 01             	xor    $0x1,%eax
 81ecc01:	84 c0                	test   %al,%al
 81ecc03:	0f 84 cd 00 00 00    	je     81eccd6 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c12>
 81ecc09:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81ecc0f:	89 04 24             	mov    %eax,(%esp)
 81ecc12:	e8 35 11 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ecc17:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 81ecc1e:	00 
 81ecc1f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ecc26:	00 
 81ecc27:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81ecc2d:	89 04 24             	mov    %eax,(%esp)
 81ecc30:	e8 c7 ec ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ecc35:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ecc3c:	00 
 81ecc3d:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81ecc43:	89 04 24             	mov    %eax,(%esp)
 81ecc46:	e8 d5 ec ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ecc4b:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81ecc52:	00 
 81ecc53:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81ecc59:	89 04 24             	mov    %eax,(%esp)
 81ecc5c:	e8 bf ec ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ecc61:	0f b7 85 32 f5 ff ff 	movzwl -0xace(%ebp),%eax
 81ecc68:	0f b7 c0             	movzwl %ax,%eax
 81ecc6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ecc6f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81ecc75:	89 04 24             	mov    %eax,(%esp)
 81ecc78:	e8 27 d2 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ecc7d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ecc84:	00 
 81ecc85:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81ecc8b:	89 04 24             	mov    %eax,(%esp)
 81ecc8e:	e8 c5 ec ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ecc93:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81ecc99:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ecc9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecca0:	89 04 24             	mov    %eax,(%esp)
 81ecca3:	e8 12 b9 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ecca8:	eb 1e                	jmp    81eccc8 <_ZN17DisPatcher_DieMob12dispatch_sigEP5CUserR9PacketBuf+0x1c04>
 81eccaa:	89 d3                	mov    %edx,%ebx
 81eccac:	89 c6                	mov    %eax,%esi
 81eccae:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81eccb4:	89 04 24             	mov    %eax,(%esp)
 81eccb7:	e8 c4 11 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81eccbc:	89 f0                	mov    %esi,%eax
 81eccbe:	89 da                	mov    %ebx,%edx
 81eccc0:	89 04 24             	mov    %eax,(%esp)
 81eccc3:	e8 88 6a 8f 00       	call   8ae3750 <_Unwind_Resume>
 81eccc8:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81eccce:	89 04 24             	mov    %eax,(%esp)
 81eccd1:	e8 aa 11 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81eccd6:	b8 00 00 00 00       	mov    $0x0,%eax
 81eccdb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81eccde:	83 c4 00             	add    $0x0,%esp
 81ecce1:	5b                   	pop    %ebx
 81ecce2:	5e                   	pop    %esi
 81ecce3:	5d                   	pop    %ebp
 81ecce4:	c3                   	ret
 81ecce5:	90                   	nop

```

```c
// DisPatcher_DieMob::dispatch_sig @ 0x81eb0c4

/* DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_DieMob::dispatch_sig(DisPatcher_DieMob *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  Secu_HackLogCheck *this_00;
  CHackAnalyzer *pCVar8;
  GameWorld *pGVar9;
  MSG_MONSTER_DIE local_adf [10];
  undefined1 auStack_ad5 [3];
  ushort local_ad2;
  ushort local_ad0;
  int iStack_ace;
  int iStack_aca;
  byte local_ac6 [2561];
  uint local_c5;
  uint local_c1;
  uchar uStack_bd;
  uchar uStack_bc;
  ushort local_bb;
  ushort local_b9;
  char cStack_b7;
  short sStack_b6;
  short sStack_b4;
  int iStack_b2;
  int iStack_ae;
  short sStack_aa;
  short sStack_a8;
  short sStack_a6;
  short sStack_a4;
  short sStack_a2;
  PacketGuard local_a0 [12];
  undefined4 local_94;
  uint local_90;
  PacketGuard local_8c [12];
  _Rb_tree_iterator<std::pair<int_const,int>> local_80 [4];
  ushort local_7c;
  uchar local_7a;
  uchar local_79;
  int local_78;
  uint local_74;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_70 [4];
  pair local_6c [8];
  pair<int_const,int> local_64 [8];
  ushort local_5c [4];
  undefined4 local_54;
  cMyTrace local_50 [16];
  int local_40;
  CParty *local_3c;
  CParty *local_38;
  CUser *local_34;
  uint local_30;
  CDeathTower *local_2c;
  CUser *local_28;
  uint local_24;
  int local_20;
  CUser *local_1c;
  uint local_18;
  WarRoom *local_14;
  CUser *local_10;
  
  local_78 = 0;
  cVar4 = PacketBuf::get_short(param_2,&local_ad2);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d09,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_short(param_2,&local_ad0);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0a,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_int(param_2,&iStack_ace);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0c,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_int(param_2,&iStack_aca);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0d,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_int(param_2,&local_c5);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0e,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_int(param_2,&local_c1);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d0f,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_byte(param_2,local_ac6);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d11,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  for (local_40 = 0; local_40 < (int)(uint)local_ac6[0]; local_40 = local_40 + 1) {
    cVar4 = PacketBuf::get_short(param_2,(ushort *)(auStack_ad5 + (local_40 + 8) * 2));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x6d16,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
    cVar4 = PacketBuf::get_short(param_2,(ushort *)(auStack_ad5 + (local_40 + 0x108) * 2));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x6d17,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
    cVar4 = PacketBuf::get_int(param_2,(uint *)(auStack_ad5 + (local_40 + 0x104) * 4));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x6d18,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
    cVar4 = PacketBuf::get_short(param_2,(ushort *)(auStack_ad5 + (local_40 + 0x408) * 2));
    if (cVar4 != '\x01') {
      uVar5 = LineFunc(0x6d19,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
  }
  cVar4 = PacketBuf::get_short(param_2,&local_bb);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d25,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_short(param_2,&local_b9);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d26,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_byte(param_2,&uStack_bd);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d28,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  cVar4 = PacketBuf::get_byte(param_2,&uStack_bc);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d2b,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  local_79 = '\0';
  cVar4 = PacketBuf::get_byte(param_2,&local_79);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d2f,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  local_7a = '\0';
  cVar4 = PacketBuf::get_byte(param_2,&local_7a);
  if (cVar4 != '\x01') {
    uVar5 = LineFunc(0x6d32,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar5;
  }
  if ((local_7a == '\0') || (iVar6 = CUser::get_state(param_1), iVar6 != 5)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUser::GetPartyIndex(param_1);
    iVar6 = G_CGameManager();
    local_3c = (CParty *)CGameManager::GetParty(iVar6);
    if (local_3c == (CParty *)0x0) {
      uVar5 = LineFunc(0x6d38,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
      return uVar5;
    }
    CParty::setMonsterMoveHack(local_3c);
  }
  cVar4 = PacketBuf::get_short(param_2,&local_7c);
  if (cVar4 == '\x01') {
    cVar4 = PacketBuf::get_byte(param_2,&cStack_b7);
    if (cVar4 == '\x01') {
      cVar4 = PacketBuf::get_int(param_2,&iStack_b2);
      if (cVar4 == '\x01') {
        cVar4 = PacketBuf::get_int(param_2,&iStack_ae);
        if (cVar4 == '\x01') {
          cVar4 = PacketBuf::get_short(param_2,&sStack_b6);
          if (cVar4 == '\x01') {
            cVar4 = PacketBuf::get_short(param_2,&sStack_b4);
            if (cVar4 == '\x01') {
              cVar4 = PacketBuf::get_short(param_2,&sStack_aa);
              if (cVar4 == '\x01') {
                cVar4 = PacketBuf::get_short(param_2,&sStack_a8);
                if (cVar4 == '\x01') {
                  cVar4 = PacketBuf::get_short(param_2,&sStack_a6);
                  if (cVar4 == '\x01') {
                    cVar4 = PacketBuf::get_short(param_2,&sStack_a4);
                    if (cVar4 == '\x01') {
                      cVar4 = PacketBuf::get_short(param_2,&sStack_a2);
                      if (cVar4 == '\x01') {
                        iVar6 = CUser::get_state(param_1);
                        if (iVar6 == 5) {
                          CUser::GetPartyIndex(param_1);
                          iVar6 = G_CGameManager();
                          local_38 = (CParty *)CGameManager::GetParty(iVar6);
                          if (local_38 == (CParty *)0x0) {
                            uVar5 = LineFunc(0x6d54,
                                             "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                             ,0,0);
                            return uVar5;
                          }
                          uVar7 = std::
                                  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  ::size((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                          *)(local_38 + 0x1844));
                          if (uVar7 < 200) {
                            local_74 = (uint)local_ad2;
                            std::
                            map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                            find((int *)local_80);
                            std::
                            map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                            end(local_70);
                            cVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                                              (local_80,(_Rb_tree_iterator *)local_70);
                            if (cVar4 == '\0') {
                              local_54 = 1;
                              std::make_pair<unsigned_short&,int>(local_5c,(int *)&local_ad2);
                              std::pair<int_const,int>::pair<unsigned_short,int>
                                        (local_64,(pair *)local_5c);
                              std::
                              map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                              insert(local_6c);
                            }
                            else {
                              iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                                (local_80);
                              *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
                            }
                          }
                          if (local_79 == '\x01') {
                            CParty::DestroyPassiveObject(local_38,(uint)local_ad2);
                            return 0;
                          }
                          cVar4 = CParty::kill_monster
                                            (local_38,param_1,(uint)local_ad2,local_ad0,local_adf,
                                             &local_78);
                          if (cVar4 == '\x01') {
                            this_00 = (Secu_HackLogCheck *)CUser::GetHackCheck(param_1);
                            Secu_HackLogCheck::DieMob(this_00,local_adf);
                            uVar3 = local_b9;
                            uVar1 = local_bb;
                            if (local_ad0 == 0xffff) {
                              *(int *)(param_1 + 0x8e480) = *(int *)(param_1 + 0x8e480) + 1;
                              if (4 < *(uint *)(param_1 + 0x8e480)) {
                                *(undefined4 *)(param_1 + 0x8e480) = 0;
                                if (*(int *)(local_38 + 0xcac) == 0) {
                                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                  WongWork::CHackAnalyzer::addServerHackCnt
                                            (pCVar8,param_1,0xcd,1,0,0);
                                }
                                else {
                                  iVar6 = CDungeon::get_index(*(CDungeon **)(local_38 + 0xcac));
                                  if (iVar6 == 0x2afe) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0xcd,1,2,0);
                                  }
                                  else {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0xcd,1,0,0);
                                  }
                                }
                                cVar4 = CParty::checkBossRoom(local_38);
                                if (cVar4 != '\x01') {
                                  if (*(int *)(local_38 + 0xcac) == 0) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0xce,1,0,0);
                                  }
                                  else {
                                    iVar6 = CDungeon::get_index(*(CDungeon **)(local_38 + 0xcac));
                                    if (iVar6 == 0x2afe) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0xce,1,2,0);
                                    }
                                    else {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0xce,1,0,0);
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              uVar7 = CSystemTime::getCurTickCount
                                                ((CSystemTime *)GlobalData::s_systemTime_);
                              cVar4 = CUser::st_monstorkill::Check
                                                ((st_monstorkill *)(param_1 + 0x8e448),uVar7,uVar1,
                                                 uVar3,600,600,1000);
                              if (cVar4 != '\0') {
                                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0xd1,1,0,0)
                                ;
                              }
                              *(undefined4 *)(param_1 + 0x8e480) = 0;
                            }
                            for (local_40 = 0; local_40 < (int)(uint)local_ac6[0];
                                local_40 = local_40 + 1) {
                              if (*(short *)(auStack_ad5 + (local_40 + 8) * 2) == 0x111) {
                                local_34 = (CUser *)0x0;
                                uVar1 = *(ushort *)(auStack_ad5 + (local_40 + 0x108) * 2);
                                pGVar9 = (GameWorld *)G_GameWorld();
                                local_34 = (CUser *)GameWorld::find_from_world(pGVar9,uVar1);
                                if ((local_34 == (CUser *)0x0) ||
                                   (cVar4 = CParty::isMyMember(local_38,(uint)*(ushort *)
                                                                               (auStack_ad5 +
                                                                               (local_40 + 0x108) *
                                                                               2)), cVar4 == '\0'))
                                {
                                  bVar2 = false;
                                }
                                else {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  local_90 = 0;
                                  local_94 = 0x6b;
                                  CHackLog_OverDamage::GetDungeonLimitDamageAndHackType
                                            (local_34,&local_90,(ENUM_HACKTYPE *)&local_94);
                                  if (0x5dc < local_c1) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0x6f,1,0,0);
                                    uVar7 = local_c1;
                                    cMyTrace::cMyTrace(local_50,
                                                  "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0x6ddb,0);
                                    cMyTrace::operator()
                                              (local_50,
                                               "Position : PacketDispatcher.cpp ZeroHit or 1500up Hit    Hit Count : %d  :::::::::::: ENUM_HACKTYPE_KILL_MONSTER_ZERO_HIT"
                                               ,uVar7);
                                    local_c1 = 1;
                                  }
                                  if (local_c1 == 1) {
                                    iVar6 = CUser::GetParty(local_34);
                                    iVar6 = CDungeon::get_index(*(CDungeon **)(iVar6 + 0xcac));
                                    if (iVar6 != 0x2afe) goto LAB_081ec0bc;
                                    bVar2 = true;
                                  }
                                  else {
LAB_081ec0bc:
                                    bVar2 = false;
                                  }
                                  uVar7 = local_c5;
                                  if (bVar2) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_34);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,local_34,0x7f,1,uVar7,0);
                                  }
                                  if (local_c5 == 0) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0x6d,1,0,0);
                                    local_c5 = 1;
                                  }
                                  if (*(short *)(auStack_ad5 + (local_40 + 0x408) * 2) == 0) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,param_1,0x6e,1,0,0);
                                    *(undefined2 *)(auStack_ad5 + (local_40 + 0x408) * 2) = 1;
                                  }
                                  local_30 = *(uint *)(auStack_ad5 + (local_40 + 0x104) * 4) /
                                             (uint)*(ushort *)(auStack_ad5 + (local_40 + 0x408) * 2)
                                  ;
                                  if ((local_90 <
                                       *(uint *)(auStack_ad5 + (local_40 + 0x104) * 4) /
                                       (uint)*(ushort *)(auStack_ad5 + (local_40 + 0x408) * 2)) &&
                                     ((*(int *)(local_38 + 0xcac) == 0 ||
                                      (iVar6 = CDungeon::get_index(*(CDungeon **)(local_38 + 0xcac))
                                      , iVar6 != 0x2afe)))) {
                                    bVar2 = true;
                                  }
                                  else {
                                    bVar2 = false;
                                  }
                                  uVar5 = local_94;
                                  if (bVar2) {
                                    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_34);
                                    WongWork::CHackAnalyzer::addServerHackCnt
                                              (pCVar8,local_34,uVar5,1,0,0);
                                    uVar7 = CHackLog_OverDamage::GetDungeonLimitMaxDamage();
                                    if (uVar7 < local_30) {
                                      uVar5 = CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage();
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_34);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,local_34,uVar5,1,0,0);
                                    }
                                  }
                                }
                              }
                            }
                            if ((local_c1 % 10 == 0) && (local_c5 % 10 == 0)) {
                              pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                              WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0xca,1,0,0);
                            }
                            CUser::getHackAnalyzer(param_1);
                            WongWork::CHackAnalyzer::ValidateFixMobDiePos
                                      (param_1,(ushort)local_78,local_bb,local_b9);
                          }
                          else {
                            PacketGuard::PacketGuard(local_8c);
                    /* try { // try from 081ebbaa to 081ebc21 has its CatchHandler @ 081ebc24 */
                            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_8c,1,0x2a);
                            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_8c,0);
                            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_8c,5);
                            InterfacePacketBuf::put_short
                                      ((InterfacePacketBuf *)local_8c,(uint)local_ad2);
                            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_8c,true);
                            CUser::Send(param_1,local_8c);
                            PacketGuard::~PacketGuard(local_8c);
                          }
                        }
                        else {
                          iVar6 = CUser::get_state(param_1);
                          if (iVar6 == 10) {
                            local_2c = (CDeathTower *)CUser::getDeathTower(param_1);
                            uVar3 = local_b9;
                            uVar1 = local_bb;
                            if (local_2c != (CDeathTower *)0x0) {
                              if (local_ad0 != 0xffff) {
                                uVar7 = CSystemTime::getCurTickCount
                                                  ((CSystemTime *)GlobalData::s_systemTime_);
                                cVar4 = CUser::st_monstorkill::Check
                                                  ((st_monstorkill *)(param_1 + 0x8e448),uVar7,uVar1
                                                   ,uVar3,600,600,1000);
                                if (cVar4 != '\0') {
                                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                  WongWork::CHackAnalyzer::addServerHackCnt
                                            (pCVar8,param_1,0xd4,1,0,0);
                                }
                              }
                              for (local_40 = 0; local_40 < (int)(uint)local_ac6[0];
                                  local_40 = local_40 + 1) {
                                if (*(short *)(auStack_ad5 + (local_40 + 8) * 2) == 0x111) {
                                  local_28 = (CUser *)0x0;
                                  uVar1 = *(ushort *)(auStack_ad5 + (local_40 + 0x108) * 2);
                                  pGVar9 = (GameWorld *)G_GameWorld();
                                  local_28 = (CUser *)GameWorld::find_from_world(pGVar9,uVar1);
                                  if (local_28 != (CUser *)0x0) {
                                    if (*(short *)(auStack_ad5 + (local_40 + 0x408) * 2) == 0) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6e,1,0,0);
                                      *(undefined2 *)(auStack_ad5 + (local_40 + 0x408) * 2) = 1;
                                    }
                                    local_24 = *(uint *)(auStack_ad5 + (local_40 + 0x104) * 4) /
                                               (uint)*(ushort *)
                                                      (auStack_ad5 + (local_40 + 0x408) * 2);
                                    if (12999 < local_24) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6c,1,0,0);
                                    }
                                    uVar7 = CHackLog_OverDamage::GetDeathTowerLimitDamage();
                                    if (uVar7 < local_24) {
                                      uVar5 = CHackLog_OverDamage::GetDeathTowerOverDamageHackType()
                                      ;
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_28);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,local_28,uVar5,1,0,0);
                                    }
                                  }
                                }
                              }
                              if (local_ad0 == 0xffff) {
                                CUser::GetPartyIndex(param_1);
                                iVar6 = G_CGameManager();
                                local_20 = CGameManager::GetParty(iVar6);
                                if (local_20 == 0) {
                                  uVar5 = LineFunc(0x6e7f,
                                                  "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                  return uVar5;
                                }
                                *(int *)(param_1 + 0x8e480) = *(int *)(param_1 + 0x8e480) + 1;
                                if (4 < *(uint *)(param_1 + 0x8e480)) {
                                  *(undefined4 *)(param_1 + 0x8e480) = 0;
                                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                  WongWork::CHackAnalyzer::addServerHackCnt
                                            (pCVar8,param_1,0xcd,1,1,0);
                                  pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                  WongWork::CHackAnalyzer::addServerHackCnt
                                            (pCVar8,param_1,0xce,1,1,0);
                                }
                              }
                              else {
                                *(undefined4 *)(param_1 + 0x8e480) = 0;
                              }
                              WongWork::CDeathTower::handleKillMonster
                                        (local_2c,param_1,local_ad2,local_ad0,local_adf,&local_78);
                              CUser::getHackAnalyzer(param_1);
                              WongWork::CHackAnalyzer::ValidateFixMobDiePos
                                        (param_1,(ushort)local_78,local_bb,local_b9);
                            }
                          }
                          else {
                            iVar6 = CUser::get_state(param_1);
                            if (iVar6 == 0xc) {
                              if (local_ad0 == 0xffff) {
                                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0xcd,1,0,0)
                                ;
                                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_1,0xce,1,0,0)
                                ;
                              }
                              for (local_40 = 0; local_40 < (int)(uint)local_ac6[0];
                                  local_40 = local_40 + 1) {
                                if (*(short *)(auStack_ad5 + (local_40 + 8) * 2) == 0x111) {
                                  local_1c = (CUser *)0x0;
                                  uVar1 = *(ushort *)(auStack_ad5 + (local_40 + 0x108) * 2);
                                  pGVar9 = (GameWorld *)G_GameWorld();
                                  local_1c = (CUser *)GameWorld::find_from_world(pGVar9,uVar1);
                                  if (local_1c != (CUser *)0x0) {
                                    local_18 = *(uint *)(auStack_ad5 + (local_40 + 0x104) * 4) /
                                               (uint)*(ushort *)
                                                      (auStack_ad5 + (local_40 + 0x408) * 2);
                                    uVar7 = CHackLog_OverDamage::GetBossTowerLimitDamage();
                                    if (uVar7 < local_18) {
                                      uVar5 = CHackLog_OverDamage::GetBossTowerOverDamageHackType();
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,local_1c,uVar5,1,0,0);
                                      uVar7 = CHackLog_OverDamage::GetDungeonLimitMaxDamage();
                                      if (uVar7 < local_18) {
                                        uVar5 = CHackLog_OverDamage::GetHackTypeOverLimitMaxDamage()
                                        ;
                                        pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_1c);
                                        WongWork::CHackAnalyzer::addServerHackCnt
                                                  (pCVar8,local_1c,uVar5,1,0,0);
                                      }
                                    }
                                    if (0x5dc < local_c1) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6f,1,0,0);
                                      local_c1 = 1;
                                    }
                                    if (*(short *)(auStack_ad5 + (local_40 + 0x408) * 2) == 0) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6e,1,0,0);
                                      *(undefined2 *)(auStack_ad5 + (local_40 + 0x408) * 2) = 1;
                                    }
                                    if (local_c5 == 0) {
                                      pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                                      WongWork::CHackAnalyzer::addServerHackCnt
                                                (pCVar8,param_1,0x6d,1,0,0);
                                      local_c5 = 1;
                                    }
                                  }
                                }
                              }
                              Global::CBossTowerFunc::DieMob
                                        (param_1,local_ad2,local_ad0,local_adf,(int *)0x0);
                            }
                            else {
                              iVar6 = CUser::get_state(param_1);
                              if (iVar6 == 0xd) {
                                advancealtar::Manager::dieMob(param_1,local_ad2,local_ad0,local_adf)
                                ;
                              }
                              else {
                                iVar6 = CUser::get_state(param_1);
                                if (iVar6 == 8) {
                                  CUser::GetWarRoomIndex(param_1);
                                  iVar6 = G_CGameManager();
                                  local_14 = (WarRoom *)CGameManager::GetWarRoom(iVar6);
                                  if (local_14 == (WarRoom *)0x0) {
                                    uVar5 = LineFunc(0x6ed0,
                                                  "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                    return uVar5;
                                  }
                                  if (local_ad0 == 0xffff) {
                                    local_10 = (CUser *)0x0;
                                  }
                                  else {
                                    pGVar9 = (GameWorld *)G_GameWorld();
                                    local_10 = (CUser *)GameWorld::find_from_world(pGVar9,local_ad0)
                                    ;
                                    if (local_10 == (CUser *)0x0) {
                                      uVar5 = LineFunc(0x6edb,
                                                  "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                      return uVar5;
                                    }
                                  }
                                  cVar4 = WarRoom::HandleMonsterKill
                                                    (local_14,param_1,(uint)local_ad2,local_10);
                                  if (cVar4 != '\x01') {
                                    PacketGuard::PacketGuard(local_a0);
                    /* try { // try from 081ecc30 to 081ecca7 has its CatchHandler @ 081eccaa */
                                    InterfacePacketBuf::put_header
                                              ((InterfacePacketBuf *)local_a0,1,0x2a);
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,0);
                                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a0,5);
                                    InterfacePacketBuf::put_short
                                              ((InterfacePacketBuf *)local_a0,(uint)local_ad2);
                                    InterfacePacketBuf::finalize
                                              ((InterfacePacketBuf *)local_a0,true);
                                    CUser::Send(param_1,local_a0);
                                    PacketGuard::~PacketGuard(local_a0);
                                  }
                                }
                              }
                            }
                          }
                        }
                        uVar5 = 0;
                      }
                      else {
                        uVar5 = LineFunc(0x6d4a,
                                         "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar5 = LineFunc(0x6d49,
                                       "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar5 = LineFunc(0x6d48,
                                     "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar5 = LineFunc(0x6d47,
                                   "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar5 = LineFunc(0x6d46,
                                 "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0
                                 ,0);
              }
            }
            else {
              uVar5 = LineFunc(0x6d45,
                               "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0
                              );
            }
          }
          else {
            uVar5 = LineFunc(0x6d44,
                             "virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
          }
        }
        else {
          uVar5 = LineFunc(0x6d43,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",
                           0,0);
        }
      }
      else {
        uVar5 = LineFunc(0x6d42,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar5 = LineFunc(0x6d41,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar5 = LineFunc(0x6d3e,"virtual int DisPatcher_DieMob::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  return uVar5;
}

```

