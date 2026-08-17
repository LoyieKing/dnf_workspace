# Dispatcher_UpgradeInventory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822a4bc Dispatcher_UpgradeInventory::dispatch_sig  [0x0822a4bc-0x822a915] ===
 822a4bc:	55                   	push   %ebp
 822a4bd:	89 e5                	mov    %esp,%ebp
 822a4bf:	57                   	push   %edi
 822a4c0:	56                   	push   %esi
 822a4c1:	53                   	push   %ebx
 822a4c2:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 822a4c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a4cb:	89 04 24             	mov    %eax,(%esp)
 822a4ce:	e8 b9 fe ea ff       	call   80da38c <_ZN5CUser9get_stateEv>
 822a4d3:	83 f8 03             	cmp    $0x3,%eax
 822a4d6:	75 0f                	jne    822a4e7 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 822a4d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a4db:	89 04 24             	mov    %eax,(%esp)
 822a4de:	e8 4f 5f ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 822a4e3:	85 c0                	test   %eax,%eax
 822a4e5:	75 07                	jne    822a4ee <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x32>
 822a4e7:	b8 01 00 00 00       	mov    $0x1,%eax
 822a4ec:	eb 05                	jmp    822a4f3 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x37>
 822a4ee:	b8 00 00 00 00       	mov    $0x0,%eax
 822a4f3:	84 c0                	test   %al,%al
 822a4f5:	74 2b                	je     822a522 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x66>
 822a4f7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822a4fe:	00 
 822a4ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822a506:	00 
 822a507:	c7 44 24 04 40 be bc 	movl   $0x8bcbe40,0x4(%esp)
 822a50e:	08 
 822a50f:	c7 04 24 28 e8 00 00 	movl   $0xe828,(%esp)
 822a516:	e8 bc 63 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822a51b:	89 c3                	mov    %eax,%ebx
 822a51d:	e9 e7 03 00 00       	jmp    822a909 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822a522:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 822a527:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 822a52e:	00 
 822a52f:	8b 55 0c             	mov    0xc(%ebp),%edx
 822a532:	89 54 24 04          	mov    %edx,0x4(%esp)
 822a536:	89 04 24             	mov    %eax,(%esp)
 822a539:	e8 c4 e4 05 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 822a53e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 822a541:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 822a545:	74 27                	je     822a56e <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 822a547:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 822a54a:	0f b6 c0             	movzbl %al,%eax
 822a54d:	89 44 24 08          	mov    %eax,0x8(%esp)
 822a551:	c7 44 24 04 af 01 00 	movl   $0x1af,0x4(%esp)
 822a558:	00 
 822a559:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a55c:	89 04 24             	mov    %eax,(%esp)
 822a55f:	e8 de 19 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a564:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a569:	e9 9b 03 00 00       	jmp    822a909 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822a56e:	66 c7 45 e2 00 00    	movw   $0x0,-0x1e(%ebp)
 822a574:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 822a577:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a57b:	8b 45 10             	mov    0x10(%ebp),%eax
 822a57e:	89 04 24             	mov    %eax,(%esp)
 822a581:	e8 3a 2a 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 822a586:	83 f0 01             	xor    $0x1,%eax
 822a589:	84 c0                	test   %al,%al
 822a58b:	74 2b                	je     822a5b8 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0xfc>
 822a58d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822a594:	00 
 822a595:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822a59c:	00 
 822a59d:	c7 44 24 04 40 be bc 	movl   $0x8bcbe40,0x4(%esp)
 822a5a4:	08 
 822a5a5:	c7 04 24 32 e8 00 00 	movl   $0xe832,(%esp)
 822a5ac:	e8 26 63 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 822a5b1:	89 c3                	mov    %eax,%ebx
 822a5b3:	e9 51 03 00 00       	jmp    822a909 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822a5b8:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 822a5bc:	0f bf d8             	movswl %ax,%ebx
 822a5bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a5c2:	89 04 24             	mov    %eax,(%esp)
 822a5c5:	e8 b4 fc ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a5ca:	8d 55 97             	lea    -0x69(%ebp),%edx
 822a5cd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 822a5d1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 822a5d8:	00 
 822a5d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a5dd:	89 14 24             	mov    %edx,(%esp)
 822a5e0:	e8 33 13 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 822a5e5:	83 ec 04             	sub    $0x4,%esp
 822a5e8:	8b 45 9e             	mov    -0x62(%ebp),%eax
 822a5eb:	85 c0                	test   %eax,%eax
 822a5ed:	7f 25                	jg     822a614 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x158>
 822a5ef:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822a5f6:	00 
 822a5f7:	c7 44 24 04 af 01 00 	movl   $0x1af,0x4(%esp)
 822a5fe:	00 
 822a5ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a602:	89 04 24             	mov    %eax,(%esp)
 822a605:	e8 38 19 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a60a:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a60f:	e9 f5 02 00 00       	jmp    822a909 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822a614:	8b 45 99             	mov    -0x67(%ebp),%eax
 822a617:	3d ca 97 28 00       	cmp    $0x2897ca,%eax
 822a61c:	74 2f                	je     822a64d <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x191>
 822a61e:	8b 45 99             	mov    -0x67(%ebp),%eax
 822a621:	3d 3b 20 00 00       	cmp    $0x203b,%eax
 822a626:	74 25                	je     822a64d <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x191>
 822a628:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822a62f:	00 
 822a630:	c7 44 24 04 af 01 00 	movl   $0x1af,0x4(%esp)
 822a637:	00 
 822a638:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a63b:	89 04 24             	mov    %eax,(%esp)
 822a63e:	e8 ff 18 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a643:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a648:	e9 bc 02 00 00       	jmp    822a909 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822a64d:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a650:	89 04 24             	mov    %eax,(%esp)
 822a653:	e8 26 fc ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a658:	89 04 24             	mov    %eax,(%esp)
 822a65b:	e8 9c 30 00 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 822a660:	83 f8 0f             	cmp    $0xf,%eax
 822a663:	0f 9f c0             	setg   %al
 822a666:	84 c0                	test   %al,%al
 822a668:	74 25                	je     822a68f <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x1d3>
 822a66a:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 822a671:	00 
 822a672:	c7 44 24 04 af 01 00 	movl   $0x1af,0x4(%esp)
 822a679:	00 
 822a67a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a67d:	89 04 24             	mov    %eax,(%esp)
 822a680:	e8 bd 18 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a685:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a68a:	e9 7a 02 00 00       	jmp    822a909 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822a68f:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 822a693:	0f bf d8             	movswl %ax,%ebx
 822a696:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a699:	89 04 24             	mov    %eax,(%esp)
 822a69c:	e8 ed fb ea ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 822a6a1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 822a6a8:	00 
 822a6a9:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 822a6b0:	00 
 822a6b1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 822a6b8:	00 
 822a6b9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 822a6bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a6c4:	00 
 822a6c5:	89 04 24             	mov    %eax,(%esp)
 822a6c8:	e8 3f 99 2d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 822a6cd:	83 f0 01             	xor    $0x1,%eax
 822a6d0:	84 c0                	test   %al,%al
 822a6d2:	74 25                	je     822a6f9 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x23d>
 822a6d4:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822a6db:	00 
 822a6dc:	c7 44 24 04 af 01 00 	movl   $0x1af,0x4(%esp)
 822a6e3:	00 
 822a6e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a6e7:	89 04 24             	mov    %eax,(%esp)
 822a6ea:	e8 53 18 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822a6ef:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a6f4:	e9 10 02 00 00       	jmp    822a909 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822a6f9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a6fc:	89 04 24             	mov    %eax,(%esp)
 822a6ff:	e8 48 36 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 822a704:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 822a70b:	00 
 822a70c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 822a713:	00 
 822a714:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a717:	89 04 24             	mov    %eax,(%esp)
 822a71a:	e8 dd 11 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 822a71f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 822a726:	00 
 822a727:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a72a:	89 04 24             	mov    %eax,(%esp)
 822a72d:	e8 ee 11 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 822a732:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a739:	00 
 822a73a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a73d:	89 04 24             	mov    %eax,(%esp)
 822a740:	e8 5f f7 ea ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 822a745:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 822a749:	0f bf d8             	movswl %ax,%ebx
 822a74c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a74f:	89 04 24             	mov    %eax,(%esp)
 822a752:	e8 27 fb ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a757:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 822a75a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 822a75e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 822a762:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a769:	00 
 822a76a:	89 04 24             	mov    %eax,(%esp)
 822a76d:	e8 4a 1f 2d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 822a772:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a779:	00 
 822a77a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a77d:	89 04 24             	mov    %eax,(%esp)
 822a780:	e8 d3 11 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 822a785:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a788:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a78c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a78f:	89 04 24             	mov    %eax,(%esp)
 822a792:	e8 23 de 41 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 822a797:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a79a:	89 04 24             	mov    %eax,(%esp)
 822a79d:	e8 dc fa ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a7a2:	89 04 24             	mov    %eax,(%esp)
 822a7a5:	e8 52 2f 00 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 822a7aa:	8d 58 08             	lea    0x8(%eax),%ebx
 822a7ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a7b0:	89 04 24             	mov    %eax,(%esp)
 822a7b3:	e8 c6 fa ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a7b8:	89 04 24             	mov    %eax,(%esp)
 822a7bb:	e8 3c 2f 00 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 822a7c0:	8b 55 0c             	mov    0xc(%ebp),%edx
 822a7c3:	81 c2 00 97 07 00    	add    $0x79700,%edx
 822a7c9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 822a7d0:	00 
 822a7d1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 822a7d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a7d9:	89 14 24             	mov    %edx,(%esp)
 822a7dc:	e8 db 94 45 00       	call   8683cbc <_ZN15cUserHistoryLog15ExpandInventoryEiii>
 822a7e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a7e4:	89 04 24             	mov    %eax,(%esp)
 822a7e7:	e8 92 fa ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a7ec:	89 04 24             	mov    %eax,(%esp)
 822a7ef:	e8 08 2f 00 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 822a7f4:	8d 58 08             	lea    0x8(%eax),%ebx
 822a7f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a7fa:	89 04 24             	mov    %eax,(%esp)
 822a7fd:	e8 7c fa ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a802:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822a806:	89 04 24             	mov    %eax,(%esp)
 822a809:	e8 e0 2e 00 00       	call   822d6ee <_ZN10CInventory22set_inventory_capacityEi>
 822a80e:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a811:	89 04 24             	mov    %eax,(%esp)
 822a814:	e8 65 fa ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a819:	89 04 24             	mov    %eax,(%esp)
 822a81c:	e8 db 2e 00 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 822a821:	89 c7                	mov    %eax,%edi
 822a823:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a826:	89 04 24             	mov    %eax,(%esp)
 822a829:	e8 20 14 ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 822a82e:	89 c6                	mov    %eax,%esi
 822a830:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a833:	89 04 24             	mov    %eax,(%esp)
 822a836:	e8 5b e4 e9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 822a83b:	89 c3                	mov    %eax,%ebx
 822a83d:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a840:	89 04 24             	mov    %eax,(%esp)
 822a843:	e8 48 14 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 822a848:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 822a84c:	89 74 24 08          	mov    %esi,0x8(%esp)
 822a850:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822a854:	89 04 24             	mov    %eax,(%esp)
 822a857:	e8 b6 a4 21 00       	call   8444d12 <_ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji>
 822a85c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a85f:	89 04 24             	mov    %eax,(%esp)
 822a862:	e8 7f 10 ea ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 822a867:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 822a86e:	00 
 822a86f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 822a876:	00 
 822a877:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a87a:	89 04 24             	mov    %eax,(%esp)
 822a87d:	e8 7a 10 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 822a882:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 822a889:	00 
 822a88a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a88d:	89 04 24             	mov    %eax,(%esp)
 822a890:	e8 0f f6 ea ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 822a895:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a898:	89 04 24             	mov    %eax,(%esp)
 822a89b:	e8 de f9 ea ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 822a8a0:	89 04 24             	mov    %eax,(%esp)
 822a8a3:	e8 54 2e 00 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 822a8a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a8ac:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a8af:	89 04 24             	mov    %eax,(%esp)
 822a8b2:	e8 ed f5 ea ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 822a8b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822a8be:	00 
 822a8bf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a8c2:	89 04 24             	mov    %eax,(%esp)
 822a8c5:	e8 8e 10 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 822a8ca:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a8cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a8d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a8d4:	89 04 24             	mov    %eax,(%esp)
 822a8d7:	e8 de dc 41 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 822a8dc:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a8e1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a8e4:	89 04 24             	mov    %eax,(%esp)
 822a8e7:	e8 94 35 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822a8ec:	eb 1b                	jmp    822a909 <_ZN27Dispatcher_UpgradeInventory12dispatch_sigEP5CUserR9PacketBuf+0x44d>
 822a8ee:	89 d3                	mov    %edx,%ebx
 822a8f0:	89 c6                	mov    %eax,%esi
 822a8f2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 822a8f5:	89 04 24             	mov    %eax,(%esp)
 822a8f8:	e8 83 35 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 822a8fd:	89 f0                	mov    %esi,%eax
 822a8ff:	89 da                	mov    %ebx,%edx
 822a901:	89 04 24             	mov    %eax,(%esp)
 822a904:	e8 47 8e 8b 00       	call   8ae3750 <_Unwind_Resume>
 822a909:	89 d8                	mov    %ebx,%eax
 822a90b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 822a90e:	83 c4 00             	add    $0x0,%esp
 822a911:	5b                   	pop    %ebx
 822a912:	5e                   	pop    %esi
 822a913:	5f                   	pop    %edi
 822a914:	5d                   	pop    %ebp
 822a915:	c3                   	ret

