# DispatcherResetRandomOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081dd2be DispatcherResetRandomOption::process  [0x081dd2be-0x81dd7e9] ===
 81dd2be:	55                   	push   %ebp
 81dd2bf:	89 e5                	mov    %esp,%ebp
 81dd2c1:	57                   	push   %edi
 81dd2c2:	56                   	push   %esi
 81dd2c3:	53                   	push   %ebx
 81dd2c4:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 81dd2ca:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd2cd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81dd2d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd2d3:	89 04 24             	mov    %eax,(%esp)
 81dd2d6:	e8 b1 d0 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dd2db:	83 f8 03             	cmp    $0x3,%eax
 81dd2de:	75 0f                	jne    81dd2ef <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 81dd2e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd2e3:	89 04 24             	mov    %eax,(%esp)
 81dd2e6:	e8 47 31 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81dd2eb:	85 c0                	test   %eax,%eax
 81dd2ed:	75 07                	jne    81dd2f6 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x38>
 81dd2ef:	b8 01 00 00 00       	mov    $0x1,%eax
 81dd2f4:	eb 05                	jmp    81dd2fb <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x3d>
 81dd2f6:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd2fb:	84 c0                	test   %al,%al
 81dd2fd:	74 0a                	je     81dd309 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x4b>
 81dd2ff:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd304:	e9 d5 04 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd309:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd30c:	89 04 24             	mov    %eax,(%esp)
 81dd30f:	e8 ea cf ef ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81dd314:	84 c0                	test   %al,%al
 81dd316:	74 0a                	je     81dd322 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x64>
 81dd318:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd31d:	e9 bc 04 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd322:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dd325:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81dd329:	0f b7 c0             	movzwl %ax,%eax
 81dd32c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dd330:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd337:	00 
 81dd338:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd33b:	89 04 24             	mov    %eax,(%esp)
 81dd33e:	e8 ff 95 46 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81dd343:	84 c0                	test   %al,%al
 81dd345:	74 25                	je     81dd36c <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0xae>
 81dd347:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81dd34e:	00 
 81dd34f:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd356:	00 
 81dd357:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd35a:	89 04 24             	mov    %eax,(%esp)
 81dd35d:	e8 e0 eb 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd362:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd367:	e9 72 04 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd36c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dd36f:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81dd373:	0f b7 d8             	movzwl %ax,%ebx
 81dd376:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd379:	89 04 24             	mov    %eax,(%esp)
 81dd37c:	e8 0d cf ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81dd381:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81dd385:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd38c:	00 
 81dd38d:	89 04 24             	mov    %eax,(%esp)
 81dd390:	e8 19 ef 31 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 81dd395:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81dd398:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81dd39c:	0f 94 c0             	sete   %al
 81dd39f:	84 c0                	test   %al,%al
 81dd3a1:	74 25                	je     81dd3c8 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x10a>
 81dd3a3:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81dd3aa:	00 
 81dd3ab:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd3b2:	00 
 81dd3b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd3b6:	89 04 24             	mov    %eax,(%esp)
 81dd3b9:	e8 84 eb 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd3be:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd3c3:	e9 16 04 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd3c8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dd3cb:	8b 40 02             	mov    0x2(%eax),%eax
 81dd3ce:	89 c3                	mov    %eax,%ebx
 81dd3d0:	e8 c6 ed ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81dd3d5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dd3d9:	89 04 24             	mov    %eax,(%esp)
 81dd3dc:	e8 51 26 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81dd3e1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81dd3e4:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81dd3e8:	75 25                	jne    81dd40f <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x151>
 81dd3ea:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81dd3f1:	00 
 81dd3f2:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd3f9:	00 
 81dd3fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd3fd:	89 04 24             	mov    %eax,(%esp)
 81dd400:	e8 3d eb 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd405:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd40a:	e9 cf 03 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd40f:	e8 d2 51 f8 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81dd414:	c7 44 24 0c 0f 00 00 	movl   $0xf,0xc(%esp)
 81dd41b:	00 
 81dd41c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81dd423:	00 
 81dd424:	8b 55 0c             	mov    0xc(%ebp),%edx
 81dd427:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dd42b:	89 04 24             	mov    %eax,(%esp)
 81dd42e:	e8 85 12 f9 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81dd433:	84 c0                	test   %al,%al
 81dd435:	74 25                	je     81dd45c <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x19e>
 81dd437:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 81dd43e:	00 
 81dd43f:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd446:	00 
 81dd447:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd44a:	89 04 24             	mov    %eax,(%esp)
 81dd44d:	e8 f0 ea 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd452:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd457:	e9 82 03 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd45c:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81dd461:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 81dd468:	00 
 81dd469:	8b 55 0c             	mov    0xc(%ebp),%edx
 81dd46c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dd470:	89 04 24             	mov    %eax,(%esp)
 81dd473:	e8 8a b5 0a 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81dd478:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81dd47b:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81dd47f:	74 27                	je     81dd4a8 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x1ea>
 81dd481:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81dd484:	0f b6 c0             	movzbl %al,%eax
 81dd487:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dd48b:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd492:	00 
 81dd493:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd496:	89 04 24             	mov    %eax,(%esp)
 81dd499:	e8 a4 ea 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd49e:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd4a3:	e9 36 03 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd4a8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dd4ab:	83 c0 25             	add    $0x25,%eax
 81dd4ae:	89 04 24             	mov    %eax,(%esp)
 81dd4b1:	e8 1a d7 04 00       	call   822abd0 <_ZN12RandomOption5emptyEv>
 81dd4b6:	84 c0                	test   %al,%al
 81dd4b8:	74 25                	je     81dd4df <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x221>
 81dd4ba:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81dd4c1:	00 
 81dd4c2:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd4c9:	00 
 81dd4ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd4cd:	89 04 24             	mov    %eax,(%esp)
 81dd4d0:	e8 6d ea 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd4d5:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd4da:	e9 ff 02 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd4df:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dd4e2:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 81dd4e6:	0f b6 c0             	movzbl %al,%eax
 81dd4e9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81dd4ec:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81dd4f0:	78 06                	js     81dd4f8 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x23a>
 81dd4f2:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 81dd4f6:	7e 25                	jle    81dd51d <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x25f>
 81dd4f8:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81dd4ff:	00 
 81dd500:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd507:	00 
 81dd508:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd50b:	89 04 24             	mov    %eax,(%esp)
 81dd50e:	e8 2f ea 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd513:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd518:	e9 c1 02 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd51d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dd520:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81dd524:	0f b7 d8             	movzwl %ax,%ebx
 81dd527:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd52a:	89 04 24             	mov    %eax,(%esp)
 81dd52d:	e8 4c cd ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81dd532:	8d 55 93             	lea    -0x6d(%ebp),%edx
 81dd535:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81dd539:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81dd540:	00 
 81dd541:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd545:	89 14 24             	mov    %edx,(%esp)
 81dd548:	e8 cb e3 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81dd54d:	83 ec 04             	sub    $0x4,%esp
 81dd550:	8b 45 9a             	mov    -0x66(%ebp),%eax
 81dd553:	85 c0                	test   %eax,%eax
 81dd555:	7f 25                	jg     81dd57c <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2be>
 81dd557:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 81dd55e:	00 
 81dd55f:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd566:	00 
 81dd567:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd56a:	89 04 24             	mov    %eax,(%esp)
 81dd56d:	e8 d0 e9 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd572:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd577:	e9 62 02 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd57c:	8b 45 95             	mov    -0x6b(%ebp),%eax
 81dd57f:	83 f8 0f             	cmp    $0xf,%eax
 81dd582:	74 39                	je     81dd5bd <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2ff>
 81dd584:	8b 45 95             	mov    -0x6b(%ebp),%eax
 81dd587:	3d 81 03 00 00       	cmp    $0x381,%eax
 81dd58c:	74 2f                	je     81dd5bd <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2ff>
 81dd58e:	8b 45 95             	mov    -0x6b(%ebp),%eax
 81dd591:	3d f2 90 20 29       	cmp    $0x292090f2,%eax
 81dd596:	74 25                	je     81dd5bd <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2ff>
 81dd598:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 81dd59f:	00 
 81dd5a0:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd5a7:	00 
 81dd5a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd5ab:	89 04 24             	mov    %eax,(%esp)
 81dd5ae:	e8 8f e9 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd5b3:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd5b8:	e9 21 02 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd5bd:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81dd5c4:	b8 c8 a2 40 09       	mov    $0x940a2c8,%eax
 81dd5c9:	0f b6 00             	movzbl (%eax),%eax
 81dd5cc:	84 c0                	test   %al,%al
 81dd5ce:	75 71                	jne    81dd641 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x383>
 81dd5d0:	c7 04 24 c8 a2 40 09 	movl   $0x940a2c8,(%esp)
 81dd5d7:	e8 54 7d 54 00       	call   8725330 <__cxa_guard_acquire>
 81dd5dc:	85 c0                	test   %eax,%eax
 81dd5de:	0f 95 c0             	setne  %al
 81dd5e1:	84 c0                	test   %al,%al
 81dd5e3:	74 5c                	je     81dd641 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x383>
 81dd5e5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dd5ea:	c7 04 24 c8 b4 40 09 	movl   $0x940b4c8,(%esp)
 81dd5f1:	e8 6e 37 41 00       	call   85f0d64 <_ZN13random_option23CRandomOptionItemHandleC1Ev>
 81dd5f6:	c7 04 24 c8 a2 40 09 	movl   $0x940a2c8,(%esp)
 81dd5fd:	e8 4e 7c 54 00       	call   8725250 <__cxa_guard_release>
 81dd602:	b8 46 0e 5f 08       	mov    $0x85f0e46,%eax
 81dd607:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 81dd60e:	08 
 81dd60f:	c7 44 24 04 c8 b4 40 	movl   $0x940b4c8,0x4(%esp)
 81dd616:	09 
 81dd617:	89 04 24             	mov    %eax,(%esp)
 81dd61a:	e8 b1 07 ea ff       	call   807ddd0 <__cxa_atexit@plt>
 81dd61f:	eb 20                	jmp    81dd641 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x383>
 81dd621:	89 d6                	mov    %edx,%esi
 81dd623:	89 c7                	mov    %eax,%edi
 81dd625:	84 db                	test   %bl,%bl
 81dd627:	75 0c                	jne    81dd635 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x377>
 81dd629:	c7 04 24 c8 a2 40 09 	movl   $0x940a2c8,(%esp)
 81dd630:	e8 8b 7c 54 00       	call   87252c0 <__cxa_guard_abort>
 81dd635:	89 f8                	mov    %edi,%eax
 81dd637:	89 f2                	mov    %esi,%edx
 81dd639:	89 04 24             	mov    %eax,(%esp)
 81dd63c:	e8 0f 61 90 00       	call   8ae3750 <_Unwind_Resume>
 81dd641:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dd644:	8d 58 25             	lea    0x25(%eax),%ebx
 81dd647:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dd64a:	89 04 24             	mov    %eax,(%esp)
 81dd64d:	e8 84 3c f1 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 81dd652:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81dd655:	8b 52 02             	mov    0x2(%edx),%edx
 81dd658:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81dd65c:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 81dd65f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81dd663:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dd667:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dd66b:	c7 04 24 c8 b4 40 09 	movl   $0x940b4c8,(%esp)
 81dd672:	e8 5b 63 41 00       	call   85f39d2 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption>
 81dd677:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81dd67a:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81dd67e:	0f 95 c0             	setne  %al
 81dd681:	84 c0                	test   %al,%al
 81dd683:	74 27                	je     81dd6ac <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x3ee>
 81dd685:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81dd688:	0f b6 c0             	movzbl %al,%eax
 81dd68b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dd68f:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd696:	00 
 81dd697:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd69a:	89 04 24             	mov    %eax,(%esp)
 81dd69d:	e8 a0 e8 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd6a2:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd6a7:	e9 32 01 00 00       	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd6ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd6af:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 81dd6b5:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 81dd6bc:	00 
 81dd6bd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dd6c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd6c4:	89 14 24             	mov    %edx,(%esp)
 81dd6c7:	e8 6e 56 4a 00       	call   8682d3a <_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE>
 81dd6cc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81dd6d3:	e8 86 6d 05 00       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 81dd6d8:	89 c3                	mov    %eax,%ebx
 81dd6da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd6dd:	89 04 24             	mov    %eax,(%esp)
 81dd6e0:	e8 bb 1c 05 00       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 81dd6e5:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81dd6e9:	89 44 24 14          	mov    %eax,0x14(%esp)
 81dd6ed:	c7 44 24 10 cc 18 bc 	movl   $0x8bc18cc,0x10(%esp)
 81dd6f4:	08 
 81dd6f5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81dd6fc:	00 
 81dd6fd:	c7 44 24 08 75 1a bc 	movl   $0x8bc1a75,0x8(%esp)
 81dd704:	08 
 81dd705:	c7 44 24 04 de 18 bc 	movl   $0x8bc18de,0x4(%esp)
 81dd70c:	08 
 81dd70d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd710:	89 04 24             	mov    %eax,(%esp)
 81dd713:	e8 ba 26 43 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 81dd718:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dd71b:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81dd71f:	0f b7 d8             	movzwl %ax,%ebx
 81dd722:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd725:	89 04 24             	mov    %eax,(%esp)
 81dd728:	e8 61 cb ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81dd72d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81dd734:	00 
 81dd735:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81dd73c:	00 
 81dd73d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dd741:	89 04 24             	mov    %eax,(%esp)
 81dd744:	e8 95 21 32 00       	call   84ff8de <_ZN10CInventory8use_itemEiii>
 81dd749:	85 c0                	test   %eax,%eax
 81dd74b:	0f 95 c0             	setne  %al
 81dd74e:	84 c0                	test   %al,%al
 81dd750:	74 22                	je     81dd774 <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x4b6>
 81dd752:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81dd759:	00 
 81dd75a:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd761:	00 
 81dd762:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd765:	89 04 24             	mov    %eax,(%esp)
 81dd768:	e8 d5 e7 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd76d:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd772:	eb 6a                	jmp    81dd7de <_ZN27DispatcherResetRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x520>
 81dd774:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dd777:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81dd77b:	0f b7 c0             	movzwl %ax,%eax
 81dd77e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81dd782:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd789:	00 
 81dd78a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd791:	00 
 81dd792:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd795:	89 04 24             	mov    %eax,(%esp)
 81dd798:	e8 3b eb 49 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81dd79d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dd7a0:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81dd7a4:	0f b7 c0             	movzwl %ax,%eax
 81dd7a7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81dd7ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd7b2:	00 
 81dd7b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dd7ba:	00 
 81dd7bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd7be:	89 04 24             	mov    %eax,(%esp)
 81dd7c1:	e8 12 eb 49 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81dd7c6:	c7 44 24 04 c8 01 00 	movl   $0x1c8,0x4(%esp)
 81dd7cd:	00 
 81dd7ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd7d1:	89 04 24             	mov    %eax,(%esp)
 81dd7d4:	e8 c7 e6 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81dd7d9:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd7de:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81dd7e1:	83 c4 00             	add    $0x0,%esp
 81dd7e4:	5b                   	pop    %ebx
 81dd7e5:	5e                   	pop    %esi
 81dd7e6:	5f                   	pop    %edi
 81dd7e7:	5d                   	pop    %ebp
 81dd7e8:	c3                   	ret
 81dd7e9:	90                   	nop

