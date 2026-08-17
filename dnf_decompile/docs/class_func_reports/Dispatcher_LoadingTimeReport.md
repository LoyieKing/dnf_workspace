# Dispatcher_LoadingTimeReport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821efec Dispatcher_LoadingTimeReport::dispatch_sig  [0x0821efec-0x821f611] ===
 821efec:	55                   	push   %ebp
 821efed:	89 e5                	mov    %esp,%ebp
 821efef:	53                   	push   %ebx
 821eff0:	81 ec 34 08 00 00    	sub    $0x834,%esp
 821eff6:	8d 85 e0 f7 ff ff    	lea    -0x820(%ebp),%eax
 821effc:	89 04 24             	mov    %eax,(%esp)
 821efff:	e8 3c d0 00 00       	call   822c040 <_ZN37Packet_Loading_Time_Report_StatisticsC1Ev>
 821f004:	66 c7 45 ea 00 00    	movw   $0x0,-0x16(%ebp)
 821f00a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 821f011:	e9 a7 05 00 00       	jmp    821f5bd <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x5d1>
 821f016:	8d 45 ea             	lea    -0x16(%ebp),%eax
 821f019:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f01d:	8b 45 10             	mov    0x10(%ebp),%eax
 821f020:	89 04 24             	mov    %eax,(%esp)
 821f023:	e8 88 e0 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821f028:	83 f0 01             	xor    $0x1,%eax
 821f02b:	84 c0                	test   %al,%al
 821f02d:	74 29                	je     821f058 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x6c>
 821f02f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f036:	00 
 821f037:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f03e:	00 
 821f03f:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f046:	08 
 821f047:	c7 04 24 fe d7 00 00 	movl   $0xd7fe,(%esp)
 821f04e:	e8 84 18 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f053:	e9 b0 05 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f058:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 821f05c:	66 83 f8 08          	cmp    $0x8,%ax
 821f060:	76 29                	jbe    821f08b <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x9f>
 821f062:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f069:	00 
 821f06a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f071:	00 
 821f072:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f079:	08 
 821f07a:	c7 04 24 00 d8 00 00 	movl   $0xd800,(%esp)
 821f081:	e8 51 18 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f086:	e9 7d 05 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f08b:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 821f08f:	66 83 f8 06          	cmp    $0x6,%ax
 821f093:	77 54                	ja     821f0e9 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0xfd>
 821f095:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 821f099:	0f b7 d0             	movzwl %ax,%edx
 821f09c:	8d 85 e0 f7 ff ff    	lea    -0x820(%ebp),%eax
 821f0a2:	c1 e2 02             	shl    $0x2,%edx
 821f0a5:	01 d0                	add    %edx,%eax
 821f0a7:	83 c0 0a             	add    $0xa,%eax
 821f0aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f0ae:	8b 45 10             	mov    0x10(%ebp),%eax
 821f0b1:	89 04 24             	mov    %eax,(%esp)
 821f0b4:	e8 87 e1 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 821f0b9:	83 f0 01             	xor    $0x1,%eax
 821f0bc:	84 c0                	test   %al,%al
 821f0be:	74 29                	je     821f0e9 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0xfd>
 821f0c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f0c7:	00 
 821f0c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f0cf:	00 
 821f0d0:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f0d7:	08 
 821f0d8:	c7 04 24 06 d8 00 00 	movl   $0xd806,(%esp)
 821f0df:	e8 f3 17 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f0e4:	e9 1f 05 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f0e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f0ec:	89 04 24             	mov    %eax,(%esp)
 821f0ef:	e8 7a b2 eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 821f0f4:	89 85 0e f8 ff ff    	mov    %eax,-0x7f2(%ebp)
 821f0fa:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 821f0fe:	66 83 f8 07          	cmp    $0x7,%ax
 821f102:	0f 85 73 02 00 00    	jne    821f37b <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x38f>
 821f108:	66 c7 45 e8 00 00    	movw   $0x0,-0x18(%ebp)
 821f10e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821f111:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f115:	8b 45 10             	mov    0x10(%ebp),%eax
 821f118:	89 04 24             	mov    %eax,(%esp)
 821f11b:	e8 a0 de 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821f120:	83 f0 01             	xor    $0x1,%eax
 821f123:	84 c0                	test   %al,%al
 821f125:	74 29                	je     821f150 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x164>
 821f127:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f12e:	00 
 821f12f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f136:	00 
 821f137:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f13e:	08 
 821f13f:	c7 04 24 0c d8 00 00 	movl   $0xd80c,(%esp)
 821f146:	e8 8c 17 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f14b:	e9 b8 04 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f150:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 821f154:	66 83 f8 63          	cmp    $0x63,%ax
 821f158:	7e 29                	jle    821f183 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x197>
 821f15a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f161:	00 
 821f162:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f169:	00 
 821f16a:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f171:	08 
 821f172:	c7 04 24 0d d8 00 00 	movl   $0xd80d,(%esp)
 821f179:	e8 59 17 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f17e:	e9 85 04 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f183:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 821f187:	66 89 85 12 f8 ff ff 	mov    %ax,-0x7ee(%ebp)
 821f18e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 821f195:	e9 bc 01 00 00       	jmp    821f356 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x36a>
 821f19a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821f19d:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f1a3:	89 d0                	mov    %edx,%eax
 821f1a5:	c1 e0 03             	shl    $0x3,%eax
 821f1a8:	01 d0                	add    %edx,%eax
 821f1aa:	83 c0 30             	add    $0x30,%eax
 821f1ad:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f1b0:	83 c0 04             	add    $0x4,%eax
 821f1b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f1b7:	8b 45 10             	mov    0x10(%ebp),%eax
 821f1ba:	89 04 24             	mov    %eax,(%esp)
 821f1bd:	e8 ee de 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821f1c2:	83 f0 01             	xor    $0x1,%eax
 821f1c5:	84 c0                	test   %al,%al
 821f1c7:	74 29                	je     821f1f2 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x206>
 821f1c9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f1d0:	00 
 821f1d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f1d8:	00 
 821f1d9:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f1e0:	08 
 821f1e1:	c7 04 24 11 d8 00 00 	movl   $0xd811,(%esp)
 821f1e8:	e8 ea 16 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f1ed:	e9 16 04 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f1f2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821f1f5:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f1fb:	89 d0                	mov    %edx,%eax
 821f1fd:	c1 e0 03             	shl    $0x3,%eax
 821f200:	01 d0                	add    %edx,%eax
 821f202:	83 c0 30             	add    $0x30,%eax
 821f205:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f208:	83 c0 06             	add    $0x6,%eax
 821f20b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f20f:	8b 45 10             	mov    0x10(%ebp),%eax
 821f212:	89 04 24             	mov    %eax,(%esp)
 821f215:	e8 56 dd 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821f21a:	83 f0 01             	xor    $0x1,%eax
 821f21d:	84 c0                	test   %al,%al
 821f21f:	74 29                	je     821f24a <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x25e>
 821f221:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f228:	00 
 821f229:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f230:	00 
 821f231:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f238:	08 
 821f239:	c7 04 24 12 d8 00 00 	movl   $0xd812,(%esp)
 821f240:	e8 92 16 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f245:	e9 be 03 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f24a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821f24d:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f253:	89 d0                	mov    %edx,%eax
 821f255:	c1 e0 03             	shl    $0x3,%eax
 821f258:	01 d0                	add    %edx,%eax
 821f25a:	83 c0 30             	add    $0x30,%eax
 821f25d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f260:	83 c0 07             	add    $0x7,%eax
 821f263:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f267:	8b 45 10             	mov    0x10(%ebp),%eax
 821f26a:	89 04 24             	mov    %eax,(%esp)
 821f26d:	e8 3e de 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821f272:	83 f0 01             	xor    $0x1,%eax
 821f275:	84 c0                	test   %al,%al
 821f277:	74 29                	je     821f2a2 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x2b6>
 821f279:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f280:	00 
 821f281:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f288:	00 
 821f289:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f290:	08 
 821f291:	c7 04 24 13 d8 00 00 	movl   $0xd813,(%esp)
 821f298:	e8 3a 16 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f29d:	e9 66 03 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f2a2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821f2a5:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f2ab:	89 d0                	mov    %edx,%eax
 821f2ad:	c1 e0 03             	shl    $0x3,%eax
 821f2b0:	01 d0                	add    %edx,%eax
 821f2b2:	83 c0 30             	add    $0x30,%eax
 821f2b5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f2b8:	83 c0 09             	add    $0x9,%eax
 821f2bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f2bf:	8b 45 10             	mov    0x10(%ebp),%eax
 821f2c2:	89 04 24             	mov    %eax,(%esp)
 821f2c5:	e8 e6 dd 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821f2ca:	83 f0 01             	xor    $0x1,%eax
 821f2cd:	84 c0                	test   %al,%al
 821f2cf:	74 29                	je     821f2fa <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x30e>
 821f2d1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f2d8:	00 
 821f2d9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f2e0:	00 
 821f2e1:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f2e8:	08 
 821f2e9:	c7 04 24 14 d8 00 00 	movl   $0xd814,(%esp)
 821f2f0:	e8 e2 15 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f2f5:	e9 0e 03 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f2fa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821f2fd:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f303:	89 d0                	mov    %edx,%eax
 821f305:	c1 e0 03             	shl    $0x3,%eax
 821f308:	01 d0                	add    %edx,%eax
 821f30a:	83 c0 30             	add    $0x30,%eax
 821f30d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f310:	83 c0 0b             	add    $0xb,%eax
 821f313:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f317:	8b 45 10             	mov    0x10(%ebp),%eax
 821f31a:	89 04 24             	mov    %eax,(%esp)
 821f31d:	e8 8e dd 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821f322:	83 f0 01             	xor    $0x1,%eax
 821f325:	84 c0                	test   %al,%al
 821f327:	74 29                	je     821f352 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x366>
 821f329:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f330:	00 
 821f331:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f338:	00 
 821f339:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f340:	08 
 821f341:	c7 04 24 15 d8 00 00 	movl   $0xd815,(%esp)
 821f348:	e8 8a 15 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f34d:	e9 b6 02 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f352:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 821f356:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 821f35a:	98                   	cwtl
 821f35b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 821f35e:	0f 9f c0             	setg   %al
 821f361:	84 c0                	test   %al,%al
 821f363:	0f 85 31 fe ff ff    	jne    821f19a <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 821f369:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 821f36d:	0f b7 c0             	movzwl %ax,%eax
 821f370:	c7 84 85 ea f7 ff ff 	movl   $0x0,-0x816(%ebp,%eax,4)
 821f377:	00 00 00 00 
 821f37b:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 821f37f:	66 83 f8 08          	cmp    $0x8,%ax
 821f383:	0f 85 30 02 00 00    	jne    821f5b9 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x5cd>
 821f389:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 821f38f:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 821f392:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f396:	8b 45 10             	mov    0x10(%ebp),%eax
 821f399:	89 04 24             	mov    %eax,(%esp)
 821f39c:	e8 1f dc 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821f3a1:	83 f0 01             	xor    $0x1,%eax
 821f3a4:	84 c0                	test   %al,%al
 821f3a6:	74 29                	je     821f3d1 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x3e5>
 821f3a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f3af:	00 
 821f3b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f3b7:	00 
 821f3b8:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f3bf:	08 
 821f3c0:	c7 04 24 1c d8 00 00 	movl   $0xd81c,(%esp)
 821f3c7:	e8 0b 15 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f3cc:	e9 37 02 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f3d1:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 821f3d5:	66 83 f8 63          	cmp    $0x63,%ax
 821f3d9:	7e 29                	jle    821f404 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x418>
 821f3db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f3e2:	00 
 821f3e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f3ea:	00 
 821f3eb:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f3f2:	08 
 821f3f3:	c7 04 24 1d d8 00 00 	movl   $0xd81d,(%esp)
 821f3fa:	e8 d8 14 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f3ff:	e9 04 02 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f404:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 821f408:	66 89 85 98 fb ff ff 	mov    %ax,-0x468(%ebp)
 821f40f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 821f416:	e9 79 01 00 00       	jmp    821f594 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x5a8>
 821f41b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 821f41e:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f424:	89 d0                	mov    %edx,%eax
 821f426:	c1 e0 02             	shl    $0x2,%eax
 821f429:	01 d0                	add    %edx,%eax
 821f42b:	01 c0                	add    %eax,%eax
 821f42d:	01 d0                	add    %edx,%eax
 821f42f:	05 b0 03 00 00       	add    $0x3b0,%eax
 821f434:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f437:	83 c0 0a             	add    $0xa,%eax
 821f43a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f43e:	8b 45 10             	mov    0x10(%ebp),%eax
 821f441:	89 04 24             	mov    %eax,(%esp)
 821f444:	e8 67 dc 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821f449:	83 f0 01             	xor    $0x1,%eax
 821f44c:	84 c0                	test   %al,%al
 821f44e:	74 29                	je     821f479 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x48d>
 821f450:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f457:	00 
 821f458:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f45f:	00 
 821f460:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f467:	08 
 821f468:	c7 04 24 21 d8 00 00 	movl   $0xd821,(%esp)
 821f46f:	e8 63 14 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f474:	e9 8f 01 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f479:	8b 55 f4             	mov    -0xc(%ebp),%edx
 821f47c:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f482:	89 d0                	mov    %edx,%eax
 821f484:	c1 e0 02             	shl    $0x2,%eax
 821f487:	01 d0                	add    %edx,%eax
 821f489:	01 c0                	add    %eax,%eax
 821f48b:	01 d0                	add    %edx,%eax
 821f48d:	05 b0 03 00 00       	add    $0x3b0,%eax
 821f492:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f495:	83 c0 0c             	add    $0xc,%eax
 821f498:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f49c:	8b 45 10             	mov    0x10(%ebp),%eax
 821f49f:	89 04 24             	mov    %eax,(%esp)
 821f4a2:	e8 c9 da 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821f4a7:	83 f0 01             	xor    $0x1,%eax
 821f4aa:	84 c0                	test   %al,%al
 821f4ac:	74 29                	je     821f4d7 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x4eb>
 821f4ae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f4b5:	00 
 821f4b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f4bd:	00 
 821f4be:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f4c5:	08 
 821f4c6:	c7 04 24 22 d8 00 00 	movl   $0xd822,(%esp)
 821f4cd:	e8 05 14 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f4d2:	e9 31 01 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f4d7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 821f4da:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f4e0:	89 d0                	mov    %edx,%eax
 821f4e2:	c1 e0 02             	shl    $0x2,%eax
 821f4e5:	01 d0                	add    %edx,%eax
 821f4e7:	01 c0                	add    %eax,%eax
 821f4e9:	01 d0                	add    %edx,%eax
 821f4eb:	05 b0 03 00 00       	add    $0x3b0,%eax
 821f4f0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f4f3:	83 c0 0d             	add    $0xd,%eax
 821f4f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f4fa:	8b 45 10             	mov    0x10(%ebp),%eax
 821f4fd:	89 04 24             	mov    %eax,(%esp)
 821f500:	e8 3b dd 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 821f505:	83 f0 01             	xor    $0x1,%eax
 821f508:	84 c0                	test   %al,%al
 821f50a:	74 29                	je     821f535 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x549>
 821f50c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f513:	00 
 821f514:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f51b:	00 
 821f51c:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f523:	08 
 821f524:	c7 04 24 23 d8 00 00 	movl   $0xd823,(%esp)
 821f52b:	e8 a7 13 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f530:	e9 d3 00 00 00       	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f535:	8b 55 f4             	mov    -0xc(%ebp),%edx
 821f538:	8d 8d e0 f7 ff ff    	lea    -0x820(%ebp),%ecx
 821f53e:	89 d0                	mov    %edx,%eax
 821f540:	c1 e0 02             	shl    $0x2,%eax
 821f543:	01 d0                	add    %edx,%eax
 821f545:	01 c0                	add    %eax,%eax
 821f547:	01 d0                	add    %edx,%eax
 821f549:	05 b0 03 00 00       	add    $0x3b0,%eax
 821f54e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821f551:	83 c0 11             	add    $0x11,%eax
 821f554:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f558:	8b 45 10             	mov    0x10(%ebp),%eax
 821f55b:	89 04 24             	mov    %eax,(%esp)
 821f55e:	e8 dd dc 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 821f563:	83 f0 01             	xor    $0x1,%eax
 821f566:	84 c0                	test   %al,%al
 821f568:	74 26                	je     821f590 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x5a4>
 821f56a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821f571:	00 
 821f572:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821f579:	00 
 821f57a:	c7 44 24 04 40 d0 bc 	movl   $0x8bcd040,0x4(%esp)
 821f581:	08 
 821f582:	c7 04 24 24 d8 00 00 	movl   $0xd824,(%esp)
 821f589:	e8 49 13 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821f58e:	eb 78                	jmp    821f608 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x61c>
 821f590:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 821f594:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 821f598:	98                   	cwtl
 821f599:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 821f59c:	0f 9f c0             	setg   %al
 821f59f:	84 c0                	test   %al,%al
 821f5a1:	0f 85 74 fe ff ff    	jne    821f41b <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x42f>
 821f5a7:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 821f5ab:	0f b7 c0             	movzwl %ax,%eax
 821f5ae:	c7 84 85 ea f7 ff ff 	movl   $0x0,-0x816(%ebp,%eax,4)
 821f5b5:	00 00 00 00 
 821f5b9:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 821f5bd:	83 7d ec 08          	cmpl   $0x8,-0x14(%ebp)
 821f5c1:	0f 9e c0             	setle  %al
 821f5c4:	84 c0                	test   %al,%al
 821f5c6:	0f 85 4a fa ff ff    	jne    821f016 <_ZN28Dispatcher_LoadingTimeReport12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 821f5cc:	8d 9d e0 f7 ff ff    	lea    -0x820(%ebp),%ebx
 821f5d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 821f5d5:	89 04 24             	mov    %eax,(%esp)
 821f5d8:	e8 b3 c6 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821f5dd:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821f5e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 821f5e7:	89 14 24             	mov    %edx,(%esp)
 821f5ea:	e8 09 27 ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821f5ef:	c7 44 24 08 06 08 00 	movl   $0x806,0x8(%esp)
 821f5f6:	00 
 821f5f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821f5fb:	89 04 24             	mov    %eax,(%esp)
 821f5fe:	e8 41 2a 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821f603:	b8 00 00 00 00       	mov    $0x0,%eax
 821f608:	81 c4 34 08 00 00    	add    $0x834,%esp
 821f60e:	5b                   	pop    %ebx
 821f60f:	5d                   	pop    %ebp
 821f610:	c3                   	ret
 821f611:	90                   	nop

