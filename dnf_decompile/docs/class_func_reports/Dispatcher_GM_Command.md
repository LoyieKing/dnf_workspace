# Dispatcher_GM_Command

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081fa19e Dispatcher_GM_Command::dispatch_sig  [0x081fa19e-0x81fc4dd] ===
 81fa19e:	55                   	push   %ebp
 81fa19f:	89 e5                	mov    %esp,%ebp
 81fa1a1:	57                   	push   %edi
 81fa1a2:	56                   	push   %esi
 81fa1a3:	53                   	push   %ebx
 81fa1a4:	81 ec 1c 05 00 00    	sub    $0x51c,%esp
 81fa1aa:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81fa1ae:	75 2b                	jne    81fa1db <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x3d>
 81fa1b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa1b7:	00 
 81fa1b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fa1bf:	00 
 81fa1c0:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fa1c7:	08 
 81fa1c8:	c7 04 24 fd 88 00 00 	movl   $0x88fd,(%esp)
 81fa1cf:	e8 03 67 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fa1d4:	89 c3                	mov    %eax,%ebx
 81fa1d6:	e9 f6 22 00 00       	jmp    81fc4d1 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2333>
 81fa1db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa1de:	89 04 24             	mov    %eax,(%esp)
 81fa1e1:	e8 4c 62 f2 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81fa1e6:	85 c0                	test   %eax,%eax
 81fa1e8:	0f 94 c0             	sete   %al
 81fa1eb:	84 c0                	test   %al,%al
 81fa1ed:	74 2b                	je     81fa21a <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x7c>
 81fa1ef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa1f6:	00 
 81fa1f7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fa1fe:	00 
 81fa1ff:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fa206:	08 
 81fa207:	c7 04 24 02 89 00 00 	movl   $0x8902,(%esp)
 81fa20e:	e8 c4 66 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fa213:	89 c3                	mov    %eax,%ebx
 81fa215:	e9 b7 22 00 00       	jmp    81fc4d1 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2333>
 81fa21a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa21d:	89 04 24             	mov    %eax,(%esp)
 81fa220:	e8 49 01 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa225:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fa22c:	00 
 81fa22d:	89 04 24             	mov    %eax,(%esp)
 81fa230:	e8 16 ee f0 ff       	call   810904b <_Z14NumberToStringji>
 81fa235:	89 c3                	mov    %eax,%ebx
 81fa237:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa23e:	00 
 81fa23f:	c7 44 24 08 08 89 00 	movl   $0x8908,0x8(%esp)
 81fa246:	00 
 81fa247:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fa24e:	08 
 81fa24f:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 81fa255:	89 04 24             	mov    %eax,(%esp)
 81fa258:	e8 bb 54 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fa25d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fa261:	c7 44 24 04 b7 23 bc 	movl   $0x8bc23b7,0x4(%esp)
 81fa268:	08 
 81fa269:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 81fa26f:	89 04 24             	mov    %eax,(%esp)
 81fa272:	e8 11 55 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fa277:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa27d:	83 c0 0d             	add    $0xd,%eax
 81fa280:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa284:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa287:	89 04 24             	mov    %eax,(%esp)
 81fa28a:	e8 e1 2c 39 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81fa28f:	83 f0 01             	xor    $0x1,%eax
 81fa292:	84 c0                	test   %al,%al
 81fa294:	74 2b                	je     81fa2c1 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x123>
 81fa296:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa29d:	00 
 81fa29e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81fa2a5:	00 
 81fa2a6:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fa2ad:	08 
 81fa2ae:	c7 04 24 0e 89 00 00 	movl   $0x890e,(%esp)
 81fa2b5:	e8 1d 66 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81fa2ba:	89 c3                	mov    %eax,%ebx
 81fa2bc:	e9 10 22 00 00       	jmp    81fc4d1 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2333>
 81fa2c1:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fa2c7:	89 04 24             	mov    %eax,(%esp)
 81fa2ca:	e8 7d 3a 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81fa2cf:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 81fa2d6:	00 
 81fa2d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa2de:	00 
 81fa2df:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fa2e5:	89 04 24             	mov    %eax,(%esp)
 81fa2e8:	e8 0f 16 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81fa2ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa2f4:	00 
 81fa2f5:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fa2fb:	89 04 24             	mov    %eax,(%esp)
 81fa2fe:	e8 1d 16 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fa303:	c7 44 24 04 63 00 00 	movl   $0x63,0x4(%esp)
 81fa30a:	00 
 81fa30b:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fa311:	89 04 24             	mov    %eax,(%esp)
 81fa314:	e8 07 16 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fa319:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa320:	00 
 81fa321:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fa327:	89 04 24             	mov    %eax,(%esp)
 81fa32a:	e8 f1 15 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fa32f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa336:	00 
 81fa337:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fa33d:	89 04 24             	mov    %eax,(%esp)
 81fa340:	e8 13 16 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fa345:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa34b:	89 04 24             	mov    %eax,(%esp)
 81fa34e:	e8 f9 39 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81fa353:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 81fa35a:	00 
 81fa35b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa362:	00 
 81fa363:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa369:	89 04 24             	mov    %eax,(%esp)
 81fa36c:	e8 8b 15 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81fa371:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa378:	00 
 81fa379:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa37f:	89 04 24             	mov    %eax,(%esp)
 81fa382:	e8 99 15 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fa387:	0f b6 85 24 fb ff ff 	movzbl -0x4dc(%ebp),%eax
 81fa38e:	0f b6 c0             	movzbl %al,%eax
 81fa391:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa395:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa39b:	89 04 24             	mov    %eax,(%esp)
 81fa39e:	e8 7d 15 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fa3a3:	0f b6 85 24 fb ff ff 	movzbl -0x4dc(%ebp),%eax
 81fa3aa:	0f b6 c0             	movzbl %al,%eax
 81fa3ad:	83 f8 0d             	cmp    $0xd,%eax
 81fa3b0:	0f 87 f4 1f 00 00    	ja     81fc3aa <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x220c>
 81fa3b6:	8b 04 85 88 25 bc 08 	mov    0x8bc2588(,%eax,4),%eax
 81fa3bd:	ff e0                	jmp    *%eax
 81fa3bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa3c2:	89 04 24             	mov    %eax,(%esp)
 81fa3c5:	e8 a4 ff ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa3ca:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa3d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa3d4:	89 14 24             	mov    %edx,(%esp)
 81fa3d7:	e8 fc ef 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fa3dc:	85 c0                	test   %eax,%eax
 81fa3de:	0f 9e c0             	setle  %al
 81fa3e1:	84 c0                	test   %al,%al
 81fa3e3:	0f 85 2e 20 00 00    	jne    81fc417 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2279>
 81fa3e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa3ec:	89 04 24             	mov    %eax,(%esp)
 81fa3ef:	e8 7a ff ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa3f4:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa3fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa3fe:	89 14 24             	mov    %edx,(%esp)
 81fa401:	e8 70 ee 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fa406:	83 f0 01             	xor    $0x1,%eax
 81fa409:	84 c0                	test   %al,%al
 81fa40b:	74 15                	je     81fa422 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x284>
 81fa40d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa414:	00 
 81fa415:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa418:	89 04 24             	mov    %eax,(%esp)
 81fa41b:	e8 bc f2 47 00       	call   86796dc <_ZN5CUser17SetGameMasterModeEb>
 81fa420:	eb 13                	jmp    81fa435 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x297>
 81fa422:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fa429:	00 
 81fa42a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa42d:	89 04 24             	mov    %eax,(%esp)
 81fa430:	e8 a7 f2 47 00       	call   86796dc <_ZN5CUser17SetGameMasterModeEb>
 81fa435:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa438:	89 04 24             	mov    %eax,(%esp)
 81fa43b:	e8 2e ff ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa440:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa446:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa44a:	89 14 24             	mov    %edx,(%esp)
 81fa44d:	e8 2a ed 09 00       	call   829917c <_ZN11CGM_Manager10TurnGmModeEj>
 81fa452:	e9 21 20 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fa457:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa45a:	89 04 24             	mov    %eax,(%esp)
 81fa45d:	e8 0c ff ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa462:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa468:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa46c:	89 14 24             	mov    %edx,(%esp)
 81fa46f:	e8 02 ee 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fa474:	83 f0 01             	xor    $0x1,%eax
 81fa477:	84 c0                	test   %al,%al
 81fa479:	0f 85 9b 1f 00 00    	jne    81fc41a <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x227c>
 81fa47f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa482:	89 04 24             	mov    %eax,(%esp)
 81fa485:	e8 e4 fe ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa48a:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa490:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa494:	89 14 24             	mov    %edx,(%esp)
 81fa497:	e8 3c ef 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fa49c:	85 c0                	test   %eax,%eax
 81fa49e:	0f 9e c0             	setle  %al
 81fa4a1:	84 c0                	test   %al,%al
 81fa4a3:	0f 85 74 1f 00 00    	jne    81fc41d <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x227f>
 81fa4a9:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa4af:	83 c0 0e             	add    $0xe,%eax
 81fa4b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa4b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa4b9:	89 04 24             	mov    %eax,(%esp)
 81fa4bc:	e8 2f 2c 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fa4c1:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa4c7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fa4cb:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81fa4d2:	00 
 81fa4d3:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa4d9:	83 c0 12             	add    $0x12,%eax
 81fa4dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa4e0:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa4e3:	89 04 24             	mov    %eax,(%esp)
 81fa4e6:	e8 d1 2d 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fa4eb:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa4f1:	85 c0                	test   %eax,%eax
 81fa4f3:	0f 84 27 1f 00 00    	je     81fc420 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2282>
 81fa4f9:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa4ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa503:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa509:	89 04 24             	mov    %eax,(%esp)
 81fa50c:	e8 2b 14 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fa511:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa517:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fa51b:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa521:	83 c0 12             	add    $0x12,%eax
 81fa524:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa528:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa52e:	89 04 24             	mov    %eax,(%esp)
 81fa531:	e8 ae ce fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fa536:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa53d:	00 
 81fa53e:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa544:	89 04 24             	mov    %eax,(%esp)
 81fa547:	e8 0c 14 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fa54c:	e8 56 fe ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fa551:	8d 95 34 fe ff ff    	lea    -0x1cc(%ebp),%edx
 81fa557:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fa55b:	89 04 24             	mov    %eax,(%esp)
 81fa55e:	e8 b1 e6 4c 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81fa563:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa56a:	00 
 81fa56b:	c7 44 24 08 39 89 00 	movl   $0x8939,0x8(%esp)
 81fa572:	00 
 81fa573:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fa57a:	08 
 81fa57b:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 81fa581:	89 04 24             	mov    %eax,(%esp)
 81fa584:	e8 8f 51 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fa589:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa58f:	83 c0 12             	add    $0x12,%eax
 81fa592:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fa596:	c7 44 24 04 c7 23 bc 	movl   $0x8bc23c7,0x4(%esp)
 81fa59d:	08 
 81fa59e:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 81fa5a4:	89 04 24             	mov    %eax,(%esp)
 81fa5a7:	e8 dc 51 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fa5ac:	e9 c7 1e 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fa5b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa5b4:	89 04 24             	mov    %eax,(%esp)
 81fa5b7:	e8 b2 fd ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa5bc:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa5c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa5c6:	89 14 24             	mov    %edx,(%esp)
 81fa5c9:	e8 a8 ec 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fa5ce:	83 f0 01             	xor    $0x1,%eax
 81fa5d1:	84 c0                	test   %al,%al
 81fa5d3:	0f 85 4a 1e 00 00    	jne    81fc423 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2285>
 81fa5d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa5dc:	89 04 24             	mov    %eax,(%esp)
 81fa5df:	e8 8a fd ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa5e4:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa5ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa5ee:	89 14 24             	mov    %edx,(%esp)
 81fa5f1:	e8 e2 ed 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fa5f6:	85 c0                	test   %eax,%eax
 81fa5f8:	0f 9e c0             	setle  %al
 81fa5fb:	84 c0                	test   %al,%al
 81fa5fd:	0f 85 23 1e 00 00    	jne    81fc426 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2288>
 81fa603:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa609:	83 c0 0e             	add    $0xe,%eax
 81fa60c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa610:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa613:	89 04 24             	mov    %eax,(%esp)
 81fa616:	e8 d5 2a 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fa61b:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa621:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fa625:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81fa62c:	00 
 81fa62d:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa633:	83 c0 12             	add    $0x12,%eax
 81fa636:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa63a:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa63d:	89 04 24             	mov    %eax,(%esp)
 81fa640:	e8 77 2c 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fa645:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa64b:	85 c0                	test   %eax,%eax
 81fa64d:	0f 84 d6 1d 00 00    	je     81fc429 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x228b>
 81fa653:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa659:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa65d:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa663:	89 04 24             	mov    %eax,(%esp)
 81fa666:	e8 d1 12 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fa66b:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa671:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fa675:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa67b:	83 c0 12             	add    $0x12,%eax
 81fa67e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa682:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa688:	89 04 24             	mov    %eax,(%esp)
 81fa68b:	e8 54 cd fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fa690:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa697:	00 
 81fa698:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa69e:	89 04 24             	mov    %eax,(%esp)
 81fa6a1:	e8 b2 12 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fa6a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fa6ad:	00 
 81fa6ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa6b1:	89 04 24             	mov    %eax,(%esp)
 81fa6b4:	e8 05 6d 48 00       	call   86813be <_ZN5CUser8get_areaEb>
 81fa6b9:	89 c3                	mov    %eax,%ebx
 81fa6bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa6be:	89 04 24             	mov    %eax,(%esp)
 81fa6c1:	e8 9e ae 44 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81fa6c6:	0f be f0             	movsbl %al,%esi
 81fa6c9:	e8 d9 fc ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fa6ce:	8d 95 34 fe ff ff    	lea    -0x1cc(%ebp),%edx
 81fa6d4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81fa6d8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fa6dc:	89 74 24 04          	mov    %esi,0x4(%esp)
 81fa6e0:	89 04 24             	mov    %eax,(%esp)
 81fa6e3:	e8 80 da 4c 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 81fa6e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa6ef:	00 
 81fa6f0:	c7 44 24 08 4a 89 00 	movl   $0x894a,0x8(%esp)
 81fa6f7:	00 
 81fa6f8:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fa6ff:	08 
 81fa700:	8d 85 6c fe ff ff    	lea    -0x194(%ebp),%eax
 81fa706:	89 04 24             	mov    %eax,(%esp)
 81fa709:	e8 0a 50 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fa70e:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa714:	83 c0 12             	add    $0x12,%eax
 81fa717:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fa71b:	c7 44 24 04 d0 23 bc 	movl   $0x8bc23d0,0x4(%esp)
 81fa722:	08 
 81fa723:	8d 85 6c fe ff ff    	lea    -0x194(%ebp),%eax
 81fa729:	89 04 24             	mov    %eax,(%esp)
 81fa72c:	e8 57 50 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fa731:	e9 42 1d 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fa736:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa739:	89 04 24             	mov    %eax,(%esp)
 81fa73c:	e8 2d fc ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa741:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa747:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa74b:	89 14 24             	mov    %edx,(%esp)
 81fa74e:	e8 23 eb 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fa753:	83 f0 01             	xor    $0x1,%eax
 81fa756:	84 c0                	test   %al,%al
 81fa758:	0f 85 ce 1c 00 00    	jne    81fc42c <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x228e>
 81fa75e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa761:	89 04 24             	mov    %eax,(%esp)
 81fa764:	e8 05 fc ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa769:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa76f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa773:	89 14 24             	mov    %edx,(%esp)
 81fa776:	e8 5d ec 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fa77b:	85 c0                	test   %eax,%eax
 81fa77d:	0f 9e c0             	setle  %al
 81fa780:	84 c0                	test   %al,%al
 81fa782:	0f 85 a7 1c 00 00    	jne    81fc42f <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2291>
 81fa788:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa78e:	83 c0 0e             	add    $0xe,%eax
 81fa791:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa795:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa798:	89 04 24             	mov    %eax,(%esp)
 81fa79b:	e8 50 29 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fa7a0:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa7a6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fa7aa:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81fa7b1:	00 
 81fa7b2:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa7b8:	83 c0 12             	add    $0x12,%eax
 81fa7bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa7bf:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa7c2:	89 04 24             	mov    %eax,(%esp)
 81fa7c5:	e8 f2 2a 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fa7ca:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa7d0:	85 c0                	test   %eax,%eax
 81fa7d2:	0f 84 5a 1c 00 00    	je     81fc432 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2294>
 81fa7d8:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa7de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa7e2:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa7e8:	89 04 24             	mov    %eax,(%esp)
 81fa7eb:	e8 4c 11 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fa7f0:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa7f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fa7fa:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa800:	83 c0 12             	add    $0x12,%eax
 81fa803:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa807:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa80d:	89 04 24             	mov    %eax,(%esp)
 81fa810:	e8 cf cb fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fa815:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fa81c:	00 
 81fa81d:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fa823:	89 04 24             	mov    %eax,(%esp)
 81fa826:	e8 2d 11 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fa82b:	8d 85 29 fc ff ff    	lea    -0x3d7(%ebp),%eax
 81fa831:	89 04 24             	mov    %eax,(%esp)
 81fa834:	e8 9d 13 03 00       	call   822bbd6 <_ZN29Packet_Monitor_Notice_MessageC1Ev>
 81fa839:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa83f:	88 85 33 fc ff ff    	mov    %al,-0x3cd(%ebp)
 81fa845:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa84b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fa84f:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa855:	83 c0 12             	add    $0x12,%eax
 81fa858:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa85c:	8d 85 29 fc ff ff    	lea    -0x3d7(%ebp),%eax
 81fa862:	83 c0 0b             	add    $0xb,%eax
 81fa865:	89 04 24             	mov    %eax,(%esp)
 81fa868:	e8 63 30 e8 ff       	call   807d8d0 <strncpy@plt>
 81fa86d:	8d 9d 29 fc ff ff    	lea    -0x3d7(%ebp),%ebx
 81fa873:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa876:	89 04 24             	mov    %eax,(%esp)
 81fa879:	e8 12 14 ed ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81fa87e:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81fa884:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa888:	89 14 24             	mov    %edx,(%esp)
 81fa88b:	e8 fa 77 f1 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81fa890:	c7 44 24 08 0b 01 00 	movl   $0x10b,0x8(%esp)
 81fa897:	00 
 81fa898:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fa89c:	89 04 24             	mov    %eax,(%esp)
 81fa89f:	e8 a0 65 27 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 81fa8a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fa8ab:	00 
 81fa8ac:	c7 44 24 08 66 89 00 	movl   $0x8966,0x8(%esp)
 81fa8b3:	00 
 81fa8b4:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fa8bb:	08 
 81fa8bc:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
 81fa8c2:	89 04 24             	mov    %eax,(%esp)
 81fa8c5:	e8 4e 4e 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fa8ca:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa8d0:	83 c0 12             	add    $0x12,%eax
 81fa8d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fa8d7:	c7 44 24 04 d9 23 bc 	movl   $0x8bc23d9,0x4(%esp)
 81fa8de:	08 
 81fa8df:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
 81fa8e5:	89 04 24             	mov    %eax,(%esp)
 81fa8e8:	e8 9b 4e 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fa8ed:	e9 86 1b 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fa8f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa8f5:	89 04 24             	mov    %eax,(%esp)
 81fa8f8:	e8 71 fa ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa8fd:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa903:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa907:	89 14 24             	mov    %edx,(%esp)
 81fa90a:	e8 67 e9 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fa90f:	83 f0 01             	xor    $0x1,%eax
 81fa912:	84 c0                	test   %al,%al
 81fa914:	0f 85 1b 1b 00 00    	jne    81fc435 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2297>
 81fa91a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fa91d:	89 04 24             	mov    %eax,(%esp)
 81fa920:	e8 49 fa ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fa925:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fa92b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa92f:	89 14 24             	mov    %edx,(%esp)
 81fa932:	e8 a1 ea 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fa937:	85 c0                	test   %eax,%eax
 81fa939:	0f 9e c0             	setle  %al
 81fa93c:	84 c0                	test   %al,%al
 81fa93e:	0f 85 f4 1a 00 00    	jne    81fc438 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x229a>
 81fa944:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa94a:	83 c0 0e             	add    $0xe,%eax
 81fa94d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fa951:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa954:	89 04 24             	mov    %eax,(%esp)
 81fa957:	e8 94 27 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fa95c:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa962:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fa968:	83 c2 12             	add    $0x12,%edx
 81fa96b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fa96f:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fa976:	00 
 81fa977:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fa97b:	8b 45 10             	mov    0x10(%ebp),%eax
 81fa97e:	89 04 24             	mov    %eax,(%esp)
 81fa981:	e8 36 29 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fa986:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fa98d:	00 
 81fa98e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fa995:	00 
 81fa996:	8d 85 16 fe ff ff    	lea    -0x1ea(%ebp),%eax
 81fa99c:	89 04 24             	mov    %eax,(%esp)
 81fa99f:	e8 1c 33 e8 ff       	call   807dcc0 <memset@plt>
 81fa9a4:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fa9aa:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fa9b0:	83 c2 12             	add    $0x12,%edx
 81fa9b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fa9b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fa9bb:	8d 85 16 fe ff ff    	lea    -0x1ea(%ebp),%eax
 81fa9c1:	89 04 24             	mov    %eax,(%esp)
 81fa9c4:	e8 07 2f e8 ff       	call   807d8d0 <strncpy@plt>
 81fa9c9:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fa9cf:	8d 58 12             	lea    0x12(%eax),%ebx
 81fa9d2:	e8 d0 f9 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fa9d7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fa9db:	89 04 24             	mov    %eax,(%esp)
 81fa9de:	e8 ff 2d 4d 00       	call   86cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>
 81fa9e3:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 81fa9e9:	e8 b9 f9 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fa9ee:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 81fa9f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fa9f8:	89 04 24             	mov    %eax,(%esp)
 81fa9fb:	e8 40 a3 4c 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81faa00:	89 45 80             	mov    %eax,-0x80(%ebp)
 81faa03:	83 7d 80 00          	cmpl   $0x0,-0x80(%ebp)
 81faa07:	0f 84 a2 00 00 00    	je     81faaaf <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x911>
 81faa0d:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81faa13:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faa17:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81faa1d:	89 04 24             	mov    %eax,(%esp)
 81faa20:	e8 17 0f ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81faa25:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81faa2b:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81faa31:	83 c2 12             	add    $0x12,%edx
 81faa34:	89 44 24 08          	mov    %eax,0x8(%esp)
 81faa38:	89 54 24 04          	mov    %edx,0x4(%esp)
 81faa3c:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81faa42:	89 04 24             	mov    %eax,(%esp)
 81faa45:	e8 9a c9 fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81faa4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81faa51:	00 
 81faa52:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81faa58:	89 04 24             	mov    %eax,(%esp)
 81faa5b:	e8 f8 0e ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81faa60:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81faa66:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faa6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81faa6d:	89 04 24             	mov    %eax,(%esp)
 81faa70:	e8 45 db 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81faa75:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81faa7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faa7f:	8b 45 80             	mov    -0x80(%ebp),%eax
 81faa82:	89 04 24             	mov    %eax,(%esp)
 81faa85:	e8 30 db 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81faa8a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81faa91:	00 
 81faa92:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81faa99:	00 
 81faa9a:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 81faaa1:	00 
 81faaa2:	8b 45 80             	mov    -0x80(%ebp),%eax
 81faaa5:	89 04 24             	mov    %eax,(%esp)
 81faaa8:	e8 47 df 44 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 81faaad:	eb 15                	jmp    81faac4 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x926>
 81faaaf:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81faab5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faab9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81faabc:	89 04 24             	mov    %eax,(%esp)
 81faabf:	e8 f6 da 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81faac4:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81faaca:	8d 70 12             	lea    0x12(%eax),%esi
 81faacd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81faad0:	89 04 24             	mov    %eax,(%esp)
 81faad3:	e8 50 65 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81faad8:	89 c3                	mov    %eax,%ebx
 81faada:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81faae1:	00 
 81faae2:	c7 44 24 08 93 89 00 	movl   $0x8993,0x8(%esp)
 81faae9:	00 
 81faaea:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81faaf1:	08 
 81faaf2:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 81faaf8:	89 04 24             	mov    %eax,(%esp)
 81faafb:	e8 18 4c 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fab00:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fab04:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fab08:	c7 44 24 04 e2 23 bc 	movl   $0x8bc23e2,0x4(%esp)
 81fab0f:	08 
 81fab10:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 81fab16:	89 04 24             	mov    %eax,(%esp)
 81fab19:	e8 6a 4c 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fab1e:	e9 55 19 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fab23:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fab26:	89 04 24             	mov    %eax,(%esp)
 81fab29:	e8 40 f8 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fab2e:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fab34:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fab38:	89 14 24             	mov    %edx,(%esp)
 81fab3b:	e8 36 e7 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fab40:	83 f0 01             	xor    $0x1,%eax
 81fab43:	84 c0                	test   %al,%al
 81fab45:	0f 85 f0 18 00 00    	jne    81fc43b <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x229d>
 81fab4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fab4e:	89 04 24             	mov    %eax,(%esp)
 81fab51:	e8 18 f8 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fab56:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fab5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fab60:	89 14 24             	mov    %edx,(%esp)
 81fab63:	e8 70 e8 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fab68:	85 c0                	test   %eax,%eax
 81fab6a:	0f 9e c0             	setle  %al
 81fab6d:	84 c0                	test   %al,%al
 81fab6f:	0f 85 c9 18 00 00    	jne    81fc43e <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22a0>
 81fab75:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fab7b:	83 c0 0e             	add    $0xe,%eax
 81fab7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fab82:	8b 45 10             	mov    0x10(%ebp),%eax
 81fab85:	89 04 24             	mov    %eax,(%esp)
 81fab88:	e8 63 25 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fab8d:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fab93:	83 c0 12             	add    $0x12,%eax
 81fab96:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fab9a:	8b 45 10             	mov    0x10(%ebp),%eax
 81fab9d:	89 04 24             	mov    %eax,(%esp)
 81faba0:	e8 4b 25 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81faba5:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fabab:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fabb1:	83 c2 16             	add    $0x16,%edx
 81fabb4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fabb8:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fabbf:	00 
 81fabc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fabc4:	8b 45 10             	mov    0x10(%ebp),%eax
 81fabc7:	89 04 24             	mov    %eax,(%esp)
 81fabca:	e8 ed 26 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fabcf:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 81fabd6:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fabdc:	89 45 8c             	mov    %eax,-0x74(%ebp)
 81fabdf:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fabe5:	3d 9f 05 00 00       	cmp    $0x59f,%eax
 81fabea:	7e 09                	jle    81fabf5 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xa57>
 81fabec:	c7 45 88 80 51 01 00 	movl   $0x15180,-0x78(%ebp)
 81fabf3:	eb 2a                	jmp    81fac1f <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xa81>
 81fabf5:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fabfb:	85 c0                	test   %eax,%eax
 81fabfd:	7f 09                	jg     81fac08 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xa6a>
 81fabff:	c7 45 88 3c 00 00 00 	movl   $0x3c,-0x78(%ebp)
 81fac06:	eb 17                	jmp    81fac1f <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xa81>
 81fac08:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fac0e:	c1 e0 02             	shl    $0x2,%eax
 81fac11:	89 c2                	mov    %eax,%edx
 81fac13:	c1 e2 04             	shl    $0x4,%edx
 81fac16:	89 d1                	mov    %edx,%ecx
 81fac18:	29 c1                	sub    %eax,%ecx
 81fac1a:	89 c8                	mov    %ecx,%eax
 81fac1c:	89 45 88             	mov    %eax,-0x78(%ebp)
 81fac1f:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fac26:	00 
 81fac27:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fac2e:	00 
 81fac2f:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
 81fac35:	89 04 24             	mov    %eax,(%esp)
 81fac38:	e8 83 30 e8 ff       	call   807dcc0 <memset@plt>
 81fac3d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81fac40:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fac46:	83 c2 16             	add    $0x16,%edx
 81fac49:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fac4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fac51:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
 81fac57:	89 04 24             	mov    %eax,(%esp)
 81fac5a:	e8 71 2c e8 ff       	call   807d8d0 <strncpy@plt>
 81fac5f:	e8 43 f7 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fac64:	8d 95 f8 fd ff ff    	lea    -0x208(%ebp),%edx
 81fac6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fac6e:	89 04 24             	mov    %eax,(%esp)
 81fac71:	e8 6c 2b 4d 00       	call   86cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>
 81fac76:	89 45 84             	mov    %eax,-0x7c(%ebp)
 81fac79:	e8 29 f7 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fac7e:	8b 55 84             	mov    -0x7c(%ebp),%edx
 81fac81:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fac85:	89 04 24             	mov    %eax,(%esp)
 81fac88:	e8 b3 a0 4c 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81fac8d:	89 45 90             	mov    %eax,-0x70(%ebp)
 81fac90:	83 7d 90 00          	cmpl   $0x0,-0x70(%ebp)
 81fac94:	0f 84 58 02 00 00    	je     81faef2 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xd54>
 81fac9a:	8b 5d 88             	mov    -0x78(%ebp),%ebx
 81fac9d:	e8 05 f7 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81faca2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81faca6:	8d 95 f8 fd ff ff    	lea    -0x208(%ebp),%edx
 81facac:	89 54 24 04          	mov    %edx,0x4(%esp)
 81facb0:	89 04 24             	mov    %eax,(%esp)
 81facb3:	e8 9c 33 4d 00       	call   86ce054 <_ZN9GameWorld11DisableChatEPKci>
 81facb8:	8b 45 90             	mov    -0x70(%ebp),%eax
 81facbb:	89 04 24             	mov    %eax,(%esp)
 81facbe:	e8 8b 0f ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81facc3:	89 c3                	mov    %eax,%ebx
 81facc5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81faccc:	00 
 81faccd:	c7 44 24 08 b8 89 00 	movl   $0x89b8,0x8(%esp)
 81facd4:	00 
 81facd5:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81facdc:	08 
 81facdd:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 81face3:	89 04 24             	mov    %eax,(%esp)
 81face6:	e8 2d 4a 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81faceb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81facef:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
 81facf5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81facf9:	c7 44 24 04 f4 23 bc 	movl   $0x8bc23f4,0x4(%esp)
 81fad00:	08 
 81fad01:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 81fad07:	89 04 24             	mov    %eax,(%esp)
 81fad0a:	e8 79 4a 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fad0f:	8b 45 90             	mov    -0x70(%ebp),%eax
 81fad12:	89 04 24             	mov    %eax,(%esp)
 81fad15:	e8 34 0f ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81fad1a:	89 c7                	mov    %eax,%edi
 81fad1c:	8b 45 90             	mov    -0x70(%ebp),%eax
 81fad1f:	89 04 24             	mov    %eax,(%esp)
 81fad22:	e8 6b 49 03 00       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 81fad27:	89 c6                	mov    %eax,%esi
 81fad29:	8b 45 88             	mov    -0x78(%ebp),%eax
 81fad2c:	89 85 00 fb ff ff    	mov    %eax,-0x500(%ebp)
 81fad32:	8b 45 90             	mov    -0x70(%ebp),%eax
 81fad35:	89 04 24             	mov    %eax,(%esp)
 81fad38:	e8 59 df ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81fad3d:	89 c3                	mov    %eax,%ebx
 81fad3f:	e8 38 b7 ef ff       	call   80f647c <_Z12G_TimerQueuev>
 81fad44:	89 7c 24 18          	mov    %edi,0x18(%esp)
 81fad48:	89 74 24 14          	mov    %esi,0x14(%esp)
 81fad4c:	8b 95 00 fb ff ff    	mov    -0x500(%ebp),%edx
 81fad52:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fad56:	c7 44 24 0c 5d 00 00 	movl   $0x5d,0xc(%esp)
 81fad5d:	00 
 81fad5e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fad62:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fad69:	00 
 81fad6a:	89 04 24             	mov    %eax,(%esp)
 81fad6d:	e8 a4 60 43 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 81fad72:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fad78:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fad7c:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fad82:	89 04 24             	mov    %eax,(%esp)
 81fad85:	e8 b2 0b ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fad8a:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fad90:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fad94:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fad9a:	89 04 24             	mov    %eax,(%esp)
 81fad9d:	e8 9a 0b ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fada2:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fada8:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fadae:	83 c2 16             	add    $0x16,%edx
 81fadb1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fadb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fadb9:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fadbf:	89 04 24             	mov    %eax,(%esp)
 81fadc2:	e8 1d c6 fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fadc7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fadce:	00 
 81fadcf:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fadd5:	89 04 24             	mov    %eax,(%esp)
 81fadd8:	e8 7b 0b ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81faddd:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fade3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fade7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fadea:	89 04 24             	mov    %eax,(%esp)
 81faded:	e8 c8 d7 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fadf2:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fadf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fadfc:	8b 45 90             	mov    -0x70(%ebp),%eax
 81fadff:	89 04 24             	mov    %eax,(%esp)
 81fae02:	e8 b3 d7 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fae07:	8d 85 29 fc ff ff    	lea    -0x3d7(%ebp),%eax
 81fae0d:	89 04 24             	mov    %eax,(%esp)
 81fae10:	e8 5b 0e 03 00       	call   822bc70 <_ZN29Packet_Forbid_Chat_By_MonitorC1Ev>
 81fae15:	8b 45 88             	mov    -0x78(%ebp),%eax
 81fae18:	89 85 33 fc ff ff    	mov    %eax,-0x3cd(%ebp)
 81fae1e:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fae24:	89 85 37 fc ff ff    	mov    %eax,-0x3c9(%ebp)
 81fae2a:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fae30:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fae36:	83 c2 16             	add    $0x16,%edx
 81fae39:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fae3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fae41:	8d 85 29 fc ff ff    	lea    -0x3d7(%ebp),%eax
 81fae47:	83 c0 12             	add    $0x12,%eax
 81fae4a:	89 04 24             	mov    %eax,(%esp)
 81fae4d:	e8 7e 2a e8 ff       	call   807d8d0 <strncpy@plt>
 81fae52:	8d 9d 29 fc ff ff    	lea    -0x3d7(%ebp),%ebx
 81fae58:	8b 45 90             	mov    -0x70(%ebp),%eax
 81fae5b:	89 04 24             	mov    %eax,(%esp)
 81fae5e:	e8 2d 0e ed ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81fae63:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81fae69:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fae6d:	89 14 24             	mov    %edx,(%esp)
 81fae70:	e8 15 72 f1 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81fae75:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 81fae7c:	00 
 81fae7d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fae81:	89 04 24             	mov    %eax,(%esp)
 81fae84:	e8 bb 5f 27 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 81fae89:	8b b5 25 fb ff ff    	mov    -0x4db(%ebp),%esi
 81fae8f:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fae95:	8d 78 16             	lea    0x16(%eax),%edi
 81fae98:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fae9b:	89 04 24             	mov    %eax,(%esp)
 81fae9e:	e8 85 61 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81faea3:	89 c3                	mov    %eax,%ebx
 81faea5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81faeac:	00 
 81faead:	c7 44 24 08 ce 89 00 	movl   $0x89ce,0x8(%esp)
 81faeb4:	00 
 81faeb5:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81faebc:	08 
 81faebd:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 81faec3:	89 04 24             	mov    %eax,(%esp)
 81faec6:	e8 4d 48 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81faecb:	89 74 24 10          	mov    %esi,0x10(%esp)
 81faecf:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81faed3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81faed7:	c7 44 24 04 1c 24 bc 	movl   $0x8bc241c,0x4(%esp)
 81faede:	08 
 81faedf:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 81faee5:	89 04 24             	mov    %eax,(%esp)
 81faee8:	e8 9b 48 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81faeed:	e9 86 15 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81faef2:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81faef8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faefc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81faeff:	89 04 24             	mov    %eax,(%esp)
 81faf02:	e8 b3 d6 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81faf07:	e9 6c 15 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81faf0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81faf0f:	89 04 24             	mov    %eax,(%esp)
 81faf12:	e8 57 f4 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81faf17:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81faf1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faf21:	89 14 24             	mov    %edx,(%esp)
 81faf24:	e8 4d e3 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81faf29:	83 f0 01             	xor    $0x1,%eax
 81faf2c:	84 c0                	test   %al,%al
 81faf2e:	0f 85 0d 15 00 00    	jne    81fc441 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22a3>
 81faf34:	8b 45 0c             	mov    0xc(%ebp),%eax
 81faf37:	89 04 24             	mov    %eax,(%esp)
 81faf3a:	e8 2f f4 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81faf3f:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81faf45:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faf49:	89 14 24             	mov    %edx,(%esp)
 81faf4c:	e8 87 e4 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81faf51:	85 c0                	test   %eax,%eax
 81faf53:	0f 9e c0             	setle  %al
 81faf56:	84 c0                	test   %al,%al
 81faf58:	0f 85 e6 14 00 00    	jne    81fc444 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22a6>
 81faf5e:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81faf64:	83 c0 0e             	add    $0xe,%eax
 81faf67:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faf6b:	8b 45 10             	mov    0x10(%ebp),%eax
 81faf6e:	89 04 24             	mov    %eax,(%esp)
 81faf71:	e8 7a 21 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81faf76:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81faf7c:	83 c0 12             	add    $0x12,%eax
 81faf7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81faf83:	8b 45 10             	mov    0x10(%ebp),%eax
 81faf86:	89 04 24             	mov    %eax,(%esp)
 81faf89:	e8 62 21 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81faf8e:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81faf94:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81faf9a:	83 c2 16             	add    $0x16,%edx
 81faf9d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fafa1:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fafa8:	00 
 81fafa9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fafad:	8b 45 10             	mov    0x10(%ebp),%eax
 81fafb0:	89 04 24             	mov    %eax,(%esp)
 81fafb3:	e8 04 23 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fafb8:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 81fafbf:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fafc5:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81fafc8:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fafce:	3d 9f 05 00 00       	cmp    $0x59f,%eax
 81fafd3:	7e 09                	jle    81fafde <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xe40>
 81fafd5:	c7 45 98 80 51 01 00 	movl   $0x15180,-0x68(%ebp)
 81fafdc:	eb 2a                	jmp    81fb008 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xe6a>
 81fafde:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fafe4:	85 c0                	test   %eax,%eax
 81fafe6:	7f 09                	jg     81faff1 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xe53>
 81fafe8:	c7 45 98 3c 00 00 00 	movl   $0x3c,-0x68(%ebp)
 81fafef:	eb 17                	jmp    81fb008 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0xe6a>
 81faff1:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81faff7:	c1 e0 02             	shl    $0x2,%eax
 81faffa:	89 c2                	mov    %eax,%edx
 81faffc:	c1 e2 04             	shl    $0x4,%edx
 81fafff:	89 d1                	mov    %edx,%ecx
 81fb001:	29 c1                	sub    %eax,%ecx
 81fb003:	89 c8                	mov    %ecx,%eax
 81fb005:	89 45 98             	mov    %eax,-0x68(%ebp)
 81fb008:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fb00f:	00 
 81fb010:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fb017:	00 
 81fb018:	8d 85 da fd ff ff    	lea    -0x226(%ebp),%eax
 81fb01e:	89 04 24             	mov    %eax,(%esp)
 81fb021:	e8 9a 2c e8 ff       	call   807dcc0 <memset@plt>
 81fb026:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81fb029:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fb02f:	83 c2 16             	add    $0x16,%edx
 81fb032:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fb036:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb03a:	8d 85 da fd ff ff    	lea    -0x226(%ebp),%eax
 81fb040:	89 04 24             	mov    %eax,(%esp)
 81fb043:	e8 88 28 e8 ff       	call   807d8d0 <strncpy@plt>
 81fb048:	e8 5a f3 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fb04d:	8d 95 da fd ff ff    	lea    -0x226(%ebp),%edx
 81fb053:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb057:	89 04 24             	mov    %eax,(%esp)
 81fb05a:	e8 83 27 4d 00       	call   86cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>
 81fb05f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 81fb062:	e8 40 f3 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fb067:	8b 55 94             	mov    -0x6c(%ebp),%edx
 81fb06a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb06e:	89 04 24             	mov    %eax,(%esp)
 81fb071:	e8 ca 9c 4c 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81fb076:	89 45 a0             	mov    %eax,-0x60(%ebp)
 81fb079:	83 7d a0 00          	cmpl   $0x0,-0x60(%ebp)
 81fb07d:	0f 84 ef 01 00 00    	je     81fb272 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x10d4>
 81fb083:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81fb086:	89 04 24             	mov    %eax,(%esp)
 81fb089:	e8 fe f2 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81fb08e:	83 f8 03             	cmp    $0x3,%eax
 81fb091:	0f 94 c0             	sete   %al
 81fb094:	84 c0                	test   %al,%al
 81fb096:	0f 84 ab 13 00 00    	je     81fc447 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22a9>
 81fb09c:	8b 5d 98             	mov    -0x68(%ebp),%ebx
 81fb09f:	e8 03 f3 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fb0a4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fb0a8:	8d 95 da fd ff ff    	lea    -0x226(%ebp),%edx
 81fb0ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb0b2:	89 04 24             	mov    %eax,(%esp)
 81fb0b5:	e8 c0 31 4d 00       	call   86ce27a <_ZN9GameWorld11DisableMoveEPKci>
 81fb0ba:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81fb0bd:	89 04 24             	mov    %eax,(%esp)
 81fb0c0:	e8 89 0b ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81fb0c5:	89 c3                	mov    %eax,%ebx
 81fb0c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb0ce:	00 
 81fb0cf:	c7 44 24 08 fe 89 00 	movl   $0x89fe,0x8(%esp)
 81fb0d6:	00 
 81fb0d7:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fb0de:	08 
 81fb0df:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 81fb0e5:	89 04 24             	mov    %eax,(%esp)
 81fb0e8:	e8 2b 46 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fb0ed:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81fb0f1:	8d 85 da fd ff ff    	lea    -0x226(%ebp),%eax
 81fb0f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fb0fb:	c7 44 24 04 40 24 bc 	movl   $0x8bc2440,0x4(%esp)
 81fb102:	08 
 81fb103:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 81fb109:	89 04 24             	mov    %eax,(%esp)
 81fb10c:	e8 77 46 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fb111:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81fb114:	89 04 24             	mov    %eax,(%esp)
 81fb117:	e8 32 0b ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81fb11c:	89 c7                	mov    %eax,%edi
 81fb11e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81fb121:	89 04 24             	mov    %eax,(%esp)
 81fb124:	e8 69 45 03 00       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 81fb129:	89 c6                	mov    %eax,%esi
 81fb12b:	8b 45 98             	mov    -0x68(%ebp),%eax
 81fb12e:	89 85 04 fb ff ff    	mov    %eax,-0x4fc(%ebp)
 81fb134:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81fb137:	89 04 24             	mov    %eax,(%esp)
 81fb13a:	e8 57 db ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81fb13f:	89 c3                	mov    %eax,%ebx
 81fb141:	e8 36 b3 ef ff       	call   80f647c <_Z12G_TimerQueuev>
 81fb146:	89 7c 24 18          	mov    %edi,0x18(%esp)
 81fb14a:	89 74 24 14          	mov    %esi,0x14(%esp)
 81fb14e:	8b 95 04 fb ff ff    	mov    -0x4fc(%ebp),%edx
 81fb154:	89 54 24 10          	mov    %edx,0x10(%esp)
 81fb158:	c7 44 24 0c 5e 00 00 	movl   $0x5e,0xc(%esp)
 81fb15f:	00 
 81fb160:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fb164:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fb16b:	00 
 81fb16c:	89 04 24             	mov    %eax,(%esp)
 81fb16f:	e8 a2 5c 43 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 81fb174:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fb17a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb17e:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb184:	89 04 24             	mov    %eax,(%esp)
 81fb187:	e8 b0 07 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fb18c:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fb192:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb196:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb19c:	89 04 24             	mov    %eax,(%esp)
 81fb19f:	e8 98 07 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fb1a4:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fb1aa:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fb1b0:	83 c2 16             	add    $0x16,%edx
 81fb1b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fb1b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb1bb:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb1c1:	89 04 24             	mov    %eax,(%esp)
 81fb1c4:	e8 1b c2 fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fb1c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fb1d0:	00 
 81fb1d1:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb1d7:	89 04 24             	mov    %eax,(%esp)
 81fb1da:	e8 79 07 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fb1df:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb1e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb1e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb1ec:	89 04 24             	mov    %eax,(%esp)
 81fb1ef:	e8 c6 d3 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fb1f4:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb1fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb1fe:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81fb201:	89 04 24             	mov    %eax,(%esp)
 81fb204:	e8 b1 d3 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fb209:	8b b5 25 fb ff ff    	mov    -0x4db(%ebp),%esi
 81fb20f:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fb215:	8d 78 16             	lea    0x16(%eax),%edi
 81fb218:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb21b:	89 04 24             	mov    %eax,(%esp)
 81fb21e:	e8 05 5e f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fb223:	89 c3                	mov    %eax,%ebx
 81fb225:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb22c:	00 
 81fb22d:	c7 44 24 08 09 8a 00 	movl   $0x8a09,0x8(%esp)
 81fb234:	00 
 81fb235:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fb23c:	08 
 81fb23d:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 81fb243:	89 04 24             	mov    %eax,(%esp)
 81fb246:	e8 cd 44 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fb24b:	89 74 24 10          	mov    %esi,0x10(%esp)
 81fb24f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81fb253:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fb257:	c7 44 24 04 68 24 bc 	movl   $0x8bc2468,0x4(%esp)
 81fb25e:	08 
 81fb25f:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 81fb265:	89 04 24             	mov    %eax,(%esp)
 81fb268:	e8 1b 45 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fb26d:	e9 06 12 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fb272:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fb278:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb27c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb27f:	89 04 24             	mov    %eax,(%esp)
 81fb282:	e8 33 d3 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fb287:	e9 ec 11 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fb28c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb28f:	89 04 24             	mov    %eax,(%esp)
 81fb292:	e8 d7 f0 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fb297:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fb29d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb2a1:	89 14 24             	mov    %edx,(%esp)
 81fb2a4:	e8 cd df 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fb2a9:	83 f0 01             	xor    $0x1,%eax
 81fb2ac:	84 c0                	test   %al,%al
 81fb2ae:	0f 85 96 11 00 00    	jne    81fc44a <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22ac>
 81fb2b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb2b7:	89 04 24             	mov    %eax,(%esp)
 81fb2ba:	e8 af f0 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fb2bf:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fb2c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb2c9:	89 14 24             	mov    %edx,(%esp)
 81fb2cc:	e8 07 e1 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fb2d1:	85 c0                	test   %eax,%eax
 81fb2d3:	0f 9e c0             	setle  %al
 81fb2d6:	84 c0                	test   %al,%al
 81fb2d8:	0f 85 6f 11 00 00    	jne    81fc44d <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22af>
 81fb2de:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb2e1:	89 04 24             	mov    %eax,(%esp)
 81fb2e4:	e8 c3 0a 49 00       	call   868bdac <_ZN15CUserCharacInfo12SetInvisibleEv>
 81fb2e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb2ec:	89 04 24             	mov    %eax,(%esp)
 81fb2ef:	e8 98 f0 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81fb2f4:	83 f8 03             	cmp    $0x3,%eax
 81fb2f7:	0f 94 c0             	sete   %al
 81fb2fa:	84 c0                	test   %al,%al
 81fb2fc:	74 23                	je     81fb321 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1183>
 81fb2fe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb305:	00 
 81fb306:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81fb30d:	00 
 81fb30e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fb315:	00 
 81fb316:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb319:	89 04 24             	mov    %eax,(%esp)
 81fb31c:	e8 3b 07 48 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 81fb321:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb324:	89 04 24             	mov    %eax,(%esp)
 81fb327:	e8 fc 5c f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fb32c:	89 c3                	mov    %eax,%ebx
 81fb32e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb335:	00 
 81fb336:	c7 44 24 08 2b 8a 00 	movl   $0x8a2b,0x8(%esp)
 81fb33d:	00 
 81fb33e:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fb345:	08 
 81fb346:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 81fb34c:	89 04 24             	mov    %eax,(%esp)
 81fb34f:	e8 c4 43 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fb354:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fb358:	c7 44 24 04 8c 24 bc 	movl   $0x8bc248c,0x4(%esp)
 81fb35f:	08 
 81fb360:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 81fb366:	89 04 24             	mov    %eax,(%esp)
 81fb369:	e8 1a 44 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fb36e:	e9 05 11 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fb373:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb376:	89 04 24             	mov    %eax,(%esp)
 81fb379:	e8 f0 ef ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fb37e:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fb384:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb388:	89 14 24             	mov    %edx,(%esp)
 81fb38b:	e8 e6 de 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fb390:	83 f0 01             	xor    $0x1,%eax
 81fb393:	84 c0                	test   %al,%al
 81fb395:	0f 85 b5 10 00 00    	jne    81fc450 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22b2>
 81fb39b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb39e:	89 04 24             	mov    %eax,(%esp)
 81fb3a1:	e8 c8 ef ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fb3a6:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fb3ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb3b0:	89 14 24             	mov    %edx,(%esp)
 81fb3b3:	e8 20 e0 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fb3b8:	85 c0                	test   %eax,%eax
 81fb3ba:	0f 9e c0             	setle  %al
 81fb3bd:	84 c0                	test   %al,%al
 81fb3bf:	0f 85 8e 10 00 00    	jne    81fc453 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22b5>
 81fb3c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb3c8:	89 04 24             	mov    %eax,(%esp)
 81fb3cb:	e8 f8 09 49 00       	call   868bdc8 <_ZN15CUserCharacInfo10SetVisibleEv>
 81fb3d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb3d3:	89 04 24             	mov    %eax,(%esp)
 81fb3d6:	e8 b1 ef ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81fb3db:	83 f8 03             	cmp    $0x3,%eax
 81fb3de:	0f 94 c0             	sete   %al
 81fb3e1:	84 c0                	test   %al,%al
 81fb3e3:	74 23                	je     81fb408 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x126a>
 81fb3e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb3ec:	00 
 81fb3ed:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81fb3f4:	00 
 81fb3f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fb3fc:	00 
 81fb3fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb400:	89 04 24             	mov    %eax,(%esp)
 81fb403:	e8 54 06 48 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 81fb408:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb40b:	89 04 24             	mov    %eax,(%esp)
 81fb40e:	e8 15 5c f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fb413:	89 c3                	mov    %eax,%ebx
 81fb415:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb41c:	00 
 81fb41d:	c7 44 24 08 43 8a 00 	movl   $0x8a43,0x8(%esp)
 81fb424:	00 
 81fb425:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fb42c:	08 
 81fb42d:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 81fb433:	89 04 24             	mov    %eax,(%esp)
 81fb436:	e8 dd 42 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fb43b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fb43f:	c7 44 24 04 a2 24 bc 	movl   $0x8bc24a2,0x4(%esp)
 81fb446:	08 
 81fb447:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 81fb44d:	89 04 24             	mov    %eax,(%esp)
 81fb450:	e8 33 43 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fb455:	e9 1e 10 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fb45a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb45d:	89 04 24             	mov    %eax,(%esp)
 81fb460:	e8 09 ef ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fb465:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fb46b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb46f:	89 14 24             	mov    %edx,(%esp)
 81fb472:	e8 ff dd 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fb477:	83 f0 01             	xor    $0x1,%eax
 81fb47a:	84 c0                	test   %al,%al
 81fb47c:	0f 85 d4 0f 00 00    	jne    81fc456 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22b8>
 81fb482:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb485:	89 04 24             	mov    %eax,(%esp)
 81fb488:	e8 e1 ee ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fb48d:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fb493:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb497:	89 14 24             	mov    %edx,(%esp)
 81fb49a:	e8 39 df 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fb49f:	85 c0                	test   %eax,%eax
 81fb4a1:	0f 9e c0             	setle  %al
 81fb4a4:	84 c0                	test   %al,%al
 81fb4a6:	0f 85 ad 0f 00 00    	jne    81fc459 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22bb>
 81fb4ac:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fb4b2:	83 c0 0e             	add    $0xe,%eax
 81fb4b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb4b9:	8b 45 10             	mov    0x10(%ebp),%eax
 81fb4bc:	89 04 24             	mov    %eax,(%esp)
 81fb4bf:	e8 2c 1c 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fb4c4:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fb4ca:	83 c0 12             	add    $0x12,%eax
 81fb4cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb4d1:	8b 45 10             	mov    0x10(%ebp),%eax
 81fb4d4:	89 04 24             	mov    %eax,(%esp)
 81fb4d7:	e8 14 1c 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fb4dc:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fb4e2:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fb4e8:	83 c2 16             	add    $0x16,%edx
 81fb4eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fb4ef:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fb4f6:	00 
 81fb4f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb4fb:	8b 45 10             	mov    0x10(%ebp),%eax
 81fb4fe:	89 04 24             	mov    %eax,(%esp)
 81fb501:	e8 b6 1d 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fb506:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fb50d:	00 
 81fb50e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fb515:	00 
 81fb516:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 81fb51c:	89 04 24             	mov    %eax,(%esp)
 81fb51f:	e8 9c 27 e8 ff       	call   807dcc0 <memset@plt>
 81fb524:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fb52a:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fb530:	83 c2 16             	add    $0x16,%edx
 81fb533:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fb537:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb53b:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 81fb541:	89 04 24             	mov    %eax,(%esp)
 81fb544:	e8 87 23 e8 ff       	call   807d8d0 <strncpy@plt>
 81fb549:	e8 59 ee ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fb54e:	8d 95 bc fd ff ff    	lea    -0x244(%ebp),%edx
 81fb554:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb558:	89 04 24             	mov    %eax,(%esp)
 81fb55b:	e8 82 22 4d 00       	call   86cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>
 81fb560:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 81fb563:	e8 3f ee ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fb568:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 81fb56b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb56f:	89 04 24             	mov    %eax,(%esp)
 81fb572:	e8 c9 97 4c 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81fb577:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81fb57a:	83 7d a8 00          	cmpl   $0x0,-0x58(%ebp)
 81fb57e:	0f 84 d0 02 00 00    	je     81fb854 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x16b6>
 81fb584:	8b 9d 25 fb ff ff    	mov    -0x4db(%ebp),%ebx
 81fb58a:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb58d:	89 04 24             	mov    %eax,(%esp)
 81fb590:	e8 23 ed ed ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81fb595:	89 d9                	mov    %ebx,%ecx
 81fb597:	29 c1                	sub    %eax,%ecx
 81fb599:	89 c8                	mov    %ecx,%eax
 81fb59b:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81fb59e:	c6 45 b3 00          	movb   $0x0,-0x4d(%ebp)
 81fb5a2:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 81fb5a6:	75 09                	jne    81fb5b1 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1413>
 81fb5a8:	c6 45 b3 00          	movb   $0x0,-0x4d(%ebp)
 81fb5ac:	e9 d0 00 00 00       	jmp    81fb681 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x14e3>
 81fb5b1:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 81fb5b5:	7e 66                	jle    81fb61d <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x147f>
 81fb5b7:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 81fb5be:	eb 4e                	jmp    81fb60e <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1470>
 81fb5c0:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb5c3:	89 04 24             	mov    %eax,(%esp)
 81fb5c6:	e8 ed ec ed ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81fb5cb:	83 c0 01             	add    $0x1,%eax
 81fb5ce:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 81fb5d4:	c7 85 00 ff ff ff c8 	movl   $0xc8,-0x100(%ebp)
 81fb5db:	00 00 00 
 81fb5de:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 81fb5e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb5e8:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 81fb5ee:	89 04 24             	mov    %eax,(%esp)
 81fb5f1:	e8 18 43 ee ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 81fb5f6:	8b 00                	mov    (%eax),%eax
 81fb5f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb5fc:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb5ff:	89 04 24             	mov    %eax,(%esp)
 81fb602:	e8 55 f3 47 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 81fb607:	88 45 b3             	mov    %al,-0x4d(%ebp)
 81fb60a:	83 45 b4 01          	addl   $0x1,-0x4c(%ebp)
 81fb60e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81fb611:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 81fb614:	0f 9c c0             	setl   %al
 81fb617:	84 c0                	test   %al,%al
 81fb619:	75 a5                	jne    81fb5c0 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1422>
 81fb61b:	eb 64                	jmp    81fb681 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x14e3>
 81fb61d:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 81fb624:	eb 4e                	jmp    81fb674 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x14d6>
 81fb626:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb629:	89 04 24             	mov    %eax,(%esp)
 81fb62c:	e8 87 ec ed ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81fb631:	83 e8 01             	sub    $0x1,%eax
 81fb634:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 81fb63a:	c7 85 08 ff ff ff c8 	movl   $0xc8,-0xf8(%ebp)
 81fb641:	00 00 00 
 81fb644:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 81fb64a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb64e:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 81fb654:	89 04 24             	mov    %eax,(%esp)
 81fb657:	e8 b2 42 ee ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 81fb65c:	8b 00                	mov    (%eax),%eax
 81fb65e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb662:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb665:	89 04 24             	mov    %eax,(%esp)
 81fb668:	e8 ef f2 47 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 81fb66d:	88 45 b3             	mov    %al,-0x4d(%ebp)
 81fb670:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
 81fb674:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81fb677:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 81fb67a:	0f 9f c0             	setg   %al
 81fb67d:	84 c0                	test   %al,%al
 81fb67f:	75 a5                	jne    81fb626 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1488>
 81fb681:	80 7d b3 00          	cmpb   $0x0,-0x4d(%ebp)
 81fb685:	0f 84 d1 0d 00 00    	je     81fc45c <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22be>
 81fb68b:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb68e:	89 04 24             	mov    %eax,(%esp)
 81fb691:	e8 f6 ec ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81fb696:	83 f8 03             	cmp    $0x3,%eax
 81fb699:	74 0a                	je     81fb6a5 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1507>
 81fb69b:	83 f8 05             	cmp    $0x5,%eax
 81fb69e:	74 70                	je     81fb710 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1572>
 81fb6a0:	e9 b1 00 00 00       	jmp    81fb756 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x15b8>
 81fb6a5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb6ac:	00 
 81fb6ad:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 81fb6b4:	00 
 81fb6b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fb6bc:	00 
 81fb6bd:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb6c0:	89 04 24             	mov    %eax,(%esp)
 81fb6c3:	e8 94 03 48 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 81fb6c8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb6cf:	00 
 81fb6d0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81fb6d7:	00 
 81fb6d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fb6df:	00 
 81fb6e0:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb6e3:	89 04 24             	mov    %eax,(%esp)
 81fb6e6:	e8 71 03 48 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 81fb6eb:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81fb6f2:	00 
 81fb6f3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81fb6fa:	00 
 81fb6fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fb702:	00 
 81fb703:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb706:	89 04 24             	mov    %eax,(%esp)
 81fb709:	e8 4e 03 48 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 81fb70e:	eb 46                	jmp    81fb756 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x15b8>
 81fb710:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb717:	00 
 81fb718:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 81fb71f:	00 
 81fb720:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fb727:	00 
 81fb728:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb72b:	89 04 24             	mov    %eax,(%esp)
 81fb72e:	e8 29 03 48 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 81fb733:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81fb73a:	00 
 81fb73b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81fb742:	00 
 81fb743:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81fb74a:	00 
 81fb74b:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb74e:	89 04 24             	mov    %eax,(%esp)
 81fb751:	e8 06 03 48 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 81fb756:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fb75c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb760:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb766:	89 04 24             	mov    %eax,(%esp)
 81fb769:	e8 ce 01 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fb76e:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fb774:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb778:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb77e:	89 04 24             	mov    %eax,(%esp)
 81fb781:	e8 b6 01 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fb786:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fb78c:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fb792:	83 c2 16             	add    $0x16,%edx
 81fb795:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fb799:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb79d:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb7a3:	89 04 24             	mov    %eax,(%esp)
 81fb7a6:	e8 39 bc fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fb7ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fb7b2:	00 
 81fb7b3:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb7b9:	89 04 24             	mov    %eax,(%esp)
 81fb7bc:	e8 97 01 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fb7c1:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb7c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb7cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb7ce:	89 04 24             	mov    %eax,(%esp)
 81fb7d1:	e8 e4 cd 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fb7d6:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fb7dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb7e0:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81fb7e3:	89 04 24             	mov    %eax,(%esp)
 81fb7e6:	e8 cf cd 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fb7eb:	8b b5 25 fb ff ff    	mov    -0x4db(%ebp),%esi
 81fb7f1:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fb7f7:	8d 78 16             	lea    0x16(%eax),%edi
 81fb7fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb7fd:	89 04 24             	mov    %eax,(%esp)
 81fb800:	e8 23 58 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fb805:	89 c3                	mov    %eax,%ebx
 81fb807:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fb80e:	00 
 81fb80f:	c7 44 24 08 89 8a 00 	movl   $0x8a89,0x8(%esp)
 81fb816:	00 
 81fb817:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fb81e:	08 
 81fb81f:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 81fb825:	89 04 24             	mov    %eax,(%esp)
 81fb828:	e8 eb 3e 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fb82d:	89 74 24 10          	mov    %esi,0x10(%esp)
 81fb831:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81fb835:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fb839:	c7 44 24 04 b8 24 bc 	movl   $0x8bc24b8,0x4(%esp)
 81fb840:	08 
 81fb841:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 81fb847:	89 04 24             	mov    %eax,(%esp)
 81fb84a:	e8 39 3f 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fb84f:	e9 24 0c 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fb854:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fb85a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb85e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb861:	89 04 24             	mov    %eax,(%esp)
 81fb864:	e8 51 cd 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fb869:	e9 0a 0c 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fb86e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb871:	89 04 24             	mov    %eax,(%esp)
 81fb874:	e8 f5 ea ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fb879:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fb87f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb883:	89 14 24             	mov    %edx,(%esp)
 81fb886:	e8 eb d9 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fb88b:	83 f0 01             	xor    $0x1,%eax
 81fb88e:	84 c0                	test   %al,%al
 81fb890:	0f 85 c9 0b 00 00    	jne    81fc45f <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22c1>
 81fb896:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fb899:	89 04 24             	mov    %eax,(%esp)
 81fb89c:	e8 cd ea ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fb8a1:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fb8a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb8ab:	89 14 24             	mov    %edx,(%esp)
 81fb8ae:	e8 25 db 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fb8b3:	85 c0                	test   %eax,%eax
 81fb8b5:	0f 9e c0             	setle  %al
 81fb8b8:	84 c0                	test   %al,%al
 81fb8ba:	0f 85 a2 0b 00 00    	jne    81fc462 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22c4>
 81fb8c0:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fb8c6:	83 c0 0e             	add    $0xe,%eax
 81fb8c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb8cd:	8b 45 10             	mov    0x10(%ebp),%eax
 81fb8d0:	89 04 24             	mov    %eax,(%esp)
 81fb8d3:	e8 18 18 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fb8d8:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fb8de:	83 c0 12             	add    $0x12,%eax
 81fb8e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb8e5:	8b 45 10             	mov    0x10(%ebp),%eax
 81fb8e8:	89 04 24             	mov    %eax,(%esp)
 81fb8eb:	e8 c0 17 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81fb8f0:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fb8f6:	83 c0 14             	add    $0x14,%eax
 81fb8f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb8fd:	8b 45 10             	mov    0x10(%ebp),%eax
 81fb900:	89 04 24             	mov    %eax,(%esp)
 81fb903:	e8 e8 17 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fb908:	8b 85 2b fb ff ff    	mov    -0x4d5(%ebp),%eax
 81fb90e:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fb914:	83 c2 18             	add    $0x18,%edx
 81fb917:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fb91b:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fb922:	00 
 81fb923:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb927:	8b 45 10             	mov    0x10(%ebp),%eax
 81fb92a:	89 04 24             	mov    %eax,(%esp)
 81fb92d:	e8 8a 19 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fb932:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fb939:	00 
 81fb93a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fb941:	00 
 81fb942:	8d 85 9e fd ff ff    	lea    -0x262(%ebp),%eax
 81fb948:	89 04 24             	mov    %eax,(%esp)
 81fb94b:	e8 70 23 e8 ff       	call   807dcc0 <memset@plt>
 81fb950:	8b 85 2b fb ff ff    	mov    -0x4d5(%ebp),%eax
 81fb956:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fb95c:	83 c2 18             	add    $0x18,%edx
 81fb95f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fb963:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb967:	8d 85 9e fd ff ff    	lea    -0x262(%ebp),%eax
 81fb96d:	89 04 24             	mov    %eax,(%esp)
 81fb970:	e8 5b 1f e8 ff       	call   807d8d0 <strncpy@plt>
 81fb975:	e8 2d ea ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fb97a:	8d 95 9e fd ff ff    	lea    -0x262(%ebp),%edx
 81fb980:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb984:	89 04 24             	mov    %eax,(%esp)
 81fb987:	e8 56 1e 4d 00       	call   86cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>
 81fb98c:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81fb98f:	e8 13 ea ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fb994:	8b 55 bc             	mov    -0x44(%ebp),%edx
 81fb997:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fb99b:	89 04 24             	mov    %eax,(%esp)
 81fb99e:	e8 9d 93 4c 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81fb9a3:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81fb9a6:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 81fb9aa:	0f 84 d8 01 00 00    	je     81fbb88 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x19ea>
 81fb9b0:	0f b7 85 29 fb ff ff 	movzwl -0x4d7(%ebp),%eax
 81fb9b7:	0f b7 d0             	movzwl %ax,%edx
 81fb9ba:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fb9c0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81fb9c7:	00 
 81fb9c8:	8d 8d 98 fd ff ff    	lea    -0x268(%ebp),%ecx
 81fb9ce:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81fb9d2:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 81fb9d9:	00 
 81fb9da:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fb9de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fb9e2:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fb9e5:	89 04 24             	mov    %eax,(%esp)
 81fb9e8:	e8 e7 fc 47 00       	call   867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>
 81fb9ed:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81fb9f0:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81fb9f4:	0f 88 6b 0a 00 00    	js     81fc465 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22c7>
 81fb9fa:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fb9fd:	89 04 24             	mov    %eax,(%esp)
 81fba00:	e8 23 56 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fba05:	89 c6                	mov    %eax,%esi
 81fba07:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fba0a:	89 04 24             	mov    %eax,(%esp)
 81fba0d:	e8 16 56 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fba12:	89 c3                	mov    %eax,%ebx
 81fba14:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fba1b:	00 
 81fba1c:	c7 44 24 08 b0 8a 00 	movl   $0x8ab0,0x8(%esp)
 81fba23:	00 
 81fba24:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fba2b:	08 
 81fba2c:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81fba32:	89 04 24             	mov    %eax,(%esp)
 81fba35:	e8 de 3c 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fba3a:	89 74 24 10          	mov    %esi,0x10(%esp)
 81fba3e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81fba41:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fba45:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fba49:	c7 44 24 04 d8 24 bc 	movl   $0x8bc24d8,0x4(%esp)
 81fba50:	08 
 81fba51:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 81fba57:	89 04 24             	mov    %eax,(%esp)
 81fba5a:	e8 29 3d 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fba5f:	8b 85 98 fd ff ff    	mov    -0x268(%ebp),%eax
 81fba65:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81fba68:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81fba6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fba70:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fba77:	00 
 81fba78:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81fba7b:	89 04 24             	mov    %eax,(%esp)
 81fba7e:	e8 d7 0b 48 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81fba83:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fba89:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fba8d:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fba93:	89 04 24             	mov    %eax,(%esp)
 81fba96:	e8 a1 fe ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fba9b:	0f b7 85 29 fb ff ff 	movzwl -0x4d7(%ebp),%eax
 81fbaa2:	0f b7 c0             	movzwl %ax,%eax
 81fbaa5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbaa9:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbaaf:	89 04 24             	mov    %eax,(%esp)
 81fbab2:	e8 ed e3 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81fbab7:	8b 85 2b fb ff ff    	mov    -0x4d5(%ebp),%eax
 81fbabd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbac1:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbac7:	89 04 24             	mov    %eax,(%esp)
 81fbaca:	e8 6d fe ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fbacf:	8b 85 2b fb ff ff    	mov    -0x4d5(%ebp),%eax
 81fbad5:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fbadb:	83 c2 18             	add    $0x18,%edx
 81fbade:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fbae2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbae6:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbaec:	89 04 24             	mov    %eax,(%esp)
 81fbaef:	e8 f0 b8 fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fbaf4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fbafb:	00 
 81fbafc:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbb02:	89 04 24             	mov    %eax,(%esp)
 81fbb05:	e8 4e fe ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fbb0a:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbb10:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbb14:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbb17:	89 04 24             	mov    %eax,(%esp)
 81fbb1a:	e8 9b ca 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fbb1f:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fbb25:	8d 78 18             	lea    0x18(%eax),%edi
 81fbb28:	8b b5 25 fb ff ff    	mov    -0x4db(%ebp),%esi
 81fbb2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbb31:	89 04 24             	mov    %eax,(%esp)
 81fbb34:	e8 ef 54 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fbb39:	89 c3                	mov    %eax,%ebx
 81fbb3b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fbb42:	00 
 81fbb43:	c7 44 24 08 ba 8a 00 	movl   $0x8aba,0x8(%esp)
 81fbb4a:	00 
 81fbb4b:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fbb52:	08 
 81fbb53:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 81fbb59:	89 04 24             	mov    %eax,(%esp)
 81fbb5c:	e8 b7 3b 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fbb61:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81fbb65:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fbb69:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fbb6d:	c7 44 24 04 f7 24 bc 	movl   $0x8bc24f7,0x4(%esp)
 81fbb74:	08 
 81fbb75:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 81fbb7b:	89 04 24             	mov    %eax,(%esp)
 81fbb7e:	e8 05 3c 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fbb83:	e9 f0 08 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fbb88:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fbb8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbb92:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbb95:	89 04 24             	mov    %eax,(%esp)
 81fbb98:	e8 1d ca 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fbb9d:	e9 d6 08 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fbba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbba5:	89 04 24             	mov    %eax,(%esp)
 81fbba8:	e8 c1 e7 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fbbad:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fbbb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbbb7:	89 14 24             	mov    %edx,(%esp)
 81fbbba:	e8 b7 d6 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fbbbf:	83 f0 01             	xor    $0x1,%eax
 81fbbc2:	84 c0                	test   %al,%al
 81fbbc4:	0f 85 9e 08 00 00    	jne    81fc468 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22ca>
 81fbbca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbbcd:	89 04 24             	mov    %eax,(%esp)
 81fbbd0:	e8 99 e7 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fbbd5:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fbbdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbbdf:	89 14 24             	mov    %edx,(%esp)
 81fbbe2:	e8 f1 d7 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fbbe7:	85 c0                	test   %eax,%eax
 81fbbe9:	0f 9e c0             	setle  %al
 81fbbec:	84 c0                	test   %al,%al
 81fbbee:	0f 85 77 08 00 00    	jne    81fc46b <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22cd>
 81fbbf4:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fbbfa:	83 c0 0e             	add    $0xe,%eax
 81fbbfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbc01:	8b 45 10             	mov    0x10(%ebp),%eax
 81fbc04:	89 04 24             	mov    %eax,(%esp)
 81fbc07:	e8 e4 14 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fbc0c:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fbc12:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fbc18:	83 c2 12             	add    $0x12,%edx
 81fbc1b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fbc1f:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fbc26:	00 
 81fbc27:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbc2b:	8b 45 10             	mov    0x10(%ebp),%eax
 81fbc2e:	89 04 24             	mov    %eax,(%esp)
 81fbc31:	e8 86 16 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fbc36:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fbc3d:	00 
 81fbc3e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fbc45:	00 
 81fbc46:	8d 85 7a fd ff ff    	lea    -0x286(%ebp),%eax
 81fbc4c:	89 04 24             	mov    %eax,(%esp)
 81fbc4f:	e8 6c 20 e8 ff       	call   807dcc0 <memset@plt>
 81fbc54:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fbc5a:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fbc60:	83 c2 12             	add    $0x12,%edx
 81fbc63:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fbc67:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbc6b:	8d 85 7a fd ff ff    	lea    -0x286(%ebp),%eax
 81fbc71:	89 04 24             	mov    %eax,(%esp)
 81fbc74:	e8 57 1c e8 ff       	call   807d8d0 <strncpy@plt>
 81fbc79:	e8 29 e7 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fbc7e:	8d 95 7a fd ff ff    	lea    -0x286(%ebp),%edx
 81fbc84:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbc88:	89 04 24             	mov    %eax,(%esp)
 81fbc8b:	e8 52 1b 4d 00       	call   86cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>
 81fbc90:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81fbc93:	e8 0f e7 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fbc98:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81fbc9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbc9f:	89 04 24             	mov    %eax,(%esp)
 81fbca2:	e8 99 90 4c 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81fbca7:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81fbcaa:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 81fbcae:	0f 84 28 01 00 00    	je     81fbddc <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1c3e>
 81fbcb4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81fbcb7:	89 04 24             	mov    %eax,(%esp)
 81fbcba:	e8 8d 94 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81fbcbf:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81fbcc2:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81fbcc6:	0f 84 f6 00 00 00    	je     81fbdc2 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1c24>
 81fbccc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fbcd3:	00 
 81fbcd4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81fbcd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbcdb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81fbcde:	89 04 24             	mov    %eax,(%esp)
 81fbce1:	e8 d6 6c 3b 00       	call   85b29bc <_ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE>
 81fbce6:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fbcec:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbcf0:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbcf6:	89 04 24             	mov    %eax,(%esp)
 81fbcf9:	e8 3e fc ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fbcfe:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fbd04:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fbd0a:	83 c2 12             	add    $0x12,%edx
 81fbd0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fbd11:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbd15:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbd1b:	89 04 24             	mov    %eax,(%esp)
 81fbd1e:	e8 c1 b6 fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fbd23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fbd2a:	00 
 81fbd2b:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbd31:	89 04 24             	mov    %eax,(%esp)
 81fbd34:	e8 1f fc ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fbd39:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbd3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbd43:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbd46:	89 04 24             	mov    %eax,(%esp)
 81fbd49:	e8 6c c8 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fbd4e:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbd54:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbd58:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81fbd5b:	89 04 24             	mov    %eax,(%esp)
 81fbd5e:	e8 57 c8 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fbd63:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fbd69:	8d 70 12             	lea    0x12(%eax),%esi
 81fbd6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbd6f:	89 04 24             	mov    %eax,(%esp)
 81fbd72:	e8 b1 52 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fbd77:	89 c3                	mov    %eax,%ebx
 81fbd79:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fbd80:	00 
 81fbd81:	c7 44 24 08 e2 8a 00 	movl   $0x8ae2,0x8(%esp)
 81fbd88:	00 
 81fbd89:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fbd90:	08 
 81fbd91:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81fbd97:	89 04 24             	mov    %eax,(%esp)
 81fbd9a:	e8 79 39 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fbd9f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fbda3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fbda7:	c7 44 24 04 15 25 bc 	movl   $0x8bc2515,0x4(%esp)
 81fbdae:	08 
 81fbdaf:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81fbdb5:	89 04 24             	mov    %eax,(%esp)
 81fbdb8:	e8 cb 39 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fbdbd:	e9 b6 06 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fbdc2:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fbdc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbdcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbdcf:	89 04 24             	mov    %eax,(%esp)
 81fbdd2:	e8 e3 c7 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fbdd7:	e9 9c 06 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fbddc:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fbde2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbde6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbde9:	89 04 24             	mov    %eax,(%esp)
 81fbdec:	e8 c9 c7 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fbdf1:	e9 82 06 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fbdf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbdf9:	89 04 24             	mov    %eax,(%esp)
 81fbdfc:	e8 6d e5 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fbe01:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fbe07:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbe0b:	89 14 24             	mov    %edx,(%esp)
 81fbe0e:	e8 63 d4 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fbe13:	83 f0 01             	xor    $0x1,%eax
 81fbe16:	84 c0                	test   %al,%al
 81fbe18:	0f 85 50 06 00 00    	jne    81fc46e <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22d0>
 81fbe1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbe21:	89 04 24             	mov    %eax,(%esp)
 81fbe24:	e8 45 e5 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fbe29:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fbe2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbe33:	89 14 24             	mov    %edx,(%esp)
 81fbe36:	e8 9d d5 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fbe3b:	85 c0                	test   %eax,%eax
 81fbe3d:	0f 9e c0             	setle  %al
 81fbe40:	84 c0                	test   %al,%al
 81fbe42:	0f 85 29 06 00 00    	jne    81fc471 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22d3>
 81fbe48:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fbe4e:	83 c0 0e             	add    $0xe,%eax
 81fbe51:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbe55:	8b 45 10             	mov    0x10(%ebp),%eax
 81fbe58:	89 04 24             	mov    %eax,(%esp)
 81fbe5b:	e8 90 12 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fbe60:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fbe66:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fbe6c:	83 c2 12             	add    $0x12,%edx
 81fbe6f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fbe73:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fbe7a:	00 
 81fbe7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbe7f:	8b 45 10             	mov    0x10(%ebp),%eax
 81fbe82:	89 04 24             	mov    %eax,(%esp)
 81fbe85:	e8 32 14 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fbe8a:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fbe91:	00 
 81fbe92:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fbe99:	00 
 81fbe9a:	8d 85 5c fd ff ff    	lea    -0x2a4(%ebp),%eax
 81fbea0:	89 04 24             	mov    %eax,(%esp)
 81fbea3:	e8 18 1e e8 ff       	call   807dcc0 <memset@plt>
 81fbea8:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fbeae:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fbeb4:	83 c2 12             	add    $0x12,%edx
 81fbeb7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fbebb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbebf:	8d 85 5c fd ff ff    	lea    -0x2a4(%ebp),%eax
 81fbec5:	89 04 24             	mov    %eax,(%esp)
 81fbec8:	e8 03 1a e8 ff       	call   807d8d0 <strncpy@plt>
 81fbecd:	e8 d5 e4 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fbed2:	8d 95 5c fd ff ff    	lea    -0x2a4(%ebp),%edx
 81fbed8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbedc:	89 04 24             	mov    %eax,(%esp)
 81fbedf:	e8 fe 18 4d 00       	call   86cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>
 81fbee4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81fbee7:	e8 bb e4 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fbeec:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81fbeef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbef3:	89 04 24             	mov    %eax,(%esp)
 81fbef6:	e8 45 8e 4c 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81fbefb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81fbefe:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81fbf02:	0f 84 fa 00 00 00    	je     81fc002 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x1e64>
 81fbf08:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fbf0f:	00 
 81fbf10:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81fbf13:	89 04 24             	mov    %eax,(%esp)
 81fbf16:	e8 bf bb 45 00       	call   8657ada <_ZN5CUser14RecoverFatigueEi>
 81fbf1b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81fbf1e:	89 04 24             	mov    %eax,(%esp)
 81fbf21:	e8 1a a6 45 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 81fbf26:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fbf2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbf30:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbf36:	89 04 24             	mov    %eax,(%esp)
 81fbf39:	e8 fe f9 ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fbf3e:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fbf44:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fbf4a:	83 c2 12             	add    $0x12,%edx
 81fbf4d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fbf51:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fbf55:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbf5b:	89 04 24             	mov    %eax,(%esp)
 81fbf5e:	e8 81 b4 fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fbf63:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fbf6a:	00 
 81fbf6b:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbf71:	89 04 24             	mov    %eax,(%esp)
 81fbf74:	e8 df f9 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fbf79:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbf7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbf83:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbf86:	89 04 24             	mov    %eax,(%esp)
 81fbf89:	e8 2c c6 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fbf8e:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fbf94:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fbf98:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81fbf9b:	89 04 24             	mov    %eax,(%esp)
 81fbf9e:	e8 17 c6 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fbfa3:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fbfa9:	8d 70 12             	lea    0x12(%eax),%esi
 81fbfac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fbfaf:	89 04 24             	mov    %eax,(%esp)
 81fbfb2:	e8 71 50 f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fbfb7:	89 c3                	mov    %eax,%ebx
 81fbfb9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fbfc0:	00 
 81fbfc1:	c7 44 24 08 09 8b 00 	movl   $0x8b09,0x8(%esp)
 81fbfc8:	00 
 81fbfc9:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fbfd0:	08 
 81fbfd1:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81fbfd7:	89 04 24             	mov    %eax,(%esp)
 81fbfda:	e8 39 37 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fbfdf:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81fbfe3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fbfe7:	c7 44 24 04 28 25 bc 	movl   $0x8bc2528,0x4(%esp)
 81fbfee:	08 
 81fbfef:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 81fbff5:	89 04 24             	mov    %eax,(%esp)
 81fbff8:	e8 8b 37 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fbffd:	e9 76 04 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc002:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fc008:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc00c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc00f:	89 04 24             	mov    %eax,(%esp)
 81fc012:	e8 a3 c5 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fc017:	e9 5c 04 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc01c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc01f:	89 04 24             	mov    %eax,(%esp)
 81fc022:	e8 47 e3 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc027:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fc02d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc031:	89 14 24             	mov    %edx,(%esp)
 81fc034:	e8 3d d2 09 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 81fc039:	83 f0 01             	xor    $0x1,%eax
 81fc03c:	84 c0                	test   %al,%al
 81fc03e:	0f 85 30 04 00 00    	jne    81fc474 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22d6>
 81fc044:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc047:	89 04 24             	mov    %eax,(%esp)
 81fc04a:	e8 1f e3 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc04f:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 81fc055:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc059:	89 14 24             	mov    %edx,(%esp)
 81fc05c:	e8 77 d3 09 00       	call   82993d8 <_ZN11CGM_Manager10GetGmLevelEj>
 81fc061:	85 c0                	test   %eax,%eax
 81fc063:	0f 9e c0             	setle  %al
 81fc066:	84 c0                	test   %al,%al
 81fc068:	0f 85 09 04 00 00    	jne    81fc477 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22d9>
 81fc06e:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fc074:	83 c0 0e             	add    $0xe,%eax
 81fc077:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc07b:	8b 45 10             	mov    0x10(%ebp),%eax
 81fc07e:	89 04 24             	mov    %eax,(%esp)
 81fc081:	e8 6a 10 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fc086:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fc08c:	83 c0 12             	add    $0x12,%eax
 81fc08f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc093:	8b 45 10             	mov    0x10(%ebp),%eax
 81fc096:	89 04 24             	mov    %eax,(%esp)
 81fc099:	e8 52 10 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81fc09e:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fc0a4:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fc0aa:	83 c2 16             	add    $0x16,%edx
 81fc0ad:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81fc0b1:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fc0b8:	00 
 81fc0b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fc0bd:	8b 45 10             	mov    0x10(%ebp),%eax
 81fc0c0:	89 04 24             	mov    %eax,(%esp)
 81fc0c3:	e8 f4 11 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81fc0c8:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81fc0cf:	00 
 81fc0d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fc0d7:	00 
 81fc0d8:	8d 85 3e fd ff ff    	lea    -0x2c2(%ebp),%eax
 81fc0de:	89 04 24             	mov    %eax,(%esp)
 81fc0e1:	e8 da 1b e8 ff       	call   807dcc0 <memset@plt>
 81fc0e6:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fc0ec:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fc0f2:	83 c2 16             	add    $0x16,%edx
 81fc0f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fc0f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fc0fd:	8d 85 3e fd ff ff    	lea    -0x2c2(%ebp),%eax
 81fc103:	89 04 24             	mov    %eax,(%esp)
 81fc106:	e8 c5 17 e8 ff       	call   807d8d0 <strncpy@plt>
 81fc10b:	e8 97 e2 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fc110:	8d 95 3e fd ff ff    	lea    -0x2c2(%ebp),%edx
 81fc116:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fc11a:	89 04 24             	mov    %eax,(%esp)
 81fc11d:	e8 c0 16 4d 00       	call   86cd7e2 <_ZN9GameWorld16GetIDUserInIDMapEPKc>
 81fc122:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81fc125:	e8 7d e2 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 81fc12a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81fc12d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fc131:	89 04 24             	mov    %eax,(%esp)
 81fc134:	e8 07 8c 4c 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81fc139:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81fc13c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81fc140:	0f 84 4a 02 00 00    	je     81fc390 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x21f2>
 81fc146:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81fc14b:	c7 44 24 08 28 8b 00 	movl   $0x8b28,0x8(%esp)
 81fc152:	00 
 81fc153:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81fc15a:	08 
 81fc15b:	89 04 24             	mov    %eax,(%esp)
 81fc15e:	e8 23 39 09 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81fc163:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81fc16a:	00 
 81fc16b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc16f:	8d 85 34 fd ff ff    	lea    -0x2cc(%ebp),%eax
 81fc175:	89 04 24             	mov    %eax,(%esp)
 81fc178:	e8 a9 ca ec ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81fc17d:	8d 85 34 fd ff ff    	lea    -0x2cc(%ebp),%eax
 81fc183:	89 04 24             	mov    %eax,(%esp)
 81fc186:	e8 bb ca ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fc18b:	c7 44 24 04 93 00 00 	movl   $0x93,0x4(%esp)
 81fc192:	00 
 81fc193:	89 04 24             	mov    %eax,(%esp)
 81fc196:	e8 bb ca ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81fc19b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc19e:	89 04 24             	mov    %eax,(%esp)
 81fc1a1:	e8 f0 ca ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81fc1a6:	89 c3                	mov    %eax,%ebx
 81fc1a8:	8d 85 34 fd ff ff    	lea    -0x2cc(%ebp),%eax
 81fc1ae:	89 04 24             	mov    %eax,(%esp)
 81fc1b1:	e8 90 ca ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81fc1b6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81fc1ba:	89 04 24             	mov    %eax,(%esp)
 81fc1bd:	e8 94 ca ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81fc1c2:	8d 85 34 fd ff ff    	lea    -0x2cc(%ebp),%eax
 81fc1c8:	89 04 24             	mov    %eax,(%esp)
 81fc1cb:	e8 7e ca ec ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81fc1d0:	89 04 24             	mov    %eax,(%esp)
 81fc1d3:	e8 00 b7 03 00       	call   82378d8 <_ZN12CStreamGuard11GetInBufferI23SIG_FORBID_USER_TO_PLAYEEPT_v>
 81fc1d8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81fc1db:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 81fc1e2:	00 
 81fc1e3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fc1ea:	00 
 81fc1eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81fc1ee:	89 04 24             	mov    %eax,(%esp)
 81fc1f1:	e8 ca 1a e8 ff       	call   807dcc0 <memset@plt>
 81fc1f6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc1f9:	89 04 24             	mov    %eax,(%esp)
 81fc1fc:	e8 4d fa ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81fc201:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81fc204:	89 02                	mov    %eax,(%edx)
 81fc206:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81fc209:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 81fc20d:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fc213:	85 c0                	test   %eax,%eax
 81fc215:	7f 0c                	jg     81fc223 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2085>
 81fc217:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81fc21a:	c7 40 05 01 00 00 00 	movl   $0x1,0x5(%eax)
 81fc221:	eb 25                	jmp    81fc248 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x20aa>
 81fc223:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fc229:	83 f8 63             	cmp    $0x63,%eax
 81fc22c:	7e 0c                	jle    81fc23a <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x209c>
 81fc22e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81fc231:	c7 40 05 64 00 00 00 	movl   $0x64,0x5(%eax)
 81fc238:	eb 0e                	jmp    81fc248 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x20aa>
 81fc23a:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fc240:	89 c2                	mov    %eax,%edx
 81fc242:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81fc245:	89 50 05             	mov    %edx,0x5(%eax)
 81fc248:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81fc24d:	8d 95 34 fd ff ff    	lea    -0x2cc(%ebp),%edx
 81fc253:	89 54 24 08          	mov    %edx,0x8(%esp)
 81fc257:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81fc25e:	00 
 81fc25f:	89 04 24             	mov    %eax,(%esp)
 81fc262:	e8 77 4d 37 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81fc267:	8b 85 25 fb ff ff    	mov    -0x4db(%ebp),%eax
 81fc26d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc271:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fc277:	89 04 24             	mov    %eax,(%esp)
 81fc27a:	e8 bd f6 ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fc27f:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fc285:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc289:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fc28f:	89 04 24             	mov    %eax,(%esp)
 81fc292:	e8 a5 f6 ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fc297:	8b 85 29 fb ff ff    	mov    -0x4d7(%ebp),%eax
 81fc29d:	8d 95 17 fb ff ff    	lea    -0x4e9(%ebp),%edx
 81fc2a3:	83 c2 16             	add    $0x16,%edx
 81fc2a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81fc2aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81fc2ae:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fc2b4:	89 04 24             	mov    %eax,(%esp)
 81fc2b7:	e8 28 b1 fb ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 81fc2bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fc2c3:	00 
 81fc2c4:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fc2ca:	89 04 24             	mov    %eax,(%esp)
 81fc2cd:	e8 86 f6 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fc2d2:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fc2d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc2dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc2df:	89 04 24             	mov    %eax,(%esp)
 81fc2e2:	e8 d3 c2 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fc2e7:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fc2ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc2f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81fc2f4:	89 04 24             	mov    %eax,(%esp)
 81fc2f7:	e8 be c2 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fc2fc:	8b b5 25 fb ff ff    	mov    -0x4db(%ebp),%esi
 81fc302:	8d 85 17 fb ff ff    	lea    -0x4e9(%ebp),%eax
 81fc308:	8d 78 16             	lea    0x16(%eax),%edi
 81fc30b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc30e:	89 04 24             	mov    %eax,(%esp)
 81fc311:	e8 12 4d f0 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81fc316:	89 c3                	mov    %eax,%ebx
 81fc318:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc31f:	00 
 81fc320:	c7 44 24 08 44 8b 00 	movl   $0x8b44,0x8(%esp)
 81fc327:	00 
 81fc328:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fc32f:	08 
 81fc330:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 81fc336:	89 04 24             	mov    %eax,(%esp)
 81fc339:	e8 da 33 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fc33e:	89 74 24 10          	mov    %esi,0x10(%esp)
 81fc342:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81fc346:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81fc34a:	c7 44 24 04 44 25 bc 	movl   $0x8bc2544,0x4(%esp)
 81fc351:	08 
 81fc352:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 81fc358:	89 04 24             	mov    %eax,(%esp)
 81fc35b:	e8 28 34 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fc360:	eb 1b                	jmp    81fc37d <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x21df>
 81fc362:	89 d3                	mov    %edx,%ebx
 81fc364:	89 c6                	mov    %eax,%esi
 81fc366:	8d 85 34 fd ff ff    	lea    -0x2cc(%ebp),%eax
 81fc36c:	89 04 24             	mov    %eax,(%esp)
 81fc36f:	e8 5e 05 42 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81fc374:	89 f0                	mov    %esi,%eax
 81fc376:	89 da                	mov    %ebx,%edx
 81fc378:	e9 10 01 00 00       	jmp    81fc48d <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22ef>
 81fc37d:	8d 85 34 fd ff ff    	lea    -0x2cc(%ebp),%eax
 81fc383:	89 04 24             	mov    %eax,(%esp)
 81fc386:	e8 47 05 42 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81fc38b:	e9 e8 00 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc390:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fc396:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fc39a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc39d:	89 04 24             	mov    %eax,(%esp)
 81fc3a0:	e8 15 c2 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fc3a5:	e9 ce 00 00 00       	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc3aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fc3ad:	89 04 24             	mov    %eax,(%esp)
 81fc3b0:	e8 b9 df ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81fc3b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fc3bc:	00 
 81fc3bd:	89 04 24             	mov    %eax,(%esp)
 81fc3c0:	e8 86 cc f0 ff       	call   810904b <_Z14NumberToStringji>
 81fc3c5:	89 c3                	mov    %eax,%ebx
 81fc3c7:	0f b6 85 24 fb ff ff 	movzbl -0x4dc(%ebp),%eax
 81fc3ce:	0f b6 f0             	movzbl %al,%esi
 81fc3d1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81fc3d8:	00 
 81fc3d9:	c7 44 24 08 52 8b 00 	movl   $0x8b52,0x8(%esp)
 81fc3e0:	00 
 81fc3e1:	c7 44 24 04 60 fc bc 	movl   $0x8bcfc60,0x4(%esp)
 81fc3e8:	08 
 81fc3e9:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81fc3ef:	89 04 24             	mov    %eax,(%esp)
 81fc3f2:	e8 21 33 35 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81fc3f7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81fc3fb:	89 74 24 08          	mov    %esi,0x8(%esp)
 81fc3ff:	c7 44 24 04 68 25 bc 	movl   $0x8bc2568,0x4(%esp)
 81fc406:	08 
 81fc407:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81fc40d:	89 04 24             	mov    %eax,(%esp)
 81fc410:	e8 73 33 35 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81fc415:	eb 61                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc417:	90                   	nop
 81fc418:	eb 5e                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc41a:	90                   	nop
 81fc41b:	eb 5b                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc41d:	90                   	nop
 81fc41e:	eb 58                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc420:	90                   	nop
 81fc421:	eb 55                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc423:	90                   	nop
 81fc424:	eb 52                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc426:	90                   	nop
 81fc427:	eb 4f                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc429:	90                   	nop
 81fc42a:	eb 4c                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc42c:	90                   	nop
 81fc42d:	eb 49                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc42f:	90                   	nop
 81fc430:	eb 46                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc432:	90                   	nop
 81fc433:	eb 43                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc435:	90                   	nop
 81fc436:	eb 40                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc438:	90                   	nop
 81fc439:	eb 3d                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc43b:	90                   	nop
 81fc43c:	eb 3a                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc43e:	90                   	nop
 81fc43f:	eb 37                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc441:	90                   	nop
 81fc442:	eb 34                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc444:	90                   	nop
 81fc445:	eb 31                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc447:	90                   	nop
 81fc448:	eb 2e                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc44a:	90                   	nop
 81fc44b:	eb 2b                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc44d:	90                   	nop
 81fc44e:	eb 28                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc450:	90                   	nop
 81fc451:	eb 25                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc453:	90                   	nop
 81fc454:	eb 22                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc456:	90                   	nop
 81fc457:	eb 1f                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc459:	90                   	nop
 81fc45a:	eb 1c                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc45c:	90                   	nop
 81fc45d:	eb 19                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc45f:	90                   	nop
 81fc460:	eb 16                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc462:	90                   	nop
 81fc463:	eb 13                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc465:	90                   	nop
 81fc466:	eb 10                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc468:	90                   	nop
 81fc469:	eb 0d                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc46b:	90                   	nop
 81fc46c:	eb 0a                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc46e:	90                   	nop
 81fc46f:	eb 07                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc471:	90                   	nop
 81fc472:	eb 04                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc474:	90                   	nop
 81fc475:	eb 01                	jmp    81fc478 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x22da>
 81fc477:	90                   	nop
 81fc478:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fc47d:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fc483:	89 04 24             	mov    %eax,(%esp)
 81fc486:	e8 f5 19 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fc48b:	eb 36                	jmp    81fc4c3 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2325>
 81fc48d:	89 d3                	mov    %edx,%ebx
 81fc48f:	89 c6                	mov    %eax,%esi
 81fc491:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 81fc497:	89 04 24             	mov    %eax,(%esp)
 81fc49a:	e8 e1 19 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fc49f:	89 f0                	mov    %esi,%eax
 81fc4a1:	89 da                	mov    %ebx,%edx
 81fc4a3:	eb 00                	jmp    81fc4a5 <_ZN21Dispatcher_GM_Command12dispatch_sigEP5CUserR9PacketBuf+0x2307>
 81fc4a5:	89 d3                	mov    %edx,%ebx
 81fc4a7:	89 c6                	mov    %eax,%esi
 81fc4a9:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fc4af:	89 04 24             	mov    %eax,(%esp)
 81fc4b2:	e8 c9 19 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fc4b7:	89 f0                	mov    %esi,%eax
 81fc4b9:	89 da                	mov    %ebx,%edx
 81fc4bb:	89 04 24             	mov    %eax,(%esp)
 81fc4be:	e8 8d 72 8e 00       	call   8ae3750 <_Unwind_Resume>
 81fc4c3:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 81fc4c9:	89 04 24             	mov    %eax,(%esp)
 81fc4cc:	e8 af 19 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fc4d1:	89 d8                	mov    %ebx,%eax
 81fc4d3:	81 c4 1c 05 00 00    	add    $0x51c,%esp
 81fc4d9:	5b                   	pop    %ebx
 81fc4da:	5e                   	pop    %esi
 81fc4db:	5f                   	pop    %edi
 81fc4dc:	5d                   	pop    %ebp
 81fc4dd:	c3                   	ret