```

```c
// DispatcherResetRandomOption::process @ 0x81dd2be

/* DispatcherResetRandomOption::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 DispatcherResetRandomOption::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CInventory *pCVar5;
  CDataManager *this;
  ServiceRestrictManager *pSVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 local_71 [2];
  int local_6f;
  int local_6a;
  ParamBase *local_34;
  int local_30;
  CItem *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  
  local_34 = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar2) && (cVar3 = CUser::CheckInTrade((CUser *)param_2), cVar3 == '\0')) {
    cVar3 = CUser::CheckItemLock((CUser *)param_2,1,(uint)*(ushort *)(local_34 + 0xe));
    if (cVar3 == '\0') {
      uVar1 = *(ushort *)(local_34 + 0xe);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_30 = CInventory::GetInvenRef(pCVar5,1,(uint)uVar1);
      if (local_30 == 0) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x11);
      }
      else {
        iVar4 = *(int *)(local_30 + 2);
        this = (CDataManager *)G_CDataManager();
        local_2c = (CItem *)CDataManager::find_item(this,iVar4);
        if (local_2c == (CItem *)0x0) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x11);
        }
        else {
          pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar3 = ServiceRestrictManager::isRestricted(pSVar6,param_2,1,0xf);
          if (cVar3 == '\0') {
            local_28 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x26)
            ;
            if (local_28 == 0) {
              cVar3 = RandomOption::empty((RandomOption *)(local_30 + 0x25));
              if (cVar3 == '\0') {
                local_24 = (uint)(byte)local_34[0x12];
                if (local_24 < 3) {
                  uVar8 = (uint)*(ushort *)(local_34 + 0x10);
                  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
                  uVar9 = 1;
                  CInventory::GetInvenSlot((int)local_71,iVar4);
                  if (local_6a < 1) {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x15);
                  }
                  else if (((local_6f == 0xf) || (local_6f == 0x381)) || (local_6f == 0x292090f2)) {
                    local_20 = 0;
                    if ((process(CUser*,MSG_BASE&,ParamBase&)::handle == '\0') &&
                       (iVar4 = __cxa_guard_acquire(&process(CUser*,MSG_BASE&,ParamBase&)::handle,
                                                    iVar4,uVar9,uVar8), iVar4 != 0)) {
                    /* try { // try from 081dd5f1 to 081dd5f5 has its CatchHandler @ 081dd621 */
                      random_option::CRandomOptionItemHandle::CRandomOptionItemHandle
                                ((CRandomOptionItemHandle *)
                                 process(CUser*,MSG_BASE&,ParamBase&)::handle);
                      __cxa_guard_release(&process(CUser*,MSG_BASE&,ParamBase&)::handle);
                      __cxa_atexit(random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle,
                                   process(CUser*,MSG_BASE&,ParamBase&)::handle,&__dso_handle);
                    }
                    iVar4 = local_30 + 0x25;
                    uVar9 = CItem::get_rarity(local_2c);
                    local_20 = random_option::CRandomOptionItemHandle::reset_option
                                         ((CRandomOptionItemHandle *)
                                          process(CUser*,MSG_BASE&,ParamBase&)::handle,
                                          *(undefined4 *)(local_30 + 2),uVar9,local_24,iVar4);
                    if (local_20 == 0) {
                      cUserHistoryLog::RandomOption
                                ((cUserHistoryLog *)(param_2 + 0x79700),local_30,3);
                      uVar9 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
                      uVar7 = CUserCharacInfo::get_charac_10_level_section
                                        ((CUserCharacInfo *)param_2);
                      statistc_proxy::add((CUser *)param_2,"log_random_option","reset_cnt",1,
                                          "%d,\'%s\'",uVar7,uVar9);
                      uVar1 = *(ushort *)(local_34 + 0x10);
                      pCVar5 = (CInventory *)
                               CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
                      iVar4 = CInventory::use_item(pCVar5,(uint)uVar1,1,1);
                      if (iVar4 == 0) {
                        CUser::SendUpdateItem((CUser *)param_2,1,0,*(undefined2 *)(local_34 + 0xe));
                        CUser::SendUpdateItem((CUser *)param_2,1,0,*(undefined2 *)(local_34 + 0x10))
                        ;
                        CUser::SendCmdOkPacket((CUser *)param_2,0x1c8);
                      }
                      else {
                        CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x16);
                      }
                    }
                    else {
                      CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,local_20 & 0xff);
                    }
                  }
                  else {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x15);
                  }
                }
                else {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x13);
                }
              }
              else {
                CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0x13);
              }
            }
            else {
              CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,local_28 & 0xff);
            }
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0xd1);
          }
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x1c8,0xd5);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081dd1e2 DispatcherResetRandomOption::read  [0x081dd1e2-0x81dd2bd] ===
 81dd1e2:	55                   	push   %ebp
 81dd1e3:	89 e5                	mov    %esp,%ebp
 81dd1e5:	83 ec 28             	sub    $0x28,%esp
 81dd1e8:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd1eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dd1ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dd1f1:	83 c0 0e             	add    $0xe,%eax
 81dd1f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd1f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd1fb:	89 04 24             	mov    %eax,(%esp)
 81dd1fe:	e8 ad fe 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81dd203:	83 f0 01             	xor    $0x1,%eax
 81dd206:	84 c0                	test   %al,%al
 81dd208:	74 29                	je     81dd233 <_ZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASE+0x51>
 81dd20a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dd211:	00 
 81dd212:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd219:	00 
 81dd21a:	c7 44 24 04 40 1f bd 	movl   $0x8bd1f40,0x4(%esp)
 81dd221:	08 
 81dd222:	c7 04 24 b2 4d 00 00 	movl   $0x4db2,(%esp)
 81dd229:	e8 a9 36 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dd22e:	e9 89 00 00 00       	jmp    81dd2bc <_ZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASE+0xda>
 81dd233:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dd236:	83 c0 10             	add    $0x10,%eax
 81dd239:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd23d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd240:	89 04 24             	mov    %eax,(%esp)
 81dd243:	e8 68 fe 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81dd248:	83 f0 01             	xor    $0x1,%eax
 81dd24b:	84 c0                	test   %al,%al
 81dd24d:	74 26                	je     81dd275 <_ZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASE+0x93>
 81dd24f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dd256:	00 
 81dd257:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd25e:	00 
 81dd25f:	c7 44 24 04 40 1f bd 	movl   $0x8bd1f40,0x4(%esp)
 81dd266:	08 
 81dd267:	c7 04 24 b5 4d 00 00 	movl   $0x4db5,(%esp)
 81dd26e:	e8 64 36 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dd273:	eb 47                	jmp    81dd2bc <_ZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASE+0xda>
 81dd275:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dd278:	83 c0 12             	add    $0x12,%eax
 81dd27b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd27f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd282:	89 04 24             	mov    %eax,(%esp)
 81dd285:	e8 e6 fc 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81dd28a:	83 f0 01             	xor    $0x1,%eax
 81dd28d:	84 c0                	test   %al,%al
 81dd28f:	74 26                	je     81dd2b7 <_ZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASE+0xd5>
 81dd291:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dd298:	00 
 81dd299:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dd2a0:	00 
 81dd2a1:	c7 44 24 04 40 1f bd 	movl   $0x8bd1f40,0x4(%esp)
 81dd2a8:	08 
 81dd2a9:	c7 04 24 b8 4d 00 00 	movl   $0x4db8,(%esp)
 81dd2b0:	e8 22 36 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dd2b5:	eb 05                	jmp    81dd2bc <_ZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASE+0xda>
 81dd2b7:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd2bc:	c9                   	leave
 81dd2bd:	c3                   	ret

```

```c
// DispatcherResetRandomOption::read @ 0x81dd1e2

/* DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DispatcherResetRandomOption::read
          (DispatcherResetRandomOption *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x4db8,
                         "virtual int DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x4db5,"virtual int DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x4db2,"virtual int DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

