# Dispatcher_UseSharedEffectItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08220484 Dispatcher_UseSharedEffectItem::dispatch_sig  [0x08220484-0x8220855] ===
 8220484:	55                   	push   %ebp
 8220485:	89 e5                	mov    %esp,%ebp
 8220487:	56                   	push   %esi
 8220488:	53                   	push   %ebx
 8220489:	83 c4 80             	add    $0xffffff80,%esp
 822048c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8220493:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 8220499:	8d 45 e8             	lea    -0x18(%ebp),%eax
 822049c:	89 44 24 04          	mov    %eax,0x4(%esp)
 82204a0:	8b 45 10             	mov    0x10(%ebp),%eax
 82204a3:	89 04 24             	mov    %eax,(%esp)
 82204a6:	e8 45 cc 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82204ab:	83 f0 01             	xor    $0x1,%eax
 82204ae:	84 c0                	test   %al,%al
 82204b0:	74 29                	je     82204db <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x57>
 82204b2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82204b9:	00 
 82204ba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82204c1:	00 
 82204c2:	c7 44 24 04 20 cf bc 	movl   $0x8bccf20,0x4(%esp)
 82204c9:	08 
 82204ca:	c7 04 24 19 d9 00 00 	movl   $0xd919,(%esp)
 82204d1:	e8 01 04 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82204d6:	e9 71 03 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 82204db:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 82204de:	89 44 24 04          	mov    %eax,0x4(%esp)
 82204e2:	8b 45 10             	mov    0x10(%ebp),%eax
 82204e5:	89 04 24             	mov    %eax,(%esp)
 82204e8:	e8 d3 ca 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82204ed:	83 f0 01             	xor    $0x1,%eax
 82204f0:	84 c0                	test   %al,%al
 82204f2:	74 29                	je     822051d <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x99>
 82204f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82204fb:	00 
 82204fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220503:	00 
 8220504:	c7 44 24 04 20 cf bc 	movl   $0x8bccf20,0x4(%esp)
 822050b:	08 
 822050c:	c7 04 24 1a d9 00 00 	movl   $0xd91a,(%esp)
 8220513:	e8 bf 03 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8220518:	e9 2f 03 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 822051d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220520:	89 04 24             	mov    %eax,(%esp)
 8220523:	e8 64 9e eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8220528:	83 f8 03             	cmp    $0x3,%eax
 822052b:	0f 95 c0             	setne  %al
 822052e:	84 c0                	test   %al,%al
 8220530:	74 25                	je     8220557 <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8220532:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8220539:	00 
 822053a:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 8220541:	00 
 8220542:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220545:	89 04 24             	mov    %eax,(%esp)
 8220548:	e8 f5 b9 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822054d:	b8 00 00 00 00       	mov    $0x0,%eax
 8220552:	e9 f5 02 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 8220557:	8b 45 0c             	mov    0xc(%ebp),%eax
 822055a:	89 04 24             	mov    %eax,(%esp)
 822055d:	e8 d0 fe ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8220562:	85 c0                	test   %eax,%eax
 8220564:	0f 94 c0             	sete   %al
 8220567:	84 c0                	test   %al,%al
 8220569:	74 25                	je     8220590 <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x10c>
 822056b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8220572:	00 
 8220573:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 822057a:	00 
 822057b:	8b 45 0c             	mov    0xc(%ebp),%eax
 822057e:	89 04 24             	mov    %eax,(%esp)
 8220581:	e8 bc b9 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8220586:	b8 00 00 00 00       	mov    $0x0,%eax
 822058b:	e9 bc 02 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 8220590:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220593:	89 04 24             	mov    %eax,(%esp)
 8220596:	e8 f3 9c eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 822059b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 822059e:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 82205a2:	0f bf d0             	movswl %ax,%edx
 82205a5:	8d 45 9b             	lea    -0x65(%ebp),%eax
 82205a8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82205ac:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82205b3:	00 
 82205b4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82205b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82205bb:	89 04 24             	mov    %eax,(%esp)
 82205be:	e8 55 b3 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 82205c3:	83 ec 04             	sub    $0x4,%esp
 82205c6:	8d 45 9b             	lea    -0x65(%ebp),%eax
 82205c9:	89 04 24             	mov    %eax,(%esp)
 82205cc:	e8 95 e7 ef ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 82205d1:	84 c0                	test   %al,%al
 82205d3:	74 25                	je     82205fa <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x176>
 82205d5:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 82205dc:	00 
 82205dd:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 82205e4:	00 
 82205e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82205e8:	89 04 24             	mov    %eax,(%esp)
 82205eb:	e8 52 b9 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82205f0:	b8 00 00 00 00       	mov    $0x0,%eax
 82205f5:	e9 52 02 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 82205fa:	8b 45 a2             	mov    -0x5e(%ebp),%eax
 82205fd:	85 c0                	test   %eax,%eax
 82205ff:	7f 25                	jg     8220626 <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 8220601:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8220608:	00 
 8220609:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 8220610:	00 
 8220611:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220614:	89 04 24             	mov    %eax,(%esp)
 8220617:	e8 26 b9 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822061c:	b8 00 00 00 00       	mov    $0x0,%eax
 8220621:	e9 26 02 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 8220626:	8b 55 9d             	mov    -0x63(%ebp),%edx
 8220629:	8b 45 e8             	mov    -0x18(%ebp),%eax
 822062c:	39 c2                	cmp    %eax,%edx
 822062e:	74 25                	je     8220655 <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x1d1>
 8220630:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8220637:	00 
 8220638:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 822063f:	00 
 8220640:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220643:	89 04 24             	mov    %eax,(%esp)
 8220646:	e8 f7 b8 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822064b:	b8 00 00 00 00       	mov    $0x0,%eax
 8220650:	e9 f7 01 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 8220655:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8220658:	e8 3e bb ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 822065d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8220661:	89 04 24             	mov    %eax,(%esp)
 8220664:	e8 c9 f3 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8220669:	89 45 f0             	mov    %eax,-0x10(%ebp)
 822066c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 822066f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8220672:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8220676:	74 12                	je     822068a <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x206>
 8220678:	8b 45 f4             	mov    -0xc(%ebp),%eax
 822067b:	89 04 24             	mov    %eax,(%esp)
 822067e:	e8 95 c3 00 00       	call   822ca18 <_ZN14CStackableItem18IsSharedEffectItemEv>
 8220683:	83 f0 01             	xor    $0x1,%eax
 8220686:	84 c0                	test   %al,%al
 8220688:	74 07                	je     8220691 <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x20d>
 822068a:	b8 01 00 00 00       	mov    $0x1,%eax
 822068f:	eb 05                	jmp    8220696 <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x212>
 8220691:	b8 00 00 00 00       	mov    $0x0,%eax
 8220696:	84 c0                	test   %al,%al
 8220698:	74 25                	je     82206bf <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x23b>
 822069a:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 82206a1:	00 
 82206a2:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 82206a9:	00 
 82206aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 82206ad:	89 04 24             	mov    %eax,(%esp)
 82206b0:	e8 8d b8 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82206b5:	b8 00 00 00 00       	mov    $0x0,%eax
 82206ba:	e9 8d 01 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 82206bf:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 82206c3:	0f bf d8             	movswl %ax,%ebx
 82206c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82206c9:	89 04 24             	mov    %eax,(%esp)
 82206cc:	e8 bd 9b eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82206d1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 82206d8:	00 
 82206d9:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 82206e0:	00 
 82206e1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82206e8:	00 
 82206e9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82206ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82206f4:	00 
 82206f5:	89 04 24             	mov    %eax,(%esp)
 82206f8:	e8 0f 39 2e 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 82206fd:	83 f0 01             	xor    $0x1,%eax
 8220700:	84 c0                	test   %al,%al
 8220702:	74 25                	je     8220729 <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x2a5>
 8220704:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 822070b:	00 
 822070c:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 8220713:	00 
 8220714:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220717:	89 04 24             	mov    %eax,(%esp)
 822071a:	e8 23 b8 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822071f:	b8 00 00 00 00       	mov    $0x0,%eax
 8220724:	e9 23 01 00 00       	jmp    822084c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3c8>
 8220729:	8d 45 d8             	lea    -0x28(%ebp),%eax
 822072c:	89 04 24             	mov    %eax,(%esp)
 822072f:	e8 18 d6 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8220734:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 822073b:	00 
 822073c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8220743:	00 
 8220744:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8220747:	89 04 24             	mov    %eax,(%esp)
 822074a:	e8 ad b1 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 822074f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8220756:	00 
 8220757:	8d 45 d8             	lea    -0x28(%ebp),%eax
 822075a:	89 04 24             	mov    %eax,(%esp)
 822075d:	e8 be b1 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8220762:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 8220766:	98                   	cwtl
 8220767:	89 44 24 04          	mov    %eax,0x4(%esp)
 822076b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 822076e:	89 04 24             	mov    %eax,(%esp)
 8220771:	e8 2e 97 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8220776:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822077d:	00 
 822077e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8220781:	89 04 24             	mov    %eax,(%esp)
 8220784:	e8 cf b1 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8220789:	8d 45 d8             	lea    -0x28(%ebp),%eax
 822078c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220790:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220793:	89 04 24             	mov    %eax,(%esp)
 8220796:	e8 1f 7e 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 822079b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 822079e:	89 04 24             	mov    %eax,(%esp)
 82207a1:	e8 40 b1 ea ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 82207a6:	c7 44 24 08 db 00 00 	movl   $0xdb,0x8(%esp)
 82207ad:	00 
 82207ae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82207b5:	00 
 82207b6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82207b9:	89 04 24             	mov    %eax,(%esp)
 82207bc:	e8 3b b1 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82207c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82207c4:	89 04 24             	mov    %eax,(%esp)
 82207c7:	e8 b0 9b eb ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82207cc:	0f b7 c0             	movzwl %ax,%eax
 82207cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82207d3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82207d6:	89 04 24             	mov    %eax,(%esp)
 82207d9:	e8 c6 96 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82207de:	8b 45 e8             	mov    -0x18(%ebp),%eax
 82207e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82207e5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82207e8:	89 04 24             	mov    %eax,(%esp)
 82207eb:	e8 4c b1 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82207f0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82207f7:	00 
 82207f8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82207fb:	89 04 24             	mov    %eax,(%esp)
 82207fe:	e8 55 b1 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8220803:	e8 9f 9b eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8220808:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 822080f:	00 
 8220810:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8220813:	89 54 24 04          	mov    %edx,0x4(%esp)
 8220817:	89 04 24             	mov    %eax,(%esp)
 822081a:	e8 65 89 4a 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 822081f:	eb 1b                	jmp    822083c <_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf+0x3b8>
 8220821:	89 d3                	mov    %edx,%ebx
 8220823:	89 c6                	mov    %eax,%esi
 8220825:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8220828:	89 04 24             	mov    %eax,(%esp)
 822082b:	e8 50 d6 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8220830:	89 f0                	mov    %esi,%eax
 8220832:	89 da                	mov    %ebx,%edx
 8220834:	89 04 24             	mov    %eax,(%esp)
 8220837:	e8 14 2f 8c 00       	call   8ae3750 <_Unwind_Resume>
 822083c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 822083f:	89 04 24             	mov    %eax,(%esp)
 8220842:	e8 39 d6 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8220847:	b8 00 00 00 00       	mov    $0x0,%eax
 822084c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 822084f:	83 c4 00             	add    $0x0,%esp
 8220852:	5b                   	pop    %ebx
 8220853:	5e                   	pop    %esi
 8220854:	5d                   	pop    %ebp
 8220855:	c3                   	ret

