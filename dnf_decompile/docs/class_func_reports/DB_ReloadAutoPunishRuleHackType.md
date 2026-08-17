# DB_ReloadAutoPunishRuleHackType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842d16c DB_ReloadAutoPunishRuleHackType::dispatch  [0x0842d16c-0x842d60f] ===
 842d16c:	55                   	push   %ebp
 842d16d:	89 e5                	mov    %esp,%ebp
 842d16f:	56                   	push   %esi
 842d170:	53                   	push   %ebx
 842d171:	83 ec 50             	sub    $0x50,%esp
 842d174:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842d179:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842d180:	00 
 842d181:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842d188:	00 
 842d189:	89 04 24             	mov    %eax,(%esp)
 842d18c:	e8 ad 80 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842d191:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842d194:	c7 44 24 04 d4 06 c5 	movl   $0x8c506d4,0x4(%esp)
 842d19b:	08 
 842d19c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d19f:	89 04 24             	mov    %eax,(%esp)
 842d1a2:	e8 19 70 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842d1a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842d1ae:	00 
 842d1af:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d1b2:	89 04 24             	mov    %eax,(%esp)
 842d1b5:	e8 6c 71 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842d1ba:	83 f0 01             	xor    $0x1,%eax
 842d1bd:	84 c0                	test   %al,%al
 842d1bf:	74 0a                	je     842d1cb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x5f>
 842d1c1:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d1c6:	e9 3b 04 00 00       	jmp    842d606 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x49a>
 842d1cb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842d1d0:	c7 44 24 08 94 70 00 	movl   $0x7094,0x8(%esp)
 842d1d7:	00 
 842d1d8:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842d1df:	08 
 842d1e0:	89 04 24             	mov    %eax,(%esp)
 842d1e3:	e8 9e 28 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842d1e8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842d1ef:	00 
 842d1f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 842d1f4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842d1f7:	89 04 24             	mov    %eax,(%esp)
 842d1fa:	e8 27 ba c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842d1ff:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842d202:	89 04 24             	mov    %eax,(%esp)
 842d205:	e8 3c ba c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842d20a:	c7 44 24 04 09 01 00 	movl   $0x109,0x4(%esp)
 842d211:	00 
 842d212:	89 04 24             	mov    %eax,(%esp)
 842d215:	e8 3c ba c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842d21a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842d21d:	89 04 24             	mov    %eax,(%esp)
 842d220:	e8 21 ba c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842d225:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842d22c:	ff 
 842d22d:	89 04 24             	mov    %eax,(%esp)
 842d230:	e8 21 ba c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842d235:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842d238:	89 04 24             	mov    %eax,(%esp)
 842d23b:	e8 0e ba c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842d240:	89 04 24             	mov    %eax,(%esp)
 842d243:	e8 94 55 02 00       	call   84527dc <_ZN12CStreamGuard11GetInBufferI30SIG_AUTO_PUNISH_RULE_HACK_TYPEEEPT_v>
 842d248:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842d24b:	c7 44 24 08 20 27 00 	movl   $0x2720,0x8(%esp)
 842d252:	00 
 842d253:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842d25a:	00 
 842d25b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d25e:	89 04 24             	mov    %eax,(%esp)
 842d261:	e8 5a 0a c5 ff       	call   807dcc0 <memset@plt>
 842d266:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 842d26d:	e9 14 03 00 00       	jmp    842d586 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x41a>
 842d272:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d275:	89 04 24             	mov    %eax,(%esp)
 842d278:	e8 3f 72 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842d27d:	83 f0 01             	xor    $0x1,%eax
 842d280:	84 c0                	test   %al,%al
 842d282:	74 0a                	je     842d28e <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x122>
 842d284:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d289:	e9 6d 03 00 00       	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d28e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 842d295:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 842d29c:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842d2a3:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 842d2aa:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 842d2b1:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 842d2b8:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 842d2bf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 842d2c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d2c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842d2cd:	00 
 842d2ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d2d1:	89 04 24             	mov    %eax,(%esp)
 842d2d4:	e8 19 50 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842d2d9:	83 f0 01             	xor    $0x1,%eax
 842d2dc:	84 c0                	test   %al,%al
 842d2de:	74 0a                	je     842d2ea <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x17e>
 842d2e0:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d2e5:	e9 11 03 00 00       	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d2ea:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842d2ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d2f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842d2f8:	00 
 842d2f9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d2fc:	89 04 24             	mov    %eax,(%esp)
 842d2ff:	e8 ee 4f cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842d304:	83 f0 01             	xor    $0x1,%eax
 842d307:	84 c0                	test   %al,%al
 842d309:	74 0a                	je     842d315 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x1a9>
 842d30b:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d310:	e9 e6 02 00 00       	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d315:	8d 45 c0             	lea    -0x40(%ebp),%eax
 842d318:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d31c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842d323:	00 
 842d324:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d327:	89 04 24             	mov    %eax,(%esp)
 842d32a:	e8 99 81 d4 ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 842d32f:	83 f0 01             	xor    $0x1,%eax
 842d332:	84 c0                	test   %al,%al
 842d334:	74 0a                	je     842d340 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x1d4>
 842d336:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d33b:	e9 bb 02 00 00       	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d340:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842d343:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d347:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 842d34e:	00 
 842d34f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d352:	89 04 24             	mov    %eax,(%esp)
 842d355:	e8 98 4f cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842d35a:	83 f0 01             	xor    $0x1,%eax
 842d35d:	84 c0                	test   %al,%al
 842d35f:	74 0a                	je     842d36b <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x1ff>
 842d361:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d366:	e9 90 02 00 00       	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d36b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842d36e:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d372:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842d379:	00 
 842d37a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d37d:	89 04 24             	mov    %eax,(%esp)
 842d380:	e8 6d 4f cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842d385:	83 f0 01             	xor    $0x1,%eax
 842d388:	84 c0                	test   %al,%al
 842d38a:	74 0a                	je     842d396 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x22a>
 842d38c:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d391:	e9 65 02 00 00       	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d396:	8d 45 c8             	lea    -0x38(%ebp),%eax
 842d399:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d39d:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 842d3a4:	00 
 842d3a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d3a8:	89 04 24             	mov    %eax,(%esp)
 842d3ab:	e8 42 4f cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842d3b0:	83 f0 01             	xor    $0x1,%eax
 842d3b3:	84 c0                	test   %al,%al
 842d3b5:	74 0a                	je     842d3c1 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x255>
 842d3b7:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d3bc:	e9 3a 02 00 00       	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d3c1:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 842d3c8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 842d3cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d3cf:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842d3d6:	00 
 842d3d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d3da:	89 04 24             	mov    %eax,(%esp)
 842d3dd:	e8 10 4f cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842d3e2:	83 f0 01             	xor    $0x1,%eax
 842d3e5:	84 c0                	test   %al,%al
 842d3e7:	74 0a                	je     842d3f3 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x287>
 842d3e9:	bb 00 00 00 00       	mov    $0x0,%ebx
 842d3ee:	e9 08 02 00 00       	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d3f3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842d3f6:	85 c0                	test   %eax,%eax
 842d3f8:	75 1c                	jne    842d416 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x2aa>
 842d3fa:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 842d3fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d400:	89 10                	mov    %edx,(%eax)
 842d402:	8b 45 c0             	mov    -0x40(%ebp),%eax
 842d405:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 842d408:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 842d40b:	89 41 04             	mov    %eax,0x4(%ecx)
 842d40e:	89 51 08             	mov    %edx,0x8(%ecx)
 842d411:	e9 6c 01 00 00       	jmp    842d582 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x416>
 842d416:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842d419:	83 f8 64             	cmp    $0x64,%eax
 842d41c:	0f 86 56 01 00 00    	jbe    842d578 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x40c>
 842d422:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842d425:	3d a0 0f 00 00       	cmp    $0xfa0,%eax
 842d42a:	0f 87 4b 01 00 00    	ja     842d57b <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x40f>
 842d430:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842d433:	85 c0                	test   %eax,%eax
 842d435:	74 1a                	je     842d451 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x2e5>
 842d437:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842d43a:	83 f8 64             	cmp    $0x64,%eax
 842d43d:	0f 86 3b 01 00 00    	jbe    842d57e <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x412>
 842d443:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842d446:	3d a0 0f 00 00       	cmp    $0xfa0,%eax
 842d44b:	0f 87 30 01 00 00    	ja     842d581 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x415>
 842d451:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842d454:	85 c0                	test   %eax,%eax
 842d456:	75 07                	jne    842d45f <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x2f3>
 842d458:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 842d45f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d462:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 842d466:	0f b7 d0             	movzwl %ax,%edx
 842d469:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842d46c:	89 c1                	mov    %eax,%ecx
 842d46e:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 842d471:	89 d0                	mov    %edx,%eax
 842d473:	c1 e0 02             	shl    $0x2,%eax
 842d476:	01 d0                	add    %edx,%eax
 842d478:	c1 e0 02             	shl    $0x2,%eax
 842d47b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 842d47e:	83 c0 10             	add    $0x10,%eax
 842d481:	66 89 08             	mov    %cx,(%eax)
 842d484:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d487:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 842d48b:	0f b7 d0             	movzwl %ax,%edx
 842d48e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d491:	89 c1                	mov    %eax,%ecx
 842d493:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 842d496:	89 d0                	mov    %edx,%eax
 842d498:	c1 e0 02             	shl    $0x2,%eax
 842d49b:	01 d0                	add    %edx,%eax
 842d49d:	c1 e0 02             	shl    $0x2,%eax
 842d4a0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 842d4a3:	83 c0 10             	add    $0x10,%eax
 842d4a6:	66 89 48 02          	mov    %cx,0x2(%eax)
 842d4aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d4ad:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 842d4b1:	0f b7 d0             	movzwl %ax,%edx
 842d4b4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842d4b7:	89 c1                	mov    %eax,%ecx
 842d4b9:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 842d4bc:	89 d0                	mov    %edx,%eax
 842d4be:	c1 e0 02             	shl    $0x2,%eax
 842d4c1:	01 d0                	add    %edx,%eax
 842d4c3:	c1 e0 02             	shl    $0x2,%eax
 842d4c6:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 842d4c9:	83 c0 10             	add    $0x10,%eax
 842d4cc:	66 89 48 04          	mov    %cx,0x4(%eax)
 842d4d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d4d3:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 842d4d7:	0f b7 d0             	movzwl %ax,%edx
 842d4da:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842d4dd:	89 c1                	mov    %eax,%ecx
 842d4df:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 842d4e2:	89 d0                	mov    %edx,%eax
 842d4e4:	c1 e0 02             	shl    $0x2,%eax
 842d4e7:	01 d0                	add    %edx,%eax
 842d4e9:	c1 e0 02             	shl    $0x2,%eax
 842d4ec:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 842d4ef:	83 c0 10             	add    $0x10,%eax
 842d4f2:	66 89 48 06          	mov    %cx,0x6(%eax)
 842d4f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d4f9:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 842d4fd:	0f b7 d0             	movzwl %ax,%edx
 842d500:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 842d503:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 842d506:	89 d0                	mov    %edx,%eax
 842d508:	c1 e0 02             	shl    $0x2,%eax
 842d50b:	01 d0                	add    %edx,%eax
 842d50d:	c1 e0 02             	shl    $0x2,%eax
 842d510:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 842d513:	83 c0 1c             	add    $0x1c,%eax
 842d516:	89 08                	mov    %ecx,(%eax)
 842d518:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d51b:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 842d51f:	0f b7 d0             	movzwl %ax,%edx
 842d522:	8b 45 c8             	mov    -0x38(%ebp),%eax
 842d525:	89 c1                	mov    %eax,%ecx
 842d527:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 842d52a:	89 d0                	mov    %edx,%eax
 842d52c:	c1 e0 02             	shl    $0x2,%eax
 842d52f:	01 d0                	add    %edx,%eax
 842d531:	c1 e0 02             	shl    $0x2,%eax
 842d534:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 842d537:	83 c0 10             	add    $0x10,%eax
 842d53a:	66 89 48 08          	mov    %cx,0x8(%eax)
 842d53e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d541:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 842d545:	0f b7 c8             	movzwl %ax,%ecx
 842d548:	8b 45 c0             	mov    -0x40(%ebp),%eax
 842d54b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 842d54e:	89 c2                	mov    %eax,%edx
 842d550:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 842d553:	89 c8                	mov    %ecx,%eax
 842d555:	c1 e0 02             	shl    $0x2,%eax
 842d558:	01 c8                	add    %ecx,%eax
 842d55a:	c1 e0 02             	shl    $0x2,%eax
 842d55d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 842d560:	83 c0 20             	add    $0x20,%eax
 842d563:	89 10                	mov    %edx,(%eax)
 842d565:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d568:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 842d56c:	8d 50 01             	lea    0x1(%eax),%edx
 842d56f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842d572:	66 89 50 0c          	mov    %dx,0xc(%eax)
 842d576:	eb 0a                	jmp    842d582 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x416>
 842d578:	90                   	nop
 842d579:	eb 07                	jmp    842d582 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x416>
 842d57b:	90                   	nop
 842d57c:	eb 04                	jmp    842d582 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x416>
 842d57e:	90                   	nop
 842d57f:	eb 01                	jmp    842d582 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x416>
 842d581:	90                   	nop
 842d582:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 842d586:	c7 45 e4 f4 01 00 00 	movl   $0x1f4,-0x1c(%ebp)
 842d58d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842d590:	89 04 24             	mov    %eax,(%esp)
 842d593:	e8 d4 4d cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842d598:	89 45 e8             	mov    %eax,-0x18(%ebp)
 842d59b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842d59e:	89 44 24 04          	mov    %eax,0x4(%esp)
 842d5a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842d5a5:	89 04 24             	mov    %eax,(%esp)
 842d5a8:	e8 e4 8a e0 ff       	call   8236091 <_ZSt3minIjERKT_S2_S2_>
 842d5ad:	8b 00                	mov    (%eax),%eax
 842d5af:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 842d5b2:	0f 97 c0             	seta   %al
 842d5b5:	84 c0                	test   %al,%al
 842d5b7:	0f 85 b5 fc ff ff    	jne    842d272 <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x106>
 842d5bd:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842d5c2:	8d 55 dc             	lea    -0x24(%ebp),%edx
 842d5c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 842d5c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842d5d0:	00 
 842d5d1:	89 04 24             	mov    %eax,(%esp)
 842d5d4:	e8 05 3a 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842d5d9:	bb 01 00 00 00       	mov    $0x1,%ebx
 842d5de:	eb 1b                	jmp    842d5fb <_ZN31DB_ReloadAutoPunishRuleHackType8dispatchEiiP6Stream+0x48f>
 842d5e0:	89 d3                	mov    %edx,%ebx
 842d5e2:	89 c6                	mov    %eax,%esi
 842d5e4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842d5e7:	89 04 24             	mov    %eax,(%esp)
 842d5ea:	e8 e3 f2 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842d5ef:	89 f0                	mov    %esi,%eax
 842d5f1:	89 da                	mov    %ebx,%edx
 842d5f3:	89 04 24             	mov    %eax,(%esp)
 842d5f6:	e8 55 61 6b 00       	call   8ae3750 <_Unwind_Resume>
 842d5fb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842d5fe:	89 04 24             	mov    %eax,(%esp)
 842d601:	e8 cc f2 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842d606:	89 d8                	mov    %ebx,%eax
 842d608:	83 c4 50             	add    $0x50,%esp
 842d60b:	5b                   	pop    %ebx
 842d60c:	5e                   	pop    %esi
 842d60d:	5d                   	pop    %ebp
 842d60e:	c3                   	ret
 842d60f:	90                   	nop

