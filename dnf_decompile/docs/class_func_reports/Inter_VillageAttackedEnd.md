# Inter_VillageAttackedEnd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084df6a4 Inter_VillageAttackedEnd::dispatch_sig  [0x084df6a4-0x84dfadf] ===
 84df6a4:	55                   	push   %ebp
 84df6a5:	89 e5                	mov    %esp,%ebp
 84df6a7:	56                   	push   %esi
 84df6a8:	53                   	push   %ebx
 84df6a9:	83 ec 70             	sub    $0x70,%esp
 84df6ac:	e8 f6 ac bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84df6b1:	89 04 24             	mov    %eax,(%esp)
 84df6b4:	e8 65 1c c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84df6b9:	84 c0                	test   %al,%al
 84df6bb:	74 0a                	je     84df6c7 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x23>
 84df6bd:	b8 00 00 00 00       	mov    $0x0,%eax
 84df6c2:	e9 0e 04 00 00       	jmp    84dfad5 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x431>
 84df6c7:	8b 45 10             	mov    0x10(%ebp),%eax
 84df6ca:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84df6cd:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84df6d4:	e8 c5 c5 be ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84df6d9:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84df6dc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84df6df:	8b 40 0a             	mov    0xa(%eax),%eax
 84df6e2:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84df6e5:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84df6ec:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84df6f3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84df6f6:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 84df6f9:	72 11                	jb     84df70c <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x68>
 84df6fb:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84df6fe:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84df701:	89 d1                	mov    %edx,%ecx
 84df703:	29 c1                	sub    %eax,%ecx
 84df705:	89 c8                	mov    %ecx,%eax
 84df707:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84df70a:	eb 07                	jmp    84df713 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x6f>
 84df70c:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84df713:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84df716:	8b 50 12             	mov    0x12(%eax),%edx
 84df719:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84df71c:	8b 40 0e             	mov    0xe(%eax),%eax
 84df71f:	39 c2                	cmp    %eax,%edx
 84df721:	77 2f                	ja     84df752 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0xae>
 84df723:	a1 80 f7 41 09       	mov    0x941f780,%eax
 84df728:	89 04 24             	mov    %eax,(%esp)
 84df72b:	e8 ee e5 f9 ff       	call   847dd1e <_ZN16village_attacked15CRevengeDungeon18OpenRevengeDungeonEv>
 84df730:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84df733:	8b 40 0a             	mov    0xa(%eax),%eax
 84df736:	89 c2                	mov    %eax,%edx
 84df738:	a1 80 f7 41 09       	mov    0x941f780,%eax
 84df73d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df741:	89 04 24             	mov    %eax,(%esp)
 84df744:	e8 ed e5 f9 ff       	call   847dd36 <_ZN16village_attacked15CRevengeDungeon12SetCloseTimeEj>
 84df749:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 84df750:	eb 2d                	jmp    84df77f <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0xdb>
 84df752:	a1 80 f7 41 09       	mov    0x941f780,%eax
 84df757:	89 04 24             	mov    %eax,(%esp)
 84df75a:	e8 cb e5 f9 ff       	call   847dd2a <_ZN16village_attacked15CRevengeDungeon19CloseRevengeDungeonEv>
 84df75f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84df762:	8b 40 0a             	mov    0xa(%eax),%eax
 84df765:	89 c2                	mov    %eax,%edx
 84df767:	a1 80 f7 41 09       	mov    0x941f780,%eax
 84df76c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df770:	89 04 24             	mov    %eax,(%esp)
 84df773:	e8 be e5 f9 ff       	call   847dd36 <_ZN16village_attacked15CRevengeDungeon12SetCloseTimeEj>
 84df778:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 84df77f:	e8 23 ac bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84df784:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 84df78a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84df78d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df791:	89 04 24             	mov    %eax,(%esp)
 84df794:	e8 0d 81 c1 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 84df799:	83 ec 04             	sub    $0x4,%esp
 84df79c:	e9 e4 02 00 00       	jmp    84dfa85 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x3e1>
 84df7a1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84df7a4:	89 04 24             	mov    %eax,(%esp)
 84df7a7:	e8 98 81 c1 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 84df7ac:	8b 40 04             	mov    0x4(%eax),%eax
 84df7af:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84df7b2:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84df7b6:	0f 84 ac 02 00 00    	je     84dfa68 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x3c4>
 84df7bc:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84df7c3:	00 
 84df7c4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df7cb:	00 
 84df7cc:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 84df7cf:	89 04 24             	mov    %eax,(%esp)
 84df7d2:	e8 e9 e4 b9 ff       	call   807dcc0 <memset@plt>
 84df7d7:	8d 45 98             	lea    -0x68(%ebp),%eax
 84df7da:	89 04 24             	mov    %eax,(%esp)
 84df7dd:	e8 6a e5 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84df7e2:	8d 45 98             	lea    -0x68(%ebp),%eax
 84df7e5:	89 04 24             	mov    %eax,(%esp)
 84df7e8:	e8 f9 c0 be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84df7ed:	c7 44 24 08 ec 01 00 	movl   $0x1ec,0x8(%esp)
 84df7f4:	00 
 84df7f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df7fc:	00 
 84df7fd:	8d 45 98             	lea    -0x68(%ebp),%eax
 84df800:	89 04 24             	mov    %eax,(%esp)
 84df803:	e8 f4 c0 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84df808:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df80b:	89 04 24             	mov    %eax,(%esp)
 84df80e:	e8 e7 c9 00 00       	call   84ec1fa <_ZN15CUserCharacInfo25VillageAttack_NotDBUpdateEv>
 84df813:	83 7d d4 01          	cmpl   $0x1,-0x2c(%ebp)
 84df817:	0f 85 93 01 00 00    	jne    84df9b0 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x30c>
 84df81d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84df824:	00 
 84df825:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84df82c:	00 
 84df82d:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 84df834:	00 
 84df835:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df838:	89 04 24             	mov    %eax,(%esp)
 84df83b:	e8 50 2b c4 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 84df840:	c6 45 de 00          	movb   $0x0,-0x22(%ebp)
 84df844:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df847:	89 04 24             	mov    %eax,(%esp)
 84df84a:	e8 c7 c9 00 00       	call   84ec216 <_ZNK15CUserCharacInfo24GetCurVillageAttackCountEv>
 84df84f:	88 45 df             	mov    %al,-0x21(%ebp)
 84df852:	c6 45 a6 00          	movb   $0x0,-0x5a(%ebp)
 84df856:	c6 45 a7 00          	movb   $0x0,-0x59(%ebp)
 84df85a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84df85d:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84df860:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df863:	89 04 24             	mov    %eax,(%esp)
 84df866:	e8 21 ab bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84df86b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84df86e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84df871:	83 f8 02             	cmp    $0x2,%eax
 84df874:	7e 49                	jle    84df8bf <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x21b>
 84df876:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df879:	89 04 24             	mov    %eax,(%esp)
 84df87c:	e8 2d fa d4 ff       	call   822f2ae <_ZNK15CUserCharacInfo19getCurCharacFatigueEv>
 84df881:	0f b7 c0             	movzwl %ax,%eax
 84df884:	83 e8 05             	sub    $0x5,%eax
 84df887:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84df88a:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 84df891:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84df894:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df898:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df89b:	89 04 24             	mov    %eax,(%esp)
 84df89e:	e8 75 e9 ba ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 84df8a3:	8b 10                	mov    (%eax),%edx
 84df8a5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df8a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df8ac:	89 04 24             	mov    %eax,(%esp)
 84df8af:	e8 1a fa d4 ff       	call   822f2ce <_ZN15CUserCharacInfo19setCurCharacFatigueEi>
 84df8b4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df8b7:	89 04 24             	mov    %eax,(%esp)
 84df8ba:	e8 81 6c 17 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 84df8bf:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 84df8c3:	0f 85 94 01 00 00    	jne    84dfa5d <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x3b9>
 84df8c9:	c6 45 de 01          	movb   $0x1,-0x22(%ebp)
 84df8cd:	80 7d df 02          	cmpb   $0x2,-0x21(%ebp)
 84df8d1:	76 07                	jbe    84df8da <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x236>
 84df8d3:	c7 45 ac 41 1e 00 00 	movl   $0x1e41,-0x54(%ebp)
 84df8da:	80 7d de 00          	cmpb   $0x0,-0x22(%ebp)
 84df8de:	0f 84 09 01 00 00    	je     84df9ed <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x349>
 84df8e4:	e8 b2 c8 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84df8e9:	05 00 05 00 00       	add    $0x500,%eax
 84df8ee:	89 04 24             	mov    %eax,(%esp)
 84df8f1:	e8 7c 1d 01 00       	call   84f1672 <_ZNKSt6vectorI21ConditionEnterRevengeSaIS0_EE4sizeEv>
 84df8f6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84df8f9:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84df900:	e9 98 00 00 00       	jmp    84df99d <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x2f9>
 84df905:	e8 91 c8 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84df90a:	8d 90 00 05 00 00    	lea    0x500(%eax),%edx
 84df910:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84df913:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df917:	89 14 24             	mov    %edx,(%esp)
 84df91a:	e8 75 1d 01 00       	call   84f1694 <_ZNSt6vectorI21ConditionEnterRevengeSaIS0_EEixEj>
 84df91f:	8b 00                	mov    (%eax),%eax
 84df921:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84df924:	e8 72 c8 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84df929:	8d 90 00 05 00 00    	lea    0x500(%eax),%edx
 84df92f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84df932:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df936:	89 14 24             	mov    %edx,(%esp)
 84df939:	e8 56 1d 01 00       	call   84f1694 <_ZNSt6vectorI21ConditionEnterRevengeSaIS0_EEixEj>
 84df93e:	8b 40 04             	mov    0x4(%eax),%eax
 84df941:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84df944:	e8 52 c8 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84df949:	8d 90 00 05 00 00    	lea    0x500(%eax),%edx
 84df94f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84df952:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df956:	89 14 24             	mov    %edx,(%esp)
 84df959:	e8 36 1d 01 00       	call   84f1694 <_ZNSt6vectorI21ConditionEnterRevengeSaIS0_EEixEj>
 84df95e:	8b 40 08             	mov    0x8(%eax),%eax
 84df961:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84df964:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84df968:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 84df96b:	72 2c                	jb     84df999 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x2f5>
 84df96d:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 84df971:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84df974:	77 23                	ja     84df999 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x2f5>
 84df976:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84df979:	0f b6 d0             	movzbl %al,%edx
 84df97c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df97f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df983:	89 04 24             	mov    %eax,(%esp)
 84df986:	e8 d7 fd d4 ff       	call   822f762 <_ZN15CUserCharacInfo25SetCurRevengeDungeonCountEh>
 84df98b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df98e:	89 04 24             	mov    %eax,(%esp)
 84df991:	e8 48 c8 00 00       	call   84ec1de <_ZN15CUserCharacInfo22VillageAttack_DBUpdateEv>
 84df996:	90                   	nop
 84df997:	eb 55                	jmp    84df9ee <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x34a>
 84df999:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84df99d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84df9a0:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84df9a3:	0f 92 c0             	setb   %al
 84df9a6:	84 c0                	test   %al,%al
 84df9a8:	0f 85 57 ff ff ff    	jne    84df905 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x261>
 84df9ae:	eb 3e                	jmp    84df9ee <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x34a>
 84df9b0:	a1 80 f7 41 09       	mov    0x941f780,%eax
 84df9b5:	89 04 24             	mov    %eax,(%esp)
 84df9b8:	e8 6d e3 f9 ff       	call   847dd2a <_ZN16village_attacked15CRevengeDungeon19CloseRevengeDungeonEv>
 84df9bd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84df9c0:	8b 40 0a             	mov    0xa(%eax),%eax
 84df9c3:	89 c2                	mov    %eax,%edx
 84df9c5:	a1 80 f7 41 09       	mov    0x941f780,%eax
 84df9ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df9ce:	89 04 24             	mov    %eax,(%esp)
 84df9d1:	e8 60 e3 f9 ff       	call   847dd36 <_ZN16village_attacked15CRevengeDungeon12SetCloseTimeEj>
 84df9d6:	c6 45 a6 01          	movb   $0x1,-0x5a(%ebp)
 84df9da:	c6 45 a7 00          	movb   $0x0,-0x59(%ebp)
 84df9de:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84df9e1:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84df9e4:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 84df9eb:	eb 01                	jmp    84df9ee <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x34a>
 84df9ed:	90                   	nop
 84df9ee:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 84df9f1:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84df9f8:	00 
 84df9f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df9fd:	8d 45 98             	lea    -0x68(%ebp),%eax
 84dfa00:	89 04 24             	mov    %eax,(%esp)
 84dfa03:	e8 00 e5 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84dfa08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dfa0f:	00 
 84dfa10:	8d 45 98             	lea    -0x68(%ebp),%eax
 84dfa13:	89 04 24             	mov    %eax,(%esp)
 84dfa16:	e8 3d bf be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dfa1b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dfa22:	00 
 84dfa23:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84dfa26:	89 04 24             	mov    %eax,(%esp)
 84dfa29:	e8 22 ce 00 00       	call   84ec850 <_ZN5CUser24SetVillageAttackedRewardEb>
 84dfa2e:	8d 45 98             	lea    -0x68(%ebp),%eax
 84dfa31:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfa35:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84dfa38:	89 04 24             	mov    %eax,(%esp)
 84dfa3b:	e8 7a 8b 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dfa40:	eb 1b                	jmp    84dfa5d <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0x3b9>
 84dfa42:	89 d3                	mov    %edx,%ebx
 84dfa44:	89 c6                	mov    %eax,%esi
 84dfa46:	8d 45 98             	lea    -0x68(%ebp),%eax
 84dfa49:	89 04 24             	mov    %eax,(%esp)
 84dfa4c:	e8 2f e4 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dfa51:	89 f0                	mov    %esi,%eax
 84dfa53:	89 da                	mov    %ebx,%edx
 84dfa55:	89 04 24             	mov    %eax,(%esp)
 84dfa58:	e8 f3 3c 60 00       	call   8ae3750 <_Unwind_Resume>
 84dfa5d:	8d 45 98             	lea    -0x68(%ebp),%eax
 84dfa60:	89 04 24             	mov    %eax,(%esp)
 84dfa63:	e8 18 e4 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dfa68:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84dfa6b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dfa72:	00 
 84dfa73:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84dfa76:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dfa7a:	89 04 24             	mov    %eax,(%esp)
 84dfa7d:	e8 84 7e c1 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 84dfa82:	83 ec 04             	sub    $0x4,%esp
 84dfa85:	e8 1d a9 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dfa8a:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 84dfa90:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dfa93:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dfa97:	89 04 24             	mov    %eax,(%esp)
 84dfa9a:	e8 2d 7e c1 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 84dfa9f:	83 ec 04             	sub    $0x4,%esp
 84dfaa2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84dfaa5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dfaa9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84dfaac:	89 04 24             	mov    %eax,(%esp)
 84dfaaf:	e8 3e 7e c1 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 84dfab4:	84 c0                	test   %al,%al
 84dfab6:	0f 85 e5 fc ff ff    	jne    84df7a1 <_ZN24Inter_VillageAttackedEnd12dispatch_sigEP5CUserPci+0xfd>
 84dfabc:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 84dfac1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84dfac4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dfac8:	89 04 24             	mov    %eax,(%esp)
 84dfacb:	e8 04 49 1d 00       	call   86b43d4 <_ZN16village_attacked18CVillageMonsterMgr23OnDestroyVillageMonsterE28ENUM_VILLAGE_ATTACKED_REWARD>
 84dfad0:	b8 00 00 00 00       	mov    $0x0,%eax
 84dfad5:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84dfad8:	83 c4 00             	add    $0x0,%esp
 84dfadb:	5b                   	pop    %ebx
 84dfadc:	5e                   	pop    %esi
 84dfadd:	5d                   	pop    %ebp
 84dfade:	c3                   	ret
 84dfadf:	90                   	nop

