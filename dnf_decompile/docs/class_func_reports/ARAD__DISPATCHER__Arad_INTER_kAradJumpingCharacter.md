# ARAD__DISPATCHER__Arad_INTER_kAradJumpingCharacter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## clearEpicQuest

```asm
// === 081993c4 ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest  [0x081993c4-0x819973d] ===
 81993c4:	55                   	push   %ebp
 81993c5:	89 e5                	mov    %esp,%ebp
 81993c7:	53                   	push   %ebx
 81993c8:	83 ec 74             	sub    $0x74,%esp
 81993cb:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 81993cf:	e8 c7 2d f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81993d4:	8b 40 18             	mov    0x18(%eax),%eax
 81993d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81993de:	00 
 81993df:	89 04 24             	mov    %eax,(%esp)
 81993e2:	e8 f1 c6 1b 00       	call   8355ad8 <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE>
 81993e7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81993ea:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81993ee:	75 09                	jne    81993f9 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x35>
 81993f0:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 81993f4:	e9 40 03 00 00       	jmp    8199739 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x375>
 81993f9:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8199400:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199403:	89 04 24             	mov    %eax,(%esp)
 8199406:	e8 ad 0e f4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 819940b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 819940e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8199415:	e9 4a 01 00 00       	jmp    8199564 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x1a0>
 819941a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819941d:	89 04 24             	mov    %eax,(%esp)
 8199420:	e8 39 16 fb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 8199425:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8199428:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 819942e:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8199432:	85 c0                	test   %eax,%eax
 8199434:	0f 94 c0             	sete   %al
 8199437:	84 c0                	test   %al,%al
 8199439:	0f 85 1a 01 00 00    	jne    8199559 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x195>
 819943f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199442:	89 04 24             	mov    %eax,(%esp)
 8199445:	e8 5c 14 00 00       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 819944a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 819944d:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 8199453:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 8199457:	e8 3f 2d f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819945c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8199460:	89 04 24             	mov    %eax,(%esp)
 8199463:	e8 5e 69 1c 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 8199468:	89 45 e8             	mov    %eax,-0x18(%ebp)
 819946b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 819946f:	0f 84 e7 00 00 00    	je     819955c <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x198>
 8199475:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8199478:	8b 40 08             	mov    0x8(%eax),%eax
 819947b:	85 c0                	test   %eax,%eax
 819947d:	0f 85 dc 00 00 00    	jne    819955f <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x19b>
 8199483:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 819948a:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8199491:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8199498:	8b 45 e8             	mov    -0x18(%ebp),%eax
 819949b:	8b 40 20             	mov    0x20(%eax),%eax
 819949e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81994a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81994a4:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81994a7:	0f 8d b3 00 00 00    	jge    8199560 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x19c>
 81994ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81994b0:	89 04 24             	mov    %eax,(%esp)
 81994b3:	e8 ee 13 00 00       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 81994b8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81994bb:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 81994c1:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 81994c5:	89 c3                	mov    %eax,%ebx
 81994c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81994ca:	89 04 24             	mov    %eax,(%esp)
 81994cd:	e8 8c 15 fb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 81994d2:	83 c0 04             	add    $0x4,%eax
 81994d5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81994d9:	89 04 24             	mov    %eax,(%esp)
 81994dc:	e8 97 25 ef ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 81994e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81994e4:	89 04 24             	mov    %eax,(%esp)
 81994e7:	e8 72 15 fb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 81994ec:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81994ef:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 81994f5:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 81994fc:	00 
 81994fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199500:	89 04 24             	mov    %eax,(%esp)
 8199503:	e8 56 15 fb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 8199508:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 819950b:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 8199511:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 8199518:	00 
 8199519:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8199520:	00 
 8199521:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8199524:	89 44 24 14          	mov    %eax,0x14(%esp)
 8199528:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 819952b:	89 44 24 10          	mov    %eax,0x10(%esp)
 819952f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8199532:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8199536:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8199539:	89 44 24 08          	mov    %eax,0x8(%esp)
 819953d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8199540:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199544:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199547:	89 04 24             	mov    %eax,(%esp)
 819954a:	e8 59 52 4d 00       	call   866e7a8 <_ZN5CUser18quest_basic_rewardEP5QuestRiS2_S2_S2_b>
 819954f:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 8199553:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8199557:	eb 07                	jmp    8199560 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x19c>
 8199559:	90                   	nop
 819955a:	eb 04                	jmp    8199560 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x19c>
 819955c:	90                   	nop
 819955d:	eb 01                	jmp    8199560 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x19c>
 819955f:	90                   	nop
 8199560:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8199564:	83 7d e4 13          	cmpl   $0x13,-0x1c(%ebp)
 8199568:	0f 9e c0             	setle  %al
 819956b:	84 c0                	test   %al,%al
 819956d:	0f 85 a7 fe ff ff    	jne    819941a <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x56>
 8199573:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8199576:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8199579:	89 54 24 04          	mov    %edx,0x4(%esp)
 819957d:	89 04 24             	mov    %eax,(%esp)
 8199580:	e8 1f 1a 00 00       	call   819afa4 <_ZNKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8199585:	83 ec 04             	sub    $0x4,%esp
 8199588:	8d 45 bc             	lea    -0x44(%ebp),%eax
 819958b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 819958e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8199592:	89 04 24             	mov    %eax,(%esp)
 8199595:	e8 30 1a 00 00       	call   819afca <_ZNKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 819959a:	83 ec 04             	sub    $0x4,%esp
 819959d:	e9 79 01 00 00       	jmp    819971b <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x357>
 81995a2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81995a5:	89 04 24             	mov    %eax,(%esp)
 81995a8:	e8 63 d9 f2 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 81995ad:	8b 58 04             	mov    0x4(%eax),%ebx
 81995b0:	e8 e6 2b f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81995b5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81995b9:	89 04 24             	mov    %eax,(%esp)
 81995bc:	e8 05 68 1c 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 81995c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81995c4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81995c8:	0f 84 2f 01 00 00    	je     81996fd <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x339>
 81995ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81995d1:	8b 40 04             	mov    0x4(%eax),%eax
 81995d4:	3d 04 0e 00 00       	cmp    $0xe04,%eax
 81995d9:	0f 84 21 01 00 00    	je     8199700 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x33c>
 81995df:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81995e2:	8b 40 04             	mov    0x4(%eax),%eax
 81995e5:	3d 05 0e 00 00       	cmp    $0xe05,%eax
 81995ea:	0f 84 13 01 00 00    	je     8199703 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x33f>
 81995f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81995f3:	8b 40 04             	mov    0x4(%eax),%eax
 81995f6:	3d 06 0e 00 00       	cmp    $0xe06,%eax
 81995fb:	0f 84 05 01 00 00    	je     8199706 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x342>
 8199601:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8199604:	8b 40 04             	mov    0x4(%eax),%eax
 8199607:	3d 07 0e 00 00       	cmp    $0xe07,%eax
 819960c:	0f 84 f7 00 00 00    	je     8199709 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x345>
 8199612:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8199615:	8b 40 04             	mov    0x4(%eax),%eax
 8199618:	3d 08 0e 00 00       	cmp    $0xe08,%eax
 819961d:	0f 84 e9 00 00 00    	je     819970c <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x348>
 8199623:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199626:	89 04 24             	mov    %eax,(%esp)
 8199629:	e8 f2 48 f6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 819962e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199632:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8199635:	89 04 24             	mov    %eax,(%esp)
 8199638:	e8 1f 94 1b 00       	call   8352a5c <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB>
 819963d:	83 f0 01             	xor    $0x1,%eax
 8199640:	84 c0                	test   %al,%al
 8199642:	0f 85 c7 00 00 00    	jne    819970f <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34b>
 8199648:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 819964f:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8199656:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 819965d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8199660:	8b 40 20             	mov    0x20(%eax),%eax
 8199663:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8199666:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8199669:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 819966c:	0f 8d 9e 00 00 00    	jge    8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 8199672:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8199675:	8b 40 04             	mov    0x4(%eax),%eax
 8199678:	89 c3                	mov    %eax,%ebx
 819967a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819967d:	89 04 24             	mov    %eax,(%esp)
 8199680:	e8 d9 13 fb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 8199685:	83 c0 04             	add    $0x4,%eax
 8199688:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819968c:	89 04 24             	mov    %eax,(%esp)
 819968f:	e8 4c 24 ef ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 8199694:	83 f0 01             	xor    $0x1,%eax
 8199697:	84 c0                	test   %al,%al
 8199699:	74 75                	je     8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 819969b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 819969e:	8b 40 04             	mov    0x4(%eax),%eax
 81996a1:	89 c3                	mov    %eax,%ebx
 81996a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81996a6:	89 04 24             	mov    %eax,(%esp)
 81996a9:	e8 b0 13 fb ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 81996ae:	83 c0 04             	add    $0x4,%eax
 81996b1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81996b5:	89 04 24             	mov    %eax,(%esp)
 81996b8:	e8 bb 23 ef ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 81996bd:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81996c4:	00 
 81996c5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81996c8:	89 44 24 14          	mov    %eax,0x14(%esp)
 81996cc:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81996cf:	89 44 24 10          	mov    %eax,0x10(%esp)
 81996d3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81996d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81996da:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81996dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81996e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81996e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81996e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81996eb:	89 04 24             	mov    %eax,(%esp)
 81996ee:	e8 b5 50 4d 00       	call   866e7a8 <_ZN5CUser18quest_basic_rewardEP5QuestRiS2_S2_S2_b>
 81996f3:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 81996f7:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 81996fb:	eb 13                	jmp    8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 81996fd:	90                   	nop
 81996fe:	eb 10                	jmp    8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 8199700:	90                   	nop
 8199701:	eb 0d                	jmp    8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 8199703:	90                   	nop
 8199704:	eb 0a                	jmp    8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 8199706:	90                   	nop
 8199707:	eb 07                	jmp    8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 8199709:	90                   	nop
 819970a:	eb 04                	jmp    8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 819970c:	90                   	nop
 819970d:	eb 01                	jmp    8199710 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x34c>
 819970f:	90                   	nop
 8199710:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8199713:	89 04 24             	mov    %eax,(%esp)
 8199716:	e8 67 88 fb ff       	call   8151f82 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEppEv>
 819971b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 819971e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199722:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8199725:	89 04 24             	mov    %eax,(%esp)
 8199728:	e8 cf d7 f2 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 819972d:	84 c0                	test   %al,%al
 819972f:	0f 85 6d fe ff ff    	jne    81995a2 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser+0x1de>
 8199735:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8199739:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 819973c:	c9                   	leave
 819973d:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest @ 0x81993c4

/* ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest(CUser*) */

undefined1 __thiscall
ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::clearEpicQuest
          (Arad_INTER_kAradJumpingCharacter *this,CUser *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_58 [4];
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_48 [4];
  int local_44 [4];
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_34 [7];
  undefined1 local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  Quest *local_1c;
  int local_18;
  Quest *local_14;
  int local_10;
  
  local_2d = 0;
  iVar3 = G_CDataManager();
  local_2c = QuestList::getQuestNPCList(*(QuestList **)(iVar3 + 0x18),0);
  if (local_2c != 0) {
    local_28 = 0;
    local_24 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    for (local_20 = 0; local_20 < 0x14; local_20 = local_20 + 1) {
      iVar3 = CUser::getCurCharacQuestW(param_1);
      if (*(int *)(iVar3 + 8 + (local_20 + 0x1d4c) * 4) != 0) {
        CUser::getCurCharacQuestR(param_1);
        iVar3 = G_CDataManager();
        local_1c = (Quest *)CDataManager::find_quest(iVar3);
        if ((local_1c != (Quest *)0x0) && (*(int *)(local_1c + 8) == 0)) {
          local_44[3] = 0;
          local_44[2] = 0;
          local_44[1] = 0;
          local_18 = *(int *)(local_1c + 0x20);
          if (local_18 < local_24) {
            iVar3 = CUser::getCurCharacQuestR(param_1);
            uVar1 = *(uint *)(iVar3 + 8 + (local_20 + 0x1d4c) * 4);
            iVar3 = CUser::getCurCharacQuestW(param_1);
            WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar3 + 4),uVar1);
            iVar3 = CUser::getCurCharacQuestW(param_1);
            *(undefined4 *)(iVar3 + 8 + (local_20 + 0x1d4c) * 4) = 0;
            iVar3 = CUser::getCurCharacQuestW(param_1);
            *(undefined4 *)(iVar3 + 8 + (local_20 + 0x1d60) * 4) = 0;
            CUser::quest_basic_reward
                      (param_1,local_1c,local_44 + 3,local_44 + 2,local_44 + 1,local_44,true);
            local_2d = 1;
            local_28 = local_28 + 1;
          }
        }
      }
    }
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_34);
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_48);
    while (cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_48,
                              (_Rb_tree_const_iterator *)local_34), cVar2 != '\0') {
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_48);
      iVar3 = G_CDataManager();
      local_14 = (Quest *)CDataManager::find_quest(iVar3);
      if ((((local_14 != (Quest *)0x0) && (*(int *)(local_14 + 4) != 0xe04)) &&
          (*(int *)(local_14 + 4) != 0xe05)) &&
         (((*(int *)(local_14 + 4) != 0xe06 && (*(int *)(local_14 + 4) != 0xe07)) &&
          (*(int *)(local_14 + 4) != 0xe08)))) {
        uVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        cVar2 = Quest::checkPossibleJob(local_14,uVar4);
        if (cVar2 == '\x01') {
          local_58[3] = 0;
          local_58[2] = 0;
          local_58[1] = 0;
          local_10 = *(int *)(local_14 + 0x20);
          if (local_10 < local_24) {
            uVar1 = *(uint *)(local_14 + 4);
            iVar3 = CUser::getCurCharacQuestW(param_1);
            cVar2 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar3 + 4),uVar1);
            if (cVar2 != '\x01') {
              uVar1 = *(uint *)(local_14 + 4);
              iVar3 = CUser::getCurCharacQuestW(param_1);
              WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar3 + 4),uVar1);
              CUser::quest_basic_reward
                        (param_1,local_14,local_58 + 3,local_58 + 2,local_58 + 1,local_58,true);
              local_2d = 1;
              local_28 = local_28 + 1;
            }
          }
        }
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)local_48);
    }
  }
  return local_2d;
}

```