```

```c
// Dispatcher_LoadingTimeReport::dispatch_sig @ 0x821efec

/* Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_LoadingTimeReport::dispatch_sig
          (Dispatcher_LoadingTimeReport *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Loading_Time_Report_Statistics local_824 [10];
  uint auStack_81a [9];
  undefined4 local_7f6;
  short local_7f2;
  ushort uStack_7f0;
  uchar uStack_7ee;
  ushort auStack_7ed [448];
  short local_46c;
  ushort uStack_46a;
  uchar uStack_468;
  uint auStack_467 [274];
  short local_1e;
  short local_1c;
  ushort local_1a;
  int local_18;
  int local_14;
  int local_10;
  
  Packet_Loading_Time_Report_Statistics::Packet_Loading_Time_Report_Statistics(local_824);
  local_1a = 0;
  local_18 = 0;
  do {
    if (8 < local_18) {
      uVar2 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar2);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_824,0x806);
      return 0;
    }
    cVar1 = PacketBuf::get_short(param_2,&local_1a);
    if (cVar1 != '\x01') {
      uVar2 = LineFunc(0xd7fe,
                       "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      return uVar2;
    }
    if (8 < local_1a) {
      uVar2 = LineFunc(0xd800,
                       "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      return uVar2;
    }
    if ((local_1a < 7) &&
       (cVar1 = PacketBuf::get_int(param_2,auStack_81a + local_1a), cVar1 != '\x01')) {
      uVar2 = LineFunc(0xd806,
                       "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
      return uVar2;
    }
    local_7f6 = CUser::get_acc_id(param_1);
    if (local_1a == 7) {
      local_1c = 0;
      cVar1 = PacketBuf::get_short(param_2,&local_1c);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0xd80c,
                         "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      if (99 < local_1c) {
        uVar2 = LineFunc(0xd80d,
                         "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      local_7f2 = local_1c;
      for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)&uStack_7f0 + local_14 * 9));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd811,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_byte(param_2,(uchar *)((int)auStack_7ed + local_14 * 9 + -1));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd812,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)auStack_7ed + local_14 * 9));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd813,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)auStack_7ed + local_14 * 9 + 2));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd814,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)auStack_7ed + local_14 * 9 + 4));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd815,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
      }
      auStack_81a[local_1a] = 0;
    }
    if (local_1a == 8) {
      local_1e = 0;
      cVar1 = PacketBuf::get_short(param_2,&local_1e);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0xd81c,
                         "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      if (99 < local_1e) {
        uVar2 = LineFunc(0xd81d,
                         "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      local_46c = local_1e;
      for (local_10 = 0; local_10 < local_1e; local_10 = local_10 + 1) {
        cVar1 = PacketBuf::get_short(param_2,(ushort *)((int)&uStack_46a + local_10 * 0xb));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd821,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_byte(param_2,(uchar *)((int)auStack_467 + local_10 * 0xb + -1));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd822,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_467 + local_10 * 0xb));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd823,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_467 + local_10 * 0xb + 4));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xd824,
                           "virtual int Dispatcher_LoadingTimeReport::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
      }
      auStack_81a[local_1a] = 0;
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

