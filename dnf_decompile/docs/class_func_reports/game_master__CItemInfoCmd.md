# game_master__CItemInfoCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084aa2d2 game_master::CItemInfoCmd::execute  [0x084aa2d2-0x84aa739] ===
 84aa2d2:	55                   	push   %ebp
 84aa2d3:	89 e5                	mov    %esp,%ebp
 84aa2d5:	57                   	push   %edi
 84aa2d6:	56                   	push   %esi
 84aa2d7:	53                   	push   %ebx
 84aa2d8:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 84aa2de:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa2e1:	83 c0 08             	add    $0x8,%eax
 84aa2e4:	89 04 24             	mov    %eax,(%esp)
 84aa2e7:	e8 04 c2 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aa2ec:	89 c3                	mov    %eax,%ebx
 84aa2ee:	e8 a8 1e c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84aa2f3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84aa2f7:	89 04 24             	mov    %eax,(%esp)
 84aa2fa:	e8 69 57 eb ff       	call   835fa68 <_ZNK12CDataManager9find_itemEPKc>
 84aa2ff:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84aa302:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 84aa306:	0f 85 80 01 00 00    	jne    84aa48c <_ZN11game_master12CItemInfoCmd7executeEv+0x1ba>
 84aa30c:	8d 95 a9 fe ff ff    	lea    -0x157(%ebp),%edx
 84aa312:	bb ff 00 00 00       	mov    $0xff,%ebx
 84aa317:	b8 00 00 00 00       	mov    $0x0,%eax
 84aa31c:	89 d1                	mov    %edx,%ecx
 84aa31e:	83 e1 01             	and    $0x1,%ecx
 84aa321:	85 c9                	test   %ecx,%ecx
 84aa323:	74 08                	je     84aa32d <_ZN11game_master12CItemInfoCmd7executeEv+0x5b>
 84aa325:	88 02                	mov    %al,(%edx)
 84aa327:	83 c2 01             	add    $0x1,%edx
 84aa32a:	83 eb 01             	sub    $0x1,%ebx
 84aa32d:	89 d1                	mov    %edx,%ecx
 84aa32f:	83 e1 02             	and    $0x2,%ecx
 84aa332:	85 c9                	test   %ecx,%ecx
 84aa334:	74 09                	je     84aa33f <_ZN11game_master12CItemInfoCmd7executeEv+0x6d>
 84aa336:	66 89 02             	mov    %ax,(%edx)
 84aa339:	83 c2 02             	add    $0x2,%edx
 84aa33c:	83 eb 02             	sub    $0x2,%ebx
 84aa33f:	89 d9                	mov    %ebx,%ecx
 84aa341:	c1 e9 02             	shr    $0x2,%ecx
 84aa344:	89 d7                	mov    %edx,%edi
 84aa346:	f3 ab                	rep stos %eax,%es:(%edi)
 84aa348:	89 fa                	mov    %edi,%edx
 84aa34a:	89 d9                	mov    %ebx,%ecx
 84aa34c:	83 e1 02             	and    $0x2,%ecx
 84aa34f:	85 c9                	test   %ecx,%ecx
 84aa351:	74 06                	je     84aa359 <_ZN11game_master12CItemInfoCmd7executeEv+0x87>
 84aa353:	66 89 02             	mov    %ax,(%edx)
 84aa356:	83 c2 02             	add    $0x2,%edx
 84aa359:	89 d9                	mov    %ebx,%ecx
 84aa35b:	83 e1 01             	and    $0x1,%ecx
 84aa35e:	85 c9                	test   %ecx,%ecx
 84aa360:	74 05                	je     84aa367 <_ZN11game_master12CItemInfoCmd7executeEv+0x95>
 84aa362:	88 02                	mov    %al,(%edx)
 84aa364:	83 c2 01             	add    $0x1,%edx
 84aa367:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa36a:	83 c0 08             	add    $0x8,%eax
 84aa36d:	89 04 24             	mov    %eax,(%esp)
 84aa370:	e8 7b c1 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aa375:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aa379:	c7 44 24 04 13 fb c7 	movl   $0x8c7fb13,0x4(%esp)
 84aa380:	08 
 84aa381:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 84aa387:	89 04 24             	mov    %eax,(%esp)
 84aa38a:	e8 b1 40 bd ff       	call   807e440 <sprintf@plt>
 84aa38f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa392:	89 04 24             	mov    %eax,(%esp)
 84aa395:	e8 b2 39 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84aa39a:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 84aa3a1:	00 
 84aa3a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa3a9:	00 
 84aa3aa:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa3ad:	89 04 24             	mov    %eax,(%esp)
 84aa3b0:	e8 47 15 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84aa3b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa3bc:	00 
 84aa3bd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa3c0:	89 04 24             	mov    %eax,(%esp)
 84aa3c3:	e8 58 15 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84aa3c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa3cf:	00 
 84aa3d0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa3d3:	89 04 24             	mov    %eax,(%esp)
 84aa3d6:	e8 c9 fa c2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84aa3db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa3e2:	00 
 84aa3e3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa3e6:	89 04 24             	mov    %eax,(%esp)
 84aa3e9:	e8 32 15 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84aa3ee:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 84aa3f4:	89 04 24             	mov    %eax,(%esp)
 84aa3f7:	e8 b4 3f bd ff       	call   807e3b0 <strlen@plt>
 84aa3fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa400:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa403:	89 04 24             	mov    %eax,(%esp)
 84aa406:	e8 31 15 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84aa40b:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 84aa411:	89 04 24             	mov    %eax,(%esp)
 84aa414:	e8 97 3f bd ff       	call   807e3b0 <strlen@plt>
 84aa419:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aa41d:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 84aa423:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa427:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa42a:	89 04 24             	mov    %eax,(%esp)
 84aa42d:	e8 b2 cf d0 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84aa432:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84aa439:	00 
 84aa43a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa43d:	89 04 24             	mov    %eax,(%esp)
 84aa440:	e8 13 15 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84aa445:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa448:	89 04 24             	mov    %eax,(%esp)
 84aa44b:	e8 6a 9b 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa450:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84aa453:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aa457:	89 04 24             	mov    %eax,(%esp)
 84aa45a:	e8 5b e1 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84aa45f:	eb 1b                	jmp    84aa47c <_ZN11game_master12CItemInfoCmd7executeEv+0x1aa>
 84aa461:	89 d3                	mov    %edx,%ebx
 84aa463:	89 c6                	mov    %eax,%esi
 84aa465:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa468:	89 04 24             	mov    %eax,(%esp)
 84aa46b:	e8 10 3a 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aa470:	89 f0                	mov    %esi,%eax
 84aa472:	89 da                	mov    %ebx,%edx
 84aa474:	89 04 24             	mov    %eax,(%esp)
 84aa477:	e8 d4 92 63 00       	call   8ae3750 <_Unwind_Resume>
 84aa47c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84aa47f:	89 04 24             	mov    %eax,(%esp)
 84aa482:	e8 f9 39 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aa487:	e9 a3 02 00 00       	jmp    84aa72f <_ZN11game_master12CItemInfoCmd7executeEv+0x45d>
 84aa48c:	8d 95 a9 fe ff ff    	lea    -0x157(%ebp),%edx
 84aa492:	bb ff 00 00 00       	mov    $0xff,%ebx
 84aa497:	b8 00 00 00 00       	mov    $0x0,%eax
 84aa49c:	89 d1                	mov    %edx,%ecx
 84aa49e:	83 e1 01             	and    $0x1,%ecx
 84aa4a1:	85 c9                	test   %ecx,%ecx
 84aa4a3:	74 08                	je     84aa4ad <_ZN11game_master12CItemInfoCmd7executeEv+0x1db>
 84aa4a5:	88 02                	mov    %al,(%edx)
 84aa4a7:	83 c2 01             	add    $0x1,%edx
 84aa4aa:	83 eb 01             	sub    $0x1,%ebx
 84aa4ad:	89 d1                	mov    %edx,%ecx
 84aa4af:	83 e1 02             	and    $0x2,%ecx
 84aa4b2:	85 c9                	test   %ecx,%ecx
 84aa4b4:	74 09                	je     84aa4bf <_ZN11game_master12CItemInfoCmd7executeEv+0x1ed>
 84aa4b6:	66 89 02             	mov    %ax,(%edx)
 84aa4b9:	83 c2 02             	add    $0x2,%edx
 84aa4bc:	83 eb 02             	sub    $0x2,%ebx
 84aa4bf:	89 d9                	mov    %ebx,%ecx
 84aa4c1:	c1 e9 02             	shr    $0x2,%ecx
 84aa4c4:	89 d7                	mov    %edx,%edi
 84aa4c6:	f3 ab                	rep stos %eax,%es:(%edi)
 84aa4c8:	89 fa                	mov    %edi,%edx
 84aa4ca:	89 d9                	mov    %ebx,%ecx
 84aa4cc:	83 e1 02             	and    $0x2,%ecx
 84aa4cf:	85 c9                	test   %ecx,%ecx
 84aa4d1:	74 06                	je     84aa4d9 <_ZN11game_master12CItemInfoCmd7executeEv+0x207>
 84aa4d3:	66 89 02             	mov    %ax,(%edx)
 84aa4d6:	83 c2 02             	add    $0x2,%edx
 84aa4d9:	89 d9                	mov    %ebx,%ecx
 84aa4db:	83 e1 01             	and    $0x1,%ecx
 84aa4de:	85 c9                	test   %ecx,%ecx
 84aa4e0:	74 05                	je     84aa4e7 <_ZN11game_master12CItemInfoCmd7executeEv+0x215>
 84aa4e2:	88 02                	mov    %al,(%edx)
 84aa4e4:	83 c2 01             	add    $0x1,%edx
 84aa4e7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84aa4ea:	89 04 24             	mov    %eax,(%esp)
 84aa4ed:	e8 56 67 c6 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84aa4f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aa4f6:	c7 44 24 04 2a fb c7 	movl   $0x8c7fb2a,0x4(%esp)
 84aa4fd:	08 
 84aa4fe:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 84aa504:	89 04 24             	mov    %eax,(%esp)
 84aa507:	e8 34 3f bd ff       	call   807e440 <sprintf@plt>
 84aa50c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa50f:	89 04 24             	mov    %eax,(%esp)
 84aa512:	e8 35 38 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84aa517:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 84aa51e:	00 
 84aa51f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa526:	00 
 84aa527:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa52a:	89 04 24             	mov    %eax,(%esp)
 84aa52d:	e8 ca 13 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84aa532:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa539:	00 
 84aa53a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa53d:	89 04 24             	mov    %eax,(%esp)
 84aa540:	e8 db 13 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84aa545:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa54c:	00 
 84aa54d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa550:	89 04 24             	mov    %eax,(%esp)
 84aa553:	e8 4c f9 c2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84aa558:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa55f:	00 
 84aa560:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa563:	89 04 24             	mov    %eax,(%esp)
 84aa566:	e8 b5 13 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84aa56b:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 84aa571:	89 04 24             	mov    %eax,(%esp)
 84aa574:	e8 37 3e bd ff       	call   807e3b0 <strlen@plt>
 84aa579:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa57d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa580:	89 04 24             	mov    %eax,(%esp)
 84aa583:	e8 b4 13 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84aa588:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 84aa58e:	89 04 24             	mov    %eax,(%esp)
 84aa591:	e8 1a 3e bd ff       	call   807e3b0 <strlen@plt>
 84aa596:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aa59a:	8d 85 a9 fe ff ff    	lea    -0x157(%ebp),%eax
 84aa5a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa5a4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa5a7:	89 04 24             	mov    %eax,(%esp)
 84aa5aa:	e8 35 ce d0 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84aa5af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84aa5b6:	00 
 84aa5b7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa5ba:	89 04 24             	mov    %eax,(%esp)
 84aa5bd:	e8 96 13 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84aa5c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa5c5:	89 04 24             	mov    %eax,(%esp)
 84aa5c8:	e8 ed 99 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa5cd:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84aa5d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aa5d4:	89 04 24             	mov    %eax,(%esp)
 84aa5d7:	e8 de df 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84aa5dc:	eb 1b                	jmp    84aa5f9 <_ZN11game_master12CItemInfoCmd7executeEv+0x327>
 84aa5de:	89 d3                	mov    %edx,%ebx
 84aa5e0:	89 c6                	mov    %eax,%esi
 84aa5e2:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa5e5:	89 04 24             	mov    %eax,(%esp)
 84aa5e8:	e8 93 38 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aa5ed:	89 f0                	mov    %esi,%eax
 84aa5ef:	89 da                	mov    %ebx,%edx
 84aa5f1:	89 04 24             	mov    %eax,(%esp)
 84aa5f4:	e8 57 91 63 00       	call   8ae3750 <_Unwind_Resume>
 84aa5f9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84aa5fc:	89 04 24             	mov    %eax,(%esp)
 84aa5ff:	e8 7c 38 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aa604:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84aa607:	89 04 24             	mov    %eax,(%esp)
 84aa60a:	e8 39 66 c6 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84aa60f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84aa612:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa615:	89 04 24             	mov    %eax,(%esp)
 84aa618:	e8 9d 99 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aa61d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84aa620:	c7 45 e0 64 00 00 00 	movl   $0x64,-0x20(%ebp)
 84aa627:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 84aa62b:	74 32                	je     84aa65f <_ZN11game_master12CItemInfoCmd7executeEv+0x38d>
 84aa62d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84aa630:	89 04 24             	mov    %eax,(%esp)
 84aa633:	e8 c2 6c c4 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84aa638:	84 c0                	test   %al,%al
 84aa63a:	74 23                	je     84aa65f <_ZN11game_master12CItemInfoCmd7executeEv+0x38d>
 84aa63c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84aa63f:	89 04 24             	mov    %eax,(%esp)
 84aa642:	e8 b5 23 d8 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 84aa647:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84aa64a:	0f 9c c0             	setl   %al
 84aa64d:	84 c0                	test   %al,%al
 84aa64f:	74 0e                	je     84aa65f <_ZN11game_master12CItemInfoCmd7executeEv+0x38d>
 84aa651:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84aa654:	89 04 24             	mov    %eax,(%esp)
 84aa657:	e8 a0 23 d8 ff       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 84aa65c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84aa65f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84aa662:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84aa669:	00 
 84aa66a:	8d 55 c0             	lea    -0x40(%ebp),%edx
 84aa66d:	89 54 24 10          	mov    %edx,0x10(%esp)
 84aa671:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 84aa678:	00 
 84aa679:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84aa67c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aa680:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aa684:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aa687:	89 04 24             	mov    %eax,(%esp)
 84aa68a:	e8 45 10 1d 00       	call   867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>
 84aa68f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84aa692:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84aa696:	0f 88 92 00 00 00    	js     84aa72e <_ZN11game_master12CItemInfoCmd7executeEv+0x45c>
 84aa69c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aa69f:	89 04 24             	mov    %eax,(%esp)
 84aa6a2:	e8 81 69 c5 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84aa6a7:	89 c6                	mov    %eax,%esi
 84aa6a9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aa6ac:	89 04 24             	mov    %eax,(%esp)
 84aa6af:	e8 ba fc c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84aa6b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aa6bb:	00 
 84aa6bc:	89 04 24             	mov    %eax,(%esp)
 84aa6bf:	e8 87 e9 c5 ff       	call   810904b <_Z14NumberToStringji>
 84aa6c4:	89 c3                	mov    %eax,%ebx
 84aa6c6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84aa6cd:	00 
 84aa6ce:	c7 44 24 08 39 05 00 	movl   $0x539,0x8(%esp)
 84aa6d5:	00 
 84aa6d6:	c7 44 24 04 00 14 c8 	movl   $0x8c81400,0x4(%esp)
 84aa6dd:	08 
 84aa6de:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84aa6e1:	89 04 24             	mov    %eax,(%esp)
 84aa6e4:	e8 2f 50 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84aa6e9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84aa6ec:	89 44 24 10          	mov    %eax,0x10(%esp)
 84aa6f0:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84aa6f4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84aa6f8:	c7 44 24 04 3a fb c7 	movl   $0x8c7fb3a,0x4(%esp)
 84aa6ff:	08 
 84aa700:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84aa703:	89 04 24             	mov    %eax,(%esp)
 84aa706:	e8 7d 50 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84aa70b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84aa70e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84aa711:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84aa715:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aa719:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84aa720:	00 
 84aa721:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aa724:	89 04 24             	mov    %eax,(%esp)
 84aa727:	e8 2e 1f 1d 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 84aa72c:	eb 01                	jmp    84aa72f <_ZN11game_master12CItemInfoCmd7executeEv+0x45d>
 84aa72e:	90                   	nop
 84aa72f:	81 c4 6c 01 00 00    	add    $0x16c,%esp
 84aa735:	5b                   	pop    %ebx
 84aa736:	5e                   	pop    %esi
 84aa737:	5f                   	pop    %edi
 84aa738:	5d                   	pop    %ebp
 84aa739:	c3                   	ret

