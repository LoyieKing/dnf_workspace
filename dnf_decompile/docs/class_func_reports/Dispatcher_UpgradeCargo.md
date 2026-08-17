# Dispatcher_UpgradeCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822a0a4 Dispatcher_UpgradeCargo::dispatch_sig  [0x0822a0a4-0x822a4bb] ===
 822a0a4:	55                   	push   %ebp
 822a0a5:	89 e5                	mov    %esp,%ebp
 822a0a7:	56                   	push   %esi
 822a0a8:	53                   	push   %ebx
 822a0a9:	83 c4 80             	add    $0xffffff80,%esp
 822a0ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a0af:	89 04 24             	mov    %eax,(%esp)
 822a0b2:	e8 d5 02 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 822a0b7:	83 f8 03             	cmp    $0x3,%eax
 822a0ba:	75 0f                	jne    822a0cb <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x27>
 822a0bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a0bf:	89 04 24             	mov    %eax,(%esp)
 822a0c2:	e8 6b 63 ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 822a0c7:	85 c0                	test   %eax,%eax
 822a0c9:	75 07                	jne    822a0d2 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 822a0cb:	b8 01 00 00 00       	mov    $0x1,%eax
 822a0d0:	eb 05                	jmp    822a0d7 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x33>
 822a0d2:	b8 00 00 00 00       	mov    $0x0,%eax
 822a0d7:	84 c0                	test   %al,%al
 822a0d9:	74 2b                	je     822a106 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x62>
 822a0db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822a0e2:	00 
 822a0e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822a0ea:	00 
 822a0eb:	c7 44 24 04 a0 be bc 	movl   $0x8bcbea0,0x4(%esp)
 822a0f2:	08 
 822a0f3:	c7 04 24 d8 e7 00 00 	movl   $0xe7d8,(%esp)
 822a0fa:	e8 d8 67 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822a0ff:	89 c3                	mov    %eax,%ebx
 822a101:	e9 aa 03 00 00       	jmp    822a4b0 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x40c>
 822a106:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 822a10b:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 822a112:	00 
 822a113:	8b 55 0c             	mov    0xc(%ebp),%edx
 822a116:	89 54 24 04          	mov    %edx,0x4(%esp)
 822a11a:	89 04 24             	mov    %eax,(%esp)
 822a11d:	e8 e0 e8 05 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 822a122:	89 45 f0             	mov    %eax,-0x10(%ebp)
 822a125:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 822a129:	74 27                	je     822a152 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0xae>
 822a12b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 822a12e:	0f b6 c0             	movzbl %al,%eax
 822a131:	89 44 24 08          	mov    %eax,0x8(%esp)
 822a135:	c7 44 24 04 98 01 00 	movl   $0x198,0x4(%esp)
 822a13c:	00 
 822a13d:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a140:	89 04 24             	mov    %eax,(%esp)
 822a143:	e8 fa 1d 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a148:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a14d:	e9 5e 03 00 00       	jmp    822a4b0 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x40c>
 822a152:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 822a158:	8d 45 ee             	lea    -0x12(%ebp),%eax
 822a15b:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a15f:	8b 45 10             	mov    0x10(%ebp),%eax
 822a162:	89 04 24             	mov    %eax,(%esp)
 822a165:	e8 56 2e 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 822a16a:	83 f0 01             	xor    $0x1,%eax
 822a16d:	84 c0                	test   %al,%al
 822a16f:	74 2b                	je     822a19c <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0xf8>
 822a171:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822a178:	00 
 822a179:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822a180:	00 
 822a181:	c7 44 24 04 a0 be bc 	movl   $0x8bcbea0,0x4(%esp)
 822a188:	08 
 822a189:	c7 04 24 e2 e7 00 00 	movl   $0xe7e2,(%esp)
 822a190:	e8 42 67 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822a195:	89 c3                	mov    %eax,%ebx
 822a197:	e9 14 03 00 00       	jmp    822a4b0 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x40c>
 822a19c:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 822a1a0:	0f bf d8             	movswl %ax,%ebx
 822a1a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a1a6:	89 04 24             	mov    %eax,(%esp)
 822a1a9:	e8 d0 00 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a1ae:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 822a1b1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 822a1b5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 822a1bc:	00 
 822a1bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a1c1:	89 14 24             	mov    %edx,(%esp)
 822a1c4:	e8 4f 17 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 822a1c9:	83 ec 04             	sub    $0x4,%esp
 822a1cc:	8b 45 aa             	mov    -0x56(%ebp),%eax
 822a1cf:	85 c0                	test   %eax,%eax
 822a1d1:	7f 25                	jg     822a1f8 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x154>
 822a1d3:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822a1da:	00 
 822a1db:	c7 44 24 04 98 01 00 	movl   $0x198,0x4(%esp)
 822a1e2:	00 
 822a1e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a1e6:	89 04 24             	mov    %eax,(%esp)
 822a1e9:	e8 54 1d 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a1ee:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a1f3:	e9 b8 02 00 00       	jmp    822a4b0 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x40c>
 822a1f8:	8b 45 a5             	mov    -0x5b(%ebp),%eax
 822a1fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 822a1ff:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 822a206:	00 
 822a207:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a20a:	89 04 24             	mov    %eax,(%esp)
 822a20d:	e8 aa 54 46 00       	call   868f6bc <_ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEj>
 822a212:	83 f0 01             	xor    $0x1,%eax
 822a215:	84 c0                	test   %al,%al
 822a217:	74 25                	je     822a23e <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x19a>
 822a219:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822a220:	00 
 822a221:	c7 44 24 04 98 01 00 	movl   $0x198,0x4(%esp)
 822a228:	00 
 822a229:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a22c:	89 04 24             	mov    %eax,(%esp)
 822a22f:	e8 0e 1d 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a234:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a239:	e9 72 02 00 00       	jmp    822a4b0 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x40c>
 822a23e:	c7 45 f4 10 00 00 00 	movl   $0x10,-0xc(%ebp)
 822a245:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a248:	89 04 24             	mov    %eax,(%esp)
 822a24b:	e8 34 78 f2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 822a250:	89 04 24             	mov    %eax,(%esp)
 822a253:	e8 b0 34 00 00       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 822a258:	89 c3                	mov    %eax,%ebx
 822a25a:	03 5d f4             	add    -0xc(%ebp),%ebx
 822a25d:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a260:	89 04 24             	mov    %eax,(%esp)
 822a263:	e8 1c 78 f2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 822a268:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822a26c:	89 04 24             	mov    %eax,(%esp)
 822a26f:	e8 24 24 2e 00       	call   850c698 <_ZNK6CCargo12isUpgradableEi>
 822a274:	83 f0 01             	xor    $0x1,%eax
 822a277:	84 c0                	test   %al,%al
 822a279:	74 25                	je     822a2a0 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x1fc>
 822a27b:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 822a282:	00 
 822a283:	c7 44 24 04 98 01 00 	movl   $0x198,0x4(%esp)
 822a28a:	00 
 822a28b:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a28e:	89 04 24             	mov    %eax,(%esp)
 822a291:	e8 ac 1c 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a296:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a29b:	e9 10 02 00 00       	jmp    822a4b0 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x40c>
 822a2a0:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 822a2a4:	0f bf d8             	movswl %ax,%ebx
 822a2a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a2aa:	89 04 24             	mov    %eax,(%esp)
 822a2ad:	e8 dc ff ea ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 822a2b2:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 822a2b9:	00 
 822a2ba:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 822a2c1:	00 
 822a2c2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 822a2c9:	00 
 822a2ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 822a2ce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a2d5:	00 
 822a2d6:	89 04 24             	mov    %eax,(%esp)
 822a2d9:	e8 2e 9d 2d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 822a2de:	83 f0 01             	xor    $0x1,%eax
 822a2e1:	84 c0                	test   %al,%al
 822a2e3:	74 25                	je     822a30a <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x266>
 822a2e5:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822a2ec:	00 
 822a2ed:	c7 44 24 04 98 01 00 	movl   $0x198,0x4(%esp)
 822a2f4:	00 
 822a2f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a2f8:	89 04 24             	mov    %eax,(%esp)
 822a2fb:	e8 42 1c 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a300:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a305:	e9 a6 01 00 00       	jmp    822a4b0 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x40c>
 822a30a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a30d:	89 04 24             	mov    %eax,(%esp)
 822a310:	e8 37 3a 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 822a315:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 822a31c:	00 
 822a31d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 822a324:	00 
 822a325:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a328:	89 04 24             	mov    %eax,(%esp)
 822a32b:	e8 cc 15 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 822a330:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 822a337:	00 
 822a338:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a33b:	89 04 24             	mov    %eax,(%esp)
 822a33e:	e8 dd 15 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 822a343:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a34a:	00 
 822a34b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a34e:	89 04 24             	mov    %eax,(%esp)
 822a351:	e8 4e fb ea ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 822a356:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 822a35a:	0f bf d8             	movswl %ax,%ebx
 822a35d:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a360:	89 04 24             	mov    %eax,(%esp)
 822a363:	e8 16 ff ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a368:	8d 55 e0             	lea    -0x20(%ebp),%edx
 822a36b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 822a36f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 822a373:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a37a:	00 
 822a37b:	89 04 24             	mov    %eax,(%esp)
 822a37e:	e8 39 23 2d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 822a383:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a38a:	00 
 822a38b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a38e:	89 04 24             	mov    %eax,(%esp)
 822a391:	e8 c2 15 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 822a396:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a399:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a39d:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a3a0:	89 04 24             	mov    %eax,(%esp)
 822a3a3:	e8 12 e2 41 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 822a3a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a3ab:	89 04 24             	mov    %eax,(%esp)
 822a3ae:	e8 d1 76 f2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 822a3b3:	89 04 24             	mov    %eax,(%esp)
 822a3b6:	e8 4d 33 00 00       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 822a3bb:	89 c3                	mov    %eax,%ebx
 822a3bd:	03 5d f4             	add    -0xc(%ebp),%ebx
 822a3c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a3c3:	89 04 24             	mov    %eax,(%esp)
 822a3c6:	e8 c9 76 f2 ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 822a3cb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822a3cf:	89 04 24             	mov    %eax,(%esp)
 822a3d2:	e8 7f 22 2e 00       	call   850c656 <_ZN6CCargo12UpgradeCargoEi>
 822a3d7:	83 f0 01             	xor    $0x1,%eax
 822a3da:	84 c0                	test   %al,%al
 822a3dc:	74 25                	je     822a403 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x35f>
 822a3de:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 822a3e5:	00 
 822a3e6:	c7 44 24 04 98 01 00 	movl   $0x198,0x4(%esp)
 822a3ed:	00 
 822a3ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a3f1:	89 04 24             	mov    %eax,(%esp)
 822a3f4:	e8 49 1b 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a3f9:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a3fe:	e9 a2 00 00 00       	jmp    822a4a5 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x401>
 822a403:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a406:	89 04 24             	mov    %eax,(%esp)
 822a409:	e8 d8 14 ea ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 822a40e:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 822a415:	00 
 822a416:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 822a41d:	00 
 822a41e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a421:	89 04 24             	mov    %eax,(%esp)
 822a424:	e8 d3 14 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 822a429:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a430:	00 
 822a431:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a434:	89 04 24             	mov    %eax,(%esp)
 822a437:	e8 68 fa ea ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 822a43c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a43f:	89 04 24             	mov    %eax,(%esp)
 822a442:	e8 3d 76 f2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 822a447:	89 04 24             	mov    %eax,(%esp)
 822a44a:	e8 b9 32 00 00       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 822a44f:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a453:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a456:	89 04 24             	mov    %eax,(%esp)
 822a459:	e8 46 fa ea ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 822a45e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a465:	00 
 822a466:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a469:	89 04 24             	mov    %eax,(%esp)
 822a46c:	e8 e7 14 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 822a471:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a474:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a478:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a47b:	89 04 24             	mov    %eax,(%esp)
 822a47e:	e8 37 e1 41 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 822a483:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a488:	eb 1b                	jmp    822a4a5 <_ZN23Dispatcher_UpgradeCargo12dispatch_sigEP5CUserR9PacketBuf+0x401>
 822a48a:	89 d3                	mov    %edx,%ebx
 822a48c:	89 c6                	mov    %eax,%esi
 822a48e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a491:	89 04 24             	mov    %eax,(%esp)
 822a494:	e8 e7 39 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822a499:	89 f0                	mov    %esi,%eax
 822a49b:	89 da                	mov    %ebx,%edx
 822a49d:	89 04 24             	mov    %eax,(%esp)
 822a4a0:	e8 ab 92 8b 00       	call   8ae3750 <_Unwind_Resume>
 822a4a5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 822a4a8:	89 04 24             	mov    %eax,(%esp)
 822a4ab:	e8 d0 39 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822a4b0:	89 d8                	mov    %ebx,%eax
 822a4b2:	8d 65 f8             	lea    -0x8(%ebp),%esp
 822a4b5:	83 c4 00             	add    $0x0,%esp
 822a4b8:	5b                   	pop    %ebx
 822a4b9:	5e                   	pop    %esi
 822a4ba:	5d                   	pop    %ebp
 822a4bb:	c3                   	ret

