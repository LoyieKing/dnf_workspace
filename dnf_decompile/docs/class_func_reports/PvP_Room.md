# PvP_Room

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 92

---

## CalcuateVictoryPoint

```asm
// === 085da210 PvP_Room::CalcuateVictoryPoint  [0x085da210-0x85da589] ===
 85da210:	55                   	push   %ebp
 85da211:	89 e5                	mov    %esp,%ebp
 85da213:	53                   	push   %ebx
 85da214:	83 ec 64             	sub    $0x64,%esp
 85da217:	8b 45 08             	mov    0x8(%ebp),%eax
 85da21a:	8b 40 04             	mov    0x4(%eax),%eax
 85da21d:	83 f8 01             	cmp    $0x1,%eax
 85da220:	74 0f                	je     85da231 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x21>
 85da222:	8b 45 08             	mov    0x8(%ebp),%eax
 85da225:	8b 40 04             	mov    0x4(%eax),%eax
 85da228:	83 f8 04             	cmp    $0x4,%eax
 85da22b:	0f 85 4e 01 00 00    	jne    85da37f <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x16f>
 85da231:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85da238:	e9 2e 01 00 00       	jmp    85da36b <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x15b>
 85da23d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85da240:	8b 45 08             	mov    0x8(%ebp),%eax
 85da243:	83 c2 0c             	add    $0xc,%edx
 85da246:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da249:	85 c0                	test   %eax,%eax
 85da24b:	0f 84 12 01 00 00    	je     85da363 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x153>
 85da251:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85da254:	8b 45 08             	mov    0x8(%ebp),%eax
 85da257:	83 c2 0c             	add    $0xc,%edx
 85da25a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da25d:	85 c0                	test   %eax,%eax
 85da25f:	74 1d                	je     85da27e <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x6e>
 85da261:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85da264:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da268:	8b 45 08             	mov    0x8(%ebp),%eax
 85da26b:	89 04 24             	mov    %eax,(%esp)
 85da26e:	e8 d3 fd ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85da273:	84 c0                	test   %al,%al
 85da275:	74 07                	je     85da27e <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x6e>
 85da277:	b8 01 00 00 00       	mov    $0x1,%eax
 85da27c:	eb 05                	jmp    85da283 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x73>
 85da27e:	b8 00 00 00 00       	mov    $0x0,%eax
 85da283:	84 c0                	test   %al,%al
 85da285:	0f 85 db 00 00 00    	jne    85da366 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x156>
 85da28b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85da292:	eb 14                	jmp    85da2a8 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x98>
 85da294:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85da297:	c1 e0 02             	shl    $0x2,%eax
 85da29a:	03 45 0c             	add    0xc(%ebp),%eax
 85da29d:	8b 00                	mov    (%eax),%eax
 85da29f:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 85da2a2:	74 13                	je     85da2b7 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0xa7>
 85da2a4:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85da2a8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85da2ab:	3b 45 10             	cmp    0x10(%ebp),%eax
 85da2ae:	0f 9c c0             	setl   %al
 85da2b1:	84 c0                	test   %al,%al
 85da2b3:	75 df                	jne    85da294 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x84>
 85da2b5:	eb 01                	jmp    85da2b8 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0xa8>
 85da2b7:	90                   	nop
 85da2b8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85da2bb:	3b 45 10             	cmp    0x10(%ebp),%eax
 85da2be:	75 49                	jne    85da309 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0xf9>
 85da2c0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85da2c7:	00 
 85da2c8:	c7 44 24 08 7c 0b 00 	movl   $0xb7c,0x8(%esp)
 85da2cf:	00 
 85da2d0:	c7 44 24 04 a0 24 cc 	movl   $0x8cc24a0,0x4(%esp)
 85da2d7:	08 
 85da2d8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85da2db:	89 04 24             	mov    %eax,(%esp)
 85da2de:	e8 35 54 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85da2e3:	8b 45 10             	mov    0x10(%ebp),%eax
 85da2e6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85da2ea:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85da2ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 85da2f1:	c7 44 24 04 34 11 cc 	movl   $0x8cc1134,0x4(%esp)
 85da2f8:	08 
 85da2f9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85da2fc:	89 04 24             	mov    %eax,(%esp)
 85da2ff:	e8 84 54 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85da304:	e9 7a 02 00 00       	jmp    85da583 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x373>
 85da309:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85da30c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85da30f:	8b 45 08             	mov    0x8(%ebp),%eax
 85da312:	05 68 02 00 00       	add    $0x268,%eax
 85da317:	89 04 24             	mov    %eax,(%esp)
 85da31a:	e8 85 54 00 00       	call   85df7a4 <_ZN12PvpUserTable10GetWinTeamEv>
 85da31f:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 85da322:	0f 94 c0             	sete   %al
 85da325:	88 45 d7             	mov    %al,-0x29(%ebp)
 85da328:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85da32b:	8b 45 08             	mov    0x8(%ebp),%eax
 85da32e:	83 c2 0c             	add    $0xc,%edx
 85da331:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85da334:	8b 45 08             	mov    0x8(%ebp),%eax
 85da337:	8b 90 bc 00 00 00    	mov    0xbc(%eax),%edx
 85da33d:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 85da341:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85da345:	89 44 24 08          	mov    %eax,0x8(%esp)
 85da349:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85da34c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da350:	8b 45 08             	mov    0x8(%ebp),%eax
 85da353:	89 04 24             	mov    %eax,(%esp)
 85da356:	e8 2b fd ff ff       	call   85da086 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi>
 85da35b:	89 83 fc 96 07 00    	mov    %eax,0x796fc(%ebx)
 85da361:	eb 04                	jmp    85da367 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x157>
 85da363:	90                   	nop
 85da364:	eb 01                	jmp    85da367 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x157>
 85da366:	90                   	nop
 85da367:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85da36b:	83 7d d8 07          	cmpl   $0x7,-0x28(%ebp)
 85da36f:	0f 9e c0             	setle  %al
 85da372:	84 c0                	test   %al,%al
 85da374:	0f 85 c3 fe ff ff    	jne    85da23d <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x2d>
 85da37a:	e9 04 02 00 00       	jmp    85da583 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x373>
 85da37f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85da386:	e9 e9 01 00 00       	jmp    85da574 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x364>
 85da38b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85da38e:	8b 45 08             	mov    0x8(%ebp),%eax
 85da391:	83 c2 0c             	add    $0xc,%edx
 85da394:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da397:	85 c0                	test   %eax,%eax
 85da399:	0f 84 cd 01 00 00    	je     85da56c <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x35c>
 85da39f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85da3a2:	8b 45 08             	mov    0x8(%ebp),%eax
 85da3a5:	83 c2 0c             	add    $0xc,%edx
 85da3a8:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da3ab:	85 c0                	test   %eax,%eax
 85da3ad:	74 1d                	je     85da3cc <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x1bc>
 85da3af:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85da3b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da3b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85da3b9:	89 04 24             	mov    %eax,(%esp)
 85da3bc:	e8 85 fc ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85da3c1:	84 c0                	test   %al,%al
 85da3c3:	74 07                	je     85da3cc <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x1bc>
 85da3c5:	b8 01 00 00 00       	mov    $0x1,%eax
 85da3ca:	eb 05                	jmp    85da3d1 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x1c1>
 85da3cc:	b8 00 00 00 00       	mov    $0x0,%eax
 85da3d1:	84 c0                	test   %al,%al
 85da3d3:	0f 85 96 01 00 00    	jne    85da56f <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x35f>
 85da3d9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85da3dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85da3df:	83 c2 0c             	add    $0xc,%edx
 85da3e2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da3e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da3e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85da3ec:	89 04 24             	mov    %eax,(%esp)
 85da3ef:	e8 fa 22 00 00       	call   85dc6ee <_ZN8PvP_Room12GetTeamIndexEP5CUser>
 85da3f4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85da3f7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85da3fe:	eb 14                	jmp    85da414 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x204>
 85da400:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85da403:	c1 e0 02             	shl    $0x2,%eax
 85da406:	03 45 0c             	add    0xc(%ebp),%eax
 85da409:	8b 00                	mov    (%eax),%eax
 85da40b:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85da40e:	74 13                	je     85da423 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x213>
 85da410:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 85da414:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85da417:	3b 45 10             	cmp    0x10(%ebp),%eax
 85da41a:	0f 9c c0             	setl   %al
 85da41d:	84 c0                	test   %al,%al
 85da41f:	75 df                	jne    85da400 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x1f0>
 85da421:	eb 01                	jmp    85da424 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x214>
 85da423:	90                   	nop
 85da424:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85da427:	3b 45 10             	cmp    0x10(%ebp),%eax
 85da42a:	75 49                	jne    85da475 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x265>
 85da42c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85da433:	00 
 85da434:	c7 44 24 08 97 0b 00 	movl   $0xb97,0x8(%esp)
 85da43b:	00 
 85da43c:	c7 44 24 04 a0 24 cc 	movl   $0x8cc24a0,0x4(%esp)
 85da443:	08 
 85da444:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85da447:	89 04 24             	mov    %eax,(%esp)
 85da44a:	e8 c9 52 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85da44f:	8b 45 10             	mov    0x10(%ebp),%eax
 85da452:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85da456:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85da459:	89 44 24 08          	mov    %eax,0x8(%esp)
 85da45d:	c7 44 24 04 34 11 cc 	movl   $0x8cc1134,0x4(%esp)
 85da464:	08 
 85da465:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85da468:	89 04 24             	mov    %eax,(%esp)
 85da46b:	e8 18 53 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85da470:	e9 0e 01 00 00       	jmp    85da583 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x373>
 85da475:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85da478:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85da47b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85da47e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85da481:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85da484:	83 e8 01             	sub    $0x1,%eax
 85da487:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85da48a:	eb 74                	jmp    85da500 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x2f0>
 85da48c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85da48f:	c1 e0 02             	shl    $0x2,%eax
 85da492:	03 45 0c             	add    0xc(%ebp),%eax
 85da495:	8b 00                	mov    (%eax),%eax
 85da497:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da49a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85da49d:	8b 45 08             	mov    0x8(%ebp),%eax
 85da4a0:	83 c2 0c             	add    $0xc,%edx
 85da4a3:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da4a6:	85 c0                	test   %eax,%eax
 85da4a8:	74 1d                	je     85da4c7 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x2b7>
 85da4aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85da4ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da4b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85da4b4:	89 04 24             	mov    %eax,(%esp)
 85da4b7:	e8 8a fb ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85da4bc:	84 c0                	test   %al,%al
 85da4be:	74 07                	je     85da4c7 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x2b7>
 85da4c0:	b8 01 00 00 00       	mov    $0x1,%eax
 85da4c5:	eb 05                	jmp    85da4cc <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x2bc>
 85da4c7:	b8 00 00 00 00       	mov    $0x0,%eax
 85da4cc:	84 c0                	test   %al,%al
 85da4ce:	75 2b                	jne    85da4fb <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x2eb>
 85da4d0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85da4d3:	8b 45 08             	mov    0x8(%ebp),%eax
 85da4d6:	83 c2 0c             	add    $0xc,%edx
 85da4d9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da4dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da4e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85da4e3:	89 04 24             	mov    %eax,(%esp)
 85da4e6:	e8 03 22 00 00       	call   85dc6ee <_ZN8PvP_Room12GetTeamIndexEP5CUser>
 85da4eb:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 85da4ee:	0f 95 c0             	setne  %al
 85da4f1:	84 c0                	test   %al,%al
 85da4f3:	74 07                	je     85da4fc <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x2ec>
 85da4f5:	83 6d d0 01          	subl   $0x1,-0x30(%ebp)
 85da4f9:	eb 01                	jmp    85da4fc <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x2ec>
 85da4fb:	90                   	nop
 85da4fc:	83 6d f0 01          	subl   $0x1,-0x10(%ebp)
 85da500:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85da503:	f7 d0                	not    %eax
 85da505:	c1 e8 1f             	shr    $0x1f,%eax
 85da508:	84 c0                	test   %al,%al
 85da50a:	75 80                	jne    85da48c <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x27c>
 85da50c:	8b 45 08             	mov    0x8(%ebp),%eax
 85da50f:	05 68 02 00 00       	add    $0x268,%eax
 85da514:	89 04 24             	mov    %eax,(%esp)
 85da517:	e8 88 52 00 00       	call   85df7a4 <_ZN12PvpUserTable10GetWinTeamEv>
 85da51c:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 85da51f:	0f 94 c0             	sete   %al
 85da522:	88 45 d7             	mov    %al,-0x29(%ebp)
 85da525:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85da528:	8b 45 08             	mov    0x8(%ebp),%eax
 85da52b:	83 c2 0c             	add    $0xc,%edx
 85da52e:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85da531:	8b 45 08             	mov    0x8(%ebp),%eax
 85da534:	8b 80 bc 00 00 00    	mov    0xbc(%eax),%eax
 85da53a:	89 c2                	mov    %eax,%edx
 85da53c:	c1 ea 1f             	shr    $0x1f,%edx
 85da53f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85da542:	d1 f8                	sar    $1,%eax
 85da544:	89 c2                	mov    %eax,%edx
 85da546:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 85da54a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85da54e:	89 44 24 08          	mov    %eax,0x8(%esp)
 85da552:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85da555:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da559:	8b 45 08             	mov    0x8(%ebp),%eax
 85da55c:	89 04 24             	mov    %eax,(%esp)
 85da55f:	e8 74 fc ff ff       	call   85da1d8 <_ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi>
 85da564:	89 83 fc 96 07 00    	mov    %eax,0x796fc(%ebx)
 85da56a:	eb 04                	jmp    85da570 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x360>
 85da56c:	90                   	nop
 85da56d:	eb 01                	jmp    85da570 <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x360>
 85da56f:	90                   	nop
 85da570:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85da574:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 85da578:	0f 9e c0             	setle  %al
 85da57b:	84 c0                	test   %al,%al
 85da57d:	0f 85 08 fe ff ff    	jne    85da38b <_ZN8PvP_Room20CalcuateVictoryPointEPii+0x17b>
 85da583:	83 c4 64             	add    $0x64,%esp
 85da586:	5b                   	pop    %ebx
 85da587:	5d                   	pop    %ebp
 85da588:	c3                   	ret
 85da589:	90                   	nop

```

```c
// PvP_Room::CalcuateVictoryPoint @ 0x85da210

/* PvP_Room::CalcuateVictoryPoint(int*, int) */

void __thiscall PvP_Room::CalcuateVictoryPoint(PvP_Room *this,int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  undefined1 local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(this + 4) == 1) || (*(int *)(this + 4) == 4)) {
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      if (*(int *)(this + (local_2c + 0xc) * 4) != 0) {
        if ((*(int *)(this + (local_2c + 0xc) * 4) == 0) ||
           (cVar2 = IsPvpObserver(this,local_2c), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          for (local_28 = 0; (local_28 < param_2 && (param_1[local_28] != local_2c));
              local_28 = local_28 + 1) {
          }
          if (local_28 == param_2) {
            cMyTrace::cMyTrace(local_54,"void PvP_Room::CalcuateVictoryPoint(int*, int)",0xb7c,5);
            cMyTrace::operator()
                      (local_54,
                       "1 PvP_Room::CalcuateVictoryPoint Error, No Rank User Found i<%d> RankCount<%d>"
                       ,local_2c,param_2);
            return;
          }
          local_34 = local_28;
          iVar3 = PvpUserTable::GetWinTeam((PvpUserTable *)(this + 0x268));
          local_2d = iVar3 == local_2c;
          iVar3 = *(int *)(this + (local_2c + 0xc) * 4);
          uVar4 = CalculateVictoryPointOfSinglePlay
                            (this,local_34,(bool)local_2d,*(int *)(this + 0xbc));
          *(undefined4 *)(iVar3 + 0x796fc) = uVar4;
        }
      }
    }
  }
  else {
    for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
      if (*(int *)(this + (local_24 + 0xc) * 4) != 0) {
        if ((*(int *)(this + (local_24 + 0xc) * 4) == 0) ||
           (cVar2 = IsPvpObserver(this,local_24), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          local_20 = GetTeamIndex(this,*(CUser **)(this + (local_24 + 0xc) * 4));
          for (local_1c = 0; (local_1c < param_2 && (param_1[local_1c] != local_24));
              local_1c = local_1c + 1) {
          }
          if (local_1c == param_2) {
            cMyTrace::cMyTrace(local_44,"void PvP_Room::CalcuateVictoryPoint(int*, int)",0xb97,5);
            cMyTrace::operator()
                      (local_44,
                       "1 PvP_Room::CalcuateVictoryPoint Error, No Rank User Found i<%d> RankCount<%d>"
                       ,local_24,param_2);
            return;
          }
          local_18 = local_1c;
          local_34 = local_1c;
          local_14 = local_1c;
          while (local_14 = local_14 + -1, -1 < local_14) {
            local_10 = param_1[local_14];
            if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) ||
               (cVar2 = IsPvpObserver(this,local_10), cVar2 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((!bVar1) &&
               (iVar3 = GetTeamIndex(this,*(CUser **)(this + (local_10 + 0xc) * 4)),
               iVar3 != local_20)) {
              local_34 = local_34 + -1;
            }
          }
          iVar3 = PvpUserTable::GetWinTeam((PvpUserTable *)(this + 0x268));
          local_2d = iVar3 == local_20;
          iVar3 = *(int *)(this + (local_24 + 0xc) * 4);
          uVar4 = CalculateVictoryPointOfTeamPlay
                            (this,local_34,(bool)local_2d,*(int *)(this + 0xbc) / 2);
          *(undefined4 *)(iVar3 + 0x796fc) = uVar4;
        }
      }
    }
  }
  return;
}

```

---

## CalculateVictoryPointOfSinglePlay

```asm
// === 085da086 PvP_Room::CalculateVictoryPointOfSinglePlay  [0x085da086-0x85da1d7] ===
 85da086:	55                   	push   %ebp
 85da087:	89 e5                	mov    %esp,%ebp
 85da089:	83 ec 48             	sub    $0x48,%esp
 85da08c:	8b 45 10             	mov    0x10(%ebp),%eax
 85da08f:	88 45 d4             	mov    %al,-0x2c(%ebp)
 85da092:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 85da096:	74 0b                	je     85da0a3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x1d>
 85da098:	8b 45 14             	mov    0x14(%ebp),%eax
 85da09b:	83 c0 01             	add    $0x1,%eax
 85da09e:	e9 33 01 00 00       	jmp    85da1d6 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x150>
 85da0a3:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 85da0a7:	75 18                	jne    85da0c1 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x3b>
 85da0a9:	8b 45 14             	mov    0x14(%ebp),%eax
 85da0ac:	83 c0 01             	add    $0x1,%eax
 85da0af:	89 c2                	mov    %eax,%edx
 85da0b1:	c1 ea 1f             	shr    $0x1f,%edx
 85da0b4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85da0b7:	d1 f8                	sar    $1,%eax
 85da0b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da0bc:	e9 12 01 00 00       	jmp    85da1d3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x14d>
 85da0c1:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85da0c5:	75 1c                	jne    85da0e3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x5d>
 85da0c7:	8b 45 14             	mov    0x14(%ebp),%eax
 85da0ca:	83 c0 01             	add    $0x1,%eax
 85da0cd:	89 c2                	mov    %eax,%edx
 85da0cf:	c1 fa 1f             	sar    $0x1f,%edx
 85da0d2:	c1 ea 1e             	shr    $0x1e,%edx
 85da0d5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85da0d8:	c1 f8 02             	sar    $0x2,%eax
 85da0db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da0de:	e9 f0 00 00 00       	jmp    85da1d3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x14d>
 85da0e3:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 85da0e7:	75 1c                	jne    85da105 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x7f>
 85da0e9:	8b 45 14             	mov    0x14(%ebp),%eax
 85da0ec:	83 c0 01             	add    $0x1,%eax
 85da0ef:	89 c2                	mov    %eax,%edx
 85da0f1:	c1 fa 1f             	sar    $0x1f,%edx
 85da0f4:	c1 ea 1d             	shr    $0x1d,%edx
 85da0f7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85da0fa:	c1 f8 03             	sar    $0x3,%eax
 85da0fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da100:	e9 ce 00 00 00       	jmp    85da1d3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x14d>
 85da105:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 85da109:	75 1c                	jne    85da127 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0xa1>
 85da10b:	8b 45 14             	mov    0x14(%ebp),%eax
 85da10e:	83 c0 01             	add    $0x1,%eax
 85da111:	89 c2                	mov    %eax,%edx
 85da113:	c1 fa 1f             	sar    $0x1f,%edx
 85da116:	c1 ea 1c             	shr    $0x1c,%edx
 85da119:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85da11c:	c1 f8 04             	sar    $0x4,%eax
 85da11f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da122:	e9 ac 00 00 00       	jmp    85da1d3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x14d>
 85da127:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 85da12b:	75 1c                	jne    85da149 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0xc3>
 85da12d:	8b 45 14             	mov    0x14(%ebp),%eax
 85da130:	83 c0 01             	add    $0x1,%eax
 85da133:	89 c2                	mov    %eax,%edx
 85da135:	c1 fa 1f             	sar    $0x1f,%edx
 85da138:	c1 ea 1b             	shr    $0x1b,%edx
 85da13b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85da13e:	c1 f8 05             	sar    $0x5,%eax
 85da141:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da144:	e9 8a 00 00 00       	jmp    85da1d3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x14d>
 85da149:	83 7d 0c 06          	cmpl   $0x6,0xc(%ebp)
 85da14d:	75 19                	jne    85da168 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0xe2>
 85da14f:	8b 45 14             	mov    0x14(%ebp),%eax
 85da152:	83 c0 01             	add    $0x1,%eax
 85da155:	89 c2                	mov    %eax,%edx
 85da157:	c1 fa 1f             	sar    $0x1f,%edx
 85da15a:	c1 ea 1a             	shr    $0x1a,%edx
 85da15d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85da160:	c1 f8 06             	sar    $0x6,%eax
 85da163:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da166:	eb 6b                	jmp    85da1d3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x14d>
 85da168:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85da16c:	75 19                	jne    85da187 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x101>
 85da16e:	8b 45 14             	mov    0x14(%ebp),%eax
 85da171:	83 c0 01             	add    $0x1,%eax
 85da174:	89 c2                	mov    %eax,%edx
 85da176:	c1 fa 1f             	sar    $0x1f,%edx
 85da179:	c1 ea 19             	shr    $0x19,%edx
 85da17c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85da17f:	c1 f8 07             	sar    $0x7,%eax
 85da182:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da185:	eb 4c                	jmp    85da1d3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x14d>
 85da187:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85da18b:	75 09                	jne    85da196 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x110>
 85da18d:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 85da194:	eb 3d                	jmp    85da1d3 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi+0x14d>
 85da196:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85da19d:	00 
 85da19e:	c7 44 24 08 50 0b 00 	movl   $0xb50,0x8(%esp)
 85da1a5:	00 
 85da1a6:	c7 44 24 04 e0 24 cc 	movl   $0x8cc24e0,0x4(%esp)
 85da1ad:	08 
 85da1ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85da1b1:	89 04 24             	mov    %eax,(%esp)
 85da1b4:	e8 5f 55 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85da1b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85da1bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 85da1c0:	c7 44 24 04 22 11 cc 	movl   $0x8cc1122,0x4(%esp)
 85da1c7:	08 
 85da1c8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85da1cb:	89 04 24             	mov    %eax,(%esp)
 85da1ce:	e8 b5 55 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85da1d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85da1d6:	c9                   	leave
 85da1d7:	c3                   	ret

```

```c
// PvP_Room::CalculateVictoryPointOfSinglePlay @ 0x85da086

/* PvP_Room::CalculateVictoryPointOfSinglePlay(int, bool, int) */

int __thiscall
PvP_Room::CalculateVictoryPointOfSinglePlay(PvP_Room *this,int param_1,bool param_2,int param_3)

{
  cMyTrace local_20 [16];
  int local_10;
  
  if (param_2) {
    local_10 = param_3 + 1;
  }
  else if (param_1 == 1) {
    local_10 = (param_3 + 1) / 2;
  }
  else if (param_1 == 2) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1e) + param_3 + 1) >> 2;
  }
  else if (param_1 == 3) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1d) + param_3 + 1) >> 3;
  }
  else if (param_1 == 4) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1c) + param_3 + 1) >> 4;
  }
  else if (param_1 == 5) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1b) + param_3 + 1) >> 5;
  }
  else if (param_1 == 6) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1a) + param_3 + 1) >> 6;
  }
  else if (param_1 == 7) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x19) + param_3 + 1) >> 7;
  }
  else if (param_1 == 0) {
    local_10 = 1;
  }
  else {
    cMyTrace::cMyTrace(local_20,"int PvP_Room::CalculateVictoryPointOfSinglePlay(int, bool, int)",
                       0xb50,5);
    cMyTrace::operator()(local_20,"invalid rank %d",param_1);
  }
  return local_10;
}

```

---

## CalculateVictoryPointOfTeamPlay

```asm
// === 085da1d8 PvP_Room::CalculateVictoryPointOfTeamPlay  [0x085da1d8-0x85da20f] ===
 85da1d8:	55                   	push   %ebp
 85da1d9:	89 e5                	mov    %esp,%ebp
 85da1db:	83 ec 04             	sub    $0x4,%esp
 85da1de:	8b 45 10             	mov    0x10(%ebp),%eax
 85da1e1:	88 45 fc             	mov    %al,-0x4(%ebp)
 85da1e4:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 85da1e8:	74 0e                	je     85da1f8 <_ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi+0x20>
 85da1ea:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85da1ee:	75 08                	jne    85da1f8 <_ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi+0x20>
 85da1f0:	8b 45 14             	mov    0x14(%ebp),%eax
 85da1f3:	83 c0 02             	add    $0x2,%eax
 85da1f6:	eb 15                	jmp    85da20d <_ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi+0x35>
 85da1f8:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 85da1fc:	83 f0 01             	xor    $0x1,%eax
 85da1ff:	84 c0                	test   %al,%al
 85da201:	74 07                	je     85da20a <_ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi+0x32>
 85da203:	b8 01 00 00 00       	mov    $0x1,%eax
 85da208:	eb 03                	jmp    85da20d <_ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi+0x35>
 85da20a:	8b 45 14             	mov    0x14(%ebp),%eax
 85da20d:	c9                   	leave
 85da20e:	c3                   	ret
 85da20f:	90                   	nop

```

```c
// PvP_Room::CalculateVictoryPointOfTeamPlay @ 0x85da1d8

/* PvP_Room::CalculateVictoryPointOfTeamPlay(int, bool, int) */

int __thiscall
PvP_Room::CalculateVictoryPointOfTeamPlay(PvP_Room *this,int param_1,bool param_2,int param_3)

{
  if ((param_2) && (param_1 == 0)) {
    param_3 = param_3 + 2;
  }
  else if (!param_2) {
    param_3 = 1;
  }
  return param_3;
}

```

---

## CancelAllTimer

```asm
// === 085dcad6 PvP_Room::CancelAllTimer  [0x085dcad6-0x85dcaf1] ===
 85dcad6:	55                   	push   %ebp
 85dcad7:	89 e5                	mov    %esp,%ebp
 85dcad9:	83 ec 18             	sub    $0x18,%esp
 85dcadc:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 85dcae3:	00 
 85dcae4:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcae7:	89 04 24             	mov    %eax,(%esp)
 85dcaea:	e8 a1 c2 f8 ff       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85dcaef:	c9                   	leave
 85dcaf0:	c3                   	ret
 85dcaf1:	90                   	nop

```

```c
// PvP_Room::CancelAllTimer @ 0x85dcad6

/* PvP_Room::CancelAllTimer() */

void __thiscall PvP_Room::CancelAllTimer(PvP_Room *this)

{
  gen_timer_key(this,0x32);
  return;
}

```

---

## ChangePvPMode

```asm
// === 085d8b2a PvP_Room::ChangePvPMode  [0x085d8b2a-0x85d8bbb] ===
 85d8b2a:	55                   	push   %ebp
 85d8b2b:	89 e5                	mov    %esp,%ebp
 85d8b2d:	83 ec 28             	sub    $0x28,%esp
 85d8b30:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 85d8b34:	8d 45 f7             	lea    -0x9(%ebp),%eax
 85d8b37:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8b3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8b3e:	89 04 24             	mov    %eax,(%esp)
 85d8b41:	e8 4a bb ff ff       	call   85d4690 <_Z15IsDeathMatchMapiRb>
 85d8b46:	84 c0                	test   %al,%al
 85d8b48:	74 44                	je     85d8b8e <_ZN8PvP_Room13ChangePvPModeEi+0x64>
 85d8b4a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8b4d:	8b 40 04             	mov    0x4(%eax),%eax
 85d8b50:	83 f8 04             	cmp    $0x4,%eax
 85d8b53:	74 65                	je     85d8bba <_ZN8PvP_Room13ChangePvPModeEi+0x90>
 85d8b55:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8b58:	8b 40 04             	mov    0x4(%eax),%eax
 85d8b5b:	83 f8 05             	cmp    $0x5,%eax
 85d8b5e:	74 5a                	je     85d8bba <_ZN8PvP_Room13ChangePvPModeEi+0x90>
 85d8b60:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8b63:	8b 40 04             	mov    0x4(%eax),%eax
 85d8b66:	83 f8 01             	cmp    $0x1,%eax
 85d8b69:	75 0c                	jne    85d8b77 <_ZN8PvP_Room13ChangePvPModeEi+0x4d>
 85d8b6b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8b6e:	c7 40 04 04 00 00 00 	movl   $0x4,0x4(%eax)
 85d8b75:	eb 43                	jmp    85d8bba <_ZN8PvP_Room13ChangePvPModeEi+0x90>
 85d8b77:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8b7a:	8b 40 04             	mov    0x4(%eax),%eax
 85d8b7d:	83 f8 02             	cmp    $0x2,%eax
 85d8b80:	75 38                	jne    85d8bba <_ZN8PvP_Room13ChangePvPModeEi+0x90>
 85d8b82:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8b85:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
 85d8b8c:	eb 2c                	jmp    85d8bba <_ZN8PvP_Room13ChangePvPModeEi+0x90>
 85d8b8e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8b91:	8b 40 04             	mov    0x4(%eax),%eax
 85d8b94:	83 f8 04             	cmp    $0x4,%eax
 85d8b97:	75 0c                	jne    85d8ba5 <_ZN8PvP_Room13ChangePvPModeEi+0x7b>
 85d8b99:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8b9c:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 85d8ba3:	eb 15                	jmp    85d8bba <_ZN8PvP_Room13ChangePvPModeEi+0x90>
 85d8ba5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8ba8:	8b 40 04             	mov    0x4(%eax),%eax
 85d8bab:	83 f8 05             	cmp    $0x5,%eax
 85d8bae:	75 0a                	jne    85d8bba <_ZN8PvP_Room13ChangePvPModeEi+0x90>
 85d8bb0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8bb3:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 85d8bba:	c9                   	leave
 85d8bbb:	c3                   	ret

```

```c
// PvP_Room::ChangePvPMode @ 0x85d8b2a

/* PvP_Room::ChangePvPMode(int) */

void __thiscall PvP_Room::ChangePvPMode(PvP_Room *this,int param_1)

{
  char cVar1;
  bool local_d [9];
  
  local_d[0] = false;
  cVar1 = IsDeathMatchMap(param_1,local_d);
  if (cVar1 == '\0') {
    if (*(int *)(this + 4) == 4) {
      *(undefined4 *)(this + 4) = 1;
    }
    else if (*(int *)(this + 4) == 5) {
      *(undefined4 *)(this + 4) = 2;
    }
  }
  else if ((*(int *)(this + 4) != 4) && (*(int *)(this + 4) != 5)) {
    if (*(int *)(this + 4) == 1) {
      *(undefined4 *)(this + 4) = 4;
    }
    else if (*(int *)(this + 4) == 2) {
      *(undefined4 *)(this + 4) = 5;
    }
  }
  return;
}

```

---

## CheckPassword

```asm
// === 085ddeae PvP_Room::CheckPassword  [0x085ddeae-0x85ddef5] ===
 85ddeae:	55                   	push   %ebp
 85ddeaf:	89 e5                	mov    %esp,%ebp
 85ddeb1:	83 ec 18             	sub    $0x18,%esp
 85ddeb4:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddeb7:	8b 80 10 06 00 00    	mov    0x610(%eax),%eax
 85ddebd:	3b 45 10             	cmp    0x10(%ebp),%eax
 85ddec0:	74 07                	je     85ddec9 <_ZN8PvP_Room13CheckPasswordEPKci+0x1b>
 85ddec2:	b8 00 00 00 00       	mov    $0x0,%eax
 85ddec7:	eb 2a                	jmp    85ddef3 <_ZN8PvP_Room13CheckPasswordEPKci+0x45>
 85ddec9:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddecc:	8b 80 10 06 00 00    	mov    0x610(%eax),%eax
 85dded2:	8b 55 08             	mov    0x8(%ebp),%edx
 85dded5:	81 c2 05 06 00 00    	add    $0x605,%edx
 85ddedb:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ddedf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ddee2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ddee6:	89 14 24             	mov    %edx,(%esp)
 85ddee9:	e8 a2 fd a9 ff       	call   807dc90 <memcmp@plt>
 85ddeee:	85 c0                	test   %eax,%eax
 85ddef0:	0f 94 c0             	sete   %al
 85ddef3:	c9                   	leave
 85ddef4:	c3                   	ret
 85ddef5:	90                   	nop

```

```c
// PvP_Room::CheckPassword @ 0x85ddeae

/* PvP_Room::CheckPassword(char const*, int) */

bool __thiscall PvP_Room::CheckPassword(PvP_Room *this,char *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(this + 0x610) == param_2) {
    iVar1 = memcmp(this + 0x605,param_1,*(size_t *)(this + 0x610));
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

```

---

## CheckPvPMapMode

```asm
// === 085dd936 PvP_Room::CheckPvPMapMode  [0x085dd936-0x85dda45] ===
 85dd936:	55                   	push   %ebp
 85dd937:	89 e5                	mov    %esp,%ebp
 85dd939:	83 ec 28             	sub    $0x28,%esp
 85dd93c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd93f:	8b 40 04             	mov    0x4(%eax),%eax
 85dd942:	83 f8 06             	cmp    $0x6,%eax
 85dd945:	75 0a                	jne    85dd951 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x1b>
 85dd947:	b8 01 00 00 00       	mov    $0x1,%eax
 85dd94c:	e9 f3 00 00 00       	jmp    85dda44 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x10e>
 85dd951:	8b 45 14             	mov    0x14(%ebp),%eax
 85dd954:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd958:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd95b:	89 04 24             	mov    %eax,(%esp)
 85dd95e:	e8 2d 6d ff ff       	call   85d4690 <_Z15IsDeathMatchMapiRb>
 85dd963:	88 45 f7             	mov    %al,-0x9(%ebp)
 85dd966:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 85dd96a:	74 22                	je     85dd98e <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x58>
 85dd96c:	8b 45 14             	mov    0x14(%ebp),%eax
 85dd96f:	0f b6 00             	movzbl (%eax),%eax
 85dd972:	83 f0 01             	xor    $0x1,%eax
 85dd975:	84 c0                	test   %al,%al
 85dd977:	74 15                	je     85dd98e <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x58>
 85dd979:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd97c:	8b 40 04             	mov    0x4(%eax),%eax
 85dd97f:	83 f8 04             	cmp    $0x4,%eax
 85dd982:	75 0a                	jne    85dd98e <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x58>
 85dd984:	b8 01 00 00 00       	mov    $0x1,%eax
 85dd989:	e9 b6 00 00 00       	jmp    85dda44 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x10e>
 85dd98e:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 85dd992:	74 15                	je     85dd9a9 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x73>
 85dd994:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd997:	8b 40 04             	mov    0x4(%eax),%eax
 85dd99a:	83 f8 03             	cmp    $0x3,%eax
 85dd99d:	75 0a                	jne    85dd9a9 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x73>
 85dd99f:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd9a2:	c7 40 04 04 00 00 00 	movl   $0x4,0x4(%eax)
 85dd9a9:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 85dd9ad:	74 25                	je     85dd9d4 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x9e>
 85dd9af:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd9b2:	8b 40 04             	mov    0x4(%eax),%eax
 85dd9b5:	83 f8 01             	cmp    $0x1,%eax
 85dd9b8:	75 1a                	jne    85dd9d4 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x9e>
 85dd9ba:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 85dd9c1:	00 
 85dd9c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd9c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd9c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd9cc:	89 04 24             	mov    %eax,(%esp)
 85dd9cf:	e8 f2 aa ff ff       	call   85d84c6 <_ZN8PvP_Room12set_pvp_modeEP5CUseri>
 85dd9d4:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 85dd9d8:	74 15                	je     85dd9ef <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0xb9>
 85dd9da:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd9dd:	8b 40 04             	mov    0x4(%eax),%eax
 85dd9e0:	83 f8 02             	cmp    $0x2,%eax
 85dd9e3:	75 0a                	jne    85dd9ef <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0xb9>
 85dd9e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd9e8:	c7 40 04 05 00 00 00 	movl   $0x5,0x4(%eax)
 85dd9ef:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 85dd9f3:	83 f0 01             	xor    $0x1,%eax
 85dd9f6:	84 c0                	test   %al,%al
 85dd9f8:	74 25                	je     85dda1f <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0xe9>
 85dd9fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd9fd:	8b 40 04             	mov    0x4(%eax),%eax
 85dda00:	83 f8 04             	cmp    $0x4,%eax
 85dda03:	75 1a                	jne    85dda1f <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0xe9>
 85dda05:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85dda0c:	00 
 85dda0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dda10:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dda14:	8b 45 08             	mov    0x8(%ebp),%eax
 85dda17:	89 04 24             	mov    %eax,(%esp)
 85dda1a:	e8 a7 aa ff ff       	call   85d84c6 <_ZN8PvP_Room12set_pvp_modeEP5CUseri>
 85dda1f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 85dda23:	83 f0 01             	xor    $0x1,%eax
 85dda26:	84 c0                	test   %al,%al
 85dda28:	74 15                	je     85dda3f <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x109>
 85dda2a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dda2d:	8b 40 04             	mov    0x4(%eax),%eax
 85dda30:	83 f8 05             	cmp    $0x5,%eax
 85dda33:	75 0a                	jne    85dda3f <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb+0x109>
 85dda35:	8b 45 08             	mov    0x8(%ebp),%eax
 85dda38:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 85dda3f:	b8 01 00 00 00       	mov    $0x1,%eax
 85dda44:	c9                   	leave
 85dda45:	c3                   	ret

```

```c
// PvP_Room::CheckPvPMapMode @ 0x85dd936

/* PvP_Room::CheckPvPMapMode(CUser*, int, bool&) */

undefined4 __thiscall
PvP_Room::CheckPvPMapMode(PvP_Room *this,CUser *param_1,int param_2,bool *param_3)

{
  char cVar1;
  
  if ((*(int *)(this + 4) != 6) &&
     (((cVar1 = IsDeathMatchMap(param_2,param_3), cVar1 == '\0' || (*param_3 == true)) ||
      (*(int *)(this + 4) != 4)))) {
    if ((cVar1 != '\0') && (*(int *)(this + 4) == 3)) {
      *(undefined4 *)(this + 4) = 4;
    }
    if ((cVar1 != '\0') && (*(int *)(this + 4) == 1)) {
      set_pvp_mode(this,param_1,4);
    }
    if ((cVar1 != '\0') && (*(int *)(this + 4) == 2)) {
      *(undefined4 *)(this + 4) = 5;
    }
    if ((cVar1 != '\x01') && (*(int *)(this + 4) == 4)) {
      set_pvp_mode(this,param_1,1);
    }
    if ((cVar1 != '\x01') && (*(int *)(this + 4) == 5)) {
      *(undefined4 *)(this + 4) = 2;
    }
  }
  return 1;
}

```

---

## ClearPvPRoom

```asm
// === 085dd6ba PvP_Room::ClearPvPRoom  [0x085dd6ba-0x85dd753] ===
 85dd6ba:	55                   	push   %ebp
 85dd6bb:	89 e5                	mov    %esp,%ebp
 85dd6bd:	56                   	push   %esi
 85dd6be:	53                   	push   %ebx
 85dd6bf:	83 ec 20             	sub    $0x20,%esp
 85dd6c2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dd6c9:	00 
 85dd6ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd6cd:	89 04 24             	mov    %eax,(%esp)
 85dd6d0:	e8 fb aa ff ff       	call   85d81d0 <_ZN8PvP_Room12destroy_roomEi>
 85dd6d5:	e8 b4 ea ae ff       	call   80cc18e <_Z14G_CGameManagerv>
 85dd6da:	8b 55 08             	mov    0x8(%ebp),%edx
 85dd6dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd6e1:	89 04 24             	mov    %eax,(%esp)
 85dd6e4:	e8 5f 7c cb ff       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 85dd6e9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd6ec:	89 04 24             	mov    %eax,(%esp)
 85dd6ef:	e8 58 06 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85dd6f4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd6f7:	89 04 24             	mov    %eax,(%esp)
 85dd6fa:	e8 e7 e1 ae ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85dd6ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd702:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd706:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd709:	89 04 24             	mov    %eax,(%esp)
 85dd70c:	e8 29 e6 ff ff       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 85dd711:	e8 91 cc af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dd716:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85dd719:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd71d:	89 04 24             	mov    %eax,(%esp)
 85dd720:	e8 ef b4 0e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 85dd725:	eb 1b                	jmp    85dd742 <_ZN8PvP_Room12ClearPvPRoomEP5CUser+0x88>
 85dd727:	89 d3                	mov    %edx,%ebx
 85dd729:	89 c6                	mov    %eax,%esi
 85dd72b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd72e:	89 04 24             	mov    %eax,(%esp)
 85dd731:	e8 4a 07 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd736:	89 f0                	mov    %esi,%eax
 85dd738:	89 da                	mov    %ebx,%edx
 85dd73a:	89 04 24             	mov    %eax,(%esp)
 85dd73d:	e8 0e 60 50 00       	call   8ae3750 <_Unwind_Resume>
 85dd742:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd745:	89 04 24             	mov    %eax,(%esp)
 85dd748:	e8 33 07 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd74d:	83 c4 20             	add    $0x20,%esp
 85dd750:	5b                   	pop    %ebx
 85dd751:	5e                   	pop    %esi
 85dd752:	5d                   	pop    %ebp
 85dd753:	c3                   	ret

```

```c
// PvP_Room::ClearPvPRoom @ 0x85dd6ba

/* PvP_Room::ClearPvPRoom(CUser*) */

void PvP_Room::ClearPvPRoom(CUser *param_1)

{
  CGameManager *this;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  destroy_room((PvP_Room *)param_1,0);
  this = (CGameManager *)G_CGameManager();
  CGameManager::PutPvp(this,(PvP_Room *)param_1);
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085dd6fa to 085dd724 has its CatchHandler @ 085dd727 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  make_state_info((PvP_Room *)param_1,(char *)local_18);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## Disconnect

```asm
// === 085dd754 PvP_Room::Disconnect  [0x085dd754-0x85dd823] ===
 85dd754:	55                   	push   %ebp
 85dd755:	89 e5                	mov    %esp,%ebp
 85dd757:	83 ec 38             	sub    $0x38,%esp
 85dd75a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85dd761:	e9 a8 00 00 00       	jmp    85dd80e <_ZN8PvP_Room10DisconnectEP5CUser+0xba>
 85dd766:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dd769:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd76c:	83 c2 0c             	add    $0xc,%edx
 85dd76f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dd772:	85 c0                	test   %eax,%eax
 85dd774:	0f 84 8f 00 00 00    	je     85dd809 <_ZN8PvP_Room10DisconnectEP5CUser+0xb5>
 85dd77a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dd77d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd780:	83 c2 0c             	add    $0xc,%edx
 85dd783:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dd786:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85dd789:	75 7f                	jne    85dd80a <_ZN8PvP_Room10DisconnectEP5CUser+0xb6>
 85dd78b:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd78e:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dd794:	8b 00                	mov    (%eax),%eax
 85dd796:	83 c0 44             	add    $0x44,%eax
 85dd799:	8b 08                	mov    (%eax),%ecx
 85dd79b:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd79e:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dd7a4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dd7a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dd7ab:	8b 55 08             	mov    0x8(%ebp),%edx
 85dd7ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd7b2:	89 04 24             	mov    %eax,(%esp)
 85dd7b5:	ff d1                	call   *%ecx
 85dd7b7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dd7ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd7bd:	83 c2 0c             	add    $0xc,%edx
 85dd7c0:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dd7c3:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 85dd7ca:	00 
 85dd7cb:	c7 44 24 0c fe 00 00 	movl   $0xfe,0xc(%esp)
 85dd7d2:	00 
 85dd7d3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dd7d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dd7da:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd7de:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd7e1:	89 04 24             	mov    %eax,(%esp)
 85dd7e4:	e8 bb fc ff ff       	call   85dd4a4 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 85dd7e9:	83 f0 01             	xor    $0x1,%eax
 85dd7ec:	84 c0                	test   %al,%al
 85dd7ee:	74 12                	je     85dd802 <_ZN8PvP_Room10DisconnectEP5CUser+0xae>
 85dd7f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd7f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd7f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd7fa:	89 04 24             	mov    %eax,(%esp)
 85dd7fd:	e8 b8 fe ff ff       	call   85dd6ba <_ZN8PvP_Room12ClearPvPRoomEP5CUser>
 85dd802:	b8 01 00 00 00       	mov    $0x1,%eax
 85dd807:	eb 19                	jmp    85dd822 <_ZN8PvP_Room10DisconnectEP5CUser+0xce>
 85dd809:	90                   	nop
 85dd80a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85dd80e:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85dd812:	0f 9e c0             	setle  %al
 85dd815:	84 c0                	test   %al,%al
 85dd817:	0f 85 49 ff ff ff    	jne    85dd766 <_ZN8PvP_Room10DisconnectEP5CUser+0x12>
 85dd81d:	b8 00 00 00 00       	mov    $0x0,%eax
 85dd822:	c9                   	leave
 85dd823:	c3                   	ret

```

```c
// PvP_Room::Disconnect @ 0x85dd754

/* PvP_Room::Disconnect(CUser*) */

undefined4 __thiscall PvP_Room::Disconnect(PvP_Room *this,CUser *param_1)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      return 0;
    }
    if ((*(int *)(this + (local_10 + 0xc) * 4) != 0) &&
       (*(CUser **)(this + (local_10 + 0xc) * 4) == param_1)) break;
    local_10 = local_10 + 1;
  }
  (**(code **)(**(int **)(this + 0x6e4) + 0x44))(*(undefined4 *)(this + 0x6e4),this,local_10);
  cVar1 = WalkOut(this,*(undefined4 *)(this + (local_10 + 0xc) * 4),local_10,0xfe,3);
  if (cVar1 != '\x01') {
    ClearPvPRoom((CUser *)this);
  }
  return 1;
}

```

---

## DrawRandomMapIndex

```asm
// === 085d88ae PvP_Room::DrawRandomMapIndex  [0x085d88ae-0x85d8b29] ===
 85d88ae:	55                   	push   %ebp
 85d88af:	89 e5                	mov    %esp,%ebp
 85d88b1:	56                   	push   %esi
 85d88b2:	53                   	push   %ebx
 85d88b3:	83 ec 60             	sub    $0x60,%esp
 85d88b6:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 85d88ba:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d88bd:	89 04 24             	mov    %eax,(%esp)
 85d88c0:	e8 e7 58 ab ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85d88c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d88c8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d88cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d88cf:	89 04 24             	mov    %eax,(%esp)
 85d88d2:	e8 71 59 ab ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 85d88d7:	83 ec 04             	sub    $0x4,%esp
 85d88da:	eb 69                	jmp    85d8945 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x97>
 85d88dc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d88df:	89 04 24             	mov    %eax,(%esp)
 85d88e2:	e8 e5 5e ab ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 85d88e7:	8b 00                	mov    (%eax),%eax
 85d88e9:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 85d88ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d88f0:	89 04 24             	mov    %eax,(%esp)
 85d88f3:	e8 98 bd ff ff       	call   85d4690 <_Z15IsDeathMatchMapiRb>
 85d88f8:	84 c0                	test   %al,%al
 85d88fa:	74 3e                	je     85d893a <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x8c>
 85d88fc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d88ff:	89 04 24             	mov    %eax,(%esp)
 85d8902:	e8 c5 5e ab ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 85d8907:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d890b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d890e:	89 04 24             	mov    %eax,(%esp)
 85d8911:	e8 10 88 b3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 85d8916:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d8919:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85d891c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d8920:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d8923:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d8927:	89 04 24             	mov    %eax,(%esp)
 85d892a:	e8 5f 1b b1 ff       	call   80ea48e <_ZNSt6vectorIiSaIiEE5eraseEN9__gnu_cxx17__normal_iteratorIPiS1_EE>
 85d892f:	83 ec 04             	sub    $0x4,%esp
 85d8932:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85d8935:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85d8938:	eb 0b                	jmp    85d8945 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x97>
 85d893a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d893d:	89 04 24             	mov    %eax,(%esp)
 85d8940:	e8 47 20 b1 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 85d8945:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85d8948:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d894b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d894f:	89 04 24             	mov    %eax,(%esp)
 85d8952:	e8 15 59 ab ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 85d8957:	83 ec 04             	sub    $0x4,%esp
 85d895a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85d895d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8961:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d8964:	89 04 24             	mov    %eax,(%esp)
 85d8967:	e8 f6 1a b1 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 85d896c:	84 c0                	test   %al,%al
 85d896e:	0f 85 68 ff ff ff    	jne    85d88dc <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x2e>
 85d8974:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85d897b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d897e:	89 04 24             	mov    %eax,(%esp)
 85d8981:	e8 3a 58 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d8986:	85 c0                	test   %eax,%eax
 85d8988:	75 16                	jne    85d89a0 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0xf2>
 85d898a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d898d:	89 04 24             	mov    %eax,(%esp)
 85d8990:	e8 2b 58 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d8995:	85 c0                	test   %eax,%eax
 85d8997:	75 07                	jne    85d89a0 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0xf2>
 85d8999:	b8 01 00 00 00       	mov    $0x1,%eax
 85d899e:	eb 05                	jmp    85d89a5 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0xf7>
 85d89a0:	b8 00 00 00 00       	mov    $0x0,%eax
 85d89a5:	84 c0                	test   %al,%al
 85d89a7:	74 31                	je     85d89da <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x12c>
 85d89a9:	e8 f2 52 aa ff       	call   807dca0 <rand@plt>
 85d89ae:	89 c3                	mov    %eax,%ebx
 85d89b0:	e8 e6 37 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d89b5:	8b 40 04             	mov    0x4(%eax),%eax
 85d89b8:	89 04 24             	mov    %eax,(%esp)
 85d89bb:	e8 d6 6d 00 00       	call   85df796 <_ZNK8CMapList14GetPVPMapCountEv>
 85d89c0:	89 45 b0             	mov    %eax,-0x50(%ebp)
 85d89c3:	89 da                	mov    %ebx,%edx
 85d89c5:	89 d0                	mov    %edx,%eax
 85d89c7:	c1 fa 1f             	sar    $0x1f,%edx
 85d89ca:	f7 7d b0             	idivl  -0x50(%ebp)
 85d89cd:	89 d0                	mov    %edx,%eax
 85d89cf:	83 c0 01             	add    $0x1,%eax
 85d89d2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d89d5:	e9 1a 01 00 00       	jmp    85d8af4 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x246>
 85d89da:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d89dd:	89 04 24             	mov    %eax,(%esp)
 85d89e0:	e8 db 57 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d89e5:	85 c0                	test   %eax,%eax
 85d89e7:	75 16                	jne    85d89ff <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x151>
 85d89e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d89ec:	89 04 24             	mov    %eax,(%esp)
 85d89ef:	e8 cc 57 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d89f4:	85 c0                	test   %eax,%eax
 85d89f6:	74 07                	je     85d89ff <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x151>
 85d89f8:	b8 01 00 00 00       	mov    $0x1,%eax
 85d89fd:	eb 05                	jmp    85d8a04 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x156>
 85d89ff:	b8 00 00 00 00       	mov    $0x0,%eax
 85d8a04:	84 c0                	test   %al,%al
 85d8a06:	74 42                	je     85d8a4a <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x19c>
 85d8a08:	e8 93 52 aa ff       	call   807dca0 <rand@plt>
 85d8a0d:	89 c3                	mov    %eax,%ebx
 85d8a0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8a12:	89 04 24             	mov    %eax,(%esp)
 85d8a15:	e8 a6 57 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d8a1a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85d8a1d:	89 d8                	mov    %ebx,%eax
 85d8a1f:	ba 00 00 00 00       	mov    $0x0,%edx
 85d8a24:	f7 75 b4             	divl   -0x4c(%ebp)
 85d8a27:	89 d1                	mov    %edx,%ecx
 85d8a29:	89 c8                	mov    %ecx,%eax
 85d8a2b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85d8a2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d8a31:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8a35:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8a38:	89 04 24             	mov    %eax,(%esp)
 85d8a3b:	e8 9c 57 ab ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85d8a40:	8b 00                	mov    (%eax),%eax
 85d8a42:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d8a45:	e9 aa 00 00 00       	jmp    85d8af4 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x246>
 85d8a4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8a4d:	89 04 24             	mov    %eax,(%esp)
 85d8a50:	e8 6b 57 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d8a55:	85 c0                	test   %eax,%eax
 85d8a57:	75 16                	jne    85d8a6f <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x1c1>
 85d8a59:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d8a5c:	89 04 24             	mov    %eax,(%esp)
 85d8a5f:	e8 5c 57 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d8a64:	85 c0                	test   %eax,%eax
 85d8a66:	74 07                	je     85d8a6f <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x1c1>
 85d8a68:	b8 01 00 00 00       	mov    $0x1,%eax
 85d8a6d:	eb 05                	jmp    85d8a74 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x1c6>
 85d8a6f:	b8 00 00 00 00       	mov    $0x0,%eax
 85d8a74:	84 c0                	test   %al,%al
 85d8a76:	74 3f                	je     85d8ab7 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x209>
 85d8a78:	e8 23 52 aa ff       	call   807dca0 <rand@plt>
 85d8a7d:	89 c3                	mov    %eax,%ebx
 85d8a7f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d8a82:	89 04 24             	mov    %eax,(%esp)
 85d8a85:	e8 36 57 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d8a8a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85d8a8d:	89 d8                	mov    %ebx,%eax
 85d8a8f:	ba 00 00 00 00       	mov    $0x0,%edx
 85d8a94:	f7 75 b4             	divl   -0x4c(%ebp)
 85d8a97:	89 d1                	mov    %edx,%ecx
 85d8a99:	89 c8                	mov    %ecx,%eax
 85d8a9b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d8a9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d8aa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8aa5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d8aa8:	89 04 24             	mov    %eax,(%esp)
 85d8aab:	e8 2c 57 ab ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85d8ab0:	8b 00                	mov    (%eax),%eax
 85d8ab2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d8ab5:	eb 3d                	jmp    85d8af4 <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE+0x246>
 85d8ab7:	e8 e4 51 aa ff       	call   807dca0 <rand@plt>
 85d8abc:	89 c3                	mov    %eax,%ebx
 85d8abe:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8ac1:	89 04 24             	mov    %eax,(%esp)
 85d8ac4:	e8 f7 56 ab ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85d8ac9:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85d8acc:	89 d8                	mov    %ebx,%eax
 85d8ace:	ba 00 00 00 00       	mov    $0x0,%edx
 85d8ad3:	f7 75 b4             	divl   -0x4c(%ebp)
 85d8ad6:	89 d1                	mov    %edx,%ecx
 85d8ad8:	89 c8                	mov    %ecx,%eax
 85d8ada:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d8add:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d8ae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8ae4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8ae7:	89 04 24             	mov    %eax,(%esp)
 85d8aea:	e8 ed 56 ab ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85d8aef:	8b 00                	mov    (%eax),%eax
 85d8af1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d8af4:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 85d8af7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d8afa:	89 04 24             	mov    %eax,(%esp)
 85d8afd:	e8 d8 b2 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85d8b02:	89 d8                	mov    %ebx,%eax
 85d8b04:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85d8b07:	83 c4 00             	add    $0x0,%esp
 85d8b0a:	5b                   	pop    %ebx
 85d8b0b:	5e                   	pop    %esi
 85d8b0c:	5d                   	pop    %ebp
 85d8b0d:	c3                   	ret
 85d8b0e:	89 d3                	mov    %edx,%ebx
 85d8b10:	89 c6                	mov    %eax,%esi
 85d8b12:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d8b15:	89 04 24             	mov    %eax,(%esp)
 85d8b18:	e8 bd b2 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85d8b1d:	89 f0                	mov    %esi,%eax
 85d8b1f:	89 da                	mov    %ebx,%edx
 85d8b21:	89 04 24             	mov    %eax,(%esp)
 85d8b24:	e8 27 ac 50 00       	call   8ae3750 <_Unwind_Resume>
 85d8b29:	90                   	nop

```

```c
// PvP_Room::DrawRandomMapIndex @ 0x85d88ae

/* PvP_Room::DrawRandomMapIndex(std::vector<int, std::allocator<int> >&) */

int __thiscall PvP_Room::DrawRandomMapIndex(PvP_Room *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_40 [3];
  undefined4 local_34;
  vector<int,std::allocator<int>> local_30 [15];
  bool local_21;
  __normal_iterator local_20 [4];
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_21 = false;
  std::vector<int,std::allocator<int>>::vector(local_30);
                    /* try { // try from 085d88d2 to 085d89b4 has its CatchHandler @ 085d8b0e */
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_34,local_20);
    if (!bVar2) break;
    piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                              &local_34);
    cVar1 = IsDeathMatchMap(*piVar6,&local_21);
    if (cVar1 == '\0') {
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_34);
    }
    else {
      piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                &local_34);
      std::vector<int,std::allocator<int>>::push_back(local_30,piVar6);
      std::vector<int,std::allocator<int>>::erase(local_40,param_1,local_34);
      local_34 = local_40[0];
    }
  }
  local_1c = 0;
  iVar3 = std::vector<int,std::allocator<int>>::size(local_30);
  if (iVar3 == 0) {
    iVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
    if (iVar3 != 0) goto LAB_085d89a0;
    bVar2 = true;
  }
  else {
LAB_085d89a0:
    bVar2 = false;
  }
  if (bVar2) {
    iVar3 = rand();
    iVar4 = G_CDataManager();
    iVar4 = CMapList::GetPVPMapCount(*(CMapList **)(iVar4 + 4));
    local_1c = iVar3 % iVar4 + 1;
    goto LAB_085d8af4;
  }
  iVar3 = std::vector<int,std::allocator<int>>::size(local_30);
  if (iVar3 == 0) {
    iVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
    if (iVar3 == 0) goto LAB_085d89ff;
    bVar2 = true;
  }
  else {
LAB_085d89ff:
    bVar2 = false;
  }
  if (bVar2) {
    uVar5 = rand();
    local_18 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)param_1);
    local_18 = uVar5 % local_18;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)param_1,local_18);
    local_1c = *piVar6;
    goto LAB_085d8af4;
  }
  iVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
  if (iVar3 == 0) {
    iVar3 = std::vector<int,std::allocator<int>>::size(local_30);
    if (iVar3 == 0) goto LAB_085d8a6f;
    bVar2 = true;
  }
  else {
LAB_085d8a6f:
    bVar2 = false;
  }
  if (bVar2) {
    uVar5 = rand();
    local_14 = std::vector<int,std::allocator<int>>::size(local_30);
    local_14 = uVar5 % local_14;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_30,local_14);
    local_1c = *piVar6;
  }
  else {
    uVar5 = rand();
    local_10 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)param_1);
    local_10 = uVar5 % local_10;
    piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)param_1,local_10);
    local_1c = *piVar6;
  }
LAB_085d8af4:
  iVar3 = local_1c;
  std::vector<int,std::allocator<int>>::~vector(local_30);
  return iVar3;
}

```

---

## GetAce

```asm
// === 085dc64c PvP_Room::GetAce  [0x085dc64c-0x85dc6ed] ===
 85dc64c:	55                   	push   %ebp
 85dc64d:	89 e5                	mov    %esp,%ebp
 85dc64f:	83 ec 10             	sub    $0x10,%esp
 85dc652:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 85dc659:	c7 45 f8 ff ff ff ff 	movl   $0xffffffff,-0x8(%ebp)
 85dc660:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85dc667:	eb 74                	jmp    85dc6dd <_ZNK8PvP_Room6GetAceEv+0x91>
 85dc669:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc66c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc66f:	83 c2 0c             	add    $0xc,%edx
 85dc672:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc675:	85 c0                	test   %eax,%eax
 85dc677:	74 60                	je     85dc6d9 <_ZNK8PvP_Room6GetAceEv+0x8d>
 85dc679:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc67c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc67f:	83 c2 24             	add    $0x24,%edx
 85dc682:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 85dc686:	3b 45 f8             	cmp    -0x8(%ebp),%eax
 85dc689:	7e 18                	jle    85dc6a3 <_ZNK8PvP_Room6GetAceEv+0x57>
 85dc68b:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc68e:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc691:	83 c2 24             	add    $0x24,%edx
 85dc694:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 85dc698:	89 45 f8             	mov    %eax,-0x8(%ebp)
 85dc69b:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dc69e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dc6a1:	eb 36                	jmp    85dc6d9 <_ZNK8PvP_Room6GetAceEv+0x8d>
 85dc6a3:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc6a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc6a9:	83 c2 24             	add    $0x24,%edx
 85dc6ac:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 85dc6b0:	3b 45 f8             	cmp    -0x8(%ebp),%eax
 85dc6b3:	75 24                	jne    85dc6d9 <_ZNK8PvP_Room6GetAceEv+0x8d>
 85dc6b5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc6b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc6bb:	83 c2 1c             	add    $0x1c,%edx
 85dc6be:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 85dc6c2:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 85dc6c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc6c8:	83 c1 1c             	add    $0x1c,%ecx
 85dc6cb:	8b 44 88 08          	mov    0x8(%eax,%ecx,4),%eax
 85dc6cf:	39 c2                	cmp    %eax,%edx
 85dc6d1:	7d 06                	jge    85dc6d9 <_ZNK8PvP_Room6GetAceEv+0x8d>
 85dc6d3:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dc6d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dc6d9:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85dc6dd:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85dc6e1:	0f 9e c0             	setle  %al
 85dc6e4:	84 c0                	test   %al,%al
 85dc6e6:	75 81                	jne    85dc669 <_ZNK8PvP_Room6GetAceEv+0x1d>
 85dc6e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dc6eb:	c9                   	leave
 85dc6ec:	c3                   	ret
 85dc6ed:	90                   	nop

```

```c
// PvP_Room::GetAce @ 0x85dc64c

/* PvP_Room::GetAce() const */

int __thiscall PvP_Room::GetAce(PvP_Room *this)

{
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = -1;
  local_c = -1;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (*(int *)(this + (local_8 + 0xc) * 4) != 0) {
      if (local_c < *(int *)(this + (local_8 + 0x24) * 4 + 8)) {
        local_c = *(int *)(this + (local_8 + 0x24) * 4 + 8);
        local_10 = local_8;
      }
      else if ((*(int *)(this + (local_8 + 0x24) * 4 + 8) == local_c) &&
              (*(int *)(this + (local_10 + 0x1c) * 4 + 8) <
               *(int *)(this + (local_8 + 0x1c) * 4 + 8))) {
        local_10 = local_8;
      }
    }
  }
  return local_10;
}

```

---

## GetCandidateMapIndexList

```asm
// === 085d87be PvP_Room::GetCandidateMapIndexList  [0x085d87be-0x85d88ad] ===
 85d87be:	55                   	push   %ebp
 85d87bf:	89 e5                	mov    %esp,%ebp
 85d87c1:	83 ec 28             	sub    $0x28,%esp
 85d87c4:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 85d87c8:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 85d87cf:	e9 a1 00 00 00       	jmp    85d8875 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xb7>
 85d87d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d87d7:	8d 55 f7             	lea    -0x9(%ebp),%edx
 85d87da:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d87de:	89 04 24             	mov    %eax,(%esp)
 85d87e1:	e8 aa be ff ff       	call   85d4690 <_Z15IsDeathMatchMapiRb>
 85d87e6:	84 c0                	test   %al,%al
 85d87e8:	74 2c                	je     85d8816 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0x58>
 85d87ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85d87ed:	8b 40 04             	mov    0x4(%eax),%eax
 85d87f0:	83 f8 03             	cmp    $0x3,%eax
 85d87f3:	74 70                	je     85d8865 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xa7>
 85d87f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d87f8:	8b 40 04             	mov    0x4(%eax),%eax
 85d87fb:	83 f8 01             	cmp    $0x1,%eax
 85d87fe:	74 0b                	je     85d880b <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0x4d>
 85d8800:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8803:	8b 40 04             	mov    0x4(%eax),%eax
 85d8806:	83 f8 04             	cmp    $0x4,%eax
 85d8809:	75 0b                	jne    85d8816 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0x58>
 85d880b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 85d880f:	83 f0 01             	xor    $0x1,%eax
 85d8812:	84 c0                	test   %al,%al
 85d8814:	75 52                	jne    85d8868 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xaa>
 85d8816:	e8 8c 1b b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d881b:	89 04 24             	mov    %eax,(%esp)
 85d881e:	e8 fd e2 b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d8823:	83 f8 07             	cmp    $0x7,%eax
 85d8826:	0f 94 c0             	sete   %al
 85d8829:	84 c0                	test   %al,%al
 85d882b:	74 13                	je     85d8840 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0x82>
 85d882d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d8830:	0f b6 80 1c 71 4f 09 	movzbl 0x94f711c(%eax),%eax
 85d8837:	83 f0 01             	xor    $0x1,%eax
 85d883a:	84 c0                	test   %al,%al
 85d883c:	74 13                	je     85d8851 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0x93>
 85d883e:	eb 2c                	jmp    85d886c <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xae>
 85d8840:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d8843:	0f b6 80 08 71 4f 09 	movzbl 0x94f7108(%eax),%eax
 85d884a:	83 f0 01             	xor    $0x1,%eax
 85d884d:	84 c0                	test   %al,%al
 85d884f:	75 1a                	jne    85d886b <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xad>
 85d8851:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85d8854:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8858:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d885b:	89 04 24             	mov    %eax,(%esp)
 85d885e:	e8 c3 88 b3 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 85d8863:	eb 07                	jmp    85d886c <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xae>
 85d8865:	90                   	nop
 85d8866:	eb 04                	jmp    85d886c <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xae>
 85d8868:	90                   	nop
 85d8869:	eb 01                	jmp    85d886c <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xae>
 85d886b:	90                   	nop
 85d886c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d886f:	83 c0 01             	add    $0x1,%eax
 85d8872:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d8875:	e8 21 39 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d887a:	8b 40 04             	mov    0x4(%eax),%eax
 85d887d:	89 04 24             	mov    %eax,(%esp)
 85d8880:	e8 11 6f 00 00       	call   85df796 <_ZNK8CMapList14GetPVPMapCountEv>
 85d8885:	8d 50 01             	lea    0x1(%eax),%edx
 85d8888:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d888b:	39 c2                	cmp    %eax,%edx
 85d888d:	7e 0f                	jle    85d889e <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xe0>
 85d888f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d8892:	83 f8 13             	cmp    $0x13,%eax
 85d8895:	7f 07                	jg     85d889e <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xe0>
 85d8897:	b8 01 00 00 00       	mov    $0x1,%eax
 85d889c:	eb 05                	jmp    85d88a3 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0xe5>
 85d889e:	b8 00 00 00 00       	mov    $0x0,%eax
 85d88a3:	84 c0                	test   %al,%al
 85d88a5:	0f 85 29 ff ff ff    	jne    85d87d4 <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE+0x16>
 85d88ab:	c9                   	leave
 85d88ac:	c3                   	ret
 85d88ad:	90                   	nop

```

```c
// PvP_Room::GetCandidateMapIndexList @ 0x85d87be

/* PvP_Room::GetCandidateMapIndexList(std::vector<int, std::allocator<int> >&) */

void __thiscall PvP_Room::GetCandidateMapIndexList(PvP_Room *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  int local_14;
  bool local_d [9];
  
  local_d[0] = false;
  local_14 = 1;
  while( true ) {
    iVar3 = G_CDataManager();
    iVar3 = CMapList::GetPVPMapCount(*(CMapList **)(iVar3 + 4));
    if ((local_14 < iVar3 + 1) && (local_14 < 0x14)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    cVar2 = IsDeathMatchMap(local_14,local_d);
    if ((cVar2 == '\0') ||
       ((*(int *)(this + 4) != 3 &&
        (((*(int *)(this + 4) != 1 && (*(int *)(this + 4) != 4)) || (local_d[0] == true)))))) {
      this_00 = (GameWorld *)G_GameWorld();
      iVar3 = GameWorld::GetChannelType(this_00);
      if (iVar3 == 7) {
        cVar2 = PVPMAP_ONLY_TOURNAMENT_RANDOM[local_14];
      }
      else {
        cVar2 = PVPMAP_ONLY_NORMAL_EXPOSURE[local_14];
      }
      if (cVar2 == '\x01') {
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_1,&local_14);
      }
    }
    local_14 = local_14 + 1;
  }
  return;
}

```

---

## GetRanking

```asm
// === 085dc52c PvP_Room::GetRanking  [0x085dc52c-0x85dc64b] ===
 85dc52c:	55                   	push   %ebp
 85dc52d:	89 e5                	mov    %esp,%ebp
 85dc52f:	83 ec 58             	sub    $0x58,%esp
 85dc532:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc535:	8b 40 04             	mov    0x4(%eax),%eax
 85dc538:	83 f8 04             	cmp    $0x4,%eax
 85dc53b:	74 0b                	je     85dc548 <_ZNK8PvP_Room10GetRankingEPi+0x1c>
 85dc53d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc540:	8b 40 04             	mov    0x4(%eax),%eax
 85dc543:	83 f8 05             	cmp    $0x5,%eax
 85dc546:	75 27                	jne    85dc56f <_ZNK8PvP_Room10GetRankingEPi+0x43>
 85dc548:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc54b:	8d 48 30             	lea    0x30(%eax),%ecx
 85dc54e:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc551:	8d 90 9c 06 00 00    	lea    0x69c(%eax),%edx
 85dc557:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dc55a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dc55e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85dc562:	89 14 24             	mov    %edx,(%esp)
 85dc565:	e8 0c 30 00 00       	call   85df576 <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi>
 85dc56a:	e9 db 00 00 00       	jmp    85dc64a <_ZNK8PvP_Room10GetRankingEPi+0x11e>
 85dc56f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85dc576:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85dc57d:	e9 b6 00 00 00       	jmp    85dc638 <_ZNK8PvP_Room10GetRankingEPi+0x10c>
 85dc582:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85dc585:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc588:	83 c2 0c             	add    $0xc,%edx
 85dc58b:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc58e:	85 c0                	test   %eax,%eax
 85dc590:	0f 84 9e 00 00 00    	je     85dc634 <_ZNK8PvP_Room10GetRankingEPi+0x108>
 85dc596:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85dc599:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc59c:	83 c2 1c             	add    $0x1c,%edx
 85dc59f:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 85dc5a3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85dc5a6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85dc5ad:	eb 16                	jmp    85dc5c5 <_ZNK8PvP_Room10GetRankingEPi+0x99>
 85dc5af:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dc5b2:	8b 44 85 c0          	mov    -0x40(%ebp,%eax,4),%eax
 85dc5b6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85dc5b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85dc5bc:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 85dc5bf:	7c 13                	jl     85dc5d4 <_ZNK8PvP_Room10GetRankingEPi+0xa8>
 85dc5c1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85dc5c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dc5c8:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85dc5cb:	0f 9c c0             	setl   %al
 85dc5ce:	84 c0                	test   %al,%al
 85dc5d0:	75 dd                	jne    85dc5af <_ZNK8PvP_Room10GetRankingEPi+0x83>
 85dc5d2:	eb 01                	jmp    85dc5d5 <_ZNK8PvP_Room10GetRankingEPi+0xa9>
 85dc5d4:	90                   	nop
 85dc5d5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85dc5d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dc5db:	eb 2e                	jmp    85dc60b <_ZNK8PvP_Room10GetRankingEPi+0xdf>
 85dc5dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dc5e0:	c1 e0 02             	shl    $0x2,%eax
 85dc5e3:	03 45 0c             	add    0xc(%ebp),%eax
 85dc5e6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc5e9:	83 ea 01             	sub    $0x1,%edx
 85dc5ec:	c1 e2 02             	shl    $0x2,%edx
 85dc5ef:	03 55 0c             	add    0xc(%ebp),%edx
 85dc5f2:	8b 12                	mov    (%edx),%edx
 85dc5f4:	89 10                	mov    %edx,(%eax)
 85dc5f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dc5f9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc5fc:	83 ea 01             	sub    $0x1,%edx
 85dc5ff:	8b 54 95 c0          	mov    -0x40(%ebp,%edx,4),%edx
 85dc603:	89 54 85 c0          	mov    %edx,-0x40(%ebp,%eax,4)
 85dc607:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 85dc60b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dc60e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85dc611:	0f 9c c0             	setl   %al
 85dc614:	84 c0                	test   %al,%al
 85dc616:	75 c5                	jne    85dc5dd <_ZNK8PvP_Room10GetRankingEPi+0xb1>
 85dc618:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dc61b:	c1 e0 02             	shl    $0x2,%eax
 85dc61e:	03 45 0c             	add    0xc(%ebp),%eax
 85dc621:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85dc624:	89 10                	mov    %edx,(%eax)
 85dc626:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dc629:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85dc62c:	89 54 85 c0          	mov    %edx,-0x40(%ebp,%eax,4)
 85dc630:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85dc634:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85dc638:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 85dc63c:	0f 9e c0             	setle  %al
 85dc63f:	84 c0                	test   %al,%al
 85dc641:	0f 85 3b ff ff ff    	jne    85dc582 <_ZNK8PvP_Room10GetRankingEPi+0x56>
 85dc647:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85dc64a:	c9                   	leave
 85dc64b:	c3                   	ret

```

```c
// PvP_Room::GetRanking @ 0x85dc52c

/* PvP_Room::GetRanking(int*) const */

int __thiscall PvP_Room::GetRanking(PvP_Room *this,int *param_1)

{
  int aiStack_44 [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
    local_24 = CDeathMatchBattleMgr::getRanking
                         ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),param_1);
  }
  else {
    local_24 = 0;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if (*(int *)(this + (local_20 + 0xc) * 4) != 0) {
        local_1c = *(int *)(this + (local_20 + 0x1c) * 4 + 8);
        for (local_18 = 0;
            (local_18 < local_24 &&
            (local_14 = aiStack_44[local_18], local_1c <= aiStack_44[local_18]));
            local_18 = local_18 + 1) {
        }
        for (local_10 = local_24; local_18 < local_10; local_10 = local_10 + -1) {
          param_1[local_10] = param_1[local_10 + -1];
          aiStack_44[local_10] = aiStack_44[local_10 + -1];
        }
        param_1[local_18] = local_20;
        aiStack_44[local_18] = local_1c;
        local_24 = local_24 + 1;
      }
    }
  }
  return local_24;
}

```

---

## GetTeamIndex

```asm
// === 085dc6ee PvP_Room::GetTeamIndex  [0x085dc6ee-0x85dc777] ===
 85dc6ee:	55                   	push   %ebp
 85dc6ef:	89 e5                	mov    %esp,%ebp
 85dc6f1:	83 ec 10             	sub    $0x10,%esp
 85dc6f4:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85dc6fb:	eb 28                	jmp    85dc725 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x37>
 85dc6fd:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc700:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc703:	83 c2 0c             	add    $0xc,%edx
 85dc706:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc709:	85 c0                	test   %eax,%eax
 85dc70b:	74 13                	je     85dc720 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x32>
 85dc70d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc710:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc713:	83 c2 0c             	add    $0xc,%edx
 85dc716:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc719:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85dc71c:	74 14                	je     85dc732 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x44>
 85dc71e:	eb 01                	jmp    85dc721 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x33>
 85dc720:	90                   	nop
 85dc721:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85dc725:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85dc729:	0f 9e c0             	setle  %al
 85dc72c:	84 c0                	test   %al,%al
 85dc72e:	75 cd                	jne    85dc6fd <_ZN8PvP_Room12GetTeamIndexEP5CUser+0xf>
 85dc730:	eb 01                	jmp    85dc733 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x45>
 85dc732:	90                   	nop
 85dc733:	83 7d fc 08          	cmpl   $0x8,-0x4(%ebp)
 85dc737:	75 07                	jne    85dc740 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x52>
 85dc739:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85dc73e:	eb 35                	jmp    85dc775 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x87>
 85dc740:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc743:	8b 40 04             	mov    0x4(%eax),%eax
 85dc746:	83 f8 01             	cmp    $0x1,%eax
 85dc749:	74 0b                	je     85dc756 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x68>
 85dc74b:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc74e:	8b 40 04             	mov    0x4(%eax),%eax
 85dc751:	83 f8 04             	cmp    $0x4,%eax
 85dc754:	75 08                	jne    85dc75e <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x70>
 85dc756:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dc759:	89 45 f8             	mov    %eax,-0x8(%ebp)
 85dc75c:	eb 14                	jmp    85dc772 <_ZN8PvP_Room12GetTeamIndexEP5CUser+0x84>
 85dc75e:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dc761:	8b 55 08             	mov    0x8(%ebp),%edx
 85dc764:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85dc76b:	00 
 85dc76c:	0f b6 c0             	movzbl %al,%eax
 85dc76f:	89 45 f8             	mov    %eax,-0x8(%ebp)
 85dc772:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85dc775:	c9                   	leave
 85dc776:	c3                   	ret
 85dc777:	90                   	nop

```

```c
// PvP_Room::GetTeamIndex @ 0x85dc6ee

/* PvP_Room::GetTeamIndex(CUser*) */

uint __thiscall PvP_Room::GetTeamIndex(PvP_Room *this,CUser *param_1)

{
  uint local_8;
  
  local_8 = 0;
  while (((int)local_8 < 8 &&
         ((*(int *)(this + (local_8 + 0xc) * 4) == 0 ||
          (*(CUser **)(this + (local_8 + 0xc) * 4) != param_1))))) {
    local_8 = local_8 + 1;
  }
  if (local_8 == 8) {
    local_8 = 0xffffffff;
  }
  else if ((*(int *)(this + 4) != 1) && (*(int *)(this + 4) != 4)) {
    local_8 = (uint)(byte)this[local_8 + 0x5d0];
  }
  return local_8;
}

```

---

## GiveOuterPenalty

```asm
// === 085dcaf2 PvP_Room::GiveOuterPenalty  [0x085dcaf2-0x85dcd7d] ===
 85dcaf2:	55                   	push   %ebp
 85dcaf3:	89 e5                	mov    %esp,%ebp
 85dcaf5:	56                   	push   %esi
 85dcaf6:	53                   	push   %ebx
 85dcaf7:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 85dcafd:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 85dcb03:	89 04 24             	mov    %eax,(%esp)
 85dcb06:	e8 cf 8d ff ff       	call   85d58da <_ZN13PvpResultTypeC1Ev>
 85dcb0b:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 85dcb11:	89 04 24             	mov    %eax,(%esp)
 85dcb14:	e8 a7 92 ff ff       	call   85d5dc0 <_ZN13PvpResultType5ClearEv>
 85dcb19:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 85dcb1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dcb23:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcb26:	89 04 24             	mov    %eax,(%esp)
 85dcb29:	e8 56 04 08 00       	call   865cf84 <_ZN5CUser15update_pvp_rankERK13PvpResultType>
 85dcb2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcb31:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dcb35:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcb38:	89 04 24             	mov    %eax,(%esp)
 85dcb3b:	e8 ae fb ff ff       	call   85dc6ee <_ZN8PvP_Room12GetTeamIndexEP5CUser>
 85dcb40:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dcb43:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcb46:	8d 90 68 02 00 00    	lea    0x268(%eax),%edx
 85dcb4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dcb4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dcb53:	89 14 24             	mov    %edx,(%esp)
 85dcb56:	e8 b9 7e ff ff       	call   85d4a14 <_ZN12PvpUserTable11IsValidTeamEi>
 85dcb5b:	83 f0 01             	xor    $0x1,%eax
 85dcb5e:	84 c0                	test   %al,%al
 85dcb60:	74 42                	je     85dcba4 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0xb2>
 85dcb62:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85dcb69:	00 
 85dcb6a:	c7 44 24 08 f8 10 00 	movl   $0x10f8,0x8(%esp)
 85dcb71:	00 
 85dcb72:	c7 44 24 04 00 24 cc 	movl   $0x8cc2400,0x4(%esp)
 85dcb79:	08 
 85dcb7a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dcb7d:	89 04 24             	mov    %eax,(%esp)
 85dcb80:	e8 93 2b f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85dcb85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dcb88:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dcb8c:	c7 44 24 04 5c 12 cc 	movl   $0x8cc125c,0x4(%esp)
 85dcb93:	08 
 85dcb94:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dcb97:	89 04 24             	mov    %eax,(%esp)
 85dcb9a:	e8 e9 2b f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85dcb9f:	e9 c2 01 00 00       	jmp    85dcd66 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x274>
 85dcba4:	e8 fe d7 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dcba9:	89 04 24             	mov    %eax,(%esp)
 85dcbac:	e8 6d 47 b1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 85dcbb1:	84 c0                	test   %al,%al
 85dcbb3:	74 34                	je     85dcbe9 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0xf7>
 85dcbb5:	a1 30 f7 41 09       	mov    0x941f730,%eax
 85dcbba:	c7 44 24 04 38 00 00 	movl   $0x38,0x4(%esp)
 85dcbc1:	00 
 85dcbc2:	89 04 24             	mov    %eax,(%esp)
 85dcbc5:	e8 ce 8d b3 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 85dcbca:	8b 10                	mov    (%eax),%edx
 85dcbcc:	83 c2 34             	add    $0x34,%edx
 85dcbcf:	8b 12                	mov    (%edx),%edx
 85dcbd1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dcbd8:	00 
 85dcbd9:	89 04 24             	mov    %eax,(%esp)
 85dcbdc:	ff d2                	call   *%edx
 85dcbde:	84 c0                	test   %al,%al
 85dcbe0:	74 07                	je     85dcbe9 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0xf7>
 85dcbe2:	b8 01 00 00 00       	mov    $0x1,%eax
 85dcbe7:	eb 05                	jmp    85dcbee <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0xfc>
 85dcbe9:	b8 00 00 00 00       	mov    $0x0,%eax
 85dcbee:	84 c0                	test   %al,%al
 85dcbf0:	74 65                	je     85dcc57 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x165>
 85dcbf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcbf5:	89 04 24             	mov    %eax,(%esp)
 85dcbf8:	e8 93 f0 ae ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85dcbfd:	85 c0                	test   %eax,%eax
 85dcbff:	0f 95 c0             	setne  %al
 85dcc02:	84 c0                	test   %al,%al
 85dcc04:	74 51                	je     85dcc57 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x165>
 85dcc06:	8d 45 d7             	lea    -0x29(%ebp),%eax
 85dcc09:	89 04 24             	mov    %eax,(%esp)
 85dcc0c:	e8 43 2d 00 00       	call   85df954 <_ZN24Packet_Server_Match_dataC1Ev>
 85dcc11:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcc14:	89 04 24             	mov    %eax,(%esp)
 85dcc17:	e8 74 f0 ae ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85dcc1c:	88 45 e1             	mov    %al,-0x1f(%ebp)
 85dcc1f:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 85dcc23:	8d 5d d7             	lea    -0x29(%ebp),%ebx
 85dcc26:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcc29:	89 04 24             	mov    %eax,(%esp)
 85dcc2c:	e8 5f f0 ae ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85dcc31:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 85dcc37:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dcc3b:	89 14 24             	mov    %edx,(%esp)
 85dcc3e:	e8 b5 50 b3 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 85dcc43:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 85dcc4a:	00 
 85dcc4b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85dcc4f:	89 04 24             	mov    %eax,(%esp)
 85dcc52:	e8 ed 53 e9 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 85dcc57:	e8 4b d7 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dcc5c:	89 04 24             	mov    %eax,(%esp)
 85dcc5f:	e8 84 58 b6 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 85dcc64:	84 c0                	test   %al,%al
 85dcc66:	0f 84 89 00 00 00    	je     85dccf5 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x203>
 85dcc6c:	e8 36 d7 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dcc71:	89 04 24             	mov    %eax,(%esp)
 85dcc74:	e8 a7 9e b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85dcc79:	83 f8 04             	cmp    $0x4,%eax
 85dcc7c:	74 12                	je     85dcc90 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x19e>
 85dcc7e:	e8 24 d7 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dcc83:	89 04 24             	mov    %eax,(%esp)
 85dcc86:	e8 95 9e b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85dcc8b:	83 f8 08             	cmp    $0x8,%eax
 85dcc8e:	75 07                	jne    85dcc97 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x1a5>
 85dcc90:	b8 01 00 00 00       	mov    $0x1,%eax
 85dcc95:	eb 05                	jmp    85dcc9c <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x1aa>
 85dcc97:	b8 00 00 00 00       	mov    $0x0,%eax
 85dcc9c:	84 c0                	test   %al,%al
 85dcc9e:	74 29                	je     85dccc9 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x1d7>
 85dcca0:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcca3:	8d 90 68 02 00 00    	lea    0x268(%eax),%edx
 85dcca9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dccac:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dccb0:	89 14 24             	mov    %edx,(%esp)
 85dccb3:	e8 78 8a ff ff       	call   85d5730 <_ZN12PvpUserTable15GetLeavePenaltyEi>
 85dccb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dccbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dccbf:	89 04 24             	mov    %eax,(%esp)
 85dccc2:	e8 11 03 08 00       	call   865cfd8 <_ZN5CUser16update_pvp_pointEi>
 85dccc7:	eb 2c                	jmp    85dccf5 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x203>
 85dccc9:	e8 d9 d6 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dccce:	89 04 24             	mov    %eax,(%esp)
 85dccd1:	e8 4a 9e b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85dccd6:	83 f8 06             	cmp    $0x6,%eax
 85dccd9:	0f 94 c0             	sete   %al
 85dccdc:	84 c0                	test   %al,%al
 85dccde:	74 15                	je     85dccf5 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x203>
 85dcce0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85dcce7:	ff 
 85dcce8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcceb:	89 04 24             	mov    %eax,(%esp)
 85dccee:	e8 43 fc 07 00       	call   865c936 <_ZN5CUser20add_guild_pvp_resultEi>
 85dccf3:	eb 71                	jmp    85dcd66 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x274>
 85dccf5:	e8 ad d6 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dccfa:	89 04 24             	mov    %eax,(%esp)
 85dccfd:	e8 90 2d 00 00       	call   85dfa92 <_ZNK9GameWorld20IsWinPointPvPChannelEv>
 85dcd02:	84 c0                	test   %al,%al
 85dcd04:	74 1b                	je     85dcd21 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x22f>
 85dcd06:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85dcd0d:	00 
 85dcd0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dcd15:	00 
 85dcd16:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcd19:	89 04 24             	mov    %eax,(%esp)
 85dcd1c:	e8 57 f9 07 00       	call   865c678 <_ZN5CUser14add_pvp_resultEbPj>
 85dcd21:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcd24:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dcd2a:	8b 00                	mov    (%eax),%eax
 85dcd2c:	83 c0 60             	add    $0x60,%eax
 85dcd2f:	8b 08                	mov    (%eax),%ecx
 85dcd31:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcd34:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dcd3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85dcd3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dcd41:	89 04 24             	mov    %eax,(%esp)
 85dcd44:	ff d1                	call   *%ecx
 85dcd46:	eb 1e                	jmp    85dcd66 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser+0x274>
 85dcd48:	89 d3                	mov    %edx,%ebx
 85dcd4a:	89 c6                	mov    %eax,%esi
 85dcd4c:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 85dcd52:	89 04 24             	mov    %eax,(%esp)
 85dcd55:	e8 86 8b ff ff       	call   85d58e0 <_ZN13PvpResultTypeD1Ev>
 85dcd5a:	89 f0                	mov    %esi,%eax
 85dcd5c:	89 da                	mov    %ebx,%edx
 85dcd5e:	89 04 24             	mov    %eax,(%esp)
 85dcd61:	e8 ea 69 50 00       	call   8ae3750 <_Unwind_Resume>
 85dcd66:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 85dcd6c:	89 04 24             	mov    %eax,(%esp)
 85dcd6f:	e8 6c 8b ff ff       	call   85d58e0 <_ZN13PvpResultTypeD1Ev>
 85dcd74:	81 c4 c0 00 00 00    	add    $0xc0,%esp
 85dcd7a:	5b                   	pop    %ebx
 85dcd7b:	5e                   	pop    %esi
 85dcd7c:	5d                   	pop    %ebp
 85dcd7d:	c3                   	ret

```

```c
// PvP_Room::GiveOuterPenalty @ 0x85dcaf2

/* PvP_Room::GiveOuterPenalty(CUser*) */

void __thiscall PvP_Room::GiveOuterPenalty(PvP_Room *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  CStatisticServerProxy *this_00;
  PvpResultType local_b4 [135];
  Packet_Server_Match_data local_2d [10];
  undefined1 local_23;
  undefined1 local_21;
  cMyTrace local_20 [16];
  int local_10;
  
  PvpResultType::PvpResultType(local_b4);
  PvpResultType::Clear(local_b4);
                    /* try { // try from 085dcb29 to 085dcd45 has its CatchHandler @ 085dcd48 */
  CUser::update_pvp_rank(param_1,local_b4);
  local_10 = GetTeamIndex(this,param_1);
  cVar2 = PvpUserTable::IsValidTeam((PvpUserTable *)(this + 0x268),local_10);
  if (cVar2 != '\x01') {
    cMyTrace::cMyTrace(local_20,"void PvP_Room::GiveOuterPenalty(CUser*)",0x10f8,5);
    cMyTrace::operator()(local_20,&DAT_08cc125c,local_10);
    goto LAB_085dcd66;
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar2 == '\0') {
LAB_085dcbe9:
    bVar1 = false;
  }
  else {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x38);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar2 == '\0') goto LAB_085dcbe9;
    bVar1 = true;
  }
  if (bVar1) {
    iVar5 = CUser::GetServerGroup(param_1);
    if (iVar5 != 0) {
      Packet_Server_Match_data::Packet_Server_Match_data(local_2d);
      local_23 = CUser::GetServerGroup(param_1);
      local_21 = 1;
      uVar6 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar6);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_2d,0xd);
    }
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar3);
  if (cVar2 != '\0') {
    pGVar3 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetChannelType(pGVar3);
    if (iVar5 == 4) {
LAB_085dcc90:
      bVar1 = true;
    }
    else {
      pGVar3 = (GameWorld *)G_GameWorld();
      iVar5 = GameWorld::GetChannelType(pGVar3);
      if (iVar5 == 8) goto LAB_085dcc90;
      bVar1 = false;
    }
    if (bVar1) {
      iVar5 = PvpUserTable::GetLeavePenalty((PvpUserTable *)(this + 0x268),local_10);
      CUser::update_pvp_point(param_1,iVar5);
    }
    else {
      pGVar3 = (GameWorld *)G_GameWorld();
      iVar5 = GameWorld::GetChannelType(pGVar3);
      if (iVar5 == 6) {
        CUser::add_guild_pvp_result(param_1,-1);
        goto LAB_085dcd66;
      }
    }
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsWinPointPvPChannel(pGVar3);
  if (cVar2 != '\0') {
    CUser::add_pvp_result(param_1,false,(uint *)0x0);
  }
  (**(code **)(**(int **)(this + 0x6e4) + 0x60))(*(undefined4 *)(this + 0x6e4),param_1);
LAB_085dcd66:
  PvpResultType::~PvpResultType(local_b4);
  return;
}

```

---

## HandleTimerUserRevive

```asm
// === 085dd824 PvP_Room::HandleTimerUserRevive  [0x085dd824-0x85dd935] ===
 85dd824:	55                   	push   %ebp
 85dd825:	89 e5                	mov    %esp,%ebp
 85dd827:	56                   	push   %esi
 85dd828:	53                   	push   %ebx
 85dd829:	83 ec 20             	sub    $0x20,%esp
 85dd82c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85dd830:	0f 88 ee 00 00 00    	js     85dd924 <_ZN8PvP_Room21HandleTimerUserReviveEi+0x100>
 85dd836:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85dd83a:	0f 8f e7 00 00 00    	jg     85dd927 <_ZN8PvP_Room21HandleTimerUserReviveEi+0x103>
 85dd840:	8b 55 0c             	mov    0xc(%ebp),%edx
 85dd843:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd846:	83 c2 0c             	add    $0xc,%edx
 85dd849:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dd84c:	85 c0                	test   %eax,%eax
 85dd84e:	0f 84 d6 00 00 00    	je     85dd92a <_ZN8PvP_Room21HandleTimerUserReviveEi+0x106>
 85dd854:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd857:	8b 55 08             	mov    0x8(%ebp),%edx
 85dd85a:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85dd861:	00 
 85dd862:	84 c0                	test   %al,%al
 85dd864:	0f 85 c3 00 00 00    	jne    85dd92d <_ZN8PvP_Room21HandleTimerUserReviveEi+0x109>
 85dd86a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd86d:	8b 55 08             	mov    0x8(%ebp),%edx
 85dd870:	c6 84 02 c8 05 00 00 	movb   $0x1,0x5c8(%edx,%eax,1)
 85dd877:	01 
 85dd878:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd87b:	89 04 24             	mov    %eax,(%esp)
 85dd87e:	e8 c9 04 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85dd883:	c7 44 24 08 78 00 00 	movl   $0x78,0x8(%esp)
 85dd88a:	00 
 85dd88b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dd892:	00 
 85dd893:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd896:	89 04 24             	mov    %eax,(%esp)
 85dd899:	e8 5e e0 ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85dd89e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd8a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd8a5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd8a8:	89 04 24             	mov    %eax,(%esp)
 85dd8ab:	e8 70 e0 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dd8b0:	e8 eb 03 aa ff       	call   807dca0 <rand@plt>
 85dd8b5:	89 c2                	mov    %eax,%edx
 85dd8b7:	c1 fa 1f             	sar    $0x1f,%edx
 85dd8ba:	c1 ea 18             	shr    $0x18,%edx
 85dd8bd:	01 d0                	add    %edx,%eax
 85dd8bf:	25 ff 00 00 00       	and    $0xff,%eax
 85dd8c4:	29 d0                	sub    %edx,%eax
 85dd8c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd8ca:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd8cd:	89 04 24             	mov    %eax,(%esp)
 85dd8d0:	e8 4b e0 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dd8d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dd8dc:	00 
 85dd8dd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd8e0:	89 04 24             	mov    %eax,(%esp)
 85dd8e3:	e8 70 e0 ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85dd8e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd8eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd8ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd8f2:	89 04 24             	mov    %eax,(%esp)
 85dd8f5:	e8 1e e5 ff ff       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85dd8fa:	eb 1b                	jmp    85dd917 <_ZN8PvP_Room21HandleTimerUserReviveEi+0xf3>
 85dd8fc:	89 d3                	mov    %edx,%ebx
 85dd8fe:	89 c6                	mov    %eax,%esi
 85dd900:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd903:	89 04 24             	mov    %eax,(%esp)
 85dd906:	e8 75 05 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd90b:	89 f0                	mov    %esi,%eax
 85dd90d:	89 da                	mov    %ebx,%edx
 85dd90f:	89 04 24             	mov    %eax,(%esp)
 85dd912:	e8 39 5e 50 00       	call   8ae3750 <_Unwind_Resume>
 85dd917:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd91a:	89 04 24             	mov    %eax,(%esp)
 85dd91d:	e8 5e 05 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd922:	eb 0a                	jmp    85dd92e <_ZN8PvP_Room21HandleTimerUserReviveEi+0x10a>
 85dd924:	90                   	nop
 85dd925:	eb 07                	jmp    85dd92e <_ZN8PvP_Room21HandleTimerUserReviveEi+0x10a>
 85dd927:	90                   	nop
 85dd928:	eb 04                	jmp    85dd92e <_ZN8PvP_Room21HandleTimerUserReviveEi+0x10a>
 85dd92a:	90                   	nop
 85dd92b:	eb 01                	jmp    85dd92e <_ZN8PvP_Room21HandleTimerUserReviveEi+0x10a>
 85dd92d:	90                   	nop
 85dd92e:	83 c4 20             	add    $0x20,%esp
 85dd931:	5b                   	pop    %ebx
 85dd932:	5e                   	pop    %esi
 85dd933:	5d                   	pop    %ebp
 85dd934:	c3                   	ret
 85dd935:	90                   	nop

```

```c
// PvP_Room::HandleTimerUserRevive @ 0x85dd824

/* PvP_Room::HandleTimerUserRevive(int) */

void __thiscall PvP_Room::HandleTimerUserRevive(PvP_Room *this,int param_1)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  if ((((-1 < param_1) && (param_1 < 8)) && (*(int *)(this + (param_1 + 0xc) * 4) != 0)) &&
     (this[param_1 + 0x5c8] == (PvP_Room)0x0)) {
    this[param_1 + 0x5c8] = (PvP_Room)0x1;
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085dd899 to 085dd8f9 has its CatchHandler @ 085dd8fc */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x78);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
    iVar1 = rand();
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,iVar1 % 0x100);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    send_to_pvp(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## IsAllMoreThanGrade

```asm
// === 085da58a PvP_Room::IsAllMoreThanGrade  [0x085da58a-0x85da5f3] ===
 85da58a:	55                   	push   %ebp
 85da58b:	89 e5                	mov    %esp,%ebp
 85da58d:	83 ec 28             	sub    $0x28,%esp
 85da590:	83 7d 0c 25          	cmpl   $0x25,0xc(%ebp)
 85da594:	7f 06                	jg     85da59c <_ZN8PvP_Room18IsAllMoreThanGradeEi+0x12>
 85da596:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85da59a:	79 07                	jns    85da5a3 <_ZN8PvP_Room18IsAllMoreThanGradeEi+0x19>
 85da59c:	b8 00 00 00 00       	mov    $0x0,%eax
 85da5a1:	eb 4f                	jmp    85da5f2 <_ZN8PvP_Room18IsAllMoreThanGradeEi+0x68>
 85da5a3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85da5aa:	eb 36                	jmp    85da5e2 <_ZN8PvP_Room18IsAllMoreThanGradeEi+0x58>
 85da5ac:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85da5af:	8b 45 08             	mov    0x8(%ebp),%eax
 85da5b2:	83 c2 0c             	add    $0xc,%edx
 85da5b5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da5b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85da5bb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85da5bf:	74 1c                	je     85da5dd <_ZN8PvP_Room18IsAllMoreThanGradeEi+0x53>
 85da5c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85da5c4:	89 04 24             	mov    %eax,(%esp)
 85da5c7:	e8 7e 48 bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85da5cc:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85da5cf:	0f 9c c0             	setl   %al
 85da5d2:	84 c0                	test   %al,%al
 85da5d4:	74 08                	je     85da5de <_ZN8PvP_Room18IsAllMoreThanGradeEi+0x54>
 85da5d6:	b8 00 00 00 00       	mov    $0x0,%eax
 85da5db:	eb 15                	jmp    85da5f2 <_ZN8PvP_Room18IsAllMoreThanGradeEi+0x68>
 85da5dd:	90                   	nop
 85da5de:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85da5e2:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85da5e6:	0f 9e c0             	setle  %al
 85da5e9:	84 c0                	test   %al,%al
 85da5eb:	75 bf                	jne    85da5ac <_ZN8PvP_Room18IsAllMoreThanGradeEi+0x22>
 85da5ed:	b8 01 00 00 00       	mov    $0x1,%eax
 85da5f2:	c9                   	leave
 85da5f3:	c3                   	ret

```

```c
// PvP_Room::IsAllMoreThanGrade @ 0x85da58a

/* PvP_Room::IsAllMoreThanGrade(int) */

undefined4 __thiscall PvP_Room::IsAllMoreThanGrade(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  
  if ((param_1 < 0x26) && (-1 < param_1)) {
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      if ((*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4) != (CUserCharacInfo *)0x0) &&
         (iVar2 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4))
         , iVar2 < param_1)) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IsPvpObserver

```asm
// === 085da046 PvP_Room::IsPvpObserver  [0x085da046-0x85da085] ===
 85da046:	55                   	push   %ebp
 85da047:	89 e5                	mov    %esp,%ebp
 85da049:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85da04d:	7e 07                	jle    85da056 <_ZN8PvP_Room13IsPvpObserverEi+0x10>
 85da04f:	b8 00 00 00 00       	mov    $0x0,%eax
 85da054:	eb 2e                	jmp    85da084 <_ZN8PvP_Room13IsPvpObserverEi+0x3e>
 85da056:	8b 55 0c             	mov    0xc(%ebp),%edx
 85da059:	8b 45 08             	mov    0x8(%ebp),%eax
 85da05c:	83 c2 14             	add    $0x14,%edx
 85da05f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da062:	83 f8 03             	cmp    $0x3,%eax
 85da065:	74 11                	je     85da078 <_ZN8PvP_Room13IsPvpObserverEi+0x32>
 85da067:	8b 55 0c             	mov    0xc(%ebp),%edx
 85da06a:	8b 45 08             	mov    0x8(%ebp),%eax
 85da06d:	83 c2 14             	add    $0x14,%edx
 85da070:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da073:	83 f8 04             	cmp    $0x4,%eax
 85da076:	75 07                	jne    85da07f <_ZN8PvP_Room13IsPvpObserverEi+0x39>
 85da078:	b8 01 00 00 00       	mov    $0x1,%eax
 85da07d:	eb 05                	jmp    85da084 <_ZN8PvP_Room13IsPvpObserverEi+0x3e>
 85da07f:	b8 00 00 00 00       	mov    $0x0,%eax
 85da084:	5d                   	pop    %ebp
 85da085:	c3                   	ret

```

```c
// PvP_Room::IsPvpObserver @ 0x85da046

/* PvP_Room::IsPvpObserver(int) */

undefined4 __thiscall PvP_Room::IsPvpObserver(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    if ((*(int *)(this + (param_1 + 0x14) * 4) == 3) || (*(int *)(this + (param_1 + 0x14) * 4) == 4)
       ) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IsQuickJoinablePVPRoom

```asm
// === 085d6be6 PvP_Room::IsQuickJoinablePVPRoom  [0x085d6be6-0x85d6c43] ===
 85d6be6:	55                   	push   %ebp
 85d6be7:	89 e5                	mov    %esp,%ebp
 85d6be9:	83 ec 18             	sub    $0x18,%esp
 85d6bec:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6bef:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6bf3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6bf6:	89 04 24             	mov    %eax,(%esp)
 85d6bf9:	e8 46 00 00 00       	call   85d6c44 <_ZN8PvP_Room14check_joinableEP5CUser>
 85d6bfe:	85 c0                	test   %eax,%eax
 85d6c00:	75 2b                	jne    85d6c2d <_ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser+0x47>
 85d6c02:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6c05:	8b 40 28             	mov    0x28(%eax),%eax
 85d6c08:	89 04 24             	mov    %eax,(%esp)
 85d6c0b:	e8 3e 50 af ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85d6c10:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6c17:	89 04 24             	mov    %eax,(%esp)
 85d6c1a:	e8 a1 62 08 00       	call   865cec0 <_ZN5CUser31find_pvp_masterid_walkingout_meEj>
 85d6c1f:	83 f0 01             	xor    $0x1,%eax
 85d6c22:	84 c0                	test   %al,%al
 85d6c24:	74 07                	je     85d6c2d <_ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser+0x47>
 85d6c26:	b8 01 00 00 00       	mov    $0x1,%eax
 85d6c2b:	eb 05                	jmp    85d6c32 <_ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser+0x4c>
 85d6c2d:	b8 00 00 00 00       	mov    $0x0,%eax
 85d6c32:	84 c0                	test   %al,%al
 85d6c34:	74 07                	je     85d6c3d <_ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser+0x57>
 85d6c36:	b8 01 00 00 00       	mov    $0x1,%eax
 85d6c3b:	eb 05                	jmp    85d6c42 <_ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser+0x5c>
 85d6c3d:	b8 00 00 00 00       	mov    $0x0,%eax
 85d6c42:	c9                   	leave
 85d6c43:	c3                   	ret

```

```c
// PvP_Room::IsQuickJoinablePVPRoom @ 0x85d6be6

/* PvP_Room::IsQuickJoinablePVPRoom(CUser*) */

undefined1 __thiscall PvP_Room::IsQuickJoinablePVPRoom(PvP_Room *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = check_joinable(this,param_1);
  if (iVar2 == 0) {
    CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x28));
    cVar1 = CUser::find_pvp_masterid_walkingout_me((uint)param_1);
    if (cVar1 != '\x01') {
      return 1;
    }
  }
  return 0;
}

```

---

## IsThereSameGuildMember

```asm
// === 085da5f4 PvP_Room::IsThereSameGuildMember  [0x085da5f4-0x85da7cb] ===
 85da5f4:	55                   	push   %ebp
 85da5f5:	89 e5                	mov    %esp,%ebp
 85da5f7:	53                   	push   %ebx
 85da5f8:	83 ec 64             	sub    $0x64,%esp
 85da5fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85da5fe:	8b 40 04             	mov    0x4(%eax),%eax
 85da601:	83 f8 02             	cmp    $0x2,%eax
 85da604:	74 0f                	je     85da615 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x21>
 85da606:	8b 45 08             	mov    0x8(%ebp),%eax
 85da609:	8b 40 04             	mov    0x4(%eax),%eax
 85da60c:	83 f8 03             	cmp    $0x3,%eax
 85da60f:	0f 85 4b 01 00 00    	jne    85da760 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x16c>
 85da615:	c7 45 d4 04 00 00 00 	movl   $0x4,-0x2c(%ebp)
 85da61c:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85da623:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85da62a:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 85da631:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 85da638:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 85da63f:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 85da646:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 85da64d:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 85da654:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 85da65b:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 85da662:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85da669:	eb 7e                	jmp    85da6e9 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0xf5>
 85da66b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85da66e:	8b 45 08             	mov    0x8(%ebp),%eax
 85da671:	83 c2 14             	add    $0x14,%edx
 85da674:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da677:	83 f8 01             	cmp    $0x1,%eax
 85da67a:	75 2d                	jne    85da6a9 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0xb5>
 85da67c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85da67f:	8b 45 08             	mov    0x8(%ebp),%eax
 85da682:	83 c2 0c             	add    $0xc,%edx
 85da685:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da688:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85da68b:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 85da68f:	74 54                	je     85da6e5 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0xf1>
 85da691:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 85da694:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85da697:	89 04 24             	mov    %eax,(%esp)
 85da69a:	e8 cd 4d c5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 85da69f:	89 44 9d c0          	mov    %eax,-0x40(%ebp,%ebx,4)
 85da6a3:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85da6a7:	eb 3c                	jmp    85da6e5 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0xf1>
 85da6a9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85da6ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85da6af:	83 c2 14             	add    $0x14,%edx
 85da6b2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da6b5:	83 f8 02             	cmp    $0x2,%eax
 85da6b8:	75 2b                	jne    85da6e5 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0xf1>
 85da6ba:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85da6bd:	8b 45 08             	mov    0x8(%ebp),%eax
 85da6c0:	83 c2 0c             	add    $0xc,%edx
 85da6c3:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da6c6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85da6c9:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 85da6cd:	74 16                	je     85da6e5 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0xf1>
 85da6cf:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 85da6d2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85da6d5:	89 04 24             	mov    %eax,(%esp)
 85da6d8:	e8 8f 4d c5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 85da6dd:	89 44 9d b0          	mov    %eax,-0x50(%ebp,%ebx,4)
 85da6e1:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85da6e5:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85da6e9:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 85da6ed:	0f 9e c0             	setle  %al
 85da6f0:	84 c0                	test   %al,%al
 85da6f2:	0f 85 73 ff ff ff    	jne    85da66b <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x77>
 85da6f8:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 85da6fc:	74 06                	je     85da704 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x110>
 85da6fe:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85da702:	75 0a                	jne    85da70e <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x11a>
 85da704:	b8 00 00 00 00       	mov    $0x0,%eax
 85da709:	e9 b7 00 00 00       	jmp    85da7c5 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1d1>
 85da70e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85da715:	eb 3a                	jmp    85da751 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x15d>
 85da717:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85da71e:	eb 20                	jmp    85da740 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x14c>
 85da720:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85da723:	8b 54 85 c0          	mov    -0x40(%ebp,%eax,4),%edx
 85da727:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85da72a:	8b 44 85 b0          	mov    -0x50(%ebp,%eax,4),%eax
 85da72e:	39 c2                	cmp    %eax,%edx
 85da730:	75 0a                	jne    85da73c <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x148>
 85da732:	b8 01 00 00 00       	mov    $0x1,%eax
 85da737:	e9 89 00 00 00       	jmp    85da7c5 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1d1>
 85da73c:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 85da740:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85da743:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 85da746:	0f 9c c0             	setl   %al
 85da749:	84 c0                	test   %al,%al
 85da74b:	75 d3                	jne    85da720 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x12c>
 85da74d:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85da751:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85da754:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 85da757:	0f 9c c0             	setl   %al
 85da75a:	84 c0                	test   %al,%al
 85da75c:	75 b9                	jne    85da717 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x123>
 85da75e:	eb 60                	jmp    85da7c0 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1cc>
 85da760:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85da767:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85da76e:	eb 45                	jmp    85da7b5 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1c1>
 85da770:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85da773:	8b 45 08             	mov    0x8(%ebp),%eax
 85da776:	83 c2 0c             	add    $0xc,%edx
 85da779:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da77c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85da77f:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 85da783:	74 2c                	je     85da7b1 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1bd>
 85da785:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85da788:	89 04 24             	mov    %eax,(%esp)
 85da78b:	e8 dc 4c c5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 85da790:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85da793:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85da797:	74 17                	je     85da7b0 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1bc>
 85da799:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85da79c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85da79f:	75 07                	jne    85da7a8 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1b4>
 85da7a1:	b8 01 00 00 00       	mov    $0x1,%eax
 85da7a6:	eb 1d                	jmp    85da7c5 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1d1>
 85da7a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85da7ab:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85da7ae:	eb 01                	jmp    85da7b1 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x1bd>
 85da7b0:	90                   	nop
 85da7b1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85da7b5:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85da7b9:	0f 9e c0             	setle  %al
 85da7bc:	84 c0                	test   %al,%al
 85da7be:	75 b0                	jne    85da770 <_ZN8PvP_Room22IsThereSameGuildMemberEv+0x17c>
 85da7c0:	b8 00 00 00 00       	mov    $0x0,%eax
 85da7c5:	83 c4 64             	add    $0x64,%esp
 85da7c8:	5b                   	pop    %ebx
 85da7c9:	5d                   	pop    %ebp
 85da7ca:	c3                   	ret
 85da7cb:	90                   	nop

```

```c
// PvP_Room::IsThereSameGuildMember @ 0x85da5f4

/* PvP_Room::IsThereSameGuildMember() */

undefined4 __thiscall PvP_Room::IsThereSameGuildMember(PvP_Room *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_54 [8];
  CUserCharacInfo *local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
    local_30 = 4;
    local_2c = 0;
    local_28 = 0;
    local_54[4] = 0;
    local_54[5] = 0;
    local_54[6] = 0;
    local_54[7] = 0;
    local_54[0] = 0;
    local_54[1] = 0;
    local_54[2] = 0;
    local_54[3] = 0;
    for (local_24 = 0; iVar1 = local_28, iVar2 = local_2c, local_24 < 8; local_24 = local_24 + 1) {
      if (*(int *)(this + (local_24 + 0x14) * 4) == 1) {
        local_34 = *(CUserCharacInfo **)(this + (local_24 + 0xc) * 4);
        if (local_34 != (CUserCharacInfo *)0x0) {
          iVar1 = CUserCharacInfo::get_charac_guildkey(local_34);
          local_54[iVar2 + 4] = iVar1;
          local_2c = local_2c + 1;
        }
      }
      else if (*(int *)(this + (local_24 + 0x14) * 4) == 2) {
        local_34 = *(CUserCharacInfo **)(this + (local_24 + 0xc) * 4);
        if (local_34 != (CUserCharacInfo *)0x0) {
          iVar2 = CUserCharacInfo::get_charac_guildkey(local_34);
          local_54[iVar1] = iVar2;
          local_28 = local_28 + 1;
        }
      }
    }
    if ((local_2c == 0) || (local_28 == 0)) {
      return 0;
    }
    for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
      for (local_1c = 0; local_1c < local_28; local_1c = local_1c + 1) {
        if (local_54[local_20 + 4] == local_54[local_1c]) {
          return 1;
        }
      }
    }
  }
  else {
    local_18 = 0;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      local_34 = *(CUserCharacInfo **)(this + (local_10 + 0xc) * 4);
      if (((local_34 != (CUserCharacInfo *)0x0) &&
          (local_14 = CUserCharacInfo::get_charac_guildkey(local_34), local_14 != 0)) &&
         (bVar3 = local_18 == local_14, local_18 = local_14, bVar3)) {
        return 1;
      }
    }
  }
  return 0;
}

```

---

## OnConnectP2PPvPTimeout

```asm
// === 085ddef6 PvP_Room::OnConnectP2PPvPTimeout  [0x085ddef6-0x85ddf35] ===
 85ddef6:	55                   	push   %ebp
 85ddef7:	89 e5                	mov    %esp,%ebp
 85ddef9:	83 ec 18             	sub    $0x18,%esp
 85ddefc:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddeff:	89 04 24             	mov    %eax,(%esp)
 85ddf02:	e8 e1 86 ff ff       	call   85d65e8 <_ZN8PvP_Room17check_start_stateEv>
 85ddf07:	83 f0 01             	xor    $0x1,%eax
 85ddf0a:	84 c0                	test   %al,%al
 85ddf0c:	74 25                	je     85ddf33 <_ZN8PvP_Room22OnConnectP2PPvPTimeoutEv+0x3d>
 85ddf0e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddf11:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85ddf17:	8b 00                	mov    (%eax),%eax
 85ddf19:	83 c0 58             	add    $0x58,%eax
 85ddf1c:	8b 08                	mov    (%eax),%ecx
 85ddf1e:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddf21:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85ddf27:	8b 55 08             	mov    0x8(%ebp),%edx
 85ddf2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ddf2e:	89 04 24             	mov    %eax,(%esp)
 85ddf31:	ff d1                	call   *%ecx
 85ddf33:	c9                   	leave
 85ddf34:	c3                   	ret
 85ddf35:	90                   	nop

```

```c
// PvP_Room::OnConnectP2PPvPTimeout @ 0x85ddef6

/* PvP_Room::OnConnectP2PPvPTimeout() */

void __thiscall PvP_Room::OnConnectP2PPvPTimeout(PvP_Room *this)

{
  char cVar1;
  
  cVar1 = check_start_state(this);
  if (cVar1 != '\x01') {
    (**(code **)(**(int **)(this + 0x6e4) + 0x58))(*(undefined4 *)(this + 0x6e4),this);
  }
  return;
}

```

---

## OnSetPVPSeatState

```asm
// === 085dd070 PvP_Room::OnSetPVPSeatState  [0x085dd070-0x85dd3f7] ===
 85dd070:	55                   	push   %ebp
 85dd071:	89 e5                	mov    %esp,%ebp
 85dd073:	56                   	push   %esi
 85dd074:	53                   	push   %ebx
 85dd075:	83 ec 40             	sub    $0x40,%esp
 85dd078:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85dd07c:	75 0a                	jne    85dd088 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x18>
 85dd07e:	bb 01 00 00 00       	mov    $0x1,%ebx
 85dd083:	e9 67 03 00 00       	jmp    85dd3ef <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x37f>
 85dd088:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd08b:	89 04 24             	mov    %eax,(%esp)
 85dd08e:	e8 b9 0c fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85dd093:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85dd09a:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd09d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dd0a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd0a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd0a8:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd0ab:	89 04 24             	mov    %eax,(%esp)
 85dd0ae:	e8 01 95 ff ff       	call   85d65b4 <_ZN8PvP_Room15check_authorityEP5CUseri>
 85dd0b3:	83 f0 01             	xor    $0x1,%eax
 85dd0b6:	84 c0                	test   %al,%al
 85dd0b8:	74 0c                	je     85dd0c6 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x56>
 85dd0ba:	c7 45 f0 08 00 00 00 	movl   $0x8,-0x10(%ebp)
 85dd0c1:	e9 91 02 00 00       	jmp    85dd357 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x2e7>
 85dd0c6:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd0c9:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dd0cf:	8b 00                	mov    (%eax),%eax
 85dd0d1:	83 c0 74             	add    $0x74,%eax
 85dd0d4:	8b 08                	mov    (%eax),%ecx
 85dd0d6:	8b 55 14             	mov    0x14(%ebp),%edx
 85dd0d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd0dc:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dd0e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd0e6:	89 04 24             	mov    %eax,(%esp)
 85dd0e9:	ff d1                	call   *%ecx
 85dd0eb:	83 f0 01             	xor    $0x1,%eax
 85dd0ee:	84 c0                	test   %al,%al
 85dd0f0:	74 0c                	je     85dd0fe <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x8e>
 85dd0f2:	c7 45 f0 08 00 00 00 	movl   $0x8,-0x10(%ebp)
 85dd0f9:	e9 59 02 00 00       	jmp    85dd357 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x2e7>
 85dd0fe:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd101:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85dd107:	83 f8 02             	cmp    $0x2,%eax
 85dd10a:	75 0c                	jne    85dd118 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0xa8>
 85dd10c:	c7 45 f0 13 00 00 00 	movl   $0x13,-0x10(%ebp)
 85dd113:	e9 3f 02 00 00       	jmp    85dd357 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x2e7>
 85dd118:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85dd11f:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 85dd123:	c6 45 de 00          	movb   $0x0,-0x22(%ebp)
 85dd127:	c6 45 dd 00          	movb   $0x0,-0x23(%ebp)
 85dd12b:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd12e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd132:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd135:	89 04 24             	mov    %eax,(%esp)
 85dd138:	e8 35 c1 ff ff       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 85dd13d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dd140:	81 7d 14 fe 00 00 00 	cmpl   $0xfe,0x14(%ebp)
 85dd147:	75 66                	jne    85dd1af <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x13f>
 85dd149:	83 7d 18 03          	cmpl   $0x3,0x18(%ebp)
 85dd14d:	75 1b                	jne    85dd16a <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0xfa>
 85dd14f:	8b 45 18             	mov    0x18(%ebp),%eax
 85dd152:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dd156:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd159:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd15d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd160:	89 04 24             	mov    %eax,(%esp)
 85dd163:	e8 90 02 00 00       	call   85dd3f8 <_ZN8PvP_Room11SendWalkOutEi17ENUM_WALKOUT_TYPE>
 85dd168:	eb 45                	jmp    85dd1af <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x13f>
 85dd16a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd16d:	8b 40 28             	mov    0x28(%eax),%eax
 85dd170:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85dd173:	75 3a                	jne    85dd1af <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x13f>
 85dd175:	8b 55 10             	mov    0x10(%ebp),%edx
 85dd178:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd17b:	83 c2 0c             	add    $0xc,%edx
 85dd17e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dd181:	85 c0                	test   %eax,%eax
 85dd183:	74 2a                	je     85dd1af <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x13f>
 85dd185:	8b 55 10             	mov    0x10(%ebp),%edx
 85dd188:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd18b:	83 c2 0c             	add    $0xc,%edx
 85dd18e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dd191:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85dd194:	74 19                	je     85dd1af <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x13f>
 85dd196:	8b 45 18             	mov    0x18(%ebp),%eax
 85dd199:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dd19d:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd1a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd1a7:	89 04 24             	mov    %eax,(%esp)
 85dd1aa:	e8 49 02 00 00       	call   85dd3f8 <_ZN8PvP_Room11SendWalkOutEi17ENUM_WALKOUT_TYPE>
 85dd1af:	8d 45 dd             	lea    -0x23(%ebp),%eax
 85dd1b2:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85dd1b6:	8d 45 de             	lea    -0x22(%ebp),%eax
 85dd1b9:	89 44 24 18          	mov    %eax,0x18(%esp)
 85dd1bd:	8d 45 df             	lea    -0x21(%ebp),%eax
 85dd1c0:	89 44 24 14          	mov    %eax,0x14(%esp)
 85dd1c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85dd1c7:	89 44 24 10          	mov    %eax,0x10(%esp)
 85dd1cb:	8b 45 14             	mov    0x14(%ebp),%eax
 85dd1ce:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85dd1d2:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd1d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dd1d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd1dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd1e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd1e3:	89 04 24             	mov    %eax,(%esp)
 85dd1e6:	e8 d5 a5 ff ff       	call   85d77c0 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_>
 85dd1eb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85dd1ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd1f1:	89 04 24             	mov    %eax,(%esp)
 85dd1f4:	e8 69 96 ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85dd1f9:	85 c0                	test   %eax,%eax
 85dd1fb:	75 12                	jne    85dd20f <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x19f>
 85dd1fd:	0f b6 45 dd          	movzbl -0x23(%ebp),%eax
 85dd201:	83 f0 01             	xor    $0x1,%eax
 85dd204:	84 c0                	test   %al,%al
 85dd206:	74 07                	je     85dd20f <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x19f>
 85dd208:	b8 01 00 00 00       	mov    $0x1,%eax
 85dd20d:	eb 05                	jmp    85dd214 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x1a4>
 85dd20f:	b8 00 00 00 00       	mov    $0x0,%eax
 85dd214:	84 c0                	test   %al,%al
 85dd216:	74 3b                	je     85dd253 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x1e3>
 85dd218:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd21b:	89 04 24             	mov    %eax,(%esp)
 85dd21e:	e8 71 07 c5 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85dd223:	89 44 24 14          	mov    %eax,0x14(%esp)
 85dd227:	c7 44 24 10 fc 12 cc 	movl   $0x8cc12fc,0x10(%esp)
 85dd22e:	08 
 85dd22f:	c7 44 24 0c be 11 00 	movl   $0x11be,0xc(%esp)
 85dd236:	00 
 85dd237:	c7 44 24 08 60 23 cc 	movl   $0x8cc2360,0x8(%esp)
 85dd23e:	08 
 85dd23f:	c7 44 24 04 1b 12 cc 	movl   $0x8cc121b,0x4(%esp)
 85dd246:	08 
 85dd247:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85dd24e:	e8 b7 69 4f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85dd253:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85dd257:	0f 85 fa 00 00 00    	jne    85dd357 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x2e7>
 85dd25d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85dd260:	85 c0                	test   %eax,%eax
 85dd262:	74 68                	je     85dd2cc <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x25c>
 85dd264:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd267:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dd26d:	8b 00                	mov    (%eax),%eax
 85dd26f:	83 c0 2c             	add    $0x2c,%eax
 85dd272:	8b 18                	mov    (%eax),%ebx
 85dd274:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85dd277:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd27a:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dd280:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85dd283:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85dd287:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85dd28a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85dd28e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dd291:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85dd295:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd299:	89 04 24             	mov    %eax,(%esp)
 85dd29c:	ff d3                	call   *%ebx
 85dd29e:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 85dd2a1:	e8 01 d1 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dd2a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85dd2aa:	89 04 24             	mov    %eax,(%esp)
 85dd2ad:	e8 fc 9c 0e 00       	call   86c6fae <_ZN9GameWorld12out_from_pvpEP5CUser>
 85dd2b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd2b5:	89 04 24             	mov    %eax,(%esp)
 85dd2b8:	e8 91 e9 ae ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85dd2bd:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85dd2c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd2c4:	89 14 24             	mov    %edx,(%esp)
 85dd2c7:	e8 76 fc 07 00       	call   865cf42 <_ZN5CUser33insert_pvp_masterid_walkingout_meEj>
 85dd2cc:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 85dd2d0:	84 c0                	test   %al,%al
 85dd2d2:	74 38                	je     85dd30c <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x29c>
 85dd2d4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd2d7:	89 04 24             	mov    %eax,(%esp)
 85dd2da:	e8 07 e6 ae ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85dd2df:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd2e2:	8b 55 10             	mov    0x10(%ebp),%edx
 85dd2e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dd2e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd2ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd2f0:	89 04 24             	mov    %eax,(%esp)
 85dd2f3:	e8 ea e6 ff ff       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 85dd2f8:	e8 aa d0 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dd2fd:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85dd300:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd304:	89 04 24             	mov    %eax,(%esp)
 85dd307:	e8 08 b9 0e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 85dd30c:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 85dd310:	84 c0                	test   %al,%al
 85dd312:	74 31                	je     85dd345 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x2d5>
 85dd314:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd317:	89 04 24             	mov    %eax,(%esp)
 85dd31a:	e8 c7 e5 ae ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85dd31f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd322:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd326:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd329:	89 04 24             	mov    %eax,(%esp)
 85dd32c:	e8 09 ea ff ff       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 85dd331:	e8 71 d0 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dd336:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85dd339:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd33d:	89 04 24             	mov    %eax,(%esp)
 85dd340:	e8 cf b8 0e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 85dd345:	0f b6 45 dd          	movzbl -0x23(%ebp),%eax
 85dd349:	84 c0                	test   %al,%al
 85dd34b:	74 0a                	je     85dd357 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x2e7>
 85dd34d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85dd352:	e9 8d 00 00 00       	jmp    85dd3e4 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x374>
 85dd357:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85dd35b:	7e 65                	jle    85dd3c2 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x352>
 85dd35d:	c7 44 24 08 37 00 00 	movl   $0x37,0x8(%esp)
 85dd364:	00 
 85dd365:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dd36c:	00 
 85dd36d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd370:	89 04 24             	mov    %eax,(%esp)
 85dd373:	e8 84 e5 ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85dd378:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dd37f:	00 
 85dd380:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd383:	89 04 24             	mov    %eax,(%esp)
 85dd386:	e8 95 e5 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dd38b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85dd38e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd392:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd395:	89 04 24             	mov    %eax,(%esp)
 85dd398:	e8 83 e5 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dd39d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dd3a4:	00 
 85dd3a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd3a8:	89 04 24             	mov    %eax,(%esp)
 85dd3ab:	e8 a8 e5 ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85dd3b0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd3b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd3b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd3ba:	89 04 24             	mov    %eax,(%esp)
 85dd3bd:	e8 f8 b1 06 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85dd3c2:	bb 01 00 00 00       	mov    $0x1,%ebx
 85dd3c7:	eb 1b                	jmp    85dd3e4 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x374>
 85dd3c9:	89 d3                	mov    %edx,%ebx
 85dd3cb:	89 c6                	mov    %eax,%esi
 85dd3cd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd3d0:	89 04 24             	mov    %eax,(%esp)
 85dd3d3:	e8 a8 0a fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd3d8:	89 f0                	mov    %esi,%eax
 85dd3da:	89 da                	mov    %ebx,%edx
 85dd3dc:	89 04 24             	mov    %eax,(%esp)
 85dd3df:	e8 6c 63 50 00       	call   8ae3750 <_Unwind_Resume>
 85dd3e4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd3e7:	89 04 24             	mov    %eax,(%esp)
 85dd3ea:	e8 91 0a fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd3ef:	89 d8                	mov    %ebx,%eax
 85dd3f1:	83 c4 40             	add    $0x40,%esp
 85dd3f4:	5b                   	pop    %ebx
 85dd3f5:	5e                   	pop    %esi
 85dd3f6:	5d                   	pop    %ebp
 85dd3f7:	c3                   	ret

```

```c
// PvP_Room::OnSetPVPSeatState @ 0x85dd070

/* PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall
PvP_Room::OnSetPVPSeatState
          (PvP_Room *this,CUserCharacInfo *param_1,int param_2,int param_4,int param_5)

{
  bool bVar1;
  CUser *pCVar2;
  char cVar3;
  int iVar4;
  GameWorld *pGVar5;
  undefined4 uVar6;
  char local_27;
  char local_26;
  char local_25;
  CUser *local_24;
  PacketGuard local_20 [12];
  int local_14;
  undefined4 local_10;
  
  if (param_1 == (CUserCharacInfo *)0x0) {
    return 1;
  }
  PacketGuard::PacketGuard(local_20);
  local_14 = 0;
  cVar3 = check_authority(this,(CUser *)param_1,param_2);
  if (cVar3 == '\x01') {
                    /* try { // try from 085dd0e9 to 085dd3c1 has its CatchHandler @ 085dd3c9 */
    cVar3 = (**(code **)(**(int **)(this + 0x6e4) + 0x74))(*(undefined4 *)(this + 0x6e4),param_4);
    if (cVar3 == '\x01') {
      if (*(int *)(this + 0xb8) == 2) {
        local_14 = 0x13;
      }
      else {
        local_24 = (CUser *)0x0;
        local_25 = '\0';
        local_26 = '\0';
        local_27 = '\0';
        local_10 = get_team(this,param_2);
        if (param_4 == 0xfe) {
          if (param_5 == 3) {
            SendWalkOut(this,param_2,3);
          }
          else if (((*(CUserCharacInfo **)(this + 0x28) == param_1) &&
                   (*(int *)(this + (param_2 + 0xc) * 4) != 0)) &&
                  (*(CUserCharacInfo **)(this + (param_2 + 0xc) * 4) != param_1)) {
            SendWalkOut(this,param_2,param_5);
          }
        }
        local_14 = set_seat_state(this,param_1,param_2,param_4,&local_24,&local_25,&local_26,
                                  &local_27);
        iVar4 = get_waiter_count(this);
        if ((iVar4 == 0) && (local_27 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar6 = get_index(this);
          LogManager::logFormat
                    (1,"pvp.cpp",
                     "bool PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)"
                     ,0x11be,&DAT_08cc12fc,uVar6);
        }
        if (local_14 == 0) {
          if (local_24 != (CUser *)0x0) {
            (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
                      (*(undefined4 *)(this + 0x6e4),local_24,this,local_10,param_2);
            pCVar2 = local_24;
            pGVar5 = (GameWorld *)G_GameWorld();
            GameWorld::out_from_pvp(pGVar5,pCVar2);
            CUserCharacInfo::getCurCharacNo(param_1);
            CUser::insert_pvp_masterid_walkingout_me((uint)local_24);
          }
          if (local_25 != '\0') {
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
            make_seat_info(this,(char *)local_20,param_2);
            pGVar5 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar5,local_20);
          }
          if (local_26 != '\0') {
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
            make_state_info(this,(char *)local_20);
            pGVar5 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar5,local_20);
          }
          if (local_27 != '\0') {
            uVar6 = 0;
            goto LAB_085dd3e4;
          }
        }
      }
    }
    else {
      local_14 = 8;
    }
  }
  else {
    local_14 = 8;
  }
  if (0 < local_14) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x37);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_1,local_20);
  }
  uVar6 = 1;
LAB_085dd3e4:
  PacketGuard::~PacketGuard(local_20);
  return uVar6;
}

```

---

## OnTimerWalkOutLackUser

```asm
// === 085dce28 PvP_Room::OnTimerWalkOutLackUser  [0x085dce28-0x85dcf19] ===
 85dce28:	55                   	push   %ebp
 85dce29:	89 e5                	mov    %esp,%ebp
 85dce2b:	83 ec 38             	sub    $0x38,%esp
 85dce2e:	8b 45 08             	mov    0x8(%ebp),%eax
 85dce31:	05 2c 01 00 00       	add    $0x12c,%eax
 85dce36:	89 04 24             	mov    %eax,(%esp)
 85dce39:	e8 3a 31 00 00       	call   85dff78 <_ZNK9cElectionIiLi8ELi8EE10GetElectedEv>
 85dce3e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dce41:	e9 b9 00 00 00       	jmp    85dceff <_ZN8PvP_Room22OnTimerWalkOutLackUserEv+0xd7>
 85dce46:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85dce4a:	0f 88 c1 00 00 00    	js     85dcf11 <_ZN8PvP_Room22OnTimerWalkOutLackUserEv+0xe9>
 85dce50:	8b 45 08             	mov    0x8(%ebp),%eax
 85dce53:	8d 90 2c 01 00 00    	lea    0x12c(%eax),%edx
 85dce59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dce5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dce60:	89 14 24             	mov    %edx,(%esp)
 85dce63:	e8 ec 31 00 00       	call   85e0054 <_ZN9cElectionIiLi8ELi8EE15CancelCandidateEi>
 85dce68:	8b 45 08             	mov    0x8(%ebp),%eax
 85dce6b:	8d 90 2c 01 00 00    	lea    0x12c(%eax),%edx
 85dce71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dce74:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dce78:	89 14 24             	mov    %edx,(%esp)
 85dce7b:	e8 0a 32 00 00       	call   85e008a <_ZN9cElectionIiLi8ELi8EE11CancelVoterEi>
 85dce80:	8b 45 08             	mov    0x8(%ebp),%eax
 85dce83:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dce89:	8b 00                	mov    (%eax),%eax
 85dce8b:	83 c0 44             	add    $0x44,%eax
 85dce8e:	8b 08                	mov    (%eax),%ecx
 85dce90:	8b 45 08             	mov    0x8(%ebp),%eax
 85dce93:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dce99:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dce9c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dcea0:	8b 55 08             	mov    0x8(%ebp),%edx
 85dcea3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dcea7:	89 04 24             	mov    %eax,(%esp)
 85dceaa:	ff d1                	call   *%ecx
 85dceac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dceaf:	8b 45 08             	mov    0x8(%ebp),%eax
 85dceb2:	83 c2 0c             	add    $0xc,%edx
 85dceb5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dceb8:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 85dcebf:	00 
 85dcec0:	c7 44 24 0c fe 00 00 	movl   $0xfe,0xc(%esp)
 85dcec7:	00 
 85dcec8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dcecb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dcecf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dced3:	8b 45 08             	mov    0x8(%ebp),%eax
 85dced6:	89 04 24             	mov    %eax,(%esp)
 85dced9:	e8 92 01 00 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 85dcede:	83 f0 01             	xor    $0x1,%eax
 85dcee1:	84 c0                	test   %al,%al
 85dcee3:	74 07                	je     85dceec <_ZN8PvP_Room22OnTimerWalkOutLackUserEv+0xc4>
 85dcee5:	b8 00 00 00 00       	mov    $0x0,%eax
 85dceea:	eb 2b                	jmp    85dcf17 <_ZN8PvP_Room22OnTimerWalkOutLackUserEv+0xef>
 85dceec:	8b 45 08             	mov    0x8(%ebp),%eax
 85dceef:	05 2c 01 00 00       	add    $0x12c,%eax
 85dcef4:	89 04 24             	mov    %eax,(%esp)
 85dcef7:	e8 7c 30 00 00       	call   85dff78 <_ZNK9cElectionIiLi8ELi8EE10GetElectedEv>
 85dcefc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dceff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dcf02:	f7 d0                	not    %eax
 85dcf04:	c1 e8 1f             	shr    $0x1f,%eax
 85dcf07:	84 c0                	test   %al,%al
 85dcf09:	0f 85 37 ff ff ff    	jne    85dce46 <_ZN8PvP_Room22OnTimerWalkOutLackUserEv+0x1e>
 85dcf0f:	eb 01                	jmp    85dcf12 <_ZN8PvP_Room22OnTimerWalkOutLackUserEv+0xea>
 85dcf11:	90                   	nop
 85dcf12:	b8 01 00 00 00       	mov    $0x1,%eax
 85dcf17:	c9                   	leave
 85dcf18:	c3                   	ret
 85dcf19:	90                   	nop

```

```c
// PvP_Room::OnTimerWalkOutLackUser @ 0x85dce28

/* PvP_Room::OnTimerWalkOutLackUser() */

undefined4 __thiscall PvP_Room::OnTimerWalkOutLackUser(PvP_Room *this)

{
  char cVar1;
  int local_10;
  
  local_10 = cElection<int,8,8>::GetElected((cElection<int,8,8> *)(this + 300));
  while ((-1 < local_10 && (-1 < local_10))) {
    cElection<int,8,8>::CancelCandidate((cElection<int,8,8> *)(this + 300),local_10);
    cElection<int,8,8>::CancelVoter((cElection<int,8,8> *)(this + 300),local_10);
    (**(code **)(**(int **)(this + 0x6e4) + 0x44))(*(undefined4 *)(this + 0x6e4),this,local_10);
    cVar1 = OnSetPVPSeatState(this,*(undefined4 *)(this + (local_10 + 0xc) * 4),local_10,0xfe,3);
    if (cVar1 != '\x01') {
      return 0;
    }
    local_10 = cElection<int,8,8>::GetElected((cElection<int,8,8> *)(this + 300));
  }
  return 1;
}

```

---

## PvP_Room

```asm
// === 085d6012 PvP_Room::PvP_Room  [0x085d6012-0x85d61a5] ===
 85d6012:	55                   	push   %ebp
 85d6013:	89 e5                	mov    %esp,%ebp
 85d6015:	56                   	push   %esi
 85d6016:	53                   	push   %ebx
 85d6017:	83 ec 20             	sub    $0x20,%esp
 85d601a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d601d:	05 c4 00 00 00       	add    $0xc4,%eax
 85d6022:	89 04 24             	mov    %eax,(%esp)
 85d6025:	e8 1c 7a 00 00       	call   85dda46 <_ZN16PvP_GuildWar_LogC1Ev>
 85d602a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d602d:	05 2c 01 00 00       	add    $0x12c,%eax
 85d6032:	89 04 24             	mov    %eax,(%esp)
 85d6035:	e8 00 9f 00 00       	call   85dff3a <_ZN9cElectionIiLi8ELi8EEC1Ev>
 85d603a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d603d:	05 68 02 00 00       	add    $0x268,%eax
 85d6042:	89 04 24             	mov    %eax,(%esp)
 85d6045:	e8 a6 e8 ff ff       	call   85d48f0 <_ZN12PvpUserTableC1Ev>
 85d604a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d604d:	05 b4 05 00 00       	add    $0x5b4,%eax
 85d6052:	89 04 24             	mov    %eax,(%esp)
 85d6055:	e8 24 ff ff ff       	call   85d5f7e <_ZN17PvpResultRecvFlagC1Ev>
 85d605a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d605d:	05 bc 05 00 00       	add    $0x5bc,%eax
 85d6062:	89 04 24             	mov    %eax,(%esp)
 85d6065:	e8 14 ff ff ff       	call   85d5f7e <_ZN17PvpResultRecvFlagC1Ev>
 85d606a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d606d:	05 e8 05 00 00       	add    $0x5e8,%eax
 85d6072:	89 04 24             	mov    %eax,(%esp)
 85d6075:	e8 98 53 af ff       	call   80cb412 <_ZN5MutexC1Ev>
 85d607a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d6081:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6084:	8d 88 68 02 00 00    	lea    0x268(%eax),%ecx
 85d608a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d608d:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 85d6093:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85d6096:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d609a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85d609e:	89 14 24             	mov    %edx,(%esp)
 85d60a1:	e8 17 a5 b0 ff       	call   80e05bd <_ZSt4fillIPiiEvT_S1_RKT0_>
 85d60a6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d60ad:	eb 14                	jmp    85d60c3 <_ZN8PvP_RoomC1Ev+0xb1>
 85d60af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d60b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d60b5:	83 c2 0c             	add    $0xc,%edx
 85d60b8:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d60bf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d60c3:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d60c7:	0f 9e c0             	setle  %al
 85d60ca:	84 c0                	test   %al,%al
 85d60cc:	75 e1                	jne    85d60af <_ZN8PvP_RoomC1Ev+0x9d>
 85d60ce:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 85d60d5:	e8 76 e3 14 00       	call   8724450 <_Znwj>
 85d60da:	89 c3                	mov    %eax,%ebx
 85d60dc:	89 d8                	mov    %ebx,%eax
 85d60de:	89 04 24             	mov    %eax,(%esp)
 85d60e1:	e8 e0 99 00 00       	call   85dfac6 <_ZN15CMatchingSystemC1Ev>
 85d60e6:	89 da                	mov    %ebx,%edx
 85d60e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d60eb:	89 90 e0 06 00 00    	mov    %edx,0x6e0(%eax)
 85d60f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d60f4:	8b 80 e0 06 00 00    	mov    0x6e0(%eax),%eax
 85d60fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d6101:	00 
 85d6102:	89 04 24             	mov    %eax,(%esp)
 85d6105:	e8 96 9a 00 00       	call   85dfba0 <_ZN15CMatchingSystem17GetMatchingSystemE22ENUM_PVP_MATCHING_TYPE>
 85d610a:	8b 55 08             	mov    0x8(%ebp),%edx
 85d610d:	89 82 e4 06 00 00    	mov    %eax,0x6e4(%edx)
 85d6113:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6116:	c6 80 1c 06 00 00 00 	movb   $0x0,0x61c(%eax)
 85d611d:	83 c4 20             	add    $0x20,%esp
 85d6120:	5b                   	pop    %ebx
 85d6121:	5e                   	pop    %esi
 85d6122:	5d                   	pop    %ebp
 85d6123:	c3                   	ret
 85d6124:	89 d3                	mov    %edx,%ebx
 85d6126:	89 c6                	mov    %eax,%esi
 85d6128:	8b 45 08             	mov    0x8(%ebp),%eax
 85d612b:	05 e8 05 00 00       	add    $0x5e8,%eax
 85d6130:	89 04 24             	mov    %eax,(%esp)
 85d6133:	e8 f6 52 af ff       	call   80cb42e <_ZN5MutexD1Ev>
 85d6138:	89 f0                	mov    %esi,%eax
 85d613a:	89 da                	mov    %ebx,%edx
 85d613c:	89 d3                	mov    %edx,%ebx
 85d613e:	89 c6                	mov    %eax,%esi
 85d6140:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6143:	05 bc 05 00 00       	add    $0x5bc,%eax
 85d6148:	89 04 24             	mov    %eax,(%esp)
 85d614b:	e8 42 fe ff ff       	call   85d5f92 <_ZN17PvpResultRecvFlagD1Ev>
 85d6150:	89 f0                	mov    %esi,%eax
 85d6152:	89 da                	mov    %ebx,%edx
 85d6154:	89 d3                	mov    %edx,%ebx
 85d6156:	89 c6                	mov    %eax,%esi
 85d6158:	8b 45 08             	mov    0x8(%ebp),%eax
 85d615b:	05 b4 05 00 00       	add    $0x5b4,%eax
 85d6160:	89 04 24             	mov    %eax,(%esp)
 85d6163:	e8 2a fe ff ff       	call   85d5f92 <_ZN17PvpResultRecvFlagD1Ev>
 85d6168:	89 f0                	mov    %esi,%eax
 85d616a:	89 da                	mov    %ebx,%edx
 85d616c:	89 d3                	mov    %edx,%ebx
 85d616e:	89 c6                	mov    %eax,%esi
 85d6170:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6173:	05 68 02 00 00       	add    $0x268,%eax
 85d6178:	89 04 24             	mov    %eax,(%esp)
 85d617b:	e8 84 e7 ff ff       	call   85d4904 <_ZN12PvpUserTableD1Ev>
 85d6180:	89 f0                	mov    %esi,%eax
 85d6182:	89 da                	mov    %ebx,%edx
 85d6184:	eb 00                	jmp    85d6186 <_ZN8PvP_RoomC1Ev+0x174>
 85d6186:	89 d3                	mov    %edx,%ebx
 85d6188:	89 c6                	mov    %eax,%esi
 85d618a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d618d:	05 c4 00 00 00       	add    $0xc4,%eax
 85d6192:	89 04 24             	mov    %eax,(%esp)
 85d6195:	e8 ec 78 00 00       	call   85dda86 <_ZN16PvP_GuildWar_LogD1Ev>
 85d619a:	89 f0                	mov    %esi,%eax
 85d619c:	89 da                	mov    %ebx,%edx
 85d619e:	89 04 24             	mov    %eax,(%esp)
 85d61a1:	e8 aa d5 50 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// PvP_Room::PvP_Room @ 0x85d6012

/* PvP_Room::PvP_Room() */

void __thiscall PvP_Room::PvP_Room(PvP_Room *this)

{
  CMatchingSystem *this_00;
  undefined4 uVar1;
  int local_14;
  int local_10;
  
  PvP_GuildWar_Log::PvP_GuildWar_Log((PvP_GuildWar_Log *)(this + 0xc4));
                    /* try { // try from 085d6035 to 085d6039 has its CatchHandler @ 085d6186 */
  cElection<int,8,8>::cElection((cElection<int,8,8> *)(this + 300));
  PvpUserTable::PvpUserTable((PvpUserTable *)(this + 0x268));
  PvpResultRecvFlag::PvpResultRecvFlag((PvpResultRecvFlag *)(this + 0x5b4));
  PvpResultRecvFlag::PvpResultRecvFlag((PvpResultRecvFlag *)(this + 0x5bc));
  Mutex::Mutex((Mutex *)(this + 0x5e8));
  local_14 = 0;
                    /* try { // try from 085d60a1 to 085d6109 has its CatchHandler @ 085d6124 */
  std::fill<int*,int>((int *)(this + 0x22c),(int *)(this + 0x268),&local_14);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0xc) * 4) = 0;
  }
  this_00 = operator_new(0x18);
  CMatchingSystem::CMatchingSystem(this_00);
  *(CMatchingSystem **)(this + 0x6e0) = this_00;
  uVar1 = CMatchingSystem::GetMatchingSystem(*(CMatchingSystem **)(this + 0x6e0),0);
  *(undefined4 *)(this + 0x6e4) = uVar1;
  this[0x61c] = (PvP_Room)0x0;
  return;
}

```

---

## SelectRandomMap

```asm
// === 085d8bbc PvP_Room::SelectRandomMap  [0x085d8bbc-0x85d8c39] ===
 85d8bbc:	55                   	push   %ebp
 85d8bbd:	89 e5                	mov    %esp,%ebp
 85d8bbf:	56                   	push   %esi
 85d8bc0:	53                   	push   %ebx
 85d8bc1:	83 ec 20             	sub    $0x20,%esp
 85d8bc4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d8bc7:	89 04 24             	mov    %eax,(%esp)
 85d8bca:	e8 dd 55 ab ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85d8bcf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d8bd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8bd9:	89 04 24             	mov    %eax,(%esp)
 85d8bdc:	e8 dd fb ff ff       	call   85d87be <_ZN8PvP_Room24GetCandidateMapIndexListERSt6vectorIiSaIiEE>
 85d8be1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d8be4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8be8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8beb:	89 04 24             	mov    %eax,(%esp)
 85d8bee:	e8 bb fc ff ff       	call   85d88ae <_ZN8PvP_Room18DrawRandomMapIndexERSt6vectorIiSaIiEE>
 85d8bf3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d8bf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d8bf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8c00:	89 04 24             	mov    %eax,(%esp)
 85d8c03:	e8 22 ff ff ff       	call   85d8b2a <_ZN8PvP_Room13ChangePvPModeEi>
 85d8c08:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85d8c0b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d8c0e:	89 04 24             	mov    %eax,(%esp)
 85d8c11:	e8 c4 b1 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85d8c16:	89 d8                	mov    %ebx,%eax
 85d8c18:	83 c4 20             	add    $0x20,%esp
 85d8c1b:	5b                   	pop    %ebx
 85d8c1c:	5e                   	pop    %esi
 85d8c1d:	5d                   	pop    %ebp
 85d8c1e:	c3                   	ret
 85d8c1f:	89 d3                	mov    %edx,%ebx
 85d8c21:	89 c6                	mov    %eax,%esi
 85d8c23:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d8c26:	89 04 24             	mov    %eax,(%esp)
 85d8c29:	e8 ac b1 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85d8c2e:	89 f0                	mov    %esi,%eax
 85d8c30:	89 da                	mov    %ebx,%edx
 85d8c32:	89 04 24             	mov    %eax,(%esp)
 85d8c35:	e8 16 ab 50 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// PvP_Room::SelectRandomMap @ 0x85d8bbc

/* PvP_Room::SelectRandomMap() */

int __thiscall PvP_Room::SelectRandomMap(PvP_Room *this)

{
  int iVar1;
  vector<int,std::allocator<int>> local_1c [12];
  int local_10;
  
  std::vector<int,std::allocator<int>>::vector(local_1c);
                    /* try { // try from 085d8bdc to 085d8c07 has its CatchHandler @ 085d8c1f */
  GetCandidateMapIndexList(this,(vector *)local_1c);
  local_10 = DrawRandomMapIndex(this,(vector *)local_1c);
  ChangePvPMode(this,local_10);
  iVar1 = local_10;
  std::vector<int,std::allocator<int>>::~vector(local_1c);
  return iVar1;
}

```

---

## SendWalkOut

```asm
// === 085dd3f8 PvP_Room::SendWalkOut  [0x085dd3f8-0x85dd4a3] ===
 85dd3f8:	55                   	push   %ebp
 85dd3f9:	89 e5                	mov    %esp,%ebp
 85dd3fb:	56                   	push   %esi
 85dd3fc:	53                   	push   %ebx
 85dd3fd:	83 ec 20             	sub    $0x20,%esp
 85dd400:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd403:	89 04 24             	mov    %eax,(%esp)
 85dd406:	e8 41 09 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85dd40b:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 85dd412:	00 
 85dd413:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dd41a:	00 
 85dd41b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd41e:	89 04 24             	mov    %eax,(%esp)
 85dd421:	e8 d6 e4 ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85dd426:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd429:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd42d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd430:	89 04 24             	mov    %eax,(%esp)
 85dd433:	e8 e8 e4 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dd438:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd43b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd43f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd442:	89 04 24             	mov    %eax,(%esp)
 85dd445:	e8 d6 e4 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dd44a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dd451:	00 
 85dd452:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd455:	89 04 24             	mov    %eax,(%esp)
 85dd458:	e8 fb e4 ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85dd45d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd460:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd464:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd467:	89 04 24             	mov    %eax,(%esp)
 85dd46a:	e8 a9 e9 ff ff       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85dd46f:	bb 01 00 00 00       	mov    $0x1,%ebx
 85dd474:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd477:	89 04 24             	mov    %eax,(%esp)
 85dd47a:	e8 01 0a fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd47f:	89 d8                	mov    %ebx,%eax
 85dd481:	83 c4 20             	add    $0x20,%esp
 85dd484:	5b                   	pop    %ebx
 85dd485:	5e                   	pop    %esi
 85dd486:	5d                   	pop    %ebp
 85dd487:	c3                   	ret
 85dd488:	89 d3                	mov    %edx,%ebx
 85dd48a:	89 c6                	mov    %eax,%esi
 85dd48c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dd48f:	89 04 24             	mov    %eax,(%esp)
 85dd492:	e8 e9 09 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd497:	89 f0                	mov    %esi,%eax
 85dd499:	89 da                	mov    %ebx,%edx
 85dd49b:	89 04 24             	mov    %eax,(%esp)
 85dd49e:	e8 ad 62 50 00       	call   8ae3750 <_Unwind_Resume>
 85dd4a3:	90                   	nop

```

```c
// PvP_Room::SendWalkOut @ 0x85dd3f8

/* PvP_Room::SendWalkOut(int, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall PvP_Room::SendWalkOut(PvP_Room *this,int param_1,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085dd421 to 085dd46e has its CatchHandler @ 085dd488 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,10);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  send_to_pvp(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}

```

---

## SetIDX

```asm
// === 085d62ac PvP_Room::SetIDX  [0x085d62ac-0x85d62c7] ===
 85d62ac:	55                   	push   %ebp
 85d62ad:	89 e5                	mov    %esp,%ebp
 85d62af:	83 ec 18             	sub    $0x18,%esp
 85d62b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d62b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d62b8:	89 10                	mov    %edx,(%eax)
 85d62ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85d62bd:	89 04 24             	mov    %eax,(%esp)
 85d62c0:	e8 03 00 00 00       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 85d62c5:	c9                   	leave
 85d62c6:	c3                   	ret
 85d62c7:	90                   	nop

```

```c
// PvP_Room::SetIDX @ 0x85d62ac

/* PvP_Room::SetIDX(int) */

void __thiscall PvP_Room::SetIDX(PvP_Room *this,int param_1)

{
  *(int *)this = param_1;
  reset(this);
  return;
}

```

---

## SetPVPResult

```asm
// === 085dc034 PvP_Room::SetPVPResult  [0x085dc034-0x85dc07d] ===
 85dc034:	55                   	push   %ebp
 85dc035:	89 e5                	mov    %esp,%ebp
 85dc037:	53                   	push   %ebx
 85dc038:	83 ec 04             	sub    $0x4,%esp
 85dc03b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85dc03f:	78 33                	js     85dc074 <_ZN8PvP_Room12SetPVPResultEiRK13PvpResultType+0x40>
 85dc041:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85dc045:	7f 30                	jg     85dc077 <_ZN8PvP_Room12SetPVPResultEiRK13PvpResultType+0x43>
 85dc047:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 85dc04a:	8b 45 10             	mov    0x10(%ebp),%eax
 85dc04d:	89 04 24             	mov    %eax,(%esp)
 85dc050:	e8 a9 9e ff ff       	call   85d5efe <_ZNK13PvpResultType13GetTotalScoreEv>
 85dc055:	8b 55 08             	mov    0x8(%ebp),%edx
 85dc058:	8d 4b 1c             	lea    0x1c(%ebx),%ecx
 85dc05b:	89 44 8a 08          	mov    %eax,0x8(%edx,%ecx,4)
 85dc05f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85dc062:	8b 45 10             	mov    0x10(%ebp),%eax
 85dc065:	8b 50 18             	mov    0x18(%eax),%edx
 85dc068:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc06b:	83 c1 24             	add    $0x24,%ecx
 85dc06e:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 85dc072:	eb 04                	jmp    85dc078 <_ZN8PvP_Room12SetPVPResultEiRK13PvpResultType+0x44>
 85dc074:	90                   	nop
 85dc075:	eb 01                	jmp    85dc078 <_ZN8PvP_Room12SetPVPResultEiRK13PvpResultType+0x44>
 85dc077:	90                   	nop
 85dc078:	83 c4 04             	add    $0x4,%esp
 85dc07b:	5b                   	pop    %ebx
 85dc07c:	5d                   	pop    %ebp
 85dc07d:	c3                   	ret

```

```c
// PvP_Room::SetPVPResult @ 0x85dc034

/* PvP_Room::SetPVPResult(int, PvpResultType const&) */

void __thiscall PvP_Room::SetPVPResult(PvP_Room *this,int param_1,PvpResultType *param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar1 = PvpResultType::GetTotalScore(param_2);
    *(undefined4 *)(this + (param_1 + 0x1c) * 4 + 8) = uVar1;
    *(undefined4 *)(this + (param_1 + 0x24) * 4 + 8) = *(undefined4 *)(param_2 + 0x18);
  }
  return;
}

```

---

## SkipLastRankResultTimer

```asm
// === 085dcaba PvP_Room::SkipLastRankResultTimer  [0x085dcaba-0x85dcad5] ===
 85dcaba:	55                   	push   %ebp
 85dcabb:	89 e5                	mov    %esp,%ebp
 85dcabd:	83 ec 18             	sub    $0x18,%esp
 85dcac0:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 85dcac7:	00 
 85dcac8:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcacb:	89 04 24             	mov    %eax,(%esp)
 85dcace:	e8 bd c2 f8 ff       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85dcad3:	c9                   	leave
 85dcad4:	c3                   	ret
 85dcad5:	90                   	nop

```

```c
// PvP_Room::SkipLastRankResultTimer @ 0x85dcaba

/* PvP_Room::SkipLastRankResultTimer() */

void __thiscall PvP_Room::SkipLastRankResultTimer(PvP_Room *this)

{
  gen_timer_key(this,0x32);
  return;
}

```

---

## VoteLackUser

```asm
// === 085dcf1a PvP_Room::VoteLackUser  [0x085dcf1a-0x85dd06f] ===
 85dcf1a:	55                   	push   %ebp
 85dcf1b:	89 e5                	mov    %esp,%ebp
 85dcf1d:	56                   	push   %esi
 85dcf1e:	53                   	push   %ebx
 85dcf1f:	83 ec 30             	sub    $0x30,%esp
 85dcf22:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85dcf26:	78 06                	js     85dcf2e <_ZN8PvP_Room12VoteLackUserEP5CUseri+0x14>
 85dcf28:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 85dcf2c:	7e 3d                	jle    85dcf6b <_ZN8PvP_Room12VoteLackUserEP5CUseri+0x51>
 85dcf2e:	8b 45 10             	mov    0x10(%ebp),%eax
 85dcf31:	89 44 24 14          	mov    %eax,0x14(%esp)
 85dcf35:	c7 44 24 10 94 12 cc 	movl   $0x8cc1294,0x10(%esp)
 85dcf3c:	08 
 85dcf3d:	c7 44 24 0c 6d 11 00 	movl   $0x116d,0xc(%esp)
 85dcf44:	00 
 85dcf45:	c7 44 24 08 c0 23 cc 	movl   $0x8cc23c0,0x8(%esp)
 85dcf4c:	08 
 85dcf4d:	c7 44 24 04 1b 12 cc 	movl   $0x8cc121b,0x4(%esp)
 85dcf54:	08 
 85dcf55:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85dcf5c:	e8 a9 6c 4f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85dcf61:	b8 00 00 00 00       	mov    $0x0,%eax
 85dcf66:	e9 fd 00 00 00       	jmp    85dd068 <_ZN8PvP_Room12VoteLackUserEP5CUseri+0x14e>
 85dcf6b:	8b 55 10             	mov    0x10(%ebp),%edx
 85dcf6e:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcf71:	83 c2 0c             	add    $0xc,%edx
 85dcf74:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dcf77:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85dcf7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcf7d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85dcf80:	74 06                	je     85dcf88 <_ZN8PvP_Room12VoteLackUserEP5CUseri+0x6e>
 85dcf82:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85dcf86:	75 0a                	jne    85dcf92 <_ZN8PvP_Room12VoteLackUserEP5CUseri+0x78>
 85dcf88:	b8 00 00 00 00       	mov    $0x0,%eax
 85dcf8d:	e9 d6 00 00 00       	jmp    85dd068 <_ZN8PvP_Room12VoteLackUserEP5CUseri+0x14e>
 85dcf92:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dcf95:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dcf99:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcf9c:	89 04 24             	mov    %eax,(%esp)
 85dcf9f:	e8 3e c2 ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85dcfa4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dcfa7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85dcfab:	78 06                	js     85dcfb3 <_ZN8PvP_Room12VoteLackUserEP5CUseri+0x99>
 85dcfad:	83 7d f4 08          	cmpl   $0x8,-0xc(%ebp)
 85dcfb1:	7e 3a                	jle    85dcfed <_ZN8PvP_Room12VoteLackUserEP5CUseri+0xd3>
 85dcfb3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dcfb6:	89 44 24 14          	mov    %eax,0x14(%esp)
 85dcfba:	c7 44 24 10 c8 12 cc 	movl   $0x8cc12c8,0x10(%esp)
 85dcfc1:	08 
 85dcfc2:	c7 44 24 0c 7b 11 00 	movl   $0x117b,0xc(%esp)
 85dcfc9:	00 
 85dcfca:	c7 44 24 08 c0 23 cc 	movl   $0x8cc23c0,0x8(%esp)
 85dcfd1:	08 
 85dcfd2:	c7 44 24 04 1b 12 cc 	movl   $0x8cc121b,0x4(%esp)
 85dcfd9:	08 
 85dcfda:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85dcfe1:	e8 24 6c 4f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85dcfe6:	b8 00 00 00 00       	mov    $0x0,%eax
 85dcfeb:	eb 7b                	jmp    85dd068 <_ZN8PvP_Room12VoteLackUserEP5CUseri+0x14e>
 85dcfed:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcff0:	8d 90 2c 01 00 00    	lea    0x12c(%eax),%edx
 85dcff6:	8b 45 10             	mov    0x10(%ebp),%eax
 85dcff9:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dcffd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dd000:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd004:	89 14 24             	mov    %edx,(%esp)
 85dd007:	e8 98 30 00 00       	call   85e00a4 <_ZN9cElectionIiLi8ELi8EE4VoteEii>
 85dd00c:	c7 44 24 04 31 00 00 	movl   $0x31,0x4(%esp)
 85dd013:	00 
 85dd014:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd017:	89 04 24             	mov    %eax,(%esp)
 85dd01a:	e8 71 bd f8 ff       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85dd01f:	89 c3                	mov    %eax,%ebx
 85dd021:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd024:	8b 30                	mov    (%eax),%esi
 85dd026:	e8 51 94 b1 ff       	call   80f647c <_Z12G_TimerQueuev>
 85dd02b:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85dd032:	00 
 85dd033:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 85dd037:	c7 44 24 10 c4 09 00 	movl   $0x9c4,0x10(%esp)
 85dd03e:	00 
 85dd03f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85dd046:	00 
 85dd047:	c7 44 24 0c 31 00 00 	movl   $0x31,0xc(%esp)
 85dd04e:	00 
 85dd04f:	89 74 24 08          	mov    %esi,0x8(%esp)
 85dd053:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dd05a:	00 
 85dd05b:	89 04 24             	mov    %eax,(%esp)
 85dd05e:	e8 fd 3d 05 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 85dd063:	b8 01 00 00 00       	mov    $0x1,%eax
 85dd068:	83 c4 30             	add    $0x30,%esp
 85dd06b:	5b                   	pop    %ebx
 85dd06c:	5e                   	pop    %esi
 85dd06d:	5d                   	pop    %ebp
 85dd06e:	c3                   	ret
 85dd06f:	90                   	nop

```

```c
// PvP_Room::VoteLackUser @ 0x85dcf1a

/* PvP_Room::VoteLackUser(CUser*, int) */

undefined4 __thiscall PvP_Room::VoteLackUser(PvP_Room *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_2 < 0) || (7 < param_2)) {
    LogManager::logFormat
              (1,"pvp.cpp","bool PvP_Room::VoteLackUser(CUser*, int)",0x116d,
               "VoteSlotNo(%d) < 0 || MAX_PVP_PLAYER < VoteSlotNo",param_2);
    uVar1 = 0;
  }
  else if ((param_1 == *(CUser **)(this + (param_2 + 0xc) * 4)) ||
          (*(CUser **)(this + (param_2 + 0xc) * 4) == (CUser *)0x0)) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_user_seat(this,param_1);
    if ((iVar2 < 0) || (8 < iVar2)) {
      LogManager::logFormat
                (1,"pvp.cpp","bool PvP_Room::VoteLackUser(CUser*, int)",0x117b,
                 "UserSlotNo(%d) < 0 || MAX_PVP_PLAYER < UserSlotNo",iVar2);
      uVar1 = 0;
    }
    else {
      cElection<int,8,8>::Vote((cElection<int,8,8> *)(this + 300),iVar2,param_2);
      uVar3 = gen_timer_key(this,0x31);
      uVar1 = *(undefined4 *)this;
      uVar4 = G_TimerQueue();
      TimerQueue::InsertTimerInMilisecond(uVar4,1,uVar1,0x31,0x9c4,0,uVar3,0);
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## WalkOut

```asm
// === 085dd4a4 PvP_Room::WalkOut  [0x085dd4a4-0x85dd6b9] ===
 85dd4a4:	55                   	push   %ebp
 85dd4a5:	89 e5                	mov    %esp,%ebp
 85dd4a7:	56                   	push   %esi
 85dd4a8:	53                   	push   %ebx
 85dd4a9:	83 ec 40             	sub    $0x40,%esp
 85dd4ac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd4af:	89 04 24             	mov    %eax,(%esp)
 85dd4b2:	e8 95 08 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85dd4b7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85dd4be:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 85dd4c2:	c6 45 de 00          	movb   $0x0,-0x22(%ebp)
 85dd4c6:	c6 45 dd 00          	movb   $0x0,-0x23(%ebp)
 85dd4ca:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd4cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd4d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd4d4:	89 04 24             	mov    %eax,(%esp)
 85dd4d7:	e8 96 bd ff ff       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 85dd4dc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85dd4df:	8b 45 18             	mov    0x18(%ebp),%eax
 85dd4e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dd4e6:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd4e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd4ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd4f0:	89 04 24             	mov    %eax,(%esp)
 85dd4f3:	e8 00 ff ff ff       	call   85dd3f8 <_ZN8PvP_Room11SendWalkOutEi17ENUM_WALKOUT_TYPE>
 85dd4f8:	8d 45 dd             	lea    -0x23(%ebp),%eax
 85dd4fb:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85dd4ff:	8d 45 de             	lea    -0x22(%ebp),%eax
 85dd502:	89 44 24 18          	mov    %eax,0x18(%esp)
 85dd506:	8d 45 df             	lea    -0x21(%ebp),%eax
 85dd509:	89 44 24 14          	mov    %eax,0x14(%esp)
 85dd50d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85dd510:	89 44 24 10          	mov    %eax,0x10(%esp)
 85dd514:	8b 45 14             	mov    0x14(%ebp),%eax
 85dd517:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85dd51b:	8b 45 10             	mov    0x10(%ebp),%eax
 85dd51e:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dd522:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dd525:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd529:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd52c:	89 04 24             	mov    %eax,(%esp)
 85dd52f:	e8 8c a2 ff ff       	call   85d77c0 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_>
 85dd534:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dd537:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd53a:	89 04 24             	mov    %eax,(%esp)
 85dd53d:	e8 20 93 ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85dd542:	85 c0                	test   %eax,%eax
 85dd544:	75 12                	jne    85dd558 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0xb4>
 85dd546:	0f b6 45 dd          	movzbl -0x23(%ebp),%eax
 85dd54a:	83 f0 01             	xor    $0x1,%eax
 85dd54d:	84 c0                	test   %al,%al
 85dd54f:	74 07                	je     85dd558 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0xb4>
 85dd551:	b8 01 00 00 00       	mov    $0x1,%eax
 85dd556:	eb 05                	jmp    85dd55d <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0xb9>
 85dd558:	b8 00 00 00 00       	mov    $0x0,%eax
 85dd55d:	84 c0                	test   %al,%al
 85dd55f:	74 3b                	je     85dd59c <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0xf8>
 85dd561:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd564:	89 04 24             	mov    %eax,(%esp)
 85dd567:	e8 28 04 c5 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85dd56c:	89 44 24 14          	mov    %eax,0x14(%esp)
 85dd570:	c7 44 24 10 fc 12 cc 	movl   $0x8cc12fc,0x10(%esp)
 85dd577:	08 
 85dd578:	c7 44 24 0c 10 12 00 	movl   $0x1210,0xc(%esp)
 85dd57f:	00 
 85dd580:	c7 44 24 08 00 23 cc 	movl   $0x8cc2300,0x8(%esp)
 85dd587:	08 
 85dd588:	c7 44 24 04 1b 12 cc 	movl   $0x8cc121b,0x4(%esp)
 85dd58f:	08 
 85dd590:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85dd597:	e8 6e 66 4f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85dd59c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85dd5a0:	0f 85 dd 00 00 00    	jne    85dd683 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x1df>
 85dd5a6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85dd5a9:	85 c0                	test   %eax,%eax
 85dd5ab:	74 4e                	je     85dd5fb <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x157>
 85dd5ad:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd5b0:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dd5b6:	8b 00                	mov    (%eax),%eax
 85dd5b8:	83 c0 2c             	add    $0x2c,%eax
 85dd5bb:	8b 18                	mov    (%eax),%ebx
 85dd5bd:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85dd5c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd5c3:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dd5c9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85dd5cc:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85dd5d0:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85dd5d3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85dd5d7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dd5da:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85dd5de:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd5e2:	89 04 24             	mov    %eax,(%esp)
 85dd5e5:	ff d3                	call   *%ebx
 85dd5e7:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 85dd5ea:	e8 b8 cd af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dd5ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85dd5f3:	89 04 24             	mov    %eax,(%esp)
 85dd5f6:	e8 b3 99 0e 00       	call   86c6fae <_ZN9GameWorld12out_from_pvpEP5CUser>
 85dd5fb:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 85dd5ff:	84 c0                	test   %al,%al
 85dd601:	74 38                	je     85dd63b <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x197>
 85dd603:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd606:	89 04 24             	mov    %eax,(%esp)
 85dd609:	e8 d8 e2 ae ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85dd60e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd611:	8b 55 10             	mov    0x10(%ebp),%edx
 85dd614:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dd618:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd61c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd61f:	89 04 24             	mov    %eax,(%esp)
 85dd622:	e8 bb e3 ff ff       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 85dd627:	e8 7b cd af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dd62c:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85dd62f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd633:	89 04 24             	mov    %eax,(%esp)
 85dd636:	e8 d9 b5 0e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 85dd63b:	0f b6 45 de          	movzbl -0x22(%ebp),%eax
 85dd63f:	84 c0                	test   %al,%al
 85dd641:	74 31                	je     85dd674 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x1d0>
 85dd643:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd646:	89 04 24             	mov    %eax,(%esp)
 85dd649:	e8 98 e2 ae ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85dd64e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd651:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dd655:	8b 45 08             	mov    0x8(%ebp),%eax
 85dd658:	89 04 24             	mov    %eax,(%esp)
 85dd65b:	e8 da e6 ff ff       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 85dd660:	e8 42 cd af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dd665:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85dd668:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dd66c:	89 04 24             	mov    %eax,(%esp)
 85dd66f:	e8 a0 b5 0e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 85dd674:	0f b6 45 dd          	movzbl -0x23(%ebp),%eax
 85dd678:	84 c0                	test   %al,%al
 85dd67a:	74 07                	je     85dd683 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x1df>
 85dd67c:	bb 00 00 00 00       	mov    $0x0,%ebx
 85dd681:	eb 22                	jmp    85dd6a5 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x201>
 85dd683:	bb 01 00 00 00       	mov    $0x1,%ebx
 85dd688:	eb 1b                	jmp    85dd6a5 <_ZN8PvP_Room7WalkOutEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE+0x201>
 85dd68a:	89 d3                	mov    %edx,%ebx
 85dd68c:	89 c6                	mov    %eax,%esi
 85dd68e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd691:	89 04 24             	mov    %eax,(%esp)
 85dd694:	e8 e7 07 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd699:	89 f0                	mov    %esi,%eax
 85dd69b:	89 da                	mov    %ebx,%edx
 85dd69d:	89 04 24             	mov    %eax,(%esp)
 85dd6a0:	e8 ab 60 50 00       	call   8ae3750 <_Unwind_Resume>
 85dd6a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85dd6a8:	89 04 24             	mov    %eax,(%esp)
 85dd6ab:	e8 d0 07 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dd6b0:	89 d8                	mov    %ebx,%eax
 85dd6b2:	83 c4 40             	add    $0x40,%esp
 85dd6b5:	5b                   	pop    %ebx
 85dd6b6:	5e                   	pop    %esi
 85dd6b7:	5d                   	pop    %ebp
 85dd6b8:	c3                   	ret
 85dd6b9:	90                   	nop

```

```c
// PvP_Room::WalkOut @ 0x85dd4a4

/* PvP_Room::WalkOut(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE) */

undefined4 __thiscall
PvP_Room::WalkOut(PvP_Room *this,undefined4 param_1,int param_2,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  CUser *pCVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *pGVar5;
  char local_27;
  char local_26;
  char local_25;
  CUser *local_24;
  PacketGuard local_20 [12];
  undefined4 local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_20);
  local_24 = (CUser *)0x0;
  local_25 = '\0';
  local_26 = '\0';
  local_27 = '\0';
  local_14 = get_team(this,param_2);
                    /* try { // try from 085dd4f3 to 085dd673 has its CatchHandler @ 085dd68a */
  SendWalkOut(this,param_2,param_5);
  local_10 = set_seat_state(this,param_1,param_2,param_4,&local_24,&local_25,&local_26,&local_27);
  iVar3 = get_waiter_count(this);
  if ((iVar3 == 0) && (local_27 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = get_index(this);
    LogManager::logFormat
              (1,"pvp.cpp","bool PvP_Room::WalkOut(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)"
               ,0x1210,&DAT_08cc12fc,uVar4);
  }
  if (local_10 == 0) {
    if (local_24 != (CUser *)0x0) {
      (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
                (*(undefined4 *)(this + 0x6e4),local_24,this,local_14,param_2);
      pCVar2 = local_24;
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::out_from_pvp(pGVar5,pCVar2);
    }
    if (local_25 != '\0') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      make_seat_info(this,(char *)local_20,param_2);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_20);
    }
    if (local_26 != '\0') {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      make_state_info(this,(char *)local_20);
      pGVar5 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(pGVar5,local_20);
    }
    if (local_27 != '\0') {
      uVar4 = 0;
      goto LAB_085dd6a5;
    }
  }
  uVar4 = 1;
LAB_085dd6a5:
  PacketGuard::~PacketGuard(local_20);
  return uVar4;
}

```

---

## battle_reset

```asm
// === 085d6430 PvP_Room::battle_reset  [0x085d6430-0x85d65b3] ===
 85d6430:	55                   	push   %ebp
 85d6431:	89 e5                	mov    %esp,%ebp
 85d6433:	83 ec 28             	sub    $0x28,%esp
 85d6436:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6439:	89 04 24             	mov    %eax,(%esp)
 85d643c:	e8 f9 94 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d6441:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d6448:	eb 73                	jmp    85d64bd <_ZN8PvP_Room12battle_resetEv+0x8d>
 85d644a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d644d:	8b 55 08             	mov    0x8(%ebp),%edx
 85d6450:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85d6457:	00 
 85d6458:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d645b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d645e:	c6 84 02 d0 05 00 00 	movb   $0x0,0x5d0(%edx,%eax,1)
 85d6465:	00 
 85d6466:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d6469:	8b 55 08             	mov    0x8(%ebp),%edx
 85d646c:	c6 44 02 70 00       	movb   $0x0,0x70(%edx,%eax,1)
 85d6471:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85d6474:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6477:	83 c2 0c             	add    $0xc,%edx
 85d647a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d647d:	85 c0                	test   %eax,%eax
 85d647f:	74 38                	je     85d64b9 <_ZN8PvP_Room12battle_resetEv+0x89>
 85d6481:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85d6484:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6487:	83 c2 0c             	add    $0xc,%edx
 85d648a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d648d:	89 04 24             	mov    %eax,(%esp)
 85d6490:	e8 c5 34 b2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85d6495:	89 04 24             	mov    %eax,(%esp)
 85d6498:	e8 e3 1b b2 ff       	call   80f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>
 85d649d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85d64a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d64a3:	83 c2 0c             	add    $0xc,%edx
 85d64a6:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d64a9:	89 04 24             	mov    %eax,(%esp)
 85d64ac:	e8 a9 34 b2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85d64b1:	89 04 24             	mov    %eax,(%esp)
 85d64b4:	e8 ed 1c b2 ff       	call   80f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>
 85d64b9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d64bd:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85d64c1:	0f 9e c0             	setle  %al
 85d64c4:	84 c0                	test   %al,%al
 85d64c6:	75 82                	jne    85d644a <_ZN8PvP_Room12battle_resetEv+0x1a>
 85d64c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d64cb:	05 dc 05 00 00       	add    $0x5dc,%eax
 85d64d0:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 85d64d7:	00 
 85d64d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d64df:	00 
 85d64e0:	89 04 24             	mov    %eax,(%esp)
 85d64e3:	e8 d8 77 aa ff       	call   807dcc0 <memset@plt>
 85d64e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d64eb:	c7 80 d8 05 00 00 00 	movl   $0x0,0x5d8(%eax)
 85d64f2:	00 00 00 
 85d64f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d64f8:	c7 80 b8 00 00 00 01 	movl   $0x1,0xb8(%eax)
 85d64ff:	00 00 00 
 85d6502:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6505:	05 b4 05 00 00       	add    $0x5b4,%eax
 85d650a:	89 04 24             	mov    %eax,(%esp)
 85d650d:	e8 b4 fa ff ff       	call   85d5fc6 <_ZN17PvpResultRecvFlag5ClearEv>
 85d6512:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6515:	05 bc 05 00 00       	add    $0x5bc,%eax
 85d651a:	89 04 24             	mov    %eax,(%esp)
 85d651d:	e8 a4 fa ff ff       	call   85d5fc6 <_ZN17PvpResultRecvFlag5ClearEv>
 85d6522:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6525:	05 68 02 00 00       	add    $0x268,%eax
 85d652a:	89 04 24             	mov    %eax,(%esp)
 85d652d:	e8 d8 e3 ff ff       	call   85d490a <_ZN12PvpUserTable5ClearEv>
 85d6532:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6535:	c6 80 c0 00 00 00 00 	movb   $0x0,0xc0(%eax)
 85d653c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d653f:	05 20 06 00 00       	add    $0x620,%eax
 85d6544:	89 04 24             	mov    %eax,(%esp)
 85d6547:	e8 fa 7a 00 00       	call   85de046 <_ZN15CRelayBattleMgr5ResetEv>
 85d654c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d654f:	c6 80 14 06 00 00 00 	movb   $0x0,0x614(%eax)
 85d6556:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6559:	c6 80 15 06 00 00 00 	movb   $0x0,0x615(%eax)
 85d6560:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6563:	c6 80 16 06 00 00 00 	movb   $0x0,0x616(%eax)
 85d656a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d656d:	c6 80 17 06 00 00 00 	movb   $0x0,0x617(%eax)
 85d6574:	c7 45 f4 31 00 00 00 	movl   $0x31,-0xc(%ebp)
 85d657b:	eb 1f                	jmp    85d659c <_ZN8PvP_Room12battle_resetEv+0x16c>
 85d657d:	83 7d f4 3e          	cmpl   $0x3e,-0xc(%ebp)
 85d6581:	74 14                	je     85d6597 <_ZN8PvP_Room12battle_resetEv+0x167>
 85d6583:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d6586:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d658a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d658d:	89 04 24             	mov    %eax,(%esp)
 85d6590:	e8 fb 27 f9 ff       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85d6595:	eb 01                	jmp    85d6598 <_ZN8PvP_Room12battle_resetEv+0x168>
 85d6597:	90                   	nop
 85d6598:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d659c:	83 7d f4 3e          	cmpl   $0x3e,-0xc(%ebp)
 85d65a0:	0f 9e c0             	setle  %al
 85d65a3:	84 c0                	test   %al,%al
 85d65a5:	75 d6                	jne    85d657d <_ZN8PvP_Room12battle_resetEv+0x14d>
 85d65a7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d65aa:	89 04 24             	mov    %eax,(%esp)
 85d65ad:	e8 8e 93 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d65b2:	c9                   	leave
 85d65b3:	c3                   	ret

```

```c
// PvP_Room::battle_reset @ 0x85d6430

/* PvP_Room::battle_reset() */

void __thiscall PvP_Room::battle_reset(PvP_Room *this)

{
  CHackAnalyzer *this_00;
  int local_14;
  int local_10;
  
  lock();
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    this[local_14 + 0x5c8] = (PvP_Room)0x0;
    this[local_14 + 0x5d0] = (PvP_Room)0x0;
    this[local_14 + 0x70] = (PvP_Room)0x0;
    if (*(int *)(this + (local_14 + 0xc) * 4) != 0) {
      CUser::getHackAnalyzer(*(CUser **)(this + (local_14 + 0xc) * 4));
      WongWork::CHackAnalyzer::reportHackInfo();
      this_00 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + (local_14 + 0xc) * 4));
      WongWork::CHackAnalyzer::resetHackInfo(this_00);
    }
  }
  memset(this + 0x5dc,0,0xc);
  *(undefined4 *)(this + 0x5d8) = 0;
  *(undefined4 *)(this + 0xb8) = 1;
  PvpResultRecvFlag::Clear((PvpResultRecvFlag *)(this + 0x5b4));
  PvpResultRecvFlag::Clear((PvpResultRecvFlag *)(this + 0x5bc));
  PvpUserTable::Clear((PvpUserTable *)(this + 0x268));
  this[0xc0] = (PvP_Room)0x0;
  CRelayBattleMgr::Reset((CRelayBattleMgr *)(this + 0x620));
  this[0x614] = (PvP_Room)0x0;
  this[0x615] = (PvP_Room)0x0;
  this[0x616] = (PvP_Room)0x0;
  this[0x617] = (PvP_Room)0x0;
  for (local_10 = 0x31; local_10 < 0x3f; local_10 = local_10 + 1) {
    if (local_10 != 0x3e) {
      gen_timer_key(this,local_10);
    }
  }
  unlock();
  return;
}

```

---

## calculate_pvp_point

```asm
// === 085dc778 PvP_Room::calculate_pvp_point  [0x085dc778-0x85dc865] ===
 85dc778:	55                   	push   %ebp
 85dc779:	89 e5                	mov    %esp,%ebp
 85dc77b:	83 ec 28             	sub    $0x28,%esp
 85dc77e:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc781:	05 68 02 00 00       	add    $0x268,%eax
 85dc786:	89 04 24             	mov    %eax,(%esp)
 85dc789:	e8 7c 81 ff ff       	call   85d490a <_ZN12PvpUserTable5ClearEv>
 85dc78e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85dc795:	e9 aa 00 00 00       	jmp    85dc844 <_ZN8PvP_Room19calculate_pvp_pointEv+0xcc>
 85dc79a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc79d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc7a0:	83 c2 0c             	add    $0xc,%edx
 85dc7a3:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc7a6:	85 c0                	test   %eax,%eax
 85dc7a8:	0f 84 8e 00 00 00    	je     85dc83c <_ZN8PvP_Room19calculate_pvp_pointEv+0xc4>
 85dc7ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dc7b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc7b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc7b8:	89 04 24             	mov    %eax,(%esp)
 85dc7bb:	e8 86 d8 ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85dc7c0:	84 c0                	test   %al,%al
 85dc7c2:	75 7b                	jne    85dc83f <_ZN8PvP_Room19calculate_pvp_pointEv+0xc7>
 85dc7c4:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc7c7:	8b 40 04             	mov    0x4(%eax),%eax
 85dc7ca:	83 f8 01             	cmp    $0x1,%eax
 85dc7cd:	74 0b                	je     85dc7da <_ZN8PvP_Room19calculate_pvp_pointEv+0x62>
 85dc7cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc7d2:	8b 40 04             	mov    0x4(%eax),%eax
 85dc7d5:	83 f8 04             	cmp    $0x4,%eax
 85dc7d8:	75 2a                	jne    85dc804 <_ZN8PvP_Room19calculate_pvp_pointEv+0x8c>
 85dc7da:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc7dd:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc7e0:	83 c2 0c             	add    $0xc,%edx
 85dc7e3:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc7e6:	8b 55 08             	mov    0x8(%ebp),%edx
 85dc7e9:	81 c2 68 02 00 00    	add    $0x268,%edx
 85dc7ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dc7f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dc7f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc7fa:	89 14 24             	mov    %edx,(%esp)
 85dc7fd:	e8 7e 81 ff ff       	call   85d4980 <_ZN12PvpUserTable3SetEiP5CUser>
 85dc802:	eb 3c                	jmp    85dc840 <_ZN8PvP_Room19calculate_pvp_pointEv+0xc8>
 85dc804:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc807:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc80a:	83 c2 0c             	add    $0xc,%edx
 85dc80d:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85dc810:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dc813:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dc816:	0f b6 84 01 d0 05 00 	movzbl 0x5d0(%ecx,%eax,1),%eax
 85dc81d:	00 
 85dc81e:	0f b6 c0             	movzbl %al,%eax
 85dc821:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dc824:	81 c1 68 02 00 00    	add    $0x268,%ecx
 85dc82a:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dc82e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc832:	89 0c 24             	mov    %ecx,(%esp)
 85dc835:	e8 46 81 ff ff       	call   85d4980 <_ZN12PvpUserTable3SetEiP5CUser>
 85dc83a:	eb 04                	jmp    85dc840 <_ZN8PvP_Room19calculate_pvp_pointEv+0xc8>
 85dc83c:	90                   	nop
 85dc83d:	eb 01                	jmp    85dc840 <_ZN8PvP_Room19calculate_pvp_pointEv+0xc8>
 85dc83f:	90                   	nop
 85dc840:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85dc844:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85dc848:	0f 9e c0             	setle  %al
 85dc84b:	84 c0                	test   %al,%al
 85dc84d:	0f 85 47 ff ff ff    	jne    85dc79a <_ZN8PvP_Room19calculate_pvp_pointEv+0x22>
 85dc853:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc856:	05 68 02 00 00       	add    $0x268,%eax
 85dc85b:	89 04 24             	mov    %eax,(%esp)
 85dc85e:	e8 6d 83 ff ff       	call   85d4bd0 <_ZN12PvpUserTable9CalculateEv>
 85dc863:	c9                   	leave
 85dc864:	c3                   	ret
 85dc865:	90                   	nop

```

```c
// PvP_Room::calculate_pvp_point @ 0x85dc778

/* PvP_Room::calculate_pvp_point() */

void __thiscall PvP_Room::calculate_pvp_point(PvP_Room *this)

{
  char cVar1;
  int local_10;
  
  PvpUserTable::Clear((PvpUserTable *)(this + 0x268));
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if ((*(int *)(this + (local_10 + 0xc) * 4) != 0) &&
       (cVar1 = IsPvpObserver(this,local_10), cVar1 == '\0')) {
      if ((*(int *)(this + 4) == 1) || (*(int *)(this + 4) == 4)) {
        PvpUserTable::Set((PvpUserTable *)(this + 0x268),local_10,
                          *(CUser **)(this + (local_10 + 0xc) * 4));
      }
      else {
        PvpUserTable::Set((PvpUserTable *)(this + 0x268),(uint)(byte)this[local_10 + 0x5d0],
                          *(CUser **)(this + (local_10 + 0xc) * 4));
      }
    }
  }
  PvpUserTable::Calculate((PvpUserTable *)(this + 0x268));
  return;
}

```

---

## change_manager_to_winner

```asm
// === 085d7df0 PvP_Room::change_manager_to_winner  [0x085d7df0-0x85d7ef3] ===
 85d7df0:	55                   	push   %ebp
 85d7df1:	89 e5                	mov    %esp,%ebp
 85d7df3:	83 ec 28             	sub    $0x28,%esp
 85d7df6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7df9:	8b 40 28             	mov    0x28(%eax),%eax
 85d7dfc:	85 c0                	test   %eax,%eax
 85d7dfe:	75 0a                	jne    85d7e0a <_ZN8PvP_Room24change_manager_to_winnerEv+0x1a>
 85d7e00:	b8 00 00 00 00       	mov    $0x0,%eax
 85d7e05:	e9 e7 00 00 00       	jmp    85d7ef1 <_ZN8PvP_Room24change_manager_to_winnerEv+0x101>
 85d7e0a:	e8 98 25 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d7e0f:	89 04 24             	mov    %eax,(%esp)
 85d7e12:	e8 09 ed b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d7e17:	83 f8 0f             	cmp    $0xf,%eax
 85d7e1a:	0f 94 c0             	sete   %al
 85d7e1d:	84 c0                	test   %al,%al
 85d7e1f:	74 0a                	je     85d7e2b <_ZN8PvP_Room24change_manager_to_winnerEv+0x3b>
 85d7e21:	b8 01 00 00 00       	mov    $0x1,%eax
 85d7e26:	e9 c6 00 00 00       	jmp    85d7ef1 <_ZN8PvP_Room24change_manager_to_winnerEv+0x101>
 85d7e2b:	e8 77 25 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d7e30:	89 04 24             	mov    %eax,(%esp)
 85d7e33:	e8 e8 ec b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d7e38:	83 f8 07             	cmp    $0x7,%eax
 85d7e3b:	74 11                	je     85d7e4e <_ZN8PvP_Room24change_manager_to_winnerEv+0x5e>
 85d7e3d:	e8 65 25 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d7e42:	89 04 24             	mov    %eax,(%esp)
 85d7e45:	e8 04 5e e7 ff       	call   844dc4e <_ZNK9GameWorld18IsSchoolPvPChannelEv>
 85d7e4a:	84 c0                	test   %al,%al
 85d7e4c:	74 07                	je     85d7e55 <_ZN8PvP_Room24change_manager_to_winnerEv+0x65>
 85d7e4e:	b8 01 00 00 00       	mov    $0x1,%eax
 85d7e53:	eb 05                	jmp    85d7e5a <_ZN8PvP_Room24change_manager_to_winnerEv+0x6a>
 85d7e55:	b8 00 00 00 00       	mov    $0x0,%eax
 85d7e5a:	84 c0                	test   %al,%al
 85d7e5c:	74 0a                	je     85d7e68 <_ZN8PvP_Room24change_manager_to_winnerEv+0x78>
 85d7e5e:	b8 01 00 00 00       	mov    $0x1,%eax
 85d7e63:	e9 89 00 00 00       	jmp    85d7ef1 <_ZN8PvP_Room24change_manager_to_winnerEv+0x101>
 85d7e68:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7e6b:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d7e6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7e72:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7e75:	89 04 24             	mov    %eax,(%esp)
 85d7e78:	e8 1f ff ff ff       	call   85d7d9c <_ZN8PvP_Room11is_last_winEi>
 85d7e7d:	84 c0                	test   %al,%al
 85d7e7f:	74 07                	je     85d7e88 <_ZN8PvP_Room24change_manager_to_winnerEv+0x98>
 85d7e81:	b8 01 00 00 00       	mov    $0x1,%eax
 85d7e86:	eb 69                	jmp    85d7ef1 <_ZN8PvP_Room24change_manager_to_winnerEv+0x101>
 85d7e88:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d7e8f:	eb 50                	jmp    85d7ee1 <_ZN8PvP_Room24change_manager_to_winnerEv+0xf1>
 85d7e91:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d7e94:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7e97:	83 c2 0c             	add    $0xc,%edx
 85d7e9a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7e9d:	85 c0                	test   %eax,%eax
 85d7e9f:	74 3c                	je     85d7edd <_ZN8PvP_Room24change_manager_to_winnerEv+0xed>
 85d7ea1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d7ea4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7ea8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7eab:	89 04 24             	mov    %eax,(%esp)
 85d7eae:	e8 e9 fe ff ff       	call   85d7d9c <_ZN8PvP_Room11is_last_winEi>
 85d7eb3:	83 f0 01             	xor    $0x1,%eax
 85d7eb6:	84 c0                	test   %al,%al
 85d7eb8:	75 22                	jne    85d7edc <_ZN8PvP_Room24change_manager_to_winnerEv+0xec>
 85d7eba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d7ebd:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7ec0:	83 c2 0c             	add    $0xc,%edx
 85d7ec3:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85d7ec6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7ec9:	89 50 28             	mov    %edx,0x28(%eax)
 85d7ecc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7ecf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d7ed2:	89 50 2c             	mov    %edx,0x2c(%eax)
 85d7ed5:	b8 01 00 00 00       	mov    $0x1,%eax
 85d7eda:	eb 15                	jmp    85d7ef1 <_ZN8PvP_Room24change_manager_to_winnerEv+0x101>
 85d7edc:	90                   	nop
 85d7edd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d7ee1:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d7ee5:	0f 9e c0             	setle  %al
 85d7ee8:	84 c0                	test   %al,%al
 85d7eea:	75 a5                	jne    85d7e91 <_ZN8PvP_Room24change_manager_to_winnerEv+0xa1>
 85d7eec:	b8 00 00 00 00       	mov    $0x0,%eax
 85d7ef1:	c9                   	leave
 85d7ef2:	c3                   	ret
 85d7ef3:	90                   	nop

```

```c
// PvP_Room::change_manager_to_winner @ 0x85d7df0

/* PvP_Room::change_manager_to_winner() */

undefined4 __thiscall PvP_Room::change_manager_to_winner(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  undefined4 uVar5;
  int local_10;
  
  if (*(int *)(this + 0x28) == 0) {
    return 0;
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar3);
  if (iVar4 == 0xf) {
    return 1;
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar3);
  if (iVar4 != 7) {
    pGVar3 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsSchoolPvPChannel(pGVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_085d7e5a;
    }
  }
  bVar1 = true;
LAB_085d7e5a:
  if (bVar1) {
    uVar5 = 1;
  }
  else {
    cVar2 = is_last_win(this,*(int *)(this + 0x2c));
    if (cVar2 == '\0') {
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if ((*(int *)(this + (local_10 + 0xc) * 4) != 0) &&
           (cVar2 = is_last_win(this,local_10), cVar2 == '\x01')) {
          *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + (local_10 + 0xc) * 4);
          *(int *)(this + 0x2c) = local_10;
          return 1;
        }
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

```

---

## change_team

```asm
// === 085d7d50 PvP_Room::change_team  [0x085d7d50-0x85d7d9b] ===
 85d7d50:	55                   	push   %ebp
 85d7d51:	89 e5                	mov    %esp,%ebp
 85d7d53:	83 ec 18             	sub    $0x18,%esp
 85d7d56:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7d59:	89 04 24             	mov    %eax,(%esp)
 85d7d5c:	e8 d9 7b 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d7d61:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d7d64:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7d67:	8d 4a 14             	lea    0x14(%edx),%ecx
 85d7d6a:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7d6d:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d7d70:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7d73:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d7d79:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7d7c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d7d80:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7d83:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7d87:	89 14 24             	mov    %edx,(%esp)
 85d7d8a:	e8 cb 63 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d7d8f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7d92:	89 04 24             	mov    %eax,(%esp)
 85d7d95:	e8 a6 7b 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d7d9a:	c9                   	leave
 85d7d9b:	c3                   	ret

```

```c
// PvP_Room::change_team @ 0x85d7d50

/* PvP_Room::change_team(int, int) */

void __thiscall PvP_Room::change_team(PvP_Room *this,int param_1,int param_2)

{
  lock();
  *(int *)(this + (param_1 + 0x14) * 4) = param_2;
  CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),param_1,param_2);
  unlock();
  return;
}

```

---

## check_acquire_guild_point

```asm
// === 085da7cc PvP_Room::check_acquire_guild_point  [0x085da7cc-0x85da83f] ===
 85da7cc:	55                   	push   %ebp
 85da7cd:	89 e5                	mov    %esp,%ebp
 85da7cf:	83 ec 18             	sub    $0x18,%esp
 85da7d2:	e8 d0 fb af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85da7d7:	89 04 24             	mov    %eax,(%esp)
 85da7da:	e8 09 7d b6 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 85da7df:	84 c0                	test   %al,%al
 85da7e1:	74 56                	je     85da839 <_ZN8PvP_Room25check_acquire_guild_pointEv+0x6d>
 85da7e3:	e8 bf fb af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85da7e8:	89 04 24             	mov    %eax,(%esp)
 85da7eb:	e8 c2 62 bc ff       	call   81a0ab2 <_ZNK9GameWorld16IsFreePvPChannelEv>
 85da7f0:	84 c0                	test   %al,%al
 85da7f2:	74 07                	je     85da7fb <_ZN8PvP_Room25check_acquire_guild_pointEv+0x2f>
 85da7f4:	b8 00 00 00 00       	mov    $0x0,%eax
 85da7f9:	eb 43                	jmp    85da83e <_ZN8PvP_Room25check_acquire_guild_pointEv+0x72>
 85da7fb:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 85da802:	00 
 85da803:	8b 45 08             	mov    0x8(%ebp),%eax
 85da806:	89 04 24             	mov    %eax,(%esp)
 85da809:	e8 7c fd ff ff       	call   85da58a <_ZN8PvP_Room18IsAllMoreThanGradeEi>
 85da80e:	83 f0 01             	xor    $0x1,%eax
 85da811:	84 c0                	test   %al,%al
 85da813:	74 07                	je     85da81c <_ZN8PvP_Room25check_acquire_guild_pointEv+0x50>
 85da815:	b8 00 00 00 00       	mov    $0x0,%eax
 85da81a:	eb 22                	jmp    85da83e <_ZN8PvP_Room25check_acquire_guild_pointEv+0x72>
 85da81c:	8b 45 08             	mov    0x8(%ebp),%eax
 85da81f:	89 04 24             	mov    %eax,(%esp)
 85da822:	e8 cd fd ff ff       	call   85da5f4 <_ZN8PvP_Room22IsThereSameGuildMemberEv>
 85da827:	84 c0                	test   %al,%al
 85da829:	74 07                	je     85da832 <_ZN8PvP_Room25check_acquire_guild_pointEv+0x66>
 85da82b:	b8 00 00 00 00       	mov    $0x0,%eax
 85da830:	eb 0c                	jmp    85da83e <_ZN8PvP_Room25check_acquire_guild_pointEv+0x72>
 85da832:	b8 01 00 00 00       	mov    $0x1,%eax
 85da837:	eb 05                	jmp    85da83e <_ZN8PvP_Room25check_acquire_guild_pointEv+0x72>
 85da839:	b8 00 00 00 00       	mov    $0x0,%eax
 85da83e:	c9                   	leave
 85da83f:	c3                   	ret

```

```c
// PvP_Room::check_acquire_guild_point @ 0x85da7cc

/* PvP_Room::check_acquire_guild_point() */

undefined4 __thiscall PvP_Room::check_acquire_guild_point(PvP_Room *this)

{
  char cVar1;
  GameWorld *pGVar2;
  undefined4 uVar3;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(pGVar2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    pGVar2 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsFreePvPChannel(pGVar2);
    if (cVar1 == '\0') {
      cVar1 = IsAllMoreThanGrade(this,10);
      if (cVar1 == '\x01') {
        cVar1 = IsThereSameGuildMember(this);
        if (cVar1 == '\0') {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## check_authority

```asm
// === 085d65b4 PvP_Room::check_authority  [0x085d65b4-0x85d65e7] ===
 85d65b4:	55                   	push   %ebp
 85d65b5:	89 e5                	mov    %esp,%ebp
 85d65b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d65ba:	8b 40 28             	mov    0x28(%eax),%eax
 85d65bd:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d65c0:	75 07                	jne    85d65c9 <_ZN8PvP_Room15check_authorityEP5CUseri+0x15>
 85d65c2:	b8 01 00 00 00       	mov    $0x1,%eax
 85d65c7:	eb 1d                	jmp    85d65e6 <_ZN8PvP_Room15check_authorityEP5CUseri+0x32>
 85d65c9:	8b 55 10             	mov    0x10(%ebp),%edx
 85d65cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d65cf:	83 c2 0c             	add    $0xc,%edx
 85d65d2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d65d5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d65d8:	75 07                	jne    85d65e1 <_ZN8PvP_Room15check_authorityEP5CUseri+0x2d>
 85d65da:	b8 01 00 00 00       	mov    $0x1,%eax
 85d65df:	eb 05                	jmp    85d65e6 <_ZN8PvP_Room15check_authorityEP5CUseri+0x32>
 85d65e1:	b8 00 00 00 00       	mov    $0x0,%eax
 85d65e6:	5d                   	pop    %ebp
 85d65e7:	c3                   	ret

```

```c
// PvP_Room::check_authority @ 0x85d65b4

/* PvP_Room::check_authority(CUser*, int) */

undefined4 __thiscall PvP_Room::check_authority(PvP_Room *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(CUser **)(this + 0x28) == param_1) {
    uVar1 = 1;
  }
  else if (*(CUser **)(this + (param_2 + 0xc) * 4) == param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## check_joinable

```asm
// === 085d6c44 PvP_Room::check_joinable  [0x085d6c44-0x85d6cf1] ===
 85d6c44:	55                   	push   %ebp
 85d6c45:	89 e5                	mov    %esp,%ebp
 85d6c47:	83 ec 28             	sub    $0x28,%esp
 85d6c4a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6c4d:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85d6c53:	83 f8 01             	cmp    $0x1,%eax
 85d6c56:	74 0a                	je     85d6c62 <_ZN8PvP_Room14check_joinableEP5CUser+0x1e>
 85d6c58:	b8 04 00 00 00       	mov    $0x4,%eax
 85d6c5d:	e9 8d 00 00 00       	jmp    85d6cef <_ZN8PvP_Room14check_joinableEP5CUser+0xab>
 85d6c62:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d6c69:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6c6c:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d6c72:	8b 00                	mov    (%eax),%eax
 85d6c74:	83 c0 70             	add    $0x70,%eax
 85d6c77:	8b 08                	mov    (%eax),%ecx
 85d6c79:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6c7c:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d6c82:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d6c85:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d6c89:	8b 55 08             	mov    0x8(%ebp),%edx
 85d6c8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d6c90:	89 04 24             	mov    %eax,(%esp)
 85d6c93:	ff d1                	call   *%ecx
 85d6c95:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d6c98:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85d6c9c:	0f 95 c0             	setne  %al
 85d6c9f:	84 c0                	test   %al,%al
 85d6ca1:	74 05                	je     85d6ca8 <_ZN8PvP_Room14check_joinableEP5CUser+0x64>
 85d6ca3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d6ca6:	eb 47                	jmp    85d6cef <_ZN8PvP_Room14check_joinableEP5CUser+0xab>
 85d6ca8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d6caf:	eb 2e                	jmp    85d6cdf <_ZN8PvP_Room14check_joinableEP5CUser+0x9b>
 85d6cb1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d6cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6cb7:	83 c2 0c             	add    $0xc,%edx
 85d6cba:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6cbd:	85 c0                	test   %eax,%eax
 85d6cbf:	75 1a                	jne    85d6cdb <_ZN8PvP_Room14check_joinableEP5CUser+0x97>
 85d6cc1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d6cc4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6cc7:	83 c2 14             	add    $0x14,%edx
 85d6cca:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6ccd:	3d ff 00 00 00       	cmp    $0xff,%eax
 85d6cd2:	75 07                	jne    85d6cdb <_ZN8PvP_Room14check_joinableEP5CUser+0x97>
 85d6cd4:	b8 00 00 00 00       	mov    $0x0,%eax
 85d6cd9:	eb 14                	jmp    85d6cef <_ZN8PvP_Room14check_joinableEP5CUser+0xab>
 85d6cdb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d6cdf:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d6ce3:	0f 9e c0             	setle  %al
 85d6ce6:	84 c0                	test   %al,%al
 85d6ce8:	75 c7                	jne    85d6cb1 <_ZN8PvP_Room14check_joinableEP5CUser+0x6d>
 85d6cea:	b8 04 00 00 00       	mov    $0x4,%eax
 85d6cef:	c9                   	leave
 85d6cf0:	c3                   	ret
 85d6cf1:	90                   	nop

```

```c
// PvP_Room::check_joinable @ 0x85d6c44

/* PvP_Room::check_joinable(CUser*) */

int __thiscall PvP_Room::check_joinable(PvP_Room *this,CUser *param_1)

{
  int iVar1;
  int local_10;
  
  if (*(int *)(this + 0xb8) == 1) {
    iVar1 = (**(code **)(**(int **)(this + 0x6e4) + 0x70))
                      (*(undefined4 *)(this + 0x6e4),this,param_1);
    if (iVar1 == 0) {
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) &&
           (*(int *)(this + (local_10 + 0x14) * 4) == 0xff)) {
          return 0;
        }
      }
      iVar1 = 4;
    }
  }
  else {
    iVar1 = 4;
  }
  return iVar1;
}

```

---

## check_recv_pvp_rank

```asm
// === 085dc3ca PvP_Room::check_recv_pvp_rank  [0x085dc3ca-0x85dc475] ===
 85dc3ca:	55                   	push   %ebp
 85dc3cb:	89 e5                	mov    %esp,%ebp
 85dc3cd:	53                   	push   %ebx
 85dc3ce:	83 ec 24             	sub    $0x24,%esp
 85dc3d1:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 85dc3d5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85dc3dc:	eb 7f                	jmp    85dc45d <_ZN8PvP_Room19check_recv_pvp_rankEv+0x93>
 85dc3de:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc3e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc3e4:	83 c2 0c             	add    $0xc,%edx
 85dc3e7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc3ea:	85 c0                	test   %eax,%eax
 85dc3ec:	74 67                	je     85dc455 <_ZN8PvP_Room19check_recv_pvp_rankEv+0x8b>
 85dc3ee:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc3f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc3f4:	83 c2 14             	add    $0x14,%edx
 85dc3f7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc3fa:	3d ff 00 00 00       	cmp    $0xff,%eax
 85dc3ff:	74 57                	je     85dc458 <_ZN8PvP_Room19check_recv_pvp_rankEv+0x8e>
 85dc401:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc404:	8d 90 b4 05 00 00    	lea    0x5b4(%eax),%edx
 85dc40a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dc40d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc411:	89 14 24             	mov    %edx,(%esp)
 85dc414:	e8 d7 9b ff ff       	call   85d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>
 85dc419:	83 f0 01             	xor    $0x1,%eax
 85dc41c:	84 c0                	test   %al,%al
 85dc41e:	74 39                	je     85dc459 <_ZN8PvP_Room19check_recv_pvp_rankEv+0x8f>
 85dc420:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc423:	c6 80 c0 00 00 00 00 	movb   $0x0,0xc0(%eax)
 85dc42a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dc42d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc430:	83 c2 0c             	add    $0xc,%edx
 85dc433:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85dc436:	e8 53 fd ae ff       	call   80cc18e <_Z14G_CGameManagerv>
 85dc43b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85dc442:	00 
 85dc443:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85dc447:	89 04 24             	mov    %eax,(%esp)
 85dc44a:	e8 5b ba cb ff       	call   8297eaa <_ZN12CGameManager11CheckOutPvpEP5CUserb>
 85dc44f:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 85dc453:	eb 04                	jmp    85dc459 <_ZN8PvP_Room19check_recv_pvp_rankEv+0x8f>
 85dc455:	90                   	nop
 85dc456:	eb 01                	jmp    85dc459 <_ZN8PvP_Room19check_recv_pvp_rankEv+0x8f>
 85dc458:	90                   	nop
 85dc459:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85dc45d:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85dc461:	0f 9e c0             	setle  %al
 85dc464:	84 c0                	test   %al,%al
 85dc466:	0f 85 72 ff ff ff    	jne    85dc3de <_ZN8PvP_Room19check_recv_pvp_rankEv+0x14>
 85dc46c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 85dc470:	83 c4 24             	add    $0x24,%esp
 85dc473:	5b                   	pop    %ebx
 85dc474:	5d                   	pop    %ebp
 85dc475:	c3                   	ret

```

```c
// PvP_Room::check_recv_pvp_rank @ 0x85dc3ca

/* PvP_Room::check_recv_pvp_rank() */

undefined1 __thiscall PvP_Room::check_recv_pvp_rank(PvP_Room *this)

{
  CUser *pCVar1;
  char cVar2;
  CGameManager *this_00;
  undefined1 local_11;
  int local_10;
  
  local_11 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (((*(int *)(this + (local_10 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_10 + 0x14) * 4) != 0xff)) &&
       (cVar2 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5b4),local_10),
       cVar2 != '\x01')) {
      this[0xc0] = (PvP_Room)0x0;
      pCVar1 = *(CUser **)(this + (local_10 + 0xc) * 4);
      this_00 = (CGameManager *)G_CGameManager();
      CGameManager::CheckOutPvp(this_00,pCVar1,true);
      local_11 = 1;
    }
  }
  return local_11;
}

```

---

## check_start_state

```asm
// === 085d65e8 PvP_Room::check_start_state  [0x085d65e8-0x85d667f] ===
 85d65e8:	55                   	push   %ebp
 85d65e9:	89 e5                	mov    %esp,%ebp
 85d65eb:	83 ec 28             	sub    $0x28,%esp
 85d65ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85d65f1:	89 04 24             	mov    %eax,(%esp)
 85d65f4:	e8 41 93 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d65f9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d6600:	eb 61                	jmp    85d6663 <_ZN8PvP_Room17check_start_stateEv+0x7b>
 85d6602:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d6605:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6608:	83 c2 0c             	add    $0xc,%edx
 85d660b:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d660e:	85 c0                	test   %eax,%eax
 85d6610:	74 20                	je     85d6632 <_ZN8PvP_Room17check_start_stateEv+0x4a>
 85d6612:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d6615:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6619:	8b 45 08             	mov    0x8(%ebp),%eax
 85d661c:	89 04 24             	mov    %eax,(%esp)
 85d661f:	e8 22 3a 00 00       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85d6624:	83 f0 01             	xor    $0x1,%eax
 85d6627:	84 c0                	test   %al,%al
 85d6629:	74 07                	je     85d6632 <_ZN8PvP_Room17check_start_stateEv+0x4a>
 85d662b:	b8 01 00 00 00       	mov    $0x1,%eax
 85d6630:	eb 05                	jmp    85d6637 <_ZN8PvP_Room17check_start_stateEv+0x4f>
 85d6632:	b8 00 00 00 00       	mov    $0x0,%eax
 85d6637:	84 c0                	test   %al,%al
 85d6639:	74 24                	je     85d665f <_ZN8PvP_Room17check_start_stateEv+0x77>
 85d663b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d663e:	8b 55 08             	mov    0x8(%ebp),%edx
 85d6641:	0f b6 44 02 70       	movzbl 0x70(%edx,%eax,1),%eax
 85d6646:	83 f0 01             	xor    $0x1,%eax
 85d6649:	84 c0                	test   %al,%al
 85d664b:	74 12                	je     85d665f <_ZN8PvP_Room17check_start_stateEv+0x77>
 85d664d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6650:	89 04 24             	mov    %eax,(%esp)
 85d6653:	e8 e8 92 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d6658:	b8 00 00 00 00       	mov    $0x0,%eax
 85d665d:	eb 1f                	jmp    85d667e <_ZN8PvP_Room17check_start_stateEv+0x96>
 85d665f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d6663:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d6667:	0f 9e c0             	setle  %al
 85d666a:	84 c0                	test   %al,%al
 85d666c:	75 94                	jne    85d6602 <_ZN8PvP_Room17check_start_stateEv+0x1a>
 85d666e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6671:	89 04 24             	mov    %eax,(%esp)
 85d6674:	e8 c7 92 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d6679:	b8 01 00 00 00       	mov    $0x1,%eax
 85d667e:	c9                   	leave
 85d667f:	c3                   	ret

```

```c
// PvP_Room::check_start_state @ 0x85d65e8

/* PvP_Room::check_start_state() */

undefined4 __thiscall PvP_Room::check_start_state(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  int local_10;
  
  lock();
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      unlock();
      return 1;
    }
    if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) ||
       (cVar2 = IsPvpObserver(this,local_10), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (this[local_10 + 0x70] != (PvP_Room)0x1)) break;
    local_10 = local_10 + 1;
  }
  unlock();
  return 0;
}

```

---

## check_team_pvp

```asm
// === 085d6680 PvP_Room::check_team_pvp  [0x085d6680-0x85d6773] ===
 85d6680:	55                   	push   %ebp
 85d6681:	89 e5                	mov    %esp,%ebp
 85d6683:	83 ec 28             	sub    $0x28,%esp
 85d6686:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6689:	8b 40 04             	mov    0x4(%eax),%eax
 85d668c:	83 f8 02             	cmp    $0x2,%eax
 85d668f:	74 20                	je     85d66b1 <_ZN8PvP_Room14check_team_pvpEv+0x31>
 85d6691:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6694:	8b 40 04             	mov    0x4(%eax),%eax
 85d6697:	83 f8 03             	cmp    $0x3,%eax
 85d669a:	74 15                	je     85d66b1 <_ZN8PvP_Room14check_team_pvpEv+0x31>
 85d669c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d669f:	8b 40 04             	mov    0x4(%eax),%eax
 85d66a2:	83 f8 05             	cmp    $0x5,%eax
 85d66a5:	74 0a                	je     85d66b1 <_ZN8PvP_Room14check_team_pvpEv+0x31>
 85d66a7:	b8 01 00 00 00       	mov    $0x1,%eax
 85d66ac:	e9 c0 00 00 00       	jmp    85d6771 <_ZN8PvP_Room14check_team_pvpEv+0xf1>
 85d66b1:	e8 f1 3c b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d66b6:	89 04 24             	mov    %eax,(%esp)
 85d66b9:	e8 62 04 b4 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d66be:	83 f8 07             	cmp    $0x7,%eax
 85d66c1:	0f 94 c0             	sete   %al
 85d66c4:	84 c0                	test   %al,%al
 85d66c6:	74 0a                	je     85d66d2 <_ZN8PvP_Room14check_team_pvpEv+0x52>
 85d66c8:	b8 01 00 00 00       	mov    $0x1,%eax
 85d66cd:	e9 9f 00 00 00       	jmp    85d6771 <_ZN8PvP_Room14check_team_pvpEv+0xf1>
 85d66d2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d66d9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d66e0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d66e7:	eb 69                	jmp    85d6752 <_ZN8PvP_Room14check_team_pvpEv+0xd2>
 85d66e9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d66ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85d66ef:	83 c2 0c             	add    $0xc,%edx
 85d66f2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d66f5:	85 c0                	test   %eax,%eax
 85d66f7:	74 20                	je     85d6719 <_ZN8PvP_Room14check_team_pvpEv+0x99>
 85d66f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d66fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6700:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6703:	89 04 24             	mov    %eax,(%esp)
 85d6706:	e8 3b 39 00 00       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85d670b:	83 f0 01             	xor    $0x1,%eax
 85d670e:	84 c0                	test   %al,%al
 85d6710:	74 07                	je     85d6719 <_ZN8PvP_Room14check_team_pvpEv+0x99>
 85d6712:	b8 01 00 00 00       	mov    $0x1,%eax
 85d6717:	eb 05                	jmp    85d671e <_ZN8PvP_Room14check_team_pvpEv+0x9e>
 85d6719:	b8 00 00 00 00       	mov    $0x0,%eax
 85d671e:	84 c0                	test   %al,%al
 85d6720:	74 2c                	je     85d674e <_ZN8PvP_Room14check_team_pvpEv+0xce>
 85d6722:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d6725:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6728:	83 c2 14             	add    $0x14,%edx
 85d672b:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d672e:	83 f8 01             	cmp    $0x1,%eax
 85d6731:	75 06                	jne    85d6739 <_ZN8PvP_Room14check_team_pvpEv+0xb9>
 85d6733:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d6737:	eb 15                	jmp    85d674e <_ZN8PvP_Room14check_team_pvpEv+0xce>
 85d6739:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d673c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d673f:	83 c2 14             	add    $0x14,%edx
 85d6742:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6745:	83 f8 02             	cmp    $0x2,%eax
 85d6748:	75 04                	jne    85d674e <_ZN8PvP_Room14check_team_pvpEv+0xce>
 85d674a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d674e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d6752:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d6756:	0f 9e c0             	setle  %al
 85d6759:	84 c0                	test   %al,%al
 85d675b:	75 8c                	jne    85d66e9 <_ZN8PvP_Room14check_team_pvpEv+0x69>
 85d675d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d6760:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85d6763:	74 07                	je     85d676c <_ZN8PvP_Room14check_team_pvpEv+0xec>
 85d6765:	b8 00 00 00 00       	mov    $0x0,%eax
 85d676a:	eb 05                	jmp    85d6771 <_ZN8PvP_Room14check_team_pvpEv+0xf1>
 85d676c:	b8 01 00 00 00       	mov    $0x1,%eax
 85d6771:	c9                   	leave
 85d6772:	c3                   	ret
 85d6773:	90                   	nop

```

```c
// PvP_Room::check_team_pvp @ 0x85d6680

/* PvP_Room::check_team_pvp() */

undefined4 __thiscall PvP_Room::check_team_pvp(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  
  if (((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) || (*(int *)(this + 4) == 5)) {
    this_00 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(this_00);
    if (iVar4 == 7) {
      uVar3 = 1;
    }
    else {
      local_18 = 0;
      local_14 = 0;
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if (*(int *)(this + (local_10 + 0xc) * 4) == 0) {
LAB_085d6719:
          bVar1 = false;
        }
        else {
          cVar2 = IsPvpObserver(this,local_10);
          if (cVar2 == '\x01') goto LAB_085d6719;
          bVar1 = true;
        }
        if (bVar1) {
          if (*(int *)(this + (local_10 + 0x14) * 4) == 1) {
            local_18 = local_18 + 1;
          }
          else if (*(int *)(this + (local_10 + 0x14) * 4) == 2) {
            local_14 = local_14 + 1;
          }
        }
      }
      if (local_14 == local_18) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## check_winner

```asm
// === 085d96ec PvP_Room::check_winner  [0x085d96ec-0x85d9b0d] ===
 85d96ec:	55                   	push   %ebp
 85d96ed:	89 e5                	mov    %esp,%ebp
 85d96ef:	56                   	push   %esi
 85d96f0:	53                   	push   %ebx
 85d96f1:	83 c4 80             	add    $0xffffff80,%esp
 85d96f4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d96f7:	0f b6 80 c0 00 00 00 	movzbl 0xc0(%eax),%eax
 85d96fe:	84 c0                	test   %al,%al
 85d9700:	74 0a                	je     85d970c <_ZN8PvP_Room12check_winnerEv+0x20>
 85d9702:	b8 00 00 00 00       	mov    $0x0,%eax
 85d9707:	e9 fa 03 00 00       	jmp    85d9b06 <_ZN8PvP_Room12check_winnerEv+0x41a>
 85d970c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d970f:	8b 40 04             	mov    0x4(%eax),%eax
 85d9712:	83 f8 02             	cmp    $0x2,%eax
 85d9715:	74 0f                	je     85d9726 <_ZN8PvP_Room12check_winnerEv+0x3a>
 85d9717:	8b 45 08             	mov    0x8(%ebp),%eax
 85d971a:	8b 40 04             	mov    0x4(%eax),%eax
 85d971d:	83 f8 03             	cmp    $0x3,%eax
 85d9720:	0f 85 7f 01 00 00    	jne    85d98a5 <_ZN8PvP_Room12check_winnerEv+0x1b9>
 85d9726:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9729:	89 04 24             	mov    %eax,(%esp)
 85d972c:	e8 09 62 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d9731:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 85d9738:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 85d973f:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 85d9746:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 85d974d:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 85d9754:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 85d975b:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85d9762:	eb 72                	jmp    85d97d6 <_ZN8PvP_Room12check_winnerEv+0xea>
 85d9764:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d9767:	8b 55 08             	mov    0x8(%ebp),%edx
 85d976a:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9771:	00 
 85d9772:	84 c0                	test   %al,%al
 85d9774:	74 5c                	je     85d97d2 <_ZN8PvP_Room12check_winnerEv+0xe6>
 85d9776:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d9779:	8b 55 08             	mov    0x8(%ebp),%edx
 85d977c:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9783:	00 
 85d9784:	3c fd                	cmp    $0xfd,%al
 85d9786:	77 4a                	ja     85d97d2 <_ZN8PvP_Room12check_winnerEv+0xe6>
 85d9788:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d978b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d978e:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9795:	00 
 85d9796:	0f b6 c0             	movzbl %al,%eax
 85d9799:	8b 54 85 a4          	mov    -0x5c(%ebp,%eax,4),%edx
 85d979d:	83 c2 01             	add    $0x1,%edx
 85d97a0:	89 54 85 a4          	mov    %edx,-0x5c(%ebp,%eax,4)
 85d97a4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d97a7:	8b 55 08             	mov    0x8(%ebp),%edx
 85d97aa:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85d97b1:	00 
 85d97b2:	84 c0                	test   %al,%al
 85d97b4:	74 1c                	je     85d97d2 <_ZN8PvP_Room12check_winnerEv+0xe6>
 85d97b6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d97b9:	8b 55 08             	mov    0x8(%ebp),%edx
 85d97bc:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d97c3:	00 
 85d97c4:	0f b6 c0             	movzbl %al,%eax
 85d97c7:	8b 54 85 98          	mov    -0x68(%ebp,%eax,4),%edx
 85d97cb:	83 c2 01             	add    $0x1,%edx
 85d97ce:	89 54 85 98          	mov    %edx,-0x68(%ebp,%eax,4)
 85d97d2:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85d97d6:	83 7d d8 07          	cmpl   $0x7,-0x28(%ebp)
 85d97da:	0f 9e c0             	setle  %al
 85d97dd:	84 c0                	test   %al,%al
 85d97df:	75 83                	jne    85d9764 <_ZN8PvP_Room12check_winnerEv+0x78>
 85d97e1:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 85d97e8:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 85d97ef:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 85d97f6:	eb 19                	jmp    85d9811 <_ZN8PvP_Room12check_winnerEv+0x125>
 85d97f8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85d97fb:	8b 44 85 98          	mov    -0x68(%ebp,%eax,4),%eax
 85d97ff:	85 c0                	test   %eax,%eax
 85d9801:	7e 0a                	jle    85d980d <_ZN8PvP_Room12check_winnerEv+0x121>
 85d9803:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 85d9807:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85d980a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85d980d:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85d9811:	83 7d dc 02          	cmpl   $0x2,-0x24(%ebp)
 85d9815:	0f 9e c0             	setle  %al
 85d9818:	84 c0                	test   %al,%al
 85d981a:	75 dc                	jne    85d97f8 <_ZN8PvP_Room12check_winnerEv+0x10c>
 85d981c:	83 7d d0 01          	cmpl   $0x1,-0x30(%ebp)
 85d9820:	75 4c                	jne    85d986e <_ZN8PvP_Room12check_winnerEv+0x182>
 85d9822:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85d9829:	eb 38                	jmp    85d9863 <_ZN8PvP_Room12check_winnerEv+0x177>
 85d982b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d982e:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9831:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9838:	00 
 85d9839:	0f b6 c0             	movzbl %al,%eax
 85d983c:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 85d983f:	75 10                	jne    85d9851 <_ZN8PvP_Room12check_winnerEv+0x165>
 85d9841:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d9844:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9847:	c6 84 02 c8 05 00 00 	movb   $0x1,0x5c8(%edx,%eax,1)
 85d984e:	01 
 85d984f:	eb 0e                	jmp    85d985f <_ZN8PvP_Room12check_winnerEv+0x173>
 85d9851:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d9854:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9857:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85d985e:	00 
 85d985f:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85d9863:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 85d9867:	0f 9e c0             	setle  %al
 85d986a:	84 c0                	test   %al,%al
 85d986c:	75 bd                	jne    85d982b <_ZN8PvP_Room12check_winnerEv+0x13f>
 85d986e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9871:	89 04 24             	mov    %eax,(%esp)
 85d9874:	e8 c7 60 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d9879:	83 7d d0 01          	cmpl   $0x1,-0x30(%ebp)
 85d987d:	0f 85 7d 02 00 00    	jne    85d9b00 <_ZN8PvP_Room12check_winnerEv+0x414>
 85d9883:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9886:	8d 90 68 02 00 00    	lea    0x268(%eax),%edx
 85d988c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d988f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9893:	89 14 24             	mov    %edx,(%esp)
 85d9896:	e8 c3 bf ff ff       	call   85d585e <_ZN12PvpUserTable10SetWinTeamEi>
 85d989b:	b8 01 00 00 00       	mov    $0x1,%eax
 85d98a0:	e9 61 02 00 00       	jmp    85d9b06 <_ZN8PvP_Room12check_winnerEv+0x41a>
 85d98a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d98a8:	8b 40 04             	mov    0x4(%eax),%eax
 85d98ab:	83 f8 04             	cmp    $0x4,%eax
 85d98ae:	0f 85 e2 00 00 00    	jne    85d9996 <_ZN8PvP_Room12check_winnerEv+0x2aa>
 85d98b4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85d98bb:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85d98c2:	eb 2c                	jmp    85d98f0 <_ZN8PvP_Room12check_winnerEv+0x204>
 85d98c4:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d98c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d98ca:	83 c2 0c             	add    $0xc,%edx
 85d98cd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d98d0:	85 c0                	test   %eax,%eax
 85d98d2:	74 18                	je     85d98ec <_ZN8PvP_Room12check_winnerEv+0x200>
 85d98d4:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d98d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d98da:	83 c2 14             	add    $0x14,%edx
 85d98dd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d98e0:	83 f8 04             	cmp    $0x4,%eax
 85d98e3:	74 06                	je     85d98eb <_ZN8PvP_Room12check_winnerEv+0x1ff>
 85d98e5:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85d98e9:	eb 01                	jmp    85d98ec <_ZN8PvP_Room12check_winnerEv+0x200>
 85d98eb:	90                   	nop
 85d98ec:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 85d98f0:	83 7d e8 07          	cmpl   $0x7,-0x18(%ebp)
 85d98f4:	0f 9e c0             	setle  %al
 85d98f7:	84 c0                	test   %al,%al
 85d98f9:	75 c9                	jne    85d98c4 <_ZN8PvP_Room12check_winnerEv+0x1d8>
 85d98fb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d9902:	00 
 85d9903:	c7 44 24 08 3c 0a 00 	movl   $0xa3c,0x8(%esp)
 85d990a:	00 
 85d990b:	c7 44 24 04 3d 25 cc 	movl   $0x8cc253d,0x4(%esp)
 85d9912:	08 
 85d9913:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d9916:	89 04 24             	mov    %eax,(%esp)
 85d9919:	e8 fa 5d f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d991e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d9921:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d9925:	c7 44 24 04 ac 10 cc 	movl   $0x8cc10ac,0x4(%esp)
 85d992c:	08 
 85d992d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d9930:	89 04 24             	mov    %eax,(%esp)
 85d9933:	e8 50 5e f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d9938:	8b 45 08             	mov    0x8(%ebp),%eax
 85d993b:	8d 90 9c 06 00 00    	lea    0x69c(%eax),%edx
 85d9941:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d9944:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9948:	89 14 24             	mov    %edx,(%esp)
 85d994b:	e8 c2 56 00 00       	call   85df012 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi>
 85d9950:	84 c0                	test   %al,%al
 85d9952:	0f 84 a9 01 00 00    	je     85d9b01 <_ZN8PvP_Room12check_winnerEv+0x415>
 85d9958:	8b 45 08             	mov    0x8(%ebp),%eax
 85d995b:	8d 98 68 02 00 00    	lea    0x268(%eax),%ebx
 85d9961:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9964:	8d 88 c8 05 00 00    	lea    0x5c8(%eax),%ecx
 85d996a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d996d:	8d 50 30             	lea    0x30(%eax),%edx
 85d9970:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9973:	05 9c 06 00 00       	add    $0x69c,%eax
 85d9978:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d997c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d9980:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d9984:	89 04 24             	mov    %eax,(%esp)
 85d9987:	e8 fe 5a 00 00       	call   85df48a <_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable>
 85d998c:	b8 01 00 00 00       	mov    $0x1,%eax
 85d9991:	e9 70 01 00 00       	jmp    85d9b06 <_ZN8PvP_Room12check_winnerEv+0x41a>
 85d9996:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9999:	8b 40 04             	mov    0x4(%eax),%eax
 85d999c:	83 f8 05             	cmp    $0x5,%eax
 85d999f:	0f 85 d1 00 00 00    	jne    85d9a76 <_ZN8PvP_Room12check_winnerEv+0x38a>
 85d99a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d99a8:	89 04 24             	mov    %eax,(%esp)
 85d99ab:	e8 c4 cd ff ff       	call   85d6774 <_ZN8PvP_Room16get_pvp_team_cntEv>
 85d99b0:	89 c3                	mov    %eax,%ebx
 85d99b2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d99b9:	00 
 85d99ba:	c7 44 24 08 46 0a 00 	movl   $0xa46,0x8(%esp)
 85d99c1:	00 
 85d99c2:	c7 44 24 04 3d 25 cc 	movl   $0x8cc253d,0x4(%esp)
 85d99c9:	08 
 85d99ca:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85d99cd:	89 04 24             	mov    %eax,(%esp)
 85d99d0:	e8 43 5d f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d99d5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d99d9:	c7 44 24 04 d0 10 cc 	movl   $0x8cc10d0,0x4(%esp)
 85d99e0:	08 
 85d99e1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85d99e4:	89 04 24             	mov    %eax,(%esp)
 85d99e7:	e8 9c 5d f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d99ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85d99ef:	8d 98 d0 05 00 00    	lea    0x5d0(%eax),%ebx
 85d99f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d99f8:	89 04 24             	mov    %eax,(%esp)
 85d99fb:	e8 74 cd ff ff       	call   85d6774 <_ZN8PvP_Room16get_pvp_team_cntEv>
 85d9a00:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9a03:	8d 4a 30             	lea    0x30(%edx),%ecx
 85d9a06:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9a09:	81 c2 9c 06 00 00    	add    $0x69c,%edx
 85d9a0f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d9a13:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d9a17:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85d9a1b:	89 14 24             	mov    %edx,(%esp)
 85d9a1e:	e8 03 57 00 00       	call   85df126 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh>
 85d9a23:	84 c0                	test   %al,%al
 85d9a25:	0f 84 d6 00 00 00    	je     85d9b01 <_ZN8PvP_Room12check_winnerEv+0x415>
 85d9a2b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9a2e:	8d b0 68 02 00 00    	lea    0x268(%eax),%esi
 85d9a34:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9a37:	8d 98 d0 05 00 00    	lea    0x5d0(%eax),%ebx
 85d9a3d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9a40:	8d 88 c8 05 00 00    	lea    0x5c8(%eax),%ecx
 85d9a46:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9a49:	8d 50 30             	lea    0x30(%eax),%edx
 85d9a4c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9a4f:	05 9c 06 00 00       	add    $0x69c,%eax
 85d9a54:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d9a58:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d9a5c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d9a60:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d9a64:	89 04 24             	mov    %eax,(%esp)
 85d9a67:	e8 2a 58 00 00       	call   85df296 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable>
 85d9a6c:	b8 01 00 00 00       	mov    $0x1,%eax
 85d9a71:	e9 90 00 00 00       	jmp    85d9b06 <_ZN8PvP_Room12check_winnerEv+0x41a>
 85d9a76:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9a79:	89 04 24             	mov    %eax,(%esp)
 85d9a7c:	e8 b9 5e 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d9a81:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d9a88:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d9a8f:	eb 34                	jmp    85d9ac5 <_ZN8PvP_Room12check_winnerEv+0x3d9>
 85d9a91:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d9a94:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9a97:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85d9a9e:	00 
 85d9a9f:	84 c0                	test   %al,%al
 85d9aa1:	74 1e                	je     85d9ac1 <_ZN8PvP_Room12check_winnerEv+0x3d5>
 85d9aa3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d9aa6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9aa9:	83 c2 14             	add    $0x14,%edx
 85d9aac:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d9aaf:	83 f8 04             	cmp    $0x4,%eax
 85d9ab2:	74 0c                	je     85d9ac0 <_ZN8PvP_Room12check_winnerEv+0x3d4>
 85d9ab4:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d9ab8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d9abb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d9abe:	eb 01                	jmp    85d9ac1 <_ZN8PvP_Room12check_winnerEv+0x3d5>
 85d9ac0:	90                   	nop
 85d9ac1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d9ac5:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d9ac9:	0f 9e c0             	setle  %al
 85d9acc:	84 c0                	test   %al,%al
 85d9ace:	75 c1                	jne    85d9a91 <_ZN8PvP_Room12check_winnerEv+0x3a5>
 85d9ad0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9ad3:	89 04 24             	mov    %eax,(%esp)
 85d9ad6:	e8 65 5e 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d9adb:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 85d9adf:	75 20                	jne    85d9b01 <_ZN8PvP_Room12check_winnerEv+0x415>
 85d9ae1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9ae4:	8d 90 68 02 00 00    	lea    0x268(%eax),%edx
 85d9aea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d9aed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9af1:	89 14 24             	mov    %edx,(%esp)
 85d9af4:	e8 65 bd ff ff       	call   85d585e <_ZN12PvpUserTable10SetWinTeamEi>
 85d9af9:	b8 01 00 00 00       	mov    $0x1,%eax
 85d9afe:	eb 06                	jmp    85d9b06 <_ZN8PvP_Room12check_winnerEv+0x41a>
 85d9b00:	90                   	nop
 85d9b01:	b8 00 00 00 00       	mov    $0x0,%eax
 85d9b06:	83 ec 80             	sub    $0xffffff80,%esp
 85d9b09:	5b                   	pop    %ebx
 85d9b0a:	5e                   	pop    %esi
 85d9b0b:	5d                   	pop    %ebp
 85d9b0c:	c3                   	ret
 85d9b0d:	90                   	nop

```

```c
// PvP_Room::check_winner @ 0x85d96ec

/* PvP_Room::check_winner() */

undefined4 __thiscall PvP_Room::check_winner(PvP_Room *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_6c [6];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (this[0xc0] == (PvP_Room)0x0) {
    if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
      lock();
      local_6c[3] = 0;
      local_6c[4] = 0;
      local_6c[5] = 0;
      local_6c[0] = 0;
      local_6c[1] = 0;
      local_6c[2] = 0;
      for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
        if (((this[local_2c + 0x5d0] != (PvP_Room)0x0) && ((byte)this[local_2c + 0x5d0] < 0xfe)) &&
           (local_6c[(byte)this[local_2c + 0x5d0] + 3] =
                 local_6c[(byte)this[local_2c + 0x5d0] + 3] + 1,
           this[local_2c + 0x5c8] != (PvP_Room)0x0)) {
          local_6c[(byte)this[local_2c + 0x5d0]] = local_6c[(byte)this[local_2c + 0x5d0]] + 1;
        }
      }
      local_34 = 0;
      local_30 = 0;
      for (local_28 = 1; (int)local_28 < 3; local_28 = local_28 + 1) {
        if (0 < local_6c[local_28]) {
          local_34 = local_34 + 1;
          local_30 = local_28;
        }
      }
      if (local_34 == 1) {
        for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
          if ((byte)this[local_24 + 0x5d0] == local_30) {
            this[local_24 + 0x5c8] = (PvP_Room)0x1;
          }
          else {
            this[local_24 + 0x5c8] = (PvP_Room)0x0;
          }
        }
      }
      unlock();
      if (local_34 == 1) {
        PvpUserTable::SetWinTeam((PvpUserTable *)(this + 0x268),local_30);
        return 1;
      }
    }
    else if (*(int *)(this + 4) == 4) {
      local_20 = 0;
      for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
        if ((*(int *)(this + (local_1c + 0xc) * 4) != 0) &&
           (*(int *)(this + (local_1c + 0x14) * 4) != 4)) {
          local_20 = local_20 + 1;
        }
      }
      cMyTrace::cMyTrace(local_54,"bool PvP_Room::check_winner()",0xa3c,0);
      cMyTrace::operator()(local_54,"PvP_Room::check_winner single : %d",local_20);
      cVar1 = CDeathMatchBattleMgr::checkGameOverForSinglePlay
                        ((CDeathMatchBattleMgr *)(this + 0x69c),local_20);
      if (cVar1 != '\0') {
        CDeathMatchBattleMgr::checkWinnerForSinglePlay
                  ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),
                   (bool *)(this + 0x5c8),(PvpUserTable *)(this + 0x268));
        return 1;
      }
    }
    else if (*(int *)(this + 4) == 5) {
      uVar2 = get_pvp_team_cnt(this);
      cMyTrace::cMyTrace(local_44,"bool PvP_Room::check_winner()",0xa46,0);
      cMyTrace::operator()(local_44,"PvP_Room::check_winner team  : %d",uVar2);
      iVar3 = get_pvp_team_cnt(this);
      cVar1 = CDeathMatchBattleMgr::checkGameOverForTeamPlay
                        ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),iVar3,
                         (uchar *)(this + 0x5d0));
      if (cVar1 != '\0') {
        CDeathMatchBattleMgr::checkWinnerForTeamPlay
                  ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),
                   (bool *)(this + 0x5c8),(uchar *)(this + 0x5d0),(PvpUserTable *)(this + 0x268));
        return 1;
      }
    }
    else {
      lock();
      local_18 = 0;
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if ((this[local_10 + 0x5c8] != (PvP_Room)0x0) &&
           (*(int *)(this + (local_10 + 0x14) * 4) != 4)) {
          local_18 = local_18 + 1;
          local_14 = local_10;
        }
      }
      unlock();
      if (local_18 == 1) {
        PvpUserTable::SetWinTeam((PvpUserTable *)(this + 0x268),local_14);
        return 1;
      }
    }
  }
  return 0;
}

```

---

## count_pvp_user

```asm
// === 085da840 PvP_Room::count_pvp_user  [0x085da840-0x85da881] ===
 85da840:	55                   	push   %ebp
 85da841:	89 e5                	mov    %esp,%ebp
 85da843:	83 ec 10             	sub    $0x10,%esp
 85da846:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85da84d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85da854:	eb 1b                	jmp    85da871 <_ZN8PvP_Room14count_pvp_userEv+0x31>
 85da856:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85da859:	8b 45 08             	mov    0x8(%ebp),%eax
 85da85c:	83 c2 0c             	add    $0xc,%edx
 85da85f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da862:	85 c0                	test   %eax,%eax
 85da864:	74 06                	je     85da86c <_ZN8PvP_Room14count_pvp_userEv+0x2c>
 85da866:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85da86a:	eb 01                	jmp    85da86d <_ZN8PvP_Room14count_pvp_userEv+0x2d>
 85da86c:	90                   	nop
 85da86d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85da871:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85da875:	0f 9e c0             	setle  %al
 85da878:	84 c0                	test   %al,%al
 85da87a:	75 da                	jne    85da856 <_ZN8PvP_Room14count_pvp_userEv+0x16>
 85da87c:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85da87f:	c9                   	leave
 85da880:	c3                   	ret
 85da881:	90                   	nop

```

```c
// PvP_Room::count_pvp_user @ 0x85da840

/* PvP_Room::count_pvp_user() */

int __thiscall PvP_Room::count_pvp_user(PvP_Room *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (*(int *)(this + (local_8 + 0xc) * 4) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## create_room

```asm
// === 085d6908 PvP_Room::create_room  [0x085d6908-0x85d6be5] ===
 85d6908:	55                   	push   %ebp
 85d6909:	89 e5                	mov    %esp,%ebp
 85d690b:	57                   	push   %edi
 85d690c:	56                   	push   %esi
 85d690d:	53                   	push   %ebx
 85d690e:	83 ec 5c             	sub    $0x5c,%esp
 85d6911:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85d6914:	8b 55 18             	mov    0x18(%ebp),%edx
 85d6917:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d691a:	88 4d c4             	mov    %cl,-0x3c(%ebp)
 85d691d:	66 89 55 c0          	mov    %dx,-0x40(%ebp)
 85d6921:	88 45 bc             	mov    %al,-0x44(%ebp)
 85d6924:	8b 45 28             	mov    0x28(%ebp),%eax
 85d6927:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85d692a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d692d:	8b 38                	mov    (%eax),%edi
 85d692f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6932:	89 04 24             	mov    %eax,(%esp)
 85d6935:	e8 ee a6 b2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85d693a:	89 c6                	mov    %eax,%esi
 85d693c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d693f:	89 04 24             	mov    %eax,(%esp)
 85d6942:	e8 2b a7 b2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85d6947:	89 c3                	mov    %eax,%ebx
 85d6949:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85d6950:	00 
 85d6951:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d6958:	00 
 85d6959:	c7 44 24 08 3a 04 00 	movl   $0x43a,0x8(%esp)
 85d6960:	00 
 85d6961:	c7 44 24 04 e0 26 cc 	movl   $0x8cc26e0,0x4(%esp)
 85d6968:	08 
 85d6969:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d696c:	89 04 24             	mov    %eax,(%esp)
 85d696f:	e8 c8 93 f7 ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85d6974:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85d6977:	89 44 24 14          	mov    %eax,0x14(%esp)
 85d697b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85d697f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85d6983:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d6987:	c7 44 24 04 a3 0f cc 	movl   $0x8cc0fa3,0x4(%esp)
 85d698e:	08 
 85d698f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85d6992:	89 04 24             	mov    %eax,(%esp)
 85d6995:	e8 ca 93 f7 ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 85d699a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d699d:	89 04 24             	mov    %eax,(%esp)
 85d69a0:	e8 8d 9a b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d69a5:	85 c0                	test   %eax,%eax
 85d69a7:	0f 94 c0             	sete   %al
 85d69aa:	84 c0                	test   %al,%al
 85d69ac:	74 0a                	je     85d69b8 <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE+0xb0>
 85d69ae:	b8 13 00 00 00       	mov    $0x13,%eax
 85d69b3:	e9 25 02 00 00       	jmp    85d6bdd <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE+0x2d5>
 85d69b8:	e8 37 5f f8 ff       	call   855c8f4 <_Z15GetMatchingTypev>
 85d69bd:	8b 55 08             	mov    0x8(%ebp),%edx
 85d69c0:	8b 92 e0 06 00 00    	mov    0x6e0(%edx),%edx
 85d69c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d69ca:	89 14 24             	mov    %edx,(%esp)
 85d69cd:	e8 ce 91 00 00       	call   85dfba0 <_ZN15CMatchingSystem17GetMatchingSystemE22ENUM_PVP_MATCHING_TYPE>
 85d69d2:	8b 55 08             	mov    0x8(%ebp),%edx
 85d69d5:	89 82 e4 06 00 00    	mov    %eax,0x6e4(%edx)
 85d69db:	8b 45 08             	mov    0x8(%ebp),%eax
 85d69de:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d69e4:	8b 00                	mov    (%eax),%eax
 85d69e6:	83 c0 18             	add    $0x18,%eax
 85d69e9:	8b 08                	mov    (%eax),%ecx
 85d69eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d69ee:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d69f4:	8d 55 28             	lea    0x28(%ebp),%edx
 85d69f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d69fb:	8d 55 c0             	lea    -0x40(%ebp),%edx
 85d69fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d6a02:	89 04 24             	mov    %eax,(%esp)
 85d6a05:	ff d1                	call   *%ecx
 85d6a07:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a0a:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85d6a10:	85 c0                	test   %eax,%eax
 85d6a12:	74 0a                	je     85d6a1e <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE+0x116>
 85d6a14:	b8 13 00 00 00       	mov    $0x13,%eax
 85d6a19:	e9 bf 01 00 00       	jmp    85d6bdd <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE+0x2d5>
 85d6a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a21:	c7 80 b8 00 00 00 01 	movl   $0x1,0xb8(%eax)
 85d6a28:	00 00 00 
 85d6a2b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a2e:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d6a31:	89 50 28             	mov    %edx,0x28(%eax)
 85d6a34:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a37:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 85d6a3e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a41:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d6a44:	89 50 30             	mov    %edx,0x30(%eax)
 85d6a47:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a4a:	c7 40 50 01 00 00 00 	movl   $0x1,0x50(%eax)
 85d6a51:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a54:	05 20 06 00 00       	add    $0x620,%eax
 85d6a59:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85d6a60:	00 
 85d6a61:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d6a68:	00 
 85d6a69:	89 04 24             	mov    %eax,(%esp)
 85d6a6c:	e8 e9 76 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d6a71:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a74:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 85d6a78:	88 50 08             	mov    %dl,0x8(%eax)
 85d6a7b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6a7e:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 85d6a82:	84 c0                	test   %al,%al
 85d6a84:	75 24                	jne    85d6aaa <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE+0x1a2>
 85d6a86:	8b 45 14             	mov    0x14(%ebp),%eax
 85d6a89:	89 04 24             	mov    %eax,(%esp)
 85d6a8c:	e8 1f 79 aa ff       	call   807e3b0 <strlen@plt>
 85d6a91:	8b 55 08             	mov    0x8(%ebp),%edx
 85d6a94:	83 c2 09             	add    $0x9,%edx
 85d6a97:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d6a9b:	8b 45 14             	mov    0x14(%ebp),%eax
 85d6a9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6aa2:	89 14 24             	mov    %edx,(%esp)
 85d6aa5:	e8 26 6e aa ff       	call   807d8d0 <strncpy@plt>
 85d6aaa:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6aad:	8b 00                	mov    (%eax),%eax
 85d6aaf:	98                   	cwtl
 85d6ab0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6ab4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6ab7:	89 04 24             	mov    %eax,(%esp)
 85d6aba:	e8 f3 8e 00 00       	call   85df9b2 <_ZN5CUser11SetPvpIndexEs>
 85d6abf:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6ac2:	c7 80 00 06 00 00 01 	movl   $0x1,0x600(%eax)
 85d6ac9:	00 00 00 
 85d6acc:	0f b7 55 c0          	movzwl -0x40(%ebp),%edx
 85d6ad0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6ad3:	66 89 90 c4 05 00 00 	mov    %dx,0x5c4(%eax)
 85d6ada:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6add:	0f b7 90 c4 05 00 00 	movzwl 0x5c4(%eax),%edx
 85d6ae4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6ae7:	66 89 90 c6 05 00 00 	mov    %dx,0x5c6(%eax)
 85d6aee:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6af1:	0f b6 55 bc          	movzbl -0x44(%ebp),%edx
 85d6af5:	88 90 04 06 00 00    	mov    %dl,0x604(%eax)
 85d6afb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6afe:	0f b6 80 04 06 00 00 	movzbl 0x604(%eax),%eax
 85d6b05:	84 c0                	test   %al,%al
 85d6b07:	74 51                	je     85d6b5a <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE+0x252>
 85d6b09:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6b0c:	8b 55 24             	mov    0x24(%ebp),%edx
 85d6b0f:	89 90 10 06 00 00    	mov    %edx,0x610(%eax)
 85d6b15:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6b18:	05 05 06 00 00       	add    $0x605,%eax
 85d6b1d:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 85d6b24:	00 
 85d6b25:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d6b2c:	00 
 85d6b2d:	89 04 24             	mov    %eax,(%esp)
 85d6b30:	e8 8b 71 aa ff       	call   807dcc0 <memset@plt>
 85d6b35:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6b38:	8b 80 10 06 00 00    	mov    0x610(%eax),%eax
 85d6b3e:	8b 55 08             	mov    0x8(%ebp),%edx
 85d6b41:	81 c2 05 06 00 00    	add    $0x605,%edx
 85d6b47:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d6b4b:	8b 45 20             	mov    0x20(%ebp),%eax
 85d6b4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6b52:	89 14 24             	mov    %edx,(%esp)
 85d6b55:	e8 46 6d aa ff       	call   807d8a0 <memcpy@plt>
 85d6b5a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6b5d:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d6b60:	8b 55 08             	mov    0x8(%ebp),%edx
 85d6b63:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d6b69:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6b6d:	89 14 24             	mov    %edx,(%esp)
 85d6b70:	e8 57 75 00 00       	call   85de0cc <_ZN15CRelayBattleMgr12OnCreateRoomEi>
 85d6b75:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6b78:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d6b7b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d6b7e:	81 c2 9c 06 00 00    	add    $0x69c,%edx
 85d6b84:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6b88:	89 14 24             	mov    %edx,(%esp)
 85d6b8b:	e8 d6 82 00 00       	call   85dee66 <_ZN20CDeathMatchBattleMgr12OnCreateRoomEi>
 85d6b90:	8b 55 28             	mov    0x28(%ebp),%edx
 85d6b93:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6b96:	89 50 04             	mov    %edx,0x4(%eax)
 85d6b99:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85d6ba0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6ba3:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d6ba9:	8b 00                	mov    (%eax),%eax
 85d6bab:	83 c0 20             	add    $0x20,%eax
 85d6bae:	8b 08                	mov    (%eax),%ecx
 85d6bb0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6bb3:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d6bb9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d6bbc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d6bc0:	89 04 24             	mov    %eax,(%esp)
 85d6bc3:	ff d1                	call   *%ecx
 85d6bc5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d6bc8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85d6bcc:	0f 95 c0             	setne  %al
 85d6bcf:	84 c0                	test   %al,%al
 85d6bd1:	74 05                	je     85d6bd8 <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE+0x2d0>
 85d6bd3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d6bd6:	eb 05                	jmp    85d6bdd <_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE+0x2d5>
 85d6bd8:	b8 00 00 00 00       	mov    $0x0,%eax
 85d6bdd:	83 c4 5c             	add    $0x5c,%esp
 85d6be0:	5b                   	pop    %ebx
 85d6be1:	5e                   	pop    %esi
 85d6be2:	5f                   	pop    %edi
 85d6be3:	5d                   	pop    %ebp
 85d6be4:	c3                   	ret
 85d6be5:	90                   	nop

```

```c
// PvP_Room::create_room @ 0x85d6908

/* PvP_Room::create_room(CUser*, char, char*, short, bool, char const*, int, PVP_BATTLE_MODE) */

int __thiscall
PvP_Room::create_room
          (PvP_Room *this,CUserCharacInfo *param_1,PvP_Room param_2,char *param_3,undefined2 param_4
          ,PvP_Room param_5,void *param_6,undefined4 param_7,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  size_t __n;
  undefined2 local_44 [2];
  PvP_Room local_40;
  CSwitchLog local_30 [16];
  undefined4 local_20;
  
  uVar1 = param_9;
  local_40 = param_2;
  local_44[0] = param_4;
  uVar5 = *(undefined4 *)this;
  uVar2 = CUserCharacInfo::getCurCharacName(param_1);
  uVar3 = CUser::get_acc_name((CUser *)param_1);
  CSwitchLog::CSwitchLog
            (local_30,
             "int PvP_Room::create_room(CUser*, char, char*, short int, bool, const char*, int, PVP_BATTLE_MODE)"
             ,0x43a,0,0);
  CSwitchLog::operator()(local_30,"pvp@log %s,%s,room(%d),%d",uVar3,uVar2,uVar5,uVar1);
  iVar4 = CUserCharacInfo::getCurCharacR(param_1);
  if (iVar4 == 0) {
    iVar4 = 0x13;
  }
  else {
    uVar5 = GetMatchingType();
    uVar5 = CMatchingSystem::GetMatchingSystem(*(CMatchingSystem **)(this + 0x6e0),uVar5);
    *(undefined4 *)(this + 0x6e4) = uVar5;
    (**(code **)(**(int **)(this + 0x6e4) + 0x18))(*(undefined4 *)(this + 0x6e4),local_44,&param_9);
    if (*(int *)(this + 0xb8) == 0) {
      *(undefined4 *)(this + 0xb8) = 1;
      *(CUserCharacInfo **)(this + 0x28) = param_1;
      *(undefined4 *)(this + 0x2c) = 0;
      *(CUserCharacInfo **)(this + 0x30) = param_1;
      *(undefined4 *)(this + 0x50) = 1;
      CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),0,1);
      this[8] = local_40;
      if (this[8] == (PvP_Room)0x0) {
        __n = strlen(param_3);
        strncpy((char *)(this + 9),param_3,__n);
      }
      CUser::SetPvpIndex((CUser *)param_1,(short)*(undefined4 *)this);
      *(undefined4 *)(this + 0x600) = 1;
      *(undefined2 *)(this + 0x5c4) = local_44[0];
      *(undefined2 *)(this + 0x5c6) = *(undefined2 *)(this + 0x5c4);
      this[0x604] = param_5;
      if (this[0x604] != (PvP_Room)0x0) {
        *(undefined4 *)(this + 0x610) = param_7;
        memset(this + 0x605,0,9);
        memcpy(this + 0x605,param_6,*(size_t *)(this + 0x610));
      }
      CRelayBattleMgr::OnCreateRoom((int)(this + 0x620));
      CDeathMatchBattleMgr::OnCreateRoom((int)(this + 0x69c));
      *(undefined4 *)(this + 4) = param_9;
      local_20 = 0;
      iVar4 = (**(code **)(**(int **)(this + 0x6e4) + 0x20))(*(undefined4 *)(this + 0x6e4),param_1);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x13;
    }
  }
  return iVar4;
}

```

---

## destroy_room

```asm
// === 085d81d0 PvP_Room::destroy_room  [0x085d81d0-0x85d828f] ===
 85d81d0:	55                   	push   %ebp
 85d81d1:	89 e5                	mov    %esp,%ebp
 85d81d3:	53                   	push   %ebx
 85d81d4:	83 ec 44             	sub    $0x44,%esp
 85d81d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d81da:	89 04 24             	mov    %eax,(%esp)
 85d81dd:	e8 b2 57 c5 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85d81e2:	89 c3                	mov    %eax,%ebx
 85d81e4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85d81eb:	00 
 85d81ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d81f3:	00 
 85d81f4:	c7 44 24 08 21 07 00 	movl   $0x721,0x8(%esp)
 85d81fb:	00 
 85d81fc:	c7 44 24 04 c0 25 cc 	movl   $0x8cc25c0,0x4(%esp)
 85d8203:	08 
 85d8204:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85d8207:	89 04 24             	mov    %eax,(%esp)
 85d820a:	e8 2d 7b f7 ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85d820f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8212:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85d8216:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d821a:	c7 44 24 04 03 10 cc 	movl   $0x8cc1003,0x4(%esp)
 85d8221:	08 
 85d8222:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85d8225:	89 04 24             	mov    %eax,(%esp)
 85d8228:	e8 37 7b f7 ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 85d822d:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d8230:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8233:	83 c2 0c             	add    $0xc,%edx
 85d8236:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8239:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d823c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85d8240:	75 39                	jne    85d827b <_ZN8PvP_Room12destroy_roomEi+0xab>
 85d8242:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d8249:	eb 25                	jmp    85d8270 <_ZN8PvP_Room12destroy_roomEi+0xa0>
 85d824b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d824e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8251:	83 c2 0c             	add    $0xc,%edx
 85d8254:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8257:	85 c0                	test   %eax,%eax
 85d8259:	74 11                	je     85d826c <_ZN8PvP_Room12destroy_roomEi+0x9c>
 85d825b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d825e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8261:	83 c2 0c             	add    $0xc,%edx
 85d8264:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8267:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85d826a:	eb 0f                	jmp    85d827b <_ZN8PvP_Room12destroy_roomEi+0xab>
 85d826c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d8270:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d8274:	0f 9e c0             	setle  %al
 85d8277:	84 c0                	test   %al,%al
 85d8279:	75 d0                	jne    85d824b <_ZN8PvP_Room12destroy_roomEi+0x7b>
 85d827b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d827e:	89 04 24             	mov    %eax,(%esp)
 85d8281:	e8 42 e0 ff ff       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 85d8286:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d8289:	83 c4 44             	add    $0x44,%esp
 85d828c:	5b                   	pop    %ebx
 85d828d:	5d                   	pop    %ebp
 85d828e:	c3                   	ret
 85d828f:	90                   	nop

```

```c
// PvP_Room::destroy_room @ 0x85d81d0

/* PvP_Room::destroy_room(int) */

int __thiscall PvP_Room::destroy_room(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  CSwitchLog local_24 [16];
  int local_14;
  int local_10;
  
  uVar1 = get_index(this);
  CSwitchLog::CSwitchLog(local_24,"CUser* PvP_Room::destroy_room(int)",0x721,0,0);
  CSwitchLog::operator()(local_24,"pvp@log room(%d), %d",uVar1,param_1);
  local_14 = *(int *)(this + (param_1 + 0xc) * 4);
  if (local_14 == 0) {
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
        local_14 = *(int *)(this + (local_10 + 0xc) * 4);
        break;
      }
    }
  }
  reset(this);
  return local_14;
}

```

---

## die_charac

```asm
// === 085d9386 PvP_Room::die_charac  [0x085d9386-0x85d96eb] ===
 85d9386:	55                   	push   %ebp
 85d9387:	89 e5                	mov    %esp,%ebp
 85d9389:	57                   	push   %edi
 85d938a:	56                   	push   %esi
 85d938b:	53                   	push   %ebx
 85d938c:	83 ec 7c             	sub    $0x7c,%esp
 85d938f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9392:	89 04 24             	mov    %eax,(%esp)
 85d9395:	e8 32 46 c5 ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85d939a:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 85d939d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d93a0:	89 04 24             	mov    %eax,(%esp)
 85d93a3:	e8 ec 45 c5 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85d93a8:	89 c7                	mov    %eax,%edi
 85d93aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d93ad:	89 04 24             	mov    %eax,(%esp)
 85d93b0:	e8 73 7c b2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85d93b5:	89 c6                	mov    %eax,%esi
 85d93b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d93ba:	89 04 24             	mov    %eax,(%esp)
 85d93bd:	e8 b0 7c b2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85d93c2:	89 c3                	mov    %eax,%ebx
 85d93c4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85d93cb:	00 
 85d93cc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d93d3:	00 
 85d93d4:	c7 44 24 08 a1 09 00 	movl   $0x9a1,0x8(%esp)
 85d93db:	00 
 85d93dc:	c7 44 24 04 60 25 cc 	movl   $0x8cc2560,0x4(%esp)
 85d93e3:	08 
 85d93e4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d93e7:	89 04 24             	mov    %eax,(%esp)
 85d93ea:	e8 4d 69 f7 ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85d93ef:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 85d93f2:	89 44 24 14          	mov    %eax,0x14(%esp)
 85d93f6:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85d93fa:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85d93fe:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d9402:	c7 44 24 04 98 10 cc 	movl   $0x8cc1098,0x4(%esp)
 85d9409:	08 
 85d940a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85d940d:	89 04 24             	mov    %eax,(%esp)
 85d9410:	e8 4f 69 f7 ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 85d9415:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9418:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85d941e:	83 f8 02             	cmp    $0x2,%eax
 85d9421:	74 0a                	je     85d942d <_ZN8PvP_Room10die_characEP5CUserS1_+0xa7>
 85d9423:	bb 13 00 00 00       	mov    $0x13,%ebx
 85d9428:	e9 b4 02 00 00       	jmp    85d96e1 <_ZN8PvP_Room10die_characEP5CUserS1_+0x35b>
 85d942d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9430:	89 04 24             	mov    %eax,(%esp)
 85d9433:	e8 02 65 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d9438:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d943b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d943f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9442:	89 04 24             	mov    %eax,(%esp)
 85d9445:	e8 98 fd ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85d944a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85d944d:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 85d9451:	79 15                	jns    85d9468 <_ZN8PvP_Room10die_characEP5CUserS1_+0xe2>
 85d9453:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9456:	89 04 24             	mov    %eax,(%esp)
 85d9459:	e8 e2 64 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d945e:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 85d9463:	e9 79 02 00 00       	jmp    85d96e1 <_ZN8PvP_Room10die_characEP5CUserS1_+0x35b>
 85d9468:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d946b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d946e:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85d9475:	00 
 85d9476:	83 f0 01             	xor    $0x1,%eax
 85d9479:	84 c0                	test   %al,%al
 85d947b:	74 15                	je     85d9492 <_ZN8PvP_Room10die_characEP5CUserS1_+0x10c>
 85d947d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9480:	89 04 24             	mov    %eax,(%esp)
 85d9483:	e8 b8 64 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d9488:	bb 12 00 00 00       	mov    $0x12,%ebx
 85d948d:	e9 4f 02 00 00       	jmp    85d96e1 <_ZN8PvP_Room10die_characEP5CUserS1_+0x35b>
 85d9492:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d9495:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9498:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85d949f:	00 
 85d94a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d94a3:	89 04 24             	mov    %eax,(%esp)
 85d94a6:	e8 95 64 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d94ab:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d94ae:	89 04 24             	mov    %eax,(%esp)
 85d94b1:	e8 96 48 fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d94b6:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 85d94bd:	00 
 85d94be:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d94c5:	00 
 85d94c6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d94c9:	89 04 24             	mov    %eax,(%esp)
 85d94cc:	e8 2b 24 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d94d1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d94d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d94d8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d94db:	89 04 24             	mov    %eax,(%esp)
 85d94de:	e8 3d 24 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d94e3:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85d94e7:	74 23                	je     85d950c <_ZN8PvP_Room10die_characEP5CUserS1_+0x186>
 85d94e9:	8b 45 10             	mov    0x10(%ebp),%eax
 85d94ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d94f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d94f3:	89 04 24             	mov    %eax,(%esp)
 85d94f6:	e8 e7 fc ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85d94fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d94ff:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d9502:	89 04 24             	mov    %eax,(%esp)
 85d9505:	e8 16 24 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d950a:	eb 13                	jmp    85d951f <_ZN8PvP_Room10die_characEP5CUserS1_+0x199>
 85d950c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85d9513:	ff 
 85d9514:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d9517:	89 04 24             	mov    %eax,(%esp)
 85d951a:	e8 01 24 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d951f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d9526:	00 
 85d9527:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d952a:	89 04 24             	mov    %eax,(%esp)
 85d952d:	e8 26 24 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d9532:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d9535:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9539:	8b 45 08             	mov    0x8(%ebp),%eax
 85d953c:	89 04 24             	mov    %eax,(%esp)
 85d953f:	e8 d4 28 00 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85d9544:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9547:	8b 40 04             	mov    0x4(%eax),%eax
 85d954a:	83 f8 04             	cmp    $0x4,%eax
 85d954d:	74 0b                	je     85d955a <_ZN8PvP_Room10die_characEP5CUserS1_+0x1d4>
 85d954f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9552:	8b 40 04             	mov    0x4(%eax),%eax
 85d9555:	83 f8 05             	cmp    $0x5,%eax
 85d9558:	75 6c                	jne    85d95c6 <_ZN8PvP_Room10die_characEP5CUserS1_+0x240>
 85d955a:	8b 45 10             	mov    0x10(%ebp),%eax
 85d955d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9561:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9564:	89 04 24             	mov    %eax,(%esp)
 85d9567:	e8 76 fc ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85d956c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85d956f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9572:	8d 90 9c 06 00 00    	lea    0x69c(%eax),%edx
 85d9578:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d957b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d957f:	89 14 24             	mov    %edx,(%esp)
 85d9582:	e8 87 59 00 00       	call   85def0e <_ZN20CDeathMatchBattleMgr17IncreaseKillCountEi>
 85d9587:	8b 45 08             	mov    0x8(%ebp),%eax
 85d958a:	8d 90 9c 06 00 00    	lea    0x69c(%eax),%edx
 85d9590:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d9593:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9597:	89 14 24             	mov    %edx,(%esp)
 85d959a:	e8 95 59 00 00       	call   85def34 <_ZN20CDeathMatchBattleMgr18IncreaseDeathCountEi>
 85d959f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d95a2:	89 04 24             	mov    %eax,(%esp)
 85d95a5:	e8 ea 43 c5 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85d95aa:	8b 55 08             	mov    0x8(%ebp),%edx
 85d95ad:	8d 8a 9c 06 00 00    	lea    0x69c(%edx),%ecx
 85d95b3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85d95b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d95ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d95be:	89 0c 24             	mov    %ecx,(%esp)
 85d95c1:	e8 9a 59 00 00       	call   85def60 <_ZN20CDeathMatchBattleMgr30InsertTimerKilledUserForReviveEii>
 85d95c6:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85d95ca:	74 44                	je     85d9610 <_ZN8PvP_Room10die_characEP5CUserS1_+0x28a>
 85d95cc:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85d95d3:	00 
 85d95d4:	8b 45 10             	mov    0x10(%ebp),%eax
 85d95d7:	89 04 24             	mov    %eax,(%esp)
 85d95da:	e8 a5 3f b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d95df:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85d95e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d95e5:	8b 40 04             	mov    0x4(%eax),%eax
 85d95e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d95ec:	8d 45 a9             	lea    -0x57(%ebp),%eax
 85d95ef:	89 04 24             	mov    %eax,(%esp)
 85d95f2:	e8 4d 84 00 00       	call   85e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>
 85d95f7:	8d 45 a9             	lea    -0x57(%ebp),%eax
 85d95fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d95fe:	8b 45 10             	mov    0x10(%ebp),%eax
 85d9601:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9605:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85d9608:	89 04 24             	mov    %eax,(%esp)
 85d960b:	e8 e4 c2 00 00       	call   85e58f4 <_ZN19CMissionList_Charac17Update_Kill_eventER5CUserRK31MissionClearCondition_Parameter>
 85d9610:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9613:	89 04 24             	mov    %eax,(%esp)
 85d9616:	e8 d1 00 00 00       	call   85d96ec <_ZN8PvP_Room12check_winnerEv>
 85d961b:	84 c0                	test   %al,%al
 85d961d:	74 4e                	je     85d966d <_ZN8PvP_Room10die_characEP5CUserS1_+0x2e7>
 85d961f:	8b 45 10             	mov    0x10(%ebp),%eax
 85d9622:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9626:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9629:	89 04 24             	mov    %eax,(%esp)
 85d962c:	e8 b1 fb ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85d9631:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85d9634:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9637:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d963d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d9644:	00 
 85d9645:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d9648:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d964c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d964f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9653:	89 14 24             	mov    %edx,(%esp)
 85d9656:	e8 2f 4d 00 00       	call   85de38a <_ZN15CRelayBattleMgr11OnDiePlayerEiib>
 85d965b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d965e:	89 04 24             	mov    %eax,(%esp)
 85d9661:	e8 18 37 00 00       	call   85dcd7e <_ZN8PvP_Room20pvp_request_pvp_rankEv>
 85d9666:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 85d966b:	eb 69                	jmp    85d96d6 <_ZN8PvP_Room10die_characEP5CUserS1_+0x350>
 85d966d:	8b 45 10             	mov    0x10(%ebp),%eax
 85d9670:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9674:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9677:	89 04 24             	mov    %eax,(%esp)
 85d967a:	e8 63 fb ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85d967f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d9682:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9685:	8b 40 04             	mov    0x4(%eax),%eax
 85d9688:	83 f8 03             	cmp    $0x3,%eax
 85d968b:	0f 94 c0             	sete   %al
 85d968e:	0f b6 c0             	movzbl %al,%eax
 85d9691:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9694:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d969a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85d969e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d96a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d96a5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d96a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d96ac:	89 14 24             	mov    %edx,(%esp)
 85d96af:	e8 d6 4c 00 00       	call   85de38a <_ZN15CRelayBattleMgr11OnDiePlayerEiib>
 85d96b4:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d96b9:	eb 1b                	jmp    85d96d6 <_ZN8PvP_Room10die_characEP5CUserS1_+0x350>
 85d96bb:	89 d3                	mov    %edx,%ebx
 85d96bd:	89 c6                	mov    %eax,%esi
 85d96bf:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d96c2:	89 04 24             	mov    %eax,(%esp)
 85d96c5:	e8 b6 47 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d96ca:	89 f0                	mov    %esi,%eax
 85d96cc:	89 da                	mov    %ebx,%edx
 85d96ce:	89 04 24             	mov    %eax,(%esp)
 85d96d1:	e8 7a a0 50 00       	call   8ae3750 <_Unwind_Resume>
 85d96d6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85d96d9:	89 04 24             	mov    %eax,(%esp)
 85d96dc:	e8 9f 47 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d96e1:	89 d8                	mov    %ebx,%eax
 85d96e3:	83 c4 7c             	add    $0x7c,%esp
 85d96e6:	5b                   	pop    %ebx
 85d96e7:	5e                   	pop    %esi
 85d96e8:	5f                   	pop    %edi
 85d96e9:	5d                   	pop    %ebp
 85d96ea:	c3                   	ret
 85d96eb:	90                   	nop

```

```c
// PvP_Room::die_charac @ 0x85d9386

/* PvP_Room::die_charac(CUser*, CUser*) */

undefined4 __thiscall PvP_Room::die_charac(PvP_Room *this,CUser *param_1,CUser *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  MissionClearCondition_Parameter local_5b [15];
  PacketGuard local_4c [12];
  CSwitchLog local_40 [16];
  int local_30;
  int local_2c;
  CMissionList_Charac *local_28;
  int local_24;
  int local_20;
  
  uVar2 = get_pvp_battle_mode(this);
  uVar3 = get_index(this);
  uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar5 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog(local_40,"int PvP_Room::die_charac(CUser*, CUser*)",0x9a1,0,0);
  CSwitchLog::operator()(local_40,"pvp@log %s,%s,%d,%d",uVar5,uVar4,uVar3,uVar2);
  if (*(int *)(this + 0xb8) == 2) {
    lock();
    local_30 = get_user_seat(this,param_1);
    if (local_30 < 0) {
      unlock();
      uVar2 = 0xffffffff;
    }
    else if (this[local_30 + 0x5c8] == (PvP_Room)0x1) {
      this[local_30 + 0x5c8] = (PvP_Room)0x0;
      unlock();
      PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 085d94cc to 085d96b3 has its CatchHandler @ 085d96bb */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,0,0x2e);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,local_30);
      if (param_2 == (CUser *)0x0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,-1);
      }
      else {
        iVar6 = get_user_seat(this,param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,iVar6);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
      send_to_pvp(this,local_4c);
      if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
        local_2c = get_user_seat(this,param_2);
        CDeathMatchBattleMgr::IncreaseKillCount((CDeathMatchBattleMgr *)(this + 0x69c),local_2c);
        CDeathMatchBattleMgr::IncreaseDeathCount((CDeathMatchBattleMgr *)(this + 0x69c),local_30);
        iVar6 = get_index(this);
        CDeathMatchBattleMgr::InsertTimerKilledUserForRevive
                  ((CDeathMatchBattleMgr *)(this + 0x69c),iVar6,local_30);
      }
      if (param_2 != (CUser *)0x0) {
        local_28 = (CMissionList_Charac *)CUser::GetCharacExpandData(param_2,8);
        MissionClearCondition_Parameter::MissionClearCondition_Parameter
                  (local_5b,*(undefined4 *)(this + 4));
        CMissionList_Charac::Update_Kill_event(local_28,param_2,local_5b);
      }
      cVar1 = check_winner(this);
      if (cVar1 == '\0') {
        local_20 = get_user_seat(this,param_2);
        CRelayBattleMgr::OnDiePlayer
                  ((CRelayBattleMgr *)(this + 0x620),local_30,local_20,*(int *)(this + 4) == 3);
        uVar2 = 0;
      }
      else {
        local_24 = get_user_seat(this,param_2);
        CRelayBattleMgr::OnDiePlayer((CRelayBattleMgr *)(this + 0x620),local_30,local_24,false);
        pvp_request_pvp_rank(this);
        uVar2 = 0xffffffff;
      }
      PacketGuard::~PacketGuard(local_4c);
    }
    else {
      unlock();
      uVar2 = 0x12;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## end_pvp

```asm
// === 085d92fc PvP_Room::end_pvp  [0x085d92fc-0x85d9329] ===
 85d92fc:	55                   	push   %ebp
 85d92fd:	89 e5                	mov    %esp,%ebp
 85d92ff:	83 ec 18             	sub    $0x18,%esp
 85d9302:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9305:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d930b:	8b 00                	mov    (%eax),%eax
 85d930d:	83 c0 40             	add    $0x40,%eax
 85d9310:	8b 08                	mov    (%eax),%ecx
 85d9312:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9315:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d931b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d931e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d9322:	89 04 24             	mov    %eax,(%esp)
 85d9325:	ff d1                	call   *%ecx
 85d9327:	c9                   	leave
 85d9328:	c3                   	ret
 85d9329:	90                   	nop

```

```c
// PvP_Room::end_pvp @ 0x85d92fc

/* PvP_Room::end_pvp() */

void __thiscall PvP_Room::end_pvp(PvP_Room *this)

{
  (**(code **)(**(int **)(this + 0x6e4) + 0x40))(*(undefined4 *)(this + 0x6e4),this);
  return;
}

```

---

## end_pvp_result

```asm
// === 085dca48 PvP_Room::end_pvp_result  [0x085dca48-0x85dcab9] ===
 85dca48:	55                   	push   %ebp
 85dca49:	89 e5                	mov    %esp,%ebp
 85dca4b:	83 ec 28             	sub    $0x28,%esp
 85dca4e:	8b 45 08             	mov    0x8(%ebp),%eax
 85dca51:	89 04 24             	mov    %eax,(%esp)
 85dca54:	e8 97 b3 ff ff       	call   85d7df0 <_ZN8PvP_Room24change_manager_to_winnerEv>
 85dca59:	8b 45 08             	mov    0x8(%ebp),%eax
 85dca5c:	c7 80 b8 00 00 00 01 	movl   $0x1,0xb8(%eax)
 85dca63:	00 00 00 
 85dca66:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85dca6d:	eb 33                	jmp    85dcaa2 <_ZN8PvP_Room14end_pvp_resultEv+0x5a>
 85dca6f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dca72:	8b 45 08             	mov    0x8(%ebp),%eax
 85dca75:	83 c2 0c             	add    $0xc,%edx
 85dca78:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dca7b:	85 c0                	test   %eax,%eax
 85dca7d:	74 1e                	je     85dca9d <_ZN8PvP_Room14end_pvp_resultEv+0x55>
 85dca7f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dca82:	8b 45 08             	mov    0x8(%ebp),%eax
 85dca85:	83 c2 0c             	add    $0xc,%edx
 85dca88:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dca8b:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 85dca92:	00 
 85dca93:	89 04 24             	mov    %eax,(%esp)
 85dca96:	e8 17 23 0a 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 85dca9b:	eb 01                	jmp    85dca9e <_ZN8PvP_Room14end_pvp_resultEv+0x56>
 85dca9d:	90                   	nop
 85dca9e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85dcaa2:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85dcaa6:	0f 9e c0             	setle  %al
 85dcaa9:	84 c0                	test   %al,%al
 85dcaab:	75 c2                	jne    85dca6f <_ZN8PvP_Room14end_pvp_resultEv+0x27>
 85dcaad:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcab0:	89 04 24             	mov    %eax,(%esp)
 85dcab3:	e8 02 00 00 00       	call   85dcaba <_ZN8PvP_Room23SkipLastRankResultTimerEv>
 85dcab8:	c9                   	leave
 85dcab9:	c3                   	ret

```

```c
// PvP_Room::end_pvp_result @ 0x85dca48

/* PvP_Room::end_pvp_result() */

void __thiscall PvP_Room::end_pvp_result(PvP_Room *this)

{
  int local_10;
  
  change_manager_to_winner(this);
  *(undefined4 *)(this + 0xb8) = 1;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
      CUser::set_state(*(CUser **)(this + (local_10 + 0xc) * 4),6);
    }
  }
  SkipLastRankResultTimer(this);
  return;
}

```

---

## get_extra_win_point

```asm
// === 085d9358 PvP_Room::get_extra_win_point  [0x085d9358-0x85d9385] ===
 85d9358:	55                   	push   %ebp
 85d9359:	89 e5                	mov    %esp,%ebp
 85d935b:	83 ec 18             	sub    $0x18,%esp
 85d935e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9361:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d9367:	8b 00                	mov    (%eax),%eax
 85d9369:	83 c0 1c             	add    $0x1c,%eax
 85d936c:	8b 08                	mov    (%eax),%ecx
 85d936e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9371:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d9377:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d937a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d937e:	89 04 24             	mov    %eax,(%esp)
 85d9381:	ff d1                	call   *%ecx
 85d9383:	c9                   	leave
 85d9384:	c3                   	ret
 85d9385:	90                   	nop

```

```c
// PvP_Room::get_extra_win_point @ 0x85d9358

/* PvP_Room::get_extra_win_point(int) */

void __thiscall PvP_Room::get_extra_win_point(PvP_Room *this,int param_1)

{
  (**(code **)(**(int **)(this + 0x6e4) + 0x1c))(*(undefined4 *)(this + 0x6e4),param_1);
  return;
}

```

---

## get_manager_team

```asm
// === 085d9242 PvP_Room::get_manager_team  [0x085d9242-0x85d9271] ===
 85d9242:	55                   	push   %ebp
 85d9243:	89 e5                	mov    %esp,%ebp
 85d9245:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9248:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d924b:	85 c0                	test   %eax,%eax
 85d924d:	78 0b                	js     85d925a <_ZN8PvP_Room16get_manager_teamEv+0x18>
 85d924f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9252:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d9255:	83 f8 07             	cmp    $0x7,%eax
 85d9258:	7e 07                	jle    85d9261 <_ZN8PvP_Room16get_manager_teamEv+0x1f>
 85d925a:	b8 fe 00 00 00       	mov    $0xfe,%eax
 85d925f:	eb 0f                	jmp    85d9270 <_ZN8PvP_Room16get_manager_teamEv+0x2e>
 85d9261:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9264:	8b 50 2c             	mov    0x2c(%eax),%edx
 85d9267:	8b 45 08             	mov    0x8(%ebp),%eax
 85d926a:	83 c2 14             	add    $0x14,%edx
 85d926d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d9270:	5d                   	pop    %ebp
 85d9271:	c3                   	ret

```

```c
// PvP_Room::get_manager_team @ 0x85d9242

/* PvP_Room::get_manager_team() */

undefined4 __thiscall PvP_Room::get_manager_team(PvP_Room *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x2c) < 0) || (7 < *(int *)(this + 0x2c))) {
    uVar1 = 0xfe;
  }
  else {
    uVar1 = *(undefined4 *)(this + (*(int *)(this + 0x2c) + 0x14) * 4);
  }
  return uVar1;
}

```

---

## get_player_count

```asm
// === 085d68a0 PvP_Room::get_player_count  [0x085d68a0-0x85d6907] ===
 85d68a0:	55                   	push   %ebp
 85d68a1:	89 e5                	mov    %esp,%ebp
 85d68a3:	83 ec 28             	sub    $0x28,%esp
 85d68a6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d68ad:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d68b4:	eb 41                	jmp    85d68f7 <_ZN8PvP_Room16get_player_countEv+0x57>
 85d68b6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d68b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d68bc:	83 c2 0c             	add    $0xc,%edx
 85d68bf:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d68c2:	85 c0                	test   %eax,%eax
 85d68c4:	74 20                	je     85d68e6 <_ZN8PvP_Room16get_player_countEv+0x46>
 85d68c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d68c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d68cd:	8b 45 08             	mov    0x8(%ebp),%eax
 85d68d0:	89 04 24             	mov    %eax,(%esp)
 85d68d3:	e8 6e 37 00 00       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85d68d8:	83 f0 01             	xor    $0x1,%eax
 85d68db:	84 c0                	test   %al,%al
 85d68dd:	74 07                	je     85d68e6 <_ZN8PvP_Room16get_player_countEv+0x46>
 85d68df:	b8 01 00 00 00       	mov    $0x1,%eax
 85d68e4:	eb 05                	jmp    85d68eb <_ZN8PvP_Room16get_player_countEv+0x4b>
 85d68e6:	b8 00 00 00 00       	mov    $0x0,%eax
 85d68eb:	84 c0                	test   %al,%al
 85d68ed:	74 04                	je     85d68f3 <_ZN8PvP_Room16get_player_countEv+0x53>
 85d68ef:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d68f3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d68f7:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d68fb:	0f 9e c0             	setle  %al
 85d68fe:	84 c0                	test   %al,%al
 85d6900:	75 b4                	jne    85d68b6 <_ZN8PvP_Room16get_player_countEv+0x16>
 85d6902:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d6905:	c9                   	leave
 85d6906:	c3                   	ret
 85d6907:	90                   	nop

```

```c
// PvP_Room::get_player_count @ 0x85d68a0

/* PvP_Room::get_player_count() */

int __thiscall PvP_Room::get_player_count(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  do {
    if (7 < local_10) {
      return local_14;
    }
    if (*(int *)(this + (local_10 + 0xc) * 4) == 0) {
LAB_085d68e6:
      bVar1 = false;
    }
    else {
      cVar2 = IsPvpObserver(this,local_10);
      if (cVar2 == '\x01') goto LAB_085d68e6;
      bVar1 = true;
    }
    if (bVar1) {
      local_14 = local_14 + 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## get_pvp_team_cnt

```asm
// === 085d6774 PvP_Room::get_pvp_team_cnt  [0x085d6774-0x85d6843] ===
 85d6774:	55                   	push   %ebp
 85d6775:	89 e5                	mov    %esp,%ebp
 85d6777:	83 ec 28             	sub    $0x28,%esp
 85d677a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d677d:	8b 40 04             	mov    0x4(%eax),%eax
 85d6780:	83 f8 02             	cmp    $0x2,%eax
 85d6783:	74 20                	je     85d67a5 <_ZN8PvP_Room16get_pvp_team_cntEv+0x31>
 85d6785:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6788:	8b 40 04             	mov    0x4(%eax),%eax
 85d678b:	83 f8 03             	cmp    $0x3,%eax
 85d678e:	74 15                	je     85d67a5 <_ZN8PvP_Room16get_pvp_team_cntEv+0x31>
 85d6790:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6793:	8b 40 04             	mov    0x4(%eax),%eax
 85d6796:	83 f8 05             	cmp    $0x5,%eax
 85d6799:	74 0a                	je     85d67a5 <_ZN8PvP_Room16get_pvp_team_cntEv+0x31>
 85d679b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d67a0:	e9 9d 00 00 00       	jmp    85d6842 <_ZN8PvP_Room16get_pvp_team_cntEv+0xce>
 85d67a5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d67ac:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d67b3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d67ba:	eb 69                	jmp    85d6825 <_ZN8PvP_Room16get_pvp_team_cntEv+0xb1>
 85d67bc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d67bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85d67c2:	83 c2 0c             	add    $0xc,%edx
 85d67c5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d67c8:	85 c0                	test   %eax,%eax
 85d67ca:	74 20                	je     85d67ec <_ZN8PvP_Room16get_pvp_team_cntEv+0x78>
 85d67cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d67cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d67d3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d67d6:	89 04 24             	mov    %eax,(%esp)
 85d67d9:	e8 68 38 00 00       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85d67de:	83 f0 01             	xor    $0x1,%eax
 85d67e1:	84 c0                	test   %al,%al
 85d67e3:	74 07                	je     85d67ec <_ZN8PvP_Room16get_pvp_team_cntEv+0x78>
 85d67e5:	b8 01 00 00 00       	mov    $0x1,%eax
 85d67ea:	eb 05                	jmp    85d67f1 <_ZN8PvP_Room16get_pvp_team_cntEv+0x7d>
 85d67ec:	b8 00 00 00 00       	mov    $0x0,%eax
 85d67f1:	84 c0                	test   %al,%al
 85d67f3:	74 2c                	je     85d6821 <_ZN8PvP_Room16get_pvp_team_cntEv+0xad>
 85d67f5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d67f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d67fb:	83 c2 14             	add    $0x14,%edx
 85d67fe:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6801:	83 f8 01             	cmp    $0x1,%eax
 85d6804:	75 06                	jne    85d680c <_ZN8PvP_Room16get_pvp_team_cntEv+0x98>
 85d6806:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d680a:	eb 15                	jmp    85d6821 <_ZN8PvP_Room16get_pvp_team_cntEv+0xad>
 85d680c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d680f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6812:	83 c2 14             	add    $0x14,%edx
 85d6815:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6818:	83 f8 02             	cmp    $0x2,%eax
 85d681b:	75 04                	jne    85d6821 <_ZN8PvP_Room16get_pvp_team_cntEv+0xad>
 85d681d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d6821:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d6825:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d6829:	0f 9e c0             	setle  %al
 85d682c:	84 c0                	test   %al,%al
 85d682e:	75 8c                	jne    85d67bc <_ZN8PvP_Room16get_pvp_team_cntEv+0x48>
 85d6830:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d6833:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85d6836:	74 07                	je     85d683f <_ZN8PvP_Room16get_pvp_team_cntEv+0xcb>
 85d6838:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d683d:	eb 03                	jmp    85d6842 <_ZN8PvP_Room16get_pvp_team_cntEv+0xce>
 85d683f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d6842:	c9                   	leave
 85d6843:	c3                   	ret

```

```c
// PvP_Room::get_pvp_team_cnt @ 0x85d6774

/* PvP_Room::get_pvp_team_cnt() */

int __thiscall PvP_Room::get_pvp_team_cnt(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if (((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) || (*(int *)(this + 4) == 5)) {
    local_18 = 0;
    local_14 = 0;
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) ||
         (cVar2 = IsPvpObserver(this,local_10), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(int *)(this + (local_10 + 0x14) * 4) == 1) {
          local_18 = local_18 + 1;
        }
        else if (*(int *)(this + (local_10 + 0x14) * 4) == 2) {
          local_14 = local_14 + 1;
        }
      }
    }
    if (local_14 != local_18) {
      local_14 = -1;
    }
  }
  else {
    local_14 = -1;
  }
  return local_14;
}

```

---

## get_recv_pvp_end_result_count

```asm
// === 085dc1c8 PvP_Room::get_recv_pvp_end_result_count  [0x085dc1c8-0x85dc23b] ===
 85dc1c8:	55                   	push   %ebp
 85dc1c9:	89 e5                	mov    %esp,%ebp
 85dc1cb:	83 ec 18             	sub    $0x18,%esp
 85dc1ce:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85dc1d5:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85dc1dc:	eb 4d                	jmp    85dc22b <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv+0x63>
 85dc1de:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc1e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc1e4:	83 c2 0c             	add    $0xc,%edx
 85dc1e7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc1ea:	85 c0                	test   %eax,%eax
 85dc1ec:	74 35                	je     85dc223 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv+0x5b>
 85dc1ee:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc1f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc1f4:	83 c2 14             	add    $0x14,%edx
 85dc1f7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc1fa:	3d ff 00 00 00       	cmp    $0xff,%eax
 85dc1ff:	74 25                	je     85dc226 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv+0x5e>
 85dc201:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc204:	8d 90 bc 05 00 00    	lea    0x5bc(%eax),%edx
 85dc20a:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dc20d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc211:	89 14 24             	mov    %edx,(%esp)
 85dc214:	e8 d7 9d ff ff       	call   85d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>
 85dc219:	84 c0                	test   %al,%al
 85dc21b:	74 0a                	je     85dc227 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv+0x5f>
 85dc21d:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85dc221:	eb 04                	jmp    85dc227 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv+0x5f>
 85dc223:	90                   	nop
 85dc224:	eb 01                	jmp    85dc227 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv+0x5f>
 85dc226:	90                   	nop
 85dc227:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85dc22b:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85dc22f:	0f 9e c0             	setle  %al
 85dc232:	84 c0                	test   %al,%al
 85dc234:	75 a8                	jne    85dc1de <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv+0x16>
 85dc236:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85dc239:	c9                   	leave
 85dc23a:	c3                   	ret
 85dc23b:	90                   	nop

```

```c
// PvP_Room::get_recv_pvp_end_result_count @ 0x85dc1c8

/* PvP_Room::get_recv_pvp_end_result_count() const */

int __thiscall PvP_Room::get_recv_pvp_end_result_count(PvP_Room *this)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_8 + 0x14) * 4) != 0xff)) &&
       (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5bc),local_8),
       cVar1 != '\0')) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## get_recv_pvp_rank_count

```asm
// === 085dc2cc PvP_Room::get_recv_pvp_rank_count  [0x085dc2cc-0x85dc33f] ===
 85dc2cc:	55                   	push   %ebp
 85dc2cd:	89 e5                	mov    %esp,%ebp
 85dc2cf:	83 ec 18             	sub    $0x18,%esp
 85dc2d2:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85dc2d9:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85dc2e0:	eb 4d                	jmp    85dc32f <_ZN8PvP_Room23get_recv_pvp_rank_countEv+0x63>
 85dc2e2:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc2e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc2e8:	83 c2 0c             	add    $0xc,%edx
 85dc2eb:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc2ee:	85 c0                	test   %eax,%eax
 85dc2f0:	74 35                	je     85dc327 <_ZN8PvP_Room23get_recv_pvp_rank_countEv+0x5b>
 85dc2f2:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc2f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc2f8:	83 c2 14             	add    $0x14,%edx
 85dc2fb:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc2fe:	3d ff 00 00 00       	cmp    $0xff,%eax
 85dc303:	74 25                	je     85dc32a <_ZN8PvP_Room23get_recv_pvp_rank_countEv+0x5e>
 85dc305:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc308:	8d 90 b4 05 00 00    	lea    0x5b4(%eax),%edx
 85dc30e:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dc311:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc315:	89 14 24             	mov    %edx,(%esp)
 85dc318:	e8 d3 9c ff ff       	call   85d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>
 85dc31d:	84 c0                	test   %al,%al
 85dc31f:	74 0a                	je     85dc32b <_ZN8PvP_Room23get_recv_pvp_rank_countEv+0x5f>
 85dc321:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85dc325:	eb 04                	jmp    85dc32b <_ZN8PvP_Room23get_recv_pvp_rank_countEv+0x5f>
 85dc327:	90                   	nop
 85dc328:	eb 01                	jmp    85dc32b <_ZN8PvP_Room23get_recv_pvp_rank_countEv+0x5f>
 85dc32a:	90                   	nop
 85dc32b:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85dc32f:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85dc333:	0f 9e c0             	setle  %al
 85dc336:	84 c0                	test   %al,%al
 85dc338:	75 a8                	jne    85dc2e2 <_ZN8PvP_Room23get_recv_pvp_rank_countEv+0x16>
 85dc33a:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85dc33d:	c9                   	leave
 85dc33e:	c3                   	ret
 85dc33f:	90                   	nop

```

```c
// PvP_Room::get_recv_pvp_rank_count @ 0x85dc2cc

/* PvP_Room::get_recv_pvp_rank_count() */

int __thiscall PvP_Room::get_recv_pvp_rank_count(PvP_Room *this)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_8 + 0x14) * 4) != 0xff)) &&
       (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5b4),local_8),
       cVar1 != '\0')) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## get_remain_seat

```asm
// === 085d6844 PvP_Room::get_remain_seat  [0x085d6844-0x85d6861] ===
 85d6844:	55                   	push   %ebp
 85d6845:	89 e5                	mov    %esp,%ebp
 85d6847:	83 ec 18             	sub    $0x18,%esp
 85d684a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d684d:	89 04 24             	mov    %eax,(%esp)
 85d6850:	e8 0d 00 00 00       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d6855:	ba 08 00 00 00       	mov    $0x8,%edx
 85d685a:	89 d1                	mov    %edx,%ecx
 85d685c:	29 c1                	sub    %eax,%ecx
 85d685e:	89 c8                	mov    %ecx,%eax
 85d6860:	c9                   	leave
 85d6861:	c3                   	ret

```

```c
// PvP_Room::get_remain_seat @ 0x85d6844

/* PvP_Room::get_remain_seat() const */

int __thiscall PvP_Room::get_remain_seat(PvP_Room *this)

{
  int iVar1;
  
  iVar1 = get_waiter_count(this);
  return 8 - iVar1;
}

```

---

## get_room_info

```asm
// === 085d9296 PvP_Room::get_room_info  [0x085d9296-0x85d92fb] ===
 85d9296:	55                   	push   %ebp
 85d9297:	89 e5                	mov    %esp,%ebp
 85d9299:	83 ec 18             	sub    $0x18,%esp
 85d929c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d929f:	8d 50 09             	lea    0x9(%eax),%edx
 85d92a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d92a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d92a9:	89 04 24             	mov    %eax,(%esp)
 85d92ac:	e8 6f f4 12 00       	call   8708720 <_ZNSsaSEPKc>
 85d92b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d92b4:	0f b6 50 08          	movzbl 0x8(%eax),%edx
 85d92b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d92bb:	88 50 04             	mov    %dl,0x4(%eax)
 85d92be:	8b 45 08             	mov    0x8(%ebp),%eax
 85d92c1:	0f b7 90 c4 05 00 00 	movzwl 0x5c4(%eax),%edx
 85d92c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d92cb:	66 89 50 06          	mov    %dx,0x6(%eax)
 85d92cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85d92d2:	0f b6 90 04 06 00 00 	movzbl 0x604(%eax),%edx
 85d92d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d92dc:	88 50 08             	mov    %dl,0x8(%eax)
 85d92df:	8b 45 08             	mov    0x8(%ebp),%eax
 85d92e2:	8d 90 05 06 00 00    	lea    0x605(%eax),%edx
 85d92e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d92eb:	83 c0 0c             	add    $0xc,%eax
 85d92ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d92f2:	89 04 24             	mov    %eax,(%esp)
 85d92f5:	e8 26 f4 12 00       	call   8708720 <_ZNSsaSEPKc>
 85d92fa:	c9                   	leave
 85d92fb:	c3                   	ret

```

```c
// PvP_Room::get_room_info @ 0x85d9296

/* PvP_Room::get_room_info(PVP_ROOM_INFO*) */

void __thiscall PvP_Room::get_room_info(PvP_Room *this,PVP_ROOM_INFO *param_1)

{
  std::string::operator=((string *)param_1,(char *)(this + 9));
  *(PvP_Room *)(param_1 + 4) = this[8];
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(this + 0x5c4);
  *(PvP_Room *)(param_1 + 8) = this[0x604];
  std::string::operator=((string *)(param_1 + 0xc),(char *)(this + 0x605));
  return;
}

```

---

## get_team

```asm
// === 085d9272 PvP_Room::get_team  [0x085d9272-0x85d9295] ===
 85d9272:	55                   	push   %ebp
 85d9273:	89 e5                	mov    %esp,%ebp
 85d9275:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d9279:	78 06                	js     85d9281 <_ZN8PvP_Room8get_teamEi+0xf>
 85d927b:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85d927f:	7e 07                	jle    85d9288 <_ZN8PvP_Room8get_teamEi+0x16>
 85d9281:	b8 fe 00 00 00       	mov    $0xfe,%eax
 85d9286:	eb 0c                	jmp    85d9294 <_ZN8PvP_Room8get_teamEi+0x22>
 85d9288:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d928b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d928e:	83 c2 14             	add    $0x14,%edx
 85d9291:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d9294:	5d                   	pop    %ebp
 85d9295:	c3                   	ret

```

```c
// PvP_Room::get_team @ 0x85d9272

/* PvP_Room::get_team(int) */

undefined4 __thiscall PvP_Room::get_team(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (7 < param_1)) {
    uVar1 = 0xfe;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x14) * 4);
  }
  return uVar1;
}

```

---

## get_user_list

```asm
// === 085d932a PvP_Room::get_user_list  [0x085d932a-0x85d9357] ===
 85d932a:	55                   	push   %ebp
 85d932b:	89 e5                	mov    %esp,%ebp
 85d932d:	83 ec 18             	sub    $0x18,%esp
 85d9330:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9333:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d9339:	8b 00                	mov    (%eax),%eax
 85d933b:	83 c0 14             	add    $0x14,%eax
 85d933e:	8b 08                	mov    (%eax),%ecx
 85d9340:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9343:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d9349:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d934c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d9350:	89 04 24             	mov    %eax,(%esp)
 85d9353:	ff d1                	call   *%ecx
 85d9355:	c9                   	leave
 85d9356:	c3                   	ret
 85d9357:	90                   	nop

```

```c
// PvP_Room::get_user_list @ 0x85d932a

/* PvP_Room::get_user_list(void*) */

void __thiscall PvP_Room::get_user_list(PvP_Room *this,void *param_1)

{
  (**(code **)(**(int **)(this + 0x6e4) + 0x14))(*(undefined4 *)(this + 0x6e4),param_1);
  return;
}

```

---

## get_user_seat

```asm
// === 085d91e2 PvP_Room::get_user_seat  [0x085d91e2-0x85d921d] ===
 85d91e2:	55                   	push   %ebp
 85d91e3:	89 e5                	mov    %esp,%ebp
 85d91e5:	83 ec 10             	sub    $0x10,%esp
 85d91e8:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85d91ef:	eb 1a                	jmp    85d920b <_ZN8PvP_Room13get_user_seatEP5CUser+0x29>
 85d91f1:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d91f4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d91f7:	83 c2 0c             	add    $0xc,%edx
 85d91fa:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d91fd:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d9200:	75 05                	jne    85d9207 <_ZN8PvP_Room13get_user_seatEP5CUser+0x25>
 85d9202:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85d9205:	eb 14                	jmp    85d921b <_ZN8PvP_Room13get_user_seatEP5CUser+0x39>
 85d9207:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d920b:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85d920f:	0f 9e c0             	setle  %al
 85d9212:	84 c0                	test   %al,%al
 85d9214:	75 db                	jne    85d91f1 <_ZN8PvP_Room13get_user_seatEP5CUser+0xf>
 85d9216:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d921b:	c9                   	leave
 85d921c:	c3                   	ret
 85d921d:	90                   	nop

```

```c
// PvP_Room::get_user_seat @ 0x85d91e2

/* PvP_Room::get_user_seat(CUser*) */

int __thiscall PvP_Room::get_user_seat(PvP_Room *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return -1;
    }
    if (*(CUser **)(this + (local_8 + 0xc) * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

```

---

## get_user_seat_085d921e

```asm
// === 085d921e PvP_Room::get_user_seat  [0x085d921e-0x85d9241] ===
 85d921e:	55                   	push   %ebp
 85d921f:	89 e5                	mov    %esp,%ebp
 85d9221:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d9225:	78 06                	js     85d922d <_ZN8PvP_Room13get_user_seatEi+0xf>
 85d9227:	83 7d 0c 07          	cmpl   $0x7,0xc(%ebp)
 85d922b:	7e 07                	jle    85d9234 <_ZN8PvP_Room13get_user_seatEi+0x16>
 85d922d:	b8 00 00 00 00       	mov    $0x0,%eax
 85d9232:	eb 0c                	jmp    85d9240 <_ZN8PvP_Room13get_user_seatEi+0x22>
 85d9234:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d9237:	8b 45 08             	mov    0x8(%ebp),%eax
 85d923a:	83 c2 0c             	add    $0xc,%edx
 85d923d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d9240:	5d                   	pop    %ebp
 85d9241:	c3                   	ret

```

```c
// PvP_Room::get_user_seat @ 0x85d921e

/* PvP_Room::get_user_seat(int) */

undefined4 __thiscall PvP_Room::get_user_seat(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (7 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0xc) * 4);
  }
  return uVar1;
}

```

---

## get_waiter_count

```asm
// === 085d6862 PvP_Room::get_waiter_count  [0x085d6862-0x85d689f] ===
 85d6862:	55                   	push   %ebp
 85d6863:	89 e5                	mov    %esp,%ebp
 85d6865:	83 ec 10             	sub    $0x10,%esp
 85d6868:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85d686f:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85d6876:	eb 18                	jmp    85d6890 <_ZNK8PvP_Room16get_waiter_countEv+0x2e>
 85d6878:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d687b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d687e:	83 c2 0c             	add    $0xc,%edx
 85d6881:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6884:	85 c0                	test   %eax,%eax
 85d6886:	74 04                	je     85d688c <_ZNK8PvP_Room16get_waiter_countEv+0x2a>
 85d6888:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85d688c:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d6890:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85d6894:	0f 9e c0             	setle  %al
 85d6897:	84 c0                	test   %al,%al
 85d6899:	75 dd                	jne    85d6878 <_ZNK8PvP_Room16get_waiter_countEv+0x16>
 85d689b:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85d689e:	c9                   	leave
 85d689f:	c3                   	ret

```

```c
// PvP_Room::get_waiter_count @ 0x85d6862

/* PvP_Room::get_waiter_count() const */

int __thiscall PvP_Room::get_waiter_count(PvP_Room *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (*(int *)(this + (local_8 + 0xc) * 4) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## insert_timer_recv_pvp_end_result

```asm
// === 085dc23c PvP_Room::insert_timer_recv_pvp_end_result  [0x085dc23c-0x85dc2cb] ===
 85dc23c:	55                   	push   %ebp
 85dc23d:	89 e5                	mov    %esp,%ebp
 85dc23f:	57                   	push   %edi
 85dc240:	56                   	push   %esi
 85dc241:	53                   	push   %ebx
 85dc242:	83 ec 3c             	sub    $0x3c,%esp
 85dc245:	c7 44 24 04 3d 00 00 	movl   $0x3d,0x4(%esp)
 85dc24c:	00 
 85dc24d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc250:	89 04 24             	mov    %eax,(%esp)
 85dc253:	e8 38 cb f8 ff       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85dc258:	89 c7                	mov    %eax,%edi
 85dc25a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc25d:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dc263:	8b 00                	mov    (%eax),%eax
 85dc265:	83 c0 7c             	add    $0x7c,%eax
 85dc268:	8b 10                	mov    (%eax),%edx
 85dc26a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc26d:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dc273:	89 04 24             	mov    %eax,(%esp)
 85dc276:	ff d2                	call   *%edx
 85dc278:	89 c3                	mov    %eax,%ebx
 85dc27a:	89 c6                	mov    %eax,%esi
 85dc27c:	c1 fe 1f             	sar    $0x1f,%esi
 85dc27f:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc282:	8b 00                	mov    (%eax),%eax
 85dc284:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85dc287:	e8 f0 a1 b1 ff       	call   80f647c <_Z12G_TimerQueuev>
 85dc28c:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85dc293:	00 
 85dc294:	89 7c 24 18          	mov    %edi,0x18(%esp)
 85dc298:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85dc29c:	89 74 24 14          	mov    %esi,0x14(%esp)
 85dc2a0:	c7 44 24 0c 3d 00 00 	movl   $0x3d,0xc(%esp)
 85dc2a7:	00 
 85dc2a8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85dc2ab:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dc2af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dc2b6:	00 
 85dc2b7:	89 04 24             	mov    %eax,(%esp)
 85dc2ba:	e8 a1 4b 05 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 85dc2bf:	b8 01 00 00 00       	mov    $0x1,%eax
 85dc2c4:	83 c4 3c             	add    $0x3c,%esp
 85dc2c7:	5b                   	pop    %ebx
 85dc2c8:	5e                   	pop    %esi
 85dc2c9:	5f                   	pop    %edi
 85dc2ca:	5d                   	pop    %ebp
 85dc2cb:	c3                   	ret

```

```c
// PvP_Room::insert_timer_recv_pvp_end_result @ 0x85dc23c

/* PvP_Room::insert_timer_recv_pvp_end_result() */

undefined4 __thiscall PvP_Room::insert_timer_recv_pvp_end_result(PvP_Room *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = gen_timer_key(this,0x3d);
  iVar3 = (**(code **)(**(int **)(this + 0x6e4) + 0x7c))(*(undefined4 *)(this + 0x6e4));
  uVar1 = *(undefined4 *)this;
  uVar4 = G_TimerQueue();
  TimerQueue::InsertTimerInMilisecond(uVar4,1,uVar1,0x3d,iVar3,iVar3 >> 0x1f,uVar2,0);
  return 1;
}

```

---

## insert_timer_recv_pvp_rank

```asm
// === 085dc340 PvP_Room::insert_timer_recv_pvp_rank  [0x085dc340-0x85dc3c9] ===
 85dc340:	55                   	push   %ebp
 85dc341:	89 e5                	mov    %esp,%ebp
 85dc343:	56                   	push   %esi
 85dc344:	53                   	push   %ebx
 85dc345:	83 ec 20             	sub    $0x20,%esp
 85dc348:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc34b:	0f b6 80 16 06 00 00 	movzbl 0x616(%eax),%eax
 85dc352:	84 c0                	test   %al,%al
 85dc354:	74 07                	je     85dc35d <_ZN8PvP_Room26insert_timer_recv_pvp_rankEv+0x1d>
 85dc356:	b8 01 00 00 00       	mov    $0x1,%eax
 85dc35b:	eb 66                	jmp    85dc3c3 <_ZN8PvP_Room26insert_timer_recv_pvp_rankEv+0x83>
 85dc35d:	c7 44 24 04 3c 00 00 	movl   $0x3c,0x4(%esp)
 85dc364:	00 
 85dc365:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc368:	89 04 24             	mov    %eax,(%esp)
 85dc36b:	e8 20 ca f8 ff       	call   8568d90 <_ZN8PvP_Room13gen_timer_keyE13TIMER_MESSAGE>
 85dc370:	89 c3                	mov    %eax,%ebx
 85dc372:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc375:	8b 30                	mov    (%eax),%esi
 85dc377:	e8 00 a1 b1 ff       	call   80f647c <_Z12G_TimerQueuev>
 85dc37c:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85dc383:	00 
 85dc384:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 85dc388:	c7 44 24 10 10 27 00 	movl   $0x2710,0x10(%esp)
 85dc38f:	00 
 85dc390:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85dc397:	00 
 85dc398:	c7 44 24 0c 3c 00 00 	movl   $0x3c,0xc(%esp)
 85dc39f:	00 
 85dc3a0:	89 74 24 08          	mov    %esi,0x8(%esp)
 85dc3a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dc3ab:	00 
 85dc3ac:	89 04 24             	mov    %eax,(%esp)
 85dc3af:	e8 ac 4a 05 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 85dc3b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc3b7:	c6 80 16 06 00 00 01 	movb   $0x1,0x616(%eax)
 85dc3be:	b8 01 00 00 00       	mov    $0x1,%eax
 85dc3c3:	83 c4 20             	add    $0x20,%esp
 85dc3c6:	5b                   	pop    %ebx
 85dc3c7:	5e                   	pop    %esi
 85dc3c8:	5d                   	pop    %ebp
 85dc3c9:	c3                   	ret

```

```c
// PvP_Room::insert_timer_recv_pvp_rank @ 0x85dc340

/* PvP_Room::insert_timer_recv_pvp_rank() */

undefined4 __thiscall PvP_Room::insert_timer_recv_pvp_rank(PvP_Room *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (this[0x616] == (PvP_Room)0x0) {
    uVar2 = gen_timer_key(this,0x3c);
    uVar1 = *(undefined4 *)this;
    uVar3 = G_TimerQueue();
    TimerQueue::InsertTimerInMilisecond(uVar3,1,uVar1,0x3c,10000,0,uVar2,0);
    this[0x616] = (PvP_Room)0x1;
  }
  return 1;
}

```

---

## is_closeable_seat_state

```asm
// === 085d7726 PvP_Room::is_closeable_seat_state  [0x085d7726-0x85d77bf] ===
 85d7726:	55                   	push   %ebp
 85d7727:	89 e5                	mov    %esp,%ebp
 85d7729:	83 ec 28             	sub    $0x28,%esp
 85d772c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d7733:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d773a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d7741:	eb 58                	jmp    85d779b <_ZN8PvP_Room23is_closeable_seat_stateEv+0x75>
 85d7743:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d7746:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7749:	83 c2 0c             	add    $0xc,%edx
 85d774c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d774f:	85 c0                	test   %eax,%eax
 85d7751:	74 20                	je     85d7773 <_ZN8PvP_Room23is_closeable_seat_stateEv+0x4d>
 85d7753:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d7756:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d775a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d775d:	89 04 24             	mov    %eax,(%esp)
 85d7760:	e8 e1 28 00 00       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85d7765:	83 f0 01             	xor    $0x1,%eax
 85d7768:	84 c0                	test   %al,%al
 85d776a:	74 07                	je     85d7773 <_ZN8PvP_Room23is_closeable_seat_stateEv+0x4d>
 85d776c:	b8 01 00 00 00       	mov    $0x1,%eax
 85d7771:	eb 05                	jmp    85d7778 <_ZN8PvP_Room23is_closeable_seat_stateEv+0x52>
 85d7773:	b8 00 00 00 00       	mov    $0x0,%eax
 85d7778:	84 c0                	test   %al,%al
 85d777a:	74 04                	je     85d7780 <_ZN8PvP_Room23is_closeable_seat_stateEv+0x5a>
 85d777c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d7780:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d7783:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7786:	83 c2 14             	add    $0x14,%edx
 85d7789:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d778c:	3d ff 00 00 00       	cmp    $0xff,%eax
 85d7791:	75 04                	jne    85d7797 <_ZN8PvP_Room23is_closeable_seat_stateEv+0x71>
 85d7793:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d7797:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d779b:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d779f:	0f 9e c0             	setle  %al
 85d77a2:	84 c0                	test   %al,%al
 85d77a4:	75 9d                	jne    85d7743 <_ZN8PvP_Room23is_closeable_seat_stateEv+0x1d>
 85d77a6:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 85d77aa:	75 0d                	jne    85d77b9 <_ZN8PvP_Room23is_closeable_seat_stateEv+0x93>
 85d77ac:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 85d77b0:	7f 07                	jg     85d77b9 <_ZN8PvP_Room23is_closeable_seat_stateEv+0x93>
 85d77b2:	b8 00 00 00 00       	mov    $0x0,%eax
 85d77b7:	eb 05                	jmp    85d77be <_ZN8PvP_Room23is_closeable_seat_stateEv+0x98>
 85d77b9:	b8 01 00 00 00       	mov    $0x1,%eax
 85d77be:	c9                   	leave
 85d77bf:	c3                   	ret

```

```c
// PvP_Room::is_closeable_seat_state @ 0x85d7726

/* PvP_Room::is_closeable_seat_state() */

undefined4 __thiscall PvP_Room::is_closeable_seat_state(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  do {
    if (7 < local_10) {
      if ((local_18 == 1) && (local_14 < 2)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    if (*(int *)(this + (local_10 + 0xc) * 4) == 0) {
LAB_085d7773:
      bVar1 = false;
    }
    else {
      cVar2 = IsPvpObserver(this,local_10);
      if (cVar2 == '\x01') goto LAB_085d7773;
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = local_18 + 1;
    }
    if (*(int *)(this + (local_10 + 0x14) * 4) == 0xff) {
      local_14 = local_14 + 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## is_last_win

```asm
// === 085d7d9c PvP_Room::is_last_win  [0x085d7d9c-0x85d7def] ===
 85d7d9c:	55                   	push   %ebp
 85d7d9d:	89 e5                	mov    %esp,%ebp
 85d7d9f:	83 ec 28             	sub    $0x28,%esp
 85d7da2:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d7da5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7da8:	83 c2 0c             	add    $0xc,%edx
 85d7dab:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7dae:	85 c0                	test   %eax,%eax
 85d7db0:	75 07                	jne    85d7db9 <_ZN8PvP_Room11is_last_winEi+0x1d>
 85d7db2:	b8 00 00 00 00       	mov    $0x0,%eax
 85d7db7:	eb 34                	jmp    85d7ded <_ZN8PvP_Room11is_last_winEi+0x51>
 85d7db9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d7dbc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7dbf:	83 c2 0c             	add    $0xc,%edx
 85d7dc2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7dc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7dc9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7dcc:	89 04 24             	mov    %eax,(%esp)
 85d7dcf:	e8 1a 49 00 00       	call   85dc6ee <_ZN8PvP_Room12GetTeamIndexEP5CUser>
 85d7dd4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85d7dd7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7dda:	05 68 02 00 00       	add    $0x268,%eax
 85d7ddf:	89 04 24             	mov    %eax,(%esp)
 85d7de2:	e8 bd 79 00 00       	call   85df7a4 <_ZN12PvpUserTable10GetWinTeamEv>
 85d7de7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85d7dea:	0f 94 c0             	sete   %al
 85d7ded:	c9                   	leave
 85d7dee:	c3                   	ret
 85d7def:	90                   	nop

```

```c
// PvP_Room::is_last_win @ 0x85d7d9c

/* PvP_Room::is_last_win(int) */

bool __thiscall PvP_Room::is_last_win(PvP_Room *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(this + (param_1 + 0xc) * 4) == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = GetTeamIndex(this,*(CUser **)(this + (param_1 + 0xc) * 4));
    iVar2 = PvpUserTable::GetWinTeam((PvpUserTable *)(this + 0x268));
    bVar3 = iVar2 == iVar1;
  }
  return bVar3;
}

```

---

## join_room

```asm
// === 085d6cf2 PvP_Room::join_room  [0x085d6cf2-0x85d7725] ===
 85d6cf2:	55                   	push   %ebp
 85d6cf3:	89 e5                	mov    %esp,%ebp
 85d6cf5:	57                   	push   %edi
 85d6cf6:	56                   	push   %esi
 85d6cf7:	53                   	push   %ebx
 85d6cf8:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 85d6cfe:	8b 45 14             	mov    0x14(%ebp),%eax
 85d6d01:	88 45 84             	mov    %al,-0x7c(%ebp)
 85d6d04:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6d07:	89 04 24             	mov    %eax,(%esp)
 85d6d0a:	e8 53 fb ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d6d0f:	89 c7                	mov    %eax,%edi
 85d6d11:	0f b6 45 84          	movzbl -0x7c(%ebp),%eax
 85d6d15:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 85d6d1b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6d1e:	8b 40 04             	mov    0x4(%eax),%eax
 85d6d21:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 85d6d27:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6d2a:	8b 00                	mov    (%eax),%eax
 85d6d2c:	89 45 80             	mov    %eax,-0x80(%ebp)
 85d6d2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6d32:	89 04 24             	mov    %eax,(%esp)
 85d6d35:	e8 ee a2 b2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85d6d3a:	89 c6                	mov    %eax,%esi
 85d6d3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6d3f:	89 04 24             	mov    %eax,(%esp)
 85d6d42:	e8 2b a3 b2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85d6d47:	89 c3                	mov    %eax,%ebx
 85d6d49:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85d6d50:	00 
 85d6d51:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d6d58:	00 
 85d6d59:	c7 44 24 08 a8 04 00 	movl   $0x4a8,0x8(%esp)
 85d6d60:	00 
 85d6d61:	c7 44 24 04 a0 26 cc 	movl   $0x8cc26a0,0x4(%esp)
 85d6d68:	08 
 85d6d69:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85d6d6c:	89 04 24             	mov    %eax,(%esp)
 85d6d6f:	e8 c8 8f f7 ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85d6d74:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 85d6d78:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 85d6d7e:	89 44 24 18          	mov    %eax,0x18(%esp)
 85d6d82:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 85d6d88:	89 44 24 14          	mov    %eax,0x14(%esp)
 85d6d8c:	8b 45 80             	mov    -0x80(%ebp),%eax
 85d6d8f:	89 44 24 10          	mov    %eax,0x10(%esp)
 85d6d93:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85d6d97:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d6d9b:	c7 44 24 04 c0 0f cc 	movl   $0x8cc0fc0,0x4(%esp)
 85d6da2:	08 
 85d6da3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85d6da6:	89 04 24             	mov    %eax,(%esp)
 85d6da9:	e8 b6 8f f7 ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 85d6dae:	e8 f4 35 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d6db3:	89 04 24             	mov    %eax,(%esp)
 85d6db6:	e8 65 fd b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d6dbb:	83 f8 0f             	cmp    $0xf,%eax
 85d6dbe:	74 12                	je     85d6dd2 <_ZN8PvP_Room9join_roomEP5CUserRib+0xe0>
 85d6dc0:	e8 e2 35 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d6dc5:	89 04 24             	mov    %eax,(%esp)
 85d6dc8:	e8 53 fd b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d6dcd:	83 f8 10             	cmp    $0x10,%eax
 85d6dd0:	75 07                	jne    85d6dd9 <_ZN8PvP_Room9join_roomEP5CUserRib+0xe7>
 85d6dd2:	b8 01 00 00 00       	mov    $0x1,%eax
 85d6dd7:	eb 05                	jmp    85d6dde <_ZN8PvP_Room9join_roomEP5CUserRib+0xec>
 85d6dd9:	b8 00 00 00 00       	mov    $0x0,%eax
 85d6dde:	84 c0                	test   %al,%al
 85d6de0:	74 7e                	je     85d6e60 <_ZN8PvP_Room9join_roomEP5CUserRib+0x16e>
 85d6de2:	e8 b4 53 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d6de7:	89 04 24             	mov    %eax,(%esp)
 85d6dea:	e8 6b 48 c5 ff       	call   822b65a <_ZN12CDataManager21GetMaxGradePvPChannelEv>
 85d6def:	89 c3                	mov    %eax,%ebx
 85d6df1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6df4:	89 04 24             	mov    %eax,(%esp)
 85d6df7:	e8 4e 80 bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85d6dfc:	39 c3                	cmp    %eax,%ebx
 85d6dfe:	0f 9c c0             	setl   %al
 85d6e01:	84 c0                	test   %al,%al
 85d6e03:	74 0a                	je     85d6e0f <_ZN8PvP_Room9join_roomEP5CUserRib+0x11d>
 85d6e05:	bb 0d 00 00 00       	mov    $0xd,%ebx
 85d6e0a:	e9 0a 09 00 00       	jmp    85d7719 <_ZN8PvP_Room9join_roomEP5CUserRib+0xa27>
 85d6e0f:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 85d6e16:	00 
 85d6e17:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6e1a:	89 04 24             	mov    %eax,(%esp)
 85d6e1d:	e8 62 67 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85d6e22:	89 04 24             	mov    %eax,(%esp)
 85d6e25:	e8 3a e1 c5 ff       	call   8234f64 <_ZNK8fair_pvp13CFairPvPScore11GetGiveItemEv>
 85d6e2a:	89 c6                	mov    %eax,%esi
 85d6e2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6e2f:	89 04 24             	mov    %eax,(%esp)
 85d6e32:	e8 13 80 bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85d6e37:	89 c3                	mov    %eax,%ebx
 85d6e39:	e8 5d 53 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d6e3e:	83 c0 68             	add    $0x68,%eax
 85d6e41:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d6e45:	89 04 24             	mov    %eax,(%esp)
 85d6e48:	e8 af 3f c5 ff       	call   822adfc <_ZN21ServerParameterScript17get_pvp_item_giveEi>
 85d6e4d:	39 c6                	cmp    %eax,%esi
 85d6e4f:	0f 9e c0             	setle  %al
 85d6e52:	84 c0                	test   %al,%al
 85d6e54:	74 0a                	je     85d6e60 <_ZN8PvP_Room9join_roomEP5CUserRib+0x16e>
 85d6e56:	bb 07 00 00 00       	mov    $0x7,%ebx
 85d6e5b:	e9 b9 08 00 00       	jmp    85d7719 <_ZN8PvP_Room9join_roomEP5CUserRib+0xa27>
 85d6e60:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d6e63:	89 04 24             	mov    %eax,(%esp)
 85d6e66:	e8 c7 95 b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d6e6b:	85 c0                	test   %eax,%eax
 85d6e6d:	0f 94 c0             	sete   %al
 85d6e70:	84 c0                	test   %al,%al
 85d6e72:	74 0a                	je     85d6e7e <_ZN8PvP_Room9join_roomEP5CUserRib+0x18c>
 85d6e74:	bb 13 00 00 00       	mov    $0x13,%ebx
 85d6e79:	e9 9b 08 00 00       	jmp    85d7719 <_ZN8PvP_Room9join_roomEP5CUserRib+0xa27>
 85d6e7e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6e81:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85d6e87:	83 f8 02             	cmp    $0x2,%eax
 85d6e8a:	75 0a                	jne    85d6e96 <_ZN8PvP_Room9join_roomEP5CUserRib+0x1a4>
 85d6e8c:	bb 13 00 00 00       	mov    $0x13,%ebx
 85d6e91:	e9 83 08 00 00       	jmp    85d7719 <_ZN8PvP_Room9join_roomEP5CUserRib+0xa27>
 85d6e96:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6e99:	89 04 24             	mov    %eax,(%esp)
 85d6e9c:	e8 c1 f9 ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d6ea1:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85d6ea4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d6ea7:	89 04 24             	mov    %eax,(%esp)
 85d6eaa:	e8 9d 6e fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d6eaf:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d6eb2:	89 04 24             	mov    %eax,(%esp)
 85d6eb5:	e8 92 6e fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d6eba:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85d6ec1:	00 
 85d6ec2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d6ec9:	00 
 85d6eca:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d6ecd:	89 04 24             	mov    %eax,(%esp)
 85d6ed0:	e8 27 4a af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d6ed5:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 85d6edc:	00 
 85d6edd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d6ee4:	00 
 85d6ee5:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d6ee8:	89 04 24             	mov    %eax,(%esp)
 85d6eeb:	e8 0c 4a af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d6ef0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d6ef7:	00 
 85d6ef8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d6efb:	89 04 24             	mov    %eax,(%esp)
 85d6efe:	e8 1d 4a af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d6f03:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85d6f06:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6f0a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d6f0d:	89 04 24             	mov    %eax,(%esp)
 85d6f10:	e8 8f 2f b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d6f15:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85d6f18:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6f1c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d6f1f:	89 04 24             	mov    %eax,(%esp)
 85d6f22:	e8 f9 49 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d6f27:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 85d6f2e:	e9 ae 01 00 00       	jmp    85d70e1 <_ZN8PvP_Room9join_roomEP5CUserRib+0x3ef>
 85d6f33:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d6f36:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6f39:	83 c2 0c             	add    $0xc,%edx
 85d6f3c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6f3f:	85 c0                	test   %eax,%eax
 85d6f41:	0f 84 96 01 00 00    	je     85d70dd <_ZN8PvP_Room9join_roomEP5CUserRib+0x3eb>
 85d6f47:	8d 55 a0             	lea    -0x60(%ebp),%edx
 85d6f4a:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 85d6f4d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6f50:	83 c1 0c             	add    $0xc,%ecx
 85d6f53:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 85d6f56:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85d6f5d:	00 
 85d6f5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d6f62:	89 04 24             	mov    %eax,(%esp)
 85d6f65:	e8 e4 34 08 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 85d6f6a:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d6f6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6f70:	83 c2 0c             	add    $0xc,%edx
 85d6f73:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6f76:	89 04 24             	mov    %eax,(%esp)
 85d6f79:	e8 fe 33 b0 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85d6f7e:	0f b7 c0             	movzwl %ax,%eax
 85d6f81:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6f85:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d6f88:	89 04 24             	mov    %eax,(%esp)
 85d6f8b:	e8 14 2f b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d6f90:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d6f93:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6f96:	83 c2 0c             	add    $0xc,%edx
 85d6f99:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6f9c:	05 e0 00 00 00       	add    $0xe0,%eax
 85d6fa1:	89 04 24             	mov    %eax,(%esp)
 85d6fa4:	e8 2f ac d1 ff       	call   82f1bd8 <_ZN8CNetworkILi4096ELi450000EE12get_inner_ipEv>
 85d6fa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6fad:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d6fb0:	89 04 24             	mov    %eax,(%esp)
 85d6fb3:	e8 84 49 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d6fb8:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d6fbb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6fbe:	83 c2 0c             	add    $0xc,%edx
 85d6fc1:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6fc4:	05 e0 00 00 00       	add    $0xe0,%eax
 85d6fc9:	89 04 24             	mov    %eax,(%esp)
 85d6fcc:	e8 15 ac d1 ff       	call   82f1be6 <_ZN8CNetworkILi4096ELi450000EE6get_ipEv>
 85d6fd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d6fd5:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d6fd8:	89 04 24             	mov    %eax,(%esp)
 85d6fdb:	e8 5c 49 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d6fe0:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d6fe3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6fe6:	83 c2 0c             	add    $0xc,%edx
 85d6fe9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d6fec:	05 e0 00 00 00       	add    $0xe0,%eax
 85d6ff1:	89 04 24             	mov    %eax,(%esp)
 85d6ff4:	e8 fb ab d1 ff       	call   82f1bf4 <_ZN8CNetworkILi4096ELi450000EE8get_portEv>
 85d6ff9:	0f b7 c0             	movzwl %ax,%eax
 85d6ffc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7000:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7003:	89 04 24             	mov    %eax,(%esp)
 85d7006:	e8 99 2e b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d700b:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d700e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7011:	83 c2 0c             	add    $0xc,%edx
 85d7014:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7017:	89 04 24             	mov    %eax,(%esp)
 85d701a:	e8 4f 33 b0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85d701f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7023:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7026:	89 04 24             	mov    %eax,(%esp)
 85d7029:	e8 0e 49 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d702e:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d7031:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7034:	83 c2 0c             	add    $0xc,%edx
 85d7037:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d703a:	05 e0 00 00 00       	add    $0xe0,%eax
 85d703f:	89 04 24             	mov    %eax,(%esp)
 85d7042:	e8 99 fd c5 ff       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 85d7047:	0f be c0             	movsbl %al,%eax
 85d704a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d704e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7051:	89 04 24             	mov    %eax,(%esp)
 85d7054:	e8 c7 48 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d7059:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d705c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d705f:	83 c2 0c             	add    $0xc,%edx
 85d7062:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7065:	05 e0 00 00 00       	add    $0xe0,%eax
 85d706a:	89 04 24             	mov    %eax,(%esp)
 85d706d:	e8 92 ab d1 ff       	call   82f1c04 <_ZN8CNetworkILi4096ELi450000EE7get_mtuEv>
 85d7072:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7076:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7079:	89 04 24             	mov    %eax,(%esp)
 85d707c:	e8 bb 48 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d7081:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d7084:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7087:	83 c2 0c             	add    $0xc,%edx
 85d708a:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d708d:	89 04 24             	mov    %eax,(%esp)
 85d7090:	e8 9d 93 b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d7095:	85 c0                	test   %eax,%eax
 85d7097:	0f 95 c0             	setne  %al
 85d709a:	84 c0                	test   %al,%al
 85d709c:	74 2c                	je     85d70ca <_ZN8PvP_Room9join_roomEP5CUserRib+0x3d8>
 85d709e:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85d70a1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d70a4:	83 c2 0c             	add    $0xc,%edx
 85d70a7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d70aa:	89 04 24             	mov    %eax,(%esp)
 85d70ad:	e8 80 93 b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d70b2:	0f b6 40 75          	movzbl 0x75(%eax),%eax
 85d70b6:	0f b6 c0             	movzbl %al,%eax
 85d70b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d70bd:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d70c0:	89 04 24             	mov    %eax,(%esp)
 85d70c3:	e8 58 48 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d70c8:	eb 13                	jmp    85d70dd <_ZN8PvP_Room9join_roomEP5CUserRib+0x3eb>
 85d70ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d70d1:	00 
 85d70d2:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d70d5:	89 04 24             	mov    %eax,(%esp)
 85d70d8:	e8 43 48 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d70dd:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 85d70e1:	83 7d c8 07          	cmpl   $0x7,-0x38(%ebp)
 85d70e5:	0f 9e c0             	setle  %al
 85d70e8:	84 c0                	test   %al,%al
 85d70ea:	0f 85 43 fe ff ff    	jne    85d6f33 <_ZN8PvP_Room9join_roomEP5CUserRib+0x241>
 85d70f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d70f3:	89 04 24             	mov    %eax,(%esp)
 85d70f6:	e8 45 88 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d70fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d7102:	00 
 85d7103:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d7106:	89 04 24             	mov    %eax,(%esp)
 85d7109:	e8 4a 48 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d710e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d7115:	00 
 85d7116:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7119:	89 04 24             	mov    %eax,(%esp)
 85d711c:	e8 37 48 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d7121:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7124:	89 04 24             	mov    %eax,(%esp)
 85d7127:	e8 0e 88 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d712c:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 85d7133:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7136:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d713c:	8b 00                	mov    (%eax),%eax
 85d713e:	83 c0 70             	add    $0x70,%eax
 85d7141:	8b 08                	mov    (%eax),%ecx
 85d7143:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7146:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d714c:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d714f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d7153:	8b 55 08             	mov    0x8(%ebp),%edx
 85d7156:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d715a:	89 04 24             	mov    %eax,(%esp)
 85d715d:	ff d1                	call   *%ecx
 85d715f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85d7162:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 85d7166:	0f 95 c0             	setne  %al
 85d7169:	84 c0                	test   %al,%al
 85d716b:	74 13                	je     85d7180 <_ZN8PvP_Room9join_roomEP5CUserRib+0x48e>
 85d716d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7170:	89 04 24             	mov    %eax,(%esp)
 85d7173:	e8 c8 87 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d7178:	8b 5d c0             	mov    -0x40(%ebp),%ebx
 85d717b:	e9 66 05 00 00       	jmp    85d76e6 <_ZN8PvP_Room9join_roomEP5CUserRib+0x9f4>
 85d7180:	c7 45 c4 ff ff ff ff 	movl   $0xffffffff,-0x3c(%ebp)
 85d7187:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 85d718e:	eb 5b                	jmp    85d71eb <_ZN8PvP_Room9join_roomEP5CUserRib+0x4f9>
 85d7190:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85d7193:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7196:	83 c2 0c             	add    $0xc,%edx
 85d7199:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d719c:	85 c0                	test   %eax,%eax
 85d719e:	75 47                	jne    85d71e7 <_ZN8PvP_Room9join_roomEP5CUserRib+0x4f5>
 85d71a0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85d71a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d71a6:	83 c2 14             	add    $0x14,%edx
 85d71a9:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d71ac:	3d ff 00 00 00       	cmp    $0xff,%eax
 85d71b1:	75 34                	jne    85d71e7 <_ZN8PvP_Room9join_roomEP5CUserRib+0x4f5>
 85d71b3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85d71b6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85d71b9:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85d71bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d71bf:	8d 4a 0c             	lea    0xc(%edx),%ecx
 85d71c2:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d71c5:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d71c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d71cb:	8b 00                	mov    (%eax),%eax
 85d71cd:	98                   	cwtl
 85d71ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d71d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d71d5:	89 04 24             	mov    %eax,(%esp)
 85d71d8:	e8 d5 87 00 00       	call   85df9b2 <_ZN5CUser11SetPvpIndexEs>
 85d71dd:	8b 45 10             	mov    0x10(%ebp),%eax
 85d71e0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85d71e3:	89 10                	mov    %edx,(%eax)
 85d71e5:	eb 0f                	jmp    85d71f6 <_ZN8PvP_Room9join_roomEP5CUserRib+0x504>
 85d71e7:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 85d71eb:	83 7d cc 07          	cmpl   $0x7,-0x34(%ebp)
 85d71ef:	0f 9e c0             	setle  %al
 85d71f2:	84 c0                	test   %al,%al
 85d71f4:	75 9a                	jne    85d7190 <_ZN8PvP_Room9join_roomEP5CUserRib+0x49e>
 85d71f6:	83 7d c4 ff          	cmpl   $0xffffffff,-0x3c(%ebp)
 85d71fa:	75 15                	jne    85d7211 <_ZN8PvP_Room9join_roomEP5CUserRib+0x51f>
 85d71fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d71ff:	89 04 24             	mov    %eax,(%esp)
 85d7202:	e8 39 87 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d7207:	bb 04 00 00 00       	mov    $0x4,%ebx
 85d720c:	e9 d5 04 00 00       	jmp    85d76e6 <_ZN8PvP_Room9join_roomEP5CUserRib+0x9f4>
 85d7211:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d7214:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7218:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d721b:	89 04 24             	mov    %eax,(%esp)
 85d721e:	e8 97 13 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d7223:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7226:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d722a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d722d:	89 04 24             	mov    %eax,(%esp)
 85d7230:	e8 85 13 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d7235:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7238:	8b 40 04             	mov    0x4(%eax),%eax
 85d723b:	83 f8 01             	cmp    $0x1,%eax
 85d723e:	75 35                	jne    85d7275 <_ZN8PvP_Room9join_roomEP5CUserRib+0x583>
 85d7240:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85d7243:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7246:	83 c2 14             	add    $0x14,%edx
 85d7249:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d7250:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7253:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d7259:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d7260:	00 
 85d7261:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85d7264:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7268:	89 14 24             	mov    %edx,(%esp)
 85d726b:	e8 ea 6e 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d7270:	e9 35 01 00 00       	jmp    85d73aa <_ZN8PvP_Room9join_roomEP5CUserRib+0x6b8>
 85d7275:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7278:	8b 40 04             	mov    0x4(%eax),%eax
 85d727b:	83 f8 04             	cmp    $0x4,%eax
 85d727e:	75 15                	jne    85d7295 <_ZN8PvP_Room9join_roomEP5CUserRib+0x5a3>
 85d7280:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85d7283:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7286:	83 c2 14             	add    $0x14,%edx
 85d7289:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d7290:	e9 15 01 00 00       	jmp    85d73aa <_ZN8PvP_Room9join_roomEP5CUserRib+0x6b8>
 85d7295:	80 7d 84 00          	cmpb   $0x0,-0x7c(%ebp)
 85d7299:	74 3a                	je     85d72d5 <_ZN8PvP_Room9join_roomEP5CUserRib+0x5e3>
 85d729b:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 85d72a2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85d72a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d72a8:	8d 4a 14             	lea    0x14(%edx),%ecx
 85d72ab:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85d72ae:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d72b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d72b4:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d72ba:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85d72bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d72c1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85d72c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d72c8:	89 14 24             	mov    %edx,(%esp)
 85d72cb:	e8 8a 6e 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d72d0:	e9 d5 00 00 00       	jmp    85d73aa <_ZN8PvP_Room9join_roomEP5CUserRib+0x6b8>
 85d72d5:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 85d72dc:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 85d72e3:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 85d72ea:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85d72f1:	eb 3c                	jmp    85d732f <_ZN8PvP_Room9join_roomEP5CUserRib+0x63d>
 85d72f3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85d72f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d72f9:	83 c2 14             	add    $0x14,%edx
 85d72fc:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d72ff:	85 c0                	test   %eax,%eax
 85d7301:	7e 28                	jle    85d732b <_ZN8PvP_Room9join_roomEP5CUserRib+0x639>
 85d7303:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85d7306:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7309:	83 c2 14             	add    $0x14,%edx
 85d730c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d730f:	83 f8 02             	cmp    $0x2,%eax
 85d7312:	7f 17                	jg     85d732b <_ZN8PvP_Room9join_roomEP5CUserRib+0x639>
 85d7314:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85d7317:	8b 45 08             	mov    0x8(%ebp),%eax
 85d731a:	83 c2 14             	add    $0x14,%edx
 85d731d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7320:	8b 54 85 88          	mov    -0x78(%ebp,%eax,4),%edx
 85d7324:	83 c2 01             	add    $0x1,%edx
 85d7327:	89 54 85 88          	mov    %edx,-0x78(%ebp,%eax,4)
 85d732b:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85d732f:	83 7d dc 07          	cmpl   $0x7,-0x24(%ebp)
 85d7333:	0f 9e c0             	setle  %al
 85d7336:	84 c0                	test   %al,%al
 85d7338:	75 b9                	jne    85d72f3 <_ZN8PvP_Room9join_roomEP5CUserRib+0x601>
 85d733a:	c7 45 d4 08 00 00 00 	movl   $0x8,-0x2c(%ebp)
 85d7341:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 85d7348:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 85d734f:	eb 20                	jmp    85d7371 <_ZN8PvP_Room9join_roomEP5CUserRib+0x67f>
 85d7351:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d7354:	8b 44 85 88          	mov    -0x78(%ebp,%eax,4),%eax
 85d7358:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 85d735b:	7f 10                	jg     85d736d <_ZN8PvP_Room9join_roomEP5CUserRib+0x67b>
 85d735d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d7360:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85d7363:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d7366:	8b 44 85 88          	mov    -0x78(%ebp,%eax,4),%eax
 85d736a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85d736d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85d7371:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 85d7375:	0f 9e c0             	setle  %al
 85d7378:	84 c0                	test   %al,%al
 85d737a:	75 d5                	jne    85d7351 <_ZN8PvP_Room9join_roomEP5CUserRib+0x65f>
 85d737c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85d737f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7382:	8d 4a 14             	lea    0x14(%edx),%ecx
 85d7385:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85d7388:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d738b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d738e:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d7394:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d7397:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d739b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85d739e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d73a2:	89 14 24             	mov    %edx,(%esp)
 85d73a5:	e8 b0 6d 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d73aa:	8b 45 08             	mov    0x8(%ebp),%eax
 85d73ad:	89 04 24             	mov    %eax,(%esp)
 85d73b0:	e8 8b 85 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d73b5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d73b8:	89 04 24             	mov    %eax,(%esp)
 85d73bb:	e8 26 45 af ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85d73c0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85d73c7:	00 
 85d73c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d73cf:	00 
 85d73d0:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d73d3:	89 04 24             	mov    %eax,(%esp)
 85d73d6:	e8 21 45 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d73db:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d73e2:	00 
 85d73e3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d73e6:	89 04 24             	mov    %eax,(%esp)
 85d73e9:	e8 32 45 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d73ee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d73f5:	00 
 85d73f6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d73f9:	89 04 24             	mov    %eax,(%esp)
 85d73fc:	e8 a3 2a b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d7401:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d7404:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85d740b:	00 
 85d740c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7410:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7413:	89 04 24             	mov    %eax,(%esp)
 85d7416:	e8 33 30 08 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 85d741b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d7422:	00 
 85d7423:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d7426:	89 04 24             	mov    %eax,(%esp)
 85d7429:	e8 2a 45 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d742e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d7431:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7435:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7438:	89 04 24             	mov    %eax,(%esp)
 85d743b:	e8 d8 49 00 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85d7440:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7443:	89 04 24             	mov    %eax,(%esp)
 85d7446:	e8 9b 44 af ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85d744b:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 85d7452:	00 
 85d7453:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d745a:	00 
 85d745b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d745e:	89 04 24             	mov    %eax,(%esp)
 85d7461:	e8 96 44 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d7466:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d746d:	00 
 85d746e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7471:	89 04 24             	mov    %eax,(%esp)
 85d7474:	e8 a7 44 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d7479:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d747c:	89 04 24             	mov    %eax,(%esp)
 85d747f:	e8 f8 2e b0 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85d7484:	0f b7 c0             	movzwl %ax,%eax
 85d7487:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d748b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d748e:	89 04 24             	mov    %eax,(%esp)
 85d7491:	e8 0e 2a b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d7496:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7499:	05 e0 00 00 00       	add    $0xe0,%eax
 85d749e:	89 04 24             	mov    %eax,(%esp)
 85d74a1:	e8 32 a7 d1 ff       	call   82f1bd8 <_ZN8CNetworkILi4096ELi450000EE12get_inner_ipEv>
 85d74a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d74aa:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d74ad:	89 04 24             	mov    %eax,(%esp)
 85d74b0:	e8 87 44 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d74b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d74b8:	05 e0 00 00 00       	add    $0xe0,%eax
 85d74bd:	89 04 24             	mov    %eax,(%esp)
 85d74c0:	e8 21 a7 d1 ff       	call   82f1be6 <_ZN8CNetworkILi4096ELi450000EE6get_ipEv>
 85d74c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d74c9:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d74cc:	89 04 24             	mov    %eax,(%esp)
 85d74cf:	e8 68 44 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d74d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d74d7:	05 e0 00 00 00       	add    $0xe0,%eax
 85d74dc:	89 04 24             	mov    %eax,(%esp)
 85d74df:	e8 10 a7 d1 ff       	call   82f1bf4 <_ZN8CNetworkILi4096ELi450000EE8get_portEv>
 85d74e4:	0f b7 c0             	movzwl %ax,%eax
 85d74e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d74eb:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d74ee:	89 04 24             	mov    %eax,(%esp)
 85d74f1:	e8 ae 29 b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d74f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d74f9:	89 04 24             	mov    %eax,(%esp)
 85d74fc:	e8 6d 2e b0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85d7501:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7505:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7508:	89 04 24             	mov    %eax,(%esp)
 85d750b:	e8 2c 44 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d7510:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7513:	05 e0 00 00 00       	add    $0xe0,%eax
 85d7518:	89 04 24             	mov    %eax,(%esp)
 85d751b:	e8 c0 f8 c5 ff       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 85d7520:	0f be c0             	movsbl %al,%eax
 85d7523:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7527:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d752a:	89 04 24             	mov    %eax,(%esp)
 85d752d:	e8 ee 43 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d7532:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7535:	05 e0 00 00 00       	add    $0xe0,%eax
 85d753a:	89 04 24             	mov    %eax,(%esp)
 85d753d:	e8 c2 a6 d1 ff       	call   82f1c04 <_ZN8CNetworkILi4096ELi450000EE7get_mtuEv>
 85d7542:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7546:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7549:	89 04 24             	mov    %eax,(%esp)
 85d754c:	e8 eb 43 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d7551:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7554:	89 04 24             	mov    %eax,(%esp)
 85d7557:	e8 d6 8e b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d755c:	85 c0                	test   %eax,%eax
 85d755e:	0f 95 c0             	setne  %al
 85d7561:	84 c0                	test   %al,%al
 85d7563:	74 23                	je     85d7588 <_ZN8PvP_Room9join_roomEP5CUserRib+0x896>
 85d7565:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7568:	89 04 24             	mov    %eax,(%esp)
 85d756b:	e8 c2 8e b4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85d7570:	0f b6 40 75          	movzbl 0x75(%eax),%eax
 85d7574:	0f b6 c0             	movzbl %al,%eax
 85d7577:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d757b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d757e:	89 04 24             	mov    %eax,(%esp)
 85d7581:	e8 9a 43 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d7586:	eb 13                	jmp    85d759b <_ZN8PvP_Room9join_roomEP5CUserRib+0x8a9>
 85d7588:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d758f:	00 
 85d7590:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d7593:	89 04 24             	mov    %eax,(%esp)
 85d7596:	e8 85 43 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d759b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d75a2:	00 
 85d75a3:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d75a6:	89 04 24             	mov    %eax,(%esp)
 85d75a9:	e8 aa 43 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d75ae:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d75b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d75b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d75b8:	89 04 24             	mov    %eax,(%esp)
 85d75bb:	e8 58 48 00 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85d75c0:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d75c3:	89 04 24             	mov    %eax,(%esp)
 85d75c6:	e8 1b 43 af ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85d75cb:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 85d75d2:	00 
 85d75d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d75da:	00 
 85d75db:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d75de:	89 04 24             	mov    %eax,(%esp)
 85d75e1:	e8 16 43 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d75e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d75ed:	00 
 85d75ee:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d75f1:	89 04 24             	mov    %eax,(%esp)
 85d75f4:	e8 27 43 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d75f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d75fc:	89 04 24             	mov    %eax,(%esp)
 85d75ff:	e8 36 83 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d7604:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85d760b:	eb 21                	jmp    85d762e <_ZN8PvP_Room9join_roomEP5CUserRib+0x93c>
 85d760d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d7610:	8b 55 08             	mov    0x8(%ebp),%edx
 85d7613:	0f b6 44 02 70       	movzbl 0x70(%edx,%eax,1),%eax
 85d7618:	0f b6 c0             	movzbl %al,%eax
 85d761b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d761f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d7622:	89 04 24             	mov    %eax,(%esp)
 85d7625:	e8 f6 42 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d762a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85d762e:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 85d7632:	0f 9e c0             	setle  %al
 85d7635:	84 c0                	test   %al,%al
 85d7637:	75 d4                	jne    85d760d <_ZN8PvP_Room9join_roomEP5CUserRib+0x91b>
 85d7639:	8b 45 08             	mov    0x8(%ebp),%eax
 85d763c:	89 04 24             	mov    %eax,(%esp)
 85d763f:	e8 fc 82 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d7644:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d764b:	00 
 85d764c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d764f:	89 04 24             	mov    %eax,(%esp)
 85d7652:	e8 01 43 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d7657:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d765a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d765e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7661:	89 04 24             	mov    %eax,(%esp)
 85d7664:	e8 51 0f 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d7669:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d766c:	c7 80 fc 96 07 00 00 	movl   $0x0,0x796fc(%eax)
 85d7673:	00 00 00 
 85d7676:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7679:	8b 80 00 06 00 00    	mov    0x600(%eax),%eax
 85d767f:	8d 50 01             	lea    0x1(%eax),%edx
 85d7682:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7685:	89 90 00 06 00 00    	mov    %edx,0x600(%eax)
 85d768b:	8b 45 10             	mov    0x10(%ebp),%eax
 85d768e:	8b 00                	mov    (%eax),%eax
 85d7690:	8b 55 08             	mov    0x8(%ebp),%edx
 85d7693:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d7699:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d769d:	89 14 24             	mov    %edx,(%esp)
 85d76a0:	e8 39 6a 00 00       	call   85de0de <_ZN15CRelayBattleMgr10OnJoinRoomEi>
 85d76a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d76a8:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d76ae:	8b 00                	mov    (%eax),%eax
 85d76b0:	83 c0 28             	add    $0x28,%eax
 85d76b3:	8b 08                	mov    (%eax),%ecx
 85d76b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d76b8:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d76be:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d76c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d76c5:	89 04 24             	mov    %eax,(%esp)
 85d76c8:	ff d1                	call   *%ecx
 85d76ca:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d76cf:	eb 15                	jmp    85d76e6 <_ZN8PvP_Room9join_roomEP5CUserRib+0x9f4>
 85d76d1:	89 d3                	mov    %edx,%ebx
 85d76d3:	89 c6                	mov    %eax,%esi
 85d76d5:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d76d8:	89 04 24             	mov    %eax,(%esp)
 85d76db:	e8 a0 67 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d76e0:	89 f0                	mov    %esi,%eax
 85d76e2:	89 da                	mov    %ebx,%edx
 85d76e4:	eb 0d                	jmp    85d76f3 <_ZN8PvP_Room9join_roomEP5CUserRib+0xa01>
 85d76e6:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85d76e9:	89 04 24             	mov    %eax,(%esp)
 85d76ec:	e8 8f 67 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d76f1:	eb 1b                	jmp    85d770e <_ZN8PvP_Room9join_roomEP5CUserRib+0xa1c>
 85d76f3:	89 d3                	mov    %edx,%ebx
 85d76f5:	89 c6                	mov    %eax,%esi
 85d76f7:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d76fa:	89 04 24             	mov    %eax,(%esp)
 85d76fd:	e8 7e 67 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d7702:	89 f0                	mov    %esi,%eax
 85d7704:	89 da                	mov    %ebx,%edx
 85d7706:	89 04 24             	mov    %eax,(%esp)
 85d7709:	e8 42 c0 50 00       	call   8ae3750 <_Unwind_Resume>
 85d770e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85d7711:	89 04 24             	mov    %eax,(%esp)
 85d7714:	e8 67 67 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d7719:	89 d8                	mov    %ebx,%eax
 85d771b:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 85d7721:	5b                   	pop    %ebx
 85d7722:	5e                   	pop    %esi
 85d7723:	5f                   	pop    %edi
 85d7724:	5d                   	pop    %ebp
 85d7725:	c3                   	ret

```

```c
// PvP_Room::join_room @ 0x85d6cf2

/* PvP_Room::join_room(CUser*, int&, bool) */

int __thiscall PvP_Room::join_room(PvP_Room *this,CUser *param_1,int *param_2,bool param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GameWorld *pGVar8;
  int iVar9;
  CDataManager *this_00;
  int iVar10;
  CFairPvPScore *this_01;
  int iVar11;
  uint uVar12;
  int local_7c [3];
  PacketGuard local_70 [12];
  PacketGuard local_64 [12];
  CSwitchLog local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  uVar5 = get_waiter_count(this);
  uVar1 = *(undefined4 *)(this + 4);
  uVar2 = *(undefined4 *)this;
  uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar7 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog(local_58,"int PvP_Room::join_room(CUser*, int&, bool)",0x4a8,0,0);
  CSwitchLog::operator()
            (local_58,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar7,uVar6,uVar2,uVar1,(uint)param_3,uVar5)
  ;
  pGVar8 = (GameWorld *)G_GameWorld();
  iVar9 = GameWorld::GetChannelType(pGVar8);
  if (iVar9 != 0xf) {
    pGVar8 = (GameWorld *)G_GameWorld();
    iVar9 = GameWorld::GetChannelType(pGVar8);
    if (iVar9 != 0x10) {
      bVar3 = false;
      goto LAB_085d6dde;
    }
  }
  bVar3 = true;
LAB_085d6dde:
  if (bVar3) {
    this_00 = (CDataManager *)G_CDataManager();
    iVar9 = CDataManager::GetMaxGradePvPChannel(this_00);
    iVar10 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    if (iVar9 < iVar10) {
      return 0xd;
    }
    this_01 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    iVar9 = fair_pvp::CFairPvPScore::GetGiveItem(this_01);
    iVar10 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    iVar11 = G_CDataManager();
    iVar10 = ServerParameterScript::get_pvp_item_give
                       ((ServerParameterScript *)(iVar11 + 0x68),iVar10);
    if (iVar9 <= iVar10) {
      return 7;
    }
  }
  iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar9 == 0) {
    iVar9 = 0x13;
  }
  else if (*(int *)(this + 0xb8) == 2) {
    iVar9 = 0x13;
  }
  else {
    local_48 = get_waiter_count(this);
    PacketGuard::PacketGuard(local_64);
                    /* try { // try from 085d6eb5 to 085d6eb9 has its CatchHandler @ 085d76f3 */
    PacketGuard::PacketGuard(local_70);
                    /* try { // try from 085d6ed0 to 085d76c9 has its CatchHandler @ 085d76d1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,2);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_70,0,0xb);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,local_48);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,local_48);
    for (local_3c = 0; local_3c < 8; local_3c = local_3c + 1) {
      if (*(int *)(this + (local_3c + 0xc) * 4) != 0) {
        CUser::make_basic_info(*(CUser **)(this + (local_3c + 0xc) * 4),(char *)local_64,'\x01');
        uVar12 = CUser::get_unique_id(*(CUser **)(this + (local_3c + 0xc) * 4));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,uVar12 & 0xffff);
        iVar9 = CNetwork<4096,450000>::get_inner_ip
                          ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        iVar9 = CNetwork<4096,450000>::get_ip
                          ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        uVar12 = CNetwork<4096,450000>::get_port
                           ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0))
        ;
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,uVar12 & 0xffff);
        iVar9 = CUser::get_acc_id(*(CUser **)(this + (local_3c + 0xc) * 4));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        cVar4 = CNetwork<4096,450000>::get_nat_type
                          ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,(int)cVar4);
        iVar9 = CNetwork<4096,450000>::get_mtu
                          ((CNetwork<4096,450000> *)(*(int *)(this + (local_3c + 0xc) * 4) + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        iVar9 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_3c + 0xc) * 4));
        if (iVar9 == 0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,0);
        }
        else {
          iVar9 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + (local_3c + 0xc) * 4))
          ;
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,(uint)*(byte *)(iVar9 + 0x75))
          ;
        }
      }
    }
    unlock();
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_70,true);
    lock();
    local_44 = 0;
    local_44 = (**(code **)(**(int **)(this + 0x6e4) + 0x70))
                         (*(undefined4 *)(this + 0x6e4),this,param_1);
    if (local_44 == 0) {
      local_40 = -1;
      for (local_38 = 0; local_38 < 8; local_38 = local_38 + 1) {
        if ((*(int *)(this + (local_38 + 0xc) * 4) == 0) &&
           (*(int *)(this + (local_38 + 0x14) * 4) == 0xff)) {
          local_40 = local_38;
          *(CUser **)(this + (local_38 + 0xc) * 4) = param_1;
          CUser::SetPvpIndex(param_1,(short)*(undefined4 *)this);
          *param_2 = local_38;
          break;
        }
      }
      if (local_40 == -1) {
        unlock();
        iVar9 = 4;
      }
      else {
        CUser::Send(param_1,local_64);
        CUser::Send(param_1,local_70);
        if (*(int *)(this + 4) == 1) {
          *(undefined4 *)(this + (local_40 + 0x14) * 4) = 0;
          CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_40,0);
        }
        else if (*(int *)(this + 4) == 4) {
          *(undefined4 *)(this + (local_40 + 0x14) * 4) = 0;
        }
        else if (param_3) {
          local_34 = 1;
          *(undefined4 *)(this + (local_40 + 0x14) * 4) = 1;
          CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_40,1);
        }
        else {
          local_7c[0] = 0;
          local_7c[1] = 0;
          local_7c[2] = 0;
          for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
            if ((0 < *(int *)(this + (local_28 + 0x14) * 4)) &&
               (*(int *)(this + (local_28 + 0x14) * 4) < 3)) {
              local_7c[*(int *)(this + (local_28 + 0x14) * 4)] =
                   local_7c[*(int *)(this + (local_28 + 0x14) * 4)] + 1;
            }
          }
          local_30 = 8;
          local_2c = 1;
          for (local_24 = 1; local_24 < 3; local_24 = local_24 + 1) {
            if (local_7c[local_24] <= local_30) {
              local_2c = local_24;
              local_30 = local_7c[local_24];
            }
          }
          *(int *)(this + (local_40 + 0x14) * 4) = local_2c;
          CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_40,local_2c);
        }
        unlock();
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,1);
        CUser::make_basic_info(param_1,(char *)local_64,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
        send_to_pvp(this,local_64);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_70);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_70,0,0xb);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,1);
        uVar12 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,uVar12 & 0xffff);
        iVar9 = CNetwork<4096,450000>::get_inner_ip((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        iVar9 = CNetwork<4096,450000>::get_ip((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        uVar12 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_70,uVar12 & 0xffff);
        iVar9 = CUser::get_acc_id(param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        cVar4 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,(int)cVar4);
        iVar9 = CNetwork<4096,450000>::get_mtu((CNetwork<4096,450000> *)(param_1 + 0xe0));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_70,iVar9);
        iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        if (iVar9 == 0) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,0);
        }
        else {
          iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_70,(uint)*(byte *)(iVar9 + 0x75))
          ;
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_70,true);
        send_to_pvp(this,local_70);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x36);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
        lock();
        for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_64,(uint)(byte)this[local_20 + 0x70]);
        }
        unlock();
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
        CUser::Send(param_1,local_64);
        *(undefined4 *)(param_1 + 0x796fc) = 0;
        *(int *)(this + 0x600) = *(int *)(this + 0x600) + 1;
        CRelayBattleMgr::OnJoinRoom((int)(this + 0x620));
        (**(code **)(**(int **)(this + 0x6e4) + 0x28))(*(undefined4 *)(this + 0x6e4),param_1);
        iVar9 = 0;
      }
    }
    else {
      unlock();
      iVar9 = local_44;
    }
                    /* try { // try from 085d76ec to 085d76f0 has its CatchHandler @ 085d76f3 */
    PacketGuard::~PacketGuard(local_70);
    PacketGuard::~PacketGuard(local_64);
  }
  return iVar9;
}

```

---

## leave_room

```asm
// === 085d7f6c PvP_Room::leave_room  [0x085d7f6c-0x85d81cf] ===
 85d7f6c:	55                   	push   %ebp
 85d7f6d:	89 e5                	mov    %esp,%ebp
 85d7f6f:	57                   	push   %edi
 85d7f70:	56                   	push   %esi
 85d7f71:	53                   	push   %ebx
 85d7f72:	83 ec 5c             	sub    $0x5c,%esp
 85d7f75:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7f78:	89 04 24             	mov    %eax,(%esp)
 85d7f7b:	e8 e2 e8 ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d7f80:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85d7f83:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7f86:	0f b6 00             	movzbl (%eax),%eax
 85d7f89:	0f b6 c0             	movzbl %al,%eax
 85d7f8c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85d7f8f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7f92:	89 04 24             	mov    %eax,(%esp)
 85d7f95:	e8 32 5a c5 ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85d7f9a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85d7f9d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7fa0:	89 04 24             	mov    %eax,(%esp)
 85d7fa3:	e8 ec 59 c5 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85d7fa8:	89 c7                	mov    %eax,%edi
 85d7faa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7fad:	89 04 24             	mov    %eax,(%esp)
 85d7fb0:	e8 73 90 b2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85d7fb5:	89 c6                	mov    %eax,%esi
 85d7fb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7fba:	89 04 24             	mov    %eax,(%esp)
 85d7fbd:	e8 b0 90 b2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85d7fc2:	89 c3                	mov    %eax,%ebx
 85d7fc4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85d7fcb:	00 
 85d7fcc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d7fd3:	00 
 85d7fd4:	c7 44 24 08 c2 06 00 	movl   $0x6c2,0x8(%esp)
 85d7fdb:	00 
 85d7fdc:	c7 44 24 04 00 26 cc 	movl   $0x8cc2600,0x4(%esp)
 85d7fe3:	08 
 85d7fe4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d7fe7:	89 04 24             	mov    %eax,(%esp)
 85d7fea:	e8 4d 7d f7 ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85d7fef:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85d7ff2:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85d7ff6:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85d7ff9:	89 44 24 18          	mov    %eax,0x18(%esp)
 85d7ffd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85d8000:	89 44 24 14          	mov    %eax,0x14(%esp)
 85d8004:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85d8008:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85d800c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d8010:	c7 44 24 04 c0 0f cc 	movl   $0x8cc0fc0,0x4(%esp)
 85d8017:	08 
 85d8018:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d801b:	89 04 24             	mov    %eax,(%esp)
 85d801e:	e8 41 7d f7 ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 85d8023:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8026:	89 04 24             	mov    %eax,(%esp)
 85d8029:	e8 0c 79 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d802e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8031:	8b 40 28             	mov    0x28(%eax),%eax
 85d8034:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d8037:	75 11                	jne    85d804a <_ZN8PvP_Room10leave_roomEP5CUserRb+0xde>
 85d8039:	8b 45 08             	mov    0x8(%ebp),%eax
 85d803c:	89 04 24             	mov    %eax,(%esp)
 85d803f:	e8 b0 fe ff ff       	call   85d7ef4 <_ZN8PvP_Room18select_new_managerEv>
 85d8044:	8b 45 10             	mov    0x10(%ebp),%eax
 85d8047:	c6 00 01             	movb   $0x1,(%eax)
 85d804a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d804d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8051:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8054:	89 04 24             	mov    %eax,(%esp)
 85d8057:	e8 86 11 00 00       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85d805c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85d805f:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85d8063:	79 0a                	jns    85d806f <_ZN8PvP_Room10leave_roomEP5CUserRb+0x103>
 85d8065:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85d806a:	e9 59 01 00 00       	jmp    85d81c8 <_ZN8PvP_Room10leave_roomEP5CUserRb+0x25c>
 85d806f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8072:	89 04 24             	mov    %eax,(%esp)
 85d8075:	e8 cc 78 00 00       	call   85df946 <_ZN8PvP_Room9get_stateEv>
 85d807a:	83 f8 02             	cmp    $0x2,%eax
 85d807d:	0f 94 c0             	sete   %al
 85d8080:	84 c0                	test   %al,%al
 85d8082:	74 12                	je     85d8096 <_ZN8PvP_Room10leave_roomEP5CUserRb+0x12a>
 85d8084:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8087:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d808b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d808e:	89 04 24             	mov    %eax,(%esp)
 85d8091:	e8 5c 4a 00 00       	call   85dcaf2 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser>
 85d8096:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d8099:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d809d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d80a0:	89 04 24             	mov    %eax,(%esp)
 85d80a3:	e8 ca 11 00 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 85d80a8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d80ab:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85d80b2:	ff 
 85d80b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d80b6:	89 04 24             	mov    %eax,(%esp)
 85d80b9:	e8 f4 78 00 00       	call   85df9b2 <_ZN5CUser11SetPvpIndexEs>
 85d80be:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d80c1:	8b 55 08             	mov    0x8(%ebp),%edx
 85d80c4:	c6 44 02 70 00       	movb   $0x0,0x70(%edx,%eax,1)
 85d80c9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85d80cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d80cf:	83 c2 14             	add    $0x14,%edx
 85d80d2:	c7 04 90 ff 00 00 00 	movl   $0xff,(%eax,%edx,4)
 85d80d9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85d80dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d80df:	83 c2 0c             	add    $0xc,%edx
 85d80e2:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d80e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d80ec:	8b 80 00 06 00 00    	mov    0x600(%eax),%eax
 85d80f2:	8d 50 ff             	lea    -0x1(%eax),%edx
 85d80f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d80f8:	89 90 00 06 00 00    	mov    %edx,0x600(%eax)
 85d80fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d8101:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8104:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85d810b:	00 
 85d810c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d810f:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8112:	c6 84 02 d0 05 00 00 	movb   $0x0,0x5d0(%edx,%eax,1)
 85d8119:	00 
 85d811a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d811d:	89 04 24             	mov    %eax,(%esp)
 85d8120:	e8 1b 78 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d8125:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d8128:	89 04 24             	mov    %eax,(%esp)
 85d812b:	e8 2a 18 b2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85d8130:	89 04 24             	mov    %eax,(%esp)
 85d8133:	e8 48 ff b1 ff       	call   80f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>
 85d8138:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d813b:	89 04 24             	mov    %eax,(%esp)
 85d813e:	e8 17 18 b2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85d8143:	89 04 24             	mov    %eax,(%esp)
 85d8146:	e8 5b 00 b2 ff       	call   80f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>
 85d814b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d814e:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85d8154:	83 f8 02             	cmp    $0x2,%eax
 85d8157:	75 1a                	jne    85d8173 <_ZN8PvP_Room10leave_roomEP5CUserRb+0x207>
 85d8159:	8b 45 08             	mov    0x8(%ebp),%eax
 85d815c:	89 04 24             	mov    %eax,(%esp)
 85d815f:	e8 88 15 00 00       	call   85d96ec <_ZN8PvP_Room12check_winnerEv>
 85d8164:	84 c0                	test   %al,%al
 85d8166:	74 0b                	je     85d8173 <_ZN8PvP_Room10leave_roomEP5CUserRb+0x207>
 85d8168:	8b 45 08             	mov    0x8(%ebp),%eax
 85d816b:	89 04 24             	mov    %eax,(%esp)
 85d816e:	e8 0b 4c 00 00       	call   85dcd7e <_ZN8PvP_Room20pvp_request_pvp_rankEv>
 85d8173:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8176:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d817c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d817f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8183:	89 14 24             	mov    %edx,(%esp)
 85d8186:	e8 65 5f 00 00       	call   85de0f0 <_ZN15CRelayBattleMgr11OnLeaveRoomEi>
 85d818b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d818e:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d8194:	8b 00                	mov    (%eax),%eax
 85d8196:	83 c0 2c             	add    $0x2c,%eax
 85d8199:	8b 08                	mov    (%eax),%ecx
 85d819b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d819e:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d81a4:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85d81a7:	89 54 24 10          	mov    %edx,0x10(%esp)
 85d81ab:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85d81ae:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85d81b2:	8b 55 08             	mov    0x8(%ebp),%edx
 85d81b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d81b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d81bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d81c0:	89 04 24             	mov    %eax,(%esp)
 85d81c3:	ff d1                	call   *%ecx
 85d81c5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d81c8:	83 c4 5c             	add    $0x5c,%esp
 85d81cb:	5b                   	pop    %ebx
 85d81cc:	5e                   	pop    %esi
 85d81cd:	5f                   	pop    %edi
 85d81ce:	5d                   	pop    %ebp
 85d81cf:	c3                   	ret

```

```c
// PvP_Room::leave_room @ 0x85d7f6c

/* PvP_Room::leave_room(CUser*, bool&) */

int __thiscall PvP_Room::leave_room(PvP_Room *this,CUser *param_1,bool *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  CHackAnalyzer *this_00;
  CSwitchLog local_34 [16];
  int local_24;
  undefined4 local_20;
  
  uVar3 = get_waiter_count(this);
  bVar1 = *param_2;
  uVar4 = get_pvp_battle_mode(this);
  uVar5 = get_index(this);
  uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  uVar7 = CUser::get_acc_name(param_1);
  CSwitchLog::CSwitchLog(local_34,"int PvP_Room::leave_room(CUser*, bool&)",0x6c2,0,0);
  CSwitchLog::operator()
            (local_34,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar7,uVar6,uVar5,uVar4,(uint)bVar1,uVar3);
  lock();
  if (*(CUser **)(this + 0x28) == param_1) {
    select_new_manager(this);
    *param_2 = true;
  }
  local_24 = get_user_seat(this,param_1);
  if (local_24 < 0) {
    local_24 = -1;
  }
  else {
    iVar8 = get_state(this);
    if (iVar8 == 2) {
      GiveOuterPenalty(this,param_1);
    }
    local_20 = get_team(this,local_24);
    CUser::SetPvpIndex(param_1,-1);
    this[local_24 + 0x70] = (PvP_Room)0x0;
    *(undefined4 *)(this + (local_24 + 0x14) * 4) = 0xff;
    *(undefined4 *)(this + (local_24 + 0xc) * 4) = 0;
    *(int *)(this + 0x600) = *(int *)(this + 0x600) + -1;
    this[local_24 + 0x5c8] = (PvP_Room)0x0;
    this[local_24 + 0x5d0] = (PvP_Room)0x0;
    unlock();
    CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::reportHackInfo();
    this_00 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::resetHackInfo(this_00);
    if (*(int *)(this + 0xb8) == 2) {
      cVar2 = check_winner(this);
      if (cVar2 != '\0') {
        pvp_request_pvp_rank(this);
      }
    }
    CRelayBattleMgr::OnLeaveRoom((CRelayBattleMgr *)(this + 0x620),local_24);
    (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
              (*(undefined4 *)(this + 0x6e4),param_1,this,local_20,local_24);
  }
  return local_24;
}

```

---

## make_ready_info

```asm
// === 085dbcce PvP_Room::make_ready_info  [0x085dbcce-0x85dbd39] ===
 85dbcce:	55                   	push   %ebp
 85dbccf:	89 e5                	mov    %esp,%ebp
 85dbcd1:	83 ec 28             	sub    $0x28,%esp
 85dbcd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dbcd7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dbcda:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbcdd:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 85dbce4:	00 
 85dbce5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dbcec:	00 
 85dbced:	89 04 24             	mov    %eax,(%esp)
 85dbcf0:	e8 07 fc ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85dbcf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbcf8:	8b 55 10             	mov    0x10(%ebp),%edx
 85dbcfb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbcff:	89 04 24             	mov    %eax,(%esp)
 85dbd02:	e8 19 fc ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbd07:	8b 45 10             	mov    0x10(%ebp),%eax
 85dbd0a:	8b 55 08             	mov    0x8(%ebp),%edx
 85dbd0d:	0f b6 44 02 70       	movzbl 0x70(%edx,%eax,1),%eax
 85dbd12:	0f b6 d0             	movzbl %al,%edx
 85dbd15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbd18:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbd1c:	89 04 24             	mov    %eax,(%esp)
 85dbd1f:	e8 fc fb ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbd24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbd27:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dbd2e:	00 
 85dbd2f:	89 04 24             	mov    %eax,(%esp)
 85dbd32:	e8 21 fc ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85dbd37:	c9                   	leave
 85dbd38:	c3                   	ret
 85dbd39:	90                   	nop

```

```c
// PvP_Room::make_ready_info @ 0x85dbcce

/* PvP_Room::make_ready_info(char*, int) */

void __thiscall PvP_Room::make_ready_info(PvP_Room *this,char *param_1,int param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x2c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[param_2 + 0x70]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## make_room_info

```asm
// === 085db7f6 PvP_Room::make_room_info  [0x085db7f6-0x85db9e1] ===
 85db7f6:	55                   	push   %ebp
 85db7f7:	89 e5                	mov    %esp,%ebp
 85db7f9:	83 ec 28             	sub    $0x28,%esp
 85db7fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85db7ff:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85db802:	8b 45 08             	mov    0x8(%ebp),%eax
 85db805:	8b 10                	mov    (%eax),%edx
 85db807:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db80a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db80e:	89 04 24             	mov    %eax,(%esp)
 85db811:	e8 8e e6 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db816:	8b 45 08             	mov    0x8(%ebp),%eax
 85db819:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 85db81d:	0f be d0             	movsbl %al,%edx
 85db820:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db823:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db827:	89 04 24             	mov    %eax,(%esp)
 85db82a:	e8 f1 00 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db82f:	8b 45 08             	mov    0x8(%ebp),%eax
 85db832:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 85db836:	84 c0                	test   %al,%al
 85db838:	75 3f                	jne    85db879 <_ZN8PvP_Room14make_room_infoEPc+0x83>
 85db83a:	8b 45 08             	mov    0x8(%ebp),%eax
 85db83d:	83 c0 09             	add    $0x9,%eax
 85db840:	89 04 24             	mov    %eax,(%esp)
 85db843:	e8 68 2b aa ff       	call   807e3b0 <strlen@plt>
 85db848:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85db84b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db84e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85db851:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db855:	89 04 24             	mov    %eax,(%esp)
 85db858:	e8 df 00 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db85d:	8b 45 08             	mov    0x8(%ebp),%eax
 85db860:	8d 48 09             	lea    0x9(%eax),%ecx
 85db863:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db866:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85db869:	89 54 24 08          	mov    %edx,0x8(%esp)
 85db86d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85db871:	89 04 24             	mov    %eax,(%esp)
 85db874:	e8 6b bb bd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 85db879:	8b 45 08             	mov    0x8(%ebp),%eax
 85db87c:	8b 90 b8 00 00 00    	mov    0xb8(%eax),%edx
 85db882:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db885:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db889:	89 04 24             	mov    %eax,(%esp)
 85db88c:	e8 8f 00 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db891:	8b 45 08             	mov    0x8(%ebp),%eax
 85db894:	8b 50 2c             	mov    0x2c(%eax),%edx
 85db897:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db89a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db89e:	89 04 24             	mov    %eax,(%esp)
 85db8a1:	e8 7a 00 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db8a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85db8a9:	0f b7 80 c4 05 00 00 	movzwl 0x5c4(%eax),%eax
 85db8b0:	0f bf d0             	movswl %ax,%edx
 85db8b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db8b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db8ba:	89 04 24             	mov    %eax,(%esp)
 85db8bd:	e8 e2 e5 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db8c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85db8c5:	8b 40 04             	mov    0x4(%eax),%eax
 85db8c8:	89 c2                	mov    %eax,%edx
 85db8ca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db8cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db8d1:	89 04 24             	mov    %eax,(%esp)
 85db8d4:	e8 47 00 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db8d9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85db8e0:	e9 a3 00 00 00       	jmp    85db988 <_ZN8PvP_Room14make_room_infoEPc+0x192>
 85db8e5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85db8e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85db8eb:	83 c2 14             	add    $0x14,%edx
 85db8ee:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85db8f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db8f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db8f8:	89 04 24             	mov    %eax,(%esp)
 85db8fb:	e8 20 00 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db900:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85db903:	8b 45 08             	mov    0x8(%ebp),%eax
 85db906:	83 c2 0c             	add    $0xc,%edx
 85db909:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db90c:	85 c0                	test   %eax,%eax
 85db90e:	74 4e                	je     85db95e <_ZN8PvP_Room14make_room_infoEPc+0x168>
 85db910:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85db913:	8b 45 08             	mov    0x8(%ebp),%eax
 85db916:	83 c2 0c             	add    $0xc,%edx
 85db919:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db91c:	89 04 24             	mov    %eax,(%esp)
 85db91f:	e8 58 ea af ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85db924:	0f b7 d0             	movzwl %ax,%edx
 85db927:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db92a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db92e:	89 04 24             	mov    %eax,(%esp)
 85db931:	e8 6e e5 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db936:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85db939:	8b 45 08             	mov    0x8(%ebp),%eax
 85db93c:	83 c2 0c             	add    $0xc,%edx
 85db93f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db942:	89 04 24             	mov    %eax,(%esp)
 85db945:	e8 ec 75 0b 00       	call   8692f36 <_ZN5CUser23isAllowLocationGeoStateEv>
 85db94a:	0f b6 d0             	movzbl %al,%edx
 85db94d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db950:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db954:	89 04 24             	mov    %eax,(%esp)
 85db957:	e8 c4 ff ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db95c:	eb 26                	jmp    85db984 <_ZN8PvP_Room14make_room_infoEPc+0x18e>
 85db95e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db961:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 85db968:	00 
 85db969:	89 04 24             	mov    %eax,(%esp)
 85db96c:	e8 33 e5 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db971:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db974:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85db97b:	00 
 85db97c:	89 04 24             	mov    %eax,(%esp)
 85db97f:	e8 9c ff ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db984:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85db988:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85db98c:	0f 9e c0             	setle  %al
 85db98f:	84 c0                	test   %al,%al
 85db991:	0f 85 4e ff ff ff    	jne    85db8e5 <_ZN8PvP_Room14make_room_infoEPc+0xef>
 85db997:	8b 45 08             	mov    0x8(%ebp),%eax
 85db99a:	0f b6 80 04 06 00 00 	movzbl 0x604(%eax),%eax
 85db9a1:	0f b6 d0             	movzbl %al,%edx
 85db9a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db9a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db9ab:	89 04 24             	mov    %eax,(%esp)
 85db9ae:	e8 6d ff ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db9b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85db9b6:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85db9bc:	8b 00                	mov    (%eax),%eax
 85db9be:	83 c0 08             	add    $0x8,%eax
 85db9c1:	8b 10                	mov    (%eax),%edx
 85db9c3:	8b 45 08             	mov    0x8(%ebp),%eax
 85db9c6:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85db9cc:	89 04 24             	mov    %eax,(%esp)
 85db9cf:	ff d2                	call   *%edx
 85db9d1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85db9d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db9d8:	89 14 24             	mov    %edx,(%esp)
 85db9db:	e8 5c ff ae ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db9e0:	c9                   	leave
 85db9e1:	c3                   	ret

```

```c
// PvP_Room::make_room_info @ 0x85db7f6

/* PvP_Room::make_room_info(char*) */

void __thiscall PvP_Room::make_room_info(PvP_Room *this,char *param_1)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  int local_10;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)this[8]);
  if (this[8] == (PvP_Room)0x0) {
    sVar1 = strlen((char *)(this + 9));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar1);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(this + 9),sVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0xb8));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x2c));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(this + 0x5c4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)param_1,*(int *)(this + (local_10 + 0x14) * 4));
    if (*(int *)(this + (local_10 + 0xc) * 4) == 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    }
    else {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0xc) * 4));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
      uVar2 = CUser::isAllowLocationGeoState(*(CUser **)(this + (local_10 + 0xc) * 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[0x604]);
  iVar3 = (**(code **)(**(int **)(this + 0x6e4) + 8))(*(undefined4 *)(this + 0x6e4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar3);
  return;
}

```

---

## make_seat_info

```asm
// === 085db9e2 PvP_Room::make_seat_info  [0x085db9e2-0x85dbccd] ===
 85db9e2:	55                   	push   %ebp
 85db9e3:	89 e5                	mov    %esp,%ebp
 85db9e5:	56                   	push   %esi
 85db9e6:	53                   	push   %ebx
 85db9e7:	83 ec 40             	sub    $0x40,%esp
 85db9ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85db9ed:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85db9f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85db9f3:	c7 44 24 08 2b 00 00 	movl   $0x2b,0x8(%esp)
 85db9fa:	00 
 85db9fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dba02:	00 
 85dba03:	89 04 24             	mov    %eax,(%esp)
 85dba06:	e8 f1 fe ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85dba0b:	8b 45 08             	mov    0x8(%ebp),%eax
 85dba0e:	8b 10                	mov    (%eax),%edx
 85dba10:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dba13:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dba17:	89 04 24             	mov    %eax,(%esp)
 85dba1a:	e8 85 e4 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85dba1f:	8b 45 08             	mov    0x8(%ebp),%eax
 85dba22:	8b 40 04             	mov    0x4(%eax),%eax
 85dba25:	89 c2                	mov    %eax,%edx
 85dba27:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dba2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dba2e:	89 04 24             	mov    %eax,(%esp)
 85dba31:	e8 ea fe ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dba36:	81 7d 10 ff ff 00 00 	cmpl   $0xffff,0x10(%ebp)
 85dba3d:	0f 85 97 01 00 00    	jne    85dbbda <_ZN8PvP_Room14make_seat_infoEPci+0x1f8>
 85dba43:	8b 45 08             	mov    0x8(%ebp),%eax
 85dba46:	89 04 24             	mov    %eax,(%esp)
 85dba49:	e8 14 ae ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85dba4e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85dba51:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dba54:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dba57:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dba5b:	89 04 24             	mov    %eax,(%esp)
 85dba5e:	e8 bd fe ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dba63:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85dba67:	75 42                	jne    85dbaab <_ZN8PvP_Room14make_seat_infoEPci+0xc9>
 85dba69:	8b 45 08             	mov    0x8(%ebp),%eax
 85dba6c:	8b 90 b8 00 00 00    	mov    0xb8(%eax),%edx
 85dba72:	8b 45 08             	mov    0x8(%ebp),%eax
 85dba75:	8b 00                	mov    (%eax),%eax
 85dba77:	89 54 24 18          	mov    %edx,0x18(%esp)
 85dba7b:	89 44 24 14          	mov    %eax,0x14(%esp)
 85dba7f:	c7 44 24 10 f8 11 cc 	movl   $0x8cc11f8,0x10(%esp)
 85dba86:	08 
 85dba87:	c7 44 24 0c 66 0e 00 	movl   $0xe66,0xc(%esp)
 85dba8e:	00 
 85dba8f:	c7 44 24 08 40 24 cc 	movl   $0x8cc2440,0x8(%esp)
 85dba96:	08 
 85dba97:	c7 44 24 04 1b 12 cc 	movl   $0x8cc121b,0x4(%esp)
 85dba9e:	08 
 85dba9f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85dbaa6:	e8 5f 81 4f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85dbaab:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbaae:	89 04 24             	mov    %eax,(%esp)
 85dbab1:	e8 84 3e 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85dbab6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85dbabd:	e9 f9 00 00 00       	jmp    85dbbbb <_ZN8PvP_Room14make_seat_infoEPci+0x1d9>
 85dbac2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbac5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbac8:	83 c2 0c             	add    $0xc,%edx
 85dbacb:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbace:	85 c0                	test   %eax,%eax
 85dbad0:	0f 84 e1 00 00 00    	je     85dbbb7 <_ZN8PvP_Room14make_seat_infoEPci+0x1d5>
 85dbad6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbad9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbadc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbae0:	89 04 24             	mov    %eax,(%esp)
 85dbae3:	e8 38 fe ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbae8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbaeb:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbaee:	83 c2 14             	add    $0x14,%edx
 85dbaf1:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85dbaf4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbaf7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbafb:	89 04 24             	mov    %eax,(%esp)
 85dbafe:	e8 1d fe ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbb03:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbb06:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbb09:	83 c2 0c             	add    $0xc,%edx
 85dbb0c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbb0f:	89 04 24             	mov    %eax,(%esp)
 85dbb12:	e8 65 e8 af ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85dbb17:	0f b7 d0             	movzwl %ax,%edx
 85dbb1a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbb1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbb21:	89 04 24             	mov    %eax,(%esp)
 85dbb24:	e8 7b e3 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85dbb29:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbb2c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbb2f:	83 c2 0c             	add    $0xc,%edx
 85dbb32:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbb35:	89 04 24             	mov    %eax,(%esp)
 85dbb38:	e8 f9 73 0b 00       	call   8692f36 <_ZN5CUser23isAllowLocationGeoStateEv>
 85dbb3d:	0f b6 d0             	movzbl %al,%edx
 85dbb40:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbb43:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbb47:	89 04 24             	mov    %eax,(%esp)
 85dbb4a:	e8 d1 fd ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbb4f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbb52:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbb55:	83 c2 0c             	add    $0xc,%edx
 85dbb58:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbb5b:	89 04 24             	mov    %eax,(%esp)
 85dbb5e:	e8 19 e8 af ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85dbb63:	0f b7 f0             	movzwl %ax,%esi
 85dbb66:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbb69:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbb6c:	83 c2 14             	add    $0x14,%edx
 85dbb6f:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85dbb72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85dbb79:	00 
 85dbb7a:	c7 44 24 08 74 0e 00 	movl   $0xe74,0x8(%esp)
 85dbb81:	00 
 85dbb82:	c7 44 24 04 40 24 cc 	movl   $0x8cc2440,0x4(%esp)
 85dbb89:	08 
 85dbb8a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85dbb8d:	89 04 24             	mov    %eax,(%esp)
 85dbb90:	e8 83 3b f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85dbb95:	89 74 24 10          	mov    %esi,0x10(%esp)
 85dbb99:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85dbb9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbba0:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dbba4:	c7 44 24 04 24 12 cc 	movl   $0x8cc1224,0x4(%esp)
 85dbbab:	08 
 85dbbac:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85dbbaf:	89 04 24             	mov    %eax,(%esp)
 85dbbb2:	e8 d1 3b f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85dbbb7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85dbbbb:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85dbbbf:	0f 9e c0             	setle  %al
 85dbbc2:	84 c0                	test   %al,%al
 85dbbc4:	0f 85 f8 fe ff ff    	jne    85dbac2 <_ZN8PvP_Room14make_seat_infoEPci+0xe0>
 85dbbca:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbbcd:	89 04 24             	mov    %eax,(%esp)
 85dbbd0:	e8 6b 3d 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85dbbd5:	e9 da 00 00 00       	jmp    85dbcb4 <_ZN8PvP_Room14make_seat_infoEPci+0x2d2>
 85dbbda:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbbdd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dbbe4:	00 
 85dbbe5:	89 04 24             	mov    %eax,(%esp)
 85dbbe8:	e8 33 fd ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbbed:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbbf0:	89 04 24             	mov    %eax,(%esp)
 85dbbf3:	e8 42 3d 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85dbbf8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbbfb:	8b 55 10             	mov    0x10(%ebp),%edx
 85dbbfe:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbc02:	89 04 24             	mov    %eax,(%esp)
 85dbc05:	e8 16 fd ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbc0a:	8b 55 10             	mov    0x10(%ebp),%edx
 85dbc0d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbc10:	83 c2 14             	add    $0x14,%edx
 85dbc13:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85dbc16:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbc19:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbc1d:	89 04 24             	mov    %eax,(%esp)
 85dbc20:	e8 fb fc ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbc25:	8b 55 10             	mov    0x10(%ebp),%edx
 85dbc28:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbc2b:	83 c2 0c             	add    $0xc,%edx
 85dbc2e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbc31:	85 c0                	test   %eax,%eax
 85dbc33:	74 4e                	je     85dbc83 <_ZN8PvP_Room14make_seat_infoEPci+0x2a1>
 85dbc35:	8b 55 10             	mov    0x10(%ebp),%edx
 85dbc38:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbc3b:	83 c2 0c             	add    $0xc,%edx
 85dbc3e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbc41:	89 04 24             	mov    %eax,(%esp)
 85dbc44:	e8 33 e7 af ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85dbc49:	0f b7 d0             	movzwl %ax,%edx
 85dbc4c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbc4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbc53:	89 04 24             	mov    %eax,(%esp)
 85dbc56:	e8 49 e2 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85dbc5b:	8b 55 10             	mov    0x10(%ebp),%edx
 85dbc5e:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbc61:	83 c2 0c             	add    $0xc,%edx
 85dbc64:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbc67:	89 04 24             	mov    %eax,(%esp)
 85dbc6a:	e8 c7 72 0b 00       	call   8692f36 <_ZN5CUser23isAllowLocationGeoStateEv>
 85dbc6f:	0f b6 d0             	movzbl %al,%edx
 85dbc72:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbc75:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbc79:	89 04 24             	mov    %eax,(%esp)
 85dbc7c:	e8 9f fc ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbc81:	eb 26                	jmp    85dbca9 <_ZN8PvP_Room14make_seat_infoEPci+0x2c7>
 85dbc83:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbc86:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 85dbc8d:	00 
 85dbc8e:	89 04 24             	mov    %eax,(%esp)
 85dbc91:	e8 0e e2 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85dbc96:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbc99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dbca0:	00 
 85dbca1:	89 04 24             	mov    %eax,(%esp)
 85dbca4:	e8 77 fc ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbca9:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbcac:	89 04 24             	mov    %eax,(%esp)
 85dbcaf:	e8 8c 3c 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85dbcb4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dbcb7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dbcbe:	00 
 85dbcbf:	89 04 24             	mov    %eax,(%esp)
 85dbcc2:	e8 91 fc ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85dbcc7:	83 c4 40             	add    $0x40,%esp
 85dbcca:	5b                   	pop    %ebx
 85dbccb:	5e                   	pop    %esi
 85dbccc:	5d                   	pop    %ebp
 85dbccd:	c3                   	ret

```

```c
// PvP_Room::make_seat_info @ 0x85db9e2

/* PvP_Room::make_seat_info(char*, int) */

void __thiscall PvP_Room::make_seat_info(PvP_Room *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  cMyTrace local_28 [16];
  InterfacePacketBuf *local_18;
  int local_14;
  int local_10;
  
  local_18 = (InterfacePacketBuf *)param_1;
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x2b);
  InterfacePacketBuf::put_short(local_18,*(int *)this);
  InterfacePacketBuf::put_byte(local_18,*(int *)(this + 4));
  if (param_2 == 0xffff) {
    local_14 = get_waiter_count(this);
    InterfacePacketBuf::put_byte(local_18,local_14);
    if (local_14 == 0) {
      LogManager::logFormat
                (1,"pvp.cpp","void PvP_Room::make_seat_info(char*, int)",0xe66,
                 "Send Member 0 PvpRoom %d State(%d)",*(undefined4 *)this,
                 *(undefined4 *)(this + 0xb8));
    }
    lock();
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
        InterfacePacketBuf::put_byte(local_18,local_10);
        InterfacePacketBuf::put_byte(local_18,*(int *)(this + (local_10 + 0x14) * 4));
        uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0xc) * 4));
        InterfacePacketBuf::put_short(local_18,uVar2 & 0xffff);
        uVar2 = CUser::isAllowLocationGeoState(*(CUser **)(this + (local_10 + 0xc) * 4));
        InterfacePacketBuf::put_byte(local_18,uVar2 & 0xff);
        uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0xc) * 4));
        uVar1 = *(undefined4 *)(this + (local_10 + 0x14) * 4);
        cMyTrace::cMyTrace(local_28,"void PvP_Room::make_seat_info(char*, int)",0xe74,0);
        cMyTrace::operator()
                  (local_28,"RELAY_BATTLE SeatInfo player(%d), team(%d), uid(%d)\n",local_10,uVar1,
                   uVar2 & 0xffff);
      }
    }
    unlock();
  }
  else {
    InterfacePacketBuf::put_byte(local_18,1);
    lock();
    InterfacePacketBuf::put_byte(local_18,param_2);
    InterfacePacketBuf::put_byte(local_18,*(int *)(this + (param_2 + 0x14) * 4));
    if (*(int *)(this + (param_2 + 0xc) * 4) == 0) {
      InterfacePacketBuf::put_short(local_18,0xffff);
      InterfacePacketBuf::put_byte(local_18,0);
    }
    else {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + (param_2 + 0xc) * 4));
      InterfacePacketBuf::put_short(local_18,uVar2 & 0xffff);
      uVar2 = CUser::isAllowLocationGeoState(*(CUser **)(this + (param_2 + 0xc) * 4));
      InterfacePacketBuf::put_byte(local_18,uVar2 & 0xff);
    }
    unlock();
  }
  InterfacePacketBuf::finalize(local_18,true);
  return;
}

```

---

## make_state_info

```asm
// === 085dbd3a PvP_Room::make_state_info  [0x085dbd3a-0x85dbe17] ===
 85dbd3a:	55                   	push   %ebp
 85dbd3b:	89 e5                	mov    %esp,%ebp
 85dbd3d:	83 ec 28             	sub    $0x28,%esp
 85dbd40:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dbd43:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dbd46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbd49:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 85dbd50:	00 
 85dbd51:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dbd58:	00 
 85dbd59:	89 04 24             	mov    %eax,(%esp)
 85dbd5c:	e8 9b fb ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85dbd61:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbd64:	8b 10                	mov    (%eax),%edx
 85dbd66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbd69:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbd6d:	89 04 24             	mov    %eax,(%esp)
 85dbd70:	e8 2f e1 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85dbd75:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbd78:	8b 90 b8 00 00 00    	mov    0xb8(%eax),%edx
 85dbd7e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbd81:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbd85:	89 04 24             	mov    %eax,(%esp)
 85dbd88:	e8 93 fb ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbd8d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbd90:	8b 50 2c             	mov    0x2c(%eax),%edx
 85dbd93:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbd96:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbd9a:	89 04 24             	mov    %eax,(%esp)
 85dbd9d:	e8 7e fb ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbda2:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbda5:	0f b7 80 c4 05 00 00 	movzwl 0x5c4(%eax),%eax
 85dbdac:	0f bf d0             	movswl %ax,%edx
 85dbdaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbdb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbdb6:	89 04 24             	mov    %eax,(%esp)
 85dbdb9:	e8 e6 e0 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85dbdbe:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbdc1:	8b 40 04             	mov    0x4(%eax),%eax
 85dbdc4:	89 c2                	mov    %eax,%edx
 85dbdc6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbdc9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbdcd:	89 04 24             	mov    %eax,(%esp)
 85dbdd0:	e8 4b fb ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85dbdd5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbdd8:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dbdde:	8b 00                	mov    (%eax),%eax
 85dbde0:	83 c0 08             	add    $0x8,%eax
 85dbde3:	8b 10                	mov    (%eax),%edx
 85dbde5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbde8:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85dbdee:	89 04 24             	mov    %eax,(%esp)
 85dbdf1:	ff d2                	call   *%edx
 85dbdf3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbdf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dbdfa:	89 14 24             	mov    %edx,(%esp)
 85dbdfd:	e8 3a fb ae ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85dbe02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbe05:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dbe0c:	00 
 85dbe0d:	89 04 24             	mov    %eax,(%esp)
 85dbe10:	e8 43 fb ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85dbe15:	c9                   	leave
 85dbe16:	c3                   	ret
 85dbe17:	90                   	nop

```

```c
// PvP_Room::make_state_info @ 0x85dbd3a

/* PvP_Room::make_state_info(char*) */

void __thiscall PvP_Room::make_state_info(PvP_Room *this,char *param_1)

{
  int iVar1;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x2a);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0xb8));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x2c));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(this + 0x5c4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  iVar1 = (**(code **)(**(int **)(this + 0x6e4) + 8))(*(undefined4 *)(this + 0x6e4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}

```

---

## pvp_request_pvp_rank

```asm
// === 085dcd7e PvP_Room::pvp_request_pvp_rank  [0x085dcd7e-0x85dce27] ===
 85dcd7e:	55                   	push   %ebp
 85dcd7f:	89 e5                	mov    %esp,%ebp
 85dcd81:	56                   	push   %esi
 85dcd82:	53                   	push   %ebx
 85dcd83:	83 ec 20             	sub    $0x20,%esp
 85dcd86:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcd89:	0f b6 80 15 06 00 00 	movzbl 0x615(%eax),%eax
 85dcd90:	84 c0                	test   %al,%al
 85dcd92:	0f 85 87 00 00 00    	jne    85dce1f <_ZN8PvP_Room20pvp_request_pvp_rankEv+0xa1>
 85dcd98:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcd9b:	c6 80 15 06 00 00 01 	movb   $0x1,0x615(%eax)
 85dcda2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dcda5:	89 04 24             	mov    %eax,(%esp)
 85dcda8:	e8 9f 0f fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85dcdad:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 85dcdb4:	00 
 85dcdb5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dcdbc:	00 
 85dcdbd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dcdc0:	89 04 24             	mov    %eax,(%esp)
 85dcdc3:	e8 34 eb ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85dcdc8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85dcdcf:	00 
 85dcdd0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dcdd3:	89 04 24             	mov    %eax,(%esp)
 85dcdd6:	e8 7d eb ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85dcddb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dcdde:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dcde2:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcde5:	89 04 24             	mov    %eax,(%esp)
 85dcde8:	e8 2b f0 ff ff       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85dcded:	8b 45 08             	mov    0x8(%ebp),%eax
 85dcdf0:	c6 80 c0 00 00 00 01 	movb   $0x1,0xc0(%eax)
 85dcdf7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dcdfa:	89 04 24             	mov    %eax,(%esp)
 85dcdfd:	e8 7e 10 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dce02:	eb 1c                	jmp    85dce20 <_ZN8PvP_Room20pvp_request_pvp_rankEv+0xa2>
 85dce04:	89 d3                	mov    %edx,%ebx
 85dce06:	89 c6                	mov    %eax,%esi
 85dce08:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85dce0b:	89 04 24             	mov    %eax,(%esp)
 85dce0e:	e8 6d 10 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85dce13:	89 f0                	mov    %esi,%eax
 85dce15:	89 da                	mov    %ebx,%edx
 85dce17:	89 04 24             	mov    %eax,(%esp)
 85dce1a:	e8 31 69 50 00       	call   8ae3750 <_Unwind_Resume>
 85dce1f:	90                   	nop
 85dce20:	83 c4 20             	add    $0x20,%esp
 85dce23:	5b                   	pop    %ebx
 85dce24:	5e                   	pop    %esi
 85dce25:	5d                   	pop    %ebp
 85dce26:	c3                   	ret
 85dce27:	90                   	nop

```

```c
// PvP_Room::pvp_request_pvp_rank @ 0x85dcd7e

/* PvP_Room::pvp_request_pvp_rank() */

void __thiscall PvP_Room::pvp_request_pvp_rank(PvP_Room *this)

{
  PacketGuard local_18 [12];
  
  if (this[0x615] == (PvP_Room)0x0) {
    this[0x615] = (PvP_Room)0x1;
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085dcdc3 to 085dcdec has its CatchHandler @ 085dce04 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x31);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    send_to_pvp(this,local_18);
    this[0xc0] = (PvP_Room)0x1;
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## pvp_reward

```asm
// === 085da882 PvP_Room::pvp_reward  [0x085da882-0x85db7f5] ===
 85da882:	55                   	push   %ebp
 85da883:	89 e5                	mov    %esp,%ebp
 85da885:	57                   	push   %edi
 85da886:	56                   	push   %esi
 85da887:	53                   	push   %ebx
 85da888:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 85da88e:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 85da894:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da898:	8b 45 08             	mov    0x8(%ebp),%eax
 85da89b:	89 04 24             	mov    %eax,(%esp)
 85da89e:	e8 89 1c 00 00       	call   85dc52c <_ZNK8PvP_Room10GetRankingEPi>
 85da8a3:	89 45 94             	mov    %eax,-0x6c(%ebp)
 85da8a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85da8a9:	89 04 24             	mov    %eax,(%esp)
 85da8ac:	e8 9b 1d 00 00       	call   85dc64c <_ZNK8PvP_Room6GetAceEv>
 85da8b1:	89 45 98             	mov    %eax,-0x68(%ebp)
 85da8b4:	e8 ee fa af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85da8b9:	89 04 24             	mov    %eax,(%esp)
 85da8bc:	e8 27 7c b6 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 85da8c1:	84 c0                	test   %al,%al
 85da8c3:	74 30                	je     85da8f5 <_ZN8PvP_Room10pvp_rewardEv+0x73>
 85da8c5:	e8 dd fa af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85da8ca:	89 04 24             	mov    %eax,(%esp)
 85da8cd:	e8 e0 61 bc ff       	call   81a0ab2 <_ZNK9GameWorld16IsFreePvPChannelEv>
 85da8d2:	83 f0 01             	xor    $0x1,%eax
 85da8d5:	84 c0                	test   %al,%al
 85da8d7:	74 1c                	je     85da8f5 <_ZN8PvP_Room10pvp_rewardEv+0x73>
 85da8d9:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85da8dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 85da8e0:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 85da8e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da8ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85da8ed:	89 04 24             	mov    %eax,(%esp)
 85da8f0:	e8 1b f9 ff ff       	call   85da210 <_ZN8PvP_Room20CalcuateVictoryPointEPii>
 85da8f5:	c6 45 9e 01          	movb   $0x1,-0x62(%ebp)
 85da8f9:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 85da900:	eb 3b                	jmp    85da93d <_ZN8PvP_Room10pvp_rewardEv+0xbb>
 85da902:	8b 45 a0             	mov    -0x60(%ebp),%eax
 85da905:	8b 55 08             	mov    0x8(%ebp),%edx
 85da908:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85da90f:	00 
 85da910:	84 c0                	test   %al,%al
 85da912:	74 25                	je     85da939 <_ZN8PvP_Room10pvp_rewardEv+0xb7>
 85da914:	8b 45 a0             	mov    -0x60(%ebp),%eax
 85da917:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da91b:	8b 45 08             	mov    0x8(%ebp),%eax
 85da91e:	89 04 24             	mov    %eax,(%esp)
 85da921:	e8 20 f7 ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85da926:	83 f0 01             	xor    $0x1,%eax
 85da929:	84 c0                	test   %al,%al
 85da92b:	74 0c                	je     85da939 <_ZN8PvP_Room10pvp_rewardEv+0xb7>
 85da92d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 85da930:	88 45 9f             	mov    %al,-0x61(%ebp)
 85da933:	c6 45 9e 00          	movb   $0x0,-0x62(%ebp)
 85da937:	eb 0f                	jmp    85da948 <_ZN8PvP_Room10pvp_rewardEv+0xc6>
 85da939:	83 45 a0 01          	addl   $0x1,-0x60(%ebp)
 85da93d:	83 7d a0 07          	cmpl   $0x7,-0x60(%ebp)
 85da941:	0f 9e c0             	setle  %al
 85da944:	84 c0                	test   %al,%al
 85da946:	75 ba                	jne    85da902 <_ZN8PvP_Room10pvp_rewardEv+0x80>
 85da948:	8b 45 08             	mov    0x8(%ebp),%eax
 85da94b:	89 04 24             	mov    %eax,(%esp)
 85da94e:	e8 79 fe ff ff       	call   85da7cc <_ZN8PvP_Room25check_acquire_guild_pointEv>
 85da953:	88 45 a7             	mov    %al,-0x59(%ebp)
 85da956:	8b 45 08             	mov    0x8(%ebp),%eax
 85da959:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85da95f:	8b 00                	mov    (%eax),%eax
 85da961:	83 c0 4c             	add    $0x4c,%eax
 85da964:	8b 30                	mov    (%eax),%esi
 85da966:	80 7d 9e 01          	cmpb   $0x1,-0x62(%ebp)
 85da96a:	0f 94 c0             	sete   %al
 85da96d:	0f b6 d8             	movzbl %al,%ebx
 85da970:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85da974:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da978:	8b 45 08             	mov    0x8(%ebp),%eax
 85da97b:	89 04 24             	mov    %eax,(%esp)
 85da97e:	e8 ef e8 ff ff       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 85da983:	8b 55 08             	mov    0x8(%ebp),%edx
 85da986:	8b 92 e4 06 00 00    	mov    0x6e4(%edx),%edx
 85da98c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85da990:	89 44 24 08          	mov    %eax,0x8(%esp)
 85da994:	8b 45 08             	mov    0x8(%ebp),%eax
 85da997:	89 44 24 04          	mov    %eax,0x4(%esp)
 85da99b:	89 14 24             	mov    %edx,(%esp)
 85da99e:	ff d6                	call   *%esi
 85da9a0:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 85da9a7:	e9 c3 0d 00 00       	jmp    85db76f <_ZN8PvP_Room10pvp_rewardEv+0xeed>
 85da9ac:	8b 55 a8             	mov    -0x58(%ebp),%edx
 85da9af:	8b 45 08             	mov    0x8(%ebp),%eax
 85da9b2:	83 c2 0c             	add    $0xc,%edx
 85da9b5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85da9b8:	89 45 ac             	mov    %eax,-0x54(%ebp)
 85da9bb:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 85da9bf:	0f 84 a5 0d 00 00    	je     85db76a <_ZN8PvP_Room10pvp_rewardEv+0xee8>
 85da9c5:	8b 55 a8             	mov    -0x58(%ebp),%edx
 85da9c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85da9cb:	83 c2 0c             	add    $0xc,%edx
 85da9ce:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85da9d1:	e8 09 9f c5 ff       	call   82348df <_ZN19disconnect_detecter29GetInstanceDisconnectDetecterEv>
 85da9d6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85da9da:	89 04 24             	mov    %eax,(%esp)
 85da9dd:	e8 88 79 e9 ff       	call   847236a <_ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser>
 85da9e2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85da9e9:	e8 b0 12 af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85da9ee:	8b 55 08             	mov    0x8(%ebp),%edx
 85da9f1:	8b 92 18 06 00 00    	mov    0x618(%edx),%edx
 85da9f7:	29 d0                	sub    %edx,%eax
 85da9f9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85daa00:	00 
 85daa01:	89 44 24 04          	mov    %eax,0x4(%esp)
 85daa05:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85daa08:	89 04 24             	mov    %eax,(%esp)
 85daa0b:	e8 76 2f 08 00       	call   865d986 <_ZN5CUser17add_pvp_play_infoEjj>
 85daa10:	e8 92 f9 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85daa15:	89 04 24             	mov    %eax,(%esp)
 85daa18:	e8 01 69 b1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 85daa1d:	84 c0                	test   %al,%al
 85daa1f:	74 4d                	je     85daa6e <_ZN8PvP_Room10pvp_rewardEv+0x1ec>
 85daa21:	a1 30 f7 41 09       	mov    0x941f730,%eax
 85daa26:	c7 44 24 04 38 00 00 	movl   $0x38,0x4(%esp)
 85daa2d:	00 
 85daa2e:	89 04 24             	mov    %eax,(%esp)
 85daa31:	e8 62 af b3 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 85daa36:	8b 10                	mov    (%eax),%edx
 85daa38:	83 c2 34             	add    $0x34,%edx
 85daa3b:	8b 12                	mov    (%edx),%edx
 85daa3d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85daa44:	00 
 85daa45:	89 04 24             	mov    %eax,(%esp)
 85daa48:	ff d2                	call   *%edx
 85daa4a:	84 c0                	test   %al,%al
 85daa4c:	74 20                	je     85daa6e <_ZN8PvP_Room10pvp_rewardEv+0x1ec>
 85daa4e:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85daa51:	89 44 24 04          	mov    %eax,0x4(%esp)
 85daa55:	8b 45 08             	mov    0x8(%ebp),%eax
 85daa58:	89 04 24             	mov    %eax,(%esp)
 85daa5b:	e8 e6 f5 ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85daa60:	83 f0 01             	xor    $0x1,%eax
 85daa63:	84 c0                	test   %al,%al
 85daa65:	74 07                	je     85daa6e <_ZN8PvP_Room10pvp_rewardEv+0x1ec>
 85daa67:	b8 01 00 00 00       	mov    $0x1,%eax
 85daa6c:	eb 05                	jmp    85daa73 <_ZN8PvP_Room10pvp_rewardEv+0x1f1>
 85daa6e:	b8 00 00 00 00       	mov    $0x0,%eax
 85daa73:	84 c0                	test   %al,%al
 85daa75:	0f 84 8c 00 00 00    	je     85dab07 <_ZN8PvP_Room10pvp_rewardEv+0x285>
 85daa7b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85daa7e:	89 04 24             	mov    %eax,(%esp)
 85daa81:	e8 0a 12 af ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85daa86:	85 c0                	test   %eax,%eax
 85daa88:	0f 95 c0             	setne  %al
 85daa8b:	84 c0                	test   %al,%al
 85daa8d:	74 78                	je     85dab07 <_ZN8PvP_Room10pvp_rewardEv+0x285>
 85daa8f:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 85daa95:	89 04 24             	mov    %eax,(%esp)
 85daa98:	e8 b7 4e 00 00       	call   85df954 <_ZN24Packet_Server_Match_dataC1Ev>
 85daa9d:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85daaa0:	89 04 24             	mov    %eax,(%esp)
 85daaa3:	e8 e8 11 af ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85daaa8:	88 85 6d ff ff ff    	mov    %al,-0x93(%ebp)
 85daaae:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85daab1:	8b 55 08             	mov    0x8(%ebp),%edx
 85daab4:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85daabb:	00 
 85daabc:	84 c0                	test   %al,%al
 85daabe:	74 09                	je     85daac9 <_ZN8PvP_Room10pvp_rewardEv+0x247>
 85daac0:	c6 85 6e ff ff ff 01 	movb   $0x1,-0x92(%ebp)
 85daac7:	eb 07                	jmp    85daad0 <_ZN8PvP_Room10pvp_rewardEv+0x24e>
 85daac9:	c6 85 6f ff ff ff 01 	movb   $0x1,-0x91(%ebp)
 85daad0:	8d 9d 63 ff ff ff    	lea    -0x9d(%ebp),%ebx
 85daad6:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85daad9:	89 04 24             	mov    %eax,(%esp)
 85daadc:	e8 af 11 af ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85daae1:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 85daae7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85daaeb:	89 14 24             	mov    %edx,(%esp)
 85daaee:	e8 05 72 b3 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 85daaf3:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 85daafa:	00 
 85daafb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85daaff:	89 04 24             	mov    %eax,(%esp)
 85dab02:	e8 3d 75 e9 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 85dab07:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 85dab0e:	80 7d a7 00          	cmpb   $0x0,-0x59(%ebp)
 85dab12:	74 32                	je     85dab46 <_ZN8PvP_Room10pvp_rewardEv+0x2c4>
 85dab14:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85dab17:	8b 55 08             	mov    0x8(%ebp),%edx
 85dab1a:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85dab21:	00 
 85dab22:	84 c0                	test   %al,%al
 85dab24:	74 20                	je     85dab46 <_ZN8PvP_Room10pvp_rewardEv+0x2c4>
 85dab26:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85dab29:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dab2d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dab30:	89 04 24             	mov    %eax,(%esp)
 85dab33:	e8 0e f5 ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85dab38:	83 f0 01             	xor    $0x1,%eax
 85dab3b:	84 c0                	test   %al,%al
 85dab3d:	74 07                	je     85dab46 <_ZN8PvP_Room10pvp_rewardEv+0x2c4>
 85dab3f:	b8 01 00 00 00       	mov    $0x1,%eax
 85dab44:	eb 05                	jmp    85dab4b <_ZN8PvP_Room10pvp_rewardEv+0x2c9>
 85dab46:	b8 00 00 00 00       	mov    $0x0,%eax
 85dab4b:	84 c0                	test   %al,%al
 85dab4d:	74 0b                	je     85dab5a <_ZN8PvP_Room10pvp_rewardEv+0x2d8>
 85dab4f:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dab52:	89 04 24             	mov    %eax,(%esp)
 85dab55:	e8 6e 21 08 00       	call   865ccc8 <_ZN5CUser20add_guild_point_itemEv>
 85dab5a:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85dab61:	00 
 85dab62:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dab65:	89 04 24             	mov    %eax,(%esp)
 85dab68:	e8 17 2a b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85dab6d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85dab70:	8b 45 08             	mov    0x8(%ebp),%eax
 85dab73:	8b 40 04             	mov    0x4(%eax),%eax
 85dab76:	83 f8 02             	cmp    $0x2,%eax
 85dab79:	0f 94 c0             	sete   %al
 85dab7c:	0f b6 d0             	movzbl %al,%edx
 85dab7f:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85dab82:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85dab85:	0f b6 84 01 c8 05 00 	movzbl 0x5c8(%ecx,%eax,1),%eax
 85dab8c:	00 
 85dab8d:	0f b6 c0             	movzbl %al,%eax
 85dab90:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dab94:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dab98:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85dab9b:	89 04 24             	mov    %eax,(%esp)
 85dab9e:	e8 2b a6 00 00       	call   85e51ce <_ZN19CMissionList_Charac8setIssueEbb>
 85daba3:	8b 45 08             	mov    0x8(%ebp),%eax
 85daba6:	8b 40 04             	mov    0x4(%eax),%eax
 85daba9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dabad:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 85dabb3:	89 04 24             	mov    %eax,(%esp)
 85dabb6:	e8 89 6e 00 00       	call   85e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>
 85dabbb:	8b 45 08             	mov    0x8(%ebp),%eax
 85dabbe:	8b 40 04             	mov    0x4(%eax),%eax
 85dabc1:	83 f8 02             	cmp    $0x2,%eax
 85dabc4:	0f 94 c0             	sete   %al
 85dabc7:	0f b6 c0             	movzbl %al,%eax
 85dabca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dabce:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85dabd1:	89 04 24             	mov    %eax,(%esp)
 85dabd4:	e8 bb a5 00 00       	call   85e5194 <_ZNK19CMissionList_Charac13getIssue_modeEb>
 85dabd9:	66 89 85 55 ff ff ff 	mov    %ax,-0xab(%ebp)
 85dabe0:	c6 85 53 ff ff ff 00 	movb   $0x0,-0xad(%ebp)
 85dabe7:	8d 85 53 ff ff ff    	lea    -0xad(%ebp),%eax
 85dabed:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85dabf1:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 85dabf7:	89 44 24 08          	mov    %eax,0x8(%esp)
 85dabfb:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dabfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dac02:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85dac05:	89 04 24             	mov    %eax,(%esp)
 85dac08:	e8 e3 ad 00 00       	call   85e59f0 <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb>
 85dac0d:	0f b6 85 53 ff ff ff 	movzbl -0xad(%ebp),%eax
 85dac14:	84 c0                	test   %al,%al
 85dac16:	74 4b                	je     85dac63 <_ZN8PvP_Room10pvp_rewardEv+0x3e1>
 85dac18:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dac1b:	89 04 24             	mov    %eax,(%esp)
 85dac1e:	e8 3b 45 c5 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 85dac23:	8b 50 08             	mov    0x8(%eax),%edx
 85dac26:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 85dac2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dac2f:	89 04 24             	mov    %eax,(%esp)
 85dac32:	e8 97 9b ff ff       	call   85d47ce <_ZNK11RefPvpGrade11GetPvpGradeEi>
 85dac37:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85dac3a:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dac3d:	89 04 24             	mov    %eax,(%esp)
 85dac40:	e8 19 45 c5 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 85dac45:	8b 40 14             	mov    0x14(%eax),%eax
 85dac48:	3b 45 c0             	cmp    -0x40(%ebp),%eax
 85dac4b:	0f 9c c0             	setl   %al
 85dac4e:	84 c0                	test   %al,%al
 85dac50:	74 11                	je     85dac63 <_ZN8PvP_Room10pvp_rewardEv+0x3e1>
 85dac52:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dac55:	89 04 24             	mov    %eax,(%esp)
 85dac58:	e8 67 12 f1 ff       	call   84ebec4 <_ZN15CUserCharacInfo16getPVPResultRefWEv>
 85dac5d:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85dac60:	89 50 14             	mov    %edx,0x14(%eax)
 85dac63:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dac66:	89 04 24             	mov    %eax,(%esp)
 85dac69:	e8 ba 78 08 00       	call   8662528 <_ZN5CUser16send_MissionListEv>
 85dac6e:	e8 34 f7 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dac73:	89 04 24             	mov    %eax,(%esp)
 85dac76:	e8 6d 78 b6 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 85dac7b:	84 c0                	test   %al,%al
 85dac7d:	0f 84 c9 01 00 00    	je     85dae4c <_ZN8PvP_Room10pvp_rewardEv+0x5ca>
 85dac83:	e8 1f f7 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dac88:	89 04 24             	mov    %eax,(%esp)
 85dac8b:	e8 02 4e 00 00       	call   85dfa92 <_ZNK9GameWorld20IsWinPointPvPChannelEv>
 85dac90:	84 c0                	test   %al,%al
 85dac92:	0f 84 0e 01 00 00    	je     85dada6 <_ZN8PvP_Room10pvp_rewardEv+0x524>
 85dac98:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85dac9b:	8b 55 08             	mov    0x8(%ebp),%edx
 85dac9e:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85daca5:	00 
 85daca6:	0f b6 c0             	movzbl %al,%eax
 85daca9:	8d 55 80             	lea    -0x80(%ebp),%edx
 85dacac:	89 54 24 08          	mov    %edx,0x8(%esp)
 85dacb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dacb4:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dacb7:	89 04 24             	mov    %eax,(%esp)
 85dacba:	e8 b9 19 08 00       	call   865c678 <_ZN5CUser14add_pvp_resultEbPj>
 85dacbf:	8b 45 08             	mov    0x8(%ebp),%eax
 85dacc2:	8b 40 04             	mov    0x4(%eax),%eax
 85dacc5:	83 f8 04             	cmp    $0x4,%eax
 85dacc8:	74 0b                	je     85dacd5 <_ZN8PvP_Room10pvp_rewardEv+0x453>
 85dacca:	8b 45 08             	mov    0x8(%ebp),%eax
 85daccd:	8b 40 04             	mov    0x4(%eax),%eax
 85dacd0:	83 f8 05             	cmp    $0x5,%eax
 85dacd3:	75 07                	jne    85dacdc <_ZN8PvP_Room10pvp_rewardEv+0x45a>
 85dacd5:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 85dacdc:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85dacdf:	8b 55 08             	mov    0x8(%ebp),%edx
 85dace2:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85dace9:	00 
 85dacea:	84 c0                	test   %al,%al
 85dacec:	0f 84 56 01 00 00    	je     85dae48 <_ZN8PvP_Room10pvp_rewardEv+0x5c6>
 85dacf2:	8b 45 08             	mov    0x8(%ebp),%eax
 85dacf5:	8b 40 04             	mov    0x4(%eax),%eax
 85dacf8:	83 f8 01             	cmp    $0x1,%eax
 85dacfb:	74 0b                	je     85dad08 <_ZN8PvP_Room10pvp_rewardEv+0x486>
 85dacfd:	8b 45 08             	mov    0x8(%ebp),%eax
 85dad00:	8b 40 04             	mov    0x4(%eax),%eax
 85dad03:	83 f8 04             	cmp    $0x4,%eax
 85dad06:	75 28                	jne    85dad30 <_ZN8PvP_Room10pvp_rewardEv+0x4ae>
 85dad08:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85dad0f:	00 
 85dad10:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85dad17:	00 
 85dad18:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 85dad1f:	00 
 85dad20:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dad23:	89 04 24             	mov    %eax,(%esp)
 85dad26:	e8 65 76 b4 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 85dad2b:	e9 1c 01 00 00       	jmp    85dae4c <_ZN8PvP_Room10pvp_rewardEv+0x5ca>
 85dad30:	8b 45 08             	mov    0x8(%ebp),%eax
 85dad33:	8b 40 04             	mov    0x4(%eax),%eax
 85dad36:	83 f8 02             	cmp    $0x2,%eax
 85dad39:	74 0b                	je     85dad46 <_ZN8PvP_Room10pvp_rewardEv+0x4c4>
 85dad3b:	8b 45 08             	mov    0x8(%ebp),%eax
 85dad3e:	8b 40 04             	mov    0x4(%eax),%eax
 85dad41:	83 f8 05             	cmp    $0x5,%eax
 85dad44:	75 29                	jne    85dad6f <_ZN8PvP_Room10pvp_rewardEv+0x4ed>
 85dad46:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85dad4d:	00 
 85dad4e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85dad55:	00 
 85dad56:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 85dad5d:	00 
 85dad5e:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dad61:	89 04 24             	mov    %eax,(%esp)
 85dad64:	e8 27 76 b4 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 85dad69:	90                   	nop
 85dad6a:	e9 dd 00 00 00       	jmp    85dae4c <_ZN8PvP_Room10pvp_rewardEv+0x5ca>
 85dad6f:	8b 45 08             	mov    0x8(%ebp),%eax
 85dad72:	8b 40 04             	mov    0x4(%eax),%eax
 85dad75:	83 f8 03             	cmp    $0x3,%eax
 85dad78:	0f 85 cd 00 00 00    	jne    85dae4b <_ZN8PvP_Room10pvp_rewardEv+0x5c9>
 85dad7e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85dad85:	00 
 85dad86:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85dad8d:	00 
 85dad8e:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 85dad95:	00 
 85dad96:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dad99:	89 04 24             	mov    %eax,(%esp)
 85dad9c:	e8 ef 75 b4 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 85dada1:	e9 a6 00 00 00       	jmp    85dae4c <_ZN8PvP_Room10pvp_rewardEv+0x5ca>
 85dada6:	e8 fc f5 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dadab:	89 04 24             	mov    %eax,(%esp)
 85dadae:	e8 6d bd b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85dadb3:	83 f8 06             	cmp    $0x6,%eax
 85dadb6:	0f 94 c0             	sete   %al
 85dadb9:	84 c0                	test   %al,%al
 85dadbb:	0f 84 8b 00 00 00    	je     85dae4c <_ZN8PvP_Room10pvp_rewardEv+0x5ca>
 85dadc1:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85dadc4:	8b 55 08             	mov    0x8(%ebp),%edx
 85dadc7:	0f b6 84 02 c8 05 00 	movzbl 0x5c8(%edx,%eax,1),%eax
 85dadce:	00 
 85dadcf:	84 c0                	test   %al,%al
 85dadd1:	74 57                	je     85dae2a <_ZN8PvP_Room10pvp_rewardEv+0x5a8>
 85dadd3:	8b 45 08             	mov    0x8(%ebp),%eax
 85dadd6:	8b 40 04             	mov    0x4(%eax),%eax
 85dadd9:	83 f8 02             	cmp    $0x2,%eax
 85daddc:	74 16                	je     85dadf4 <_ZN8PvP_Room10pvp_rewardEv+0x572>
 85dadde:	8b 45 08             	mov    0x8(%ebp),%eax
 85dade1:	8b 40 04             	mov    0x4(%eax),%eax
 85dade4:	83 f8 03             	cmp    $0x3,%eax
 85dade7:	74 0b                	je     85dadf4 <_ZN8PvP_Room10pvp_rewardEv+0x572>
 85dade9:	8b 45 08             	mov    0x8(%ebp),%eax
 85dadec:	8b 40 04             	mov    0x4(%eax),%eax
 85dadef:	83 f8 05             	cmp    $0x5,%eax
 85dadf2:	75 0a                	jne    85dadfe <_ZN8PvP_Room10pvp_rewardEv+0x57c>
 85dadf4:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 85dadfb:	90                   	nop
 85dadfc:	eb 36                	jmp    85dae34 <_ZN8PvP_Room10pvp_rewardEv+0x5b2>
 85dadfe:	8b 45 08             	mov    0x8(%ebp),%eax
 85dae01:	89 04 24             	mov    %eax,(%esp)
 85dae04:	e8 37 fa ff ff       	call   85da840 <_ZN8PvP_Room14count_pvp_userEv>
 85dae09:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85dae0c:	83 7d c8 03          	cmpl   $0x3,-0x38(%ebp)
 85dae10:	7f 09                	jg     85dae1b <_ZN8PvP_Room10pvp_rewardEv+0x599>
 85dae12:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 85dae19:	eb 19                	jmp    85dae34 <_ZN8PvP_Room10pvp_rewardEv+0x5b2>
 85dae1b:	83 7d c8 03          	cmpl   $0x3,-0x38(%ebp)
 85dae1f:	7e 12                	jle    85dae33 <_ZN8PvP_Room10pvp_rewardEv+0x5b1>
 85dae21:	c7 45 c4 02 00 00 00 	movl   $0x2,-0x3c(%ebp)
 85dae28:	eb 0a                	jmp    85dae34 <_ZN8PvP_Room10pvp_rewardEv+0x5b2>
 85dae2a:	c7 45 c4 ff ff ff ff 	movl   $0xffffffff,-0x3c(%ebp)
 85dae31:	eb 01                	jmp    85dae34 <_ZN8PvP_Room10pvp_rewardEv+0x5b2>
 85dae33:	90                   	nop
 85dae34:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85dae37:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dae3b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dae3e:	89 04 24             	mov    %eax,(%esp)
 85dae41:	e8 f0 1a 08 00       	call   865c936 <_ZN5CUser20add_guild_pvp_resultEi>
 85dae46:	eb 04                	jmp    85dae4c <_ZN8PvP_Room10pvp_rewardEv+0x5ca>
 85dae48:	90                   	nop
 85dae49:	eb 01                	jmp    85dae4c <_ZN8PvP_Room10pvp_rewardEv+0x5ca>
 85dae4b:	90                   	nop
 85dae4c:	c7 45 b0 ff ff 00 00 	movl   $0xffff,-0x50(%ebp)
 85dae53:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 85dae5a:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 85dae61:	00 00 00 
 85dae64:	8b 45 08             	mov    0x8(%ebp),%eax
 85dae67:	8b 40 04             	mov    0x4(%eax),%eax
 85dae6a:	83 f8 03             	cmp    $0x3,%eax
 85dae6d:	75 54                	jne    85daec3 <_ZN8PvP_Room10pvp_rewardEv+0x641>
 85dae6f:	8b 45 08             	mov    0x8(%ebp),%eax
 85dae72:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85dae78:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 85dae7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dae82:	89 14 24             	mov    %edx,(%esp)
 85dae85:	e8 ea 3e 00 00       	call   85ded74 <_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi>
 85dae8a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85dae8d:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 85dae91:	78 30                	js     85daec3 <_ZN8PvP_Room10pvp_rewardEv+0x641>
 85dae93:	83 7d b4 07          	cmpl   $0x7,-0x4c(%ebp)
 85dae97:	7f 2a                	jg     85daec3 <_ZN8PvP_Room10pvp_rewardEv+0x641>
 85dae99:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 85dae9c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dae9f:	83 c2 0c             	add    $0xc,%edx
 85daea2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85daea5:	85 c0                	test   %eax,%eax
 85daea7:	74 1a                	je     85daec3 <_ZN8PvP_Room10pvp_rewardEv+0x641>
 85daea9:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 85daeac:	8b 45 08             	mov    0x8(%ebp),%eax
 85daeaf:	83 c2 0c             	add    $0xc,%edx
 85daeb2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85daeb5:	89 04 24             	mov    %eax,(%esp)
 85daeb8:	e8 bf f4 af ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85daebd:	0f b7 c0             	movzwl %ax,%eax
 85daec0:	89 45 b0             	mov    %eax,-0x50(%ebp)
 85daec3:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85daec9:	89 04 24             	mov    %eax,(%esp)
 85daecc:	e8 7b 2e fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85daed1:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85daed7:	89 04 24             	mov    %eax,(%esp)
 85daeda:	e8 07 0a af ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85daedf:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 85daee6:	00 
 85daee7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85daeee:	00 
 85daeef:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85daef5:	89 04 24             	mov    %eax,(%esp)
 85daef8:	e8 ff 09 af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85daefd:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85daf01:	89 44 24 04          	mov    %eax,0x4(%esp)
 85daf05:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85daf0b:	89 04 24             	mov    %eax,(%esp)
 85daf0e:	e8 0d 0a af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85daf13:	e8 8f f4 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85daf18:	89 04 24             	mov    %eax,(%esp)
 85daf1b:	e8 00 bc b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85daf20:	83 f8 0f             	cmp    $0xf,%eax
 85daf23:	0f 94 c0             	sete   %al
 85daf26:	84 c0                	test   %al,%al
 85daf28:	74 2f                	je     85daf59 <_ZN8PvP_Room10pvp_rewardEv+0x6d7>
 85daf2a:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 85daf31:	00 
 85daf32:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85daf35:	89 04 24             	mov    %eax,(%esp)
 85daf38:	e8 47 26 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85daf3d:	89 04 24             	mov    %eax,(%esp)
 85daf40:	e8 67 4e 00 00       	call   85dfdac <_ZN8fair_pvp13CFairPvPScore24GetLastTrainingSealCountEv>
 85daf45:	89 44 24 04          	mov    %eax,0x4(%esp)
 85daf49:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85daf4f:	89 04 24             	mov    %eax,(%esp)
 85daf52:	e8 e5 09 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85daf57:	eb 7b                	jmp    85dafd4 <_ZN8PvP_Room10pvp_rewardEv+0x752>
 85daf59:	e8 49 f4 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85daf5e:	89 04 24             	mov    %eax,(%esp)
 85daf61:	e8 ba bb b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85daf66:	83 f8 10             	cmp    $0x10,%eax
 85daf69:	0f 94 c0             	sete   %al
 85daf6c:	84 c0                	test   %al,%al
 85daf6e:	74 18                	je     85daf88 <_ZN8PvP_Room10pvp_rewardEv+0x706>
 85daf70:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85daf77:	00 
 85daf78:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85daf7e:	89 04 24             	mov    %eax,(%esp)
 85daf81:	e8 b6 09 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85daf86:	eb 4c                	jmp    85dafd4 <_ZN8PvP_Room10pvp_rewardEv+0x752>
 85daf88:	e8 1a f4 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85daf8d:	89 04 24             	mov    %eax,(%esp)
 85daf90:	e8 8b bb b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85daf95:	83 f8 0e             	cmp    $0xe,%eax
 85daf98:	0f 94 c0             	sete   %al
 85daf9b:	84 c0                	test   %al,%al
 85daf9d:	74 18                	je     85dafb7 <_ZN8PvP_Room10pvp_rewardEv+0x735>
 85daf9f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85dafa6:	00 
 85dafa7:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85dafad:	89 04 24             	mov    %eax,(%esp)
 85dafb0:	e8 87 09 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85dafb5:	eb 1d                	jmp    85dafd4 <_ZN8PvP_Room10pvp_rewardEv+0x752>
 85dafb7:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dafba:	89 04 24             	mov    %eax,(%esp)
 85dafbd:	e8 ba f1 b9 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 85dafc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dafc6:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85dafcc:	89 04 24             	mov    %eax,(%esp)
 85dafcf:	e8 68 09 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85dafd4:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85dafd7:	89 04 24             	mov    %eax,(%esp)
 85dafda:	e8 6b 3e bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85dafdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dafe3:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85dafe9:	89 04 24             	mov    %eax,(%esp)
 85dafec:	e8 2f 09 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85daff1:	e8 b1 f3 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85daff6:	89 04 24             	mov    %eax,(%esp)
 85daff9:	e8 22 bb b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85daffe:	83 f8 06             	cmp    $0x6,%eax
 85db001:	0f 94 c0             	sete   %al
 85db004:	84 c0                	test   %al,%al
 85db006:	74 1b                	je     85db023 <_ZN8PvP_Room10pvp_rewardEv+0x7a1>
 85db008:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85db00f:	00 
 85db010:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db016:	89 04 24             	mov    %eax,(%esp)
 85db019:	e8 1e 09 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db01e:	e9 ee 00 00 00       	jmp    85db111 <_ZN8PvP_Room10pvp_rewardEv+0x88f>
 85db023:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db026:	89 04 24             	mov    %eax,(%esp)
 85db029:	e8 6c 49 00 00       	call   85df99a <_ZNK15CUserCharacInfo24get_pvp_result_exp_pointEv>
 85db02e:	89 c3                	mov    %eax,%ebx
 85db030:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db033:	89 04 24             	mov    %eax,(%esp)
 85db036:	e8 6b 49 00 00       	call   85df9a6 <_ZNK15CUserCharacInfo27get_pvp_result_oldexp_pointEv>
 85db03b:	89 da                	mov    %ebx,%edx
 85db03d:	29 c2                	sub    %eax,%edx
 85db03f:	89 d0                	mov    %edx,%eax
 85db041:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85db044:	81 7d b0 ff ff 00 00 	cmpl   $0xffff,-0x50(%ebp)
 85db04b:	74 54                	je     85db0a1 <_ZN8PvP_Room10pvp_rewardEv+0x81f>
 85db04d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 85db050:	8b 45 08             	mov    0x8(%ebp),%eax
 85db053:	83 c2 14             	add    $0x14,%edx
 85db056:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85db059:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 85db05f:	39 c2                	cmp    %eax,%edx
 85db061:	75 3e                	jne    85db0a1 <_ZN8PvP_Room10pvp_rewardEv+0x81f>
 85db063:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 85db069:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db06d:	8b 45 08             	mov    0x8(%ebp),%eax
 85db070:	89 04 24             	mov    %eax,(%esp)
 85db073:	e8 aa dc f8 ff       	call   8568d22 <_ZN8PvP_Room12GetTeamCountEi>
 85db078:	89 c2                	mov    %eax,%edx
 85db07a:	89 d0                	mov    %edx,%eax
 85db07c:	c1 e0 02             	shl    $0x2,%eax
 85db07f:	01 d0                	add    %edx,%eax
 85db081:	89 c1                	mov    %eax,%ecx
 85db083:	0f af 4d cc          	imul   -0x34(%ebp),%ecx
 85db087:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 85db08c:	89 c8                	mov    %ecx,%eax
 85db08e:	f7 ea                	imul   %edx
 85db090:	c1 fa 05             	sar    $0x5,%edx
 85db093:	89 c8                	mov    %ecx,%eax
 85db095:	c1 f8 1f             	sar    $0x1f,%eax
 85db098:	89 d1                	mov    %edx,%ecx
 85db09a:	29 c1                	sub    %eax,%ecx
 85db09c:	89 c8                	mov    %ecx,%eax
 85db09e:	01 45 cc             	add    %eax,-0x34(%ebp)
 85db0a1:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db0a4:	89 04 24             	mov    %eax,(%esp)
 85db0a7:	e8 18 0e f1 ff       	call   84ebec4 <_ZN15CUserCharacInfo16getPVPResultRefWEv>
 85db0ac:	89 c3                	mov    %eax,%ebx
 85db0ae:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db0b1:	89 04 24             	mov    %eax,(%esp)
 85db0b4:	e8 ed 48 00 00       	call   85df9a6 <_ZNK15CUserCharacInfo27get_pvp_result_oldexp_pointEv>
 85db0b9:	03 45 cc             	add    -0x34(%ebp),%eax
 85db0bc:	89 43 08             	mov    %eax,0x8(%ebx)
 85db0bf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85db0c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db0c6:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db0cc:	89 04 24             	mov    %eax,(%esp)
 85db0cf:	e8 68 08 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db0d4:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db0d7:	89 04 24             	mov    %eax,(%esp)
 85db0da:	e8 c7 48 00 00       	call   85df9a6 <_ZNK15CUserCharacInfo27get_pvp_result_oldexp_pointEv>
 85db0df:	89 c3                	mov    %eax,%ebx
 85db0e1:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db0e4:	89 04 24             	mov    %eax,(%esp)
 85db0e7:	e8 72 40 c5 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 85db0ec:	8b 40 08             	mov    0x8(%eax),%eax
 85db0ef:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85db0f2:	89 54 24 10          	mov    %edx,0x10(%esp)
 85db0f6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85db0fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 85db0fe:	c7 44 24 04 83 11 cc 	movl   $0x8cc1183,0x4(%esp)
 85db105:	08 
 85db106:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db109:	89 04 24             	mov    %eax,(%esp)
 85db10c:	e8 ed 17 0a 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 85db111:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db114:	89 04 24             	mov    %eax,(%esp)
 85db117:	e8 ee 75 08 00       	call   866270a <_ZNK5CUser18has_within_MissionEv>
 85db11c:	66 85 c0             	test   %ax,%ax
 85db11f:	0f 94 c0             	sete   %al
 85db122:	84 c0                	test   %al,%al
 85db124:	74 0b                	je     85db131 <_ZN8PvP_Room10pvp_rewardEv+0x8af>
 85db126:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db129:	89 04 24             	mov    %eax,(%esp)
 85db12c:	e8 43 76 08 00       	call   8662774 <_ZNK5CUser25acceptable_within_missionEv>
 85db131:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85db134:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db138:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db13e:	89 04 24             	mov    %eax,(%esp)
 85db141:	e8 da 07 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db146:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 85db14d:	e9 2f 02 00 00       	jmp    85db381 <_ZN8PvP_Room10pvp_rewardEv+0xaff>
 85db152:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85db155:	8b 84 85 28 ff ff ff 	mov    -0xd8(%ebp,%eax,4),%eax
 85db15c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85db15f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85db162:	8b 45 08             	mov    0x8(%ebp),%eax
 85db165:	83 c2 0c             	add    $0xc,%edx
 85db168:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db16b:	85 c0                	test   %eax,%eax
 85db16d:	0f 84 09 02 00 00    	je     85db37c <_ZN8PvP_Room10pvp_rewardEv+0xafa>
 85db173:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85db176:	8b 45 08             	mov    0x8(%ebp),%eax
 85db179:	83 c2 0c             	add    $0xc,%edx
 85db17c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db17f:	89 04 24             	mov    %eax,(%esp)
 85db182:	e8 f5 f1 af ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85db187:	0f b7 c0             	movzwl %ax,%eax
 85db18a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db18e:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db194:	89 04 24             	mov    %eax,(%esp)
 85db197:	e8 08 ed af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db19c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85db19f:	8b 45 08             	mov    0x8(%ebp),%eax
 85db1a2:	83 c2 1c             	add    $0x1c,%edx
 85db1a5:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 85db1a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db1ad:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db1b3:	89 04 24             	mov    %eax,(%esp)
 85db1b6:	e8 81 07 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db1bb:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85db1be:	8b 45 08             	mov    0x8(%ebp),%eax
 85db1c1:	83 c2 0c             	add    $0xc,%edx
 85db1c4:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db1c7:	89 04 24             	mov    %eax,(%esp)
 85db1ca:	e8 7b 3c bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85db1cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db1d3:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db1d9:	89 04 24             	mov    %eax,(%esp)
 85db1dc:	e8 3f 07 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db1e1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85db1e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85db1e7:	83 c2 0c             	add    $0xc,%edx
 85db1ea:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db1ed:	89 04 24             	mov    %eax,(%esp)
 85db1f0:	e8 a5 47 00 00       	call   85df99a <_ZNK15CUserCharacInfo24get_pvp_result_exp_pointEv>
 85db1f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db1f9:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db1ff:	89 04 24             	mov    %eax,(%esp)
 85db202:	e8 35 07 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db207:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85db20a:	8b 45 08             	mov    0x8(%ebp),%eax
 85db20d:	83 c2 0c             	add    $0xc,%edx
 85db210:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db213:	89 04 24             	mov    %eax,(%esp)
 85db216:	e8 2f 3c bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85db21b:	8b 15 3c f7 41 09    	mov    0x941f73c,%edx
 85db221:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db225:	89 14 24             	mov    %edx,(%esp)
 85db228:	e8 53 96 ff ff       	call   85d4880 <_ZNK11RefPvpGrade19GetPvpCurrRankPointEi>
 85db22d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db231:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db237:	89 04 24             	mov    %eax,(%esp)
 85db23a:	e8 fd 06 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db23f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85db242:	8b 45 08             	mov    0x8(%ebp),%eax
 85db245:	83 c2 0c             	add    $0xc,%edx
 85db248:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db24b:	89 04 24             	mov    %eax,(%esp)
 85db24e:	e8 f7 3b bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85db253:	8b 15 3c f7 41 09    	mov    0x941f73c,%edx
 85db259:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db25d:	89 14 24             	mov    %edx,(%esp)
 85db260:	e8 fb 95 ff ff       	call   85d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>
 85db265:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db269:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db26f:	89 04 24             	mov    %eax,(%esp)
 85db272:	e8 c5 06 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db277:	8b 45 08             	mov    0x8(%ebp),%eax
 85db27a:	8d 90 9c 06 00 00    	lea    0x69c(%eax),%edx
 85db280:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85db283:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db287:	89 14 24             	mov    %edx,(%esp)
 85db28a:	e8 95 42 00 00       	call   85df524 <_ZN20CDeathMatchBattleMgr12getKillCountEi>
 85db28f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85db292:	8b 45 08             	mov    0x8(%ebp),%eax
 85db295:	8d 90 9c 06 00 00    	lea    0x69c(%eax),%edx
 85db29b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85db29e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db2a2:	89 14 24             	mov    %edx,(%esp)
 85db2a5:	e8 96 42 00 00       	call   85df540 <_ZN20CDeathMatchBattleMgr13getDeathCountEi>
 85db2aa:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85db2ad:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85db2b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db2b4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db2ba:	89 04 24             	mov    %eax,(%esp)
 85db2bd:	e8 7a 06 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db2c2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85db2c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db2c9:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db2cf:	89 04 24             	mov    %eax,(%esp)
 85db2d2:	e8 65 06 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db2d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85db2da:	8b 40 04             	mov    0x4(%eax),%eax
 85db2dd:	83 f8 04             	cmp    $0x4,%eax
 85db2e0:	74 0f                	je     85db2f1 <_ZN8PvP_Room10pvp_rewardEv+0xa6f>
 85db2e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85db2e5:	8b 40 04             	mov    0x4(%eax),%eax
 85db2e8:	83 f8 05             	cmp    $0x5,%eax
 85db2eb:	0f 85 8c 00 00 00    	jne    85db37d <_ZN8PvP_Room10pvp_rewardEv+0xafb>
 85db2f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85db2f4:	8b 40 04             	mov    0x4(%eax),%eax
 85db2f7:	89 c7                	mov    %eax,%edi
 85db2f9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85db2fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85db2ff:	83 c2 0c             	add    $0xc,%edx
 85db302:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db305:	89 04 24             	mov    %eax,(%esp)
 85db308:	e8 1b 5d b2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85db30d:	89 c6                	mov    %eax,%esi
 85db30f:	8b 45 08             	mov    0x8(%ebp),%eax
 85db312:	89 04 24             	mov    %eax,(%esp)
 85db315:	e8 7a 26 c5 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85db31a:	89 c3                	mov    %eax,%ebx
 85db31c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85db323:	00 
 85db324:	c7 44 24 08 ab 0d 00 	movl   $0xdab,0x8(%esp)
 85db32b:	00 
 85db32c:	c7 44 24 04 6a 24 cc 	movl   $0x8cc246a,0x4(%esp)
 85db333:	08 
 85db334:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85db337:	89 04 24             	mov    %eax,(%esp)
 85db33a:	e8 d9 43 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85db33f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85db342:	89 44 24 20          	mov    %eax,0x20(%esp)
 85db346:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85db349:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85db34d:	89 7c 24 18          	mov    %edi,0x18(%esp)
 85db351:	89 74 24 14          	mov    %esi,0x14(%esp)
 85db355:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85db358:	89 44 24 10          	mov    %eax,0x10(%esp)
 85db35c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85db35f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85db363:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85db367:	c7 44 24 04 94 11 cc 	movl   $0x8cc1194,0x4(%esp)
 85db36e:	08 
 85db36f:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85db372:	89 04 24             	mov    %eax,(%esp)
 85db375:	e8 0e 44 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85db37a:	eb 01                	jmp    85db37d <_ZN8PvP_Room10pvp_rewardEv+0xafb>
 85db37c:	90                   	nop
 85db37d:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 85db381:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85db384:	3b 45 94             	cmp    -0x6c(%ebp),%eax
 85db387:	0f 9c c0             	setl   %al
 85db38a:	84 c0                	test   %al,%al
 85db38c:	0f 85 c0 fd ff ff    	jne    85db152 <_ZN8PvP_Room10pvp_rewardEv+0x8d0>
 85db392:	83 7d 94 00          	cmpl   $0x0,-0x6c(%ebp)
 85db396:	74 57                	je     85db3ef <_ZN8PvP_Room10pvp_rewardEv+0xb6d>
 85db398:	83 7d 98 ff          	cmpl   $0xffffffff,-0x68(%ebp)
 85db39c:	74 3b                	je     85db3d9 <_ZN8PvP_Room10pvp_rewardEv+0xb57>
 85db39e:	8b 55 98             	mov    -0x68(%ebp),%edx
 85db3a1:	8b 45 08             	mov    0x8(%ebp),%eax
 85db3a4:	83 c2 0c             	add    $0xc,%edx
 85db3a7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db3aa:	85 c0                	test   %eax,%eax
 85db3ac:	74 2b                	je     85db3d9 <_ZN8PvP_Room10pvp_rewardEv+0xb57>
 85db3ae:	8b 55 98             	mov    -0x68(%ebp),%edx
 85db3b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85db3b4:	83 c2 0c             	add    $0xc,%edx
 85db3b7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85db3ba:	89 04 24             	mov    %eax,(%esp)
 85db3bd:	e8 ba ef af ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85db3c2:	0f b7 c0             	movzwl %ax,%eax
 85db3c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db3c9:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db3cf:	89 04 24             	mov    %eax,(%esp)
 85db3d2:	e8 cd ea af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db3d7:	eb 16                	jmp    85db3ef <_ZN8PvP_Room10pvp_rewardEv+0xb6d>
 85db3d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85db3e0:	00 
 85db3e1:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db3e7:	89 04 24             	mov    %eax,(%esp)
 85db3ea:	e8 b5 ea af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db3ef:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85db3f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db3f6:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db3fc:	89 04 24             	mov    %eax,(%esp)
 85db3ff:	e8 a0 ea af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db404:	8b 45 80             	mov    -0x80(%ebp),%eax
 85db407:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db40b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db411:	89 04 24             	mov    %eax,(%esp)
 85db414:	e8 23 05 af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85db419:	0f b6 45 9e          	movzbl -0x62(%ebp),%eax
 85db41d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db421:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db427:	89 04 24             	mov    %eax,(%esp)
 85db42a:	e8 f1 04 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db42f:	e8 73 ef af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85db434:	89 04 24             	mov    %eax,(%esp)
 85db437:	e8 e4 b6 b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85db43c:	83 f8 0f             	cmp    $0xf,%eax
 85db43f:	0f 94 c0             	sete   %al
 85db442:	84 c0                	test   %al,%al
 85db444:	74 5c                	je     85db4a2 <_ZN8PvP_Room10pvp_rewardEv+0xc20>
 85db446:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 85db44d:	00 
 85db44e:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db451:	89 04 24             	mov    %eax,(%esp)
 85db454:	e8 2b 21 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85db459:	89 04 24             	mov    %eax,(%esp)
 85db45c:	e8 5b 49 00 00       	call   85dfdbc <_ZN8fair_pvp13CFairPvPScore29GetLastTrainingSealBonusCountEv>
 85db461:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db465:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db46b:	89 04 24             	mov    %eax,(%esp)
 85db46e:	e8 31 ea af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db473:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 85db47a:	00 
 85db47b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db47e:	89 04 24             	mov    %eax,(%esp)
 85db481:	e8 fe 20 b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85db486:	89 04 24             	mov    %eax,(%esp)
 85db489:	e8 3e 49 00 00       	call   85dfdcc <_ZN8fair_pvp13CFairPvPScore19GetRemainBonusCountEv>
 85db48e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db492:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db498:	89 04 24             	mov    %eax,(%esp)
 85db49b:	e8 04 ea af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db4a0:	eb 43                	jmp    85db4e5 <_ZN8PvP_Room10pvp_rewardEv+0xc63>
 85db4a2:	e8 00 ef af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85db4a7:	89 04 24             	mov    %eax,(%esp)
 85db4aa:	e8 71 b6 b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85db4af:	83 f8 10             	cmp    $0x10,%eax
 85db4b2:	0f 94 c0             	sete   %al
 85db4b5:	84 c0                	test   %al,%al
 85db4b7:	74 2c                	je     85db4e5 <_ZN8PvP_Room10pvp_rewardEv+0xc63>
 85db4b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85db4c0:	00 
 85db4c1:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db4c7:	89 04 24             	mov    %eax,(%esp)
 85db4ca:	e8 d5 e9 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db4cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85db4d6:	00 
 85db4d7:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db4dd:	89 04 24             	mov    %eax,(%esp)
 85db4e0:	e8 bf e9 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85db4e5:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db4e8:	89 04 24             	mov    %eax,(%esp)
 85db4eb:	e8 1a 72 08 00       	call   866270a <_ZNK5CUser18has_within_MissionEv>
 85db4f0:	66 85 c0             	test   %ax,%ax
 85db4f3:	74 07                	je     85db4fc <_ZN8PvP_Room10pvp_rewardEv+0xc7a>
 85db4f5:	b8 01 00 00 00       	mov    $0x1,%eax
 85db4fa:	eb 05                	jmp    85db501 <_ZN8PvP_Room10pvp_rewardEv+0xc7f>
 85db4fc:	b8 00 00 00 00       	mov    $0x0,%eax
 85db501:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db505:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db50b:	89 04 24             	mov    %eax,(%esp)
 85db50e:	e8 0d 04 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db513:	c6 45 bb ff          	movb   $0xff,-0x45(%ebp)
 85db517:	8b 45 08             	mov    0x8(%ebp),%eax
 85db51a:	8b 40 04             	mov    0x4(%eax),%eax
 85db51d:	83 f8 03             	cmp    $0x3,%eax
 85db520:	75 1b                	jne    85db53d <_ZN8PvP_Room10pvp_rewardEv+0xcbb>
 85db522:	8b 45 08             	mov    0x8(%ebp),%eax
 85db525:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85db52b:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85db52e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db532:	89 14 24             	mov    %edx,(%esp)
 85db535:	e8 b4 d7 f8 ff       	call   8568cee <_ZN15CRelayBattleMgr12GetKillCountEi>
 85db53a:	88 45 bb             	mov    %al,-0x45(%ebp)
 85db53d:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 85db541:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db545:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db54b:	89 04 24             	mov    %eax,(%esp)
 85db54e:	e8 cd 03 af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85db553:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85db55a:	00 
 85db55b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db561:	89 04 24             	mov    %eax,(%esp)
 85db564:	e8 ef 03 af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85db569:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db56f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db573:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db576:	89 04 24             	mov    %eax,(%esp)
 85db579:	e8 3c d0 06 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85db57e:	8b 45 08             	mov    0x8(%ebp),%eax
 85db581:	89 04 24             	mov    %eax,(%esp)
 85db584:	e8 43 24 c5 ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85db589:	83 f8 04             	cmp    $0x4,%eax
 85db58c:	74 10                	je     85db59e <_ZN8PvP_Room10pvp_rewardEv+0xd1c>
 85db58e:	8b 45 08             	mov    0x8(%ebp),%eax
 85db591:	89 04 24             	mov    %eax,(%esp)
 85db594:	e8 33 24 c5 ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85db599:	83 f8 05             	cmp    $0x5,%eax
 85db59c:	75 0e                	jne    85db5ac <_ZN8PvP_Room10pvp_rewardEv+0xd2a>
 85db59e:	8b 45 80             	mov    -0x80(%ebp),%eax
 85db5a1:	85 c0                	test   %eax,%eax
 85db5a3:	74 07                	je     85db5ac <_ZN8PvP_Room10pvp_rewardEv+0xd2a>
 85db5a5:	b8 01 00 00 00       	mov    $0x1,%eax
 85db5aa:	eb 05                	jmp    85db5b1 <_ZN8PvP_Room10pvp_rewardEv+0xd2f>
 85db5ac:	b8 00 00 00 00       	mov    $0x0,%eax
 85db5b1:	84 c0                	test   %al,%al
 85db5b3:	74 79                	je     85db62e <_ZN8PvP_Room10pvp_rewardEv+0xdac>
 85db5b5:	c7 85 4c ff ff ff 00 	movl   $0x0,-0xb4(%ebp)
 85db5bc:	00 00 00 
 85db5bf:	c7 85 48 ff ff ff 00 	movl   $0x0,-0xb8(%ebp)
 85db5c6:	00 00 00 
 85db5c9:	8b 45 80             	mov    -0x80(%ebp),%eax
 85db5cc:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85db5d3:	00 
 85db5d4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85db5db:	00 
 85db5dc:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 85db5e3:	00 
 85db5e4:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 85db5ea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85db5ee:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 85db5f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85db5f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db5fc:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db5ff:	89 04 24             	mov    %eax,(%esp)
 85db602:	e8 f7 ed 08 00       	call   866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>
 85db607:	84 c0                	test   %al,%al
 85db609:	74 23                	je     85db62e <_ZN8PvP_Room10pvp_rewardEv+0xdac>
 85db60b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85db612:	00 
 85db613:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85db61a:	00 
 85db61b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85db622:	00 
 85db623:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db626:	89 04 24             	mov    %eax,(%esp)
 85db629:	e8 2e 04 0a 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 85db62e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85db635:	e8 64 06 af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85db63a:	89 c3                	mov    %eax,%ebx
 85db63c:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db63f:	89 04 24             	mov    %eax,(%esp)
 85db642:	e8 13 e3 b1 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85db647:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85db64b:	89 04 24             	mov    %eax,(%esp)
 85db64e:	e8 39 43 00 00       	call   85df98c <_ZN8WongWork13CHackAnalyzer22setLastMonsterDeadTimeEl>
 85db653:	a1 30 f7 41 09       	mov    0x941f730,%eax
 85db658:	c7 44 24 04 37 00 00 	movl   $0x37,0x4(%esp)
 85db65f:	00 
 85db660:	89 04 24             	mov    %eax,(%esp)
 85db663:	e8 30 a3 b3 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 85db668:	8b 10                	mov    (%eax),%edx
 85db66a:	83 c2 34             	add    $0x34,%edx
 85db66d:	8b 12                	mov    (%edx),%edx
 85db66f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85db676:	00 
 85db677:	89 04 24             	mov    %eax,(%esp)
 85db67a:	ff d2                	call   *%edx
 85db67c:	84 c0                	test   %al,%al
 85db67e:	74 22                	je     85db6a2 <_ZN8PvP_Room10pvp_rewardEv+0xe20>
 85db680:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85db687:	00 
 85db688:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db68b:	89 04 24             	mov    %eax,(%esp)
 85db68e:	e8 f1 1e b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85db693:	8b 55 ac             	mov    -0x54(%ebp),%edx
 85db696:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db69a:	89 04 24             	mov    %eax,(%esp)
 85db69d:	e8 7a db c8 ff       	call   826921c <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser>
 85db6a2:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db6a5:	89 04 24             	mov    %eax,(%esp)
 85db6a8:	e8 b1 3a c5 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 85db6ad:	8b 50 08             	mov    0x8(%eax),%edx
 85db6b0:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 85db6b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db6b9:	89 04 24             	mov    %eax,(%esp)
 85db6bc:	e8 0d 91 ff ff       	call   85d47ce <_ZNK11RefPvpGrade11GetPvpGradeEi>
 85db6c1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85db6c4:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85db6c8:	7e 1a                	jle    85db6e4 <_ZN8PvP_Room10pvp_rewardEv+0xe62>
 85db6ca:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db6cd:	89 04 24             	mov    %eax,(%esp)
 85db6d0:	e8 89 3a c5 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 85db6d5:	8b 40 14             	mov    0x14(%eax),%eax
 85db6d8:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85db6db:	74 07                	je     85db6e4 <_ZN8PvP_Room10pvp_rewardEv+0xe62>
 85db6dd:	b8 01 00 00 00       	mov    $0x1,%eax
 85db6e2:	eb 05                	jmp    85db6e9 <_ZN8PvP_Room10pvp_rewardEv+0xe67>
 85db6e4:	b8 00 00 00 00       	mov    $0x0,%eax
 85db6e9:	84 c0                	test   %al,%al
 85db6eb:	74 6d                	je     85db75a <_ZN8PvP_Room10pvp_rewardEv+0xed8>
 85db6ed:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db6f0:	89 04 24             	mov    %eax,(%esp)
 85db6f3:	e8 cc 07 f1 ff       	call   84ebec4 <_ZN15CUserCharacInfo16getPVPResultRefWEv>
 85db6f8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85db6fb:	89 50 14             	mov    %edx,0x14(%eax)
 85db6fe:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85db705:	00 
 85db706:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db709:	89 04 24             	mov    %eax,(%esp)
 85db70c:	e8 73 1e b0 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85db711:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85db714:	8b 45 ac             	mov    -0x54(%ebp),%eax
 85db717:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db71b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85db71e:	89 04 24             	mov    %eax,(%esp)
 85db721:	e8 26 97 00 00       	call   85e4e4c <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser>
 85db726:	e8 7c ec af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85db72b:	8b 55 ac             	mov    -0x54(%ebp),%edx
 85db72e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db732:	89 04 24             	mov    %eax,(%esp)
 85db735:	e8 c2 cc 0e 00       	call   86c83fc <_ZN9GameWorld17send_AllBasicInfoEP5CUser>
 85db73a:	eb 1e                	jmp    85db75a <_ZN8PvP_Room10pvp_rewardEv+0xed8>
 85db73c:	89 d3                	mov    %edx,%ebx
 85db73e:	89 c6                	mov    %eax,%esi
 85db740:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db746:	89 04 24             	mov    %eax,(%esp)
 85db749:	e8 32 27 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85db74e:	89 f0                	mov    %esi,%eax
 85db750:	89 da                	mov    %ebx,%edx
 85db752:	89 04 24             	mov    %eax,(%esp)
 85db755:	e8 f6 7f 50 00       	call   8ae3750 <_Unwind_Resume>
 85db75a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85db760:	89 04 24             	mov    %eax,(%esp)
 85db763:	e8 18 27 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85db768:	eb 01                	jmp    85db76b <_ZN8PvP_Room10pvp_rewardEv+0xee9>
 85db76a:	90                   	nop
 85db76b:	83 45 a8 01          	addl   $0x1,-0x58(%ebp)
 85db76f:	83 7d a8 07          	cmpl   $0x7,-0x58(%ebp)
 85db773:	0f 9e c0             	setle  %al
 85db776:	84 c0                	test   %al,%al
 85db778:	0f 85 2e f2 ff ff    	jne    85da9ac <_ZN8PvP_Room10pvp_rewardEv+0x12a>
 85db77e:	e8 24 ec af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85db783:	89 04 24             	mov    %eax,(%esp)
 85db786:	e8 95 b3 b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85db78b:	83 f8 06             	cmp    $0x6,%eax
 85db78e:	0f 94 c0             	sete   %al
 85db791:	84 c0                	test   %al,%al
 85db793:	74 31                	je     85db7c6 <_ZN8PvP_Room10pvp_rewardEv+0xf44>
 85db795:	8b 45 08             	mov    0x8(%ebp),%eax
 85db798:	8d 58 30             	lea    0x30(%eax),%ebx
 85db79b:	8b 45 08             	mov    0x8(%ebp),%eax
 85db79e:	8b 40 04             	mov    0x4(%eax),%eax
 85db7a1:	0f be d0             	movsbl %al,%edx
 85db7a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85db7a7:	8b 00                	mov    (%eax),%eax
 85db7a9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85db7ac:	81 c1 c4 00 00 00    	add    $0xc4,%ecx
 85db7b2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85db7b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85db7ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 85db7be:	89 0c 24             	mov    %ecx,(%esp)
 85db7c1:	e8 0a 23 00 00       	call   85ddad0 <_ZN16PvP_GuildWar_Log19WriteGuildWarPvPLogEicPP5CUser>
 85db7c6:	8b 45 08             	mov    0x8(%ebp),%eax
 85db7c9:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85db7cf:	8b 00                	mov    (%eax),%eax
 85db7d1:	83 c0 50             	add    $0x50,%eax
 85db7d4:	8b 08                	mov    (%eax),%ecx
 85db7d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85db7d9:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85db7df:	8b 55 08             	mov    0x8(%ebp),%edx
 85db7e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85db7e6:	89 04 24             	mov    %eax,(%esp)
 85db7e9:	ff d1                	call   *%ecx
 85db7eb:	81 c4 fc 00 00 00    	add    $0xfc,%esp
 85db7f1:	5b                   	pop    %ebx
 85db7f2:	5e                   	pop    %esi
 85db7f3:	5f                   	pop    %edi
 85db7f4:	5d                   	pop    %ebp
 85db7f5:	c3                   	ret

```

```c
// PvP_Room::pvp_reward @ 0x85da882

/* PvP_Room::pvp_reward() */

void __thiscall PvP_Room::pvp_reward(PvP_Room *this)

{
  code *pcVar1;
  CUser *pCVar2;
  char cVar3;
  short sVar4;
  GameWorld *pGVar5;
  undefined4 uVar6;
  CDisconnectDetecter *this_00;
  int *piVar7;
  CStatisticServerProxy *this_01;
  CFairPvPScore *pCVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  CHackAnalyzer *this_02;
  CPvPLiveEventData *this_03;
  int iVar14;
  bool bVar15;
  int local_dc [8];
  undefined4 local_bc;
  undefined4 local_b8;
  bool local_b1;
  MissionClearCondition_Parameter local_b0;
  undefined2 local_af;
  Packet_Server_Match_data local_a1 [10];
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  PacketGuard local_94 [12];
  int local_88;
  uint local_84;
  cMyTrace local_80 [16];
  int local_70;
  int local_6c;
  byte local_66;
  byte local_65;
  int local_64;
  char local_5d;
  int local_5c;
  CUser *local_58;
  uint local_54;
  int local_50;
  byte local_49;
  CMissionList_Charac *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CMissionList_Charac *local_20;
  
  local_70 = GetRanking(this,local_dc);
  local_6c = GetAce(this);
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsPVPChannel(pGVar5);
  if (cVar3 != '\0') {
    pGVar5 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsFreePvPChannel(pGVar5);
    if (cVar3 != '\x01') {
      CalcuateVictoryPoint(this,local_dc,local_70);
    }
  }
  local_66 = 1;
  for (local_64 = 0; local_64 < 8; local_64 = local_64 + 1) {
    if ((this[local_64 + 0x5c8] != (PvP_Room)0x0) &&
       (cVar3 = IsPvpObserver(this,local_64), cVar3 != '\x01')) {
      local_65 = (byte)local_64;
      local_66 = 0;
      break;
    }
  }
  local_5d = check_acquire_guild_point(this);
  pcVar1 = *(code **)(**(int **)(this + 0x6e4) + 0x4c);
  bVar15 = local_66 == 1;
  uVar6 = get_team(this,(uint)local_65);
  (*pcVar1)(*(undefined4 *)(this + 0x6e4),this,uVar6,bVar15);
  local_5c = 0;
  do {
    if (7 < local_5c) {
      pGVar5 = (GameWorld *)G_GameWorld();
      iVar14 = GameWorld::GetChannelType(pGVar5);
      if (iVar14 == 6) {
        PvP_GuildWar_Log::WriteGuildWarPvPLog
                  ((PvP_GuildWar_Log *)(this + 0xc4),*(int *)this,(char)*(undefined4 *)(this + 4),
                   (CUser **)(this + 0x30));
      }
      (**(code **)(**(int **)(this + 0x6e4) + 0x50))(*(undefined4 *)(this + 0x6e4),this);
      return;
    }
    local_58 = *(CUser **)(this + (local_5c + 0xc) * 4);
    if (local_58 != (CUser *)0x0) {
      pCVar2 = *(CUser **)(this + (local_5c + 0xc) * 4);
      this_00 = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
      disconnect_detecter::CDisconnectDetecter::UnregisterUser(this_00,pCVar2);
      iVar14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUser::add_pvp_play_info(local_58,iVar14 - *(int *)(this + 0x618),1);
      pGVar5 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
      if (cVar3 == '\0') {
LAB_085daa6e:
        bVar15 = false;
      }
      else {
        piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x38);
        cVar3 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
        if ((cVar3 == '\0') || (cVar3 = IsPvpObserver(this,local_5c), cVar3 == '\x01'))
        goto LAB_085daa6e;
        bVar15 = true;
      }
      if ((bVar15) && (iVar14 = CUser::GetServerGroup(local_58), iVar14 != 0)) {
        Packet_Server_Match_data::Packet_Server_Match_data(local_a1);
        local_97 = CUser::GetServerGroup(local_58);
        if (this[local_5c + 0x5c8] == (PvP_Room)0x0) {
          local_95 = 1;
        }
        else {
          local_96 = 1;
        }
        uVar6 = CUser::GetServerGroup(local_58);
        this_01 = (CStatisticServerProxy *)
                  CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                            (GlobalData::s_statistic_proxy_mgr,uVar6);
        CStatisticServerProxy::SendPacket(this_01,(char *)local_a1,0xd);
      }
      local_84 = 0;
      if (((local_5d == '\0') || (this[local_5c + 0x5c8] == (PvP_Room)0x0)) ||
         (cVar3 = IsPvpObserver(this,local_5c), cVar3 == '\x01')) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (bVar15) {
        CUser::add_guild_point_item(local_58);
      }
      local_48 = (CMissionList_Charac *)CUser::GetCharacExpandData(local_58,8);
      CMissionList_Charac::setIssue(local_48,(bool)this[local_5c + 0x5c8],*(int *)(this + 4) == 2);
      MissionClearCondition_Parameter::MissionClearCondition_Parameter
                (&local_b0,*(undefined4 *)(this + 4));
      local_af = CMissionList_Charac::getIssue_mode(local_48,*(int *)(this + 4) == 2);
      local_b1 = false;
      CMissionList_Charac::Update_Win_event(local_48,local_58,&local_b0,&local_b1);
      if (local_b1 != false) {
        iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58);
        local_44 = RefPvpGrade::GetPvpGrade(GlobalData::s_ref_pvp_grade,*(int *)(iVar14 + 8));
        iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58);
        if (*(int *)(iVar14 + 0x14) < local_44) {
          iVar14 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)local_58);
          *(int *)(iVar14 + 0x14) = local_44;
        }
      }
      CUser::send_MissionList(local_58);
      pGVar5 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsPVPChannel(pGVar5);
      if (cVar3 != '\0') {
        pGVar5 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsWinPointPvPChannel(pGVar5);
        if (cVar3 == '\0') {
          pGVar5 = (GameWorld *)G_GameWorld();
          iVar14 = GameWorld::GetChannelType(pGVar5);
          if (iVar14 == 6) {
            if (this[local_5c + 0x5c8] == (PvP_Room)0x0) {
              local_40 = -1;
            }
            else if (((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) ||
                    (*(int *)(this + 4) == 5)) {
              local_40 = 1;
            }
            else {
              local_3c = count_pvp_user(this);
              if (local_3c < 4) {
                local_40 = 1;
              }
              else if (3 < local_3c) {
                local_40 = 2;
              }
            }
            CUser::add_guild_pvp_result(local_58,local_40);
          }
        }
        else {
          CUser::add_pvp_result(local_58,(bool)this[local_5c + 0x5c8],&local_84);
          if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
            local_84 = 0;
          }
          if (this[local_5c + 0x5c8] != (PvP_Room)0x0) {
            if ((*(int *)(this + 4) == 1) || (*(int *)(this + 4) == 4)) {
              APSystem::CUserProc::ClearActionAndSendtoUser(local_58,0x12,0,0);
            }
            else if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 5)) {
              APSystem::CUserProc::ClearActionAndSendtoUser(local_58,0x13,0,0);
            }
            else if (*(int *)(this + 4) == 3) {
              APSystem::CUserProc::ClearActionAndSendtoUser(local_58,0x14,0,0);
            }
          }
        }
      }
      local_54 = 0xffff;
      local_50 = 0;
      local_88 = 0;
      if ((((*(int *)(this + 4) == 3) &&
           (local_50 = CRelayBattleMgr::GetAllKillUserIndex
                                 ((CRelayBattleMgr *)(this + 0x620),&local_88), -1 < local_50)) &&
          (local_50 < 8)) && (*(int *)(this + (local_50 + 0xc) * 4) != 0)) {
        local_54 = CUser::get_unique_id(*(CUser **)(this + (local_50 + 0xc) * 4));
        local_54 = local_54 & 0xffff;
      }
      PacketGuard::PacketGuard(local_94);
                    /* try { // try from 085daeda to 085db739 has its CatchHandler @ 085db73c */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0x2f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)local_65);
      pGVar5 = (GameWorld *)G_GameWorld();
      iVar14 = GameWorld::GetChannelType(pGVar5);
      if (iVar14 == 0xf) {
        pCVar8 = (CFairPvPScore *)CUser::GetCharacExpandData(local_58,7);
        iVar14 = fair_pvp::CFairPvPScore::GetLastTrainingSealCount(pCVar8);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
      }
      else {
        pGVar5 = (GameWorld *)G_GameWorld();
        iVar14 = GameWorld::GetChannelType(pGVar5);
        if (iVar14 == 0x10) {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0);
        }
        else {
          pGVar5 = (GameWorld *)G_GameWorld();
          iVar14 = GameWorld::GetChannelType(pGVar5);
          if (iVar14 == 0xe) {
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0);
          }
          else {
            iVar14 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)local_58);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
          }
        }
      }
      iVar14 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)local_58);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,iVar14);
      pGVar5 = (GameWorld *)G_GameWorld();
      iVar14 = GameWorld::GetChannelType(pGVar5);
      if (iVar14 == 6) {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,0);
      }
      else {
        iVar14 = CUserCharacInfo::get_pvp_result_exp_point((CUserCharacInfo *)local_58);
        local_38 = CUserCharacInfo::get_pvp_result_oldexp_point((CUserCharacInfo *)local_58);
        local_38 = iVar14 - local_38;
        if ((local_54 != 0xffff) && (*(int *)(this + (local_5c + 0x14) * 4) == local_88)) {
          iVar14 = GetTeamCount(this,local_88);
          local_38 = local_38 + (iVar14 * 5 * local_38) / 100;
        }
        iVar14 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)local_58);
        iVar9 = CUserCharacInfo::get_pvp_result_oldexp_point((CUserCharacInfo *)local_58);
        *(int *)(iVar14 + 8) = iVar9 + local_38;
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_38);
        uVar6 = CUserCharacInfo::get_pvp_result_oldexp_point((CUserCharacInfo *)local_58);
        iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58);
        CUser::LogHistory(local_58,"PvPExp,%d,%d,%d",*(undefined4 *)(iVar14 + 8),uVar6,local_38);
      }
      sVar4 = CUser::has_within_Mission(local_58);
      if (sVar4 == 0) {
        CUser::acceptable_within_mission(local_58);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,local_70);
      for (local_34 = 0; local_34 < local_70; local_34 = local_34 + 1) {
        local_30 = local_dc[local_34];
        if (*(int *)(this + (local_30 + 0xc) * 4) != 0) {
          uVar12 = CUser::get_unique_id(*(CUser **)(this + (local_30 + 0xc) * 4));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,uVar12 & 0xffff);
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_94,*(int *)(this + (local_30 + 0x1c) * 4 + 8));
          iVar14 = CUserCharacInfo::get_pvp_grade
                             (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,iVar14);
          iVar14 = CUserCharacInfo::get_pvp_result_exp_point
                             (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
          iVar14 = CUserCharacInfo::get_pvp_grade
                             (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
          iVar14 = RefPvpGrade::GetPvpCurrRankPoint(GlobalData::s_ref_pvp_grade,iVar14);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
          iVar14 = CUserCharacInfo::get_pvp_grade
                             (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
          iVar14 = RefPvpGrade::GetPvpNextRankPoint(GlobalData::s_ref_pvp_grade,iVar14);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,iVar14);
          local_2c = CDeathMatchBattleMgr::getKillCount
                               ((CDeathMatchBattleMgr *)(this + 0x69c),local_30);
          local_28 = CDeathMatchBattleMgr::getDeathCount
                               ((CDeathMatchBattleMgr *)(this + 0x69c),local_30);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_2c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_28);
          if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
            uVar6 = *(undefined4 *)(this + 4);
            uVar10 = CUserCharacInfo::getCurCharacName
                               (*(CUserCharacInfo **)(this + (local_30 + 0xc) * 4));
            uVar11 = get_index(this);
            cMyTrace::cMyTrace(local_80,"void PvP_Room::pvp_reward()",0xdab,0);
            cMyTrace::operator()
                      (local_80,
                       "<PVP_REWARD> Room(%d), iRank(%d), iRankMember(%d), Player(%s), mode(%d), KillCnt(%d), DeathCnt(%d)"
                       ,uVar11,local_34,local_30,uVar10,uVar6,local_2c,local_28);
          }
        }
      }
      if (local_70 != 0) {
        if ((local_6c == -1) || (*(int *)(this + (local_6c + 0xc) * 4) == 0)) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
        }
        else {
          uVar12 = CUser::get_unique_id(*(CUser **)(this + (local_6c + 0xc) * 4));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,uVar12 & 0xffff);
        }
      }
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,local_54);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_84);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)local_66);
      pGVar5 = (GameWorld *)G_GameWorld();
      iVar14 = GameWorld::GetChannelType(pGVar5);
      if (iVar14 == 0xf) {
        pCVar8 = (CFairPvPScore *)CUser::GetCharacExpandData(local_58,7);
        iVar14 = fair_pvp::CFairPvPScore::GetLastTrainingSealBonusCount(pCVar8);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,iVar14);
        pCVar8 = (CFairPvPScore *)CUser::GetCharacExpandData(local_58,7);
        iVar14 = fair_pvp::CFairPvPScore::GetRemainBonusCount(pCVar8);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,iVar14);
      }
      else {
        pGVar5 = (GameWorld *)G_GameWorld();
        iVar14 = GameWorld::GetChannelType(pGVar5);
        if (iVar14 == 0x10) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
        }
      }
      sVar4 = CUser::has_within_Mission(local_58);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)(sVar4 != 0));
      local_49 = 0xff;
      if (*(int *)(this + 4) == 3) {
        local_49 = CRelayBattleMgr::GetKillCount((CRelayBattleMgr *)(this + 0x620),local_5c);
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(uint)local_49);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
      CUser::Send(local_58,local_94);
      iVar14 = get_pvp_battle_mode(this);
      if (((iVar14 == 4) || (iVar14 = get_pvp_battle_mode(this), iVar14 == 5)) && (local_84 != 0)) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        local_b8 = 0;
        local_bc = 0;
        cVar3 = CUser::gain_exp_sp(local_58,local_84,&local_b8,&local_bc,10,0,0);
        if (cVar3 != '\0') {
          CUser::SendNotiPacket(local_58,2,2,1);
        }
      }
      lVar13 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      this_02 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_58);
      WongWork::CHackAnalyzer::setLastMonsterDeadTime(this_02,lVar13);
      piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x37);
      cVar3 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
      if (cVar3 != '\0') {
        this_03 = (CPvPLiveEventData *)CUser::GetCharacExpandData(local_58,3);
        CPvPLiveEventData::IncreasePlayCount(this_03,local_58);
      }
      iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58);
      local_24 = RefPvpGrade::GetPvpGrade(GlobalData::s_ref_pvp_grade,*(int *)(iVar14 + 8));
      if ((local_24 < 1) ||
         (iVar14 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)local_58),
         *(int *)(iVar14 + 0x14) == local_24)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (bVar15) {
        iVar14 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)local_58);
        *(int *)(iVar14 + 0x14) = local_24;
        local_20 = (CMissionList_Charac *)CUser::GetCharacExpandData(local_58,8);
        CMissionList_Charac::MakeMissionList_forOldUser(local_20,local_58);
        pGVar5 = (GameWorld *)G_GameWorld();
        GameWorld::send_AllBasicInfo(pGVar5,local_58);
      }
      PacketGuard::~PacketGuard(local_94);
    }
    local_5c = local_5c + 1;
  } while( true );
}

```

---

## recv_pvp_end_result_all

```asm
// === 085dc07e PvP_Room::recv_pvp_end_result_all  [0x085dc07e-0x85dc0ef] ===
 85dc07e:	55                   	push   %ebp
 85dc07f:	89 e5                	mov    %esp,%ebp
 85dc081:	83 ec 18             	sub    $0x18,%esp
 85dc084:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85dc08b:	eb 51                	jmp    85dc0de <_ZNK8PvP_Room23recv_pvp_end_result_allEv+0x60>
 85dc08d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc090:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc093:	83 c2 0c             	add    $0xc,%edx
 85dc096:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc099:	85 c0                	test   %eax,%eax
 85dc09b:	74 39                	je     85dc0d6 <_ZNK8PvP_Room23recv_pvp_end_result_allEv+0x58>
 85dc09d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc0a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc0a3:	83 c2 14             	add    $0x14,%edx
 85dc0a6:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc0a9:	3d ff 00 00 00       	cmp    $0xff,%eax
 85dc0ae:	74 29                	je     85dc0d9 <_ZNK8PvP_Room23recv_pvp_end_result_allEv+0x5b>
 85dc0b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc0b3:	8d 90 bc 05 00 00    	lea    0x5bc(%eax),%edx
 85dc0b9:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dc0bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc0c0:	89 14 24             	mov    %edx,(%esp)
 85dc0c3:	e8 28 9f ff ff       	call   85d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>
 85dc0c8:	83 f0 01             	xor    $0x1,%eax
 85dc0cb:	84 c0                	test   %al,%al
 85dc0cd:	74 0b                	je     85dc0da <_ZNK8PvP_Room23recv_pvp_end_result_allEv+0x5c>
 85dc0cf:	b8 00 00 00 00       	mov    $0x0,%eax
 85dc0d4:	eb 18                	jmp    85dc0ee <_ZNK8PvP_Room23recv_pvp_end_result_allEv+0x70>
 85dc0d6:	90                   	nop
 85dc0d7:	eb 01                	jmp    85dc0da <_ZNK8PvP_Room23recv_pvp_end_result_allEv+0x5c>
 85dc0d9:	90                   	nop
 85dc0da:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85dc0de:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85dc0e2:	0f 9e c0             	setle  %al
 85dc0e5:	84 c0                	test   %al,%al
 85dc0e7:	75 a4                	jne    85dc08d <_ZNK8PvP_Room23recv_pvp_end_result_allEv+0xf>
 85dc0e9:	b8 01 00 00 00       	mov    $0x1,%eax
 85dc0ee:	c9                   	leave
 85dc0ef:	c3                   	ret

```

```c
// PvP_Room::recv_pvp_end_result_all @ 0x85dc07e

/* PvP_Room::recv_pvp_end_result_all() const */

undefined4 __thiscall PvP_Room::recv_pvp_end_result_all(PvP_Room *this)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return 1;
    }
    if (((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_8 + 0x14) * 4) != 0xff)) &&
       (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5bc),local_8),
       cVar1 != '\x01')) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

```

---

## recv_pvp_end_result_team

```asm
// === 085dc0f0 PvP_Room::recv_pvp_end_result_team  [0x085dc0f0-0x85dc1c7] ===
 85dc0f0:	55                   	push   %ebp
 85dc0f1:	89 e5                	mov    %esp,%ebp
 85dc0f3:	83 ec 18             	sub    $0x18,%esp
 85dc0f6:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85dc0fd:	c7 45 fc ff 00 00 00 	movl   $0xff,-0x4(%ebp)
 85dc104:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85dc10b:	eb 36                	jmp    85dc143 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0x53>
 85dc10d:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dc110:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc113:	83 c2 0c             	add    $0xc,%edx
 85dc116:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc119:	85 c0                	test   %eax,%eax
 85dc11b:	74 22                	je     85dc13f <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0x4f>
 85dc11d:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dc120:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc123:	83 c2 0c             	add    $0xc,%edx
 85dc126:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc129:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85dc12c:	75 11                	jne    85dc13f <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0x4f>
 85dc12e:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dc131:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc134:	83 c2 14             	add    $0x14,%edx
 85dc137:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc13a:	89 45 fc             	mov    %eax,-0x4(%ebp)
 85dc13d:	eb 0f                	jmp    85dc14e <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0x5e>
 85dc13f:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85dc143:	83 7d f8 07          	cmpl   $0x7,-0x8(%ebp)
 85dc147:	0f 9e c0             	setle  %al
 85dc14a:	84 c0                	test   %al,%al
 85dc14c:	75 bf                	jne    85dc10d <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0x1d>
 85dc14e:	81 7d fc ff 00 00 00 	cmpl   $0xff,-0x4(%ebp)
 85dc155:	75 07                	jne    85dc15e <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0x6e>
 85dc157:	b8 00 00 00 00       	mov    $0x0,%eax
 85dc15c:	eb 68                	jmp    85dc1c6 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0xd6>
 85dc15e:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85dc165:	eb 4f                	jmp    85dc1b6 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0xc6>
 85dc167:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dc16a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc16d:	83 c2 0c             	add    $0xc,%edx
 85dc170:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc173:	85 c0                	test   %eax,%eax
 85dc175:	74 37                	je     85dc1ae <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0xbe>
 85dc177:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85dc17a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc17d:	83 c2 14             	add    $0x14,%edx
 85dc180:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc183:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 85dc186:	75 29                	jne    85dc1b1 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0xc1>
 85dc188:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc18b:	8d 90 bc 05 00 00    	lea    0x5bc(%eax),%edx
 85dc191:	8b 45 f8             	mov    -0x8(%ebp),%eax
 85dc194:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc198:	89 14 24             	mov    %edx,(%esp)
 85dc19b:	e8 50 9e ff ff       	call   85d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>
 85dc1a0:	83 f0 01             	xor    $0x1,%eax
 85dc1a3:	84 c0                	test   %al,%al
 85dc1a5:	74 0b                	je     85dc1b2 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0xc2>
 85dc1a7:	b8 00 00 00 00       	mov    $0x0,%eax
 85dc1ac:	eb 18                	jmp    85dc1c6 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0xd6>
 85dc1ae:	90                   	nop
 85dc1af:	eb 01                	jmp    85dc1b2 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0xc2>
 85dc1b1:	90                   	nop
 85dc1b2:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85dc1b6:	83 7d f8 07          	cmpl   $0x7,-0x8(%ebp)
 85dc1ba:	0f 9e c0             	setle  %al
 85dc1bd:	84 c0                	test   %al,%al
 85dc1bf:	75 a6                	jne    85dc167 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser+0x77>
 85dc1c1:	b8 01 00 00 00       	mov    $0x1,%eax
 85dc1c6:	c9                   	leave
 85dc1c7:	c3                   	ret

```

```c
// PvP_Room::recv_pvp_end_result_team @ 0x85dc0f0

/* PvP_Room::recv_pvp_end_result_team(CUser*) const */

undefined4 __thiscall PvP_Room::recv_pvp_end_result_team(PvP_Room *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  local_8 = 0xff;
  local_c = 0;
  do {
    if (7 < local_c) {
LAB_085dc14e:
      if (local_8 == 0xff) {
        uVar2 = 0;
      }
      else {
        for (local_c = 0; local_c < 8; local_c = local_c + 1) {
          if (((*(int *)(this + (local_c + 0xc) * 4) != 0) &&
              (*(int *)(this + (local_c + 0x14) * 4) == local_8)) &&
             (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5bc),local_c),
             cVar1 != '\x01')) {
            return 0;
          }
        }
        uVar2 = 1;
      }
      return uVar2;
    }
    if ((*(int *)(this + (local_c + 0xc) * 4) != 0) &&
       (*(CUser **)(this + (local_c + 0xc) * 4) == param_1)) {
      local_8 = *(int *)(this + (local_c + 0x14) * 4);
      goto LAB_085dc14e;
    }
    local_c = local_c + 1;
  } while( true );
}

```

---

## recv_pvp_rank_all

```asm
// === 085dc4ba PvP_Room::recv_pvp_rank_all  [0x085dc4ba-0x85dc52b] ===
 85dc4ba:	55                   	push   %ebp
 85dc4bb:	89 e5                	mov    %esp,%ebp
 85dc4bd:	83 ec 18             	sub    $0x18,%esp
 85dc4c0:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85dc4c7:	eb 51                	jmp    85dc51a <_ZNK8PvP_Room17recv_pvp_rank_allEv+0x60>
 85dc4c9:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc4cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc4cf:	83 c2 0c             	add    $0xc,%edx
 85dc4d2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc4d5:	85 c0                	test   %eax,%eax
 85dc4d7:	74 39                	je     85dc512 <_ZNK8PvP_Room17recv_pvp_rank_allEv+0x58>
 85dc4d9:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85dc4dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc4df:	83 c2 14             	add    $0x14,%edx
 85dc4e2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc4e5:	3d ff 00 00 00       	cmp    $0xff,%eax
 85dc4ea:	74 29                	je     85dc515 <_ZNK8PvP_Room17recv_pvp_rank_allEv+0x5b>
 85dc4ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc4ef:	8d 90 b4 05 00 00    	lea    0x5b4(%eax),%edx
 85dc4f5:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85dc4f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc4fc:	89 14 24             	mov    %edx,(%esp)
 85dc4ff:	e8 ec 9a ff ff       	call   85d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>
 85dc504:	83 f0 01             	xor    $0x1,%eax
 85dc507:	84 c0                	test   %al,%al
 85dc509:	74 0b                	je     85dc516 <_ZNK8PvP_Room17recv_pvp_rank_allEv+0x5c>
 85dc50b:	b8 00 00 00 00       	mov    $0x0,%eax
 85dc510:	eb 18                	jmp    85dc52a <_ZNK8PvP_Room17recv_pvp_rank_allEv+0x70>
 85dc512:	90                   	nop
 85dc513:	eb 01                	jmp    85dc516 <_ZNK8PvP_Room17recv_pvp_rank_allEv+0x5c>
 85dc515:	90                   	nop
 85dc516:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85dc51a:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85dc51e:	0f 9e c0             	setle  %al
 85dc521:	84 c0                	test   %al,%al
 85dc523:	75 a4                	jne    85dc4c9 <_ZNK8PvP_Room17recv_pvp_rank_allEv+0xf>
 85dc525:	b8 01 00 00 00       	mov    $0x1,%eax
 85dc52a:	c9                   	leave
 85dc52b:	c3                   	ret

```

```c
// PvP_Room::recv_pvp_rank_all @ 0x85dc4ba

/* PvP_Room::recv_pvp_rank_all() const */

undefined4 __thiscall PvP_Room::recv_pvp_rank_all(PvP_Room *this)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return 1;
    }
    if (((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_8 + 0x14) * 4) != 0xff)) &&
       (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5b4),local_8),
       cVar1 != '\x01')) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

```

---

## request_fight

```asm
// === 085ddfbe PvP_Room::request_fight  [0x085ddfbe-0x85de019] ===
 85ddfbe:	55                   	push   %ebp
 85ddfbf:	89 e5                	mov    %esp,%ebp
 85ddfc1:	83 ec 28             	sub    $0x28,%esp
 85ddfc4:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddfc7:	0f b6 80 14 06 00 00 	movzbl 0x614(%eax),%eax
 85ddfce:	84 c0                	test   %al,%al
 85ddfd0:	74 07                	je     85ddfd9 <_ZN8PvP_Room13request_fightEP5CUser+0x1b>
 85ddfd2:	b8 01 00 00 00       	mov    $0x1,%eax
 85ddfd7:	eb 3f                	jmp    85de018 <_ZN8PvP_Room13request_fightEP5CUser+0x5a>
 85ddfd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ddfdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ddfe0:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddfe3:	89 04 24             	mov    %eax,(%esp)
 85ddfe6:	e8 f7 b1 ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85ddfeb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ddfee:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ddff2:	79 07                	jns    85ddffb <_ZN8PvP_Room13request_fightEP5CUser+0x3d>
 85ddff4:	b8 00 00 00 00       	mov    $0x0,%eax
 85ddff9:	eb 1d                	jmp    85de018 <_ZN8PvP_Room13request_fightEP5CUser+0x5a>
 85ddffb:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddffe:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85de004:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85de007:	89 44 24 04          	mov    %eax,0x4(%esp)
 85de00b:	89 14 24             	mov    %edx,(%esp)
 85de00e:	e8 79 01 00 00       	call   85de18c <_ZN15CRelayBattleMgr14OnRequestFightEi>
 85de013:	b8 01 00 00 00       	mov    $0x1,%eax
 85de018:	c9                   	leave
 85de019:	c3                   	ret

```

```c
// PvP_Room::request_fight @ 0x85ddfbe

/* PvP_Room::request_fight(CUser*) */

undefined4 __thiscall PvP_Room::request_fight(PvP_Room *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (this[0x614] == (PvP_Room)0x0) {
    iVar2 = get_user_seat(this,param_1);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      CRelayBattleMgr::OnRequestFight((CRelayBattleMgr *)(this + 0x620),iVar2);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## reset

```asm
// === 085d62c8 PvP_Room::reset  [0x085d62c8-0x85d642f] ===
 85d62c8:	55                   	push   %ebp
 85d62c9:	89 e5                	mov    %esp,%ebp
 85d62cb:	83 ec 28             	sub    $0x28,%esp
 85d62ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85d62d1:	89 04 24             	mov    %eax,(%esp)
 85d62d4:	e8 57 01 00 00       	call   85d6430 <_ZN8PvP_Room12battle_resetEv>
 85d62d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d62dc:	89 04 24             	mov    %eax,(%esp)
 85d62df:	e8 56 96 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d62e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d62e7:	c7 80 00 06 00 00 00 	movl   $0x0,0x600(%eax)
 85d62ee:	00 00 00 
 85d62f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d62f4:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 85d62fb:	00 00 00 
 85d62fe:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6301:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 85d6308:	8b 45 08             	mov    0x8(%ebp),%eax
 85d630b:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 85d630f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6312:	83 c0 09             	add    $0x9,%eax
 85d6315:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 85d631c:	00 
 85d631d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d6324:	00 
 85d6325:	89 04 24             	mov    %eax,(%esp)
 85d6328:	e8 93 79 aa ff       	call   807dcc0 <memset@plt>
 85d632d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6330:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 85d6337:	8b 45 08             	mov    0x8(%ebp),%eax
 85d633a:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 85d6341:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d6348:	eb 2f                	jmp    85d6379 <_ZN8PvP_Room5resetEv+0xb1>
 85d634a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d634d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6350:	83 c2 0c             	add    $0xc,%edx
 85d6353:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d635a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d635d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6360:	83 c2 14             	add    $0x14,%edx
 85d6363:	c7 04 90 ff 00 00 00 	movl   $0xff,(%eax,%edx,4)
 85d636a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d636d:	8b 55 08             	mov    0x8(%ebp),%edx
 85d6370:	c6 44 02 70 00       	movb   $0x0,0x70(%edx,%eax,1)
 85d6375:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d6379:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d637d:	0f 9e c0             	setle  %al
 85d6380:	84 c0                	test   %al,%al
 85d6382:	75 c6                	jne    85d634a <_ZN8PvP_Room5resetEv+0x82>
 85d6384:	e8 1e 40 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d6389:	89 04 24             	mov    %eax,(%esp)
 85d638c:	e8 8f 07 b4 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d6391:	83 f8 06             	cmp    $0x6,%eax
 85d6394:	0f 94 c0             	sete   %al
 85d6397:	84 c0                	test   %al,%al
 85d6399:	74 10                	je     85d63ab <_ZN8PvP_Room5resetEv+0xe3>
 85d639b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d639e:	05 c4 00 00 00       	add    $0xc4,%eax
 85d63a3:	89 04 24             	mov    %eax,(%esp)
 85d63a6:	e8 ef 76 00 00       	call   85dda9a <_ZN16PvP_GuildWar_Log5ClearEv>
 85d63ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85d63ae:	05 20 06 00 00       	add    $0x620,%eax
 85d63b3:	89 04 24             	mov    %eax,(%esp)
 85d63b6:	e8 8b 7c 00 00       	call   85de046 <_ZN15CRelayBattleMgr5ResetEv>
 85d63bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d63be:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d63c4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d63c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d63cb:	89 14 24             	mov    %edx,(%esp)
 85d63ce:	e8 4b 95 00 00       	call   85df91e <_ZN15CRelayBattleMgr9SetParentEP8PvP_Room>
 85d63d3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d63d6:	05 9c 06 00 00       	add    $0x69c,%eax
 85d63db:	89 04 24             	mov    %eax,(%esp)
 85d63de:	e8 3f 8a 00 00       	call   85dee22 <_ZN20CDeathMatchBattleMgr5ResetEv>
 85d63e3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d63e6:	8d 90 9c 06 00 00    	lea    0x69c(%eax),%edx
 85d63ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85d63ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d63f3:	89 14 24             	mov    %edx,(%esp)
 85d63f6:	e8 31 95 00 00       	call   85df92c <_ZN20CDeathMatchBattleMgr9SetParentEP8PvP_Room>
 85d63fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d63fe:	c6 80 14 06 00 00 00 	movb   $0x0,0x614(%eax)
 85d6405:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6408:	c6 80 15 06 00 00 00 	movb   $0x0,0x615(%eax)
 85d640f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6412:	c6 80 16 06 00 00 00 	movb   $0x0,0x616(%eax)
 85d6419:	8b 45 08             	mov    0x8(%ebp),%eax
 85d641c:	c6 80 17 06 00 00 00 	movb   $0x0,0x617(%eax)
 85d6423:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6426:	89 04 24             	mov    %eax,(%esp)
 85d6429:	e8 12 95 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d642e:	c9                   	leave
 85d642f:	c3                   	ret

```

```c
// PvP_Room::reset @ 0x85d62c8

/* PvP_Room::reset() */

void __thiscall PvP_Room::reset(PvP_Room *this)

{
  GameWorld *this_00;
  int iVar1;
  int local_10;
  
  battle_reset(this);
  lock();
  *(undefined4 *)(this + 0x600) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 4) = 2;
  this[8] = (PvP_Room)0x0;
  memset(this + 9,0,0x1e);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0xc) * 4) = 0;
    *(undefined4 *)(this + (local_10 + 0x14) * 4) = 0xff;
    this[local_10 + 0x70] = (PvP_Room)0x0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 == 6) {
    PvP_GuildWar_Log::Clear((PvP_GuildWar_Log *)(this + 0xc4));
  }
  CRelayBattleMgr::Reset((CRelayBattleMgr *)(this + 0x620));
  CRelayBattleMgr::SetParent((CRelayBattleMgr *)(this + 0x620),this);
  CDeathMatchBattleMgr::Reset((CDeathMatchBattleMgr *)(this + 0x69c));
  CDeathMatchBattleMgr::SetParent((CDeathMatchBattleMgr *)(this + 0x69c),this);
  this[0x614] = (PvP_Room)0x0;
  this[0x615] = (PvP_Room)0x0;
  this[0x616] = (PvP_Room)0x0;
  this[0x617] = (PvP_Room)0x0;
  unlock();
  return;
}

```

---

## revengeMission

```asm
// === 085ddf36 PvP_Room::revengeMission  [0x085ddf36-0x85ddfbd] ===
 85ddf36:	55                   	push   %ebp
 85ddf37:	89 e5                	mov    %esp,%ebp
 85ddf39:	53                   	push   %ebx
 85ddf3a:	83 ec 34             	sub    $0x34,%esp
 85ddf3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ddf40:	88 45 e4             	mov    %al,-0x1c(%ebp)
 85ddf43:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85ddf4a:	eb 60                	jmp    85ddfac <_ZN8PvP_Room14revengeMissionEb+0x76>
 85ddf4c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85ddf4f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddf52:	83 c2 0c             	add    $0xc,%edx
 85ddf55:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85ddf58:	85 c0                	test   %eax,%eax
 85ddf5a:	74 4c                	je     85ddfa8 <_ZN8PvP_Room14revengeMissionEb+0x72>
 85ddf5c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85ddf5f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddf62:	83 c2 0c             	add    $0xc,%edx
 85ddf65:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85ddf68:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85ddf6f:	00 
 85ddf70:	89 04 24             	mov    %eax,(%esp)
 85ddf73:	e8 0c f6 af ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 85ddf78:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ddf7b:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 85ddf7f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddf82:	8b 50 04             	mov    0x4(%eax),%edx
 85ddf85:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85ddf88:	8b 45 08             	mov    0x8(%ebp),%eax
 85ddf8b:	83 c3 0c             	add    $0xc,%ebx
 85ddf8e:	8b 04 98             	mov    (%eax,%ebx,4),%eax
 85ddf91:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85ddf95:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ddf99:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ddf9d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ddfa0:	89 04 24             	mov    %eax,(%esp)
 85ddfa3:	e8 86 81 00 00       	call   85e612e <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb>
 85ddfa8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85ddfac:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85ddfb0:	0f 9e c0             	setle  %al
 85ddfb3:	84 c0                	test   %al,%al
 85ddfb5:	75 95                	jne    85ddf4c <_ZN8PvP_Room14revengeMissionEb+0x16>
 85ddfb7:	83 c4 34             	add    $0x34,%esp
 85ddfba:	5b                   	pop    %ebx
 85ddfbb:	5d                   	pop    %ebp
 85ddfbc:	c3                   	ret
 85ddfbd:	90                   	nop

```

```c
// PvP_Room::revengeMission @ 0x85ddf36

/* PvP_Room::revengeMission(bool) */

void __thiscall PvP_Room::revengeMission(PvP_Room *this,bool param_1)

{
  CMissionList_Charac *pCVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
      pCVar1 = (CMissionList_Charac *)
               CUser::GetCharacExpandData(*(CUser **)(this + (local_10 + 0xc) * 4),8);
      CMissionList_Charac::Update_Revenge_event
                (pCVar1,*(undefined4 *)(this + (local_10 + 0xc) * 4),*(undefined4 *)(this + 4),
                 param_1);
    }
  }
  return;
}

```

---

## select_new_manager

```asm
// === 085d7ef4 PvP_Room::select_new_manager  [0x085d7ef4-0x85d7f6b] ===
 85d7ef4:	55                   	push   %ebp
 85d7ef5:	89 e5                	mov    %esp,%ebp
 85d7ef7:	83 ec 10             	sub    $0x10,%esp
 85d7efa:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85d7f01:	eb 57                	jmp    85d7f5a <_ZN8PvP_Room18select_new_managerEv+0x66>
 85d7f03:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d7f06:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7f09:	83 c2 0c             	add    $0xc,%edx
 85d7f0c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7f0f:	85 c0                	test   %eax,%eax
 85d7f11:	74 43                	je     85d7f56 <_ZN8PvP_Room18select_new_managerEv+0x62>
 85d7f13:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d7f16:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7f19:	83 c2 0c             	add    $0xc,%edx
 85d7f1c:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85d7f1f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7f22:	8b 40 28             	mov    0x28(%eax),%eax
 85d7f25:	39 c2                	cmp    %eax,%edx
 85d7f27:	74 2d                	je     85d7f56 <_ZN8PvP_Room18select_new_managerEv+0x62>
 85d7f29:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d7f2c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7f2f:	83 c2 0c             	add    $0xc,%edx
 85d7f32:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85d7f35:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7f38:	89 50 28             	mov    %edx,0x28(%eax)
 85d7f3b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7f3e:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85d7f41:	89 50 2c             	mov    %edx,0x2c(%eax)
 85d7f44:	8b 45 fc             	mov    -0x4(%ebp),%eax
 85d7f47:	8b 55 08             	mov    0x8(%ebp),%edx
 85d7f4a:	c6 44 02 70 00       	movb   $0x0,0x70(%edx,%eax,1)
 85d7f4f:	b8 01 00 00 00       	mov    $0x1,%eax
 85d7f54:	eb 14                	jmp    85d7f6a <_ZN8PvP_Room18select_new_managerEv+0x76>
 85d7f56:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85d7f5a:	83 7d fc 07          	cmpl   $0x7,-0x4(%ebp)
 85d7f5e:	0f 9e c0             	setle  %al
 85d7f61:	84 c0                	test   %al,%al
 85d7f63:	75 9e                	jne    85d7f03 <_ZN8PvP_Room18select_new_managerEv+0xf>
 85d7f65:	b8 00 00 00 00       	mov    $0x0,%eax
 85d7f6a:	c9                   	leave
 85d7f6b:	c3                   	ret

```

```c
// PvP_Room::select_new_manager @ 0x85d7ef4

/* PvP_Room::select_new_manager() */

undefined4 __thiscall PvP_Room::select_new_manager(PvP_Room *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return 0;
    }
    if ((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
       (*(int *)(this + (local_8 + 0xc) * 4) != *(int *)(this + 0x28))) break;
    local_8 = local_8 + 1;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + (local_8 + 0xc) * 4);
  *(int *)(this + 0x2c) = local_8;
  this[local_8 + 0x70] = (PvP_Room)0x0;
  return 1;
}

```

---

## send_pvp_end

```asm
// === 085dc476 PvP_Room::send_pvp_end  [0x085dc476-0x85dc4b9] ===
 85dc476:	55                   	push   %ebp
 85dc477:	89 e5                	mov    %esp,%ebp
 85dc479:	83 ec 18             	sub    $0x18,%esp
 85dc47c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc47f:	c6 80 17 06 00 00 01 	movb   $0x1,0x617(%eax)
 85dc486:	e8 1c df af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dc48b:	89 04 24             	mov    %eax,(%esp)
 85dc48e:	e8 8d a6 b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85dc493:	83 f8 06             	cmp    $0x6,%eax
 85dc496:	0f 95 c0             	setne  %al
 85dc499:	84 c0                	test   %al,%al
 85dc49b:	74 0b                	je     85dc4a8 <_ZN8PvP_Room12send_pvp_endEv+0x32>
 85dc49d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc4a0:	89 04 24             	mov    %eax,(%esp)
 85dc4a3:	e8 be 03 00 00       	call   85dc866 <_ZN8PvP_Room16update_pvp_pointEv>
 85dc4a8:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc4ab:	89 04 24             	mov    %eax,(%esp)
 85dc4ae:	e8 cf e3 ff ff       	call   85da882 <_ZN8PvP_Room10pvp_rewardEv>
 85dc4b3:	b8 01 00 00 00       	mov    $0x1,%eax
 85dc4b8:	c9                   	leave
 85dc4b9:	c3                   	ret

```

```c
// PvP_Room::send_pvp_end @ 0x85dc476

/* PvP_Room::send_pvp_end() */

undefined4 __thiscall PvP_Room::send_pvp_end(PvP_Room *this)

{
  GameWorld *this_00;
  int iVar1;
  
  this[0x617] = (PvP_Room)0x1;
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 != 6) {
    update_pvp_point(this);
  }
  pvp_reward(this);
  return 1;
}

```

---

## send_to_pvp

```asm
// === 085dbe18 PvP_Room::send_to_pvp  [0x085dbe18-0x85dbe63] ===
 85dbe18:	55                   	push   %ebp
 85dbe19:	89 e5                	mov    %esp,%ebp
 85dbe1b:	83 ec 28             	sub    $0x28,%esp
 85dbe1e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85dbe25:	eb 2f                	jmp    85dbe56 <_ZN8PvP_Room11send_to_pvpER11PacketGuard+0x3e>
 85dbe27:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbe2a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbe2d:	83 c2 0c             	add    $0xc,%edx
 85dbe30:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbe33:	85 c0                	test   %eax,%eax
 85dbe35:	74 1b                	je     85dbe52 <_ZN8PvP_Room11send_to_pvpER11PacketGuard+0x3a>
 85dbe37:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbe3a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbe3d:	83 c2 0c             	add    $0xc,%edx
 85dbe40:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbe43:	8b 55 0c             	mov    0xc(%ebp),%edx
 85dbe46:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbe4a:	89 04 24             	mov    %eax,(%esp)
 85dbe4d:	e8 68 c7 06 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85dbe52:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85dbe56:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85dbe5a:	0f 9e c0             	setle  %al
 85dbe5d:	84 c0                	test   %al,%al
 85dbe5f:	75 c6                	jne    85dbe27 <_ZN8PvP_Room11send_to_pvpER11PacketGuard+0xf>
 85dbe61:	c9                   	leave
 85dbe62:	c3                   	ret
 85dbe63:	90                   	nop

```

```c
// PvP_Room::send_to_pvp @ 0x85dbe18

/* PvP_Room::send_to_pvp(PacketGuard&) */

void __thiscall PvP_Room::send_to_pvp(PvP_Room *this,PacketGuard *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
      CUser::Send(*(CUser **)(this + (local_10 + 0xc) * 4),param_1);
    }
  }
  return;
}

```

---

## send_to_pvp_team

```asm
// === 085dbe64 PvP_Room::send_to_pvp_team  [0x085dbe64-0x85dbf81] ===
 85dbe64:	55                   	push   %ebp
 85dbe65:	89 e5                	mov    %esp,%ebp
 85dbe67:	83 ec 28             	sub    $0x28,%esp
 85dbe6a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbe6d:	8b 40 04             	mov    0x4(%eax),%eax
 85dbe70:	83 f8 01             	cmp    $0x1,%eax
 85dbe73:	0f 8e 03 01 00 00    	jle    85dbf7c <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x118>
 85dbe79:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85dbe80:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85dbe87:	eb 5f                	jmp    85dbee8 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x84>
 85dbe89:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dbe8c:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbe8f:	83 c2 0c             	add    $0xc,%edx
 85dbe92:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbe95:	85 c0                	test   %eax,%eax
 85dbe97:	74 20                	je     85dbeb9 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x55>
 85dbe99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85dbe9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dbea0:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbea3:	89 04 24             	mov    %eax,(%esp)
 85dbea6:	e8 9b e1 ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85dbeab:	83 f0 01             	xor    $0x1,%eax
 85dbeae:	84 c0                	test   %al,%al
 85dbeb0:	74 07                	je     85dbeb9 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x55>
 85dbeb2:	b8 01 00 00 00       	mov    $0x1,%eax
 85dbeb7:	eb 05                	jmp    85dbebe <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x5a>
 85dbeb9:	b8 00 00 00 00       	mov    $0x0,%eax
 85dbebe:	84 c0                	test   %al,%al
 85dbec0:	74 22                	je     85dbee4 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x80>
 85dbec2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dbec5:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbec8:	83 c2 0c             	add    $0xc,%edx
 85dbecb:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbece:	3b 45 10             	cmp    0x10(%ebp),%eax
 85dbed1:	75 11                	jne    85dbee4 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x80>
 85dbed3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dbed6:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbed9:	83 c2 14             	add    $0x14,%edx
 85dbedc:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbedf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85dbee2:	eb 0f                	jmp    85dbef3 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x8f>
 85dbee4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85dbee8:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85dbeec:	0f 9e c0             	setle  %al
 85dbeef:	84 c0                	test   %al,%al
 85dbef1:	75 96                	jne    85dbe89 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x25>
 85dbef3:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85dbef7:	0f 84 82 00 00 00    	je     85dbf7f <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x11b>
 85dbefd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85dbf04:	eb 69                	jmp    85dbf6f <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x10b>
 85dbf06:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbf09:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbf0c:	83 c2 0c             	add    $0xc,%edx
 85dbf0f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbf12:	85 c0                	test   %eax,%eax
 85dbf14:	74 20                	je     85dbf36 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0xd2>
 85dbf16:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbf19:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dbf1d:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbf20:	89 04 24             	mov    %eax,(%esp)
 85dbf23:	e8 1e e1 ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85dbf28:	83 f0 01             	xor    $0x1,%eax
 85dbf2b:	84 c0                	test   %al,%al
 85dbf2d:	74 07                	je     85dbf36 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0xd2>
 85dbf2f:	b8 01 00 00 00       	mov    $0x1,%eax
 85dbf34:	eb 05                	jmp    85dbf3b <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0xd7>
 85dbf36:	b8 00 00 00 00       	mov    $0x0,%eax
 85dbf3b:	84 c0                	test   %al,%al
 85dbf3d:	74 2c                	je     85dbf6b <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x107>
 85dbf3f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbf42:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbf45:	83 c2 14             	add    $0x14,%edx
 85dbf48:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbf4b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85dbf4e:	75 1b                	jne    85dbf6b <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x107>
 85dbf50:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85dbf53:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbf56:	83 c2 0c             	add    $0xc,%edx
 85dbf59:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dbf5c:	8b 55 0c             	mov    0xc(%ebp),%edx
 85dbf5f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dbf63:	89 04 24             	mov    %eax,(%esp)
 85dbf66:	e8 4f c6 06 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85dbf6b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85dbf6f:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85dbf73:	0f 9e c0             	setle  %al
 85dbf76:	84 c0                	test   %al,%al
 85dbf78:	75 8c                	jne    85dbf06 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0xa2>
 85dbf7a:	eb 04                	jmp    85dbf80 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x11c>
 85dbf7c:	90                   	nop
 85dbf7d:	eb 01                	jmp    85dbf80 <_ZN8PvP_Room16send_to_pvp_teamER11PacketGuardP5CUser+0x11c>
 85dbf7f:	90                   	nop
 85dbf80:	c9                   	leave
 85dbf81:	c3                   	ret

```

```c
// PvP_Room::send_to_pvp_team @ 0x85dbe64

/* PvP_Room::send_to_pvp_team(PacketGuard&, CUser*) */

void __thiscall PvP_Room::send_to_pvp_team(PvP_Room *this,PacketGuard *param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  int local_18;
  int local_14;
  int local_10;
  
  if (1 < *(int *)(this + 4)) {
    local_18 = 0;
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      if ((*(int *)(this + (local_14 + 0xc) * 4) == 0) ||
         (cVar2 = IsPvpObserver(this,local_14), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(CUser **)(this + (local_14 + 0xc) * 4) == param_2)) {
        local_18 = *(int *)(this + (local_14 + 0x14) * 4);
        break;
      }
    }
    if (local_18 != 0) {
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) ||
           (cVar2 = IsPvpObserver(this,local_10), cVar2 == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(int *)(this + (local_10 + 0x14) * 4) == local_18)) {
          CUser::Send(*(CUser **)(this + (local_10 + 0xc) * 4),param_1);
        }
      }
    }
  }
  return;
}

```

---

## set_pvp_mode

```asm
// === 085d84c6 PvP_Room::set_pvp_mode  [0x085d84c6-0x85d87bd] ===
 85d84c6:	55                   	push   %ebp
 85d84c7:	89 e5                	mov    %esp,%ebp
 85d84c9:	83 ec 48             	sub    $0x48,%esp
 85d84cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d84cf:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85d84d5:	83 f8 01             	cmp    $0x1,%eax
 85d84d8:	74 0a                	je     85d84e4 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x1e>
 85d84da:	b8 13 00 00 00       	mov    $0x13,%eax
 85d84df:	e9 d8 02 00 00       	jmp    85d87bc <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2f6>
 85d84e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d84e7:	8b 40 28             	mov    0x28(%eax),%eax
 85d84ea:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d84ed:	74 0a                	je     85d84f9 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x33>
 85d84ef:	b8 08 00 00 00       	mov    $0x8,%eax
 85d84f4:	e9 c3 02 00 00       	jmp    85d87bc <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2f6>
 85d84f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d84fc:	89 04 24             	mov    %eax,(%esp)
 85d84ff:	e8 36 74 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d8504:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8507:	8b 40 04             	mov    0x4(%eax),%eax
 85d850a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85d850d:	8b 55 10             	mov    0x10(%ebp),%edx
 85d8510:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8513:	89 50 04             	mov    %edx,0x4(%eax)
 85d8516:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 85d851a:	75 5d                	jne    85d8579 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0xb3>
 85d851c:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 85d8523:	eb 44                	jmp    85d8569 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0xa3>
 85d8525:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85d8528:	8b 45 08             	mov    0x8(%ebp),%eax
 85d852b:	83 c2 0c             	add    $0xc,%edx
 85d852e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8531:	85 c0                	test   %eax,%eax
 85d8533:	74 30                	je     85d8565 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x9f>
 85d8535:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85d8538:	8b 45 08             	mov    0x8(%ebp),%eax
 85d853b:	83 c2 14             	add    $0x14,%edx
 85d853e:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d8545:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8548:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d854e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d8555:	00 
 85d8556:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d8559:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d855d:	89 14 24             	mov    %edx,(%esp)
 85d8560:	e8 f5 5b 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d8565:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 85d8569:	83 7d d4 07          	cmpl   $0x7,-0x2c(%ebp)
 85d856d:	0f 9e c0             	setle  %al
 85d8570:	84 c0                	test   %al,%al
 85d8572:	75 b1                	jne    85d8525 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x5f>
 85d8574:	e9 33 02 00 00       	jmp    85d87ac <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2e6>
 85d8579:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 85d857d:	0f 85 e6 00 00 00    	jne    85d8669 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x1a3>
 85d8583:	83 7d d0 02          	cmpl   $0x2,-0x30(%ebp)
 85d8587:	75 55                	jne    85d85de <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x118>
 85d8589:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85d8590:	eb 3c                	jmp    85d85ce <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x108>
 85d8592:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85d8595:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8598:	83 c2 0c             	add    $0xc,%edx
 85d859b:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d859e:	85 c0                	test   %eax,%eax
 85d85a0:	74 28                	je     85d85ca <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x104>
 85d85a2:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85d85a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d85a8:	83 c2 14             	add    $0x14,%edx
 85d85ab:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d85ae:	8b 55 08             	mov    0x8(%ebp),%edx
 85d85b1:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d85b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d85bb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d85be:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d85c2:	89 14 24             	mov    %edx,(%esp)
 85d85c5:	e8 90 5b 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d85ca:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85d85ce:	83 7d d8 07          	cmpl   $0x7,-0x28(%ebp)
 85d85d2:	0f 9e c0             	setle  %al
 85d85d5:	84 c0                	test   %al,%al
 85d85d7:	75 b9                	jne    85d8592 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0xcc>
 85d85d9:	e9 ce 01 00 00       	jmp    85d87ac <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2e6>
 85d85de:	83 7d d0 01          	cmpl   $0x1,-0x30(%ebp)
 85d85e2:	0f 85 c4 01 00 00    	jne    85d87ac <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2e6>
 85d85e8:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 85d85ef:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85d85f6:	eb 61                	jmp    85d8659 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x193>
 85d85f8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85d85fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d85fe:	83 c2 0c             	add    $0xc,%edx
 85d8601:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8604:	85 c0                	test   %eax,%eax
 85d8606:	74 4d                	je     85d8655 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x18f>
 85d8608:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85d860b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d860e:	8d 4a 14             	lea    0x14(%edx),%ecx
 85d8611:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85d8614:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d8617:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85d861a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d861d:	83 c2 14             	add    $0x14,%edx
 85d8620:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8623:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8626:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d862c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d8630:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d8633:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8637:	89 14 24             	mov    %edx,(%esp)
 85d863a:	e8 1b 5b 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d863f:	83 7d dc 01          	cmpl   $0x1,-0x24(%ebp)
 85d8643:	75 09                	jne    85d864e <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x188>
 85d8645:	c7 45 dc 02 00 00 00 	movl   $0x2,-0x24(%ebp)
 85d864c:	eb 07                	jmp    85d8655 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x18f>
 85d864e:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 85d8655:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85d8659:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 85d865d:	0f 9e c0             	setle  %al
 85d8660:	84 c0                	test   %al,%al
 85d8662:	75 94                	jne    85d85f8 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x132>
 85d8664:	e9 43 01 00 00       	jmp    85d87ac <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2e6>
 85d8669:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 85d866d:	75 3d                	jne    85d86ac <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x1e6>
 85d866f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85d8676:	eb 24                	jmp    85d869c <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x1d6>
 85d8678:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85d867b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d867e:	83 c2 0c             	add    $0xc,%edx
 85d8681:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8684:	85 c0                	test   %eax,%eax
 85d8686:	74 10                	je     85d8698 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x1d2>
 85d8688:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85d868b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d868e:	83 c2 14             	add    $0x14,%edx
 85d8691:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d8698:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85d869c:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 85d86a0:	0f 9e c0             	setle  %al
 85d86a3:	84 c0                	test   %al,%al
 85d86a5:	75 d1                	jne    85d8678 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x1b2>
 85d86a7:	e9 00 01 00 00       	jmp    85d87ac <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2e6>
 85d86ac:	83 7d 10 05          	cmpl   $0x5,0x10(%ebp)
 85d86b0:	75 78                	jne    85d872a <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x264>
 85d86b2:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 85d86b9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d86c0:	eb 58                	jmp    85d871a <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x254>
 85d86c2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85d86c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d86c8:	83 c2 0c             	add    $0xc,%edx
 85d86cb:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d86ce:	85 c0                	test   %eax,%eax
 85d86d0:	74 44                	je     85d8716 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x250>
 85d86d2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85d86d5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d86d8:	8d 4a 14             	lea    0x14(%edx),%ecx
 85d86db:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85d86de:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d86e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d86e4:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d86ea:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85d86ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d86f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d86f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d86f8:	89 14 24             	mov    %edx,(%esp)
 85d86fb:	e8 5a 5a 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d8700:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 85d8704:	75 09                	jne    85d870f <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x249>
 85d8706:	c7 45 e8 02 00 00 00 	movl   $0x2,-0x18(%ebp)
 85d870d:	eb 07                	jmp    85d8716 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x250>
 85d870f:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 85d8716:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d871a:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85d871e:	0f 9e c0             	setle  %al
 85d8721:	84 c0                	test   %al,%al
 85d8723:	75 9d                	jne    85d86c2 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x1fc>
 85d8725:	e9 82 00 00 00       	jmp    85d87ac <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2e6>
 85d872a:	83 7d d0 03          	cmpl   $0x3,-0x30(%ebp)
 85d872e:	74 7c                	je     85d87ac <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2e6>
 85d8730:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 85d8737:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d873e:	eb 61                	jmp    85d87a1 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2db>
 85d8740:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8743:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8746:	83 c2 0c             	add    $0xc,%edx
 85d8749:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d874c:	85 c0                	test   %eax,%eax
 85d874e:	74 4d                	je     85d879d <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2d7>
 85d8750:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8753:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8756:	8d 4a 14             	lea    0x14(%edx),%ecx
 85d8759:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85d875c:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 85d875f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8762:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8765:	83 c2 14             	add    $0x14,%edx
 85d8768:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d876b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d876e:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d8774:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d8778:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d877b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d877f:	89 14 24             	mov    %edx,(%esp)
 85d8782:	e8 d3 59 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d8787:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 85d878b:	75 09                	jne    85d8796 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2d0>
 85d878d:	c7 45 f0 02 00 00 00 	movl   $0x2,-0x10(%ebp)
 85d8794:	eb 07                	jmp    85d879d <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x2d7>
 85d8796:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 85d879d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d87a1:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d87a5:	0f 9e c0             	setle  %al
 85d87a8:	84 c0                	test   %al,%al
 85d87aa:	75 94                	jne    85d8740 <_ZN8PvP_Room12set_pvp_modeEP5CUseri+0x27a>
 85d87ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85d87af:	89 04 24             	mov    %eax,(%esp)
 85d87b2:	e8 89 71 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d87b7:	b8 00 00 00 00       	mov    $0x0,%eax
 85d87bc:	c9                   	leave
 85d87bd:	c3                   	ret

```

```c
// PvP_Room::set_pvp_mode @ 0x85d84c6

/* PvP_Room::set_pvp_mode(CUser*, int) */

undefined4 __thiscall PvP_Room::set_pvp_mode(PvP_Room *this,CUser *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0xb8) == 1) {
    if (*(CUser **)(this + 0x28) == param_1) {
      lock();
      iVar1 = *(int *)(this + 4);
      *(int *)(this + 4) = param_2;
      if (param_2 == 1) {
        for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
          if (*(int *)(this + (local_30 + 0xc) * 4) != 0) {
            *(undefined4 *)(this + (local_30 + 0x14) * 4) = 0;
            CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_30,0);
          }
        }
      }
      else if (param_2 == 3) {
        if (iVar1 == 2) {
          for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
            if (*(int *)(this + (local_2c + 0xc) * 4) != 0) {
              CRelayBattleMgr::OnChangeTeam
                        ((CRelayBattleMgr *)(this + 0x620),local_2c,
                         *(int *)(this + (local_2c + 0x14) * 4));
            }
          }
        }
        else if (iVar1 == 1) {
          local_28 = 1;
          for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
            if (*(int *)(this + (local_24 + 0xc) * 4) != 0) {
              *(int *)(this + (local_24 + 0x14) * 4) = local_28;
              CRelayBattleMgr::OnChangeTeam
                        ((CRelayBattleMgr *)(this + 0x620),local_24,
                         *(int *)(this + (local_24 + 0x14) * 4));
              if (local_28 == 1) {
                local_28 = 2;
              }
              else {
                local_28 = 1;
              }
            }
          }
        }
      }
      else if (param_2 == 4) {
        for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
          if (*(int *)(this + (local_20 + 0xc) * 4) != 0) {
            *(undefined4 *)(this + (local_20 + 0x14) * 4) = 0;
          }
        }
      }
      else if (param_2 == 5) {
        local_1c = 1;
        for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
          if (*(int *)(this + (local_18 + 0xc) * 4) != 0) {
            *(int *)(this + (local_18 + 0x14) * 4) = local_1c;
            CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_18,local_1c);
            if (local_1c == 1) {
              local_1c = 2;
            }
            else {
              local_1c = 1;
            }
          }
        }
      }
      else if (iVar1 != 3) {
        local_14 = 1;
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
            *(int *)(this + (local_10 + 0x14) * 4) = local_14;
            CRelayBattleMgr::OnChangeTeam
                      ((CRelayBattleMgr *)(this + 0x620),local_10,
                       *(int *)(this + (local_10 + 0x14) * 4));
            if (local_14 == 1) {
              local_14 = 2;
            }
            else {
              local_14 = 1;
            }
          }
        }
      }
      unlock();
      uVar2 = 0;
    }
    else {
      uVar2 = 8;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## set_ready_state

```asm
// === 085d8290 PvP_Room::set_ready_state  [0x085d8290-0x85d84c5] ===
 85d8290:	55                   	push   %ebp
 85d8291:	89 e5                	mov    %esp,%ebp
 85d8293:	56                   	push   %esi
 85d8294:	53                   	push   %ebx
 85d8295:	83 ec 30             	sub    $0x30,%esp
 85d8298:	8b 45 10             	mov    0x10(%ebp),%eax
 85d829b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 85d829e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d82a1:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d82a7:	8b 00                	mov    (%eax),%eax
 85d82a9:	83 c0 48             	add    $0x48,%eax
 85d82ac:	8b 08                	mov    (%eax),%ecx
 85d82ae:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 85d82b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d82b5:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d82bb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d82bf:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d82c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d82c6:	89 04 24             	mov    %eax,(%esp)
 85d82c9:	ff d1                	call   *%ecx
 85d82cb:	83 f0 01             	xor    $0x1,%eax
 85d82ce:	84 c0                	test   %al,%al
 85d82d0:	74 0a                	je     85d82dc <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x4c>
 85d82d2:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d82d7:	e9 e0 01 00 00       	jmp    85d84bc <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x22c>
 85d82dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d82df:	89 04 24             	mov    %eax,(%esp)
 85d82e2:	e8 65 5a fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d82e7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d82ea:	8b 40 28             	mov    0x28(%eax),%eax
 85d82ed:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d82f0:	0f 85 f2 00 00 00    	jne    85d83e8 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x158>
 85d82f6:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 85d82fa:	0f 84 8f 01 00 00    	je     85d848f <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x1ff>
 85d8300:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8303:	89 04 24             	mov    %eax,(%esp)
 85d8306:	e8 2f 76 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d830b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d830e:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d8311:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8314:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 85d8318:	88 4c 02 70          	mov    %cl,0x70(%edx,%eax,1)
 85d831c:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 85d8320:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8323:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d8326:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85d8329:	81 c1 20 06 00 00    	add    $0x620,%ecx
 85d832f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d8333:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8337:	89 0c 24             	mov    %ecx,(%esp)
 85d833a:	e8 13 5f 00 00       	call   85de252 <_ZN15CRelayBattleMgr7OnReadyEib>
 85d833f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8342:	89 04 24             	mov    %eax,(%esp)
 85d8345:	e8 f6 75 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d834a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d834d:	89 04 24             	mov    %eax,(%esp)
 85d8350:	e8 93 e2 ff ff       	call   85d65e8 <_ZN8PvP_Room17check_start_stateEv>
 85d8355:	84 c0                	test   %al,%al
 85d8357:	74 54                	je     85d83ad <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x11d>
 85d8359:	8b 45 08             	mov    0x8(%ebp),%eax
 85d835c:	89 04 24             	mov    %eax,(%esp)
 85d835f:	e8 1c e3 ff ff       	call   85d6680 <_ZN8PvP_Room14check_team_pvpEv>
 85d8364:	83 f0 01             	xor    $0x1,%eax
 85d8367:	84 c0                	test   %al,%al
 85d8369:	74 0a                	je     85d8375 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0xe5>
 85d836b:	bb 0e 00 00 00       	mov    $0xe,%ebx
 85d8370:	e9 3c 01 00 00       	jmp    85d84b1 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x221>
 85d8375:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8378:	8b 50 2c             	mov    0x2c(%eax),%edx
 85d837b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d837e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d8382:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8386:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8389:	89 04 24             	mov    %eax,(%esp)
 85d838c:	e8 3d 39 00 00       	call   85dbcce <_ZN8PvP_Room15make_ready_infoEPci>
 85d8391:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d8394:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8398:	8b 45 08             	mov    0x8(%ebp),%eax
 85d839b:	89 04 24             	mov    %eax,(%esp)
 85d839e:	e8 75 3a 00 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85d83a3:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 85d83a8:	e9 04 01 00 00       	jmp    85d84b1 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x221>
 85d83ad:	8b 45 08             	mov    0x8(%ebp),%eax
 85d83b0:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d83b3:	8b 55 08             	mov    0x8(%ebp),%edx
 85d83b6:	c6 44 02 70 00       	movb   $0x0,0x70(%edx,%eax,1)
 85d83bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d83be:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d83c1:	8b 55 08             	mov    0x8(%ebp),%edx
 85d83c4:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d83ca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85d83d1:	00 
 85d83d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d83d6:	89 14 24             	mov    %edx,(%esp)
 85d83d9:	e8 74 5e 00 00       	call   85de252 <_ZN15CRelayBattleMgr7OnReadyEib>
 85d83de:	bb 16 00 00 00       	mov    $0x16,%ebx
 85d83e3:	e9 c9 00 00 00       	jmp    85d84b1 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x221>
 85d83e8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d83ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85d83f2:	89 04 24             	mov    %eax,(%esp)
 85d83f5:	e8 40 75 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d83fa:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d8401:	eb 45                	jmp    85d8448 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x1b8>
 85d8403:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8406:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8409:	83 c2 0c             	add    $0xc,%edx
 85d840c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d840f:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d8412:	75 30                	jne    85d8444 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x1b4>
 85d8414:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d8417:	8b 55 08             	mov    0x8(%ebp),%edx
 85d841a:	0f b6 4d e4          	movzbl -0x1c(%ebp),%ecx
 85d841e:	88 4c 02 70          	mov    %cl,0x70(%edx,%eax,1)
 85d8422:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 85d8426:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8429:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d842f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d8433:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d8436:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d843a:	89 14 24             	mov    %edx,(%esp)
 85d843d:	e8 10 5e 00 00       	call   85de252 <_ZN15CRelayBattleMgr7OnReadyEib>
 85d8442:	eb 0f                	jmp    85d8453 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x1c3>
 85d8444:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d8448:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d844c:	0f 9e c0             	setle  %al
 85d844f:	84 c0                	test   %al,%al
 85d8451:	75 b0                	jne    85d8403 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x173>
 85d8453:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8456:	89 04 24             	mov    %eax,(%esp)
 85d8459:	e8 e2 74 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d845e:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d8462:	7f 2b                	jg     85d848f <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x1ff>
 85d8464:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d8467:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d846a:	89 54 24 08          	mov    %edx,0x8(%esp)
 85d846e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8472:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8475:	89 04 24             	mov    %eax,(%esp)
 85d8478:	e8 51 38 00 00       	call   85dbcce <_ZN8PvP_Room15make_ready_infoEPci>
 85d847d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d8480:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8484:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8487:	89 04 24             	mov    %eax,(%esp)
 85d848a:	e8 89 39 00 00       	call   85dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>
 85d848f:	bb 00 00 00 00       	mov    $0x0,%ebx
 85d8494:	eb 1b                	jmp    85d84b1 <_ZN8PvP_Room15set_ready_stateEP5CUserb+0x221>
 85d8496:	89 d3                	mov    %edx,%ebx
 85d8498:	89 c6                	mov    %eax,%esi
 85d849a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d849d:	89 04 24             	mov    %eax,(%esp)
 85d84a0:	e8 db 59 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d84a5:	89 f0                	mov    %esi,%eax
 85d84a7:	89 da                	mov    %ebx,%edx
 85d84a9:	89 04 24             	mov    %eax,(%esp)
 85d84ac:	e8 9f b2 50 00       	call   8ae3750 <_Unwind_Resume>
 85d84b1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d84b4:	89 04 24             	mov    %eax,(%esp)
 85d84b7:	e8 c4 59 fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d84bc:	89 d8                	mov    %ebx,%eax
 85d84be:	83 c4 30             	add    $0x30,%esp
 85d84c1:	5b                   	pop    %ebx
 85d84c2:	5e                   	pop    %esi
 85d84c3:	5d                   	pop    %ebp
 85d84c4:	c3                   	ret
 85d84c5:	90                   	nop

```

```c
// PvP_Room::set_ready_state @ 0x85d8290

/* PvP_Room::set_ready_state(CUser*, bool) */

undefined4 __thiscall PvP_Room::set_ready_state(PvP_Room *this,CUser *param_1,bool param_2)

{
  char cVar1;
  undefined4 uVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  cVar1 = (**(code **)(**(int **)(this + 0x6e4) + 0x48))
                    (*(undefined4 *)(this + 0x6e4),param_1,param_2);
  if (cVar1 != '\x01') {
    return 0;
  }
  PacketGuard::PacketGuard(local_1c);
  if (*(CUser **)(this + 0x28) == param_1) {
    if (param_2) {
      lock();
      this[*(int *)(this + 0x2c) + 0x70] = (PvP_Room)0x1;
      CRelayBattleMgr::OnReady((CRelayBattleMgr *)(this + 0x620),*(int *)(this + 0x2c),true);
      unlock();
      cVar1 = check_start_state(this);
      if (cVar1 == '\0') {
        this[*(int *)(this + 0x2c) + 0x70] = (PvP_Room)0x0;
        CRelayBattleMgr::OnReady((CRelayBattleMgr *)(this + 0x620),*(int *)(this + 0x2c),false);
        uVar2 = 0x16;
      }
      else {
                    /* try { // try from 085d835f to 085d848e has its CatchHandler @ 085d8496 */
        cVar1 = check_team_pvp(this);
        if (cVar1 == '\x01') {
          make_ready_info(this,(char *)local_1c,*(int *)(this + 0x2c));
          send_to_pvp(this,local_1c);
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = 0xe;
        }
      }
      goto LAB_085d84b1;
    }
  }
  else {
    local_10 = 0;
    lock();
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*(CUser **)(this + (local_10 + 0xc) * 4) == param_1) {
        this[local_10 + 0x70] = (PvP_Room)param_2;
        CRelayBattleMgr::OnReady((CRelayBattleMgr *)(this + 0x620),local_10,param_2);
        break;
      }
    }
    unlock();
    if (local_10 < 8) {
      make_ready_info(this,(char *)local_1c,local_10);
      send_to_pvp(this,local_1c);
    }
  }
  uVar2 = 0;
LAB_085d84b1:
  PacketGuard::~PacketGuard(local_1c);
  return uVar2;
}

```

---

## set_recv_pvp_end_result_flag

```asm
// === 085dbfec PvP_Room::set_recv_pvp_end_result_flag  [0x085dbfec-0x85dc033] ===
 85dbfec:	55                   	push   %ebp
 85dbfed:	89 e5                	mov    %esp,%ebp
 85dbfef:	83 ec 28             	sub    $0x28,%esp
 85dbff2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dbff5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dbff9:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbffc:	89 04 24             	mov    %eax,(%esp)
 85dbfff:	e8 de d1 ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85dc004:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dc007:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85dc00b:	79 07                	jns    85dc014 <_ZN8PvP_Room28set_recv_pvp_end_result_flagEP5CUser+0x28>
 85dc00d:	b8 00 00 00 00       	mov    $0x0,%eax
 85dc012:	eb 1d                	jmp    85dc031 <_ZN8PvP_Room28set_recv_pvp_end_result_flagEP5CUser+0x45>
 85dc014:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc017:	8d 90 bc 05 00 00    	lea    0x5bc(%eax),%edx
 85dc01d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dc020:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc024:	89 14 24             	mov    %edx,(%esp)
 85dc027:	e8 6c 9f ff ff       	call   85d5f98 <_ZN17PvpResultRecvFlag11SetRecvFlagEi>
 85dc02c:	b8 01 00 00 00       	mov    $0x1,%eax
 85dc031:	c9                   	leave
 85dc032:	c3                   	ret
 85dc033:	90                   	nop

```

```c
// PvP_Room::set_recv_pvp_end_result_flag @ 0x85dbfec

/* PvP_Room::set_recv_pvp_end_result_flag(CUser*) */

bool __thiscall PvP_Room::set_recv_pvp_end_result_flag(PvP_Room *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = get_user_seat(this,param_1);
  if (-1 < iVar1) {
    PvpResultRecvFlag::SetRecvFlag((PvpResultRecvFlag *)(this + 0x5bc),iVar1);
  }
  return -1 < iVar1;
}

```

---

## set_recv_pvp_rank_flag

```asm
// === 085dbf82 PvP_Room::set_recv_pvp_rank_flag  [0x085dbf82-0x85dbfeb] ===
 85dbf82:	55                   	push   %ebp
 85dbf83:	89 e5                	mov    %esp,%ebp
 85dbf85:	83 ec 28             	sub    $0x28,%esp
 85dbf88:	8b 45 0c             	mov    0xc(%ebp),%eax
 85dbf8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dbf8f:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbf92:	89 04 24             	mov    %eax,(%esp)
 85dbf95:	e8 48 d2 ff ff       	call   85d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>
 85dbf9a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85dbf9d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85dbfa1:	79 07                	jns    85dbfaa <_ZN8PvP_Room22set_recv_pvp_rank_flagEP5CUser+0x28>
 85dbfa3:	b8 00 00 00 00       	mov    $0x0,%eax
 85dbfa8:	eb 40                	jmp    85dbfea <_ZN8PvP_Room22set_recv_pvp_rank_flagEP5CUser+0x68>
 85dbfaa:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbfad:	8d 90 b4 05 00 00    	lea    0x5b4(%eax),%edx
 85dbfb3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbfb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dbfba:	89 14 24             	mov    %edx,(%esp)
 85dbfbd:	e8 2e a0 ff ff       	call   85d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>
 85dbfc2:	84 c0                	test   %al,%al
 85dbfc4:	74 07                	je     85dbfcd <_ZN8PvP_Room22set_recv_pvp_rank_flagEP5CUser+0x4b>
 85dbfc6:	b8 00 00 00 00       	mov    $0x0,%eax
 85dbfcb:	eb 1d                	jmp    85dbfea <_ZN8PvP_Room22set_recv_pvp_rank_flagEP5CUser+0x68>
 85dbfcd:	8b 45 08             	mov    0x8(%ebp),%eax
 85dbfd0:	8d 90 b4 05 00 00    	lea    0x5b4(%eax),%edx
 85dbfd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85dbfd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dbfdd:	89 14 24             	mov    %edx,(%esp)
 85dbfe0:	e8 b3 9f ff ff       	call   85d5f98 <_ZN17PvpResultRecvFlag11SetRecvFlagEi>
 85dbfe5:	b8 01 00 00 00       	mov    $0x1,%eax
 85dbfea:	c9                   	leave
 85dbfeb:	c3                   	ret

```

```c
// PvP_Room::set_recv_pvp_rank_flag @ 0x85dbf82

/* PvP_Room::set_recv_pvp_rank_flag(CUser*) */

undefined4 __thiscall PvP_Room::set_recv_pvp_rank_flag(PvP_Room *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = get_user_seat(this,param_1);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5b4),iVar2);
    if (cVar1 == '\0') {
      PvpResultRecvFlag::SetRecvFlag((PvpResultRecvFlag *)(this + 0x5b4),iVar2);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## set_seat_state

```asm
// === 085d77c0 PvP_Room::set_seat_state  [0x085d77c0-0x85d7d4f] ===
 85d77c0:	55                   	push   %ebp
 85d77c1:	89 e5                	mov    %esp,%ebp
 85d77c3:	57                   	push   %edi
 85d77c4:	56                   	push   %esi
 85d77c5:	53                   	push   %ebx
 85d77c6:	83 ec 6c             	sub    $0x6c,%esp
 85d77c9:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85d77cd:	75 0a                	jne    85d77d9 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x19>
 85d77cf:	b8 00 00 00 00       	mov    $0x0,%eax
 85d77d4:	e9 6f 05 00 00       	jmp    85d7d48 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x588>
 85d77d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d77dc:	89 04 24             	mov    %eax,(%esp)
 85d77df:	e8 7e f0 ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d77e4:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85d77e7:	8b 45 14             	mov    0x14(%ebp),%eax
 85d77ea:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85d77ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85d77f0:	89 04 24             	mov    %eax,(%esp)
 85d77f3:	e8 d4 61 c5 ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85d77f8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85d77fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d77fe:	89 04 24             	mov    %eax,(%esp)
 85d7801:	e8 8e 61 c5 ff       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 85d7806:	89 c7                	mov    %eax,%edi
 85d7808:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d780b:	89 04 24             	mov    %eax,(%esp)
 85d780e:	e8 15 98 b2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85d7813:	89 c6                	mov    %eax,%esi
 85d7815:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d7818:	89 04 24             	mov    %eax,(%esp)
 85d781b:	e8 52 98 b2 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 85d7820:	89 c3                	mov    %eax,%ebx
 85d7822:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85d7829:	00 
 85d782a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d7831:	00 
 85d7832:	c7 44 24 08 94 05 00 	movl   $0x594,0x8(%esp)
 85d7839:	00 
 85d783a:	c7 44 24 04 40 26 cc 	movl   $0x8cc2640,0x4(%esp)
 85d7841:	08 
 85d7842:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d7845:	89 04 24             	mov    %eax,(%esp)
 85d7848:	e8 ef 84 f7 ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85d784d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85d7850:	89 44 24 20          	mov    %eax,0x20(%esp)
 85d7854:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85d7857:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85d785b:	8b 45 10             	mov    0x10(%ebp),%eax
 85d785e:	89 44 24 18          	mov    %eax,0x18(%esp)
 85d7862:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85d7865:	89 44 24 14          	mov    %eax,0x14(%esp)
 85d7869:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85d786d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85d7871:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d7875:	c7 44 24 04 e0 0f cc 	movl   $0x8cc0fe0,0x4(%esp)
 85d787c:	08 
 85d787d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85d7880:	89 04 24             	mov    %eax,(%esp)
 85d7883:	e8 dc 84 f7 ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 85d7888:	8b 45 14             	mov    0x14(%ebp),%eax
 85d788b:	3d fe 00 00 00       	cmp    $0xfe,%eax
 85d7890:	74 44                	je     85d78d6 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x116>
 85d7892:	3d ff 00 00 00       	cmp    $0xff,%eax
 85d7897:	0f 85 6c 04 00 00    	jne    85d7d09 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x549>
 85d789d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d78a0:	8b 40 28             	mov    0x28(%eax),%eax
 85d78a3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d78a6:	74 0a                	je     85d78b2 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0xf2>
 85d78a8:	b8 08 00 00 00       	mov    $0x8,%eax
 85d78ad:	e9 96 04 00 00       	jmp    85d7d48 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x588>
 85d78b2:	8b 45 14             	mov    0x14(%ebp),%eax
 85d78b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d78b9:	8b 45 10             	mov    0x10(%ebp),%eax
 85d78bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d78c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d78c3:	89 04 24             	mov    %eax,(%esp)
 85d78c6:	e8 85 04 00 00       	call   85d7d50 <_ZN8PvP_Room11change_teamEii>
 85d78cb:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d78ce:	c6 00 01             	movb   $0x1,(%eax)
 85d78d1:	e9 6d 04 00 00       	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d78d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d78d9:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85d78df:	83 f8 02             	cmp    $0x2,%eax
 85d78e2:	0f 85 b6 01 00 00    	jne    85d7a9e <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x2de>
 85d78e8:	8b 55 10             	mov    0x10(%ebp),%edx
 85d78eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d78ee:	83 c2 0c             	add    $0xc,%edx
 85d78f1:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d78f4:	85 c0                	test   %eax,%eax
 85d78f6:	75 0a                	jne    85d7902 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x142>
 85d78f8:	b8 04 00 00 00       	mov    $0x4,%eax
 85d78fd:	e9 46 04 00 00       	jmp    85d7d48 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x588>
 85d7902:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7905:	8b 50 28             	mov    0x28(%eax),%edx
 85d7908:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85d790b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d790e:	83 c1 0c             	add    $0xc,%ecx
 85d7911:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 85d7914:	39 c2                	cmp    %eax,%edx
 85d7916:	75 17                	jne    85d792f <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x16f>
 85d7918:	8b 45 08             	mov    0x8(%ebp),%eax
 85d791b:	89 04 24             	mov    %eax,(%esp)
 85d791e:	e8 d1 05 00 00       	call   85d7ef4 <_ZN8PvP_Room18select_new_managerEv>
 85d7923:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7926:	c6 00 01             	movb   $0x1,(%eax)
 85d7929:	8b 45 20             	mov    0x20(%ebp),%eax
 85d792c:	c6 00 01             	movb   $0x1,(%eax)
 85d792f:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7932:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7935:	83 c2 0c             	add    $0xc,%edx
 85d7938:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85d793b:	8b 45 18             	mov    0x18(%ebp),%eax
 85d793e:	89 10                	mov    %edx,(%eax)
 85d7940:	8b 45 18             	mov    0x18(%ebp),%eax
 85d7943:	8b 00                	mov    (%eax),%eax
 85d7945:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7949:	8b 45 08             	mov    0x8(%ebp),%eax
 85d794c:	89 04 24             	mov    %eax,(%esp)
 85d794f:	e8 9e 51 00 00       	call   85dcaf2 <_ZN8PvP_Room16GiveOuterPenaltyEP5CUser>
 85d7954:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7957:	8b 45 08             	mov    0x8(%ebp),%eax
 85d795a:	83 c2 0c             	add    $0xc,%edx
 85d795d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7960:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85d7967:	ff 
 85d7968:	89 04 24             	mov    %eax,(%esp)
 85d796b:	e8 42 80 00 00       	call   85df9b2 <_ZN5CUser11SetPvpIndexEs>
 85d7970:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7973:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7977:	8b 45 08             	mov    0x8(%ebp),%eax
 85d797a:	89 04 24             	mov    %eax,(%esp)
 85d797d:	e8 f0 18 00 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 85d7982:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85d7985:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7988:	89 04 24             	mov    %eax,(%esp)
 85d798b:	e8 aa 7f 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d7990:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7993:	8b 55 08             	mov    0x8(%ebp),%edx
 85d7996:	c6 44 02 70 00       	movb   $0x0,0x70(%edx,%eax,1)
 85d799b:	8b 55 10             	mov    0x10(%ebp),%edx
 85d799e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d79a1:	83 c2 14             	add    $0x14,%edx
 85d79a4:	c7 04 90 ff 00 00 00 	movl   $0xff,(%eax,%edx,4)
 85d79ab:	8b 55 10             	mov    0x10(%ebp),%edx
 85d79ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85d79b1:	83 c2 0c             	add    $0xc,%edx
 85d79b4:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d79bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d79be:	8b 80 00 06 00 00    	mov    0x600(%eax),%eax
 85d79c4:	8d 50 ff             	lea    -0x1(%eax),%edx
 85d79c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d79ca:	89 90 00 06 00 00    	mov    %edx,0x600(%eax)
 85d79d0:	8b 45 10             	mov    0x10(%ebp),%eax
 85d79d3:	8b 55 08             	mov    0x8(%ebp),%edx
 85d79d6:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85d79dd:	00 
 85d79de:	8b 45 08             	mov    0x8(%ebp),%eax
 85d79e1:	89 04 24             	mov    %eax,(%esp)
 85d79e4:	e8 57 7f 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d79e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d79ec:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d79f2:	8b 45 10             	mov    0x10(%ebp),%eax
 85d79f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d79f9:	89 14 24             	mov    %edx,(%esp)
 85d79fc:	e8 ef 66 00 00       	call   85de0f0 <_ZN15CRelayBattleMgr11OnLeaveRoomEi>
 85d7a01:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7a04:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d7a0a:	8b 00                	mov    (%eax),%eax
 85d7a0c:	83 c0 2c             	add    $0x2c,%eax
 85d7a0f:	8b 18                	mov    (%eax),%ebx
 85d7a11:	8b 45 18             	mov    0x18(%ebp),%eax
 85d7a14:	8b 10                	mov    (%eax),%edx
 85d7a16:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7a19:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d7a1f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85d7a22:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85d7a26:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 85d7a29:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85d7a2d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85d7a30:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d7a34:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d7a38:	89 04 24             	mov    %eax,(%esp)
 85d7a3b:	ff d3                	call   *%ebx
 85d7a3d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7a40:	89 04 24             	mov    %eax,(%esp)
 85d7a43:	e8 1a ee ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d7a48:	85 c0                	test   %eax,%eax
 85d7a4a:	0f 94 c0             	sete   %al
 85d7a4d:	84 c0                	test   %al,%al
 85d7a4f:	74 22                	je     85d7a73 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x2b3>
 85d7a51:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7a54:	89 04 24             	mov    %eax,(%esp)
 85d7a57:	e8 6c e8 ff ff       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 85d7a5c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7a5f:	c6 00 01             	movb   $0x1,(%eax)
 85d7a62:	8b 45 20             	mov    0x20(%ebp),%eax
 85d7a65:	c6 00 01             	movb   $0x1,(%eax)
 85d7a68:	8b 45 24             	mov    0x24(%ebp),%eax
 85d7a6b:	c6 00 01             	movb   $0x1,(%eax)
 85d7a6e:	e9 d0 02 00 00       	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d7a73:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7a76:	89 04 24             	mov    %eax,(%esp)
 85d7a79:	e8 6e 1c 00 00       	call   85d96ec <_ZN8PvP_Room12check_winnerEv>
 85d7a7e:	84 c0                	test   %al,%al
 85d7a80:	74 11                	je     85d7a93 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x2d3>
 85d7a82:	8b 45 20             	mov    0x20(%ebp),%eax
 85d7a85:	c6 00 01             	movb   $0x1,(%eax)
 85d7a88:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7a8b:	89 04 24             	mov    %eax,(%esp)
 85d7a8e:	e8 eb 52 00 00       	call   85dcd7e <_ZN8PvP_Room20pvp_request_pvp_rankEv>
 85d7a93:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7a96:	c6 00 01             	movb   $0x1,(%eax)
 85d7a99:	e9 a5 02 00 00       	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d7a9e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7aa1:	8b 40 28             	mov    0x28(%eax),%eax
 85d7aa4:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d7aa7:	0f 85 37 01 00 00    	jne    85d7be4 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x424>
 85d7aad:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7ab0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7ab3:	83 c2 0c             	add    $0xc,%edx
 85d7ab6:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7ab9:	85 c0                	test   %eax,%eax
 85d7abb:	0f 84 e6 00 00 00    	je     85d7ba7 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x3e7>
 85d7ac1:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7ac4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7ac7:	83 c2 0c             	add    $0xc,%edx
 85d7aca:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7acd:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85d7ad4:	ff 
 85d7ad5:	89 04 24             	mov    %eax,(%esp)
 85d7ad8:	e8 d5 7e 00 00       	call   85df9b2 <_ZN5CUser11SetPvpIndexEs>
 85d7add:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7ae0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7ae3:	83 c2 0c             	add    $0xc,%edx
 85d7ae6:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85d7ae9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7aec:	8b 40 28             	mov    0x28(%eax),%eax
 85d7aef:	39 c2                	cmp    %eax,%edx
 85d7af1:	75 11                	jne    85d7b04 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x344>
 85d7af3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7af6:	89 04 24             	mov    %eax,(%esp)
 85d7af9:	e8 f6 03 00 00       	call   85d7ef4 <_ZN8PvP_Room18select_new_managerEv>
 85d7afe:	8b 45 20             	mov    0x20(%ebp),%eax
 85d7b01:	c6 00 01             	movb   $0x1,(%eax)
 85d7b04:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7b07:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7b0a:	83 c2 0c             	add    $0xc,%edx
 85d7b0d:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85d7b10:	8b 45 18             	mov    0x18(%ebp),%eax
 85d7b13:	89 10                	mov    %edx,(%eax)
 85d7b15:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7b18:	8b 55 08             	mov    0x8(%ebp),%edx
 85d7b1b:	c6 44 02 70 00       	movb   $0x0,0x70(%edx,%eax,1)
 85d7b20:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7b23:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7b26:	83 c2 14             	add    $0x14,%edx
 85d7b29:	c7 04 90 ff 00 00 00 	movl   $0xff,(%eax,%edx,4)
 85d7b30:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7b33:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7b36:	83 c2 0c             	add    $0xc,%edx
 85d7b39:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d7b40:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7b43:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d7b49:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 85d7b50:	00 
 85d7b51:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7b54:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7b58:	89 14 24             	mov    %edx,(%esp)
 85d7b5b:	e8 fa 65 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d7b60:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7b63:	89 04 24             	mov    %eax,(%esp)
 85d7b66:	e8 f7 ec ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d7b6b:	85 c0                	test   %eax,%eax
 85d7b6d:	0f 94 c0             	sete   %al
 85d7b70:	84 c0                	test   %al,%al
 85d7b72:	74 22                	je     85d7b96 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x3d6>
 85d7b74:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7b77:	89 04 24             	mov    %eax,(%esp)
 85d7b7a:	e8 49 e7 ff ff       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 85d7b7f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7b82:	c6 00 01             	movb   $0x1,(%eax)
 85d7b85:	8b 45 20             	mov    0x20(%ebp),%eax
 85d7b88:	c6 00 01             	movb   $0x1,(%eax)
 85d7b8b:	8b 45 24             	mov    0x24(%ebp),%eax
 85d7b8e:	c6 00 01             	movb   $0x1,(%eax)
 85d7b91:	e9 ad 01 00 00       	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d7b96:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7b99:	c6 00 01             	movb   $0x1,(%eax)
 85d7b9c:	8b 45 20             	mov    0x20(%ebp),%eax
 85d7b9f:	c6 00 01             	movb   $0x1,(%eax)
 85d7ba2:	e9 9c 01 00 00       	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d7ba7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7baa:	89 04 24             	mov    %eax,(%esp)
 85d7bad:	e8 74 fb ff ff       	call   85d7726 <_ZN8PvP_Room23is_closeable_seat_stateEv>
 85d7bb2:	84 c0                	test   %al,%al
 85d7bb4:	74 24                	je     85d7bda <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x41a>
 85d7bb6:	8b 45 14             	mov    0x14(%ebp),%eax
 85d7bb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d7bbd:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7bc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7bc4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7bc7:	89 04 24             	mov    %eax,(%esp)
 85d7bca:	e8 81 01 00 00       	call   85d7d50 <_ZN8PvP_Room11change_teamEii>
 85d7bcf:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7bd2:	c6 00 01             	movb   $0x1,(%eax)
 85d7bd5:	e9 69 01 00 00       	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d7bda:	b8 13 00 00 00       	mov    $0x13,%eax
 85d7bdf:	e9 64 01 00 00       	jmp    85d7d48 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x588>
 85d7be4:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7be7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7bea:	83 c2 0c             	add    $0xc,%edx
 85d7bed:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7bf0:	85 c0                	test   %eax,%eax
 85d7bf2:	0f 84 4a 01 00 00    	je     85d7d42 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x582>
 85d7bf8:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7bfb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7bfe:	83 c2 0c             	add    $0xc,%edx
 85d7c01:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7c04:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85d7c0b:	ff 
 85d7c0c:	89 04 24             	mov    %eax,(%esp)
 85d7c0f:	e8 9e 7d 00 00       	call   85df9b2 <_ZN5CUser11SetPvpIndexEs>
 85d7c14:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7c17:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7c1a:	83 c2 0c             	add    $0xc,%edx
 85d7c1d:	8b 14 90             	mov    (%eax,%edx,4),%edx
 85d7c20:	8b 45 18             	mov    0x18(%ebp),%eax
 85d7c23:	89 10                	mov    %edx,(%eax)
 85d7c25:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7c28:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7c2c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7c2f:	89 04 24             	mov    %eax,(%esp)
 85d7c32:	e8 3b 16 00 00       	call   85d9272 <_ZN8PvP_Room8get_teamEi>
 85d7c37:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d7c3a:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7c3d:	8b 55 08             	mov    0x8(%ebp),%edx
 85d7c40:	c6 44 02 70 00       	movb   $0x0,0x70(%edx,%eax,1)
 85d7c45:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7c48:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7c4b:	83 c2 14             	add    $0x14,%edx
 85d7c4e:	c7 04 90 ff 00 00 00 	movl   $0xff,(%eax,%edx,4)
 85d7c55:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7c58:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7c5b:	83 c2 0c             	add    $0xc,%edx
 85d7c5e:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85d7c65:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7c68:	8b 80 00 06 00 00    	mov    0x600(%eax),%eax
 85d7c6e:	8d 50 ff             	lea    -0x1(%eax),%edx
 85d7c71:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7c74:	89 90 00 06 00 00    	mov    %edx,0x600(%eax)
 85d7c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7c7d:	8d 90 20 06 00 00    	lea    0x620(%eax),%edx
 85d7c83:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7c86:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7c8a:	89 14 24             	mov    %edx,(%esp)
 85d7c8d:	e8 5e 64 00 00       	call   85de0f0 <_ZN15CRelayBattleMgr11OnLeaveRoomEi>
 85d7c92:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7c95:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d7c9b:	8b 00                	mov    (%eax),%eax
 85d7c9d:	83 c0 2c             	add    $0x2c,%eax
 85d7ca0:	8b 18                	mov    (%eax),%ebx
 85d7ca2:	8b 45 18             	mov    0x18(%ebp),%eax
 85d7ca5:	8b 10                	mov    (%eax),%edx
 85d7ca7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7caa:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d7cb0:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85d7cb3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85d7cb7:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 85d7cba:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85d7cbe:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85d7cc1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d7cc5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d7cc9:	89 04 24             	mov    %eax,(%esp)
 85d7ccc:	ff d3                	call   *%ebx
 85d7cce:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7cd1:	89 04 24             	mov    %eax,(%esp)
 85d7cd4:	e8 89 eb ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d7cd9:	85 c0                	test   %eax,%eax
 85d7cdb:	0f 94 c0             	sete   %al
 85d7cde:	84 c0                	test   %al,%al
 85d7ce0:	74 1f                	je     85d7d01 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x541>
 85d7ce2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7ce5:	89 04 24             	mov    %eax,(%esp)
 85d7ce8:	e8 db e5 ff ff       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 85d7ced:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7cf0:	c6 00 01             	movb   $0x1,(%eax)
 85d7cf3:	8b 45 20             	mov    0x20(%ebp),%eax
 85d7cf6:	c6 00 01             	movb   $0x1,(%eax)
 85d7cf9:	8b 45 24             	mov    0x24(%ebp),%eax
 85d7cfc:	c6 00 01             	movb   $0x1,(%eax)
 85d7cff:	eb 42                	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d7d01:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7d04:	c6 00 01             	movb   $0x1,(%eax)
 85d7d07:	eb 3a                	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d7d09:	8b 55 10             	mov    0x10(%ebp),%edx
 85d7d0c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7d0f:	83 c2 0c             	add    $0xc,%edx
 85d7d12:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d7d15:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85d7d18:	74 07                	je     85d7d21 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x561>
 85d7d1a:	b8 08 00 00 00       	mov    $0x8,%eax
 85d7d1f:	eb 27                	jmp    85d7d48 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x588>
 85d7d21:	8b 45 14             	mov    0x14(%ebp),%eax
 85d7d24:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d7d28:	8b 45 10             	mov    0x10(%ebp),%eax
 85d7d2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d7d2f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d7d32:	89 04 24             	mov    %eax,(%esp)
 85d7d35:	e8 16 00 00 00       	call   85d7d50 <_ZN8PvP_Room11change_teamEii>
 85d7d3a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85d7d3d:	c6 00 01             	movb   $0x1,(%eax)
 85d7d40:	eb 01                	jmp    85d7d43 <_ZN8PvP_Room14set_seat_stateEP5CUseri15ENUM_SEAT_STATEPS1_RbS4_S4_+0x583>
 85d7d42:	90                   	nop
 85d7d43:	b8 00 00 00 00       	mov    $0x0,%eax
 85d7d48:	83 c4 6c             	add    $0x6c,%esp
 85d7d4b:	5b                   	pop    %ebx
 85d7d4c:	5e                   	pop    %esi
 85d7d4d:	5f                   	pop    %edi
 85d7d4e:	5d                   	pop    %ebp
 85d7d4f:	c3                   	ret

```

```c
// PvP_Room::set_seat_state @ 0x85d77c0

/* PvP_Room::set_seat_state(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&) */

undefined4 __thiscall
PvP_Room::set_seat_state
          (PvP_Room *this,CUserCharacInfo *param_1,int param_2,int param_4,undefined4 *param_5,
          undefined1 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  CSwitchLog local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1 == (CUserCharacInfo *)0x0) {
    return 0;
  }
  uVar2 = get_waiter_count(this);
  uVar3 = get_pvp_battle_mode(this);
  uVar4 = get_index(this);
  uVar5 = CUserCharacInfo::getCurCharacName(param_1);
  uVar6 = CUser::get_acc_name((CUser *)param_1);
  CSwitchLog::CSwitchLog
            (local_34,
             "int PvP_Room::set_seat_state(CUser*, int, ENUM_SEAT_STATE, CUser**, bool&, bool&, bool&)"
             ,0x594,0,0);
  CSwitchLog::operator()
            (local_34,"pvp@log %s,%s,room(%d),%d,%d,%d,%d",uVar6,uVar5,uVar4,uVar3,param_2,param_4,
             uVar2);
  if (param_4 == 0xfe) {
    if (*(int *)(this + 0xb8) == 2) {
      if (*(int *)(this + (param_2 + 0xc) * 4) == 0) {
        return 4;
      }
      if (*(int *)(this + 0x28) == *(int *)(this + (param_2 + 0xc) * 4)) {
        select_new_manager(this);
        *param_6 = 1;
        *param_7 = 1;
      }
      *param_5 = *(undefined4 *)(this + (param_2 + 0xc) * 4);
      GiveOuterPenalty(this,(CUser *)*param_5);
      CUser::SetPvpIndex(*(CUser **)(this + (param_2 + 0xc) * 4),-1);
      local_24 = get_team(this,param_2);
      lock();
      this[param_2 + 0x70] = (PvP_Room)0x0;
      *(undefined4 *)(this + (param_2 + 0x14) * 4) = 0xff;
      *(undefined4 *)(this + (param_2 + 0xc) * 4) = 0;
      *(int *)(this + 0x600) = *(int *)(this + 0x600) + -1;
      this[param_2 + 0x5c8] = (PvP_Room)0x0;
      unlock();
      CRelayBattleMgr::OnLeaveRoom((CRelayBattleMgr *)(this + 0x620),param_2);
      (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
                (*(undefined4 *)(this + 0x6e4),*param_5,this,local_24,param_2);
      iVar7 = get_waiter_count(this);
      if (iVar7 == 0) {
        reset(this);
        *param_6 = 1;
        *param_7 = 1;
        *param_8 = 1;
      }
      else {
        cVar1 = check_winner(this);
        if (cVar1 != '\0') {
          *param_7 = 1;
          pvp_request_pvp_rank(this);
        }
        *param_6 = 1;
      }
    }
    else if (*(CUserCharacInfo **)(this + 0x28) == param_1) {
      if (*(int *)(this + (param_2 + 0xc) * 4) == 0) {
        cVar1 = is_closeable_seat_state(this);
        if (cVar1 == '\0') {
          return 0x13;
        }
        change_team(this,param_2,0xfe);
        *param_6 = 1;
      }
      else {
        CUser::SetPvpIndex(*(CUser **)(this + (param_2 + 0xc) * 4),-1);
        if (*(int *)(this + (param_2 + 0xc) * 4) == *(int *)(this + 0x28)) {
          select_new_manager(this);
          *param_7 = 1;
        }
        *param_5 = *(undefined4 *)(this + (param_2 + 0xc) * 4);
        this[param_2 + 0x70] = (PvP_Room)0x0;
        *(undefined4 *)(this + (param_2 + 0x14) * 4) = 0xff;
        *(undefined4 *)(this + (param_2 + 0xc) * 4) = 0;
        CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),param_2,0xff);
        iVar7 = get_waiter_count(this);
        if (iVar7 == 0) {
          reset(this);
          *param_6 = 1;
          *param_7 = 1;
          *param_8 = 1;
        }
        else {
          *param_6 = 1;
          *param_7 = 1;
        }
      }
    }
    else if (*(int *)(this + (param_2 + 0xc) * 4) != 0) {
      CUser::SetPvpIndex(*(CUser **)(this + (param_2 + 0xc) * 4),-1);
      *param_5 = *(undefined4 *)(this + (param_2 + 0xc) * 4);
      local_20 = get_team(this,param_2);
      this[param_2 + 0x70] = (PvP_Room)0x0;
      *(undefined4 *)(this + (param_2 + 0x14) * 4) = 0xff;
      *(undefined4 *)(this + (param_2 + 0xc) * 4) = 0;
      *(int *)(this + 0x600) = *(int *)(this + 0x600) + -1;
      CRelayBattleMgr::OnLeaveRoom((CRelayBattleMgr *)(this + 0x620),param_2);
      (**(code **)(**(int **)(this + 0x6e4) + 0x2c))
                (*(undefined4 *)(this + 0x6e4),*param_5,this,local_20,param_2);
      iVar7 = get_waiter_count(this);
      if (iVar7 == 0) {
        reset(this);
        *param_6 = 1;
        *param_7 = 1;
        *param_8 = 1;
      }
      else {
        *param_6 = 1;
      }
    }
  }
  else if (param_4 == 0xff) {
    if (*(CUserCharacInfo **)(this + 0x28) != param_1) {
      return 8;
    }
    change_team(this,param_2,0xff);
    *param_6 = 1;
  }
  else {
    if (*(CUserCharacInfo **)(this + (param_2 + 0xc) * 4) != param_1) {
      return 8;
    }
    change_team(this,param_2,param_4);
    *param_6 = 1;
  }
  return 0;
}

```

---

## start_pvp

```asm
// === 085d8c3a PvP_Room::start_pvp  [0x085d8c3a-0x85d91e1] ===
 85d8c3a:	55                   	push   %ebp
 85d8c3b:	89 e5                	mov    %esp,%ebp
 85d8c3d:	56                   	push   %esi
 85d8c3e:	53                   	push   %ebx
 85d8c3f:	83 ec 60             	sub    $0x60,%esp
 85d8c42:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8c45:	89 04 24             	mov    %eax,(%esp)
 85d8c48:	e8 15 dc ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d8c4d:	83 f8 01             	cmp    $0x1,%eax
 85d8c50:	0f 9e c0             	setle  %al
 85d8c53:	84 c0                	test   %al,%al
 85d8c55:	0f 85 7e 05 00 00    	jne    85d91d9 <_ZN8PvP_Room9start_pvpEv+0x59f>
 85d8c5b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8c5e:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d8c64:	8b 00                	mov    (%eax),%eax
 85d8c66:	83 c0 18             	add    $0x18,%eax
 85d8c69:	8b 10                	mov    (%eax),%edx
 85d8c6b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8c6e:	8d 58 04             	lea    0x4(%eax),%ebx
 85d8c71:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8c74:	8d 88 c4 05 00 00    	lea    0x5c4(%eax),%ecx
 85d8c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8c7d:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d8c83:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d8c87:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85d8c8b:	89 04 24             	mov    %eax,(%esp)
 85d8c8e:	ff d2                	call   *%edx
 85d8c90:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8c93:	0f b7 80 c4 05 00 00 	movzwl 0x5c4(%eax),%eax
 85d8c9a:	66 85 c0             	test   %ax,%ax
 85d8c9d:	78 21                	js     85d8cc0 <_ZN8PvP_Room9start_pvpEv+0x86>
 85d8c9f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8ca2:	0f b7 80 c4 05 00 00 	movzwl 0x5c4(%eax),%eax
 85d8ca9:	0f bf d8             	movswl %ax,%ebx
 85d8cac:	e8 ea 34 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d8cb1:	8b 40 04             	mov    0x4(%eax),%eax
 85d8cb4:	89 04 24             	mov    %eax,(%esp)
 85d8cb7:	e8 da 6a 00 00       	call   85df796 <_ZNK8CMapList14GetPVPMapCountEv>
 85d8cbc:	39 c3                	cmp    %eax,%ebx
 85d8cbe:	7e 07                	jle    85d8cc7 <_ZN8PvP_Room9start_pvpEv+0x8d>
 85d8cc0:	b8 01 00 00 00       	mov    $0x1,%eax
 85d8cc5:	eb 05                	jmp    85d8ccc <_ZN8PvP_Room9start_pvpEv+0x92>
 85d8cc7:	b8 00 00 00 00       	mov    $0x0,%eax
 85d8ccc:	84 c0                	test   %al,%al
 85d8cce:	74 53                	je     85d8d23 <_ZN8PvP_Room9start_pvpEv+0xe9>
 85d8cd0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8cd3:	0f b7 80 c4 05 00 00 	movzwl 0x5c4(%eax),%eax
 85d8cda:	0f bf d8             	movswl %ax,%ebx
 85d8cdd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d8ce4:	00 
 85d8ce5:	c7 44 24 08 80 08 00 	movl   $0x880,0x8(%esp)
 85d8cec:	00 
 85d8ced:	c7 44 24 04 89 25 cc 	movl   $0x8cc2589,0x4(%esp)
 85d8cf4:	08 
 85d8cf5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85d8cf8:	89 04 24             	mov    %eax,(%esp)
 85d8cfb:	e8 18 6a f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d8d00:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d8d04:	c7 44 24 04 18 10 cc 	movl   $0x8cc1018,0x4(%esp)
 85d8d0b:	08 
 85d8d0c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85d8d0f:	89 04 24             	mov    %eax,(%esp)
 85d8d12:	e8 71 6a f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d8d17:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8d1a:	66 c7 80 c4 05 00 00 	movw   $0x0,0x5c4(%eax)
 85d8d21:	00 00 
 85d8d23:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8d26:	0f b7 80 c4 05 00 00 	movzwl 0x5c4(%eax),%eax
 85d8d2d:	66 85 c0             	test   %ax,%ax
 85d8d30:	0f 85 a0 00 00 00    	jne    85d8dd6 <_ZN8PvP_Room9start_pvpEv+0x19c>
 85d8d36:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8d39:	89 04 24             	mov    %eax,(%esp)
 85d8d3c:	e8 7b fe ff ff       	call   85d8bbc <_ZN8PvP_Room15SelectRandomMapEv>
 85d8d41:	89 c2                	mov    %eax,%edx
 85d8d43:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8d46:	66 89 90 c6 05 00 00 	mov    %dx,0x5c6(%eax)
 85d8d4d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8d50:	0f b7 80 c6 05 00 00 	movzwl 0x5c6(%eax),%eax
 85d8d57:	66 85 c0             	test   %ax,%ax
 85d8d5a:	78 21                	js     85d8d7d <_ZN8PvP_Room9start_pvpEv+0x143>
 85d8d5c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8d5f:	0f b7 80 c6 05 00 00 	movzwl 0x5c6(%eax),%eax
 85d8d66:	0f bf d8             	movswl %ax,%ebx
 85d8d69:	e8 2d 34 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d8d6e:	8b 40 04             	mov    0x4(%eax),%eax
 85d8d71:	89 04 24             	mov    %eax,(%esp)
 85d8d74:	e8 1d 6a 00 00       	call   85df796 <_ZNK8CMapList14GetPVPMapCountEv>
 85d8d79:	39 c3                	cmp    %eax,%ebx
 85d8d7b:	7c 07                	jl     85d8d84 <_ZN8PvP_Room9start_pvpEv+0x14a>
 85d8d7d:	b8 01 00 00 00       	mov    $0x1,%eax
 85d8d82:	eb 05                	jmp    85d8d89 <_ZN8PvP_Room9start_pvpEv+0x14f>
 85d8d84:	b8 00 00 00 00       	mov    $0x0,%eax
 85d8d89:	84 c0                	test   %al,%al
 85d8d8b:	74 5d                	je     85d8dea <_ZN8PvP_Room9start_pvpEv+0x1b0>
 85d8d8d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8d90:	0f b7 80 c6 05 00 00 	movzwl 0x5c6(%eax),%eax
 85d8d97:	0f bf d8             	movswl %ax,%ebx
 85d8d9a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d8da1:	00 
 85d8da2:	c7 44 24 08 8b 08 00 	movl   $0x88b,0x8(%esp)
 85d8da9:	00 
 85d8daa:	c7 44 24 04 89 25 cc 	movl   $0x8cc2589,0x4(%esp)
 85d8db1:	08 
 85d8db2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85d8db5:	89 04 24             	mov    %eax,(%esp)
 85d8db8:	e8 5b 69 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d8dbd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d8dc1:	c7 44 24 04 38 10 cc 	movl   $0x8cc1038,0x4(%esp)
 85d8dc8:	08 
 85d8dc9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85d8dcc:	89 04 24             	mov    %eax,(%esp)
 85d8dcf:	e8 b4 69 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d8dd4:	eb 14                	jmp    85d8dea <_ZN8PvP_Room9start_pvpEv+0x1b0>
 85d8dd6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8dd9:	0f b7 90 c4 05 00 00 	movzwl 0x5c4(%eax),%edx
 85d8de0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8de3:	66 89 90 c6 05 00 00 	mov    %dx,0x5c6(%eax)
 85d8dea:	e8 b8 15 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d8def:	89 04 24             	mov    %eax,(%esp)
 85d8df2:	e8 29 dd b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d8df7:	83 f8 06             	cmp    $0x6,%eax
 85d8dfa:	0f 94 c0             	sete   %al
 85d8dfd:	84 c0                	test   %al,%al
 85d8dff:	74 21                	je     85d8e22 <_ZN8PvP_Room9start_pvpEv+0x1e8>
 85d8e01:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85d8e08:	e8 91 2e af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85d8e0d:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8e10:	81 c2 c4 00 00 00    	add    $0xc4,%edx
 85d8e16:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8e1a:	89 14 24             	mov    %edx,(%esp)
 85d8e1d:	e8 ce 69 00 00       	call   85df7f0 <_ZN16PvP_GuildWar_Log15SetpvpStartTimeEl>
 85d8e22:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d8e29:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d8e2c:	89 04 24             	mov    %eax,(%esp)
 85d8e2f:	e8 18 4f fb ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85d8e34:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85d8e3b:	e9 6e 01 00 00       	jmp    85d8fae <_ZN8PvP_Room9start_pvpEv+0x374>
 85d8e40:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8e43:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8e46:	83 c2 0c             	add    $0xc,%edx
 85d8e49:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8e4c:	85 c0                	test   %eax,%eax
 85d8e4e:	0f 84 56 01 00 00    	je     85d8faa <_ZN8PvP_Room9start_pvpEv+0x370>
 85d8e54:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d8e58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d8e5b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8e5e:	c6 84 02 c8 05 00 00 	movb   $0x1,0x5c8(%edx,%eax,1)
 85d8e65:	01 
 85d8e66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d8e69:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85d8e6c:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8e6f:	83 c1 14             	add    $0x14,%ecx
 85d8e72:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 85d8e75:	89 d1                	mov    %edx,%ecx
 85d8e77:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8e7a:	88 8c 02 d0 05 00 00 	mov    %cl,0x5d0(%edx,%eax,1)
 85d8e81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d8e84:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8e87:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d8e8e:	00 
 85d8e8f:	0f b6 c0             	movzbl %al,%eax
 85d8e92:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8e95:	81 c2 20 06 00 00    	add    $0x620,%edx
 85d8e9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d8e9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85d8ea2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8ea6:	89 14 24             	mov    %edx,(%esp)
 85d8ea9:	e8 ac 52 00 00       	call   85de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>
 85d8eae:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8eb1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8eb4:	83 c2 0c             	add    $0xc,%edx
 85d8eb7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8eba:	89 04 24             	mov    %eax,(%esp)
 85d8ebd:	e8 aa 40 08 00       	call   865cf6c <_ZN5CUser32reset_pvp_masterid_walkingout_meEv>
 85d8ec2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d8ec5:	89 04 24             	mov    %eax,(%esp)
 85d8ec8:	e8 19 2a af ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85d8ecd:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 85d8ed4:	00 
 85d8ed5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d8edc:	00 
 85d8edd:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d8ee0:	89 04 24             	mov    %eax,(%esp)
 85d8ee3:	e8 14 2a af ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85d8ee8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8eeb:	0f b7 80 c6 05 00 00 	movzwl 0x5c6(%eax),%eax
 85d8ef2:	98                   	cwtl
 85d8ef3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8ef7:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d8efa:	89 04 24             	mov    %eax,(%esp)
 85d8efd:	e8 1e 2a af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d8f02:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8f05:	8b 40 04             	mov    0x4(%eax),%eax
 85d8f08:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d8f0c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d8f0f:	89 04 24             	mov    %eax,(%esp)
 85d8f12:	e8 09 2a af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d8f17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d8f1e:	00 
 85d8f1f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d8f22:	89 04 24             	mov    %eax,(%esp)
 85d8f25:	e8 2e 2a af ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85d8f2a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8f2d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8f30:	83 c2 0c             	add    $0xc,%edx
 85d8f33:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8f36:	8d 55 b0             	lea    -0x50(%ebp),%edx
 85d8f39:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d8f3d:	89 04 24             	mov    %eax,(%esp)
 85d8f40:	e8 75 f6 06 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85d8f45:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8f48:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8f4b:	83 c2 0c             	add    $0xc,%edx
 85d8f4e:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8f51:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 85d8f58:	00 
 85d8f59:	89 04 24             	mov    %eax,(%esp)
 85d8f5c:	e8 51 5e 0a 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 85d8f61:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8f64:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8f67:	83 c2 0c             	add    $0xc,%edx
 85d8f6a:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85d8f6d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8f70:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8f73:	83 c2 0c             	add    $0xc,%edx
 85d8f76:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d8f79:	89 04 24             	mov    %eax,(%esp)
 85d8f7c:	e8 d9 09 b2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85d8f81:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d8f85:	89 04 24             	mov    %eax,(%esp)
 85d8f88:	e8 5b ea b1 ff       	call   80f79e8 <_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser>
 85d8f8d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85d8f90:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8f93:	83 c2 0c             	add    $0xc,%edx
 85d8f96:	8b 1c 90             	mov    (%eax,%edx,4),%ebx
 85d8f99:	e8 41 b9 c5 ff       	call   82348df <_ZN19disconnect_detecter29GetInstanceDisconnectDetecterEv>
 85d8f9e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85d8fa2:	89 04 24             	mov    %eax,(%esp)
 85d8fa5:	e8 c8 92 e9 ff       	call   8472272 <_ZN19disconnect_detecter19CDisconnectDetecter12RegisterUserEP5CUser>
 85d8faa:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85d8fae:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85d8fb2:	0f 9e c0             	setle  %al
 85d8fb5:	84 c0                	test   %al,%al
 85d8fb7:	0f 85 83 fe ff ff    	jne    85d8e40 <_ZN8PvP_Room9start_pvpEv+0x206>
 85d8fbd:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8fc0:	8b 40 04             	mov    0x4(%eax),%eax
 85d8fc3:	89 c2                	mov    %eax,%edx
 85d8fc5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8fc8:	0f b7 80 c6 05 00 00 	movzwl 0x5c6(%eax),%eax
 85d8fcf:	98                   	cwtl
 85d8fd0:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 85d8fd3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d8fd7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d8fdb:	89 04 24             	mov    %eax,(%esp)
 85d8fde:	e8 f5 28 03 00       	call   860b8d8 <_ZN10Statistics8PVPPlay2Eiii>
 85d8fe3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8fe6:	89 04 24             	mov    %eax,(%esp)
 85d8fe9:	e8 8a 37 00 00       	call   85dc778 <_ZN8PvP_Room19calculate_pvp_pointEv>
 85d8fee:	8b 45 08             	mov    0x8(%ebp),%eax
 85d8ff1:	89 04 24             	mov    %eax,(%esp)
 85d8ff4:	e8 69 d8 ff ff       	call   85d6862 <_ZNK8PvP_Room16get_waiter_countEv>
 85d8ff9:	8b 55 08             	mov    0x8(%ebp),%edx
 85d8ffc:	89 82 bc 00 00 00    	mov    %eax,0xbc(%edx)
 85d9002:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9005:	c7 80 b8 00 00 00 02 	movl   $0x2,0xb8(%eax)
 85d900c:	00 00 00 
 85d900f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9012:	8b 40 04             	mov    0x4(%eax),%eax
 85d9015:	83 f8 03             	cmp    $0x3,%eax
 85d9018:	75 10                	jne    85d902a <_ZN8PvP_Room9start_pvpEv+0x3f0>
 85d901a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d901d:	05 20 06 00 00       	add    $0x620,%eax
 85d9022:	89 04 24             	mov    %eax,(%esp)
 85d9025:	e8 72 52 00 00       	call   85de29c <_ZN15CRelayBattleMgr7OnStartEv>
 85d902a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d902d:	8b 40 04             	mov    0x4(%eax),%eax
 85d9030:	83 f8 04             	cmp    $0x4,%eax
 85d9033:	74 0b                	je     85d9040 <_ZN8PvP_Room9start_pvpEv+0x406>
 85d9035:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9038:	8b 40 04             	mov    0x4(%eax),%eax
 85d903b:	83 f8 05             	cmp    $0x5,%eax
 85d903e:	75 10                	jne    85d9050 <_ZN8PvP_Room9start_pvpEv+0x416>
 85d9040:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9043:	05 9c 06 00 00       	add    $0x69c,%eax
 85d9048:	89 04 24             	mov    %eax,(%esp)
 85d904b:	e8 7a 5e 00 00       	call   85deeca <_ZN20CDeathMatchBattleMgr7OnStartEv>
 85d9050:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85d9057:	e8 42 2c af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85d905c:	8b 55 08             	mov    0x8(%ebp),%edx
 85d905f:	89 82 18 06 00 00    	mov    %eax,0x618(%edx)
 85d9065:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d906c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d906f:	8b 40 04             	mov    0x4(%eax),%eax
 85d9072:	83 f8 05             	cmp    $0x5,%eax
 85d9075:	77 4f                	ja     85d90c6 <_ZN8PvP_Room9start_pvpEv+0x48c>
 85d9077:	8b 04 85 80 10 cc 08 	mov    0x8cc1080(,%eax,4),%eax
 85d907e:	ff e0                	jmp    *%eax
 85d9080:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 85d9084:	7e 09                	jle    85d908f <_ZN8PvP_Room9start_pvpEv+0x455>
 85d9086:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 85d908d:	eb 37                	jmp    85d90c6 <_ZN8PvP_Room9start_pvpEv+0x48c>
 85d908f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d9096:	eb 2e                	jmp    85d90c6 <_ZN8PvP_Room9start_pvpEv+0x48c>
 85d9098:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 85d909c:	7e 09                	jle    85d90a7 <_ZN8PvP_Room9start_pvpEv+0x46d>
 85d909e:	c7 45 f0 05 00 00 00 	movl   $0x5,-0x10(%ebp)
 85d90a5:	eb 1f                	jmp    85d90c6 <_ZN8PvP_Room9start_pvpEv+0x48c>
 85d90a7:	c7 45 f0 04 00 00 00 	movl   $0x4,-0x10(%ebp)
 85d90ae:	eb 16                	jmp    85d90c6 <_ZN8PvP_Room9start_pvpEv+0x48c>
 85d90b0:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 85d90b4:	7e 09                	jle    85d90bf <_ZN8PvP_Room9start_pvpEv+0x485>
 85d90b6:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 85d90bd:	eb 07                	jmp    85d90c6 <_ZN8PvP_Room9start_pvpEv+0x48c>
 85d90bf:	c7 45 f0 02 00 00 00 	movl   $0x2,-0x10(%ebp)
 85d90c6:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 85d90c9:	e8 97 56 03 00       	call   860e765 <_Z30GetInstanceCommonStatisticsMgrv>
 85d90ce:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d90d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85d90d9:	00 
 85d90da:	89 04 24             	mov    %eax,(%esp)
 85d90dd:	e8 56 57 03 00       	call   860e838 <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi>
 85d90e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d90e5:	0f b7 80 c6 05 00 00 	movzwl 0x5c6(%eax),%eax
 85d90ec:	66 85 c0             	test   %ax,%ax
 85d90ef:	78 28                	js     85d9119 <_ZN8PvP_Room9start_pvpEv+0x4df>
 85d90f1:	e8 a5 30 af ff       	call   80cc19b <_Z14G_CDataManagerv>
 85d90f6:	8b 40 04             	mov    0x4(%eax),%eax
 85d90f9:	89 04 24             	mov    %eax,(%esp)
 85d90fc:	e8 95 66 00 00       	call   85df796 <_ZNK8CMapList14GetPVPMapCountEv>
 85d9101:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9104:	0f b7 92 c6 05 00 00 	movzwl 0x5c6(%edx),%edx
 85d910b:	0f bf d2             	movswl %dx,%edx
 85d910e:	39 d0                	cmp    %edx,%eax
 85d9110:	7e 07                	jle    85d9119 <_ZN8PvP_Room9start_pvpEv+0x4df>
 85d9112:	b8 01 00 00 00       	mov    $0x1,%eax
 85d9117:	eb 05                	jmp    85d911e <_ZN8PvP_Room9start_pvpEv+0x4e4>
 85d9119:	b8 00 00 00 00       	mov    $0x0,%eax
 85d911e:	84 c0                	test   %al,%al
 85d9120:	74 28                	je     85d914a <_ZN8PvP_Room9start_pvpEv+0x510>
 85d9122:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9125:	0f b7 80 c6 05 00 00 	movzwl 0x5c6(%eax),%eax
 85d912c:	0f bf d8             	movswl %ax,%ebx
 85d912f:	e8 31 56 03 00       	call   860e765 <_Z30GetInstanceCommonStatisticsMgrv>
 85d9134:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d9138:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85d913f:	00 
 85d9140:	89 04 24             	mov    %eax,(%esp)
 85d9143:	e8 f0 56 03 00       	call   860e838 <_ZN20CCommonStatisticsMgr16IncreaseQuantityENS_24ENUM_STATISTIC_CONTAINEREi>
 85d9148:	eb 47                	jmp    85d9191 <_ZN8PvP_Room9start_pvpEv+0x557>
 85d914a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d914d:	0f b7 80 c6 05 00 00 	movzwl 0x5c6(%eax),%eax
 85d9154:	0f bf d8             	movswl %ax,%ebx
 85d9157:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d915e:	00 
 85d915f:	c7 44 24 08 42 09 00 	movl   $0x942,0x8(%esp)
 85d9166:	00 
 85d9167:	c7 44 24 04 89 25 cc 	movl   $0x8cc2589,0x4(%esp)
 85d916e:	08 
 85d916f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d9172:	89 04 24             	mov    %eax,(%esp)
 85d9175:	e8 9e 65 f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d917a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d917e:	c7 44 24 04 58 10 cc 	movl   $0x8cc1058,0x4(%esp)
 85d9185:	08 
 85d9186:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85d9189:	89 04 24             	mov    %eax,(%esp)
 85d918c:	e8 f7 65 f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d9191:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9194:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d919a:	8b 00                	mov    (%eax),%eax
 85d919c:	83 c0 3c             	add    $0x3c,%eax
 85d919f:	8b 10                	mov    (%eax),%edx
 85d91a1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d91a4:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 85d91aa:	89 04 24             	mov    %eax,(%esp)
 85d91ad:	ff d2                	call   *%edx
 85d91af:	eb 1b                	jmp    85d91cc <_ZN8PvP_Room9start_pvpEv+0x592>
 85d91b1:	89 d3                	mov    %edx,%ebx
 85d91b3:	89 c6                	mov    %eax,%esi
 85d91b5:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d91b8:	89 04 24             	mov    %eax,(%esp)
 85d91bb:	e8 c0 4c fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d91c0:	89 f0                	mov    %esi,%eax
 85d91c2:	89 da                	mov    %ebx,%edx
 85d91c4:	89 04 24             	mov    %eax,(%esp)
 85d91c7:	e8 84 a5 50 00       	call   8ae3750 <_Unwind_Resume>
 85d91cc:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85d91cf:	89 04 24             	mov    %eax,(%esp)
 85d91d2:	e8 a9 4c fb ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85d91d7:	eb 01                	jmp    85d91da <_ZN8PvP_Room9start_pvpEv+0x5a0>
 85d91d9:	90                   	nop
 85d91da:	83 c4 60             	add    $0x60,%esp
 85d91dd:	5b                   	pop    %ebx
 85d91de:	5e                   	pop    %esi
 85d91df:	5d                   	pop    %ebp
 85d91e0:	c3                   	ret
 85d91e1:	90                   	nop

```

```c
// PvP_Room::start_pvp @ 0x85d8c3a

/* PvP_Room::start_pvp() */

void __thiscall PvP_Room::start_pvp(PvP_Room *this)

{
  short sVar1;
  CUser *pCVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  GameWorld *this_00;
  long lVar6;
  CHackAnalyzer *this_01;
  CDisconnectDetecter *this_02;
  undefined4 uVar7;
  undefined4 uVar8;
  PacketGuard local_54 [12];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  iVar5 = get_waiter_count(this);
  if (iVar5 < 2) {
    return;
  }
  (**(code **)(**(int **)(this + 0x6e4) + 0x18))
            (*(undefined4 *)(this + 0x6e4),this + 0x5c4,this + 4);
  if (*(short *)(this + 0x5c4) < 0) {
LAB_085d8cc0:
    bVar3 = true;
  }
  else {
    sVar1 = *(short *)(this + 0x5c4);
    iVar5 = G_CDataManager();
    iVar5 = CMapList::GetPVPMapCount(*(CMapList **)(iVar5 + 4));
    if (iVar5 < sVar1) goto LAB_085d8cc0;
    bVar3 = false;
  }
  if (bVar3) {
    sVar1 = *(short *)(this + 0x5c4);
    cMyTrace::cMyTrace(local_48,"void PvP_Room::start_pvp()",0x880,0);
    cMyTrace::operator()(local_48,"START_PVP request_map_index(%d)",(int)sVar1);
    *(undefined2 *)(this + 0x5c4) = 0;
  }
  if (*(short *)(this + 0x5c4) == 0) {
    uVar4 = SelectRandomMap(this);
    *(undefined2 *)(this + 0x5c6) = uVar4;
    if (*(short *)(this + 0x5c6) < 0) {
LAB_085d8d7d:
      bVar3 = true;
    }
    else {
      sVar1 = *(short *)(this + 0x5c6);
      iVar5 = G_CDataManager();
      iVar5 = CMapList::GetPVPMapCount(*(CMapList **)(iVar5 + 4));
      if (iVar5 <= sVar1) goto LAB_085d8d7d;
      bVar3 = false;
    }
    if (bVar3) {
      sVar1 = *(short *)(this + 0x5c6);
      cMyTrace::cMyTrace(local_38,"void PvP_Room::start_pvp()",0x88b,0);
      cMyTrace::operator()(local_38,"START_PVP select_map_index(%d)",(int)sVar1);
    }
  }
  else {
    *(undefined2 *)(this + 0x5c6) = *(undefined2 *)(this + 0x5c4);
  }
  this_00 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(this_00);
  if (iVar5 == 6) {
    lVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    PvP_GuildWar_Log::SetpvpStartTime((PvP_GuildWar_Log *)(this + 0xc4),lVar6);
  }
  local_18 = 0;
  PacketGuard::PacketGuard(local_54);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
      local_18 = local_18 + 1;
      this[local_10 + 0x5c8] = (PvP_Room)0x1;
      this[local_10 + 0x5d0] = SUB41(*(undefined4 *)(this + (local_10 + 0x14) * 4),0);
      CRelayBattleMgr::OnChangeTeam
                ((CRelayBattleMgr *)(this + 0x620),local_10,(uint)(byte)this[local_10 + 0x5d0]);
                    /* try { // try from 085d8ebd to 085d91ae has its CatchHandler @ 085d91b1 */
      CUser::reset_pvp_masterid_walkingout_me(*(CUser **)(this + (local_10 + 0xc) * 4));
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_54);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x2d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,(int)*(short *)(this + 0x5c6));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,*(int *)(this + 4));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
      CUser::Send(*(CUser **)(this + (local_10 + 0xc) * 4),local_54);
      CUser::set_state(*(CUser **)(this + (local_10 + 0xc) * 4),7);
      pCVar2 = *(CUser **)(this + (local_10 + 0xc) * 4);
      this_01 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + (local_10 + 0xc) * 4));
      WongWork::CHackAnalyzer::beginCollectHackInfo(this_01,pCVar2);
      pCVar2 = *(CUser **)(this + (local_10 + 0xc) * 4);
      this_02 = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
      disconnect_detecter::CDisconnectDetecter::RegisterUser(this_02,pCVar2);
    }
  }
  Statistics::PVPPlay2((int)*(short *)(this + 0x5c6),*(int *)(this + 4),local_18);
  calculate_pvp_point(this);
  uVar7 = get_waiter_count(this);
  *(undefined4 *)(this + 0xbc) = uVar7;
  *(undefined4 *)(this + 0xb8) = 2;
  if (*(int *)(this + 4) == 3) {
    CRelayBattleMgr::OnStart((CRelayBattleMgr *)(this + 0x620));
  }
  if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
    CDeathMatchBattleMgr::OnStart((CDeathMatchBattleMgr *)(this + 0x69c));
  }
  uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x618) = uVar7;
  local_14 = 0;
  switch(*(undefined4 *)(this + 4)) {
  case 1:
  case 4:
    if (local_18 < 3) {
      local_14 = 0;
    }
    else {
      local_14 = 1;
    }
    break;
  case 2:
  case 5:
    if (local_18 < 3) {
      local_14 = 2;
    }
    else {
      local_14 = 3;
    }
    break;
  case 3:
    if (local_18 < 3) {
      local_14 = 4;
    }
    else {
      local_14 = 5;
    }
  }
  uVar7 = local_14;
  uVar8 = GetInstanceCommonStatisticsMgr();
  CCommonStatisticsMgr::IncreaseQuantity(uVar8,1,uVar7);
  if (-1 < *(short *)(this + 0x5c6)) {
    iVar5 = G_CDataManager();
    iVar5 = CMapList::GetPVPMapCount(*(CMapList **)(iVar5 + 4));
    if (*(short *)(this + 0x5c6) < iVar5) {
      bVar3 = true;
      goto LAB_085d911e;
    }
  }
  bVar3 = false;
LAB_085d911e:
  if (bVar3) {
    sVar1 = *(short *)(this + 0x5c6);
    uVar7 = GetInstanceCommonStatisticsMgr();
    CCommonStatisticsMgr::IncreaseQuantity(uVar7,2,(int)sVar1);
  }
  else {
    sVar1 = *(short *)(this + 0x5c6);
    cMyTrace::cMyTrace(local_28,"void PvP_Room::start_pvp()",0x942,0);
    cMyTrace::operator()(local_28,"START_PVP filter select_map_index(%d)",(int)sVar1);
  }
  (**(code **)(**(int **)(this + 0x6e4) + 0x3c))(*(undefined4 *)(this + 0x6e4));
  PacketGuard::~PacketGuard(local_54);
  return;
}

```

---

## time_out

```asm
// === 085d9b0e PvP_Room::time_out  [0x085d9b0e-0x85da045] ===
 85d9b0e:	55                   	push   %ebp
 85d9b0f:	89 e5                	mov    %esp,%ebp
 85d9b11:	56                   	push   %esi
 85d9b12:	53                   	push   %ebx
 85d9b13:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 85d9b19:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9b1c:	0f b6 80 14 06 00 00 	movzbl 0x614(%eax),%eax
 85d9b23:	84 c0                	test   %al,%al
 85d9b25:	74 0a                	je     85d9b31 <_ZN8PvP_Room8time_outEPi+0x23>
 85d9b27:	b8 00 00 00 00       	mov    $0x0,%eax
 85d9b2c:	e9 0b 05 00 00       	jmp    85da03c <_ZN8PvP_Room8time_outEPi+0x52e>
 85d9b31:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9b34:	c6 80 14 06 00 00 01 	movb   $0x1,0x614(%eax)
 85d9b3b:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 85d9b42:	e8 60 08 b0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85d9b47:	89 04 24             	mov    %eax,(%esp)
 85d9b4a:	e8 d1 cf b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85d9b4f:	83 f8 07             	cmp    $0x7,%eax
 85d9b52:	0f 94 c0             	sete   %al
 85d9b55:	84 c0                	test   %al,%al
 85d9b57:	74 07                	je     85d9b60 <_ZN8PvP_Room8time_outEPi+0x52>
 85d9b59:	c7 45 b8 01 00 00 00 	movl   $0x1,-0x48(%ebp)
 85d9b60:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85d9b67:	e8 32 21 af ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85d9b6c:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9b6f:	8b 92 18 06 00 00    	mov    0x618(%edx),%edx
 85d9b75:	29 d0                	sub    %edx,%eax
 85d9b77:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85d9b7a:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 85d9b81:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9b84:	8b 40 04             	mov    0x4(%eax),%eax
 85d9b87:	83 f8 01             	cmp    $0x1,%eax
 85d9b8a:	7c 59                	jl     85d9be5 <_ZN8PvP_Room8time_outEPi+0xd7>
 85d9b8c:	83 f8 02             	cmp    $0x2,%eax
 85d9b8f:	7e 0a                	jle    85d9b9b <_ZN8PvP_Room8time_outEPi+0x8d>
 85d9b91:	83 e8 04             	sub    $0x4,%eax
 85d9b94:	83 f8 01             	cmp    $0x1,%eax
 85d9b97:	77 4c                	ja     85d9be5 <_ZN8PvP_Room8time_outEPi+0xd7>
 85d9b99:	eb 26                	jmp    85d9bc1 <_ZN8PvP_Room8time_outEPi+0xb3>
 85d9b9b:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85d9b9e:	8b 0c 85 e0 4e 3f 09 	mov    0x93f4ee0(,%eax,4),%ecx
 85d9ba5:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 85d9baa:	89 c8                	mov    %ecx,%eax
 85d9bac:	f7 ea                	imul   %edx
 85d9bae:	c1 fa 06             	sar    $0x6,%edx
 85d9bb1:	89 c8                	mov    %ecx,%eax
 85d9bb3:	c1 f8 1f             	sar    $0x1f,%eax
 85d9bb6:	89 d1                	mov    %edx,%ecx
 85d9bb8:	29 c1                	sub    %eax,%ecx
 85d9bba:	89 c8                	mov    %ecx,%eax
 85d9bbc:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85d9bbf:	eb 24                	jmp    85d9be5 <_ZN8PvP_Room8time_outEPi+0xd7>
 85d9bc1:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85d9bc4:	8b 0c 85 e8 4e 3f 09 	mov    0x93f4ee8(,%eax,4),%ecx
 85d9bcb:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 85d9bd0:	89 c8                	mov    %ecx,%eax
 85d9bd2:	f7 ea                	imul   %edx
 85d9bd4:	c1 fa 06             	sar    $0x6,%edx
 85d9bd7:	89 c8                	mov    %ecx,%eax
 85d9bd9:	c1 f8 1f             	sar    $0x1f,%eax
 85d9bdc:	89 d1                	mov    %edx,%ecx
 85d9bde:	29 c1                	sub    %eax,%ecx
 85d9be0:	89 c8                	mov    %ecx,%eax
 85d9be2:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85d9be5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85d9be8:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85d9beb:	89 d1                	mov    %edx,%ecx
 85d9bed:	29 c1                	sub    %eax,%ecx
 85d9bef:	89 c8                	mov    %ecx,%eax
 85d9bf1:	85 c0                	test   %eax,%eax
 85d9bf3:	7e 44                	jle    85d9c39 <_ZN8PvP_Room8time_outEPi+0x12b>
 85d9bf5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d9bfc:	00 
 85d9bfd:	c7 44 24 08 9a 0a 00 	movl   $0xa9a,0x8(%esp)
 85d9c04:	00 
 85d9c05:	c7 44 24 04 20 25 cc 	movl   $0x8cc2520,0x4(%esp)
 85d9c0c:	08 
 85d9c0d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d9c10:	89 04 24             	mov    %eax,(%esp)
 85d9c13:	e8 00 5b f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d9c18:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85d9c1b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85d9c1f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85d9c22:	89 44 24 08          	mov    %eax,0x8(%esp)
 85d9c26:	c7 44 24 04 f4 10 cc 	movl   $0x8cc10f4,0x4(%esp)
 85d9c2d:	08 
 85d9c2e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85d9c31:	89 04 24             	mov    %eax,(%esp)
 85d9c34:	e8 4f 5b f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d9c39:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9c3c:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 85d9c42:	83 f8 02             	cmp    $0x2,%eax
 85d9c45:	74 0a                	je     85d9c51 <_ZN8PvP_Room8time_outEPi+0x143>
 85d9c47:	b8 13 00 00 00       	mov    $0x13,%eax
 85d9c4c:	e9 eb 03 00 00       	jmp    85da03c <_ZN8PvP_Room8time_outEPi+0x52e>
 85d9c51:	c6 45 c7 01          	movb   $0x1,-0x39(%ebp)
 85d9c55:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 85d9c5c:	eb 27                	jmp    85d9c85 <_ZN8PvP_Room8time_outEPi+0x177>
 85d9c5e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85d9c61:	c1 e0 02             	shl    $0x2,%eax
 85d9c64:	03 45 0c             	add    0xc(%ebp),%eax
 85d9c67:	8b 10                	mov    (%eax),%edx
 85d9c69:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85d9c6c:	83 c0 01             	add    $0x1,%eax
 85d9c6f:	c1 e0 02             	shl    $0x2,%eax
 85d9c72:	03 45 0c             	add    0xc(%ebp),%eax
 85d9c75:	8b 00                	mov    (%eax),%eax
 85d9c77:	39 c2                	cmp    %eax,%edx
 85d9c79:	74 06                	je     85d9c81 <_ZN8PvP_Room8time_outEPi+0x173>
 85d9c7b:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 85d9c7f:	eb 0f                	jmp    85d9c90 <_ZN8PvP_Room8time_outEPi+0x182>
 85d9c81:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 85d9c85:	83 7d c8 06          	cmpl   $0x6,-0x38(%ebp)
 85d9c89:	0f 9e c0             	setle  %al
 85d9c8c:	84 c0                	test   %al,%al
 85d9c8e:	75 ce                	jne    85d9c5e <_ZN8PvP_Room8time_outEPi+0x150>
 85d9c90:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9c93:	8b 40 04             	mov    0x4(%eax),%eax
 85d9c96:	83 f8 02             	cmp    $0x2,%eax
 85d9c99:	74 0f                	je     85d9caa <_ZN8PvP_Room8time_outEPi+0x19c>
 85d9c9b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9c9e:	8b 40 04             	mov    0x4(%eax),%eax
 85d9ca1:	83 f8 03             	cmp    $0x3,%eax
 85d9ca4:	0f 85 f0 01 00 00    	jne    85d9e9a <_ZN8PvP_Room8time_outEPi+0x38c>
 85d9caa:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9cad:	89 04 24             	mov    %eax,(%esp)
 85d9cb0:	e8 85 5c 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d9cb5:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 85d9cb9:	83 f0 01             	xor    $0x1,%eax
 85d9cbc:	84 c0                	test   %al,%al
 85d9cbe:	0f 84 a0 01 00 00    	je     85d9e64 <_ZN8PvP_Room8time_outEPi+0x356>
 85d9cc4:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 85d9ccb:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 85d9cd2:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 85d9cd9:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 85d9ce0:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 85d9ce7:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 85d9cee:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 85d9cf5:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 85d9cfc:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 85d9d03:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 85d9d0a:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 85d9d11:	e9 8c 00 00 00       	jmp    85d9da2 <_ZN8PvP_Room8time_outEPi+0x294>
 85d9d16:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85d9d19:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9d1c:	83 c2 0c             	add    $0xc,%edx
 85d9d1f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d9d22:	85 c0                	test   %eax,%eax
 85d9d24:	74 78                	je     85d9d9e <_ZN8PvP_Room8time_outEPi+0x290>
 85d9d26:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d9d29:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9d2c:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9d33:	00 
 85d9d34:	84 c0                	test   %al,%al
 85d9d36:	74 66                	je     85d9d9e <_ZN8PvP_Room8time_outEPi+0x290>
 85d9d38:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d9d3b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9d3e:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9d45:	00 
 85d9d46:	3c fd                	cmp    $0xfd,%al
 85d9d48:	77 54                	ja     85d9d9e <_ZN8PvP_Room8time_outEPi+0x290>
 85d9d4a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d9d4d:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9d50:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9d57:	00 
 85d9d58:	0f b6 c0             	movzbl %al,%eax
 85d9d5b:	8b 54 85 94          	mov    -0x6c(%ebp,%eax,4),%edx
 85d9d5f:	83 c2 01             	add    $0x1,%edx
 85d9d62:	89 54 85 94          	mov    %edx,-0x6c(%ebp,%eax,4)
 85d9d66:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85d9d69:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9d6c:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9d73:	00 
 85d9d74:	0f b6 c0             	movzbl %al,%eax
 85d9d77:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85d9d7a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85d9d7d:	0f b6 94 11 d0 05 00 	movzbl 0x5d0(%ecx,%edx,1),%edx
 85d9d84:	00 
 85d9d85:	0f b6 d2             	movzbl %dl,%edx
 85d9d88:	8b 4c 95 80          	mov    -0x80(%ebp,%edx,4),%ecx
 85d9d8c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85d9d8f:	c1 e2 02             	shl    $0x2,%edx
 85d9d92:	03 55 0c             	add    0xc(%ebp),%edx
 85d9d95:	8b 12                	mov    (%edx),%edx
 85d9d97:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85d9d9a:	89 54 85 80          	mov    %edx,-0x80(%ebp,%eax,4)
 85d9d9e:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 85d9da2:	83 7d d4 07          	cmpl   $0x7,-0x2c(%ebp)
 85d9da6:	0f 9e c0             	setle  %al
 85d9da9:	84 c0                	test   %al,%al
 85d9dab:	0f 85 65 ff ff ff    	jne    85d9d16 <_ZN8PvP_Room8time_outEPi+0x208>
 85d9db1:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 85d9db8:	c7 45 d0 ff ff ff 7f 	movl   $0x7fffffff,-0x30(%ebp)
 85d9dbf:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 85d9dc6:	eb 2b                	jmp    85d9df3 <_ZN8PvP_Room8time_outEPi+0x2e5>
 85d9dc8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d9dcb:	8b 44 85 94          	mov    -0x6c(%ebp,%eax,4),%eax
 85d9dcf:	85 c0                	test   %eax,%eax
 85d9dd1:	7e 1c                	jle    85d9def <_ZN8PvP_Room8time_outEPi+0x2e1>
 85d9dd3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d9dd6:	8b 44 85 80          	mov    -0x80(%ebp,%eax,4),%eax
 85d9dda:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 85d9ddd:	7d 10                	jge    85d9def <_ZN8PvP_Room8time_outEPi+0x2e1>
 85d9ddf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d9de2:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85d9de5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85d9de8:	8b 44 85 80          	mov    -0x80(%ebp,%eax,4),%eax
 85d9dec:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85d9def:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85d9df3:	83 7d d8 04          	cmpl   $0x4,-0x28(%ebp)
 85d9df7:	0f 9e c0             	setle  %al
 85d9dfa:	84 c0                	test   %al,%al
 85d9dfc:	75 ca                	jne    85d9dc8 <_ZN8PvP_Room8time_outEPi+0x2ba>
 85d9dfe:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85d9e05:	eb 38                	jmp    85d9e3f <_ZN8PvP_Room8time_outEPi+0x331>
 85d9e07:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85d9e0a:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9e0d:	0f b6 84 02 d0 05 00 	movzbl 0x5d0(%edx,%eax,1),%eax
 85d9e14:	00 
 85d9e15:	0f b6 c0             	movzbl %al,%eax
 85d9e18:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 85d9e1b:	75 10                	jne    85d9e2d <_ZN8PvP_Room8time_outEPi+0x31f>
 85d9e1d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85d9e20:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9e23:	c6 84 02 c8 05 00 00 	movb   $0x1,0x5c8(%edx,%eax,1)
 85d9e2a:	01 
 85d9e2b:	eb 0e                	jmp    85d9e3b <_ZN8PvP_Room8time_outEPi+0x32d>
 85d9e2d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85d9e30:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9e33:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85d9e3a:	00 
 85d9e3b:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85d9e3f:	83 7d dc 07          	cmpl   $0x7,-0x24(%ebp)
 85d9e43:	0f 9e c0             	setle  %al
 85d9e46:	84 c0                	test   %al,%al
 85d9e48:	75 bd                	jne    85d9e07 <_ZN8PvP_Room8time_outEPi+0x2f9>
 85d9e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9e4d:	8d 90 68 02 00 00    	lea    0x268(%eax),%edx
 85d9e53:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85d9e56:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9e5a:	89 14 24             	mov    %edx,(%esp)
 85d9e5d:	e8 fc b9 ff ff       	call   85d585e <_ZN12PvpUserTable10SetWinTeamEi>
 85d9e62:	eb 26                	jmp    85d9e8a <_ZN8PvP_Room8time_outEPi+0x37c>
 85d9e64:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85d9e6b:	eb 12                	jmp    85d9e7f <_ZN8PvP_Room8time_outEPi+0x371>
 85d9e6d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85d9e70:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9e73:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85d9e7a:	00 
 85d9e7b:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85d9e7f:	83 7d e0 07          	cmpl   $0x7,-0x20(%ebp)
 85d9e83:	0f 9e c0             	setle  %al
 85d9e86:	84 c0                	test   %al,%al
 85d9e88:	75 e3                	jne    85d9e6d <_ZN8PvP_Room8time_outEPi+0x35f>
 85d9e8a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9e8d:	89 04 24             	mov    %eax,(%esp)
 85d9e90:	e8 ab 5a 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85d9e95:	e9 92 01 00 00       	jmp    85da02c <_ZN8PvP_Room8time_outEPi+0x51e>
 85d9e9a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9e9d:	8b 40 04             	mov    0x4(%eax),%eax
 85d9ea0:	83 f8 05             	cmp    $0x5,%eax
 85d9ea3:	75 46                	jne    85d9eeb <_ZN8PvP_Room8time_outEPi+0x3dd>
 85d9ea5:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9ea8:	8d b0 68 02 00 00    	lea    0x268(%eax),%esi
 85d9eae:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9eb1:	8d 98 d0 05 00 00    	lea    0x5d0(%eax),%ebx
 85d9eb7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9eba:	8d 88 c8 05 00 00    	lea    0x5c8(%eax),%ecx
 85d9ec0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9ec3:	8d 50 30             	lea    0x30(%eax),%edx
 85d9ec6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9ec9:	05 9c 06 00 00       	add    $0x69c,%eax
 85d9ece:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d9ed2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d9ed6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d9eda:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d9ede:	89 04 24             	mov    %eax,(%esp)
 85d9ee1:	e8 b0 53 00 00       	call   85df296 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable>
 85d9ee6:	e9 41 01 00 00       	jmp    85da02c <_ZN8PvP_Room8time_outEPi+0x51e>
 85d9eeb:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9eee:	8b 40 04             	mov    0x4(%eax),%eax
 85d9ef1:	83 f8 04             	cmp    $0x4,%eax
 85d9ef4:	75 39                	jne    85d9f2f <_ZN8PvP_Room8time_outEPi+0x421>
 85d9ef6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9ef9:	8d 98 68 02 00 00    	lea    0x268(%eax),%ebx
 85d9eff:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9f02:	8d 88 c8 05 00 00    	lea    0x5c8(%eax),%ecx
 85d9f08:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9f0b:	8d 50 30             	lea    0x30(%eax),%edx
 85d9f0e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9f11:	05 9c 06 00 00       	add    $0x69c,%eax
 85d9f16:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d9f1a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d9f1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d9f22:	89 04 24             	mov    %eax,(%esp)
 85d9f25:	e8 60 55 00 00       	call   85df48a <_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable>
 85d9f2a:	e9 fd 00 00 00       	jmp    85da02c <_ZN8PvP_Room8time_outEPi+0x51e>
 85d9f2f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9f32:	89 04 24             	mov    %eax,(%esp)
 85d9f35:	e8 00 5a 00 00       	call   85df93a <_ZN8PvP_Room4lockEv>
 85d9f3a:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 85d9f3e:	83 f0 01             	xor    $0x1,%eax
 85d9f41:	84 c0                	test   %al,%al
 85d9f43:	0f 84 b2 00 00 00    	je     85d9ffb <_ZN8PvP_Room8time_outEPi+0x4ed>
 85d9f49:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85d9f50:	c7 45 e8 ff ff ff 7f 	movl   $0x7fffffff,-0x18(%ebp)
 85d9f57:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85d9f5e:	eb 38                	jmp    85d9f98 <_ZN8PvP_Room8time_outEPi+0x48a>
 85d9f60:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85d9f63:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9f66:	83 c2 0c             	add    $0xc,%edx
 85d9f69:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85d9f6c:	85 c0                	test   %eax,%eax
 85d9f6e:	74 24                	je     85d9f94 <_ZN8PvP_Room8time_outEPi+0x486>
 85d9f70:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d9f73:	c1 e0 02             	shl    $0x2,%eax
 85d9f76:	03 45 0c             	add    0xc(%ebp),%eax
 85d9f79:	8b 00                	mov    (%eax),%eax
 85d9f7b:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 85d9f7e:	7d 14                	jge    85d9f94 <_ZN8PvP_Room8time_outEPi+0x486>
 85d9f80:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d9f83:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d9f86:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85d9f89:	c1 e0 02             	shl    $0x2,%eax
 85d9f8c:	03 45 0c             	add    0xc(%ebp),%eax
 85d9f8f:	8b 00                	mov    (%eax),%eax
 85d9f91:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85d9f94:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85d9f98:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85d9f9c:	0f 9e c0             	setle  %al
 85d9f9f:	84 c0                	test   %al,%al
 85d9fa1:	75 bd                	jne    85d9f60 <_ZN8PvP_Room8time_outEPi+0x452>
 85d9fa3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85d9faa:	eb 2a                	jmp    85d9fd6 <_ZN8PvP_Room8time_outEPi+0x4c8>
 85d9fac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d9faf:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85d9fb2:	75 10                	jne    85d9fc4 <_ZN8PvP_Room8time_outEPi+0x4b6>
 85d9fb4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d9fb7:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9fba:	c6 84 02 c8 05 00 00 	movb   $0x1,0x5c8(%edx,%eax,1)
 85d9fc1:	01 
 85d9fc2:	eb 0e                	jmp    85d9fd2 <_ZN8PvP_Room8time_outEPi+0x4c4>
 85d9fc4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85d9fc7:	8b 55 08             	mov    0x8(%ebp),%edx
 85d9fca:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85d9fd1:	00 
 85d9fd2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85d9fd6:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85d9fda:	0f 9e c0             	setle  %al
 85d9fdd:	84 c0                	test   %al,%al
 85d9fdf:	75 cb                	jne    85d9fac <_ZN8PvP_Room8time_outEPi+0x49e>
 85d9fe1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d9fe4:	8d 90 68 02 00 00    	lea    0x268(%eax),%edx
 85d9fea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85d9fed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d9ff1:	89 14 24             	mov    %edx,(%esp)
 85d9ff4:	e8 65 b8 ff ff       	call   85d585e <_ZN12PvpUserTable10SetWinTeamEi>
 85d9ff9:	eb 26                	jmp    85da021 <_ZN8PvP_Room8time_outEPi+0x513>
 85d9ffb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85da002:	eb 12                	jmp    85da016 <_ZN8PvP_Room8time_outEPi+0x508>
 85da004:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85da007:	8b 55 08             	mov    0x8(%ebp),%edx
 85da00a:	c6 84 02 c8 05 00 00 	movb   $0x0,0x5c8(%edx,%eax,1)
 85da011:	00 
 85da012:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85da016:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85da01a:	0f 9e c0             	setle  %al
 85da01d:	84 c0                	test   %al,%al
 85da01f:	75 e3                	jne    85da004 <_ZN8PvP_Room8time_outEPi+0x4f6>
 85da021:	8b 45 08             	mov    0x8(%ebp),%eax
 85da024:	89 04 24             	mov    %eax,(%esp)
 85da027:	e8 14 59 00 00       	call   85df940 <_ZN8PvP_Room6unlockEv>
 85da02c:	8b 45 08             	mov    0x8(%ebp),%eax
 85da02f:	89 04 24             	mov    %eax,(%esp)
 85da032:	e8 47 2d 00 00       	call   85dcd7e <_ZN8PvP_Room20pvp_request_pvp_rankEv>
 85da037:	b8 00 00 00 00       	mov    $0x0,%eax
 85da03c:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 85da042:	5b                   	pop    %ebx
 85da043:	5e                   	pop    %esi
 85da044:	5d                   	pop    %ebp
 85da045:	c3                   	ret

```

```c
// PvP_Room::time_out @ 0x85d9b0e

/* PvP_Room::time_out(int*) */

undefined4 __thiscall PvP_Room::time_out(PvP_Room *this,int *param_1)

{
  undefined4 uVar1;
  GameWorld *this_00;
  int iVar2;
  int local_84 [10];
  cMyTrace local_5c [16];
  int local_4c;
  int local_48;
  int local_44;
  char local_3d;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (this[0x614] == (PvP_Room)0x0) {
    this[0x614] = (PvP_Room)0x1;
    local_4c = 0;
    this_00 = (GameWorld *)G_GameWorld();
    iVar2 = GameWorld::GetChannelType(this_00);
    if (iVar2 == 7) {
      local_4c = 1;
    }
    local_48 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_48 = local_48 - *(int *)(this + 0x618);
    local_44 = 0;
    iVar2 = *(int *)(this + 4);
    if (0 < iVar2) {
      if (iVar2 < 3) {
        local_44 = *(int *)((int)&PVP_NORMAL_BATTLE_TIME + local_4c * 4) / 1000;
      }
      else if (iVar2 - 4U < 2) {
        local_44 = *(int *)((int)&PVP_DM_BATTLE_TIME + local_4c * 4) / 1000;
      }
    }
    if (local_44 != local_48 && -1 < local_44 - local_48) {
      cMyTrace::cMyTrace(local_5c,"int PvP_Room::time_out(int*)",0xa9a,0);
      cMyTrace::operator()
                (local_5c,"PVP_TIMEOUT_CHECK end_time(%d), play_time(%d)",local_44,local_48);
    }
    if (*(int *)(this + 0xb8) == 2) {
      local_3d = '\x01';
      for (local_3c = 0; local_3c < 7; local_3c = local_3c + 1) {
        if (param_1[local_3c] != param_1[local_3c + 1]) {
          local_3d = '\0';
          break;
        }
      }
      if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
        lock();
        if (local_3d == '\x01') {
          for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
            this[local_24 + 0x5c8] = (PvP_Room)0x0;
          }
        }
        else {
          local_84[5] = 0;
          local_84[6] = 0;
          local_84[7] = 0;
          local_84[8] = 0;
          local_84[9] = 0;
          local_84[0] = 0;
          local_84[1] = 0;
          local_84[2] = 0;
          local_84[3] = 0;
          local_84[4] = 0;
          for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
            if (((*(int *)(this + (local_30 + 0xc) * 4) != 0) &&
                (this[local_30 + 0x5d0] != (PvP_Room)0x0)) && ((byte)this[local_30 + 0x5d0] < 0xfe))
            {
              local_84[(byte)this[local_30 + 0x5d0] + 5] =
                   local_84[(byte)this[local_30 + 0x5d0] + 5] + 1;
              local_84[(byte)this[local_30 + 0x5d0]] =
                   local_84[(byte)this[local_30 + 0x5d0]] + param_1[local_30];
            }
          }
          local_38 = 0;
          local_34 = 0x7fffffff;
          for (local_2c = 1; (int)local_2c < 5; local_2c = local_2c + 1) {
            if ((0 < local_84[local_2c + 5]) && (local_84[local_2c] < local_34)) {
              local_38 = local_2c;
              local_34 = local_84[local_2c];
            }
          }
          for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
            if ((byte)this[local_28 + 0x5d0] == local_38) {
              this[local_28 + 0x5c8] = (PvP_Room)0x1;
            }
            else {
              this[local_28 + 0x5c8] = (PvP_Room)0x0;
            }
          }
          PvpUserTable::SetWinTeam((PvpUserTable *)(this + 0x268),local_38);
        }
        unlock();
      }
      else if (*(int *)(this + 4) == 5) {
        CDeathMatchBattleMgr::checkWinnerForTeamPlay
                  ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),
                   (bool *)(this + 0x5c8),(uchar *)(this + 0x5d0),(PvpUserTable *)(this + 0x268));
      }
      else if (*(int *)(this + 4) == 4) {
        CDeathMatchBattleMgr::checkWinnerForSinglePlay
                  ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),
                   (bool *)(this + 0x5c8),(PvpUserTable *)(this + 0x268));
      }
      else {
        lock();
        if (local_3d == '\x01') {
          for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
            this[local_10 + 0x5c8] = (PvP_Room)0x0;
          }
        }
        else {
          local_20 = 0;
          local_1c = 0x7fffffff;
          for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
            if ((*(int *)(this + (local_18 + 0xc) * 4) != 0) && (param_1[local_18] < local_1c)) {
              local_20 = local_18;
              local_1c = param_1[local_18];
            }
          }
          for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
            if (local_20 == local_14) {
              this[local_14 + 0x5c8] = (PvP_Room)0x1;
            }
            else {
              this[local_14 + 0x5c8] = (PvP_Room)0x0;
            }
          }
          PvpUserTable::SetWinTeam((PvpUserTable *)(this + 0x268),local_20);
        }
        unlock();
      }
      pvp_request_pvp_rank(this);
      uVar1 = 0;
    }
    else {
      uVar1 = 0x13;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## update_pvp_point

```asm
// === 085dc866 PvP_Room::update_pvp_point  [0x085dc866-0x85dca47] ===
 85dc866:	55                   	push   %ebp
 85dc867:	89 e5                	mov    %esp,%ebp
 85dc869:	53                   	push   %ebx
 85dc86a:	83 ec 24             	sub    $0x24,%esp
 85dc86d:	e8 35 db af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dc872:	89 04 24             	mov    %eax,(%esp)
 85dc875:	e8 6e 5c b6 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 85dc87a:	84 c0                	test   %al,%al
 85dc87c:	74 6e                	je     85dc8ec <_ZN8PvP_Room16update_pvp_pointEv+0x86>
 85dc87e:	e8 24 db af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85dc883:	89 04 24             	mov    %eax,(%esp)
 85dc886:	e8 27 42 bc ff       	call   81a0ab2 <_ZNK9GameWorld16IsFreePvPChannelEv>
 85dc88b:	84 c0                	test   %al,%al
 85dc88d:	74 5d                	je     85dc8ec <_ZN8PvP_Room16update_pvp_pointEv+0x86>
 85dc88f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85dc896:	eb 44                	jmp    85dc8dc <_ZN8PvP_Room16update_pvp_pointEv+0x76>
 85dc898:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85dc89b:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc89e:	83 c2 0c             	add    $0xc,%edx
 85dc8a1:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc8a4:	85 c0                	test   %eax,%eax
 85dc8a6:	74 2c                	je     85dc8d4 <_ZN8PvP_Room16update_pvp_pointEv+0x6e>
 85dc8a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85dc8ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc8af:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc8b2:	89 04 24             	mov    %eax,(%esp)
 85dc8b5:	e8 8c d7 ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85dc8ba:	84 c0                	test   %al,%al
 85dc8bc:	75 19                	jne    85dc8d7 <_ZN8PvP_Room16update_pvp_pointEv+0x71>
 85dc8be:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85dc8c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc8c4:	83 c2 0c             	add    $0xc,%edx
 85dc8c7:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc8ca:	89 04 24             	mov    %eax,(%esp)
 85dc8cd:	e8 da 06 08 00       	call   865cfac <_ZN5CUser20update_old_pvp_pointEv>
 85dc8d2:	eb 04                	jmp    85dc8d8 <_ZN8PvP_Room16update_pvp_pointEv+0x72>
 85dc8d4:	90                   	nop
 85dc8d5:	eb 01                	jmp    85dc8d8 <_ZN8PvP_Room16update_pvp_pointEv+0x72>
 85dc8d7:	90                   	nop
 85dc8d8:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85dc8dc:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85dc8e0:	0f 9e c0             	setle  %al
 85dc8e3:	84 c0                	test   %al,%al
 85dc8e5:	75 b1                	jne    85dc898 <_ZN8PvP_Room16update_pvp_pointEv+0x32>
 85dc8e7:	e9 56 01 00 00       	jmp    85dca42 <_ZN8PvP_Room16update_pvp_pointEv+0x1dc>
 85dc8ec:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85dc8f3:	e9 3b 01 00 00       	jmp    85dca33 <_ZN8PvP_Room16update_pvp_pointEv+0x1cd>
 85dc8f8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dc8fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc8fe:	83 c2 0c             	add    $0xc,%edx
 85dc901:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc904:	85 c0                	test   %eax,%eax
 85dc906:	0f 84 1f 01 00 00    	je     85dca2b <_ZN8PvP_Room16update_pvp_pointEv+0x1c5>
 85dc90c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85dc90f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc913:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc916:	89 04 24             	mov    %eax,(%esp)
 85dc919:	e8 28 d7 ff ff       	call   85da046 <_ZN8PvP_Room13IsPvpObserverEi>
 85dc91e:	84 c0                	test   %al,%al
 85dc920:	0f 85 08 01 00 00    	jne    85dca2e <_ZN8PvP_Room16update_pvp_pointEv+0x1c8>
 85dc926:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dc929:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc92c:	83 c2 0c             	add    $0xc,%edx
 85dc92f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc932:	89 04 24             	mov    %eax,(%esp)
 85dc935:	e8 72 06 08 00       	call   865cfac <_ZN5CUser20update_old_pvp_pointEv>
 85dc93a:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc93d:	8b 40 04             	mov    0x4(%eax),%eax
 85dc940:	83 f8 01             	cmp    $0x1,%eax
 85dc943:	74 0b                	je     85dc950 <_ZN8PvP_Room16update_pvp_pointEv+0xea>
 85dc945:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc948:	8b 40 04             	mov    0x4(%eax),%eax
 85dc94b:	83 f8 04             	cmp    $0x4,%eax
 85dc94e:	75 55                	jne    85dc9a5 <_ZN8PvP_Room16update_pvp_pointEv+0x13f>
 85dc950:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dc953:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc956:	83 c2 0c             	add    $0xc,%edx
 85dc959:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc95c:	89 04 24             	mov    %eax,(%esp)
 85dc95f:	e8 e6 24 bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85dc964:	8b 55 08             	mov    0x8(%ebp),%edx
 85dc967:	81 c2 68 02 00 00    	add    $0x268,%edx
 85dc96d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85dc971:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85dc978:	00 
 85dc979:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85dc97c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc980:	89 14 24             	mov    %edx,(%esp)
 85dc983:	e8 dc 86 ff ff       	call   85d5064 <_ZN12PvpUserTable9GetResultEibi>
 85dc988:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85dc98b:	8b 55 08             	mov    0x8(%ebp),%edx
 85dc98e:	83 c1 0c             	add    $0xc,%ecx
 85dc991:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 85dc994:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dc998:	89 14 24             	mov    %edx,(%esp)
 85dc99b:	e8 38 06 08 00       	call   865cfd8 <_ZN5CUser16update_pvp_pointEi>
 85dc9a0:	e9 8a 00 00 00       	jmp    85dca2f <_ZN8PvP_Room16update_pvp_pointEv+0x1c9>
 85dc9a5:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 85dc9a9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dc9ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc9af:	83 c2 0c             	add    $0xc,%edx
 85dc9b2:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc9b5:	89 04 24             	mov    %eax,(%esp)
 85dc9b8:	e8 8d 24 bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85dc9bd:	83 f8 0a             	cmp    $0xa,%eax
 85dc9c0:	0f 9f c0             	setg   %al
 85dc9c3:	84 c0                	test   %al,%al
 85dc9c5:	74 04                	je     85dc9cb <_ZN8PvP_Room16update_pvp_pointEv+0x165>
 85dc9c7:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 85dc9cb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dc9ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85dc9d1:	83 c2 0c             	add    $0xc,%edx
 85dc9d4:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85dc9d7:	89 04 24             	mov    %eax,(%esp)
 85dc9da:	e8 6b 24 bc ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85dc9df:	0f b6 4d f7          	movzbl -0x9(%ebp),%ecx
 85dc9e3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85dc9e6:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85dc9e9:	0f b6 94 13 d0 05 00 	movzbl 0x5d0(%ebx,%edx,1),%edx
 85dc9f0:	00 
 85dc9f1:	0f b6 d2             	movzbl %dl,%edx
 85dc9f4:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85dc9f7:	81 c3 68 02 00 00    	add    $0x268,%ebx
 85dc9fd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85dca01:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85dca05:	89 54 24 04          	mov    %edx,0x4(%esp)
 85dca09:	89 1c 24             	mov    %ebx,(%esp)
 85dca0c:	e8 53 86 ff ff       	call   85d5064 <_ZN12PvpUserTable9GetResultEibi>
 85dca11:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85dca14:	8b 55 08             	mov    0x8(%ebp),%edx
 85dca17:	83 c1 0c             	add    $0xc,%ecx
 85dca1a:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 85dca1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85dca21:	89 14 24             	mov    %edx,(%esp)
 85dca24:	e8 af 05 08 00       	call   865cfd8 <_ZN5CUser16update_pvp_pointEi>
 85dca29:	eb 04                	jmp    85dca2f <_ZN8PvP_Room16update_pvp_pointEv+0x1c9>
 85dca2b:	90                   	nop
 85dca2c:	eb 01                	jmp    85dca2f <_ZN8PvP_Room16update_pvp_pointEv+0x1c9>
 85dca2e:	90                   	nop
 85dca2f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85dca33:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 85dca37:	0f 9e c0             	setle  %al
 85dca3a:	84 c0                	test   %al,%al
 85dca3c:	0f 85 b6 fe ff ff    	jne    85dc8f8 <_ZN8PvP_Room16update_pvp_pointEv+0x92>
 85dca42:	83 c4 24             	add    $0x24,%esp
 85dca45:	5b                   	pop    %ebx
 85dca46:	5d                   	pop    %ebp
 85dca47:	c3                   	ret

```

```c
// PvP_Room::update_pvp_point @ 0x85dc866

/* PvP_Room::update_pvp_point() */

void __thiscall PvP_Room::update_pvp_point(PvP_Room *this)

{
  char cVar1;
  GameWorld *pGVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(pGVar2);
  if (cVar1 != '\0') {
    pGVar2 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsFreePvPChannel(pGVar2);
    if (cVar1 != '\0') {
      for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
        if ((*(int *)(this + (local_18 + 0xc) * 4) != 0) &&
           (cVar1 = IsPvpObserver(this,local_18), cVar1 == '\0')) {
          CUser::update_old_pvp_point(*(CUser **)(this + (local_18 + 0xc) * 4));
        }
      }
      return;
    }
  }
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((*(int *)(this + (local_14 + 0xc) * 4) != 0) &&
       (cVar1 = IsPvpObserver(this,local_14), cVar1 == '\0')) {
      CUser::update_old_pvp_point(*(CUser **)(this + (local_14 + 0xc) * 4));
      if ((*(int *)(this + 4) == 1) || (*(int *)(this + 4) == 4)) {
        iVar3 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4));
        iVar3 = PvpUserTable::GetResult((PvpUserTable *)(this + 0x268),local_14,false,iVar3);
        CUser::update_pvp_point(*(CUser **)(this + (local_14 + 0xc) * 4),iVar3);
      }
      else {
        iVar3 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4));
        iVar4 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4));
        iVar3 = PvpUserTable::GetResult
                          ((PvpUserTable *)(this + 0x268),(uint)(byte)this[local_14 + 0x5d0],
                           10 < iVar3,iVar4);
        CUser::update_pvp_point(*(CUser **)(this + (local_14 + 0xc) * 4),iVar3);
      }
    }
  }
  return;
}

```

---

## ~PvP_Room

```asm
// === 085d61a6 PvP_Room::~PvP_Room  [0x085d61a6-0x85d62ab] ===
 85d61a6:	55                   	push   %ebp
 85d61a7:	89 e5                	mov    %esp,%ebp
 85d61a9:	56                   	push   %esi
 85d61aa:	53                   	push   %ebx
 85d61ab:	83 ec 10             	sub    $0x10,%esp
 85d61ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85d61b1:	8b 98 e0 06 00 00    	mov    0x6e0(%eax),%ebx
 85d61b7:	85 db                	test   %ebx,%ebx
 85d61b9:	0f 84 95 00 00 00    	je     85d6254 <_ZN8PvP_RoomD1Ev+0xae>
 85d61bf:	89 1c 24             	mov    %ebx,(%esp)
 85d61c2:	e8 2d 99 00 00       	call   85dfaf4 <_ZN15CMatchingSystemD1Ev>
 85d61c7:	89 1c 24             	mov    %ebx,(%esp)
 85d61ca:	e8 21 e3 14 00       	call   87244f0 <_ZdlPv>
 85d61cf:	e9 80 00 00 00       	jmp    85d6254 <_ZN8PvP_RoomD1Ev+0xae>
 85d61d4:	89 d3                	mov    %edx,%ebx
 85d61d6:	89 c6                	mov    %eax,%esi
 85d61d8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d61db:	05 e8 05 00 00       	add    $0x5e8,%eax
 85d61e0:	89 04 24             	mov    %eax,(%esp)
 85d61e3:	e8 46 52 af ff       	call   80cb42e <_ZN5MutexD1Ev>
 85d61e8:	89 f0                	mov    %esi,%eax
 85d61ea:	89 da                	mov    %ebx,%edx
 85d61ec:	89 d3                	mov    %edx,%ebx
 85d61ee:	89 c6                	mov    %eax,%esi
 85d61f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d61f3:	05 bc 05 00 00       	add    $0x5bc,%eax
 85d61f8:	89 04 24             	mov    %eax,(%esp)
 85d61fb:	e8 92 fd ff ff       	call   85d5f92 <_ZN17PvpResultRecvFlagD1Ev>
 85d6200:	89 f0                	mov    %esi,%eax
 85d6202:	89 da                	mov    %ebx,%edx
 85d6204:	89 d3                	mov    %edx,%ebx
 85d6206:	89 c6                	mov    %eax,%esi
 85d6208:	8b 45 08             	mov    0x8(%ebp),%eax
 85d620b:	05 b4 05 00 00       	add    $0x5b4,%eax
 85d6210:	89 04 24             	mov    %eax,(%esp)
 85d6213:	e8 7a fd ff ff       	call   85d5f92 <_ZN17PvpResultRecvFlagD1Ev>
 85d6218:	89 f0                	mov    %esi,%eax
 85d621a:	89 da                	mov    %ebx,%edx
 85d621c:	89 d3                	mov    %edx,%ebx
 85d621e:	89 c6                	mov    %eax,%esi
 85d6220:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6223:	05 68 02 00 00       	add    $0x268,%eax
 85d6228:	89 04 24             	mov    %eax,(%esp)
 85d622b:	e8 d4 e6 ff ff       	call   85d4904 <_ZN12PvpUserTableD1Ev>
 85d6230:	89 f0                	mov    %esi,%eax
 85d6232:	89 da                	mov    %ebx,%edx
 85d6234:	89 d3                	mov    %edx,%ebx
 85d6236:	89 c6                	mov    %eax,%esi
 85d6238:	8b 45 08             	mov    0x8(%ebp),%eax
 85d623b:	05 c4 00 00 00       	add    $0xc4,%eax
 85d6240:	89 04 24             	mov    %eax,(%esp)
 85d6243:	e8 3e 78 00 00       	call   85dda86 <_ZN16PvP_GuildWar_LogD1Ev>
 85d6248:	89 f0                	mov    %esi,%eax
 85d624a:	89 da                	mov    %ebx,%edx
 85d624c:	89 04 24             	mov    %eax,(%esp)
 85d624f:	e8 fc d4 50 00       	call   8ae3750 <_Unwind_Resume>
 85d6254:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6257:	05 e8 05 00 00       	add    $0x5e8,%eax
 85d625c:	89 04 24             	mov    %eax,(%esp)
 85d625f:	e8 ca 51 af ff       	call   80cb42e <_ZN5MutexD1Ev>
 85d6264:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6267:	05 bc 05 00 00       	add    $0x5bc,%eax
 85d626c:	89 04 24             	mov    %eax,(%esp)
 85d626f:	e8 1e fd ff ff       	call   85d5f92 <_ZN17PvpResultRecvFlagD1Ev>
 85d6274:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6277:	05 b4 05 00 00       	add    $0x5b4,%eax
 85d627c:	89 04 24             	mov    %eax,(%esp)
 85d627f:	e8 0e fd ff ff       	call   85d5f92 <_ZN17PvpResultRecvFlagD1Ev>
 85d6284:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6287:	05 68 02 00 00       	add    $0x268,%eax
 85d628c:	89 04 24             	mov    %eax,(%esp)
 85d628f:	e8 70 e6 ff ff       	call   85d4904 <_ZN12PvpUserTableD1Ev>
 85d6294:	8b 45 08             	mov    0x8(%ebp),%eax
 85d6297:	05 c4 00 00 00       	add    $0xc4,%eax
 85d629c:	89 04 24             	mov    %eax,(%esp)
 85d629f:	e8 e2 77 00 00       	call   85dda86 <_ZN16PvP_GuildWar_LogD1Ev>
 85d62a4:	83 c4 10             	add    $0x10,%esp
 85d62a7:	5b                   	pop    %ebx
 85d62a8:	5e                   	pop    %esi
 85d62a9:	5d                   	pop    %ebp
 85d62aa:	c3                   	ret
 85d62ab:	90                   	nop

```

```c
// PvP_Room::~PvP_Room @ 0x85d61a6

/* PvP_Room::~PvP_Room() */

void __thiscall PvP_Room::~PvP_Room(PvP_Room *this)

{
  CMatchingSystem *this_00;
  
  this_00 = *(CMatchingSystem **)(this + 0x6e0);
  if (this_00 != (CMatchingSystem *)0x0) {
                    /* try { // try from 085d61c2 to 085d61c6 has its CatchHandler @ 085d61d4 */
    CMatchingSystem::~CMatchingSystem(this_00);
    operator_delete(this_00);
  }
  Mutex::~Mutex((Mutex *)(this + 0x5e8));
  PvpResultRecvFlag::~PvpResultRecvFlag((PvpResultRecvFlag *)(this + 0x5bc));
  PvpResultRecvFlag::~PvpResultRecvFlag((PvpResultRecvFlag *)(this + 0x5b4));
  PvpUserTable::~PvpUserTable((PvpUserTable *)(this + 0x268));
  PvP_GuildWar_Log::~PvP_GuildWar_Log((PvP_GuildWar_Log *)(this + 0xc4));
  return;
}

```

