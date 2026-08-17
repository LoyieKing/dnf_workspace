# Dispatcher_SDC_ActiveStatus_Damage_Check

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ea16e Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig  [0x081ea16e-0x81ea621] ===
 81ea16e:	55                   	push   %ebp
 81ea16f:	89 e5                	mov    %esp,%ebp
 81ea171:	57                   	push   %edi
 81ea172:	56                   	push   %esi
 81ea173:	53                   	push   %ebx
 81ea174:	81 ec 7c 04 00 00    	sub    $0x47c,%esp
 81ea17a:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 81ea181:	c6 45 ab 00          	movb   $0x0,-0x55(%ebp)
 81ea185:	8d 45 ab             	lea    -0x55(%ebp),%eax
 81ea188:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea18c:	8b 45 10             	mov    0x10(%ebp),%eax
 81ea18f:	89 04 24             	mov    %eax,(%esp)
 81ea192:	e8 d9 2d 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81ea197:	83 f0 01             	xor    $0x1,%eax
 81ea19a:	84 c0                	test   %al,%al
 81ea19c:	74 29                	je     81ea1c7 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x59>
 81ea19e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea1a5:	00 
 81ea1a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea1ad:	00 
 81ea1ae:	c7 44 24 04 a0 07 bd 	movl   $0x8bd07a0,0x4(%esp)
 81ea1b5:	08 
 81ea1b6:	c7 04 24 36 6b 00 00 	movl   $0x6b36,(%esp)
 81ea1bd:	e8 15 67 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ea1c2:	e9 4f 04 00 00       	jmp    81ea616 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x4a8>
 81ea1c7:	c7 45 c4 f4 01 00 00 	movl   $0x1f4,-0x3c(%ebp)
 81ea1ce:	c7 45 c8 f4 01 00 00 	movl   $0x1f4,-0x38(%ebp)
 81ea1d5:	c7 45 a4 f4 01 00 00 	movl   $0x1f4,-0x5c(%ebp)
 81ea1dc:	c7 45 cc f4 01 00 00 	movl   $0x1f4,-0x34(%ebp)
 81ea1e3:	8d 95 a3 fd ff ff    	lea    -0x25d(%ebp),%edx
 81ea1e9:	bb f4 01 00 00       	mov    $0x1f4,%ebx
 81ea1ee:	b8 00 00 00 00       	mov    $0x0,%eax
 81ea1f3:	89 d1                	mov    %edx,%ecx
 81ea1f5:	83 e1 01             	and    $0x1,%ecx
 81ea1f8:	85 c9                	test   %ecx,%ecx
 81ea1fa:	74 08                	je     81ea204 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x96>
 81ea1fc:	88 02                	mov    %al,(%edx)
 81ea1fe:	83 c2 01             	add    $0x1,%edx
 81ea201:	83 eb 01             	sub    $0x1,%ebx
 81ea204:	89 d1                	mov    %edx,%ecx
 81ea206:	83 e1 02             	and    $0x2,%ecx
 81ea209:	85 c9                	test   %ecx,%ecx
 81ea20b:	74 09                	je     81ea216 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0xa8>
 81ea20d:	66 89 02             	mov    %ax,(%edx)
 81ea210:	83 c2 02             	add    $0x2,%edx
 81ea213:	83 eb 02             	sub    $0x2,%ebx
 81ea216:	89 d9                	mov    %ebx,%ecx
 81ea218:	c1 e9 02             	shr    $0x2,%ecx
 81ea21b:	89 d7                	mov    %edx,%edi
 81ea21d:	f3 ab                	rep stos %eax,%es:(%edi)
 81ea21f:	89 fa                	mov    %edi,%edx
 81ea221:	89 d9                	mov    %ebx,%ecx
 81ea223:	83 e1 02             	and    $0x2,%ecx
 81ea226:	85 c9                	test   %ecx,%ecx
 81ea228:	74 06                	je     81ea230 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0xc2>
 81ea22a:	66 89 02             	mov    %ax,(%edx)
 81ea22d:	83 c2 02             	add    $0x2,%edx
 81ea230:	89 d9                	mov    %ebx,%ecx
 81ea232:	83 e1 01             	and    $0x1,%ecx
 81ea235:	85 c9                	test   %ecx,%ecx
 81ea237:	74 05                	je     81ea23e <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0xd0>
 81ea239:	88 02                	mov    %al,(%edx)
 81ea23b:	83 c2 01             	add    $0x1,%edx
 81ea23e:	8d 95 af fb ff ff    	lea    -0x451(%ebp),%edx
 81ea244:	bb f4 01 00 00       	mov    $0x1f4,%ebx
 81ea249:	b8 00 00 00 00       	mov    $0x0,%eax
 81ea24e:	89 d1                	mov    %edx,%ecx
 81ea250:	83 e1 01             	and    $0x1,%ecx
 81ea253:	85 c9                	test   %ecx,%ecx
 81ea255:	74 08                	je     81ea25f <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0xf1>
 81ea257:	88 02                	mov    %al,(%edx)
 81ea259:	83 c2 01             	add    $0x1,%edx
 81ea25c:	83 eb 01             	sub    $0x1,%ebx
 81ea25f:	89 d1                	mov    %edx,%ecx
 81ea261:	83 e1 02             	and    $0x2,%ecx
 81ea264:	85 c9                	test   %ecx,%ecx
 81ea266:	74 09                	je     81ea271 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x103>
 81ea268:	66 89 02             	mov    %ax,(%edx)
 81ea26b:	83 c2 02             	add    $0x2,%edx
 81ea26e:	83 eb 02             	sub    $0x2,%ebx
 81ea271:	89 d9                	mov    %ebx,%ecx
 81ea273:	c1 e9 02             	shr    $0x2,%ecx
 81ea276:	89 d7                	mov    %edx,%edi
 81ea278:	f3 ab                	rep stos %eax,%es:(%edi)
 81ea27a:	89 fa                	mov    %edi,%edx
 81ea27c:	89 d9                	mov    %ebx,%ecx
 81ea27e:	83 e1 02             	and    $0x2,%ecx
 81ea281:	85 c9                	test   %ecx,%ecx
 81ea283:	74 06                	je     81ea28b <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x11d>
 81ea285:	66 89 02             	mov    %ax,(%edx)
 81ea288:	83 c2 02             	add    $0x2,%edx
 81ea28b:	89 d9                	mov    %ebx,%ecx
 81ea28d:	83 e1 01             	and    $0x1,%ecx
 81ea290:	85 c9                	test   %ecx,%ecx
 81ea292:	74 05                	je     81ea299 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x12b>
 81ea294:	88 02                	mov    %al,(%edx)
 81ea296:	83 c2 01             	add    $0x1,%edx
 81ea299:	8d 85 af fb ff ff    	lea    -0x451(%ebp),%eax
 81ea29f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81ea2a2:	c6 45 c3 00          	movb   $0x0,-0x3d(%ebp)
 81ea2a6:	e9 54 03 00 00       	jmp    81ea5ff <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x491>
 81ea2ab:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 81ea2b2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81ea2b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea2b9:	8b 45 10             	mov    0x10(%ebp),%eax
 81ea2bc:	89 04 24             	mov    %eax,(%esp)
 81ea2bf:	e8 2c 2e 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81ea2c4:	83 f0 01             	xor    $0x1,%eax
 81ea2c7:	84 c0                	test   %al,%al
 81ea2c9:	74 29                	je     81ea2f4 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x186>
 81ea2cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea2d2:	00 
 81ea2d3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea2da:	00 
 81ea2db:	c7 44 24 04 a0 07 bd 	movl   $0x8bd07a0,0x4(%esp)
 81ea2e2:	08 
 81ea2e3:	c7 04 24 4a 6b 00 00 	movl   $0x6b4a,(%esp)
 81ea2ea:	e8 e8 65 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ea2ef:	e9 22 03 00 00       	jmp    81ea616 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x4a8>
 81ea2f4:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81ea2f7:	3d f4 01 00 00       	cmp    $0x1f4,%eax
 81ea2fc:	7e 29                	jle    81ea327 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x1b9>
 81ea2fe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea305:	00 
 81ea306:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea30d:	00 
 81ea30e:	c7 44 24 04 a0 07 bd 	movl   $0x8bd07a0,0x4(%esp)
 81ea315:	08 
 81ea316:	c7 04 24 4d 6b 00 00 	movl   $0x6b4d,(%esp)
 81ea31d:	e8 b5 65 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ea322:	e9 ef 02 00 00       	jmp    81ea616 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x4a8>
 81ea327:	8b 55 a0             	mov    -0x60(%ebp),%edx
 81ea32a:	8d 85 a3 fd ff ff    	lea    -0x25d(%ebp),%eax
 81ea330:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ea334:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea338:	8b 45 10             	mov    0x10(%ebp),%eax
 81ea33b:	89 04 24             	mov    %eax,(%esp)
 81ea33e:	e8 6f 30 3a 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81ea343:	83 f0 01             	xor    $0x1,%eax
 81ea346:	84 c0                	test   %al,%al
 81ea348:	74 29                	je     81ea373 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x205>
 81ea34a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea351:	00 
 81ea352:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea359:	00 
 81ea35a:	c7 44 24 04 a0 07 bd 	movl   $0x8bd07a0,0x4(%esp)
 81ea361:	08 
 81ea362:	c7 04 24 50 6b 00 00 	movl   $0x6b50,(%esp)
 81ea369:	e8 69 65 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ea36e:	e9 a3 02 00 00       	jmp    81ea616 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x4a8>
 81ea373:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81ea376:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81ea379:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81ea37c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ea380:	8d 85 a3 fd ff ff    	lea    -0x25d(%ebp),%eax
 81ea386:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ea38a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ea38d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea391:	8d 85 af fb ff ff    	lea    -0x451(%ebp),%eax
 81ea397:	89 04 24             	mov    %eax,(%esp)
 81ea39a:	e8 41 b9 58 00       	call   8775ce0 <uncompress>
 81ea39f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81ea3a2:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81ea3a6:	74 29                	je     81ea3d1 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x263>
 81ea3a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea3af:	00 
 81ea3b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea3b7:	00 
 81ea3b8:	c7 44 24 04 a0 07 bd 	movl   $0x8bd07a0,0x4(%esp)
 81ea3bf:	08 
 81ea3c0:	c7 04 24 59 6b 00 00 	movl   $0x6b59,(%esp)
 81ea3c7:	e8 0b 65 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ea3cc:	e9 45 02 00 00       	jmp    81ea616 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x4a8>
 81ea3d1:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 81ea3d8:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 81ea3df:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea3e2:	8b 40 03             	mov    0x3(%eax),%eax
 81ea3e5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81ea3e8:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea3eb:	8b 40 07             	mov    0x7(%eax),%eax
 81ea3ee:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81ea3f1:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81ea3f8:	8d 45 97             	lea    -0x69(%ebp),%eax
 81ea3fb:	89 04 24             	mov    %eax,(%esp)
 81ea3fe:	e8 79 a4 04 00       	call   823487c <_ZN25SDCActiveStatusSyncServerC1Ev>
 81ea403:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea406:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 81ea40a:	0f b6 c8             	movzbl %al,%ecx
 81ea40d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea410:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81ea414:	0f be d0             	movsbl %al,%edx
 81ea417:	8d 45 97             	lea    -0x69(%ebp),%eax
 81ea41a:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81ea421:	00 
 81ea422:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 81ea425:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81ea429:	8d 5d 9c             	lea    -0x64(%ebp),%ebx
 81ea42c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81ea430:	8d 5d 98             	lea    -0x68(%ebp),%ebx
 81ea433:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81ea437:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ea43b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ea43f:	89 04 24             	mov    %eax,(%esp)
 81ea442:	e8 3b 3b ea ff       	call   808df82 <_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv>
 81ea447:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81ea44a:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81ea44d:	75 0c                	jne    81ea45b <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x2ed>
 81ea44f:	8b 45 98             	mov    -0x68(%ebp),%eax
 81ea452:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 81ea455:	0f 84 b3 00 00 00    	je     81ea50e <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x3a0>
 81ea45b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea45e:	89 04 24             	mov    %eax,(%esp)
 81ea461:	e8 f4 f4 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ea466:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ea46d:	00 
 81ea46e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ea475:	00 
 81ea476:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ea47d:	00 
 81ea47e:	c7 44 24 08 5d 02 00 	movl   $0x25d,0x8(%esp)
 81ea485:	00 
 81ea486:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ea489:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ea48d:	89 04 24             	mov    %eax,(%esp)
 81ea490:	e8 e9 e7 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ea495:	8b 45 98             	mov    -0x68(%ebp),%eax
 81ea498:	89 85 9c fb ff ff    	mov    %eax,-0x464(%ebp)
 81ea49e:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 81ea4a1:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea4a4:	0f b6 00             	movzbl (%eax),%eax
 81ea4a7:	0f be f0             	movsbl %al,%esi
 81ea4aa:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea4ad:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81ea4b1:	0f be d8             	movsbl %al,%ebx
 81ea4b4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea4bb:	00 
 81ea4bc:	c7 44 24 08 6d 6b 00 	movl   $0x6b6d,0x8(%esp)
 81ea4c3:	00 
 81ea4c4:	c7 44 24 04 a0 07 bd 	movl   $0x8bd07a0,0x4(%esp)
 81ea4cb:	08 
 81ea4cc:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81ea4cf:	89 04 24             	mov    %eax,(%esp)
 81ea4d2:	e8 41 52 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ea4d7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81ea4da:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81ea4de:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81ea4e1:	89 44 24 18          	mov    %eax,0x18(%esp)
 81ea4e5:	8b 85 9c fb ff ff    	mov    -0x464(%ebp),%eax
 81ea4eb:	89 44 24 14          	mov    %eax,0x14(%esp)
 81ea4ef:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81ea4f3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ea4f7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ea4fb:	c7 44 24 04 10 20 bc 	movl   $0x8bc2010,0x4(%esp)
 81ea502:	08 
 81ea503:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81ea506:	89 04 24             	mov    %eax,(%esp)
 81ea509:	e8 7a 52 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ea50e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea511:	89 04 24             	mov    %eax,(%esp)
 81ea514:	e8 35 59 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81ea519:	0f bf d8             	movswl %ax,%ebx
 81ea51c:	e8 6d 1c ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ea521:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ea525:	89 04 24             	mov    %eax,(%esp)
 81ea528:	e8 05 aa 0a 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81ea52d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ea530:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81ea534:	0f 84 b6 00 00 00    	je     81ea5f0 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x482>
 81ea53a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81ea541:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea544:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81ea548:	3c 0b                	cmp    $0xb,%al
 81ea54a:	75 41                	jne    81ea58d <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x41f>
 81ea54c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea54f:	8b 40 03             	mov    0x3(%eax),%eax
 81ea552:	89 85 a4 fb ff ff    	mov    %eax,-0x45c(%ebp)
 81ea558:	db 85 a4 fb ff ff    	fildl  -0x45c(%ebp)
 81ea55e:	d9 05 e4 45 af 08    	flds   0x8af45e4
 81ea564:	de c9                	fmulp  %st,%st(1)
 81ea566:	d9 bd a2 fb ff ff    	fnstcw -0x45e(%ebp)
 81ea56c:	0f b7 85 a2 fb ff ff 	movzwl -0x45e(%ebp),%eax
 81ea573:	b4 0c                	mov    $0xc,%ah
 81ea575:	66 89 85 a0 fb ff ff 	mov    %ax,-0x460(%ebp)
 81ea57c:	d9 ad a0 fb ff ff    	fldcw  -0x460(%ebp)
 81ea582:	db 5d e4             	fistpl -0x1c(%ebp)
 81ea585:	d9 ad a2 fb ff ff    	fldcw  -0x45e(%ebp)
 81ea58b:	eb 09                	jmp    81ea596 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x428>
 81ea58d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea590:	8b 40 03             	mov    0x3(%eax),%eax
 81ea593:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ea596:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea599:	8b 40 25             	mov    0x25(%eax),%eax
 81ea59c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81ea59f:	81 c2 24 0b 00 00    	add    $0xb24,%edx
 81ea5a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea5a9:	89 14 24             	mov    %edx,(%esp)
 81ea5ac:	e8 9d e9 11 00       	call   8308f4e <_ZN13CBattle_Field19SetDamagedPacketCntEi>
 81ea5b1:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81ea5b4:	8b 40 25             	mov    0x25(%eax),%eax
 81ea5b7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81ea5ba:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 81ea5c0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81ea5c3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ea5c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea5cb:	89 0c 24             	mov    %ecx,(%esp)
 81ea5ce:	e8 25 ea 11 00       	call   8308ff8 <_ZN13CBattle_Field14SetDamageValueEii>
 81ea5d3:	eb 1b                	jmp    81ea5f0 <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x482>
 81ea5d5:	89 d3                	mov    %edx,%ebx
 81ea5d7:	89 c6                	mov    %eax,%esi
 81ea5d9:	8d 45 97             	lea    -0x69(%ebp),%eax
 81ea5dc:	89 04 24             	mov    %eax,(%esp)
 81ea5df:	e8 ac a2 04 00       	call   8234890 <_ZN25SDCActiveStatusSyncServerD1Ev>
 81ea5e4:	89 f0                	mov    %esi,%eax
 81ea5e6:	89 da                	mov    %ebx,%edx
 81ea5e8:	89 04 24             	mov    %eax,(%esp)
 81ea5eb:	e8 60 91 8f 00       	call   8ae3750 <_Unwind_Resume>
 81ea5f0:	8d 45 97             	lea    -0x69(%ebp),%eax
 81ea5f3:	89 04 24             	mov    %eax,(%esp)
 81ea5f6:	e8 95 a2 04 00       	call   8234890 <_ZN25SDCActiveStatusSyncServerD1Ev>
 81ea5fb:	80 45 c3 01          	addb   $0x1,-0x3d(%ebp)
 81ea5ff:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 81ea603:	38 45 c3             	cmp    %al,-0x3d(%ebp)
 81ea606:	0f 92 c0             	setb   %al
 81ea609:	84 c0                	test   %al,%al
 81ea60b:	0f 85 9a fc ff ff    	jne    81ea2ab <_ZN40Dispatcher_SDC_ActiveStatus_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x13d>
 81ea611:	b8 00 00 00 00       	mov    $0x0,%eax
 81ea616:	81 c4 7c 04 00 00    	add    $0x47c,%esp
 81ea61c:	5b                   	pop    %ebx
 81ea61d:	5e                   	pop    %esi
 81ea61e:	5f                   	pop    %edi
 81ea61f:	5d                   	pop    %ebp
 81ea620:	c3                   	ret
 81ea621:	90                   	nop

