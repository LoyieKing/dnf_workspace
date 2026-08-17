# DB_BlackIPMonitorPartLoad

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084330d4 DB_BlackIPMonitorPartLoad::dispatch  [0x084330d4-0x843351d] ===
 84330d4:	55                   	push   %ebp
 84330d5:	89 e5                	mov    %esp,%ebp
 84330d7:	57                   	push   %edi
 84330d8:	56                   	push   %esi
 84330d9:	53                   	push   %ebx
 84330da:	81 ec fc 0c 00 00    	sub    $0xcfc,%esp
 84330e0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84330e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84330ec:	00 
 84330ed:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84330f4:	00 
 84330f5:	89 04 24             	mov    %eax,(%esp)
 84330f8:	e8 41 21 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84330fd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8433100:	c7 04 24 dc f7 41 09 	movl   $0x941f7dc,(%esp)
 8433107:	e8 24 b2 c4 ff       	call   807e330 <localtime@plt>
 843310c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 843310f:	0f b7 05 77 27 c5 08 	movzwl 0x8c52777,%eax
 8433116:	66 89 45 ac          	mov    %ax,-0x54(%ebp)
 843311a:	c7 45 ae 00 00 00 00 	movl   $0x0,-0x52(%ebp)
 8433121:	c7 45 b2 00 00 00 00 	movl   $0x0,-0x4e(%ebp)
 8433128:	c7 45 b6 00 00 00 00 	movl   $0x0,-0x4a(%ebp)
 843312f:	c7 45 ba 00 00 00 00 	movl   $0x0,-0x46(%ebp)
 8433136:	66 c7 45 be 00 00    	movw   $0x0,-0x42(%ebp)
 843313c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 843313f:	8b 18                	mov    (%eax),%ebx
 8433141:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8433144:	8b 48 04             	mov    0x4(%eax),%ecx
 8433147:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 843314a:	8b 50 08             	mov    0x8(%eax),%edx
 843314d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8433150:	8b 40 0c             	mov    0xc(%eax),%eax
 8433153:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8433156:	8b 76 10             	mov    0x10(%esi),%esi
 8433159:	8d 7e 01             	lea    0x1(%esi),%edi
 843315c:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 843315f:	8b 76 14             	mov    0x14(%esi),%esi
 8433162:	81 c6 6c 07 00 00    	add    $0x76c,%esi
 8433168:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 843316c:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8433170:	89 54 24 14          	mov    %edx,0x14(%esp)
 8433174:	89 44 24 10          	mov    %eax,0x10(%esp)
 8433178:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 843317c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8433180:	c7 44 24 04 e4 26 c5 	movl   $0x8c526e4,0x4(%esp)
 8433187:	08 
 8433188:	8d 45 ac             	lea    -0x54(%ebp),%eax
 843318b:	89 04 24             	mov    %eax,(%esp)
 843318e:	e8 ad b2 c4 ff       	call   807e440 <sprintf@plt>
 8433193:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8433196:	89 44 24 08          	mov    %eax,0x8(%esp)
 843319a:	c7 44 24 04 f8 26 c5 	movl   $0x8c526f8,0x4(%esp)
 84331a1:	08 
 84331a2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84331a5:	89 04 24             	mov    %eax,(%esp)
 84331a8:	e8 13 10 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84331ad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84331b4:	00 
 84331b5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84331b8:	89 04 24             	mov    %eax,(%esp)
 84331bb:	e8 66 11 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84331c0:	83 f0 01             	xor    $0x1,%eax
 84331c3:	84 c0                	test   %al,%al
 84331c5:	75 0f                	jne    84331d6 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x102>
 84331c7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84331ca:	89 04 24             	mov    %eax,(%esp)
 84331cd:	e8 9a f1 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84331d2:	85 c0                	test   %eax,%eax
 84331d4:	75 07                	jne    84331dd <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x109>
 84331d6:	b8 01 00 00 00       	mov    $0x1,%eax
 84331db:	eb 05                	jmp    84331e2 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x10e>
 84331dd:	b8 00 00 00 00       	mov    $0x0,%eax
 84331e2:	84 c0                	test   %al,%al
 84331e4:	74 0a                	je     84331f0 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x11c>
 84331e6:	b8 00 00 00 00       	mov    $0x0,%eax
 84331eb:	e9 23 03 00 00       	jmp    8433513 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x43f>
 84331f0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84331f3:	89 04 24             	mov    %eax,(%esp)
 84331f6:	e8 71 f1 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84331fb:	89 c3                	mov    %eax,%ebx
 84331fd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8433204:	00 
 8433205:	c7 44 24 08 c4 7a 00 	movl   $0x7ac4,0x8(%esp)
 843320c:	00 
 843320d:	c7 44 24 04 c0 c0 c5 	movl   $0x8c5c0c0,0x4(%esp)
 8433214:	08 
 8433215:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8433218:	89 04 24             	mov    %eax,(%esp)
 843321b:	e8 f8 c4 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8433220:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8433224:	c7 44 24 04 8c 26 c5 	movl   $0x8c5268c,0x4(%esp)
 843322b:	08 
 843322c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 843322f:	89 04 24             	mov    %eax,(%esp)
 8433232:	e8 51 c5 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8433237:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 843323e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8433245:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 8433249:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8433250:	e9 a0 02 00 00       	jmp    84334f5 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x421>
 8433255:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8433258:	89 04 24             	mov    %eax,(%esp)
 843325b:	e8 5c 12 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8433260:	83 f0 01             	xor    $0x1,%eax
 8433263:	84 c0                	test   %al,%al
 8433265:	74 0a                	je     8433271 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x19d>
 8433267:	b8 00 00 00 00       	mov    $0x0,%eax
 843326c:	e9 a2 02 00 00       	jmp    8433513 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x43f>
 8433271:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8433275:	75 1e                	jne    8433295 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x1c1>
 8433277:	c7 44 24 08 80 0c 00 	movl   $0xc80,0x8(%esp)
 843327e:	00 
 843327f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8433286:	00 
 8433287:	8d 85 24 f3 ff ff    	lea    -0xcdc(%ebp),%eax
 843328d:	89 04 24             	mov    %eax,(%esp)
 8433290:	e8 2b aa c4 ff       	call   807dcc0 <memset@plt>
 8433295:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8433298:	8d 85 24 f3 ff ff    	lea    -0xcdc(%ebp),%eax
 843329e:	c1 e2 05             	shl    $0x5,%edx
 84332a1:	01 d0                	add    %edx,%eax
 84332a3:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 84332aa:	00 
 84332ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 84332af:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84332b6:	00 
 84332b7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84332ba:	89 04 24             	mov    %eax,(%esp)
 84332bd:	e8 28 9b cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84332c2:	83 f0 01             	xor    $0x1,%eax
 84332c5:	84 c0                	test   %al,%al
 84332c7:	74 0a                	je     84332d3 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x1ff>
 84332c9:	b8 00 00 00 00       	mov    $0x0,%eax
 84332ce:	e9 40 02 00 00       	jmp    8433513 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x43f>
 84332d3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84332d6:	8d 85 24 f3 ff ff    	lea    -0xcdc(%ebp),%eax
 84332dc:	01 d2                	add    %edx,%edx
 84332de:	83 c2 01             	add    $0x1,%edx
 84332e1:	c1 e2 04             	shl    $0x4,%edx
 84332e4:	01 d0                	add    %edx,%eax
 84332e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84332ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84332f1:	00 
 84332f2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84332f5:	89 04 24             	mov    %eax,(%esp)
 84332f8:	e8 2f 36 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84332fd:	83 f0 01             	xor    $0x1,%eax
 8433300:	84 c0                	test   %al,%al
 8433302:	74 0a                	je     843330e <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x23a>
 8433304:	b8 00 00 00 00       	mov    $0x0,%eax
 8433309:	e9 05 02 00 00       	jmp    8433513 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x43f>
 843330e:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8433311:	8d 85 24 f3 ff ff    	lea    -0xcdc(%ebp),%eax
 8433317:	01 d2                	add    %edx,%edx
 8433319:	83 c2 01             	add    $0x1,%edx
 843331c:	c1 e2 04             	shl    $0x4,%edx
 843331f:	01 d0                	add    %edx,%eax
 8433321:	83 c0 04             	add    $0x4,%eax
 8433324:	89 44 24 08          	mov    %eax,0x8(%esp)
 8433328:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843332f:	00 
 8433330:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8433333:	89 04 24             	mov    %eax,(%esp)
 8433336:	e8 b7 ef ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843333b:	83 f0 01             	xor    $0x1,%eax
 843333e:	84 c0                	test   %al,%al
 8433340:	74 0a                	je     843334c <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x278>
 8433342:	b8 00 00 00 00       	mov    $0x0,%eax
 8433347:	e9 c7 01 00 00       	jmp    8433513 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x43f>
 843334c:	8b 55 dc             	mov    -0x24(%ebp),%edx
 843334f:	8d 85 24 f3 ff ff    	lea    -0xcdc(%ebp),%eax
 8433355:	01 d2                	add    %edx,%edx
 8433357:	83 c2 01             	add    $0x1,%edx
 843335a:	c1 e2 04             	shl    $0x4,%edx
 843335d:	01 d0                	add    %edx,%eax
 843335f:	83 c0 08             	add    $0x8,%eax
 8433362:	89 44 24 08          	mov    %eax,0x8(%esp)
 8433366:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843336d:	00 
 843336e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8433371:	89 04 24             	mov    %eax,(%esp)
 8433374:	e8 79 ef ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8433379:	83 f0 01             	xor    $0x1,%eax
 843337c:	84 c0                	test   %al,%al
 843337e:	74 0a                	je     843338a <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x2b6>
 8433380:	b8 00 00 00 00       	mov    $0x0,%eax
 8433385:	e9 89 01 00 00       	jmp    8433513 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x43f>
 843338a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 843338d:	8d 85 24 f3 ff ff    	lea    -0xcdc(%ebp),%eax
 8433393:	01 d2                	add    %edx,%edx
 8433395:	83 c2 01             	add    $0x1,%edx
 8433398:	c1 e2 04             	shl    $0x4,%edx
 843339b:	01 d0                	add    %edx,%eax
 843339d:	83 c0 0c             	add    $0xc,%eax
 84333a0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84333a4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84333ab:	00 
 84333ac:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84333af:	89 04 24             	mov    %eax,(%esp)
 84333b2:	e8 3b ef ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84333b7:	83 f0 01             	xor    $0x1,%eax
 84333ba:	84 c0                	test   %al,%al
 84333bc:	74 0a                	je     84333c8 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x2f4>
 84333be:	b8 00 00 00 00       	mov    $0x0,%eax
 84333c3:	e9 4b 01 00 00       	jmp    8433513 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x43f>
 84333c8:	83 7d dc 62          	cmpl   $0x62,-0x24(%ebp)
 84333cc:	77 21                	ja     84333ef <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x31b>
 84333ce:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84333d1:	89 04 24             	mov    %eax,(%esp)
 84333d4:	e8 93 ef ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84333d9:	83 e8 01             	sub    $0x1,%eax
 84333dc:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 84333df:	0f 97 c0             	seta   %al
 84333e2:	84 c0                	test   %al,%al
 84333e4:	74 09                	je     84333ef <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x31b>
 84333e6:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84333ea:	e9 02 01 00 00       	jmp    84334f1 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x41d>
 84333ef:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84333f4:	c7 44 24 08 e9 7a 00 	movl   $0x7ae9,0x8(%esp)
 84333fb:	00 
 84333fc:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8433403:	08 
 8433404:	89 04 24             	mov    %eax,(%esp)
 8433407:	e8 7a c6 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843340c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8433413:	00 
 8433414:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433418:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 843341b:	89 04 24             	mov    %eax,(%esp)
 843341e:	e8 03 58 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8433423:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8433426:	89 04 24             	mov    %eax,(%esp)
 8433429:	e8 18 58 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843342e:	c7 44 24 04 56 01 00 	movl   $0x156,0x4(%esp)
 8433435:	00 
 8433436:	89 04 24             	mov    %eax,(%esp)
 8433439:	e8 18 58 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843343e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8433441:	89 04 24             	mov    %eax,(%esp)
 8433444:	e8 fd 57 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433449:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8433450:	ff 
 8433451:	89 04 24             	mov    %eax,(%esp)
 8433454:	e8 fd 57 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433459:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 843345c:	89 04 24             	mov    %eax,(%esp)
 843345f:	e8 ea 57 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8433464:	89 04 24             	mov    %eax,(%esp)
 8433467:	e8 dc fb 01 00       	call   8453048 <_ZN12CStreamGuard11GetInBufferI21SIG_IP_MONITOR_PUNISHEEPT_v>
 843346c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843346f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8433472:	83 c0 01             	add    $0x1,%eax
 8433475:	89 c2                	mov    %eax,%edx
 8433477:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843347a:	89 10                	mov    %edx,(%eax)
 843347c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843347f:	8d 50 04             	lea    0x4(%eax),%edx
 8433482:	c7 44 24 08 80 0c 00 	movl   $0xc80,0x8(%esp)
 8433489:	00 
 843348a:	8d 85 24 f3 ff ff    	lea    -0xcdc(%ebp),%eax
 8433490:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433494:	89 14 24             	mov    %edx,(%esp)
 8433497:	e8 04 a4 c4 ff       	call   807d8a0 <memcpy@plt>
 843349c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843349f:	c6 80 84 0c 00 00 00 	movb   $0x0,0xc84(%eax)
 84334a6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84334ab:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 84334ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 84334b2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84334b9:	00 
 84334ba:	89 04 24             	mov    %eax,(%esp)
 84334bd:	e8 1c db 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84334c2:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84334c9:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84334cc:	89 04 24             	mov    %eax,(%esp)
 84334cf:	e8 fe 93 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84334d4:	eb 1b                	jmp    84334f1 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x41d>
 84334d6:	89 d3                	mov    %edx,%ebx
 84334d8:	89 c6                	mov    %eax,%esi
 84334da:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84334dd:	89 04 24             	mov    %eax,(%esp)
 84334e0:	e8 ed 93 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84334e5:	89 f0                	mov    %esi,%eax
 84334e7:	89 da                	mov    %ebx,%edx
 84334e9:	89 04 24             	mov    %eax,(%esp)
 84334ec:	e8 5f 02 6b 00       	call   8ae3750 <_Unwind_Resume>
 84334f1:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 84334f5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84334f8:	89 04 24             	mov    %eax,(%esp)
 84334fb:	e8 6c ee ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8433500:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8433503:	0f 97 c0             	seta   %al
 8433506:	84 c0                	test   %al,%al
 8433508:	0f 85 47 fd ff ff    	jne    8433255 <_ZN25DB_BlackIPMonitorPartLoad8dispatchEiiP6Stream+0x181>
 843350e:	b8 01 00 00 00       	mov    $0x1,%eax
 8433513:	81 c4 fc 0c 00 00    	add    $0xcfc,%esp
 8433519:	5b                   	pop    %ebx
 843351a:	5e                   	pop    %esi
 843351b:	5f                   	pop    %edi
 843351c:	5d                   	pop    %ebp
 843351d:	c3                   	ret