```

```c
// Dispatcher_UpgradeCargo::dispatch_sig @ 0x822a0a4

/* Dispatcher_UpgradeCargo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpgradeCargo::dispatch_sig
          (Dispatcher_UpgradeCargo *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CCargo *pCVar5;
  CInventory *pCVar6;
  int iVar7;
  undefined1 local_61 [2];
  undefined4 local_5f;
  int local_5a;
  PacketGuard local_24 [14];
  short local_16;
  uint local_14;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0822a0d7;
    }
  }
  bVar1 = true;
LAB_0822a0d7:
  if (bVar1) {
    uVar4 = LineFunc(0xe7d8,"virtual int Dispatcher_UpgradeCargo::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1d);
    if (local_14 == 0) {
      local_16 = 0;
      cVar2 = PacketBuf::get_short(param_2,&local_16);
      if (cVar2 == '\x01') {
        iVar7 = (int)local_16;
        iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_61,iVar3);
        if (local_5a < 1) {
          CUser::SendCmdErrorPacket(param_1,0x198,0x11);
          uVar4 = 0;
        }
        else {
          cVar2 = CUser::verifyStackableItemActionPlace(param_1,0x2b,local_5f,iVar7);
          if (cVar2 == '\x01') {
            local_10 = 0x10;
            pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
            iVar3 = CCargo::GetCapacity(pCVar5);
            iVar3 = iVar3 + local_10;
            pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
            cVar2 = CCargo::isUpgradable(pCVar5,iVar3);
            if (cVar2 == '\x01') {
              iVar3 = (int)local_16;
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar2 = CInventory::delete_item(pCVar6,1,iVar3,1,3,1);
              if (cVar2 == '\x01') {
                PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0822a32b to 0822a482 has its CatchHandler @ 0822a48a */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xe);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
                iVar3 = (int)local_16;
                pCVar6 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                CInventory::MakeItemPacket(pCVar6,1,iVar3,local_24);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
                CUser::Send(param_1,local_24);
                pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
                iVar3 = CCargo::GetCapacity(pCVar5);
                iVar3 = iVar3 + local_10;
                pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
                cVar2 = CCargo::UpgradeCargo(pCVar5,iVar3);
                if (cVar2 == '\x01') {
                  InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x42);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
                  pCVar5 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1)
                  ;
                  iVar3 = CCargo::GetCapacity(pCVar5);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,iVar3);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
                  CUser::Send(param_1,local_24);
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,0x198,0x13);
                }
                uVar4 = 0;
                PacketGuard::~PacketGuard(local_24);
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x198,0x11);
                uVar4 = 0;
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x198,0x13);
              uVar4 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x198,0x11);
            uVar4 = 0;
          }
        }
      }
      else {
        uVar4 = LineFunc(0xe7e2,
                         "virtual int Dispatcher_UpgradeCargo::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x198,local_14 & 0xff);
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