```

```c
// Inter_VillageAttackedEnd::dispatch_sig @ 0x84df6a4

/* Inter_VillageAttackedEnd::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedEnd::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  GameWorld *this;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  PacketGuard local_6c [14];
  char local_5e [2];
  int local_5c;
  undefined4 local_58;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_54 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_50 [4];
  int local_4c [2];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_44 [4];
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  CUserCharacInfo *local_2c;
  undefined1 local_26;
  byte local_25;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  this = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar1 == '\0') {
    local_40 = param_3;
    local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_38 = *(uint *)(local_40 + 10);
    local_30 = 0;
    if (local_38 < local_3c) {
      local_34 = 0;
    }
    else {
      local_34 = local_38 - local_3c;
    }
    if (*(uint *)(local_40 + 0xe) < *(uint *)(local_40 + 0x12)) {
      village_attacked::CRevengeDungeon::CloseRevengeDungeon(GlobalData::s_revengeDungeonMgr);
      village_attacked::CRevengeDungeon::SetCloseTime
                (GlobalData::s_revengeDungeonMgr,*(uint *)(local_40 + 10));
      local_30 = 2;
    }
    else {
      village_attacked::CRevengeDungeon::OpenRevengeDungeon(GlobalData::s_revengeDungeonMgr);
      village_attacked::CRevengeDungeon::SetCloseTime
                (GlobalData::s_revengeDungeonMgr,*(uint *)(local_40 + 10));
      local_30 = 1;
    }
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_54);
    while( true ) {
      G_GameWorld();
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_50);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_54,
                         (_Rb_tree_iterator *)local_50);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_54);
      local_2c = *(CUserCharacInfo **)(iVar2 + 4);
      if (local_2c != (CUserCharacInfo *)0x0) {
        memset(local_5e,0,10);
        PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 084df7e8 to 084dfa3f has its CatchHandler @ 084dfa42 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_6c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0x1ec);
        CUserCharacInfo::VillageAttack_NotDBUpdate(local_2c);
        if (local_30 == 1) {
          APSystem::CUserProc::ClearActionAndSendtoUser(local_2c,0x17,0,0);
          local_26 = 0;
          local_25 = CUserCharacInfo::GetCurVillageAttackCount(local_2c);
          local_5e[0] = '\0';
          local_5e[1] = 0;
          local_5c = local_34;
          local_24 = CUser::get_state((CUser *)local_2c);
          if (2 < local_24) {
            uVar3 = CUserCharacInfo::getCurCharacFatigue(local_2c);
            local_4c[0] = (uVar3 & 0xffff) - 5;
            local_4c[1] = 0;
            piVar4 = std::max<int>(local_4c + 1,local_4c);
            CUserCharacInfo::setCurCharacFatigue(local_2c,*piVar4);
            CUser::SendFatigue((CUser *)local_2c);
          }
          if (local_24 == 3) {
            local_26 = 1;
            if (2 < local_25) {
              local_58 = 0x1e41;
            }
            iVar2 = G_CDataManager();
            local_20 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                       size((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>> *)
                            (iVar2 + 0x500));
            for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
              iVar2 = G_CDataManager();
              puVar5 = (uint *)std::
                               vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                               operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                           *)(iVar2 + 0x500),local_1c);
              local_18 = *puVar5;
              iVar2 = G_CDataManager();
              iVar2 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                      operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                  *)(iVar2 + 0x500),local_1c);
              local_14 = *(uint *)(iVar2 + 4);
              iVar2 = G_CDataManager();
              iVar2 = std::vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>::
                      operator[]((vector<ConditionEnterRevenge,std::allocator<ConditionEnterRevenge>>
                                  *)(iVar2 + 0x500),local_1c);
              local_10 = *(undefined4 *)(iVar2 + 8);
              if ((local_18 <= local_25) && (local_25 <= local_14)) {
                CUserCharacInfo::SetCurRevengeDungeonCount(local_2c,(uchar)local_10);
                CUserCharacInfo::VillageAttack_DBUpdate(local_2c);
                break;
              }
            }
            goto LAB_084df9ee;
          }
        }
        else {
          village_attacked::CRevengeDungeon::CloseRevengeDungeon(GlobalData::s_revengeDungeonMgr);
          village_attacked::CRevengeDungeon::SetCloseTime
                    (GlobalData::s_revengeDungeonMgr,*(uint *)(local_40 + 10));
          local_5e[0] = '\x01';
          local_5e[1] = 0;
          local_5c = local_34;
          local_58 = 0;
LAB_084df9ee:
          InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_6c,local_5e,10);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
          CUser::SetVillageAttackedReward((CUser *)local_2c,false);
          CUser::Send((CUser *)local_2c,local_6c);
        }
        PacketGuard::~PacketGuard(local_6c);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_44,(int)local_54);
    }
    village_attacked::CVillageMonsterMgr::OnDestroyVillageMonster
              (GlobalData::s_villageMonsterMgr,local_30);
  }
  return 0;
}

```