```

```c
// Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig @ 0x81ea16e

/* WARNING: Type propagation algorithm not settling */
/* Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig
          (Dispatcher_SDC_ActiveStatus_Damage_Check *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  CHackAnalyzer *pCVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_455;
  char local_454 [499];
  char local_261;
  char local_260 [499];
  SDCActiveStatusSyncServer local_6d;
  int local_6c;
  int local_68;
  int local_64 [2];
  byte local_59;
  cMyTrace local_58 [16];
  char *local_48;
  byte local_41;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  bVar11 = 0;
  local_48 = (char *)0x0;
  local_59 = 0;
  cVar3 = PacketBuf::get_byte(param_2,&local_59);
  if (cVar3 == '\x01') {
    local_40 = 500;
    local_3c = 500;
    local_64[1] = 500;
    local_38 = 500;
    pcVar8 = &local_261;
    uVar9 = 500;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_261 = '\0';
      pcVar8 = local_260;
      uVar9 = 499;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (bVar10) {
      *pcVar8 = '\0';
    }
    pcVar8 = &local_455;
    uVar9 = 500;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_455 = '\0';
      pcVar8 = local_454;
      uVar9 = 499;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (bVar10) {
      *pcVar8 = '\0';
    }
    local_48 = &local_455;
    for (local_41 = 0; local_41 < local_59; local_41 = local_41 + 1) {
      local_64[0] = 0;
      cVar3 = PacketBuf::get_int(param_2,local_64);
      if (cVar3 != '\x01') {
        uVar4 = LineFunc(0x6b4a,
                         "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      if (500 < local_64[0]) {
        uVar4 = LineFunc(0x6b4d,
                         "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      cVar3 = PacketBuf::get_binary(param_2,&local_261,local_64[0]);
      if (cVar3 != '\x01') {
        uVar4 = LineFunc(0x6b50,
                         "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      local_38 = local_64[0];
      local_34 = uncompress(&local_455,local_64 + 1,&local_261,local_64[0]);
      if (local_34 != 0) {
        uVar4 = LineFunc(0x6b59,
                         "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      local_68 = 0;
      local_6c = 0;
      local_30 = *(int *)(local_48 + 3);
      local_2c = *(int *)(local_48 + 7);
      local_28 = 0;
      SDCActiveStatusSyncServer::SDCActiveStatusSyncServer(&local_6d);
      uVar4 = 0;
                    /* try { // try from 081ea442 to 081ea5d2 has its CatchHandler @ 081ea5d5 */
      SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC
                ((char)&local_6d,(int)local_48[1],(int *)(uint)(byte)local_48[2],&local_6c,
                 (STSDCActiveStatusSyncDataSend *)&local_68,local_48);
      if ((local_68 != local_30) || (local_6c != local_2c)) {
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x25d,1,0,0,uVar4);
        iVar2 = local_68;
        iVar6 = local_6c;
        cVar3 = *local_48;
        cVar1 = local_48[1];
        cMyTrace::cMyTrace(local_58,
                           "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                           ,0x6b6d,0);
        cMyTrace::operator()
                  (local_58,
                   "[TYPE : %d][EVENT : %d] [Svr] Damage : %d, Duration : %d, [Client] Damage : %d, Duration : %d"
                   ,(int)cVar1,(int)cVar3,iVar2,iVar6,local_30,local_2c);
      }
      CUser::GetPartyIndex(param_1);
      iVar6 = G_CGameManager();
      local_24 = CGameManager::GetParty(iVar6);
      if (local_24 != 0) {
        if (local_48[1] == '\v') {
          local_20 = (int)ROUND(BLEEDING_DAMAGE_IN_ACTION_RATE * (float)*(int *)(local_48 + 3));
        }
        else {
          local_20 = *(int *)(local_48 + 3);
        }
        CBattle_Field::SetDamagedPacketCnt(local_24 + 0xb24);
        CBattle_Field::SetDamageValue
                  ((CBattle_Field *)(local_24 + 0xb24),*(int *)(local_48 + 0x25),local_20);
      }
      SDCActiveStatusSyncServer::~SDCActiveStatusSyncServer(&local_6d);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = LineFunc(0x6b36,
                     "virtual int Dispatcher_SDC_ActiveStatus_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar4;
}

```