```

```c
// DB_ReloadAutoPunishRuleHackType::dispatch @ 0x842d16c

/* DB_ReloadAutoPunishRuleHackType::dispatch(int, int, Stream*) */

undefined4 DB_ReloadAutoPunishRuleHackType::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c [5];
  CStreamGuard local_28 [8];
  uint local_20;
  uint local_1c;
  MySQL *local_18;
  SIG_AUTO_PUNISH_RULE_HACK_TYPE *local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_18,
                   "seLect hack_type,cnt,etc,hack_sub_type,hack_sub_cnt,apply_flag, ip_cnt from auto_punish_hack_info where apply_flag > 0"
                  );
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7094);
    CStreamGuard::CStreamGuard(local_28,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0842d215 to 0842d5d8 has its CatchHandler @ 0842d5e0 */
    CStreamGuard::operator<<(pCVar3,0x109);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_14 = CStreamGuard::GetInBuffer<SIG_AUTO_PUNISH_RULE_HACK_TYPE>(pCVar3);
    memset(local_14,0,0x2720);
    local_10 = 0;
    while( true ) {
      local_20 = 500;
      local_1c = MySQL::get_n_rows(local_18);
      puVar4 = std::min<unsigned_int>(&local_1c,&local_20);
      if (*puVar4 <= local_10) break;
      cVar1 = MySQL::fetch(local_18);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      local_3c[4] = 0;
      local_3c[3] = 0;
      local_3c[2] = 0;
      local_3c[1] = 0;
      local_3c[0] = 0;
      local_44 = 0;
      local_40 = 0;
      cVar1 = MySQL::get_uint(local_18,0,local_3c + 4);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_uint(local_18,1,local_3c + 3);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_ulonglong(local_18,2,(ulonglong *)&local_44);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_uint(local_18,3,local_3c + 2);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_uint(local_18,4,local_3c + 1);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      cVar1 = MySQL::get_uint(local_18,5,local_3c);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      local_48 = 0;
      cVar1 = MySQL::get_uint(local_18,6,&local_48);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0842d5fb;
      }
      if (local_3c[4] == 0) {
        *(uint *)local_14 = local_3c[3];
        *(undefined4 *)(local_14 + 4) = local_44;
        *(undefined4 *)(local_14 + 8) = local_40;
      }
      else if (((100 < local_3c[4]) && (local_3c[4] < 0xfa1)) &&
              ((local_3c[2] == 0 || ((100 < local_3c[2] && (local_3c[2] < 0xfa1)))))) {
        if (local_3c[2] == 0) {
          local_3c[1] = 0;
        }
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x10) = (short)local_3c[4];
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x12) = (short)local_3c[3];
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x14) = (short)local_3c[2];
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x16) = (short)local_3c[1];
        *(uint *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x1c) = local_48;
        *(short *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x18) = (short)local_3c[0];
        *(undefined4 *)(local_14 + (uint)*(ushort *)(local_14 + 0xc) * 0x14 + 0x20) = local_44;
        *(short *)(local_14 + 0xc) = *(short *)(local_14 + 0xc) + 1;
      }
      local_10 = local_10 + 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_28);
    uVar5 = 1;