```

```c
// DB_BlackIPMonitorPartLoad::dispatch @ 0x84330d4

/* DB_BlackIPMonitorPartLoad::dispatch(int, int, Stream*) */

undefined4 DB_BlackIPMonitorPartLoad::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  uint uVar7;
  uint local_ce0 [800];
  CStreamGuard local_60 [8];
  undefined2 local_58;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined2 local_46;
  cMyTrace local_44 [16];
  MySQL *local_34;
  tm *local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_21;
  SIG_IP_MONITOR_PUNISH *local_20;
  
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_30 = localtime(&GlobalData::g_IPMonitorLastDBAccessTime);
  local_58 = DAT_08c52777;
  local_56 = 0;
  local_52 = 0;
  local_4e = 0;
  local_4a = 0;
  local_46 = 0;
  sprintf((char *)&local_58,"%d-%d-%d %d:%d:%d",local_30->tm_year + 0x76c,local_30->tm_mon + 1,
          local_30->tm_mday,local_30->tm_hour,local_30->tm_min,local_30->tm_sec);
  MySQL::set_query(local_34,
                   "seLect ip, type, m_id_cnt, unix_timestamp(start_time), unix_timestamp(end_time) from ip_monitor_punish where start_time > \'%s\'"
                   ,&local_58);
  cVar2 = MySQL::exec(local_34,true);
  if ((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(local_34), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = MySQL::get_n_rows(local_34);
    cMyTrace::cMyTrace(local_44,
                       "virtual bool DB_BlackIPMonitorPartLoad::dispatch(int, int, Stream*)",0x7ac4,
                       0);
    cMyTrace::operator()(local_44,"BLACKIP GET DB ROWS COUNT : %d",uVar4);
    local_28 = 0;
    local_21 = 0;
    local_2c = 0;
    while (uVar7 = MySQL::get_n_rows(local_34), local_2c < uVar7) {
      cVar2 = MySQL::fetch(local_34);
      if (cVar2 != '\x01') {
        return 0;
      }
      if (local_28 == 0) {
        memset(local_ce0,0,0xc80);
      }
      cVar2 = MySQL::get_str(local_34,0,(char *)(local_ce0 + local_28 * 8),0x10);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_34,1,(int *)(local_ce0 + (local_28 * 2 + 1) * 4));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_34,2,local_ce0 + (local_28 * 2 + 1) * 4 + 1);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_34,3,local_ce0 + (local_28 * 2 + 1) * 4 + 2);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_34,4,local_ce0 + (local_28 * 2 + 1) * 4 + 3);
      if (cVar2 != '\x01') {
        return 0;
      }
      if ((local_28 < 99) && (iVar3 = MySQL::get_n_rows(local_34), local_2c < iVar3 - 1U)) {
        local_28 = local_28 + 1;
      }
      else {
        pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7ae9);
        CStreamGuard::CStreamGuard(local_60,pSVar5,true);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_60);
                    /* try { // try from 08433439 to 084334c1 has its CatchHandler @ 084334d6 */
        CStreamGuard::operator<<(pCVar6,0x156);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_60);
        CStreamGuard::operator<<(pCVar6,-1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_60);
        local_20 = CStreamGuard::GetInBuffer<SIG_IP_MONITOR_PUNISH>(pCVar6);
        *(uint *)local_20 = local_28 + 1;
        memcpy(local_20 + 4,local_ce0,0xc80);
        local_20[0xc84] = (SIG_IP_MONITOR_PUNISH)0x0;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_60);
        local_28 = 0;
        CStreamGuard::~CStreamGuard(local_60);
      }
      local_2c = local_2c + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## makeRequest