```

```c
// game_master::CItemInfoCmd::execute @ 0x84aa2d2

/* game_master::CItemInfoCmd::execute() */

void __thiscall game_master::CItemInfoCmd::execute(CItemInfoCmd *this)

{
  char cVar1;
  char *pcVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  size_t sVar4;
  CUser *pCVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_15b;
  char local_15a [254];
  PacketGuard local_5c [12];
  PacketGuard local_50 [12];
  undefined4 local_44;
  cMyTrace local_40 [16];
  CItem *local_30;
  undefined4 local_2c;
  CUser *local_28;
  int local_24;
  int local_20;
  
  bVar11 = 0;
  pcVar2 = (char *)std::string::c_str((string *)(this + 8));
  this_00 = (CDataManager *)G_CDataManager();
  local_30 = (CItem *)CDataManager::find_item(this_00,pcVar2);
  if (local_30 == (CItem *)0x0) {
    pcVar2 = &local_15b;
    uVar9 = 0xff;
    bVar10 = ((uint)pcVar2 & 1) != 0;
    if (bVar10) {
      local_15b = '\0';
      pcVar2 = local_15a;
      uVar9 = 0xfe;
    }
    if (((uint)pcVar2 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
      uVar9 = uVar9 - 2;
    }
    local_30 = (CItem *)0x0;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
    }
    if (!bVar10) {
      *pcVar2 = '\0';
    }
    uVar3 = std::string::c_str((string *)(this + 8));
    sprintf(&local_15b,"cannot find item (%s) ",uVar3);
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 084aa3b0 to 084aa45e has its CatchHandler @ 084aa461 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    sVar4 = strlen(&local_15b);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,sVar4);
    sVar4 = strlen(&local_15b);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_50,&local_15b,sVar4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    pCVar5 = (CUser *)CCommand::GetUser((CCommand *)this);
    CUser::Send(pCVar5,local_50);
    PacketGuard::~PacketGuard(local_50);
  }
  else {
    pcVar2 = &local_15b;
    uVar9 = 0xff;
    bVar10 = ((uint)pcVar2 & 1) != 0;
    if (bVar10) {
      local_15b = '\0';
      pcVar2 = local_15a;
      uVar9 = 0xfe;
    }
    if (((uint)pcVar2 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2 = pcVar2 + 2;
    }
    if (!bVar10) {
      *pcVar2 = '\0';
    }
    uVar3 = CItem::get_index(local_30);
    sprintf(&local_15b,"item_index(%d) ",uVar3);
    PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 084aa52d to 084aa5db has its CatchHandler @ 084aa5de */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_5c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,0);
    sVar4 = strlen(&local_15b);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,sVar4);
    sVar4 = strlen(&local_15b);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_5c,&local_15b,sVar4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
    pCVar5 = (CUser *)CCommand::GetUser((CCommand *)this);
    CUser::Send(pCVar5,local_5c);
    PacketGuard::~PacketGuard(local_5c);
    local_2c = CItem::get_index(local_30);
    local_28 = (CUser *)CCommand::GetUser((CCommand *)this);
    local_24 = 100;
    if (local_30 != (CItem *)0x0) {
      cVar1 = CItem::is_stackable(local_30);
      if (cVar1 != '\0') {
        iVar6 = CStackableItem::getStackableLimit((CStackableItem *)local_30);
        if (iVar6 < local_24) {
          local_24 = CStackableItem::getStackableLimit((CStackableItem *)local_30);
        }
      }
    }
    local_20 = CUser::AddItem(local_28,local_2c,local_24,6,&local_44,0);
    if (-1 < local_20) {
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_28);
      uVar9 = CUser::get_acc_id(local_28);
      uVar7 = NumberToString(uVar9,0);
      cMyTrace::cMyTrace(local_40,"virtual void game_master::CItemInfoCmd::execute()",0x539,0);
      cMyTrace::operator()(local_40,"%s:\'%s\' GM Mode Add Item(%d).",uVar7,uVar3,local_20);
      CUser::SendUpdateItemList(local_28,1,local_44,local_20);
    }
  }
  return;
}

