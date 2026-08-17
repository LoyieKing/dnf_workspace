# Inter_MonitorNoticeMemberEnterOk

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cd218 Inter_MonitorNoticeMemberEnterOk::dispatch_sig  [0x084cd218-0x84cd5c9] ===
 84cd218:	55                   	push   %ebp
 84cd219:	89 e5                	mov    %esp,%ebp
 84cd21b:	56                   	push   %esi
 84cd21c:	53                   	push   %ebx
 84cd21d:	83 ec 50             	sub    $0x50,%esp
 84cd220:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd223:	89 04 24             	mov    %eax,(%esp)
 84cd226:	e8 61 d1 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cd22b:	85 c0                	test   %eax,%eax
 84cd22d:	0f 94 c0             	sete   %al
 84cd230:	84 c0                	test   %al,%al
 84cd232:	74 0a                	je     84cd23e <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x26>
 84cd234:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd239:	e9 83 03 00 00       	jmp    84cd5c1 <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x3a9>
 84cd23e:	8b 45 10             	mov    0x10(%ebp),%eax
 84cd241:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84cd244:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd24b:	ff 
 84cd24c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd24f:	89 04 24             	mov    %eax,(%esp)
 84cd252:	e8 49 0d 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd257:	89 c2                	mov    %eax,%edx
 84cd259:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd25c:	8b 40 11             	mov    0x11(%eax),%eax
 84cd25f:	39 c2                	cmp    %eax,%edx
 84cd261:	0f 95 c0             	setne  %al
 84cd264:	84 c0                	test   %al,%al
 84cd266:	74 57                	je     84cd2bf <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0xa7>
 84cd268:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd26b:	8b 58 11             	mov    0x11(%eax),%ebx
 84cd26e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd275:	ff 
 84cd276:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd279:	89 04 24             	mov    %eax,(%esp)
 84cd27c:	e8 1f 0d 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd281:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cd285:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cd289:	c7 44 24 10 ac 85 c8 	movl   $0x8c885ac,0x10(%esp)
 84cd290:	08 
 84cd291:	c7 44 24 0c 8b 28 00 	movl   $0x288b,0xc(%esp)
 84cd298:	00 
 84cd299:	c7 44 24 08 e0 d2 c8 	movl   $0x8c8d2e0,0x8(%esp)
 84cd2a0:	08 
 84cd2a1:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cd2a8:	08 
 84cd2a9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cd2b0:	e8 55 69 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cd2b5:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd2ba:	e9 02 03 00 00       	jmp    84cd5c1 <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x3a9>
 84cd2bf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd2c2:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cd2c6:	3c 02                	cmp    $0x2,%al
 84cd2c8:	0f 85 05 01 00 00    	jne    84cd3d3 <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x1bb>
 84cd2ce:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd2d1:	89 04 24             	mov    %eax,(%esp)
 84cd2d4:	e8 73 0a 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cd2d9:	c7 44 24 08 4a 00 00 	movl   $0x4a,0x8(%esp)
 84cd2e0:	00 
 84cd2e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cd2e8:	00 
 84cd2e9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd2ec:	89 04 24             	mov    %eax,(%esp)
 84cd2ef:	e8 08 e6 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cd2f4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd2f7:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cd2fb:	0f b6 c0             	movzbl %al,%eax
 84cd2fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd302:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd305:	89 04 24             	mov    %eax,(%esp)
 84cd308:	e8 13 e6 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd30d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd310:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84cd314:	0f b6 c0             	movzbl %al,%eax
 84cd317:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd31b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd31e:	89 04 24             	mov    %eax,(%esp)
 84cd321:	e8 fa e5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd326:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd329:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 84cd32d:	0f b6 c0             	movzbl %al,%eax
 84cd330:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd334:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd337:	89 04 24             	mov    %eax,(%esp)
 84cd33a:	e8 e1 e5 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd33f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd342:	83 c0 16             	add    $0x16,%eax
 84cd345:	89 04 24             	mov    %eax,(%esp)
 84cd348:	e8 63 10 bb ff       	call   807e3b0 <strlen@plt>
 84cd34d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cd350:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd353:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd357:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd35a:	89 04 24             	mov    %eax,(%esp)
 84cd35d:	e8 da e5 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cd362:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd365:	8d 50 16             	lea    0x16(%eax),%edx
 84cd368:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd36b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cd36f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd373:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd376:	89 04 24             	mov    %eax,(%esp)
 84cd379:	e8 66 a0 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cd37e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd385:	00 
 84cd386:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd389:	89 04 24             	mov    %eax,(%esp)
 84cd38c:	e8 c7 e5 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cd391:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd394:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd398:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd39b:	89 04 24             	mov    %eax,(%esp)
 84cd39e:	e8 17 b2 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cd3a3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd3a8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd3ab:	89 04 24             	mov    %eax,(%esp)
 84cd3ae:	e8 cd 0a 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cd3b3:	e9 09 02 00 00       	jmp    84cd5c1 <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x3a9>
 84cd3b8:	89 d3                	mov    %edx,%ebx
 84cd3ba:	89 c6                	mov    %eax,%esi
 84cd3bc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84cd3bf:	89 04 24             	mov    %eax,(%esp)
 84cd3c2:	e8 b9 0a 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cd3c7:	89 f0                	mov    %esi,%eax
 84cd3c9:	89 da                	mov    %ebx,%edx
 84cd3cb:	89 04 24             	mov    %eax,(%esp)
 84cd3ce:	e8 7d 63 61 00       	call   8ae3750 <_Unwind_Resume>
 84cd3d3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd3d6:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cd3da:	3c 03                	cmp    $0x3,%al
 84cd3dc:	75 2f                	jne    84cd40d <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x1f5>
 84cd3de:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd3e1:	83 c0 16             	add    $0x16,%eax
 84cd3e4:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 84cd3eb:	00 
 84cd3ec:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84cd3f3:	00 
 84cd3f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd3f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd3fb:	89 04 24             	mov    %eax,(%esp)
 84cd3fe:	e8 eb 0c 1c 00       	call   868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>
 84cd403:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd408:	e9 b4 01 00 00       	jmp    84cd5c1 <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x3a9>
 84cd40d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd410:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cd414:	3c 04                	cmp    $0x4,%al
 84cd416:	75 2f                	jne    84cd447 <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x22f>
 84cd418:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd41b:	83 c0 16             	add    $0x16,%eax
 84cd41e:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 84cd425:	00 
 84cd426:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84cd42d:	00 
 84cd42e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd432:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd435:	89 04 24             	mov    %eax,(%esp)
 84cd438:	e8 b1 0c 1c 00       	call   868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>
 84cd43d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd442:	e9 7a 01 00 00       	jmp    84cd5c1 <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x3a9>
 84cd447:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd44a:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84cd44e:	3c 01                	cmp    $0x1,%al
 84cd450:	75 58                	jne    84cd4aa <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x292>
 84cd452:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd455:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84cd459:	3c 01                	cmp    $0x1,%al
 84cd45b:	75 4d                	jne    84cd4aa <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x292>
 84cd45d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd460:	8b 50 35             	mov    0x35(%eax),%edx
 84cd463:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd466:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd46a:	89 04 24             	mov    %eax,(%esp)
 84cd46d:	e8 88 ec 01 00       	call   84ec0fa <_ZN15CUserCharacInfo24set_connect_upper_memberEj>
 84cd472:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd475:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 84cd479:	0f b6 d0             	movzbl %al,%edx
 84cd47c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd47f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd483:	89 04 24             	mov    %eax,(%esp)
 84cd486:	e8 f5 86 17 00       	call   8645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>
 84cd48b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd48e:	89 04 24             	mov    %eax,(%esp)
 84cd491:	e8 b6 7c 18 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84cd496:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cd499:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84cd49d:	74 0b                	je     84cd4aa <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x292>
 84cd49f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cd4a2:	89 04 24             	mov    %eax,(%esp)
 84cd4a5:	e8 7a f8 0c 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 84cd4aa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd4ad:	8b 50 11             	mov    0x11(%eax),%edx
 84cd4b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd4b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd4b7:	89 04 24             	mov    %eax,(%esp)
 84cd4ba:	e8 1d ec 01 00       	call   84ec0dc <_ZN15CUserCharacInfo20set_charac_memberkeyEj>
 84cd4bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd4c2:	89 04 24             	mov    %eax,(%esp)
 84cd4c5:	e8 82 08 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cd4ca:	c7 44 24 08 4a 00 00 	movl   $0x4a,0x8(%esp)
 84cd4d1:	00 
 84cd4d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cd4d9:	00 
 84cd4da:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd4dd:	89 04 24             	mov    %eax,(%esp)
 84cd4e0:	e8 17 e4 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cd4e5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd4e8:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cd4ec:	0f b6 c0             	movzbl %al,%eax
 84cd4ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd4f3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd4f6:	89 04 24             	mov    %eax,(%esp)
 84cd4f9:	e8 22 e4 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd4fe:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd501:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84cd505:	0f b6 c0             	movzbl %al,%eax
 84cd508:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd50c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd50f:	89 04 24             	mov    %eax,(%esp)
 84cd512:	e8 09 e4 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd517:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd51a:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 84cd51e:	0f b6 c0             	movzbl %al,%eax
 84cd521:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd525:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd528:	89 04 24             	mov    %eax,(%esp)
 84cd52b:	e8 f0 e3 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd530:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd533:	83 c0 16             	add    $0x16,%eax
 84cd536:	89 04 24             	mov    %eax,(%esp)
 84cd539:	e8 72 0e bb ff       	call   807e3b0 <strlen@plt>
 84cd53e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cd541:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd544:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd548:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd54b:	89 04 24             	mov    %eax,(%esp)
 84cd54e:	e8 e9 e3 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cd553:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cd556:	8d 50 16             	lea    0x16(%eax),%edx
 84cd559:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd55c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cd560:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd564:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd567:	89 04 24             	mov    %eax,(%esp)
 84cd56a:	e8 75 9e ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cd56f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd576:	00 
 84cd577:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd57a:	89 04 24             	mov    %eax,(%esp)
 84cd57d:	e8 d6 e3 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cd582:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd585:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd589:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd58c:	89 04 24             	mov    %eax,(%esp)
 84cd58f:	e8 26 b0 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cd594:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd599:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd59c:	89 04 24             	mov    %eax,(%esp)
 84cd59f:	e8 dc 08 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cd5a4:	eb 1b                	jmp    84cd5c1 <_ZN32Inter_MonitorNoticeMemberEnterOk12dispatch_sigEP5CUserPci+0x3a9>
 84cd5a6:	89 d3                	mov    %edx,%ebx
 84cd5a8:	89 c6                	mov    %eax,%esi
 84cd5aa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cd5ad:	89 04 24             	mov    %eax,(%esp)
 84cd5b0:	e8 cb 08 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cd5b5:	89 f0                	mov    %esi,%eax
 84cd5b7:	89 da                	mov    %ebx,%edx
 84cd5b9:	89 04 24             	mov    %eax,(%esp)
 84cd5bc:	e8 8f 61 61 00       	call   8ae3750 <_Unwind_Resume>
 84cd5c1:	89 d8                	mov    %ebx,%eax
 84cd5c3:	83 c4 50             	add    $0x50,%esp
 84cd5c6:	5b                   	pop    %ebx
 84cd5c7:	5e                   	pop    %esi
 84cd5c8:	5d                   	pop    %ebp
 84cd5c9:	c3                   	ret

