# Dispatcher_FrameLagStatistics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08217046 Dispatcher_FrameLagStatistics::dispatch_sig  [0x08217046-0x82177ad] ===
 8217046:	55                   	push   %ebp
 8217047:	89 e5                	mov    %esp,%ebp
 8217049:	53                   	push   %ebx
 821704a:	81 ec b4 01 00 00    	sub    $0x1b4,%esp
 8217050:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8217056:	89 04 24             	mov    %eax,(%esp)
 8217059:	e8 96 4c 01 00       	call   822bcf4 <_ZN30Packet_Frame_Lag_Statistic_AddC1Ev>
 821705e:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8217064:	83 c0 0a             	add    $0xa,%eax
 8217067:	89 44 24 04          	mov    %eax,0x4(%esp)
 821706b:	8b 45 10             	mov    0x10(%ebp),%eax
 821706e:	89 04 24             	mov    %eax,(%esp)
 8217071:	e8 7a 60 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8217076:	83 f0 01             	xor    $0x1,%eax
 8217079:	84 c0                	test   %al,%al
 821707b:	74 29                	je     82170a6 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x60>
 821707d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217084:	00 
 8217085:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821708c:	00 
 821708d:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217094:	08 
 8217095:	c7 04 24 fd c8 00 00 	movl   $0xc8fd,(%esp)
 821709c:	e8 36 98 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82170a1:	e9 fe 06 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 82170a6:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 82170ac:	83 c0 0e             	add    $0xe,%eax
 82170af:	89 44 24 04          	mov    %eax,0x4(%esp)
 82170b3:	8b 45 10             	mov    0x10(%ebp),%eax
 82170b6:	89 04 24             	mov    %eax,(%esp)
 82170b9:	e8 64 5e 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82170be:	83 f0 01             	xor    $0x1,%eax
 82170c1:	84 c0                	test   %al,%al
 82170c3:	74 29                	je     82170ee <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0xa8>
 82170c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82170cc:	00 
 82170cd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82170d4:	00 
 82170d5:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 82170dc:	08 
 82170dd:	c7 04 24 fe c8 00 00 	movl   $0xc8fe,(%esp)
 82170e4:	e8 ee 97 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82170e9:	e9 b6 06 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 82170ee:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 82170f4:	83 c0 0f             	add    $0xf,%eax
 82170f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82170fb:	8b 45 10             	mov    0x10(%ebp),%eax
 82170fe:	89 04 24             	mov    %eax,(%esp)
 8217101:	e8 1c 5e 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8217106:	83 f0 01             	xor    $0x1,%eax
 8217109:	84 c0                	test   %al,%al
 821710b:	74 29                	je     8217136 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 821710d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217114:	00 
 8217115:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821711c:	00 
 821711d:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217124:	08 
 8217125:	c7 04 24 ff c8 00 00 	movl   $0xc8ff,(%esp)
 821712c:	e8 a6 97 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217131:	e9 6e 06 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 8217136:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 821713c:	83 c0 12             	add    $0x12,%eax
 821713f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217143:	8b 45 10             	mov    0x10(%ebp),%eax
 8217146:	89 04 24             	mov    %eax,(%esp)
 8217149:	e8 62 5f 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821714e:	83 f0 01             	xor    $0x1,%eax
 8217151:	84 c0                	test   %al,%al
 8217153:	74 29                	je     821717e <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x138>
 8217155:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821715c:	00 
 821715d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217164:	00 
 8217165:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 821716c:	08 
 821716d:	c7 04 24 01 c9 00 00 	movl   $0xc901,(%esp)
 8217174:	e8 5e 97 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217179:	e9 26 06 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 821717e:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8217184:	83 c0 14             	add    $0x14,%eax
 8217187:	89 44 24 04          	mov    %eax,0x4(%esp)
 821718b:	8b 45 10             	mov    0x10(%ebp),%eax
 821718e:	89 04 24             	mov    %eax,(%esp)
 8217191:	e8 1a 5f 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8217196:	83 f0 01             	xor    $0x1,%eax
 8217199:	84 c0                	test   %al,%al
 821719b:	74 29                	je     82171c6 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x180>
 821719d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82171a4:	00 
 82171a5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82171ac:	00 
 82171ad:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 82171b4:	08 
 82171b5:	c7 04 24 02 c9 00 00 	movl   $0xc902,(%esp)
 82171bc:	e8 16 97 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82171c1:	e9 de 05 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 82171c6:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 82171cc:	83 c0 16             	add    $0x16,%eax
 82171cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82171d3:	8b 45 10             	mov    0x10(%ebp),%eax
 82171d6:	89 04 24             	mov    %eax,(%esp)
 82171d9:	e8 e2 5d 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82171de:	83 f0 01             	xor    $0x1,%eax
 82171e1:	84 c0                	test   %al,%al
 82171e3:	74 29                	je     821720e <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x1c8>
 82171e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82171ec:	00 
 82171ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82171f4:	00 
 82171f5:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 82171fc:	08 
 82171fd:	c7 04 24 03 c9 00 00 	movl   $0xc903,(%esp)
 8217204:	e8 ce 96 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217209:	e9 96 05 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 821720e:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8217214:	83 c0 18             	add    $0x18,%eax
 8217217:	89 44 24 04          	mov    %eax,0x4(%esp)
 821721b:	8b 45 10             	mov    0x10(%ebp),%eax
 821721e:	89 04 24             	mov    %eax,(%esp)
 8217221:	e8 9a 5d 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8217226:	83 f0 01             	xor    $0x1,%eax
 8217229:	84 c0                	test   %al,%al
 821722b:	74 29                	je     8217256 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x210>
 821722d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217234:	00 
 8217235:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821723c:	00 
 821723d:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217244:	08 
 8217245:	c7 04 24 05 c9 00 00 	movl   $0xc905,(%esp)
 821724c:	e8 86 96 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217251:	e9 4e 05 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 8217256:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 821725c:	83 c0 1a             	add    $0x1a,%eax
 821725f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217263:	8b 45 10             	mov    0x10(%ebp),%eax
 8217266:	89 04 24             	mov    %eax,(%esp)
 8217269:	e8 b4 5c 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 821726e:	83 f0 01             	xor    $0x1,%eax
 8217271:	84 c0                	test   %al,%al
 8217273:	74 29                	je     821729e <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x258>
 8217275:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821727c:	00 
 821727d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217284:	00 
 8217285:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 821728c:	08 
 821728d:	c7 04 24 06 c9 00 00 	movl   $0xc906,(%esp)
 8217294:	e8 3e 96 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217299:	e9 06 05 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 821729e:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 82172a4:	83 c0 1b             	add    $0x1b,%eax
 82172a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82172ab:	8b 45 10             	mov    0x10(%ebp),%eax
 82172ae:	89 04 24             	mov    %eax,(%esp)
 82172b1:	e8 3a 5e 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82172b6:	83 f0 01             	xor    $0x1,%eax
 82172b9:	84 c0                	test   %al,%al
 82172bb:	74 29                	je     82172e6 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x2a0>
 82172bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82172c4:	00 
 82172c5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82172cc:	00 
 82172cd:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 82172d4:	08 
 82172d5:	c7 04 24 07 c9 00 00 	movl   $0xc907,(%esp)
 82172dc:	e8 f6 95 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82172e1:	e9 be 04 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 82172e6:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 82172ec:	83 c0 1f             	add    $0x1f,%eax
 82172ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 82172f3:	8b 45 10             	mov    0x10(%ebp),%eax
 82172f6:	89 04 24             	mov    %eax,(%esp)
 82172f9:	e8 24 5c 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82172fe:	83 f0 01             	xor    $0x1,%eax
 8217301:	84 c0                	test   %al,%al
 8217303:	74 29                	je     821732e <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x2e8>
 8217305:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821730c:	00 
 821730d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217314:	00 
 8217315:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 821731c:	08 
 821731d:	c7 04 24 09 c9 00 00 	movl   $0xc909,(%esp)
 8217324:	e8 ae 95 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217329:	e9 76 04 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 821732e:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8217334:	83 c0 20             	add    $0x20,%eax
 8217337:	89 44 24 04          	mov    %eax,0x4(%esp)
 821733b:	8b 45 10             	mov    0x10(%ebp),%eax
 821733e:	89 04 24             	mov    %eax,(%esp)
 8217341:	e8 7a 5c 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8217346:	83 f0 01             	xor    $0x1,%eax
 8217349:	84 c0                	test   %al,%al
 821734b:	74 29                	je     8217376 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x330>
 821734d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217354:	00 
 8217355:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821735c:	00 
 821735d:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217364:	08 
 8217365:	c7 04 24 0a c9 00 00 	movl   $0xc90a,(%esp)
 821736c:	e8 66 95 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217371:	e9 2e 04 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 8217376:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 821737c:	83 c0 22             	add    $0x22,%eax
 821737f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217383:	8b 45 10             	mov    0x10(%ebp),%eax
 8217386:	89 04 24             	mov    %eax,(%esp)
 8217389:	e8 32 5c 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821738e:	83 f0 01             	xor    $0x1,%eax
 8217391:	84 c0                	test   %al,%al
 8217393:	74 29                	je     82173be <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x378>
 8217395:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821739c:	00 
 821739d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82173a4:	00 
 82173a5:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 82173ac:	08 
 82173ad:	c7 04 24 0b c9 00 00 	movl   $0xc90b,(%esp)
 82173b4:	e8 1e 95 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82173b9:	e9 e6 03 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 82173be:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82173c5:	e9 5f 02 00 00       	jmp    8217629 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x5e3>
 82173ca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82173cd:	8d 8d 65 fe ff ff    	lea    -0x19b(%ebp),%ecx
 82173d3:	c1 e0 03             	shl    $0x3,%eax
 82173d6:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 82173dd:	29 c2                	sub    %eax,%edx
 82173df:	8d 42 20             	lea    0x20(%edx),%eax
 82173e2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82173e5:	83 c0 04             	add    $0x4,%eax
 82173e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82173ec:	8b 45 10             	mov    0x10(%ebp),%eax
 82173ef:	89 04 24             	mov    %eax,(%esp)
 82173f2:	e8 c9 5b 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82173f7:	83 f0 01             	xor    $0x1,%eax
 82173fa:	84 c0                	test   %al,%al
 82173fc:	74 29                	je     8217427 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x3e1>
 82173fe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217405:	00 
 8217406:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821740d:	00 
 821740e:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217415:	08 
 8217416:	c7 04 24 14 c9 00 00 	movl   $0xc914,(%esp)
 821741d:	e8 b5 94 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217422:	e9 7d 03 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 8217427:	8b 45 ec             	mov    -0x14(%ebp),%eax
 821742a:	8d 8d 65 fe ff ff    	lea    -0x19b(%ebp),%ecx
 8217430:	c1 e0 03             	shl    $0x3,%eax
 8217433:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 821743a:	29 c2                	sub    %eax,%edx
 821743c:	8d 42 20             	lea    0x20(%edx),%eax
 821743f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8217442:	83 c0 06             	add    $0x6,%eax
 8217445:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217449:	8b 45 10             	mov    0x10(%ebp),%eax
 821744c:	89 04 24             	mov    %eax,(%esp)
 821744f:	e8 6c 5b 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8217454:	83 f0 01             	xor    $0x1,%eax
 8217457:	84 c0                	test   %al,%al
 8217459:	74 29                	je     8217484 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x43e>
 821745b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217462:	00 
 8217463:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821746a:	00 
 821746b:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217472:	08 
 8217473:	c7 04 24 15 c9 00 00 	movl   $0xc915,(%esp)
 821747a:	e8 58 94 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821747f:	e9 20 03 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 8217484:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8217487:	8d 8d 65 fe ff ff    	lea    -0x19b(%ebp),%ecx
 821748d:	c1 e0 03             	shl    $0x3,%eax
 8217490:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8217497:	29 c2                	sub    %eax,%edx
 8217499:	8d 42 20             	lea    0x20(%edx),%eax
 821749c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821749f:	83 c0 08             	add    $0x8,%eax
 82174a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82174a6:	8b 45 10             	mov    0x10(%ebp),%eax
 82174a9:	89 04 24             	mov    %eax,(%esp)
 82174ac:	e8 0f 5b 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82174b1:	83 f0 01             	xor    $0x1,%eax
 82174b4:	84 c0                	test   %al,%al
 82174b6:	74 29                	je     82174e1 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x49b>
 82174b8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82174bf:	00 
 82174c0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82174c7:	00 
 82174c8:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 82174cf:	08 
 82174d0:	c7 04 24 16 c9 00 00 	movl   $0xc916,(%esp)
 82174d7:	e8 fb 93 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82174dc:	e9 c3 02 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 82174e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82174e4:	8d 8d 65 fe ff ff    	lea    -0x19b(%ebp),%ecx
 82174ea:	c1 e0 03             	shl    $0x3,%eax
 82174ed:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 82174f4:	29 c2                	sub    %eax,%edx
 82174f6:	8d 42 20             	lea    0x20(%edx),%eax
 82174f9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82174fc:	83 c0 0a             	add    $0xa,%eax
 82174ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217503:	8b 45 10             	mov    0x10(%ebp),%eax
 8217506:	89 04 24             	mov    %eax,(%esp)
 8217509:	e8 b2 5a 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821750e:	83 f0 01             	xor    $0x1,%eax
 8217511:	84 c0                	test   %al,%al
 8217513:	74 29                	je     821753e <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x4f8>
 8217515:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821751c:	00 
 821751d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217524:	00 
 8217525:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 821752c:	08 
 821752d:	c7 04 24 17 c9 00 00 	movl   $0xc917,(%esp)
 8217534:	e8 9e 93 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217539:	e9 66 02 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 821753e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8217545:	e9 cc 00 00 00       	jmp    8217616 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x5d0>
 821754a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 821754d:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8217550:	8d 8d 65 fe ff ff    	lea    -0x19b(%ebp),%ecx
 8217556:	89 d0                	mov    %edx,%eax
 8217558:	c1 e0 03             	shl    $0x3,%eax
 821755b:	29 d0                	sub    %edx,%eax
 821755d:	01 d8                	add    %ebx,%eax
 821755f:	83 c0 04             	add    $0x4,%eax
 8217562:	c1 e0 03             	shl    $0x3,%eax
 8217565:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8217568:	83 c0 0c             	add    $0xc,%eax
 821756b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821756f:	8b 45 10             	mov    0x10(%ebp),%eax
 8217572:	89 04 24             	mov    %eax,(%esp)
 8217575:	e8 76 5b 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821757a:	83 f0 01             	xor    $0x1,%eax
 821757d:	84 c0                	test   %al,%al
 821757f:	74 29                	je     82175aa <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x564>
 8217581:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217588:	00 
 8217589:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217590:	00 
 8217591:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217598:	08 
 8217599:	c7 04 24 1f c9 00 00 	movl   $0xc91f,(%esp)
 82175a0:	e8 32 93 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82175a5:	e9 fa 01 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 82175aa:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82175ad:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 82175b0:	8d 8d 65 fe ff ff    	lea    -0x19b(%ebp),%ecx
 82175b6:	89 d0                	mov    %edx,%eax
 82175b8:	c1 e0 03             	shl    $0x3,%eax
 82175bb:	29 d0                	sub    %edx,%eax
 82175bd:	01 d8                	add    %ebx,%eax
 82175bf:	83 c0 04             	add    $0x4,%eax
 82175c2:	c1 e0 03             	shl    $0x3,%eax
 82175c5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82175c8:	83 c0 10             	add    $0x10,%eax
 82175cb:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 82175d2:	00 
 82175d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82175d7:	8b 45 10             	mov    0x10(%ebp),%eax
 82175da:	89 04 24             	mov    %eax,(%esp)
 82175dd:	e8 d0 5d 37 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 82175e2:	83 f0 01             	xor    $0x1,%eax
 82175e5:	84 c0                	test   %al,%al
 82175e7:	74 29                	je     8217612 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x5cc>
 82175e9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82175f0:	00 
 82175f1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82175f8:	00 
 82175f9:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217600:	08 
 8217601:	c7 04 24 20 c9 00 00 	movl   $0xc920,(%esp)
 8217608:	e8 ca 92 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821760d:	e9 92 01 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 8217612:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8217616:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 821761a:	0f 9e c0             	setle  %al
 821761d:	84 c0                	test   %al,%al
 821761f:	0f 85 25 ff ff ff    	jne    821754a <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x504>
 8217625:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8217629:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 821762d:	0f 9e c0             	setle  %al
 8217630:	84 c0                	test   %al,%al
 8217632:	0f 85 92 fd ff ff    	jne    82173ca <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x384>
 8217638:	8d 45 eb             	lea    -0x15(%ebp),%eax
 821763b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821763f:	8b 45 10             	mov    0x10(%ebp),%eax
 8217642:	89 04 24             	mov    %eax,(%esp)
 8217645:	e8 d8 58 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 821764a:	83 f0 01             	xor    $0x1,%eax
 821764d:	84 c0                	test   %al,%al
 821764f:	74 29                	je     821767a <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x634>
 8217651:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217658:	00 
 8217659:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217660:	00 
 8217661:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 8217668:	08 
 8217669:	c7 04 24 25 c9 00 00 	movl   $0xc925,(%esp)
 8217670:	e8 62 92 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217675:	e9 2a 01 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 821767a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8217681:	e9 d3 00 00 00       	jmp    8217759 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x713>
 8217686:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 821768a:	0f be c0             	movsbl %al,%eax
 821768d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8217690:	0f 8e a5 00 00 00    	jle    821773b <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x6f5>
 8217696:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8217699:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 821769f:	81 c2 70 01 00 00    	add    $0x170,%edx
 82176a5:	01 d0                	add    %edx,%eax
 82176a7:	83 c0 04             	add    $0x4,%eax
 82176aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82176ae:	8b 45 10             	mov    0x10(%ebp),%eax
 82176b1:	89 04 24             	mov    %eax,(%esp)
 82176b4:	e8 69 58 37 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82176b9:	83 f0 01             	xor    $0x1,%eax
 82176bc:	84 c0                	test   %al,%al
 82176be:	74 29                	je     82176e9 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x6a3>
 82176c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82176c7:	00 
 82176c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82176cf:	00 
 82176d0:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 82176d7:	08 
 82176d8:	c7 04 24 2a c9 00 00 	movl   $0xc92a,(%esp)
 82176df:	e8 f3 91 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82176e4:	e9 bb 00 00 00       	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 82176e9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82176ec:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 82176f2:	81 c2 b8 00 00 00    	add    $0xb8,%edx
 82176f8:	01 d2                	add    %edx,%edx
 82176fa:	01 d0                	add    %edx,%eax
 82176fc:	83 c0 0a             	add    $0xa,%eax
 82176ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217703:	8b 45 10             	mov    0x10(%ebp),%eax
 8217706:	89 04 24             	mov    %eax,(%esp)
 8217709:	e8 b2 58 37 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 821770e:	83 f0 01             	xor    $0x1,%eax
 8217711:	84 c0                	test   %al,%al
 8217713:	74 40                	je     8217755 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x70f>
 8217715:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821771c:	00 
 821771d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217724:	00 
 8217725:	c7 44 24 04 e0 d9 bc 	movl   $0x8bcd9e0,0x4(%esp)
 821772c:	08 
 821772d:	c7 04 24 2b c9 00 00 	movl   $0xc92b,(%esp)
 8217734:	e8 9e 91 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217739:	eb 69                	jmp    82177a4 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x75e>
 821773b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821773e:	c6 44 05 d9 00       	movb   $0x0,-0x27(%ebp,%eax,1)
 8217743:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8217746:	05 b8 00 00 00       	add    $0xb8,%eax
 821774b:	66 c7 84 45 6f fe ff 	movw   $0x0,-0x191(%ebp,%eax,2)
 8217752:	ff 00 00 
 8217755:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8217759:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 821775d:	0f 9e c0             	setle  %al
 8217760:	84 c0                	test   %al,%al
 8217762:	0f 85 1e ff ff ff    	jne    8217686 <_ZN29Dispatcher_FrameLagStatistics12dispatch_sigEP5CUserR9PacketBuf+0x640>
 8217768:	8d 9d 65 fe ff ff    	lea    -0x19b(%ebp),%ebx
 821776e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217771:	89 04 24             	mov    %eax,(%esp)
 8217774:	e8 17 45 eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8217779:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821777f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217783:	89 14 24             	mov    %edx,(%esp)
 8217786:	e8 6d a5 ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821778b:	c7 44 24 08 86 01 00 	movl   $0x186,0x8(%esp)
 8217792:	00 
 8217793:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8217797:	89 04 24             	mov    %eax,(%esp)
 821779a:	e8 a5 a8 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821779f:	b8 00 00 00 00       	mov    $0x0,%eax
 82177a4:	81 c4 b4 01 00 00    	add    $0x1b4,%esp
 82177aa:	5b                   	pop    %ebx
 82177ab:	5d                   	pop    %ebp
 82177ac:	c3                   	ret
 82177ad:	90                   	nop