```

```c
// Dispatcher_UpgradeInventory::dispatch_sig @ 0x822a4bc

/* Dispatcher_UpgradeInventory::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpgradeInventory::dispatch_sig
          (Dispatcher_UpgradeInventory *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_6d [2];
  int local_6b;
  int local_66;
  PacketGuard local_30 [14];
  short local_22;
  uint local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0822a4f3;
    }
  }
  bVar1 = true;
LAB_0822a4f3:
  if (bVar1) {
    uVar4 = LineFunc(0xe828,
                     "virtual int Dispatcher_UpgradeInventory::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    local_20 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1d);
    if (local_20 == 0) {
      local_22 = 0;
      cVar2 = PacketBuf::get_short(param_2,&local_22);
      if (cVar2 == '\x01') {
        iVar9 = (int)local_22;
        iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_6d,iVar3);
        if (local_66 < 1) {
          CUser::SendCmdErrorPacket(param_1,0x1af,0x11,iVar9);
          uVar4 = 0;
        }
        else if ((local_6b == 0x2897ca) || (local_6b == 0x203b)) {
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          iVar3 = CInventory::get_inventory_capacity(pCVar5);
          if (iVar3 < 0x10) {
            iVar3 = (int)local_22;
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::delete_item(pCVar5,1,iVar3,1,3,1);
            if (cVar2 == '\x01') {
              PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0822a71a to 0822a8db has its CatchHandler @ 0822a8ee */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xe);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
              iVar3 = (int)local_22;
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              CInventory::MakeItemPacket(pCVar5,1,iVar3,local_30);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
              CUser::Send(param_1,local_30);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar3 = CInventory::get_inventory_capacity(pCVar5);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar9 = CInventory::get_inventory_capacity(pCVar5);
              cUserHistoryLog::ExpandInventory
                        ((cUserHistoryLog *)(param_1 + 0x79700),iVar9,iVar3 + 8,1);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar3 = CInventory::get_inventory_capacity(pCVar5);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              CInventory::set_inventory_capacity(pCVar5,iVar3 + 8);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              uVar4 = CInventory::get_inventory_capacity(pCVar5);
              uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              uVar7 = CUser::GetUID(param_1);
              uVar8 = CUser::GetServerGroup(param_1);
              DB_UpdateInventoryCapacity::makeRequest(uVar8,uVar7,uVar6,uVar4);
              InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x42);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,0xb);
              pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar3 = CInventory::get_inventory_capacity(pCVar5);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,iVar3);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
              CUser::Send(param_1,local_30);
              uVar4 = 0;
              PacketGuard::~PacketGuard(local_30);
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x1af,0x11);
              uVar4 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x1af,0x13,iVar9);
            uVar4 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x1af,0x11,iVar9);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = LineFunc(0xe832,
                         "virtual int Dispatcher_UpgradeInventory::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1af,local_20 & 0xff);
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