---

## dispatch_sig

```asm
// === 081999f2 ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig  [0x081999f2-0x8199d6d] ===
 81999f2:	55                   	push   %ebp
 81999f3:	89 e5                	mov    %esp,%ebp
 81999f5:	56                   	push   %esi
 81999f6:	53                   	push   %ebx
 81999f7:	83 ec 40             	sub    $0x40,%esp
 81999fa:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81999fe:	75 0a                	jne    8199a0a <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x18>
 8199a00:	bb e9 05 00 00       	mov    $0x5e9,%ebx
 8199a05:	e9 5a 03 00 00       	jmp    8199d64 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x372>
 8199a0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199a0d:	89 04 24             	mov    %eax,(%esp)
 8199a10:	e8 1d 6a f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8199a15:	85 c0                	test   %eax,%eax
 8199a17:	0f 94 c0             	sete   %al
 8199a1a:	84 c0                	test   %al,%al
 8199a1c:	74 0a                	je     8199a28 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x36>
 8199a1e:	bb ee 05 00 00       	mov    $0x5ee,%ebx
 8199a23:	e9 3c 03 00 00       	jmp    8199d64 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x372>
 8199a28:	8b 45 10             	mov    0x10(%ebp),%eax
 8199a2b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8199a2e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8199a32:	75 36                	jne    8199a6a <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x78>
 8199a34:	c7 44 24 10 78 1e ba 	movl   $0x8ba1e78,0x10(%esp)
 8199a3b:	08 
 8199a3c:	c7 44 24 0c f3 05 00 	movl   $0x5f3,0xc(%esp)
 8199a43:	00 
 8199a44:	c7 44 24 08 c0 2d ba 	movl   $0x8ba2dc0,0x8(%esp)
 8199a4b:	08 
 8199a4c:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8199a53:	08 
 8199a54:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8199a5b:	e8 aa a1 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8199a60:	bb f4 05 00 00       	mov    $0x5f4,%ebx
 8199a65:	e9 fa 02 00 00       	jmp    8199d64 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x372>
 8199a6a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8199a6d:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8199a71:	0f b7 d8             	movzwl %ax,%ebx
 8199a74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199a77:	89 04 24             	mov    %eax,(%esp)
 8199a7a:	e8 0f 08 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8199a7f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8199a86:	00 
 8199a87:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8199a8e:	00 
 8199a8f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8199a96:	00 
 8199a97:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8199a9b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8199aa2:	00 
 8199aa3:	89 04 24             	mov    %eax,(%esp)
 8199aa6:	e8 61 a5 36 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8199aab:	83 f0 01             	xor    $0x1,%eax
 8199aae:	84 c0                	test   %al,%al
 8199ab0:	74 25                	je     8199ad7 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0xe5>
 8199ab2:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8199ab9:	00 
 8199aba:	c7 44 24 04 49 02 00 	movl   $0x249,0x4(%esp)
 8199ac1:	00 
 8199ac2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199ac5:	89 04 24             	mov    %eax,(%esp)
 8199ac8:	e8 75 24 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8199acd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8199ad2:	e9 8d 02 00 00       	jmp    8199d64 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x372>
 8199ad7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8199ada:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8199ade:	0f b7 c0             	movzwl %ax,%eax
 8199ae1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8199ae5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8199aec:	00 
 8199aed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8199af4:	00 
 8199af5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199af8:	89 04 24             	mov    %eax,(%esp)
 8199afb:	e8 5a 2b 4e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8199b00:	eb 1d                	jmp    8199b1f <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x12d>
 8199b02:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199b05:	89 04 24             	mov    %eax,(%esp)
 8199b08:	e8 ab 07 f4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8199b0d:	83 c0 01             	add    $0x1,%eax
 8199b10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199b14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199b17:	89 04 24             	mov    %eax,(%esp)
 8199b1a:	e8 3d 0e 4e 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 8199b1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199b22:	89 04 24             	mov    %eax,(%esp)
 8199b25:	e8 8e 07 f4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8199b2a:	83 f8 13             	cmp    $0x13,%eax
 8199b2d:	0f 9e c0             	setle  %al
 8199b30:	84 c0                	test   %al,%al
 8199b32:	75 ce                	jne    8199b02 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x110>
 8199b34:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8199b37:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8199b3b:	0f b6 c0             	movzbl %al,%eax
 8199b3e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8199b41:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8199b48:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8199b4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8199b4f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8199b52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199b56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199b59:	89 04 24             	mov    %eax,(%esp)
 8199b5c:	e8 e7 14 4e 00       	call   867b048 <_ZN5CUser17ChangeGrowType_GMEii>
 8199b61:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8199b64:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8199b68:	3c 02                	cmp    $0x2,%al
 8199b6a:	0f 85 93 00 00 00    	jne    8199c03 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x211>
 8199b70:	eb 1d                	jmp    8199b8f <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x19d>
 8199b72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199b75:	89 04 24             	mov    %eax,(%esp)
 8199b78:	e8 3b 07 f4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8199b7d:	83 c0 01             	add    $0x1,%eax
 8199b80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199b84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199b87:	89 04 24             	mov    %eax,(%esp)
 8199b8a:	e8 cd 0d 4e 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 8199b8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199b92:	89 04 24             	mov    %eax,(%esp)
 8199b95:	e8 1e 07 f4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8199b9a:	83 f8 31             	cmp    $0x31,%eax
 8199b9d:	0f 9e c0             	setle  %al
 8199ba0:	84 c0                	test   %al,%al
 8199ba2:	75 ce                	jne    8199b72 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x180>
 8199ba4:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 8199bab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199bae:	89 04 24             	mov    %eax,(%esp)
 8199bb1:	e8 de 70 f7 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8199bb6:	0f be c0             	movsbl %al,%eax
 8199bb9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8199bbc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8199bc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199bc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199bc7:	89 04 24             	mov    %eax,(%esp)
 8199bca:	e8 79 14 4e 00       	call   867b048 <_ZN5CUser17ChangeGrowType_GMEii>
 8199bcf:	eb 1d                	jmp    8199bee <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x1fc>
 8199bd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199bd4:	89 04 24             	mov    %eax,(%esp)
 8199bd7:	e8 dc 06 f4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8199bdc:	83 c0 01             	add    $0x1,%eax
 8199bdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199be3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199be6:	89 04 24             	mov    %eax,(%esp)
 8199be9:	e8 6e 0d 4e 00       	call   867a95c <_ZN5CUser14SetCharacLevelEi>
 8199bee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199bf1:	89 04 24             	mov    %eax,(%esp)
 8199bf4:	e8 bf 06 f4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8199bf9:	83 f8 36             	cmp    $0x36,%eax
 8199bfc:	0f 9e c0             	setle  %al
 8199bff:	84 c0                	test   %al,%al
 8199c01:	75 ce                	jne    8199bd1 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x1df>
 8199c03:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199c06:	89 04 24             	mov    %eax,(%esp)
 8199c09:	e8 5c 28 4d 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 8199c0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199c11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199c15:	8b 45 08             	mov    0x8(%ebp),%eax
 8199c18:	89 04 24             	mov    %eax,(%esp)
 8199c1b:	e8 a4 f7 ff ff       	call   81993c4 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter14clearEpicQuestEP5CUser>
 8199c20:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8199c23:	89 04 24             	mov    %eax,(%esp)
 8199c26:	e8 21 41 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8199c2b:	8d 5d dc             	lea    -0x24(%ebp),%ebx
 8199c2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199c31:	89 04 24             	mov    %eax,(%esp)
 8199c34:	e8 6d 0c 00 00       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 8199c39:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8199c3d:	89 04 24             	mov    %eax,(%esp)
 8199c40:	e8 63 1f 51 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 8199c45:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8199c48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199c4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199c4f:	89 04 24             	mov    %eax,(%esp)
 8199c52:	e8 63 e9 4a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8199c57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199c5a:	89 04 24             	mov    %eax,(%esp)
 8199c5d:	e8 e2 13 4f 00       	call   868b044 <_ZN5CUser21send_clear_quest_listEv>
 8199c62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199c65:	89 04 24             	mov    %eax,(%esp)
 8199c68:	e8 b7 0f 4f 00       	call   868ac24 <_ZN5CUser12sendCharacQpEv>
 8199c6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199c70:	89 04 24             	mov    %eax,(%esp)
 8199c73:	e8 40 06 f4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8199c78:	89 c3                	mov    %eax,%ebx
 8199c7a:	e8 1c 25 f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8199c7f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8199c83:	89 04 24             	mov    %eax,(%esp)
 8199c86:	e8 b7 67 1c 00       	call   8360442 <_ZNK12CDataManager13get_level_expEi>
 8199c8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8199c8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199c91:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8199c94:	89 54 24 04          	mov    %edx,0x4(%esp)
 8199c98:	89 04 24             	mov    %eax,(%esp)
 8199c9b:	e8 dc 0b 00 00       	call   819a87c <_ZN15CUserCharacInfo15setCurCharacExpEi>
 8199ca0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8199ca3:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8199ca7:	0f b6 d0             	movzbl %al,%edx
 8199caa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8199cad:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8199cb1:	0f b6 c0             	movzbl %al,%eax
 8199cb4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8199cb8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8199cbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199cbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199cc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8199cc6:	89 04 24             	mov    %eax,(%esp)
 8199cc9:	e8 70 fa ff ff       	call   819973e <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhh>
 8199cce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8199cd5:	00 
 8199cd6:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 8199cdd:	00 
 8199cde:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8199ce5:	00 
 8199ce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199ce9:	89 04 24             	mov    %eax,(%esp)
 8199cec:	e8 6b 1d 4e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 8199cf1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8199cf8:	00 
 8199cf9:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8199d00:	00 
 8199d01:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8199d08:	00 
 8199d09:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199d0c:	89 04 24             	mov    %eax,(%esp)
 8199d0f:	e8 48 1d 4e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 8199d14:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8199d1b:	00 
 8199d1c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8199d23:	00 
 8199d24:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8199d2b:	00 
 8199d2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199d2f:	89 04 24             	mov    %eax,(%esp)
 8199d32:	e8 25 1d 4e 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 8199d37:	bb 00 00 00 00       	mov    $0x0,%ebx
 8199d3c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8199d3f:	89 04 24             	mov    %eax,(%esp)
 8199d42:	e8 39 41 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8199d47:	eb 1b                	jmp    8199d64 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter12dispatch_sigEP5CUserPci+0x372>
 8199d49:	89 d3                	mov    %edx,%ebx
 8199d4b:	89 c6                	mov    %eax,%esi
 8199d4d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8199d50:	89 04 24             	mov    %eax,(%esp)
 8199d53:	e8 28 41 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8199d58:	89 f0                	mov    %esi,%eax
 8199d5a:	89 da                	mov    %ebx,%edx
 8199d5c:	89 04 24             	mov    %eax,(%esp)
 8199d5f:	e8 ec 99 94 00       	call   8ae3750 <_Unwind_Resume>
 8199d64:	89 d8                	mov    %ebx,%eax
 8199d66:	83 c4 40             	add    $0x40,%esp
 8199d69:	5b                   	pop    %ebx
 8199d6a:	5e                   	pop    %esi
 8199d6b:	5d                   	pop    %ebp
 8199d6c:	c3                   	ret
 8199d6d:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig @ 0x81999f2

/* ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  UserQuest *this;
  CDataManager *this_00;
  undefined4 uVar5;
  PacketGuard local_28 [12];
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  if (param_2 == (char *)0x0) {
    uVar5 = 0x5e9;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar5 = 0x5ee;
    }
    else {
      local_1c = param_3;
      if (param_3 == 0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_InterDispatcher.cpp",
                   "virtual int ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::dispatch_sig(CUser*, char*, int)"
                   ,0x5f3,"JUMPING_CHARACTER INTER_DSP(SigAradJumpingCharacter) null.");
        uVar5 = 0x5f4;
      }
      else {
        uVar1 = *(undefined2 *)(param_3 + 0xb);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        cVar2 = CInventory::delete_item(pCVar4,1,uVar1,1,3,1);
        if (cVar2 == '\x01') {
          CUser::SendUpdateItemList((CUser *)param_2,1,0,*(undefined2 *)(local_1c + 0xb));
          while (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2), iVar3 < 0x14
                ) {
            iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
            CUser::SetCharacLevel((CUser *)param_2,iVar3 + 1);
          }
          local_18 = (uint)*(byte *)(local_1c + 10);
          local_14 = 0;
          CUser::ChangeGrowType_GM((CUser *)param_2,local_18,0);
          if (*(char *)(local_1c + 9) == '\x02') {
            while (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2),
                  iVar3 < 0x32) {
              iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
              CUser::SetCharacLevel((CUser *)param_2,iVar3 + 1);
            }
            local_14 = 1;
            cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_2);
            CUser::ChangeGrowType_GM((CUser *)param_2,(int)cVar2,local_14);
            while (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2),
                  iVar3 < 0x37) {
              iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
              CUser::SetCharacLevel((CUser *)param_2,iVar3 + 1);
            }
          }
          CUser::send_skill_info((CUser *)param_2);
          clearEpicQuest((Arad_INTER_kAradJumpingCharacter *)param_1,(CUser *)param_2);
          PacketGuard::PacketGuard(local_28);
          this = (UserQuest *)CUser::getCurCharacQuestR((CUser *)param_2);
                    /* try { // try from 08199c40 to 08199d36 has its CatchHandler @ 08199d49 */
          UserQuest::get_quest_info(this,(char *)local_28);
          CUser::Send((CUser *)param_2,local_28);
          CUser::send_clear_quest_list((CUser *)param_2);
          CUser::sendCharacQp((CUser *)param_2);
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
          this_00 = (CDataManager *)G_CDataManager();
          local_10 = CDataManager::get_level_exp(this_00,iVar3);
          CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)param_2,local_10);
          sendHelperBox((Arad_INTER_kAradJumpingCharacter *)param_1,(CUser *)param_2,
                        *(uchar *)(local_1c + 9),*(uchar *)(local_1c + 10));
          CUser::SendNotiPacket((CUser *)param_2,1,0x25,0);
          CUser::SendNotiPacket((CUser *)param_2,0,2,0);
          CUser::SendNotiPacket((CUser *)param_2,1,2,1);
          uVar5 = 0;
          PacketGuard::~PacketGuard(local_28);
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x249,0x13);
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}

```