```

```c
// Dispatcher_GM_Command::dispatch_sig @ 0x81fa19e

/* Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_GM_Command::dispatch_sig(Dispatcher_GM_Command *this,CUser *param_1,PacketBuf *param_2)

{
  size_t sVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  CMonitorServerProxy *pCVar6;
  int iVar7;
  undefined4 uVar8;
  TimerQueue *pTVar9;
  int *piVar10;
  undefined4 uVar11;
  GameWorld *pGVar12;
  Stream *pSVar13;
  CStreamGuard *pCVar14;
  byte local_4e0;
  size_t local_4df;
  ushort local_4db;
  undefined2 uStack_4d9;
  undefined2 local_4d7;
  char local_4d5 [250];
  Packet_Monitor_Notice_Message local_3db [10];
  undefined4 local_3d1;
  char acStack_3c9 [249];
  CStreamGuard local_2d0 [10];
  char local_2c6 [30];
  char local_2a8 [30];
  char local_28a [30];
  undefined4 local_26c;
  char local_266 [30];
  char local_248 [30];
  char local_22a [30];
  char local_20c [30];
  char local_1ee [30];
  PacketGuard local_1d0 [12];
  PacketGuard local_1c4 [12];
  cMyTrace local_1b8 [16];
  cMyTrace local_1a8 [16];
  cMyTrace local_198 [16];
  cMyTrace local_188 [16];
  cMyTrace local_178 [16];
  cMyTrace local_168 [16];
  cMyTrace local_158 [16];
  cMyTrace local_148 [16];
  cMyTrace local_138 [16];
  cMyTrace local_128 [16];
  cMyTrace local_118 [16];
  int local_108 [3];
  int local_fc;
  cMyTrace local_f8 [16];
  cMyTrace local_e8 [16];
  cMyTrace local_d8 [16];
  cMyTrace local_c8 [16];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  uint local_88;
  CUser *local_84;
  uint local_80;
  int local_7c;
  size_t local_78;
  CUserCharacInfo *local_74;
  uint local_70;
  int local_6c;
  size_t local_68;
  CUser *local_64;
  uint local_60;
  CUserCharacInfo *local_5c;
  int local_58;
  char local_51;
  int local_50;
  int local_4c;
  uint local_48;
  CUserCharacInfo *local_44;
  int local_40;
  uint local_3c;
  CUser *local_38;
  CParty *local_34;
  uint local_30;
  CUser *local_2c;
  uint local_28;
  CUserCharacInfo *local_24;
  SIG_FORBID_USER_TO_PLAY *local_20;
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = LineFunc(0x88fd,"virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 == 0) {
      uVar3 = LineFunc(0x8902,"virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    else {
      uVar5 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar5,0);
      cMyTrace::cMyTrace(local_1b8,
                         "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",
                         0x8908,0);
      cMyTrace::operator()(local_1b8,"GM Command : %s",uVar3);
      cVar2 = PacketBuf::get_byte(param_2,&local_4e0);
      if (cVar2 == '\x01') {
        PacketGuard::PacketGuard(local_1c4);
                    /* try { // try from 081fa2e8 to 081fa352 has its CatchHandler @ 081fc4a5 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c4,1,0x6e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c4,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c4,99);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c4,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c4,true);
        PacketGuard::PacketGuard(local_1d0);
                    /* try { // try from 081fa36c to 081fc162 has its CatchHandler @ 081fc48d */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1d0,1,0x6e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1d0,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1d0,(uint)local_4e0);
        switch(local_4e0) {
        case 0:
          CUser::get_acc_id(param_1);
          iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
          if (0 < iVar4) {
            CUser::get_acc_id(param_1);
            cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
            if (cVar2 == '\x01') {
              CUser::SetGameMasterMode(param_1,false);
            }
            else {
              CUser::SetGameMasterMode(param_1,true);
            }
            CUser::get_acc_id(param_1);
            CGM_Manager::TurnGmMode(GlobalData::s_GM_Manager);
          }
          break;
        case 1:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x100,local_4df);
              if (local_4df != 0) {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                pGVar12 = (GameWorld *)G_GameWorld();
                GameWorld::send_all(pGVar12,local_1d0);
                cMyTrace::cMyTrace(local_1a8,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x8939,0);
                cMyTrace::operator()(local_1a8,"GMC %s \n",&local_4db);
              }
            }
          }
          break;
        case 2:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x100,local_4df);
              if (local_4df != 0) {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                iVar4 = CUser::get_area(param_1,false);
                cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
                pGVar12 = (GameWorld *)G_GameWorld();
                GameWorld::send_to_area(pGVar12,(int)cVar2,iVar4,local_1d0);
                cMyTrace::cMyTrace(local_198,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x894a,0);
                cMyTrace::operator()(local_198,"GMZ %s \n",&local_4db);
              }
            }
          }
          break;
        case 3:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x100,local_4df);
              if (local_4df != 0) {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                Packet_Monitor_Notice_Message::Packet_Monitor_Notice_Message(local_3db);
                local_3d1 = CONCAT31(local_3d1._1_3_,(char)local_4df);
                strncpy((char *)((int)&local_3d1 + 1),(char *)&local_4db,local_4df);
                uVar3 = CUser::GetServerGroup(param_1);
                pCVar6 = (CMonitorServerProxy *)
                         CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                   (GlobalData::s_monitor_proxy_mgr,uVar3);
                CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_3db,0x10b);
                cMyTrace::cMyTrace(local_188,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x8966,0);
                cMyTrace::operator()(local_188,"GMS %s \n",&local_4db);
              }
            }
          }
          break;
        case 4:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x1e,local_4df);
              memset(local_1ee,0,0x1e);
              strncpy(local_1ee,(char *)&local_4db,local_4df);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_88 = GameWorld::GetIDUserInIDMap(pGVar12,(char *)&local_4db);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_84 = (CUser *)GameWorld::find_user_from_world_byaccid(pGVar12,local_88);
              if (local_84 == (CUser *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                CUser::Send(param_1,local_1d0);
                CUser::Send(local_84,local_1d0);
                CUser::DisConnSig(local_84,0x14,1,0);
              }
              uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_178,
                                 "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x8993,0);
              cMyTrace::operator()(local_178,"GM(%s) expel %s \n",uVar3,&local_4db);
            }
          }
          break;
        case 5:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_int(param_2,(int *)&local_4db);
              PacketBuf::get_str(param_2,(char *)&local_4d7,0x1e,CONCAT22(uStack_4d9,local_4db));
              local_78 = CONCAT22(uStack_4d9,local_4db);
              if ((int)local_4df < 0x5a0) {
                if ((int)local_4df < 1) {
                  local_7c = 0x3c;
                }
                else {
                  local_7c = local_4df * 0x3c;
                }
              }
              else {
                local_7c = 0x15180;
              }
              memset(local_20c,0,0x1e);
              strncpy(local_20c,(char *)&local_4d7,local_78);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_80 = GameWorld::GetIDUserInIDMap(pGVar12,local_20c);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_74 = (CUserCharacInfo *)
                         GameWorld::find_user_from_world_byaccid(pGVar12,local_80);
              iVar4 = local_7c;
              if (local_74 == (CUserCharacInfo *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                pGVar12 = (GameWorld *)G_GameWorld();
                GameWorld::DisableChat(pGVar12,local_20c,iVar4);
                uVar3 = CUserCharacInfo::getCurCharacNo(local_74);
                cMyTrace::cMyTrace(local_168,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x89b8,0);
                cMyTrace::operator()
                          (local_168,"Insert timer queue @ forbidchat: %s %d\n",local_20c,uVar3);
                uVar3 = CUserCharacInfo::getCurCharacNo(local_74);
                uVar11 = CUserCharacInfo::GetLoginTick(local_74);
                iVar4 = local_7c;
                uVar8 = CUser::GetUID((CUser *)local_74);
                pTVar9 = (TimerQueue *)G_TimerQueue();
                TimerQueue::InsertTimer(pTVar9,0,uVar8,0x5d,iVar4,uVar11,uVar3);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_1d0,CONCAT22(uStack_4d9,local_4db));
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4d7,
                           CONCAT22(uStack_4d9,local_4db));
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                CUser::Send(param_1,local_1d0);
                CUser::Send((CUser *)local_74,local_1d0);
                Packet_Forbid_Chat_By_Monitor::Packet_Forbid_Chat_By_Monitor
                          ((Packet_Forbid_Chat_By_Monitor *)local_3db);
                local_3d1 = local_7c;
                strncpy(acStack_3c9,(char *)&local_4d7,CONCAT22(uStack_4d9,local_4db));
                uVar3 = CUser::GetServerGroup((CUser *)local_74);
                pCVar6 = (CMonitorServerProxy *)
                         CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                   (GlobalData::s_monitor_proxy_mgr,uVar3);
                CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_3db,0x30);
                uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                cMyTrace::cMyTrace(local_158,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x89ce,0);
                cMyTrace::operator()
                          (local_158,"GM(%s) forbid chat %s for %d mins \n",uVar3,&local_4d7,
                           local_4df);
              }
            }
          }
          break;
        case 6:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_int(param_2,(int *)&local_4db);
              PacketBuf::get_str(param_2,(char *)&local_4d7,0x1e,CONCAT22(uStack_4d9,local_4db));
              local_68 = CONCAT22(uStack_4d9,local_4db);
              if ((int)local_4df < 0x5a0) {
                if ((int)local_4df < 1) {
                  local_6c = 0x3c;
                }
                else {
                  local_6c = local_4df * 0x3c;
                }
              }
              else {
                local_6c = 0x15180;
              }
              memset(local_22a,0,0x1e);
              strncpy(local_22a,(char *)&local_4d7,local_68);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_70 = GameWorld::GetIDUserInIDMap(pGVar12,local_22a);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_64 = (CUser *)GameWorld::find_user_from_world_byaccid(pGVar12,local_70);
              if (local_64 == (CUser *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                iVar7 = CUser::get_state(local_64);
                iVar4 = local_6c;
                if (iVar7 == 3) {
                  pGVar12 = (GameWorld *)G_GameWorld();
                  GameWorld::DisableMove(pGVar12,local_22a,iVar4);
                  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_64);
                  cMyTrace::cMyTrace(local_148,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x89fe,0);
                  cMyTrace::operator()
                            (local_148,"Insert timer queue @ forbidmove: %s %d\n",local_22a,uVar3);
                  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_64);
                  uVar11 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)local_64);
                  iVar4 = local_6c;
                  uVar8 = CUser::GetUID(local_64);
                  pTVar9 = (TimerQueue *)G_TimerQueue();
                  TimerQueue::InsertTimer(pTVar9,0,uVar8,0x5e,iVar4,uVar11,uVar3);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_1d0,CONCAT22(uStack_4d9,local_4db));
                  InterfacePacketBuf::put_str
                            ((InterfacePacketBuf *)local_1d0,(char *)&local_4d7,
                             CONCAT22(uStack_4d9,local_4db));
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                  CUser::Send(param_1,local_1d0);
                  CUser::Send(local_64,local_1d0);
                  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_138,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8a09,0);
                  cMyTrace::operator()
                            (local_138,"GM(%s) forbid move %s for %d mins \n",uVar3,&local_4d7,
                             local_4df);
                }
              }
            }
          }
          break;
        case 7:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              CUserCharacInfo::SetInvisible((CUserCharacInfo *)param_1);
              iVar4 = CUser::get_state(param_1);
              if (iVar4 == 3) {
                CUser::SendNotiPacket(param_1,0,2,0);
              }
              uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_128,
                                 "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x8a2b,0);
              cMyTrace::operator()(local_128,"GM(%s) is invisible \n",uVar3);
            }
          }
          break;
        case 8:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              CUserCharacInfo::SetVisible((CUserCharacInfo *)param_1);
              iVar4 = CUser::get_state(param_1);
              if (iVar4 == 3) {
                CUser::SendNotiPacket(param_1,0,2,0);
              }
              uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_118,
                                 "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x8a43,0);
              cMyTrace::operator()(local_118,"GM(%s) is visible \n",uVar3);
            }
          }
          break;
        case 9:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_int(param_2,(int *)&local_4db);
              PacketBuf::get_str(param_2,(char *)&local_4d7,0x1e,CONCAT22(uStack_4d9,local_4db));
              memset(local_248,0,0x1e);
              strncpy(local_248,(char *)&local_4d7,CONCAT22(uStack_4d9,local_4db));
              pGVar12 = (GameWorld *)G_GameWorld();
              local_60 = GameWorld::GetIDUserInIDMap(pGVar12,local_248);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_5c = (CUserCharacInfo *)
                         GameWorld::find_user_from_world_byaccid(pGVar12,local_60);
              sVar1 = local_4df;
              if (local_5c == (CUserCharacInfo *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                local_58 = CUserCharacInfo::get_charac_level(local_5c);
                local_58 = sVar1 - local_58;
                local_51 = '\0';
                if (local_58 == 0) {
                  local_51 = '\0';
                }
                else if (local_58 < 1) {
                  for (local_4c = 0; local_58 < local_4c; local_4c = local_4c + -1) {
                    local_108[2] = CUserCharacInfo::get_charac_level(local_5c);
                    local_108[2] = local_108[2] + -1;
                    local_fc = 200;
                    piVar10 = std::min<int>(&local_fc,local_108 + 2);
                    local_51 = CUser::SetCharacLevel((CUser *)local_5c,*piVar10);
                  }
                }
                else {
                  for (local_50 = 0; local_50 < local_58; local_50 = local_50 + 1) {
                    local_108[0] = CUserCharacInfo::get_charac_level(local_5c);
                    local_108[0] = local_108[0] + 1;
                    local_108[1] = 200;
                    piVar10 = std::min<int>(local_108 + 1,local_108);
                    local_51 = CUser::SetCharacLevel((CUser *)local_5c,*piVar10);
                  }
                }
                if (local_51 != '\0') {
                  iVar4 = CUser::get_state((CUser *)local_5c);
                  if (iVar4 == 3) {
                    CUser::SendNotiPacket((CUser *)local_5c,1,0x25,0);
                    CUser::SendNotiPacket((CUser *)local_5c,0,2,0);
                    CUser::SendNotiPacket((CUser *)local_5c,1,2,1);
                  }
                  else if (iVar4 == 5) {
                    CUser::SendNotiPacket((CUser *)local_5c,1,0x25,0);
                    CUser::SendNotiPacket((CUser *)local_5c,2,2,1);
                  }
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_1d0,CONCAT22(uStack_4d9,local_4db));
                  InterfacePacketBuf::put_str
                            ((InterfacePacketBuf *)local_1d0,(char *)&local_4d7,
                             CONCAT22(uStack_4d9,local_4db));
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                  CUser::Send(param_1,local_1d0);
                  CUser::Send((CUser *)local_5c,local_1d0);
                  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_f8,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8a89,0);
                  cMyTrace::operator()
                            (local_f8,"GM(%s) modify %s level to %d \n",uVar3,&local_4d7,local_4df);
                }
              }
            }
          }
          break;
        case 10:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_short(param_2,&local_4db);
              PacketBuf::get_int(param_2,(int *)&uStack_4d9);
              PacketBuf::get_str(param_2,local_4d5,0x1e,CONCAT22(local_4d7,uStack_4d9));
              memset(local_266,0,0x1e);
              strncpy(local_266,local_4d5,CONCAT22(local_4d7,uStack_4d9));
              pGVar12 = (GameWorld *)G_GameWorld();
              local_48 = GameWorld::GetIDUserInIDMap(pGVar12,local_266);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_44 = (CUserCharacInfo *)
                         GameWorld::find_user_from_world_byaccid(pGVar12,local_48);
              if (local_44 == (CUserCharacInfo *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                local_40 = CUser::AddItem((CUser *)local_44,local_4df,local_4db,6,&local_26c,0);
                if (-1 < local_40) {
                  uVar3 = CUserCharacInfo::getCurCharacName(local_44);
                  uVar11 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_e8,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8ab0,0);
                  cMyTrace::operator()
                            (local_e8,"GM(%s) granted Item(%d) to %s.",uVar11,local_40,uVar3);
                  CUser::SendUpdateItemList((CUser *)local_44,1,local_26c,local_40);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1d0,(uint)local_4db);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_1d0,CONCAT22(local_4d7,uStack_4d9));
                  InterfacePacketBuf::put_str
                            ((InterfacePacketBuf *)local_1d0,local_4d5,
                             CONCAT22(local_4d7,uStack_4d9));
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                  CUser::Send(param_1,local_1d0);
                  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_d8,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8aba,0);
                  cMyTrace::operator()
                            (local_d8,"GM(%s) grant item(%d) to %s \n",uVar3,local_4df,local_4d5);
                }
              }
            }
          }
          break;
        case 0xb:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x1e,local_4df);
              memset(local_28a,0,0x1e);
              strncpy(local_28a,(char *)&local_4db,local_4df);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_3c = GameWorld::GetIDUserInIDMap(pGVar12,local_28a);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_38 = (CUser *)GameWorld::find_user_from_world_byaccid(pGVar12,local_3c);
              if (local_38 == (CUser *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                local_34 = (CParty *)CUser::GetParty(local_38);
                if (local_34 == (CParty *)0x0) {
                  CUser::Send(param_1,local_1c4);
                }
                else {
                  CParty::set_charac_live(local_34,local_38,1);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                  InterfacePacketBuf::put_str
                            ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                  CUser::Send(param_1,local_1d0);
                  CUser::Send(local_38,local_1d0);
                  uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  cMyTrace::cMyTrace(local_c8,
                                     "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x8ae2,0);
                  cMyTrace::operator()(local_c8,"GM(%s) revive %s \n",uVar3,&local_4db);
                }
              }
            }
          }
          break;
        case 0xc:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_str(param_2,(char *)&local_4db,0x1e,local_4df);
              memset(local_2a8,0,0x1e);
              strncpy(local_2a8,(char *)&local_4db,local_4df);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_30 = GameWorld::GetIDUserInIDMap(pGVar12,local_2a8);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_2c = (CUser *)GameWorld::find_user_from_world_byaccid(pGVar12,local_30);
              if (local_2c == (CUser *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                CUser::RecoverFatigue(local_2c,0);
                CUser::SendFatigue(local_2c);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4db,local_4df);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                CUser::Send(param_1,local_1d0);
                CUser::Send(local_2c,local_1d0);
                uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                cMyTrace::cMyTrace(local_b8,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x8b09,0);
                cMyTrace::operator()(local_b8,"GM(%s) reset fatigue %s \n",uVar3,&local_4db);
              }
            }
          }
          break;
        case 0xd:
          CUser::get_acc_id(param_1);
          cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
          if (cVar2 == '\x01') {
            CUser::get_acc_id(param_1);
            iVar4 = CGM_Manager::GetGmLevel(GlobalData::s_GM_Manager);
            if (0 < iVar4) {
              PacketBuf::get_int(param_2,(int *)&local_4df);
              PacketBuf::get_int(param_2,(int *)&local_4db);
              PacketBuf::get_str(param_2,(char *)&local_4d7,0x1e,CONCAT22(uStack_4d9,local_4db));
              memset(local_2c6,0,0x1e);
              strncpy(local_2c6,(char *)&local_4d7,CONCAT22(uStack_4d9,local_4db));
              pGVar12 = (GameWorld *)G_GameWorld();
              local_28 = GameWorld::GetIDUserInIDMap(pGVar12,local_2c6);
              pGVar12 = (GameWorld *)G_GameWorld();
              local_24 = (CUserCharacInfo *)
                         GameWorld::find_user_from_world_byaccid(pGVar12,local_28);
              if (local_24 == (CUserCharacInfo *)0x0) {
                CUser::Send(param_1,local_1c4);
              }
              else {
                pSVar13 = (Stream *)
                          StreamPool::Acquire(GlobalData::s_stream_pool,
                                              "PacketDispatcher_Impl_1.cpp",0x8b28);
                CStreamGuard::CStreamGuard(local_2d0,pSVar13,true);
                pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_2d0);
                    /* try { // try from 081fc196 to 081fc35f has its CatchHandler @ 081fc362 */
                CStreamGuard::operator<<(pCVar14,0x93);
                iVar4 = CUser::GetUID(param_1);
                pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_2d0);
                CStreamGuard::operator<<(pCVar14,iVar4);
                pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_2d0);
                local_20 = CStreamGuard::GetInBuffer<SIG_FORBID_USER_TO_PLAY>(pCVar14);
                memset(local_20,0,9);
                uVar3 = CUserCharacInfo::getCurCharacNo(local_24);
                *(undefined4 *)local_20 = uVar3;
                local_20[4] = (SIG_FORBID_USER_TO_PLAY)0x1;
                if ((int)local_4df < 1) {
                  *(undefined4 *)(local_20 + 5) = 1;
                }
                else if ((int)local_4df < 100) {
                  *(size_t *)(local_20 + 5) = local_4df;
                }
                else {
                  *(undefined4 *)(local_20 + 5) = 100;
                }
                MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_2d0);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1d0,local_4df);
                InterfacePacketBuf::put_int
                          ((InterfacePacketBuf *)local_1d0,CONCAT22(uStack_4d9,local_4db));
                InterfacePacketBuf::put_str
                          ((InterfacePacketBuf *)local_1d0,(char *)&local_4d7,
                           CONCAT22(uStack_4d9,local_4db));
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1d0,true);
                CUser::Send(param_1,local_1d0);
                CUser::Send((CUser *)local_24,local_1d0);
                uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                cMyTrace::cMyTrace(local_a8,
                                   "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x8b44,0);
                cMyTrace::operator()
                          (local_a8,"GM(%s) forbid play %s for %d days \n",uVar3,&local_4d7,
                           local_4df);
                    /* try { // try from 081fc386 to 081fc414 has its CatchHandler @ 081fc48d */
                CStreamGuard::~CStreamGuard(local_2d0);
              }
            }
          }
          break;
        default:
          uVar5 = CUser::get_acc_id(param_1);
          uVar3 = NumberToString(uVar5,0);
          cMyTrace::cMyTrace(local_98,
                             "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",
                             0x8b52,0);
          cMyTrace::operator()(local_98,"Undifined GM Command : %d by %s",(uint)local_4e0,uVar3);
        }
        uVar3 = 0;
                    /* try { // try from 081fc486 to 081fc48a has its CatchHandler @ 081fc4a5 */
        PacketGuard::~PacketGuard(local_1d0);
        PacketGuard::~PacketGuard(local_1c4);
      }
      else {
        uVar3 = LineFunc(0x890e,
                         "virtual int Dispatcher_GM_Command::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
  }
  return uVar3;
}

```