```

```c
// Dispatcher_FrameLagStatistics::dispatch_sig @ 0x8217046

/* Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_FrameLagStatistics::dispatch_sig
          (Dispatcher_FrameLagStatistics *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Frame_Lag_Statistic_Add local_19f [10];
  undefined1 auStack_195 [4];
  char cStack_191;
  char cStack_190;
  char acStack_18f [2];
  ushort uStack_18d;
  ushort uStack_18b;
  short sStack_189;
  short sStack_187;
  char cStack_185;
  int iStack_184;
  char cStack_180;
  short sStack_17f;
  short sStack_17d;
  short asStack_17b [168];
  char acStack_2b [18];
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  
  Packet_Frame_Lag_Statistic_Add::Packet_Frame_Lag_Statistic_Add(local_19f);
  cVar1 = PacketBuf::get_int(param_2,(int *)auStack_195);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_2,auStack_195 + 4);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_2,auStack_195 + 5);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_2,(ushort *)(acStack_18f + 2));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&uStack_18b);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&sStack_189);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,&sStack_187);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_byte(param_2,&cStack_185);
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_int(param_2,&iStack_184);
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_byte(param_2,&cStack_180);
                    if (cVar1 == '\x01') {
                      cVar1 = PacketBuf::get_short(param_2,&sStack_17f);
                      if (cVar1 == '\x01') {
                        cVar1 = PacketBuf::get_short(param_2,&sStack_17d);
                        if (cVar1 == '\x01') {
                          for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
                            cVar1 = PacketBuf::get_short(param_2,asStack_17b + local_18 * 0x1c);
                            if (cVar1 != '\x01') {
                              uVar2 = LineFunc(0xc914,
                                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                               ,0,0);
                              return uVar2;
                            }
                            cVar1 = PacketBuf::get_short(param_2,asStack_17b + local_18 * 0x1c + 1);
                            if (cVar1 != '\x01') {
                              uVar2 = LineFunc(0xc915,
                                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                               ,0,0);
                              return uVar2;
                            }
                            cVar1 = PacketBuf::get_short(param_2,asStack_17b + local_18 * 0x1c + 2);
                            if (cVar1 != '\x01') {
                              uVar2 = LineFunc(0xc916,
                                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                               ,0,0);
                              return uVar2;
                            }
                            cVar1 = PacketBuf::get_short(param_2,asStack_17b + local_18 * 0x1c + 3);
                            if (cVar1 != '\x01') {
                              uVar2 = LineFunc(0xc917,
                                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                               ,0,0);
                              return uVar2;
                            }
                            for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
                              cVar1 = PacketBuf::get_int(param_2,(int *)(auStack_195 +
                                                                        (local_18 * 7 + local_14 + 4
                                                                        ) * 8 + 2));
                              if (cVar1 != '\x01') {
                                uVar2 = LineFunc(0xc91f,
                                                 "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                                 ,0,0);
                                return uVar2;
                              }
                              cVar1 = PacketBuf::get_binary
                                                (param_2,acStack_18f +
                                                         (local_18 * 7 + local_14 + 4) * 8,4);
                              if (cVar1 != '\x01') {
                                uVar2 = LineFunc(0xc920,
                                                 "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                                 ,0,0);
                                return uVar2;
                              }
                            }
                          }
                          cVar1 = PacketBuf::get_byte(param_2,&local_19);
                          if (cVar1 == '\x01') {
                            for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
                              if (local_10 < local_19) {
                                cVar1 = PacketBuf::get_byte(param_2,acStack_2b + local_10);
                                if (cVar1 != '\x01') {
                                  uVar2 = LineFunc(0xc92a,
                                                  "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                  return uVar2;
                                }
                                cVar1 = PacketBuf::get_short
                                                  (param_2,(short *)(auStack_195 +
                                                                    (local_10 + 0xb8) * 2));
                                if (cVar1 != '\x01') {
                                  uVar2 = LineFunc(0xc92b,
                                                  "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                                  ,0,0);
                                  return uVar2;
                                }
                              }
                              else {
                                acStack_2b[local_10] = '\0';
                                *(undefined2 *)(auStack_195 + (local_10 + 0xb8) * 2) = 0;
                              }
                            }
                            uVar2 = CUser::GetServerGroup(param_1);
                            this_00 = (CStatisticServerProxy *)
                                      CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                                                (GlobalData::s_statistic_proxy_mgr,uVar2);
                            CStatisticServerProxy::SendPacket(this_00,(char *)local_19f,0x186);
                            uVar2 = 0;
                          }
                          else {
                            uVar2 = LineFunc(0xc925,
                                             "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                             ,0,0);
                          }
                        }
                        else {
                          uVar2 = LineFunc(0xc90b,
                                           "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                           ,0,0);
                        }
                      }
                      else {
                        uVar2 = LineFunc(0xc90a,
                                         "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar2 = LineFunc(0xc909,
                                       "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar2 = LineFunc(0xc907,
                                     "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar2 = LineFunc(0xc906,
                                   "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar2 = LineFunc(0xc905,
                                 "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar2 = LineFunc(0xc903,
                               "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0xc902,
                             "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0xc901,
                           "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0xc8ff,
                         "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0xc8fe,
                       "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xc8fd,
                     "virtual int Dispatcher_FrameLagStatistics::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
  }
  return uVar2;
}

```