---

## sendHelperBox

```asm
// === 0819973e ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox  [0x0819973e-0x81999f1] ===
 819973e:	55                   	push   %ebp
 819973f:	89 e5                	mov    %esp,%ebp
 8199741:	57                   	push   %edi
 8199742:	56                   	push   %esi
 8199743:	53                   	push   %ebx
 8199744:	81 ec ac 01 00 00    	sub    $0x1ac,%esp
 819974a:	8b 55 10             	mov    0x10(%ebp),%edx
 819974d:	8b 45 14             	mov    0x14(%ebp),%eax
 8199750:	88 95 84 fe ff ff    	mov    %dl,-0x17c(%ebp)
 8199756:	88 85 80 fe ff ff    	mov    %al,-0x180(%ebp)
 819975c:	8d 45 92             	lea    -0x6e(%ebp),%eax
 819975f:	89 04 24             	mov    %eax,(%esp)
 8199762:	e8 ed 20 f3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8199767:	80 bd 84 fe ff ff 01 	cmpb   $0x1,-0x17c(%ebp)
 819976e:	0f 85 88 00 00 00    	jne    81997fc <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhh+0xbe>
 8199774:	0f b6 85 80 fe ff ff 	movzbl -0x180(%ebp),%eax
 819977b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 819977e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8199785:	00 
 8199786:	c7 44 24 08 ae 1d ba 	movl   $0x8ba1dae,0x8(%esp)
 819978d:	08 
 819978e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8199795:	00 
 8199796:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 819979d:	e8 5c c0 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81997a2:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81997a9:	00 
 81997aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81997ae:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81997b1:	89 04 24             	mov    %eax,(%esp)
 81997b4:	e8 17 41 ee ff       	call   807d8d0 <strncpy@plt>
 81997b9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81997c0:	00 
 81997c1:	c7 44 24 08 c9 1d ba 	movl   $0x8ba1dc9,0x8(%esp)
 81997c8:	08 
 81997c9:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81997d0:	00 
 81997d1:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81997d8:	e8 21 c0 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81997dd:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 81997e4:	00 
 81997e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81997e9:	8d 85 92 fe ff ff    	lea    -0x16e(%ebp),%eax
 81997ef:	89 04 24             	mov    %eax,(%esp)
 81997f2:	e8 d9 40 ee ff       	call   807d8d0 <strncpy@plt>
 81997f7:	e9 86 00 00 00       	jmp    8199882 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhh+0x144>
 81997fc:	0f b6 85 80 fe ff ff 	movzbl -0x180(%ebp),%eax
 8199803:	83 c0 10             	add    $0x10,%eax
 8199806:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8199809:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8199810:	00 
 8199811:	c7 44 24 08 e3 1d ba 	movl   $0x8ba1de3,0x8(%esp)
 8199818:	08 
 8199819:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8199820:	00 
 8199821:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8199828:	e8 d1 bf 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 819982d:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8199834:	00 
 8199835:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199839:	8d 45 cf             	lea    -0x31(%ebp),%eax
 819983c:	89 04 24             	mov    %eax,(%esp)
 819983f:	e8 8c 40 ee ff       	call   807d8d0 <strncpy@plt>
 8199844:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819984b:	00 
 819984c:	c7 44 24 08 fe 1d ba 	movl   $0x8ba1dfe,0x8(%esp)
 8199853:	08 
 8199854:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 819985b:	00 
 819985c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8199863:	e8 96 bf 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8199868:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 819986f:	00 
 8199870:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199874:	8d 85 92 fe ff ff    	lea    -0x16e(%ebp),%eax
 819987a:	89 04 24             	mov    %eax,(%esp)
 819987d:	e8 4e 40 ee ff       	call   807d8d0 <strncpy@plt>
 8199882:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199885:	89 04 24             	mov    %eax,(%esp)
 8199888:	e8 93 46 f6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 819988d:	89 c3                	mov    %eax,%ebx
 819988f:	e8 07 29 f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8199894:	8d 90 c8 b4 00 00    	lea    0xb4c8(%eax),%edx
 819989a:	8d 45 92             	lea    -0x6e(%ebp),%eax
 819989d:	83 c0 02             	add    $0x2,%eax
 81998a0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81998a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81998a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81998ab:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81998af:	89 14 24             	mov    %edx,(%esp)
 81998b2:	e8 93 a9 71 00       	call   88b424a <_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm>
 81998b7:	83 f0 01             	xor    $0x1,%eax
 81998ba:	84 c0                	test   %al,%al
 81998bc:	0f 84 81 00 00 00    	je     8199943 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhh+0x205>
 81998c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81998c5:	89 04 24             	mov    %eax,(%esp)
 81998c8:	e8 53 46 f6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81998cd:	89 c6                	mov    %eax,%esi
 81998cf:	0f b6 bd 84 fe ff ff 	movzbl -0x17c(%ebp),%edi
 81998d6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81998dd:	ff 
 81998de:	8b 45 0c             	mov    0xc(%ebp),%eax
 81998e1:	89 04 24             	mov    %eax,(%esp)
 81998e4:	e8 b7 46 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81998e9:	89 c3                	mov    %eax,%ebx
 81998eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81998ee:	89 04 24             	mov    %eax,(%esp)
 81998f1:	e8 78 0a f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81998f6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81998f9:	89 54 24 24          	mov    %edx,0x24(%esp)
 81998fd:	89 74 24 20          	mov    %esi,0x20(%esp)
 8199901:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8199905:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8199909:	89 44 24 14          	mov    %eax,0x14(%esp)
 819990d:	c7 44 24 10 18 1e ba 	movl   $0x8ba1e18,0x10(%esp)
 8199914:	08 
 8199915:	c7 44 24 0c d5 05 00 	movl   $0x5d5,0xc(%esp)
 819991c:	00 
 819991d:	c7 44 24 08 40 2e ba 	movl   $0x8ba2e40,0x8(%esp)
 8199924:	08 
 8199925:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 819992c:	08 
 819992d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8199934:	e8 d1 a2 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8199939:	b8 00 00 00 00       	mov    $0x0,%eax
 819993e:	e9 a3 00 00 00       	jmp    81999e6 <_ZN4ARAD10DISPATCHER32Arad_INTER_kAradJumpingCharacter13sendHelperBoxEP5CUserhh+0x2a8>
 8199943:	e8 53 28 f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8199948:	8b 40 0c             	mov    0xc(%eax),%eax
 819994b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8199952:	00 
 8199953:	8d 55 92             	lea    -0x6e(%ebp),%edx
 8199956:	89 54 24 08          	mov    %edx,0x8(%esp)
 819995a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8199961:	00 
 8199962:	89 04 24             	mov    %eax,(%esp)
 8199965:	e8 4e 86 37 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 819996a:	c7 45 99 01 00 00 00 	movl   $0x1,-0x67(%ebp)
 8199971:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199974:	89 04 24             	mov    %eax,(%esp)
 8199977:	e8 14 23 f3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 819997c:	89 c3                	mov    %eax,%ebx
 819997e:	8d 85 92 fe ff ff    	lea    -0x16e(%ebp),%eax
 8199984:	89 04 24             	mov    %eax,(%esp)
 8199987:	e8 24 4a ee ff       	call   807e3b0 <strlen@plt>
 819998c:	89 c6                	mov    %eax,%esi
 819998e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199991:	89 04 24             	mov    %eax,(%esp)
 8199994:	e8 b5 22 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8199999:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81999a0:	00 
 81999a1:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81999a8:	00 
 81999a9:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81999ad:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81999b4:	00 
 81999b5:	89 74 24 14          	mov    %esi,0x14(%esp)
 81999b9:	8d 95 92 fe ff ff    	lea    -0x16e(%ebp),%edx
 81999bf:	89 54 24 10          	mov    %edx,0x10(%esp)
 81999c3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81999c7:	c7 44 24 08 a0 86 01 	movl   $0x186a0,0x8(%esp)
 81999ce:	00 
 81999cf:	8d 45 92             	lea    -0x6e(%ebp),%eax
 81999d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81999d6:	8d 45 cf             	lea    -0x31(%ebp),%eax
 81999d9:	89 04 24             	mov    %eax,(%esp)
 81999dc:	e8 07 bc 3b 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 81999e1:	b8 01 00 00 00       	mov    $0x1,%eax
 81999e6:	81 c4 ac 01 00 00    	add    $0x1ac,%esp
 81999ec:	5b                   	pop    %ebx
 81999ed:	5e                   	pop    %esi
 81999ee:	5f                   	pop    %edi
 81999ef:	5d                   	pop    %ebp
 81999f0:	c3                   	ret
 81999f1:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox @ 0x819973e

/* ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox(CUser*, unsigned char, unsigned
   char) */

bool __thiscall
ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox
          (Arad_INTER_kAradJumpingCharacter *this,CUser *param_1,uchar param_2,uchar param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  size_t sVar8;
  char local_172 [256];
  Inven_Item local_72 [2];
  ulong uStack_70;
  undefined4 local_6b;
  char local_35 [21];
  uint local_20;
  
  Inven_Item::Inven_Item(local_72);
  if (param_2 == '\x01') {
    local_20 = (uint)param_3;
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "jumping_character_title_01",(bool *)0x0);
    strncpy(local_35,pcVar2,0x14);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "jumping_character_mail_01",(bool *)0x0);
    strncpy(local_172,pcVar2,0xff);
  }
  else {
    local_20 = param_3 + 0x10;
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "jumping_character_title_02",(bool *)0x0);
    strncpy(local_35,pcVar2,0x14);
    pcVar2 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "jumping_character_mail_02",(bool *)0x0);
    strncpy(local_172,pcVar2,0xff);
  }
  iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar4 = G_CDataManager();
  cVar1 = SCRIPT::AradJumping_Script::getCurRewardItem
                    ((AradJumping_Script *)(iVar4 + 0xb4c8),iVar3,local_20,&uStack_70);
  if (cVar1 == '\x01') {
    iVar3 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar3 + 0xc),0,local_72,1);
    local_6b = 1;
    uVar5 = CUser::GetServerGroup(param_1);
    sVar8 = strlen(local_172);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_35,local_72,100000,uVar6,local_172,sVar8,0,uVar5,0,0);
  }
  else {
    uVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    uVar6 = CUser::get_charac_no(param_1,-1);
    uVar7 = CUser::get_acc_id(param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_InterDispatcher.cpp",
               "bool ARAD::DISPATCHER::Arad_INTER_kAradJumpingCharacter::sendHelperBox(CUser*, byte, byte)"
               ,0x5d5,
               "JUMPING CHARACTER : REWARD ERROR - m_id:%u, charac_no:%u, tickettype:%d, job:%d, growValue:%d"
               ,uVar7,uVar6,(uint)param_2,uVar5,local_20);
  }
  return cVar1 == '\x01';
}

```