```

```c
// Inter_MonitorNoticeMemberEnterOk::dispatch_sig @ 0x84cd218

/* Inter_MonitorNoticeMemberEnterOk::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMemberEnterOk::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_34 [12];
  PacketGuard local_28 [12];
  int local_1c;
  size_t local_18;
  size_t local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_1c = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_1c + 0x11)) {
      if (*(char *)(local_1c + 10) == '\x02') {
        PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084cd2ef to 084cd3a2 has its CatchHandler @ 084cd3b8 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x4a);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_1c + 10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_1c + 0xb))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_1c + 0x15));
        local_14 = strlen((char *)(local_1c + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_34,(char *)(local_1c + 0x16),local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
        CUser::Send((CUser *)param_2,local_34);
        PacketGuard::~PacketGuard(local_34);
      }
      else if (*(char *)(local_1c + 10) == '\x03') {
        CUser::Send_SoloPlay_Reject_NotiPack((CUser *)param_2,local_1c + 0x16,1,6);
      }
      else if (*(char *)(local_1c + 10) == '\x04') {
        CUser::Send_SoloPlay_Reject_NotiPack((CUser *)param_2,local_1c + 0x16,0,6);
      }
      else {
        if ((*(char *)(local_1c + 0xb) == '\x01') && (*(char *)(local_1c + 0xc) == '\x01')) {
          CUserCharacInfo::set_connect_upper_member
                    ((CUserCharacInfo *)param_2,*(uint *)(local_1c + 0x35));
          CUserCharacInfo::set_uppermember_exp_level
                    ((CUserCharacInfo *)param_2,*(uchar *)(local_1c + 0x34));
          local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
          if (local_10 != (CParty *)0x0) {
            CParty::send_party_realtime_info(local_10);
          }
        }
        CUserCharacInfo::set_charac_memberkey((CUserCharacInfo *)param_2,*(uint *)(local_1c + 0x11))
        ;
        PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084cd4e0 to 084cd593 has its CatchHandler @ 084cd5a6 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x4a);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 0xb))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 0x15));
        local_18 = strlen((char *)(local_1c + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_18);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_28,(char *)(local_1c + 0x16),local_18);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send((CUser *)param_2,local_28);
        PacketGuard::~PacketGuard(local_28);
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_1c + 0x11);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberEnterOk::dispatch_sig(CUser*, char*, int)",
                 0x288b,
                 "MEMBER : Inter_MonitorNoticeMemberEnterOk::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