LAB_0842d5fb:
    CStreamGuard::~CStreamGuard(local_28);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## makeRequest

```asm
// === 0842d610 DB_ReloadAutoPunishRuleHackType::makeRequest  [0x0842d610-0x842d6cd] ===
 842d610:	55                   	push   %ebp
 842d611:	89 e5                	mov    %esp,%ebp
 842d613:	56                   	push   %esi
 842d614:	53                   	push   %ebx
 842d615:	83 ec 20             	sub    $0x20,%esp
 842d618:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842d61d:	c7 44 24 08 e2 70 00 	movl   $0x70e2,0x8(%esp)
 842d624:	00 
 842d625:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842d62c:	08 
 842d62d:	89 04 24             	mov    %eax,(%esp)
 842d630:	e8 51 24 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842d635:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842d63c:	00 
 842d63d:	89 44 24 04          	mov    %eax,0x4(%esp)
 842d641:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d644:	89 04 24             	mov    %eax,(%esp)
 842d647:	e8 da b5 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842d64c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d64f:	89 04 24             	mov    %eax,(%esp)
 842d652:	e8 ef b5 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842d657:	c7 44 24 04 09 01 00 	movl   $0x109,0x4(%esp)
 842d65e:	00 
 842d65f:	89 04 24             	mov    %eax,(%esp)
 842d662:	e8 ef b5 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842d667:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d66a:	89 04 24             	mov    %eax,(%esp)
 842d66d:	e8 d4 b5 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842d672:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842d679:	ff 
 842d67a:	89 04 24             	mov    %eax,(%esp)
 842d67d:	e8 d4 b5 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842d682:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842d687:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842d68a:	89 54 24 08          	mov    %edx,0x8(%esp)
 842d68e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842d695:	00 
 842d696:	89 04 24             	mov    %eax,(%esp)
 842d699:	e8 40 39 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842d69e:	eb 1b                	jmp    842d6bb <_ZN31DB_ReloadAutoPunishRuleHackType11makeRequestEv+0xab>
 842d6a0:	89 d3                	mov    %edx,%ebx
 842d6a2:	89 c6                	mov    %eax,%esi
 842d6a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d6a7:	89 04 24             	mov    %eax,(%esp)
 842d6aa:	e8 23 f2 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842d6af:	89 f0                	mov    %esi,%eax
 842d6b1:	89 da                	mov    %ebx,%edx
 842d6b3:	89 04 24             	mov    %eax,(%esp)
 842d6b6:	e8 95 60 6b 00       	call   8ae3750 <_Unwind_Resume>
 842d6bb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842d6be:	89 04 24             	mov    %eax,(%esp)
 842d6c1:	e8 0c f2 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842d6c6:	83 c4 20             	add    $0x20,%esp
 842d6c9:	5b                   	pop    %ebx
 842d6ca:	5e                   	pop    %esi
 842d6cb:	5d                   	pop    %ebp
 842d6cc:	c3                   	ret
 842d6cd:	90                   	nop

```

```c
// DB_ReloadAutoPunishRuleHackType::makeRequest @ 0x842d610

/* DB_ReloadAutoPunishRuleHackType::makeRequest() */

void DB_ReloadAutoPunishRuleHackType::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x70e2);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842d662 to 0842d69d has its CatchHandler @ 0842d6a0 */
  CStreamGuard::operator<<(pCVar2,0x109);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