```

```c
// Dispatcher_UseSharedEffectItem::dispatch_sig @ 0x8220484

/* Dispatcher_UseSharedEffectItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseSharedEffectItem::dispatch_sig
          (Dispatcher_UseSharedEffectItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this_00;
  CInventory *pCVar5;
  uint uVar6;
  GameWorld *this_01;
  int iVar7;
  Inven_Item local_69 [2];
  int local_67;
  int local_62;
  PacketGuard local_2c [14];
  short local_1e;
  int local_1c;
  int local_18;
  CStackableItem *local_14;
  CStackableItem *local_10;
  
  local_1c = 0;
  local_1e = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_1c);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xd919,
                     "virtual int Dispatcher_UseSharedEffectItem::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar3;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_1e);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xd91a,
                     "virtual int Dispatcher_UseSharedEffectItem::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar3;
  }
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    CUser::SendCmdErrorPacket(param_1,0xff,1);
    return 0;
  }
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar4 != 0) {
    local_18 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar7 = (int)local_1e;
    CInventory::GetInvenSlot((int)local_69,local_18);
    cVar2 = Inven_Item::isEmpty(local_69);
    iVar4 = local_1c;
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0xff,0x16,iVar7);
      return 0;
    }
    if (0 < local_62) {
      if (local_67 == local_1c) {
        this_00 = (CDataManager *)G_CDataManager();
        local_14 = (CStackableItem *)CDataManager::find_item(this_00,iVar4);
        local_10 = local_14;
        if ((local_14 == (CStackableItem *)0x0) ||
           (cVar2 = CStackableItem::IsSharedEffectItem(local_14), cVar2 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          CUser::SendCmdErrorPacket(param_1,0xff,0x11);
        }
        else {
          iVar4 = (int)local_1e;
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar2 = CInventory::delete_item(pCVar5,1,iVar4,1,3,1);
          if (cVar2 == '\x01') {
            PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0822074a to 0822081e has its CatchHandler @ 08220821 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xff);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)local_1e);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
            CUser::Send(param_1,local_2c);
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xdb);
            uVar6 = CUser::get_unique_id(param_1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar6 & 0xffff);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
            this_01 = (GameWorld *)G_GameWorld();
            GameWorld::send_all_with_state(this_01,local_2c,3);
            PacketGuard::~PacketGuard(local_2c);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xff,1);
          }
        }
        return 0;
      }
      CUser::SendCmdErrorPacket(param_1,0xff,1,iVar7);
      return 0;
    }
    CUser::SendCmdErrorPacket(param_1,0xff,0x16,iVar7);
    return 0;
  }
  CUser::SendCmdErrorPacket(param_1,0xff,1);
  return 0;
}

```

