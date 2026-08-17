# Dispatcher_MultiMailBoxSend

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082262a2 Dispatcher_MultiMailBoxSend::dispatch_sig  [0x082262a2-0x8226bd9] ===
 82262a2:	55                   	push   %ebp
 82262a3:	89 e5                	mov    %esp,%ebp
 82262a5:	56                   	push   %esi
 82262a6:	53                   	push   %ebx
 82262a7:	81 ec 60 41 00 00    	sub    $0x4160,%esp
 82262ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 82262b0:	89 04 24             	mov    %eax,(%esp)
 82262b3:	e8 d4 40 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82262b8:	83 f8 03             	cmp    $0x3,%eax
 82262bb:	75 0f                	jne    82262cc <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 82262bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82262c0:	89 04 24             	mov    %eax,(%esp)
 82262c3:	e8 6a a1 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82262c8:	85 c0                	test   %eax,%eax
 82262ca:	75 07                	jne    82262d3 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x31>
 82262cc:	b8 01 00 00 00       	mov    $0x1,%eax
 82262d1:	eb 05                	jmp    82262d8 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x36>
 82262d3:	b8 00 00 00 00       	mov    $0x0,%eax
 82262d8:	84 c0                	test   %al,%al
 82262da:	74 0a                	je     82262e6 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x44>
 82262dc:	bb 00 00 00 00       	mov    $0x0,%ebx
 82262e1:	e9 e8 08 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 82262e6:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 82262eb:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 82262f2:	00 
 82262f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 82262f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82262fa:	89 04 24             	mov    %eax,(%esp)
 82262fd:	e8 00 27 06 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8226302:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8226305:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8226309:	74 27                	je     8226332 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x90>
 822630b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 822630e:	0f b6 c0             	movzbl %al,%eax
 8226311:	89 44 24 08          	mov    %eax,0x8(%esp)
 8226315:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 822631c:	00 
 822631d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226320:	89 04 24             	mov    %eax,(%esp)
 8226323:	e8 1a 5c 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8226328:	bb 00 00 00 00       	mov    $0x0,%ebx
 822632d:	e9 9c 08 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 8226332:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226335:	89 04 24             	mov    %eax,(%esp)
 8226338:	e8 ff 99 00 00       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 822633d:	84 c0                	test   %al,%al
 822633f:	74 25                	je     8226366 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0xc4>
 8226341:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8226348:	00 
 8226349:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 8226350:	00 
 8226351:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226354:	89 04 24             	mov    %eax,(%esp)
 8226357:	e8 e6 5b 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822635c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226361:	e9 68 08 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 8226366:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 822636c:	83 c0 0d             	add    $0xd,%eax
 822636f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226373:	8b 45 10             	mov    0x10(%ebp),%eax
 8226376:	89 04 24             	mov    %eax,(%esp)
 8226379:	e8 72 6d 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 822637e:	83 f0 01             	xor    $0x1,%eax
 8226381:	84 c0                	test   %al,%al
 8226383:	74 2b                	je     82263b0 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x10e>
 8226385:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822638c:	00 
 822638d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226394:	00 
 8226395:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 822639c:	08 
 822639d:	c7 04 24 ea e1 00 00 	movl   $0xe1ea,(%esp)
 82263a4:	e8 2e a5 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82263a9:	89 c3                	mov    %eax,%ebx
 82263ab:	e9 1e 08 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 82263b0:	8b 85 3e fe ff ff    	mov    -0x1c2(%ebp),%eax
 82263b6:	85 c0                	test   %eax,%eax
 82263b8:	7f 2b                	jg     82263e5 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x143>
 82263ba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82263c1:	00 
 82263c2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82263c9:	00 
 82263ca:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 82263d1:	08 
 82263d2:	c7 04 24 ed e1 00 00 	movl   $0xe1ed,(%esp)
 82263d9:	e8 f9 a4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82263de:	89 c3                	mov    %eax,%ebx
 82263e0:	e9 e9 07 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 82263e5:	8b 85 3e fe ff ff    	mov    -0x1c2(%ebp),%eax
 82263eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82263ef:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 82263f6:	00 
 82263f7:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 82263fd:	83 c0 11             	add    $0x11,%eax
 8226400:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226404:	8b 45 10             	mov    0x10(%ebp),%eax
 8226407:	89 04 24             	mov    %eax,(%esp)
 822640a:	e8 ad 6e 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 822640f:	83 f0 01             	xor    $0x1,%eax
 8226412:	84 c0                	test   %al,%al
 8226414:	74 2b                	je     8226441 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x19f>
 8226416:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822641d:	00 
 822641e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226425:	00 
 8226426:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 822642d:	08 
 822642e:	c7 04 24 f0 e1 00 00 	movl   $0xe1f0,(%esp)
 8226435:	e8 9d a4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822643a:	89 c3                	mov    %eax,%ebx
 822643c:	e9 8d 07 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 8226441:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 8226447:	83 c0 2f             	add    $0x2f,%eax
 822644a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822644e:	8b 45 10             	mov    0x10(%ebp),%eax
 8226451:	89 04 24             	mov    %eax,(%esp)
 8226454:	e8 e7 6d 36 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8226459:	83 f0 01             	xor    $0x1,%eax
 822645c:	84 c0                	test   %al,%al
 822645e:	74 2b                	je     822648b <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x1e9>
 8226460:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226467:	00 
 8226468:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822646f:	00 
 8226470:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 8226477:	08 
 8226478:	c7 04 24 f3 e1 00 00 	movl   $0xe1f3,(%esp)
 822647f:	e8 53 a4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226484:	89 c3                	mov    %eax,%ebx
 8226486:	e9 43 07 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 822648b:	c6 85 64 fe ff ff 01 	movb   $0x1,-0x19c(%ebp)
 8226492:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 8226498:	83 c0 33             	add    $0x33,%eax
 822649b:	89 44 24 04          	mov    %eax,0x4(%esp)
 822649f:	8b 45 10             	mov    0x10(%ebp),%eax
 82264a2:	89 04 24             	mov    %eax,(%esp)
 82264a5:	e8 c6 6a 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82264aa:	83 f0 01             	xor    $0x1,%eax
 82264ad:	84 c0                	test   %al,%al
 82264af:	74 2b                	je     82264dc <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x23a>
 82264b1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82264b8:	00 
 82264b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82264c0:	00 
 82264c1:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 82264c8:	08 
 82264c9:	c7 04 24 f7 e1 00 00 	movl   $0xe1f7,(%esp)
 82264d0:	e8 02 a4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82264d5:	89 c3                	mov    %eax,%ebx
 82264d7:	e9 f2 06 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 82264dc:	0f b6 85 64 fe ff ff 	movzbl -0x19c(%ebp),%eax
 82264e3:	3c 0a                	cmp    $0xa,%al
 82264e5:	76 2b                	jbe    8226512 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x270>
 82264e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82264ee:	00 
 82264ef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82264f6:	00 
 82264f7:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 82264fe:	08 
 82264ff:	c7 04 24 fa e1 00 00 	movl   $0xe1fa,(%esp)
 8226506:	e8 cc a3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822650b:	89 c3                	mov    %eax,%ebx
 822650d:	e9 bc 06 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 8226512:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8226519:	e9 d9 02 00 00       	jmp    82267f7 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x555>
 822651e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8226521:	8d 8d 31 fe ff ff    	lea    -0x1cf(%ebp),%ecx
 8226527:	89 d0                	mov    %edx,%eax
 8226529:	c1 e0 02             	shl    $0x2,%eax
 822652c:	01 d0                	add    %edx,%eax
 822652e:	01 c0                	add    %eax,%eax
 8226530:	01 d0                	add    %edx,%eax
 8226532:	83 c0 30             	add    $0x30,%eax
 8226535:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8226538:	83 c0 04             	add    $0x4,%eax
 822653b:	89 44 24 04          	mov    %eax,0x4(%esp)
 822653f:	8b 45 10             	mov    0x10(%ebp),%eax
 8226542:	89 04 24             	mov    %eax,(%esp)
 8226545:	e8 26 6a 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 822654a:	83 f0 01             	xor    $0x1,%eax
 822654d:	84 c0                	test   %al,%al
 822654f:	74 2b                	je     822657c <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x2da>
 8226551:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226558:	00 
 8226559:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8226560:	00 
 8226561:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 8226568:	08 
 8226569:	c7 04 24 ff e1 00 00 	movl   $0xe1ff,(%esp)
 8226570:	e8 62 a3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226575:	89 c3                	mov    %eax,%ebx
 8226577:	e9 52 06 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 822657c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 822657f:	8d 8d 31 fe ff ff    	lea    -0x1cf(%ebp),%ecx
 8226585:	89 d0                	mov    %edx,%eax
 8226587:	c1 e0 02             	shl    $0x2,%eax
 822658a:	01 d0                	add    %edx,%eax
 822658c:	01 c0                	add    %eax,%eax
 822658e:	01 d0                	add    %edx,%eax
 8226590:	83 c0 30             	add    $0x30,%eax
 8226593:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8226596:	83 c0 05             	add    $0x5,%eax
 8226599:	89 44 24 04          	mov    %eax,0x4(%esp)
 822659d:	8b 45 10             	mov    0x10(%ebp),%eax
 82265a0:	89 04 24             	mov    %eax,(%esp)
 82265a3:	e8 08 6b 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 82265a8:	83 f0 01             	xor    $0x1,%eax
 82265ab:	84 c0                	test   %al,%al
 82265ad:	74 2b                	je     82265da <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x338>
 82265af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82265b6:	00 
 82265b7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82265be:	00 
 82265bf:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 82265c6:	08 
 82265c7:	c7 04 24 02 e2 00 00 	movl   $0xe202,(%esp)
 82265ce:	e8 04 a3 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82265d3:	89 c3                	mov    %eax,%ebx
 82265d5:	e9 f4 05 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 82265da:	8b 55 e8             	mov    -0x18(%ebp),%edx
 82265dd:	8d 8d 31 fe ff ff    	lea    -0x1cf(%ebp),%ecx
 82265e3:	89 d0                	mov    %edx,%eax
 82265e5:	c1 e0 02             	shl    $0x2,%eax
 82265e8:	01 d0                	add    %edx,%eax
 82265ea:	01 c0                	add    %eax,%eax
 82265ec:	01 d0                	add    %edx,%eax
 82265ee:	83 c0 30             	add    $0x30,%eax
 82265f1:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82265f4:	83 c0 07             	add    $0x7,%eax
 82265f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82265fb:	8b 45 10             	mov    0x10(%ebp),%eax
 82265fe:	89 04 24             	mov    %eax,(%esp)
 8226601:	e8 78 6c 36 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 8226606:	83 f0 01             	xor    $0x1,%eax
 8226609:	84 c0                	test   %al,%al
 822660b:	74 2b                	je     8226638 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x396>
 822660d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226614:	00 
 8226615:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822661c:	00 
 822661d:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 8226624:	08 
 8226625:	c7 04 24 05 e2 00 00 	movl   $0xe205,(%esp)
 822662c:	e8 a6 a2 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226631:	89 c3                	mov    %eax,%ebx
 8226633:	e9 96 05 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 8226638:	8b 55 e8             	mov    -0x18(%ebp),%edx
 822663b:	89 d0                	mov    %edx,%eax
 822663d:	c1 e0 02             	shl    $0x2,%eax
 8226640:	01 d0                	add    %edx,%eax
 8226642:	01 c0                	add    %eax,%eax
 8226644:	01 d0                	add    %edx,%eax
 8226646:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8226649:	8d 04 02             	lea    (%edx,%eax,1),%eax
 822664c:	2d 97 01 00 00       	sub    $0x197,%eax
 8226651:	8b 40 07             	mov    0x7(%eax),%eax
 8226654:	85 c0                	test   %eax,%eax
 8226656:	75 25                	jne    822667d <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x3db>
 8226658:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822665f:	00 
 8226660:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 8226667:	00 
 8226668:	8b 45 0c             	mov    0xc(%ebp),%eax
 822666b:	89 04 24             	mov    %eax,(%esp)
 822666e:	e8 cf 58 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8226673:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226678:	e9 51 05 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 822667d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8226680:	8d 8d 31 fe ff ff    	lea    -0x1cf(%ebp),%ecx
 8226686:	89 d0                	mov    %edx,%eax
 8226688:	c1 e0 02             	shl    $0x2,%eax
 822668b:	01 d0                	add    %edx,%eax
 822668d:	01 c0                	add    %eax,%eax
 822668f:	01 d0                	add    %edx,%eax
 8226691:	83 c0 30             	add    $0x30,%eax
 8226694:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8226697:	83 c0 0b             	add    $0xb,%eax
 822669a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822669e:	8b 45 10             	mov    0x10(%ebp),%eax
 82266a1:	89 04 24             	mov    %eax,(%esp)
 82266a4:	e8 47 6a 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82266a9:	83 f0 01             	xor    $0x1,%eax
 82266ac:	84 c0                	test   %al,%al
 82266ae:	74 2b                	je     82266db <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x439>
 82266b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82266b7:	00 
 82266b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82266bf:	00 
 82266c0:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 82266c7:	08 
 82266c8:	c7 04 24 0e e2 00 00 	movl   $0xe20e,(%esp)
 82266cf:	e8 03 a2 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82266d4:	89 c3                	mov    %eax,%ebx
 82266d6:	e9 f3 04 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 82266db:	8b 55 e8             	mov    -0x18(%ebp),%edx
 82266de:	89 d0                	mov    %edx,%eax
 82266e0:	c1 e0 02             	shl    $0x2,%eax
 82266e3:	01 d0                	add    %edx,%eax
 82266e5:	01 c0                	add    %eax,%eax
 82266e7:	01 d0                	add    %edx,%eax
 82266e9:	8d 55 f8             	lea    -0x8(%ebp),%edx
 82266ec:	8d 04 02             	lea    (%edx,%eax,1),%eax
 82266ef:	2d 97 01 00 00       	sub    $0x197,%eax
 82266f4:	0f b7 40 05          	movzwl 0x5(%eax),%eax
 82266f8:	0f b7 d8             	movzwl %ax,%ebx
 82266fb:	8b 55 e8             	mov    -0x18(%ebp),%edx
 82266fe:	89 d0                	mov    %edx,%eax
 8226700:	c1 e0 02             	shl    $0x2,%eax
 8226703:	01 d0                	add    %edx,%eax
 8226705:	01 c0                	add    %eax,%eax
 8226707:	01 d0                	add    %edx,%eax
 8226709:	8d 55 f8             	lea    -0x8(%ebp),%edx
 822670c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 822670f:	2d 93 01 00 00       	sub    $0x193,%eax
 8226714:	0f b6 00             	movzbl (%eax),%eax
 8226717:	0f b6 c0             	movzbl %al,%eax
 822671a:	89 04 24             	mov    %eax,(%esp)
 822671d:	e8 23 11 ed ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 8226722:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8226726:	89 44 24 04          	mov    %eax,0x4(%esp)
 822672a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822672d:	89 04 24             	mov    %eax,(%esp)
 8226730:	e8 0d 02 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8226735:	84 c0                	test   %al,%al
 8226737:	74 25                	je     822675e <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x4bc>
 8226739:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8226740:	00 
 8226741:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 8226748:	00 
 8226749:	8b 45 0c             	mov    0xc(%ebp),%eax
 822674c:	89 04 24             	mov    %eax,(%esp)
 822674f:	e8 ee 57 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8226754:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226759:	e9 70 04 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 822675e:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 8226762:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8226765:	89 d0                	mov    %edx,%eax
 8226767:	c1 e0 02             	shl    $0x2,%eax
 822676a:	01 d0                	add    %edx,%eax
 822676c:	01 c0                	add    %eax,%eax
 822676e:	01 d0                	add    %edx,%eax
 8226770:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8226773:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8226776:	2d 97 01 00 00       	sub    $0x197,%eax
 822677b:	0f b7 40 05          	movzwl 0x5(%eax),%eax
 822677f:	0f b7 d8             	movzwl %ax,%ebx
 8226782:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8226785:	89 d0                	mov    %edx,%eax
 8226787:	c1 e0 02             	shl    $0x2,%eax
 822678a:	01 d0                	add    %edx,%eax
 822678c:	01 c0                	add    %eax,%eax
 822678e:	01 d0                	add    %edx,%eax
 8226790:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8226793:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8226796:	2d 93 01 00 00       	sub    $0x193,%eax
 822679b:	0f b6 00             	movzbl (%eax),%eax
 822679e:	0f b6 c0             	movzbl %al,%eax
 82267a1:	89 04 24             	mov    %eax,(%esp)
 82267a4:	e8 9c 10 ed ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 82267a9:	8d 55 d7             	lea    -0x29(%ebp),%edx
 82267ac:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82267b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82267b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82267b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82267bb:	89 04 24             	mov    %eax,(%esp)
 82267be:	e8 6b 9b ef ff       	call   812032e <_Z36CheckItemTradeLimitCountToMoveByUserR5CUseriiRb>
 82267c3:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 82267c7:	83 f0 01             	xor    $0x1,%eax
 82267ca:	84 c0                	test   %al,%al
 82267cc:	74 25                	je     82267f3 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x551>
 82267ce:	c7 44 24 08 72 00 00 	movl   $0x72,0x8(%esp)
 82267d5:	00 
 82267d6:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 82267dd:	00 
 82267de:	8b 45 0c             	mov    0xc(%ebp),%eax
 82267e1:	89 04 24             	mov    %eax,(%esp)
 82267e4:	e8 59 57 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82267e9:	bb 00 00 00 00       	mov    $0x0,%ebx
 82267ee:	e9 db 03 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 82267f3:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 82267f7:	0f b6 85 64 fe ff ff 	movzbl -0x19c(%ebp),%eax
 82267fe:	0f b6 c0             	movzbl %al,%eax
 8226801:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8226804:	0f 9f c0             	setg   %al
 8226807:	84 c0                	test   %al,%al
 8226809:	0f 85 0f fd ff ff    	jne    822651e <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x27c>
 822680f:	c7 85 d3 fe ff ff 00 	movl   $0x0,-0x12d(%ebp)
 8226816:	00 00 00 
 8226819:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8226820:	00 
 8226821:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8226828:	00 
 8226829:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 822682f:	05 a6 00 00 00       	add    $0xa6,%eax
 8226834:	89 04 24             	mov    %eax,(%esp)
 8226837:	e8 84 74 e5 ff       	call   807dcc0 <memset@plt>
 822683c:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 8226842:	05 a2 00 00 00       	add    $0xa2,%eax
 8226847:	89 44 24 04          	mov    %eax,0x4(%esp)
 822684b:	8b 45 10             	mov    0x10(%ebp),%eax
 822684e:	89 04 24             	mov    %eax,(%esp)
 8226851:	e8 9a 68 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8226856:	83 f0 01             	xor    $0x1,%eax
 8226859:	84 c0                	test   %al,%al
 822685b:	74 2b                	je     8226888 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x5e6>
 822685d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8226864:	00 
 8226865:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822686c:	00 
 822686d:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 8226874:	08 
 8226875:	c7 04 24 29 e2 00 00 	movl   $0xe229,(%esp)
 822687c:	e8 56 a0 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8226881:	89 c3                	mov    %eax,%ebx
 8226883:	e9 46 03 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 8226888:	8b 85 d3 fe ff ff    	mov    -0x12d(%ebp),%eax
 822688e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8226892:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8226899:	00 
 822689a:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 82268a0:	05 a6 00 00 00       	add    $0xa6,%eax
 82268a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82268a9:	8b 45 10             	mov    0x10(%ebp),%eax
 82268ac:	89 04 24             	mov    %eax,(%esp)
 82268af:	e8 08 6a 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 82268b4:	83 f0 01             	xor    $0x1,%eax
 82268b7:	84 c0                	test   %al,%al
 82268b9:	74 2b                	je     82268e6 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x644>
 82268bb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82268c2:	00 
 82268c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82268ca:	00 
 82268cb:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 82268d2:	08 
 82268d3:	c7 04 24 2b e2 00 00 	movl   $0xe22b,(%esp)
 82268da:	e8 f8 9f 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82268df:	89 c3                	mov    %eax,%ebx
 82268e1:	e9 e8 02 00 00       	jmp    8226bce <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x92c>
 82268e6:	8d 45 df             	lea    -0x21(%ebp),%eax
 82268e9:	89 04 24             	mov    %eax,(%esp)
 82268ec:	e8 df 97 4b 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82268f1:	8d 45 df             	lea    -0x21(%ebp),%eax
 82268f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 82268f8:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 82268fe:	05 a6 00 00 00       	add    $0xa6,%eax
 8226903:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226907:	8d 45 d8             	lea    -0x28(%ebp),%eax
 822690a:	89 04 24             	mov    %eax,(%esp)
 822690d:	e8 1e 0d 4e 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8226912:	eb 1b                	jmp    822692f <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x68d>
 8226914:	89 d3                	mov    %edx,%ebx
 8226916:	89 c6                	mov    %eax,%esi
 8226918:	8d 45 df             	lea    -0x21(%ebp),%eax
 822691b:	89 04 24             	mov    %eax,(%esp)
 822691e:	e8 cd 97 4b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8226923:	89 f0                	mov    %esi,%eax
 8226925:	89 da                	mov    %ebx,%edx
 8226927:	89 04 24             	mov    %eax,(%esp)
 822692a:	e8 21 ce 8b 00       	call   8ae3750 <_Unwind_Resume>
 822692f:	8d 45 df             	lea    -0x21(%ebp),%eax
 8226932:	89 04 24             	mov    %eax,(%esp)
 8226935:	e8 b6 97 4b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 822693a:	e8 c2 e6 00 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 822693f:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8226942:	89 54 24 04          	mov    %edx,0x4(%esp)
 8226946:	89 04 24             	mov    %eax,(%esp)
 8226949:	e8 d4 7c 40 00       	call   862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>
 822694e:	84 c0                	test   %al,%al
 8226950:	74 25                	je     8226977 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x6d5>
 8226952:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 8226959:	00 
 822695a:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 8226961:	00 
 8226962:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226965:	89 04 24             	mov    %eax,(%esp)
 8226968:	e8 d5 55 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822696d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226972:	e9 4c 02 00 00       	jmp    8226bc3 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x921>
 8226977:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 822697d:	05 a6 00 00 00       	add    $0xa6,%eax
 8226982:	89 04 24             	mov    %eax,(%esp)
 8226985:	e8 26 7a e5 ff       	call   807e3b0 <strlen@plt>
 822698a:	8b 95 d3 fe ff ff    	mov    -0x12d(%ebp),%edx
 8226990:	39 d0                	cmp    %edx,%eax
 8226992:	74 2b                	je     82269bf <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x71d>
 8226994:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822699b:	00 
 822699c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82269a3:	00 
 82269a4:	c7 44 24 04 40 c4 bc 	movl   $0x8bcc440,0x4(%esp)
 82269ab:	08 
 82269ac:	c7 04 24 37 e2 00 00 	movl   $0xe237,(%esp)
 82269b3:	e8 1f 9f 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82269b8:	89 c3                	mov    %eax,%ebx
 82269ba:	e9 04 02 00 00       	jmp    8226bc3 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x921>
 82269bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 82269c2:	89 04 24             	mov    %eax,(%esp)
 82269c5:	e8 b6 89 00 00       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 82269ca:	83 f0 01             	xor    $0x1,%eax
 82269cd:	84 c0                	test   %al,%al
 82269cf:	74 41                	je     8226a12 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x770>
 82269d1:	8b 95 60 fe ff ff    	mov    -0x1a0(%ebp),%edx
 82269d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82269da:	89 54 24 04          	mov    %edx,0x4(%esp)
 82269de:	89 04 24             	mov    %eax,(%esp)
 82269e1:	e8 b0 fa 41 00       	call   8646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>
 82269e6:	83 f0 01             	xor    $0x1,%eax
 82269e9:	84 c0                	test   %al,%al
 82269eb:	74 25                	je     8226a12 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x770>
 82269ed:	c7 44 24 08 46 00 00 	movl   $0x46,0x8(%esp)
 82269f4:	00 
 82269f5:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 82269fc:	00 
 82269fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226a00:	89 04 24             	mov    %eax,(%esp)
 8226a03:	e8 3a 55 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8226a08:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226a0d:	e9 b1 01 00 00       	jmp    8226bc3 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x921>
 8226a12:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 8226a18:	85 c0                	test   %eax,%eax
 8226a1a:	74 16                	je     8226a32 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x790>
 8226a1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226a1f:	89 04 24             	mov    %eax,(%esp)
 8226a22:	e8 f3 3a 46 00       	call   868a51a <_ZN5CUser18reqSendMailCertifyEv>
 8226a27:	84 c0                	test   %al,%al
 8226a29:	74 07                	je     8226a32 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x790>
 8226a2b:	b8 01 00 00 00       	mov    $0x1,%eax
 8226a30:	eb 05                	jmp    8226a37 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x795>
 8226a32:	b8 00 00 00 00       	mov    $0x0,%eax
 8226a37:	84 c0                	test   %al,%al
 8226a39:	74 1f                	je     8226a5a <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x7b8>
 8226a3b:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 8226a41:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226a45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226a48:	89 04 24             	mov    %eax,(%esp)
 8226a4b:	e8 98 3a 46 00       	call   868a4e8 <_ZN5CUser20set_MultimailMsgDataEP22MSG_MULTI_MAILBOX_SEND>
 8226a50:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226a55:	e9 69 01 00 00       	jmp    8226bc3 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x921>
 8226a5a:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 8226a60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226a64:	8d 85 a9 be ff ff    	lea    -0x4157(%ebp),%eax
 8226a6a:	89 04 24             	mov    %eax,(%esp)
 8226a6d:	e8 14 16 01 00       	call   8238086 <_ZN23MSG_CHECK_MAIL_RECEIVER3setILNS_22ENUM_MAILBOX_CHECKTYPEE2E22MSG_MULTI_MAILBOX_SENDEEvRKT0_>
 8226a72:	8d 85 a9 be ff ff    	lea    -0x4157(%ebp),%eax
 8226a78:	89 44 24 08          	mov    %eax,0x8(%esp)
 8226a7c:	8d 85 31 fe ff ff    	lea    -0x1cf(%ebp),%eax
 8226a82:	83 c0 11             	add    $0x11,%eax
 8226a85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226a89:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226a8c:	89 04 24             	mov    %eax,(%esp)
 8226a8f:	e8 d0 e9 32 00       	call   8555464 <_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>
 8226a94:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8226a97:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8226a9b:	74 22                	je     8226abf <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x81d>
 8226a9d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8226aa0:	0f b6 c0             	movzbl %al,%eax
 8226aa3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8226aa7:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 8226aae:	00 
 8226aaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226ab2:	89 04 24             	mov    %eax,(%esp)
 8226ab5:	e8 88 54 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8226aba:	e9 e2 00 00 00       	jmp    8226ba1 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x8ff>
 8226abf:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8226ac3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8226aca:	e9 ba 00 00 00       	jmp    8226b89 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x8e7>
 8226acf:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8226ad2:	89 d0                	mov    %edx,%eax
 8226ad4:	c1 e0 02             	shl    $0x2,%eax
 8226ad7:	01 d0                	add    %edx,%eax
 8226ad9:	01 c0                	add    %eax,%eax
 8226adb:	01 d0                	add    %edx,%eax
 8226add:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8226ae0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8226ae3:	2d 97 01 00 00       	sub    $0x197,%eax
 8226ae8:	8b 40 07             	mov    0x7(%eax),%eax
 8226aeb:	89 c3                	mov    %eax,%ebx
 8226aed:	e8 a9 56 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8226af2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8226af6:	89 04 24             	mov    %eax,(%esp)
 8226af9:	e8 34 8f 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8226afe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8226b01:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8226b05:	74 3d                	je     8226b44 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x8a2>
 8226b07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8226b0a:	8b 00                	mov    (%eax),%eax
 8226b0c:	83 c0 10             	add    $0x10,%eax
 8226b0f:	8b 10                	mov    (%eax),%edx
 8226b11:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8226b14:	89 04 24             	mov    %eax,(%esp)
 8226b17:	ff d2                	call   *%edx
 8226b19:	83 f0 01             	xor    $0x1,%eax
 8226b1c:	84 c0                	test   %al,%al
 8226b1e:	74 17                	je     8226b37 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x895>
 8226b20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8226b23:	89 04 24             	mov    %eax,(%esp)
 8226b26:	e8 ab a7 ec ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8226b2b:	83 f8 01             	cmp    $0x1,%eax
 8226b2e:	7f 07                	jg     8226b37 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x895>
 8226b30:	b8 01 00 00 00       	mov    $0x1,%eax
 8226b35:	eb 05                	jmp    8226b3c <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x89a>
 8226b37:	b8 00 00 00 00       	mov    $0x0,%eax
 8226b3c:	84 c0                	test   %al,%al
 8226b3e:	74 04                	je     8226b44 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x8a2>
 8226b40:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 8226b44:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8226b47:	89 d0                	mov    %edx,%eax
 8226b49:	c1 e0 02             	shl    $0x2,%eax
 8226b4c:	01 d0                	add    %edx,%eax
 8226b4e:	01 c0                	add    %eax,%eax
 8226b50:	01 d0                	add    %edx,%eax
 8226b52:	8d 55 f8             	lea    -0x8(%ebp),%edx
 8226b55:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8226b58:	2d 97 01 00 00       	sub    $0x197,%eax
 8226b5d:	8b 40 07             	mov    0x7(%eax),%eax
 8226b60:	85 c0                	test   %eax,%eax
 8226b62:	75 04                	jne    8226b68 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x8c6>
 8226b64:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 8226b68:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 8226b6c:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 8226b72:	89 54 24 08          	mov    %edx,0x8(%esp)
 8226b76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8226b7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8226b7d:	89 04 24             	mov    %eax,(%esp)
 8226b80:	e8 05 fa 41 00       	call   864658a <_ZN5CUser18IncrementTradeGoldEji>
 8226b85:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8226b89:	0f b6 85 64 fe ff ff 	movzbl -0x19c(%ebp),%eax
 8226b90:	0f b6 c0             	movzbl %al,%eax
 8226b93:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8226b96:	0f 9f c0             	setg   %al
 8226b99:	84 c0                	test   %al,%al
 8226b9b:	0f 85 2e ff ff ff    	jne    8226acf <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x82d>
 8226ba1:	bb 00 00 00 00       	mov    $0x0,%ebx
 8226ba6:	eb 1b                	jmp    8226bc3 <_ZN27Dispatcher_MultiMailBoxSend12dispatch_sigEP5CUserR9PacketBuf+0x921>
 8226ba8:	89 d3                	mov    %edx,%ebx
 8226baa:	89 c6                	mov    %eax,%esi
 8226bac:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8226baf:	89 04 24             	mov    %eax,(%esp)
 8226bb2:	e8 29 10 4e 00       	call   8707be0 <_ZNSsD1Ev>
 8226bb7:	89 f0                	mov    %esi,%eax
 8226bb9:	89 da                	mov    %ebx,%edx
 8226bbb:	89 04 24             	mov    %eax,(%esp)
 8226bbe:	e8 8d cb 8b 00       	call   8ae3750 <_Unwind_Resume>
 8226bc3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8226bc6:	89 04 24             	mov    %eax,(%esp)
 8226bc9:	e8 12 10 4e 00       	call   8707be0 <_ZNSsD1Ev>
 8226bce:	89 d8                	mov    %ebx,%eax
 8226bd0:	81 c4 60 41 00 00    	add    $0x4160,%esp
 8226bd6:	5b                   	pop    %ebx
 8226bd7:	5e                   	pop    %esi
 8226bd8:	5d                   	pop    %ebp
 8226bd9:	c3                   	ret