```

---

## parse

```asm
// === 084aa29e game_master::CItemInfoCmd::parse  [0x084aa29e-0x84aa2d1] ===
 84aa29e:	55                   	push   %ebp
 84aa29f:	89 e5                	mov    %esp,%ebp
 84aa2a1:	83 ec 18             	sub    $0x18,%esp
 84aa2a4:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa2a7:	8b 40 04             	mov    0x4(%eax),%eax
 84aa2aa:	83 c0 0c             	add    $0xc,%eax
 84aa2ad:	89 04 24             	mov    %eax,(%esp)
 84aa2b0:	e8 b3 4d df ff       	call   829f068 <_Z4trimRSs>
 84aa2b5:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa2b8:	8b 40 04             	mov    0x4(%eax),%eax
 84aa2bb:	8d 50 0c             	lea    0xc(%eax),%edx
 84aa2be:	8b 45 08             	mov    0x8(%ebp),%eax
 84aa2c1:	83 c0 08             	add    $0x8,%eax
 84aa2c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aa2c8:	89 04 24             	mov    %eax,(%esp)
 84aa2cb:	e8 30 da 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84aa2d0:	c9                   	leave
 84aa2d1:	c3                   	ret

```

```c
// game_master::CItemInfoCmd::parse @ 0x84aa29e

/* game_master::CItemInfoCmd::parse() */

void __thiscall game_master::CItemInfoCmd::parse(CItemInfoCmd *this)

{
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::operator=((string *)(this + 8),(string *)(*(int *)(this + 4) + 0xc));
  return;
}

```