```asm
// === 0843351e DB_BlackIPMonitorPartLoad::makeRequest  [0x0843351e-0x84335db] ===
 843351e:	55                   	push   %ebp
 843351f:	89 e5                	mov    %esp,%ebp
 8433521:	56                   	push   %esi
 8433522:	53                   	push   %ebx
 8433523:	83 ec 20             	sub    $0x20,%esp
 8433526:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843352b:	c7 44 24 08 3d 7b 00 	movl   $0x7b3d,0x8(%esp)
 8433532:	00 
 8433533:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843353a:	08 
 843353b:	89 04 24             	mov    %eax,(%esp)
 843353e:	e8 43 c5 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8433543:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843354a:	00 
 843354b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843354f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433552:	89 04 24             	mov    %eax,(%esp)
 8433555:	e8 cc 56 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843355a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843355d:	89 04 24             	mov    %eax,(%esp)
 8433560:	e8 e1 56 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433565:	c7 44 24 04 55 01 00 	movl   $0x155,0x4(%esp)
 843356c:	00 
 843356d:	89 04 24             	mov    %eax,(%esp)
 8433570:	e8 e1 56 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433575:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8433578:	89 04 24             	mov    %eax,(%esp)
 843357b:	e8 c6 56 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8433580:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8433587:	ff 
 8433588:	89 04 24             	mov    %eax,(%esp)
 843358b:	e8 c6 56 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8433590:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8433595:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8433598:	89 54 24 08          	mov    %edx,0x8(%esp)
 843359c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84335a3:	00 
 84335a4:	89 04 24             	mov    %eax,(%esp)
 84335a7:	e8 32 da 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84335ac:	eb 1b                	jmp    84335c9 <_ZN25DB_BlackIPMonitorPartLoad11makeRequestEv+0xab>
 84335ae:	89 d3                	mov    %edx,%ebx
 84335b0:	89 c6                	mov    %eax,%esi
 84335b2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84335b5:	89 04 24             	mov    %eax,(%esp)
 84335b8:	e8 15 93 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84335bd:	89 f0                	mov    %esi,%eax
 84335bf:	89 da                	mov    %ebx,%edx
 84335c1:	89 04 24             	mov    %eax,(%esp)
 84335c4:	e8 87 01 6b 00       	call   8ae3750 <_Unwind_Resume>
 84335c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84335cc:	89 04 24             	mov    %eax,(%esp)
 84335cf:	e8 fe 92 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84335d4:	83 c4 20             	add    $0x20,%esp
 84335d7:	5b                   	pop    %ebx
 84335d8:	5e                   	pop    %esi
 84335d9:	5d                   	pop    %ebp
 84335da:	c3                   	ret
 84335db:	90                   	nop

```

```c
// DB_BlackIPMonitorPartLoad::makeRequest @ 0x843351e

/* DB_BlackIPMonitorPartLoad::makeRequest() */

void DB_BlackIPMonitorPartLoad::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7b3d);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08433570 to 084335ab has its CatchHandler @ 084335ae */
  CStreamGuard::operator<<(pCVar2,0x155);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