```

```c
// Dispatcher_MultiMailBoxSend::dispatch_sig @ 0x82262a2

/* Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_MultiMailBoxSend::dispatch_sig
          (Dispatcher_MultiMailBoxSend *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CSyncSlangFilter *this_00;
  size_t sVar6;
  CDataManager *this_01;
  MSG_CHECK_MAIL_RECEIVER local_415b [16264];
  MSG_MULTI_MAILBOX_SEND local_1d3 [13];
  int local_1c6;
  char acStack_1c2 [30];
  uint local_1a4;
  byte local_1a0;
  uchar uStack_19f;
  ushort uStack_19e;
  ulong auStack_19c [26];
  size_t local_131;
  char acStack_12d [256];
  bool local_2d;
  string local_2c;
  allocator<char> local_25;
  uint local_24;
  uint local_20;
  int local_1c;
  byte local_15;
  int local_14;
  CItem *local_10;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return 0;
  }
  local_24 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x40);
  if (local_24 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x13c,local_24 & 0xff);
    return 0;
  }
  cVar3 = CUser::isHackUser(param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0x13c,0x17);
    return 0;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_1c6);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xe1ea,
                     "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar5;
  }
  if (local_1c6 < 1) {
    uVar5 = LineFunc(0xe1ed,
                     "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar5;
  }
  cVar3 = PacketBuf::get_str(param_2,acStack_1c2,0x1e,local_1c6);
  if (cVar3 != '\x01') {
    uVar5 = LineFunc(0xe1f0,
                     "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
    return uVar5;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_1a4);
  if (cVar3 == '\x01') {
    local_1a0 = 1;
    cVar3 = PacketBuf::get_byte(param_2,&local_1a0);
    if (cVar3 != '\x01') {
      uVar5 = LineFunc(0xe1f7,
                       "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
      return uVar5;
    }
    if (10 < local_1a0) {
      uVar5 = LineFunc(0xe1fa,
                       "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
      return uVar5;
    }
    local_1c = 0;
    while( true ) {
      if ((int)(uint)local_1a0 <= local_1c) {
        local_131 = 0;
        memset(acStack_12d,0,0x100);
        cVar3 = PacketBuf::get_int(param_2,(int *)&local_131);
        if (cVar3 != '\x01') {
          uVar5 = LineFunc(0xe229,
                           "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar5;
        }
        cVar3 = PacketBuf::get_str(param_2,acStack_12d,0x100,local_131);
        if (cVar3 == '\x01') {
          std::allocator<char>::allocator();
                    /* try { // try from 0822690d to 08226911 has its CatchHandler @ 08226914 */
          std::string::string((string *)&local_2c,acStack_12d,(allocator *)&local_25);
          std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 0822693a to 08226b84 has its CatchHandler @ 08226ba8 */
          this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
          cVar3 = CSyncSlangFilter::HasSlang(this_00,&local_2c);
          if (cVar3 == '\0') {
            sVar6 = strlen(acStack_12d);
            if (sVar6 == local_131) {
              cVar3 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_1);
              if ((cVar3 == '\x01') ||
                 (cVar3 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                                    ((CUserCharacInfo *)param_1,local_1a4), cVar3 == '\x01')) {
                if ((local_1a4 == 0) || (cVar3 = CUser::reqSendMailCertify(param_1), cVar3 == '\0'))
                {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  CUser::set_MultimailMsgData(param_1,local_1d3);
                  uVar5 = 0;
                }
                else {
                  MSG_CHECK_MAIL_RECEIVER::
                  set<(MSG_CHECK_MAIL_RECEIVER::ENUM_MAILBOX_CHECKTYPE)2,MSG_MULTI_MAILBOX_SEND>
                            (local_415b,local_1d3);
                  local_20 = WongWork::CMailBoxHelper::ReqDBCheckReceiver
                                       (param_1,acStack_1c2,local_415b);
                  if (local_20 == 0) {
                    local_15 = 0;
                    for (local_14 = 0; local_14 < (int)(uint)local_1a0; local_14 = local_14 + 1) {
                      iVar4 = *(int *)((int)auStack_19c + local_14 * 0xb);
                      this_01 = (CDataManager *)G_CDataManager();
                      local_10 = (CItem *)CDataManager::find_item(this_01,iVar4);
                      if (local_10 != (CItem *)0x0) {
                        cVar3 = (**(code **)(*(int *)local_10 + 0x10))(local_10);
                        if ((cVar3 == '\x01') || (iVar4 = CItem::get_rarity(local_10), 1 < iVar4)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          local_15 = 1;
                        }
                      }
                      if (*(int *)((int)auStack_19c + local_14 * 0xb) == 0) {
                        local_15 = 1;
                      }
                      CUser::IncrementTradeGold(param_1,local_1a4,(uint)local_15);
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket(param_1,0x13c,local_20 & 0xff);
                  }
                  uVar5 = 0;
                }
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x13c,0x46);
                uVar5 = 0;
              }
            }
            else {
              uVar5 = LineFunc(0xe237,
                               "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x13c,0x9f);
            uVar5 = 0;
          }
          std::string::~string((string *)&local_2c);
          return uVar5;
        }
        uVar5 = LineFunc(0xe22b,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      cVar3 = PacketBuf::get_byte(param_2,&uStack_19f + local_1c * 0xb);
      if (cVar3 != '\x01') {
        uVar5 = LineFunc(0xe1ff,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      cVar3 = PacketBuf::get_short(param_2,(ushort *)((int)auStack_19c + local_1c * 0xb + -2));
      if (cVar3 != '\x01') {
        uVar5 = LineFunc(0xe202,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      cVar3 = PacketBuf::get_int(param_2,(ulong *)((int)auStack_19c + local_1c * 0xb));
      if (cVar3 != '\x01') {
        uVar5 = LineFunc(0xe205,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      if (*(int *)((int)auStack_19c + local_1c * 0xb) == 0) break;
      cVar3 = PacketBuf::get_int(param_2,(int *)((int)auStack_19c + local_1c * 0xb + 4));
      if (cVar3 != '\x01') {
        uVar5 = LineFunc(0xe20e,
                         "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar5;
      }
      uVar1 = *(ushort *)((int)auStack_19c + local_1c * 0xb + -2);
      iVar4 = GetInvenTypeFromItemSpace((&uStack_19f)[local_1c * 0xb]);
      cVar3 = CUser::CheckItemLock(param_1,iVar4,(uint)uVar1);
      if (cVar3 != '\0') {
        CUser::SendCmdErrorPacket(param_1,0x13c,0xd5);
        return 0;
      }
      local_2d = true;
      uVar1 = *(ushort *)((int)auStack_19c + local_1c * 0xb + -2);
      iVar4 = GetInvenTypeFromItemSpace((&uStack_19f)[local_1c * 0xb]);
      CheckItemTradeLimitCountToMoveByUser(param_1,iVar4,(uint)uVar1,&local_2d);
      if (local_2d != true) {
        CUser::SendCmdErrorPacket(param_1,0x13c,0x72);
        return 0;
      }
      local_1c = local_1c + 1;
    }
    CUser::SendCmdErrorPacket(param_1,0x13c,0x11);
    return 0;
  }
  uVar5 = LineFunc(0xe1f3,
                   "virtual int Dispatcher_MultiMailBoxSend::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return uVar5;
}

```

