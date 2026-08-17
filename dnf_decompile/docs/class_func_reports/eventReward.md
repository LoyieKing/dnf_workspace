# eventReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## ImportRewardScript

```asm
// === 080ef3a2 eventReward::ImportRewardScript  [0x080ef3a2-0x80f026f] ===
 80ef3a2:	55                   	push   %ebp
 80ef3a3:	89 e5                	mov    %esp,%ebp
 80ef3a5:	57                   	push   %edi
 80ef3a6:	56                   	push   %esi
 80ef3a7:	53                   	push   %ebx
 80ef3a8:	81 ec 1c 02 00 00    	sub    $0x21c,%esp
 80ef3ae:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef3b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef3b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef3b8:	89 04 24             	mov    %eax,(%esp)
 80ef3bb:	e8 69 c9 7c 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 80ef3c0:	83 f0 01             	xor    $0x1,%eax
 80ef3c3:	84 c0                	test   %al,%al
 80ef3c5:	74 0a                	je     80ef3d1 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x2f>
 80ef3c7:	bb 00 00 00 00       	mov    $0x0,%ebx
 80ef3cc:	e9 91 0e 00 00       	jmp    80f0262 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xec0>
 80ef3d1:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 80ef3d7:	89 04 24             	mov    %eax,(%esp)
 80ef3da:	e8 f1 71 61 00       	call   87065d0 <_ZNSsC1Ev>
 80ef3df:	c6 85 77 fe ff ff 00 	movb   $0x0,-0x189(%ebp)
 80ef3e6:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 80ef3ec:	89 04 24             	mov    %eax,(%esp)
 80ef3ef:	e8 66 20 00 00       	call   80f145a <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEEC1Ev>
 80ef3f4:	8d 85 57 fe ff ff    	lea    -0x1a9(%ebp),%eax
 80ef3fa:	89 04 24             	mov    %eax,(%esp)
 80ef3fd:	e8 ee 1d 00 00       	call   80f11f0 <_ZN9rewardKeyC1Ev>
 80ef402:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80ef409:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 80ef40f:	89 04 24             	mov    %eax,(%esp)
 80ef412:	e8 1d 1d 00 00       	call   80f1134 <_ZN8itemDataC1Ev>
 80ef417:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80ef41e:	00 
 80ef41f:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 80ef425:	89 04 24             	mov    %eax,(%esp)
 80ef428:	e8 32 d4 7c 00       	call   88bc85f <_Z8ScanTypeRSsb>
 80ef42d:	83 f0 01             	xor    $0x1,%eax
 80ef430:	84 c0                	test   %al,%al
 80ef432:	0f 85 c9 0d 00 00    	jne    80f0201 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe5f>
 80ef438:	b8 28 ab 3f 09       	mov    $0x93fab28,%eax
 80ef43d:	0f b6 00             	movzbl (%eax),%eax
 80ef440:	84 c0                	test   %al,%al
 80ef442:	75 70                	jne    80ef4b4 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x112>
 80ef444:	c7 04 24 28 ab 3f 09 	movl   $0x93fab28,(%esp)
 80ef44b:	e8 e0 5e 63 00       	call   8725330 <__cxa_guard_acquire>
 80ef450:	85 c0                	test   %eax,%eax
 80ef452:	0f 95 c0             	setne  %al
 80ef455:	84 c0                	test   %al,%al
 80ef457:	74 5b                	je     80ef4b4 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x112>
 80ef459:	be 00 00 00 00       	mov    $0x0,%esi
 80ef45e:	c7 04 24 38 ab 3f 09 	movl   $0x93fab38,(%esp)
 80ef465:	e8 6a 20 00 00       	call   80f14d4 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEEC1Ev>
 80ef46a:	c7 04 24 28 ab 3f 09 	movl   $0x93fab28,(%esp)
 80ef471:	e8 da 5d 63 00       	call   8725250 <__cxa_guard_release>
 80ef476:	b8 7a 13 0f 08       	mov    $0x80f137a,%eax
 80ef47b:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 80ef482:	08 
 80ef483:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80ef48a:	09 
 80ef48b:	89 04 24             	mov    %eax,(%esp)
 80ef48e:	e8 3d e9 f8 ff       	call   807ddd0 <__cxa_atexit@plt>
 80ef493:	eb 1f                	jmp    80ef4b4 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x112>
 80ef495:	89 d3                	mov    %edx,%ebx
 80ef497:	89 c7                	mov    %eax,%edi
 80ef499:	89 f0                	mov    %esi,%eax
 80ef49b:	84 c0                	test   %al,%al
 80ef49d:	75 0c                	jne    80ef4ab <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x109>
 80ef49f:	c7 04 24 28 ab 3f 09 	movl   $0x93fab28,(%esp)
 80ef4a6:	e8 15 5e 63 00       	call   87252c0 <__cxa_guard_abort>
 80ef4ab:	89 f8                	mov    %edi,%eax
 80ef4ad:	89 da                	mov    %ebx,%edx
 80ef4af:	e9 5a 0d 00 00       	jmp    80f020e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe6c>
 80ef4b4:	b8 30 ab 3f 09       	mov    $0x93fab30,%eax
 80ef4b9:	0f b6 00             	movzbl (%eax),%eax
 80ef4bc:	84 c0                	test   %al,%al
 80ef4be:	75 70                	jne    80ef530 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x18e>
 80ef4c0:	c7 04 24 30 ab 3f 09 	movl   $0x93fab30,(%esp)
 80ef4c7:	e8 64 5e 63 00       	call   8725330 <__cxa_guard_acquire>
 80ef4cc:	85 c0                	test   %eax,%eax
 80ef4ce:	0f 95 c0             	setne  %al
 80ef4d1:	84 c0                	test   %al,%al
 80ef4d3:	74 5b                	je     80ef530 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x18e>
 80ef4d5:	be 00 00 00 00       	mov    $0x0,%esi
 80ef4da:	c7 04 24 50 ab 3f 09 	movl   $0x93fab50,(%esp)
 80ef4e1:	e8 3c 40 9e 00       	call   8ad3522 <_ZN8SpinLockC1Ev>
 80ef4e6:	c7 04 24 30 ab 3f 09 	movl   $0x93fab30,(%esp)
 80ef4ed:	e8 5e 5d 63 00       	call   8725250 <__cxa_guard_release>
 80ef4f2:	b8 3e 35 ad 08       	mov    $0x8ad353e,%eax
 80ef4f7:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 80ef4fe:	08 
 80ef4ff:	c7 44 24 04 50 ab 3f 	movl   $0x93fab50,0x4(%esp)
 80ef506:	09 
 80ef507:	89 04 24             	mov    %eax,(%esp)
 80ef50a:	e8 c1 e8 f8 ff       	call   807ddd0 <__cxa_atexit@plt>
 80ef50f:	eb 1f                	jmp    80ef530 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x18e>
 80ef511:	89 d3                	mov    %edx,%ebx
 80ef513:	89 c7                	mov    %eax,%edi
 80ef515:	89 f0                	mov    %esi,%eax
 80ef517:	84 c0                	test   %al,%al
 80ef519:	75 0c                	jne    80ef527 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x185>
 80ef51b:	c7 04 24 30 ab 3f 09 	movl   $0x93fab30,(%esp)
 80ef522:	e8 99 5d 63 00       	call   87252c0 <__cxa_guard_abort>
 80ef527:	89 f8                	mov    %edi,%eax
 80ef529:	89 da                	mov    %ebx,%edx
 80ef52b:	e9 de 0c 00 00       	jmp    80f020e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe6c>
 80ef530:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80ef537:	84 c0                	test   %al,%al
 80ef539:	0f 84 b9 00 00 00    	je     80ef5f8 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x256>
 80ef53f:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 80ef545:	89 04 24             	mov    %eax,(%esp)
 80ef548:	e8 a3 6f 61 00       	call   87064f0 <_ZNKSs5c_strEv>
 80ef54d:	89 85 80 fe ff ff    	mov    %eax,-0x180(%ebp)
 80ef553:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
 80ef559:	8d 95 80 fe ff ff    	lea    -0x180(%ebp),%edx
 80ef55f:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ef563:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80ef56a:	09 
 80ef56b:	89 04 24             	mov    %eax,(%esp)
 80ef56e:	e8 db 1f 00 00       	call   80f154e <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE4findERS4_>
 80ef573:	83 ec 04             	sub    $0x4,%esp
 80ef576:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
 80ef57c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef580:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 80ef586:	89 04 24             	mov    %eax,(%esp)
 80ef589:	e8 ec 1f 00 00       	call   80f157a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKPKciEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 80ef58e:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 80ef594:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80ef59b:	09 
 80ef59c:	89 04 24             	mov    %eax,(%esp)
 80ef59f:	e8 e6 1f 00 00       	call   80f158a <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE3endEv>
 80ef5a4:	83 ec 04             	sub    $0x4,%esp
 80ef5a7:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 80ef5ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef5b1:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 80ef5b7:	89 04 24             	mov    %eax,(%esp)
 80ef5ba:	e8 bb 1f 00 00       	call   80f157a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKPKciEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 80ef5bf:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 80ef5c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef5c9:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 80ef5cf:	89 04 24             	mov    %eax,(%esp)
 80ef5d2:	e8 d9 1f 00 00       	call   80f15b0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKPKciEEneERKS5_>
 80ef5d7:	84 c0                	test   %al,%al
 80ef5d9:	74 13                	je     80ef5ee <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x24c>
 80ef5db:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 80ef5e1:	89 04 24             	mov    %eax,(%esp)
 80ef5e4:	e8 db 1f 00 00       	call   80f15c4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKPKciEEptEv>
 80ef5e9:	8b 40 04             	mov    0x4(%eax),%eax
 80ef5ec:	eb 05                	jmp    80ef5f3 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x251>
 80ef5ee:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80ef5f3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80ef5f6:	eb 30                	jmp    80ef628 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x286>
 80ef5f8:	c7 04 24 50 ab 3f 09 	movl   $0x93fab50,(%esp)
 80ef5ff:	e8 4e 3f 9e 00       	call   8ad3552 <_ZN8SpinLock5enterEv>
 80ef604:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80ef60b:	84 c0                	test   %al,%al
 80ef60d:	74 12                	je     80ef621 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x27f>
 80ef60f:	c7 04 24 50 ab 3f 09 	movl   $0x93fab50,(%esp)
 80ef616:	e8 6b 3f 9e 00       	call   8ad3586 <_ZN8SpinLock5leaveEv>
 80ef61b:	90                   	nop
 80ef61c:	e9 17 fe ff ff       	jmp    80ef438 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x96>
 80ef621:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80ef628:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80ef62b:	3d af 00 00 00       	cmp    $0xaf,%eax
 80ef630:	0f 84 93 03 00 00    	je     80ef9c9 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x627>
 80ef636:	3d af 00 00 00       	cmp    $0xaf,%eax
 80ef63b:	7f 32                	jg     80ef66f <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x2cd>
 80ef63d:	3d 8f 00 00 00       	cmp    $0x8f,%eax
 80ef642:	74 73                	je     80ef6b7 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x315>
 80ef644:	3d 8f 00 00 00       	cmp    $0x8f,%eax
 80ef649:	7f 09                	jg     80ef654 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x2b2>
 80ef64b:	85 c0                	test   %eax,%eax
 80ef64d:	74 68                	je     80ef6b7 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x315>
 80ef64f:	e9 81 0b 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80ef654:	3d 93 00 00 00       	cmp    $0x93,%eax
 80ef659:	0f 84 bf 00 00 00    	je     80ef71e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x37c>
 80ef65f:	3d a3 00 00 00       	cmp    $0xa3,%eax
 80ef664:	0f 84 f3 01 00 00    	je     80ef85d <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x4bb>
 80ef66a:	e9 66 0b 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80ef66f:	3d fc 00 00 00       	cmp    $0xfc,%eax
 80ef674:	0f 84 6b 09 00 00    	je     80effe5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xc43>
 80ef67a:	3d fc 00 00 00       	cmp    $0xfc,%eax
 80ef67f:	7f 1b                	jg     80ef69c <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x2fa>
 80ef681:	3d b9 00 00 00       	cmp    $0xb9,%eax
 80ef686:	0f 84 0c 04 00 00    	je     80efa98 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x6f6>
 80ef68c:	3d d8 00 00 00       	cmp    $0xd8,%eax
 80ef691:	0f 84 8f 06 00 00    	je     80efd26 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x984>
 80ef697:	e9 39 0b 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80ef69c:	3d 02 01 00 00       	cmp    $0x102,%eax
 80ef6a1:	0f 84 66 0a 00 00    	je     80f010d <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xd6b>
 80ef6a7:	3d 07 01 00 00       	cmp    $0x107,%eax
 80ef6ac:	0f 84 c7 0a 00 00    	je     80f0179 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xdd7>
 80ef6b2:	e9 1e 0b 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80ef6b7:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80ef6be:	83 f0 01             	xor    $0x1,%eax
 80ef6c1:	84 c0                	test   %al,%al
 80ef6c3:	74 4f                	je     80ef714 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x372>
 80ef6c5:	c7 85 9c fe ff ff 8f 	movl   $0x8f,-0x164(%ebp)
 80ef6cc:	00 00 00 
 80ef6cf:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 80ef6d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ef6d9:	c7 44 24 04 31 a2 b3 	movl   $0x8b3a231,0x4(%esp)
 80ef6e0:	08 
 80ef6e1:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 80ef6e7:	89 04 24             	mov    %eax,(%esp)
 80ef6ea:	e8 e3 1e 00 00       	call   80f15d2 <_ZNSt4pairIKPKciEC1IRA10_S0_iEEOT_OT0_>
 80ef6ef:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 80ef6f5:	8d 95 94 fe ff ff    	lea    -0x16c(%ebp),%edx
 80ef6fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ef6ff:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80ef706:	09 
 80ef707:	89 04 24             	mov    %eax,(%esp)
 80ef70a:	e8 f1 1e 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80ef70f:	83 ec 04             	sub    $0x4,%esp
 80ef712:	eb 0a                	jmp    80ef71e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x37c>
 80ef714:	bb 01 00 00 00       	mov    $0x1,%ebx
 80ef719:	e9 08 0b 00 00       	jmp    80f0226 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe84>
 80ef71e:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80ef725:	83 f0 01             	xor    $0x1,%eax
 80ef728:	84 c0                	test   %al,%al
 80ef72a:	74 52                	je     80ef77e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x3dc>
 80ef72c:	c7 85 b0 fe ff ff 93 	movl   $0x93,-0x150(%ebp)
 80ef733:	00 00 00 
 80ef736:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 80ef73c:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ef740:	c7 44 24 04 3b a2 b3 	movl   $0x8b3a23b,0x4(%esp)
 80ef747:	08 
 80ef748:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 80ef74e:	89 04 24             	mov    %eax,(%esp)
 80ef751:	e8 d6 1e 00 00       	call   80f162c <_ZNSt4pairIKPKciEC1IRA11_S0_iEEOT_OT0_>
 80ef756:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 80ef75c:	8d 95 a8 fe ff ff    	lea    -0x158(%ebp),%edx
 80ef762:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ef766:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80ef76d:	09 
 80ef76e:	89 04 24             	mov    %eax,(%esp)
 80ef771:	e8 8a 1e 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80ef776:	83 ec 04             	sub    $0x4,%esp
 80ef779:	e9 df 00 00 00       	jmp    80ef85d <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x4bb>
 80ef77e:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 80ef784:	89 04 24             	mov    %eax,(%esp)
 80ef787:	e8 44 6e 61 00       	call   87065d0 <_ZNSsC1Ev>
 80ef78c:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 80ef792:	89 04 24             	mov    %eax,(%esp)
 80ef795:	e8 08 d0 7c 00       	call   88bc7a2 <_Z7ScanStrPSs>
 80ef79a:	83 f0 01             	xor    $0x1,%eax
 80ef79d:	84 c0                	test   %al,%al
 80ef79f:	74 0f                	je     80ef7b0 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x40e>
 80ef7a1:	bb 00 00 00 00       	mov    $0x0,%ebx
 80ef7a6:	be 00 00 00 00       	mov    $0x0,%esi
 80ef7ab:	e9 92 00 00 00       	jmp    80ef842 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x4a0>
 80ef7b0:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 80ef7b6:	89 04 24             	mov    %eax,(%esp)
 80ef7b9:	e8 51 c4 8c 00       	call   89bbc0f <_Z26getCharacterJobToEnumValueRSs>
 80ef7be:	88 85 57 fe ff ff    	mov    %al,-0x1a9(%ebp)
 80ef7c4:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80ef7ca:	89 04 24             	mov    %eax,(%esp)
 80ef7cd:	e8 a9 cb 7c 00       	call   88bc37b <_Z7ScanIntPb>
 80ef7d2:	88 85 58 fe ff ff    	mov    %al,-0x1a8(%ebp)
 80ef7d8:	0f b6 85 77 fe ff ff 	movzbl -0x189(%ebp),%eax
 80ef7df:	83 f0 01             	xor    $0x1,%eax
 80ef7e2:	84 c0                	test   %al,%al
 80ef7e4:	74 0c                	je     80ef7f2 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x450>
 80ef7e6:	bb 00 00 00 00       	mov    $0x0,%ebx
 80ef7eb:	be 00 00 00 00       	mov    $0x0,%esi
 80ef7f0:	eb 50                	jmp    80ef842 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x4a0>
 80ef7f2:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80ef7f8:	89 04 24             	mov    %eax,(%esp)
 80ef7fb:	e8 7b cb 7c 00       	call   88bc37b <_Z7ScanIntPb>
 80ef800:	88 85 59 fe ff ff    	mov    %al,-0x1a7(%ebp)
 80ef806:	0f b6 85 77 fe ff ff 	movzbl -0x189(%ebp),%eax
 80ef80d:	83 f0 01             	xor    $0x1,%eax
 80ef810:	84 c0                	test   %al,%al
 80ef812:	74 0c                	je     80ef820 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x47e>
 80ef814:	bb 00 00 00 00       	mov    $0x0,%ebx
 80ef819:	be 00 00 00 00       	mov    $0x0,%esi
 80ef81e:	eb 22                	jmp    80ef842 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x4a0>
 80ef820:	be 01 00 00 00       	mov    $0x1,%esi
 80ef825:	eb 1b                	jmp    80ef842 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x4a0>
 80ef827:	89 d3                	mov    %edx,%ebx
 80ef829:	89 c6                	mov    %eax,%esi
 80ef82b:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 80ef831:	89 04 24             	mov    %eax,(%esp)
 80ef834:	e8 a7 83 61 00       	call   8707be0 <_ZNSsD1Ev>
 80ef839:	89 f0                	mov    %esi,%eax
 80ef83b:	89 da                	mov    %ebx,%edx
 80ef83d:	e9 cc 09 00 00       	jmp    80f020e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe6c>
 80ef842:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 80ef848:	89 04 24             	mov    %eax,(%esp)
 80ef84b:	e8 90 83 61 00       	call   8707be0 <_ZNSsD1Ev>
 80ef850:	85 f6                	test   %esi,%esi
 80ef852:	0f 84 ce 09 00 00    	je     80f0226 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe84>
 80ef858:	e9 78 09 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80ef85d:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80ef864:	83 f0 01             	xor    $0x1,%eax
 80ef867:	84 c0                	test   %al,%al
 80ef869:	74 52                	je     80ef8bd <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x51b>
 80ef86b:	c7 85 c4 fe ff ff a3 	movl   $0xa3,-0x13c(%ebp)
 80ef872:	00 00 00 
 80ef875:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 80ef87b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ef87f:	c7 44 24 04 46 a2 b3 	movl   $0x8b3a246,0x4(%esp)
 80ef886:	08 
 80ef887:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 80ef88d:	89 04 24             	mov    %eax,(%esp)
 80ef890:	e8 97 1d 00 00       	call   80f162c <_ZNSt4pairIKPKciEC1IRA11_S0_iEEOT_OT0_>
 80ef895:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 80ef89b:	8d 95 bc fe ff ff    	lea    -0x144(%ebp),%edx
 80ef8a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ef8a5:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80ef8ac:	09 
 80ef8ad:	89 04 24             	mov    %eax,(%esp)
 80ef8b0:	e8 4b 1d 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80ef8b5:	83 ec 04             	sub    $0x4,%esp
 80ef8b8:	e9 0c 01 00 00       	jmp    80ef9c9 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x627>
 80ef8bd:	8d 85 3c fe ff ff    	lea    -0x1c4(%ebp),%eax
 80ef8c3:	89 04 24             	mov    %eax,(%esp)
 80ef8c6:	e8 05 6d 61 00       	call   87065d0 <_ZNSsC1Ev>
 80ef8cb:	8d 85 3c fe ff ff    	lea    -0x1c4(%ebp),%eax
 80ef8d1:	89 04 24             	mov    %eax,(%esp)
 80ef8d4:	e8 c9 ce 7c 00       	call   88bc7a2 <_Z7ScanStrPSs>
 80ef8d9:	83 f0 01             	xor    $0x1,%eax
 80ef8dc:	84 c0                	test   %al,%al
 80ef8de:	74 0f                	je     80ef8ef <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x54d>
 80ef8e0:	bb 00 00 00 00       	mov    $0x0,%ebx
 80ef8e5:	be 00 00 00 00       	mov    $0x0,%esi
 80ef8ea:	e9 bf 00 00 00       	jmp    80ef9ae <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x60c>
 80ef8ef:	8d 85 3c fe ff ff    	lea    -0x1c4(%ebp),%eax
 80ef8f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef8f9:	8b 45 08             	mov    0x8(%ebp),%eax
 80ef8fc:	89 04 24             	mov    %eax,(%esp)
 80ef8ff:	e8 bc f7 ff ff       	call   80ef0c0 <_ZN11eventReward13getSubKeyTypeERSs>
 80ef904:	88 85 5a fe ff ff    	mov    %al,-0x1a6(%ebp)
 80ef90a:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 80ef910:	89 04 24             	mov    %eax,(%esp)
 80ef913:	e8 b8 6c 61 00       	call   87065d0 <_ZNSsC1Ev>
 80ef918:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 80ef91e:	89 04 24             	mov    %eax,(%esp)
 80ef921:	e8 7c ce 7c 00       	call   88bc7a2 <_Z7ScanStrPSs>
 80ef926:	83 f0 01             	xor    $0x1,%eax
 80ef929:	84 c0                	test   %al,%al
 80ef92b:	74 0c                	je     80ef939 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x597>
 80ef92d:	bb 00 00 00 00       	mov    $0x0,%ebx
 80ef932:	be 00 00 00 00       	mov    $0x0,%esi
 80ef937:	eb 3a                	jmp    80ef973 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x5d1>
 80ef939:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 80ef93f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef943:	8b 45 08             	mov    0x8(%ebp),%eax
 80ef946:	89 04 24             	mov    %eax,(%esp)
 80ef949:	e8 da f7 ff ff       	call   80ef128 <_ZN11eventReward15getSubKeyActionERSs>
 80ef94e:	88 85 5b fe ff ff    	mov    %al,-0x1a5(%ebp)
 80ef954:	be 01 00 00 00       	mov    $0x1,%esi
 80ef959:	eb 18                	jmp    80ef973 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x5d1>
 80ef95b:	89 d3                	mov    %edx,%ebx
 80ef95d:	89 c6                	mov    %eax,%esi
 80ef95f:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 80ef965:	89 04 24             	mov    %eax,(%esp)
 80ef968:	e8 73 82 61 00       	call   8707be0 <_ZNSsD1Ev>
 80ef96d:	89 f0                	mov    %esi,%eax
 80ef96f:	89 da                	mov    %ebx,%edx
 80ef971:	eb 20                	jmp    80ef993 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x5f1>
 80ef973:	8d 85 38 fe ff ff    	lea    -0x1c8(%ebp),%eax
 80ef979:	89 04 24             	mov    %eax,(%esp)
 80ef97c:	e8 5f 82 61 00       	call   8707be0 <_ZNSsD1Ev>
 80ef981:	85 f6                	test   %esi,%esi
 80ef983:	75 07                	jne    80ef98c <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x5ea>
 80ef985:	be 00 00 00 00       	mov    $0x0,%esi
 80ef98a:	eb 22                	jmp    80ef9ae <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x60c>
 80ef98c:	be 01 00 00 00       	mov    $0x1,%esi
 80ef991:	eb 1b                	jmp    80ef9ae <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x60c>
 80ef993:	89 d3                	mov    %edx,%ebx
 80ef995:	89 c6                	mov    %eax,%esi
 80ef997:	8d 85 3c fe ff ff    	lea    -0x1c4(%ebp),%eax
 80ef99d:	89 04 24             	mov    %eax,(%esp)
 80ef9a0:	e8 3b 82 61 00       	call   8707be0 <_ZNSsD1Ev>
 80ef9a5:	89 f0                	mov    %esi,%eax
 80ef9a7:	89 da                	mov    %ebx,%edx
 80ef9a9:	e9 60 08 00 00       	jmp    80f020e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe6c>
 80ef9ae:	8d 85 3c fe ff ff    	lea    -0x1c4(%ebp),%eax
 80ef9b4:	89 04 24             	mov    %eax,(%esp)
 80ef9b7:	e8 24 82 61 00       	call   8707be0 <_ZNSsD1Ev>
 80ef9bc:	85 f6                	test   %esi,%esi
 80ef9be:	0f 84 62 08 00 00    	je     80f0226 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe84>
 80ef9c4:	e9 0c 08 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80ef9c9:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80ef9d0:	83 f0 01             	xor    $0x1,%eax
 80ef9d3:	84 c0                	test   %al,%al
 80ef9d5:	74 4f                	je     80efa26 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x684>
 80ef9d7:	c7 85 d8 fe ff ff af 	movl   $0xaf,-0x128(%ebp)
 80ef9de:	00 00 00 
 80ef9e1:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 80ef9e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ef9eb:	c7 44 24 04 51 a2 b3 	movl   $0x8b3a251,0x4(%esp)
 80ef9f2:	08 
 80ef9f3:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 80ef9f9:	89 04 24             	mov    %eax,(%esp)
 80ef9fc:	e8 59 1c 00 00       	call   80f165a <_ZNSt4pairIKPKciEC1IRA9_S0_iEEOT_OT0_>
 80efa01:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 80efa07:	8d 95 d0 fe ff ff    	lea    -0x130(%ebp),%edx
 80efa0d:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efa11:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80efa18:	09 
 80efa19:	89 04 24             	mov    %eax,(%esp)
 80efa1c:	e8 df 1b 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80efa21:	83 ec 04             	sub    $0x4,%esp
 80efa24:	eb 72                	jmp    80efa98 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x6f6>
 80efa26:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 80efa2c:	89 04 24             	mov    %eax,(%esp)
 80efa2f:	e8 9c 6b 61 00       	call   87065d0 <_ZNSsC1Ev>
 80efa34:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 80efa3a:	89 04 24             	mov    %eax,(%esp)
 80efa3d:	e8 60 cd 7c 00       	call   88bc7a2 <_Z7ScanStrPSs>
 80efa42:	83 f0 01             	xor    $0x1,%eax
 80efa45:	84 c0                	test   %al,%al
 80efa47:	75 3c                	jne    80efa85 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x6e3>
 80efa49:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 80efa4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 80efa53:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 80efa59:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efa5d:	8b 45 08             	mov    0x8(%ebp),%eax
 80efa60:	89 04 24             	mov    %eax,(%esp)
 80efa63:	e8 28 f7 ff ff       	call   80ef190 <_ZN11eventReward13getOptionTypeERSsR8itemData>
 80efa68:	eb 1b                	jmp    80efa85 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x6e3>
 80efa6a:	89 d3                	mov    %edx,%ebx
 80efa6c:	89 c6                	mov    %eax,%esi
 80efa6e:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 80efa74:	89 04 24             	mov    %eax,(%esp)
 80efa77:	e8 64 81 61 00       	call   8707be0 <_ZNSsD1Ev>
 80efa7c:	89 f0                	mov    %esi,%eax
 80efa7e:	89 da                	mov    %ebx,%edx
 80efa80:	e9 89 07 00 00       	jmp    80f020e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe6c>
 80efa85:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 80efa8b:	89 04 24             	mov    %eax,(%esp)
 80efa8e:	e8 4d 81 61 00       	call   8707be0 <_ZNSsD1Ev>
 80efa93:	e9 3d 07 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80efa98:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80efa9f:	83 f0 01             	xor    $0x1,%eax
 80efaa2:	84 c0                	test   %al,%al
 80efaa4:	74 52                	je     80efaf8 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x756>
 80efaa6:	c7 85 ec fe ff ff b9 	movl   $0xb9,-0x114(%ebp)
 80efaad:	00 00 00 
 80efab0:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 80efab6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80efaba:	c7 44 24 04 5a a2 b3 	movl   $0x8b3a25a,0x4(%esp)
 80efac1:	08 
 80efac2:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 80efac8:	89 04 24             	mov    %eax,(%esp)
 80efacb:	e8 b8 1b 00 00       	call   80f1688 <_ZNSt4pairIKPKciEC1IRA17_S0_iEEOT_OT0_>
 80efad0:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 80efad6:	8d 95 e4 fe ff ff    	lea    -0x11c(%ebp),%edx
 80efadc:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efae0:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80efae7:	09 
 80efae8:	89 04 24             	mov    %eax,(%esp)
 80efaeb:	e8 10 1b 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80efaf0:	83 ec 04             	sub    $0x4,%esp
 80efaf3:	e9 2e 02 00 00       	jmp    80efd26 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x984>
 80efaf8:	0f b6 85 5b fe ff ff 	movzbl -0x1a5(%ebp),%eax
 80efaff:	0f be c0             	movsbl %al,%eax
 80efb02:	8d 95 48 fe ff ff    	lea    -0x1b8(%ebp),%edx
 80efb08:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efb0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efb10:	8b 45 08             	mov    0x8(%ebp),%eax
 80efb13:	89 04 24             	mov    %eax,(%esp)
 80efb16:	e8 41 f7 ff ff       	call   80ef25c <_ZN11eventReward13defaultOptionEcR8itemData>
 80efb1b:	c7 85 30 fe ff ff 00 	movl   $0x0,-0x1d0(%ebp)
 80efb22:	00 00 00 
 80efb25:	8b 85 48 fe ff ff    	mov    -0x1b8(%ebp),%eax
 80efb2b:	89 85 24 fe ff ff    	mov    %eax,-0x1dc(%ebp)
 80efb31:	8b 85 4c fe ff ff    	mov    -0x1b4(%ebp),%eax
 80efb37:	89 85 28 fe ff ff    	mov    %eax,-0x1d8(%ebp)
 80efb3d:	8b 85 50 fe ff ff    	mov    -0x1b0(%ebp),%eax
 80efb43:	89 85 2c fe ff ff    	mov    %eax,-0x1d4(%ebp)
 80efb49:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80efb4f:	89 04 24             	mov    %eax,(%esp)
 80efb52:	e8 24 c8 7c 00       	call   88bc37b <_Z7ScanIntPb>
 80efb57:	89 85 30 fe ff ff    	mov    %eax,-0x1d0(%ebp)
 80efb5d:	0f b6 85 77 fe ff ff 	movzbl -0x189(%ebp),%eax
 80efb64:	83 f0 01             	xor    $0x1,%eax
 80efb67:	84 c0                	test   %al,%al
 80efb69:	74 05                	je     80efb70 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x7ce>
 80efb6b:	e9 b1 01 00 00       	jmp    80efd21 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x97f>
 80efb70:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80efb76:	89 04 24             	mov    %eax,(%esp)
 80efb79:	e8 fd c7 7c 00       	call   88bc37b <_Z7ScanIntPb>
 80efb7e:	89 85 28 fe ff ff    	mov    %eax,-0x1d8(%ebp)
 80efb84:	0f b6 85 77 fe ff ff 	movzbl -0x189(%ebp),%eax
 80efb8b:	83 f0 01             	xor    $0x1,%eax
 80efb8e:	84 c0                	test   %al,%al
 80efb90:	74 05                	je     80efb97 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x7f5>
 80efb92:	e9 8a 01 00 00       	jmp    80efd21 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x97f>
 80efb97:	8d 85 20 fe ff ff    	lea    -0x1e0(%ebp),%eax
 80efb9d:	8d 95 30 fe ff ff    	lea    -0x1d0(%ebp),%edx
 80efba3:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efba7:	8d 95 5c fe ff ff    	lea    -0x1a4(%ebp),%edx
 80efbad:	89 54 24 04          	mov    %edx,0x4(%esp)
 80efbb1:	89 04 24             	mov    %eax,(%esp)
 80efbb4:	e8 fd 1a 00 00       	call   80f16b6 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 80efbb9:	83 ec 04             	sub    $0x4,%esp
 80efbbc:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 80efbc2:	8d 95 5c fe ff ff    	lea    -0x1a4(%ebp),%edx
 80efbc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80efbcc:	89 04 24             	mov    %eax,(%esp)
 80efbcf:	e8 0e 1b 00 00       	call   80f16e2 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 80efbd4:	83 ec 04             	sub    $0x4,%esp
 80efbd7:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 80efbdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efbe1:	8d 85 20 fe ff ff    	lea    -0x1e0(%ebp),%eax
 80efbe7:	89 04 24             	mov    %eax,(%esp)
 80efbea:	e8 19 1b 00 00       	call   80f1708 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEneERKS7_>
 80efbef:	84 c0                	test   %al,%al
 80efbf1:	74 28                	je     80efc1b <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x879>
 80efbf3:	8d 85 20 fe ff ff    	lea    -0x1e0(%ebp),%eax
 80efbf9:	89 04 24             	mov    %eax,(%esp)
 80efbfc:	e8 1b 1b 00 00       	call   80f171c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEptEv>
 80efc01:	8d 50 04             	lea    0x4(%eax),%edx
 80efc04:	8d 85 24 fe ff ff    	lea    -0x1dc(%ebp),%eax
 80efc0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efc0e:	89 14 24             	mov    %edx,(%esp)
 80efc11:	e8 14 1b 00 00       	call   80f172a <_ZNSt6vectorI8itemDataSaIS0_EE9push_backERKS0_>
 80efc16:	e9 00 ff ff ff       	jmp    80efb1b <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x779>
 80efc1b:	8d 85 14 fe ff ff    	lea    -0x1ec(%ebp),%eax
 80efc21:	89 04 24             	mov    %eax,(%esp)
 80efc24:	e8 75 1b 00 00       	call   80f179e <_ZNSt6vectorI8itemDataSaIS0_EEC1Ev>
 80efc29:	8d 85 24 fe ff ff    	lea    -0x1dc(%ebp),%eax
 80efc2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efc33:	8d 85 14 fe ff ff    	lea    -0x1ec(%ebp),%eax
 80efc39:	89 04 24             	mov    %eax,(%esp)
 80efc3c:	e8 e9 1a 00 00       	call   80f172a <_ZNSt6vectorI8itemDataSaIS0_EE9push_backERKS0_>
 80efc41:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 80efc47:	8d 95 14 fe ff ff    	lea    -0x1ec(%ebp),%edx
 80efc4d:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efc51:	8d 95 30 fe ff ff    	lea    -0x1d0(%ebp),%edx
 80efc57:	89 54 24 04          	mov    %edx,0x4(%esp)
 80efc5b:	89 04 24             	mov    %eax,(%esp)
 80efc5e:	e8 ac 1b 00 00       	call   80f180f <_ZSt9make_pairIRiRSt6vectorI8itemDataSaIS2_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 80efc63:	83 ec 04             	sub    $0x4,%esp
 80efc66:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 80efc6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efc70:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 80efc76:	89 04 24             	mov    %eax,(%esp)
 80efc79:	e8 d6 1b 00 00       	call   80f1854 <_ZNSt4pairIKiSt6vectorI8itemDataSaIS2_EEEC1IiS4_EEOS_IT_T0_E>
 80efc7e:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 80efc84:	8d 95 fc fe ff ff    	lea    -0x104(%ebp),%edx
 80efc8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efc8e:	8d 95 5c fe ff ff    	lea    -0x1a4(%ebp),%edx
 80efc94:	89 54 24 04          	mov    %edx,0x4(%esp)
 80efc98:	89 04 24             	mov    %eax,(%esp)
 80efc9b:	e8 ee 1b 00 00       	call   80f188e <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE6insertERKS8_>
 80efca0:	83 ec 04             	sub    $0x4,%esp
 80efca3:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 80efca9:	89 04 24             	mov    %eax,(%esp)
 80efcac:	e8 f3 16 00 00       	call   80f13a4 <_ZNSt4pairIKiSt6vectorI8itemDataSaIS2_EEED1Ev>
 80efcb1:	eb 30                	jmp    80efce3 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x941>
 80efcb3:	89 d3                	mov    %edx,%ebx
 80efcb5:	89 c6                	mov    %eax,%esi
 80efcb7:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 80efcbd:	89 04 24             	mov    %eax,(%esp)
 80efcc0:	e8 df 16 00 00       	call   80f13a4 <_ZNSt4pairIKiSt6vectorI8itemDataSaIS2_EEED1Ev>
 80efcc5:	89 f0                	mov    %esi,%eax
 80efcc7:	89 da                	mov    %ebx,%edx
 80efcc9:	eb 00                	jmp    80efccb <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x929>
 80efccb:	89 d3                	mov    %edx,%ebx
 80efccd:	89 c6                	mov    %eax,%esi
 80efccf:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 80efcd5:	89 04 24             	mov    %eax,(%esp)
 80efcd8:	e8 b1 16 00 00       	call   80f138e <_ZNSt4pairIiSt6vectorI8itemDataSaIS1_EEED1Ev>
 80efcdd:	89 f0                	mov    %esi,%eax
 80efcdf:	89 da                	mov    %ebx,%edx
 80efce1:	eb 10                	jmp    80efcf3 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x951>
 80efce3:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 80efce9:	89 04 24             	mov    %eax,(%esp)
 80efcec:	e8 9d 16 00 00       	call   80f138e <_ZNSt4pairIiSt6vectorI8itemDataSaIS1_EEED1Ev>
 80efcf1:	eb 1b                	jmp    80efd0e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x96c>
 80efcf3:	89 d3                	mov    %edx,%ebx
 80efcf5:	89 c6                	mov    %eax,%esi
 80efcf7:	8d 85 14 fe ff ff    	lea    -0x1ec(%ebp),%eax
 80efcfd:	89 04 24             	mov    %eax,(%esp)
 80efd00:	e8 ad 1a 00 00       	call   80f17b2 <_ZNSt6vectorI8itemDataSaIS0_EED1Ev>
 80efd05:	89 f0                	mov    %esi,%eax
 80efd07:	89 da                	mov    %ebx,%edx
 80efd09:	e9 00 05 00 00       	jmp    80f020e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe6c>
 80efd0e:	8d 85 14 fe ff ff    	lea    -0x1ec(%ebp),%eax
 80efd14:	89 04 24             	mov    %eax,(%esp)
 80efd17:	e8 96 1a 00 00       	call   80f17b2 <_ZNSt6vectorI8itemDataSaIS0_EED1Ev>
 80efd1c:	e9 fa fd ff ff       	jmp    80efb1b <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x779>
 80efd21:	e9 af 04 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80efd26:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80efd2d:	83 f0 01             	xor    $0x1,%eax
 80efd30:	84 c0                	test   %al,%al
 80efd32:	74 52                	je     80efd86 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x9e4>
 80efd34:	c7 85 2c ff ff ff d8 	movl   $0xd8,-0xd4(%ebp)
 80efd3b:	00 00 00 
 80efd3e:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 80efd44:	89 44 24 08          	mov    %eax,0x8(%esp)
 80efd48:	c7 44 24 04 6b a2 b3 	movl   $0x8b3a26b,0x4(%esp)
 80efd4f:	08 
 80efd50:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 80efd56:	89 04 24             	mov    %eax,(%esp)
 80efd59:	e8 2a 19 00 00       	call   80f1688 <_ZNSt4pairIKPKciEC1IRA17_S0_iEEOT_OT0_>
 80efd5e:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 80efd64:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 80efd6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efd6e:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80efd75:	09 
 80efd76:	89 04 24             	mov    %eax,(%esp)
 80efd79:	e8 82 18 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80efd7e:	83 ec 04             	sub    $0x4,%esp
 80efd81:	e9 5f 02 00 00       	jmp    80effe5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xc43>
 80efd86:	0f b6 85 5b fe ff ff 	movzbl -0x1a5(%ebp),%eax
 80efd8d:	0f be c0             	movsbl %al,%eax
 80efd90:	8d 95 48 fe ff ff    	lea    -0x1b8(%ebp),%edx
 80efd96:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efd9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efd9e:	8b 45 08             	mov    0x8(%ebp),%eax
 80efda1:	89 04 24             	mov    %eax,(%esp)
 80efda4:	e8 b3 f4 ff ff       	call   80ef25c <_ZN11eventReward13defaultOptionEcR8itemData>
 80efda9:	c7 85 10 fe ff ff 00 	movl   $0x0,-0x1f0(%ebp)
 80efdb0:	00 00 00 
 80efdb3:	c7 85 50 fe ff ff 01 	movl   $0x1,-0x1b0(%ebp)
 80efdba:	00 00 00 
 80efdbd:	8b 85 48 fe ff ff    	mov    -0x1b8(%ebp),%eax
 80efdc3:	89 85 04 fe ff ff    	mov    %eax,-0x1fc(%ebp)
 80efdc9:	8b 85 4c fe ff ff    	mov    -0x1b4(%ebp),%eax
 80efdcf:	89 85 08 fe ff ff    	mov    %eax,-0x1f8(%ebp)
 80efdd5:	8b 85 50 fe ff ff    	mov    -0x1b0(%ebp),%eax
 80efddb:	89 85 0c fe ff ff    	mov    %eax,-0x1f4(%ebp)
 80efde1:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80efde7:	89 04 24             	mov    %eax,(%esp)
 80efdea:	e8 8c c5 7c 00       	call   88bc37b <_Z7ScanIntPb>
 80efdef:	89 85 10 fe ff ff    	mov    %eax,-0x1f0(%ebp)
 80efdf5:	0f b6 85 77 fe ff ff 	movzbl -0x189(%ebp),%eax
 80efdfc:	83 f0 01             	xor    $0x1,%eax
 80efdff:	84 c0                	test   %al,%al
 80efe01:	74 05                	je     80efe08 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xa66>
 80efe03:	e9 d8 01 00 00       	jmp    80effe0 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xc3e>
 80efe08:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80efe0e:	89 04 24             	mov    %eax,(%esp)
 80efe11:	e8 65 c5 7c 00       	call   88bc37b <_Z7ScanIntPb>
 80efe16:	89 85 08 fe ff ff    	mov    %eax,-0x1f8(%ebp)
 80efe1c:	0f b6 85 77 fe ff ff 	movzbl -0x189(%ebp),%eax
 80efe23:	83 f0 01             	xor    $0x1,%eax
 80efe26:	84 c0                	test   %al,%al
 80efe28:	74 05                	je     80efe2f <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xa8d>
 80efe2a:	e9 b1 01 00 00       	jmp    80effe0 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xc3e>
 80efe2f:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80efe35:	89 04 24             	mov    %eax,(%esp)
 80efe38:	e8 3e c5 7c 00       	call   88bc37b <_Z7ScanIntPb>
 80efe3d:	89 85 0c fe ff ff    	mov    %eax,-0x1f4(%ebp)
 80efe43:	0f b6 85 77 fe ff ff 	movzbl -0x189(%ebp),%eax
 80efe4a:	83 f0 01             	xor    $0x1,%eax
 80efe4d:	84 c0                	test   %al,%al
 80efe4f:	74 05                	je     80efe56 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xab4>
 80efe51:	e9 8a 01 00 00       	jmp    80effe0 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xc3e>
 80efe56:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 80efe5c:	8d 95 10 fe ff ff    	lea    -0x1f0(%ebp),%edx
 80efe62:	89 54 24 08          	mov    %edx,0x8(%esp)
 80efe66:	8d 95 5c fe ff ff    	lea    -0x1a4(%ebp),%edx
 80efe6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80efe70:	89 04 24             	mov    %eax,(%esp)
 80efe73:	e8 3e 18 00 00       	call   80f16b6 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 80efe78:	83 ec 04             	sub    $0x4,%esp
 80efe7b:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 80efe81:	8d 95 5c fe ff ff    	lea    -0x1a4(%ebp),%edx
 80efe87:	89 54 24 04          	mov    %edx,0x4(%esp)
 80efe8b:	89 04 24             	mov    %eax,(%esp)
 80efe8e:	e8 4f 18 00 00       	call   80f16e2 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 80efe93:	83 ec 04             	sub    $0x4,%esp
 80efe96:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 80efe9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efea0:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 80efea6:	89 04 24             	mov    %eax,(%esp)
 80efea9:	e8 5a 18 00 00       	call   80f1708 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEneERKS7_>
 80efeae:	84 c0                	test   %al,%al
 80efeb0:	74 28                	je     80efeda <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xb38>
 80efeb2:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 80efeb8:	89 04 24             	mov    %eax,(%esp)
 80efebb:	e8 5c 18 00 00       	call   80f171c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEptEv>
 80efec0:	8d 50 04             	lea    0x4(%eax),%edx
 80efec3:	8d 85 04 fe ff ff    	lea    -0x1fc(%ebp),%eax
 80efec9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efecd:	89 14 24             	mov    %edx,(%esp)
 80efed0:	e8 55 18 00 00       	call   80f172a <_ZNSt6vectorI8itemDataSaIS0_EE9push_backERKS0_>
 80efed5:	e9 cf fe ff ff       	jmp    80efda9 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xa07>
 80efeda:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
 80efee0:	89 04 24             	mov    %eax,(%esp)
 80efee3:	e8 b6 18 00 00       	call   80f179e <_ZNSt6vectorI8itemDataSaIS0_EEC1Ev>
 80efee8:	8d 85 04 fe ff ff    	lea    -0x1fc(%ebp),%eax
 80efeee:	89 44 24 04          	mov    %eax,0x4(%esp)
 80efef2:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
 80efef8:	89 04 24             	mov    %eax,(%esp)
 80efefb:	e8 2a 18 00 00       	call   80f172a <_ZNSt6vectorI8itemDataSaIS0_EE9push_backERKS0_>
 80eff00:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80eff06:	8d 95 f4 fd ff ff    	lea    -0x20c(%ebp),%edx
 80eff0c:	89 54 24 08          	mov    %edx,0x8(%esp)
 80eff10:	8d 95 10 fe ff ff    	lea    -0x1f0(%ebp),%edx
 80eff16:	89 54 24 04          	mov    %edx,0x4(%esp)
 80eff1a:	89 04 24             	mov    %eax,(%esp)
 80eff1d:	e8 ed 18 00 00       	call   80f180f <_ZSt9make_pairIRiRSt6vectorI8itemDataSaIS2_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 80eff22:	83 ec 04             	sub    $0x4,%esp
 80eff25:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80eff2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80eff2f:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 80eff35:	89 04 24             	mov    %eax,(%esp)
 80eff38:	e8 17 19 00 00       	call   80f1854 <_ZNSt4pairIKiSt6vectorI8itemDataSaIS2_EEEC1IiS4_EEOS_IT_T0_E>
 80eff3d:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 80eff43:	8d 95 3c ff ff ff    	lea    -0xc4(%ebp),%edx
 80eff49:	89 54 24 08          	mov    %edx,0x8(%esp)
 80eff4d:	8d 95 5c fe ff ff    	lea    -0x1a4(%ebp),%edx
 80eff53:	89 54 24 04          	mov    %edx,0x4(%esp)
 80eff57:	89 04 24             	mov    %eax,(%esp)
 80eff5a:	e8 2f 19 00 00       	call   80f188e <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE6insertERKS8_>
 80eff5f:	83 ec 04             	sub    $0x4,%esp
 80eff62:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 80eff68:	89 04 24             	mov    %eax,(%esp)
 80eff6b:	e8 34 14 00 00       	call   80f13a4 <_ZNSt4pairIKiSt6vectorI8itemDataSaIS2_EEED1Ev>
 80eff70:	eb 30                	jmp    80effa2 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xc00>
 80eff72:	89 d3                	mov    %edx,%ebx
 80eff74:	89 c6                	mov    %eax,%esi
 80eff76:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 80eff7c:	89 04 24             	mov    %eax,(%esp)
 80eff7f:	e8 20 14 00 00       	call   80f13a4 <_ZNSt4pairIKiSt6vectorI8itemDataSaIS2_EEED1Ev>
 80eff84:	89 f0                	mov    %esi,%eax
 80eff86:	89 da                	mov    %ebx,%edx
 80eff88:	eb 00                	jmp    80eff8a <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xbe8>
 80eff8a:	89 d3                	mov    %edx,%ebx
 80eff8c:	89 c6                	mov    %eax,%esi
 80eff8e:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80eff94:	89 04 24             	mov    %eax,(%esp)
 80eff97:	e8 f2 13 00 00       	call   80f138e <_ZNSt4pairIiSt6vectorI8itemDataSaIS1_EEED1Ev>
 80eff9c:	89 f0                	mov    %esi,%eax
 80eff9e:	89 da                	mov    %ebx,%edx
 80effa0:	eb 10                	jmp    80effb2 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xc10>
 80effa2:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80effa8:	89 04 24             	mov    %eax,(%esp)
 80effab:	e8 de 13 00 00       	call   80f138e <_ZNSt4pairIiSt6vectorI8itemDataSaIS1_EEED1Ev>
 80effb0:	eb 1b                	jmp    80effcd <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xc2b>
 80effb2:	89 d3                	mov    %edx,%ebx
 80effb4:	89 c6                	mov    %eax,%esi
 80effb6:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
 80effbc:	89 04 24             	mov    %eax,(%esp)
 80effbf:	e8 ee 17 00 00       	call   80f17b2 <_ZNSt6vectorI8itemDataSaIS0_EED1Ev>
 80effc4:	89 f0                	mov    %esi,%eax
 80effc6:	89 da                	mov    %ebx,%edx
 80effc8:	e9 41 02 00 00       	jmp    80f020e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe6c>
 80effcd:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
 80effd3:	89 04 24             	mov    %eax,(%esp)
 80effd6:	e8 d7 17 00 00       	call   80f17b2 <_ZNSt6vectorI8itemDataSaIS0_EED1Ev>
 80effdb:	e9 c9 fd ff ff       	jmp    80efda9 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xa07>
 80effe0:	e9 f0 01 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80effe5:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80effec:	83 f0 01             	xor    $0x1,%eax
 80effef:	84 c0                	test   %al,%al
 80efff1:	74 52                	je     80f0045 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xca3>
 80efff3:	c7 85 6c ff ff ff fc 	movl   $0xfc,-0x94(%ebp)
 80efffa:	00 00 00 
 80efffd:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 80f0003:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0007:	c7 44 24 04 7c a2 b3 	movl   $0x8b3a27c,0x4(%esp)
 80f000e:	08 
 80f000f:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 80f0015:	89 04 24             	mov    %eax,(%esp)
 80f0018:	e8 9d 18 00 00       	call   80f18ba <_ZNSt4pairIKPKciEC1IRA12_S0_iEEOT_OT0_>
 80f001d:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 80f0023:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 80f0029:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f002d:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80f0034:	09 
 80f0035:	89 04 24             	mov    %eax,(%esp)
 80f0038:	e8 c3 15 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80f003d:	83 ec 04             	sub    $0x4,%esp
 80f0040:	e9 c8 00 00 00       	jmp    80f010d <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xd6b>
 80f0045:	8d 45 98             	lea    -0x68(%ebp),%eax
 80f0048:	8d 95 5c fe ff ff    	lea    -0x1a4(%ebp),%edx
 80f004e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f0052:	8d 95 57 fe ff ff    	lea    -0x1a9(%ebp),%edx
 80f0058:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f005c:	89 04 24             	mov    %eax,(%esp)
 80f005f:	e8 83 18 00 00       	call   80f18e7 <_ZSt9make_pairIR9rewardKeyRSt3mapIiSt6vectorI8itemDataSaIS4_EESt4lessIiESaISt4pairIKiS6_EEEES9_INSt17__decay_and_stripIT_E6__typeENSF_IT0_E6__typeEEOSG_OSJ_>
 80f0064:	83 ec 04             	sub    $0x4,%esp
 80f0067:	8d 45 98             	lea    -0x68(%ebp),%eax
 80f006a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f006e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 80f0074:	89 04 24             	mov    %eax,(%esp)
 80f0077:	e8 b0 18 00 00       	call   80f192c <_ZNSt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS4_EESt4lessIiESaIS_IKiS6_EEEEC1IS0_SC_EEOS_IT_T0_E>
 80f007c:	8b 55 08             	mov    0x8(%ebp),%edx
 80f007f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80f0085:	8d 8d 78 ff ff ff    	lea    -0x88(%ebp),%ecx
 80f008b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80f008f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0093:	89 04 24             	mov    %eax,(%esp)
 80f0096:	e8 d7 18 00 00       	call   80f1972 <_ZNSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE6insertERKSE_>
 80f009b:	83 ec 04             	sub    $0x4,%esp
 80f009e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 80f00a4:	89 04 24             	mov    %eax,(%esp)
 80f00a7:	e8 24 13 00 00       	call   80f13d0 <_ZNSt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS4_EESt4lessIiESaIS_IKiS6_EEEED1Ev>
 80f00ac:	eb 30                	jmp    80f00de <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xd3c>
 80f00ae:	89 d3                	mov    %edx,%ebx
 80f00b0:	89 c6                	mov    %eax,%esi
 80f00b2:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 80f00b8:	89 04 24             	mov    %eax,(%esp)
 80f00bb:	e8 10 13 00 00       	call   80f13d0 <_ZNSt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS4_EESt4lessIiESaIS_IKiS6_EEEED1Ev>
 80f00c0:	89 f0                	mov    %esi,%eax
 80f00c2:	89 da                	mov    %ebx,%edx
 80f00c4:	eb 00                	jmp    80f00c6 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xd24>
 80f00c6:	89 d3                	mov    %edx,%ebx
 80f00c8:	89 c6                	mov    %eax,%esi
 80f00ca:	8d 45 98             	lea    -0x68(%ebp),%eax
 80f00cd:	89 04 24             	mov    %eax,(%esp)
 80f00d0:	e8 e5 12 00 00       	call   80f13ba <_ZNSt4pairI9rewardKeySt3mapIiSt6vectorI8itemDataSaIS3_EESt4lessIiESaIS_IKiS5_EEEED1Ev>
 80f00d5:	89 f0                	mov    %esi,%eax
 80f00d7:	89 da                	mov    %ebx,%edx
 80f00d9:	e9 30 01 00 00       	jmp    80f020e <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe6c>
 80f00de:	8d 45 98             	lea    -0x68(%ebp),%eax
 80f00e1:	89 04 24             	mov    %eax,(%esp)
 80f00e4:	e8 d1 12 00 00       	call   80f13ba <_ZNSt4pairI9rewardKeySt3mapIiSt6vectorI8itemDataSaIS3_EESt4lessIiESaIS_IKiS5_EEEED1Ev>
 80f00e9:	8d 85 57 fe ff ff    	lea    -0x1a9(%ebp),%eax
 80f00ef:	83 c0 03             	add    $0x3,%eax
 80f00f2:	89 04 24             	mov    %eax,(%esp)
 80f00f5:	e8 e4 10 00 00       	call   80f11de <_ZN12rewardSubKey5clearEv>
 80f00fa:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 80f0100:	89 04 24             	mov    %eax,(%esp)
 80f0103:	e8 96 18 00 00       	call   80f199e <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE5clearEv>
 80f0108:	e9 c8 00 00 00       	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80f010d:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80f0114:	83 f0 01             	xor    $0x1,%eax
 80f0117:	84 c0                	test   %al,%al
 80f0119:	74 40                	je     80f015b <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xdb9>
 80f011b:	c7 45 c8 02 01 00 00 	movl   $0x102,-0x38(%ebp)
 80f0122:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80f0125:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0129:	c7 44 24 04 88 a2 b3 	movl   $0x8b3a288,0x4(%esp)
 80f0130:	08 
 80f0131:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80f0134:	89 04 24             	mov    %eax,(%esp)
 80f0137:	e8 7e 17 00 00       	call   80f18ba <_ZNSt4pairIKPKciEC1IRA12_S0_iEEOT_OT0_>
 80f013c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80f013f:	8d 55 c0             	lea    -0x40(%ebp),%edx
 80f0142:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f0146:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80f014d:	09 
 80f014e:	89 04 24             	mov    %eax,(%esp)
 80f0151:	e8 aa 14 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80f0156:	83 ec 04             	sub    $0x4,%esp
 80f0159:	eb 1e                	jmp    80f0179 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xdd7>
 80f015b:	8d 85 57 fe ff ff    	lea    -0x1a9(%ebp),%eax
 80f0161:	89 04 24             	mov    %eax,(%esp)
 80f0164:	e8 43 11 00 00       	call   80f12ac <_ZN9rewardKey5clearEv>
 80f0169:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 80f016f:	89 04 24             	mov    %eax,(%esp)
 80f0172:	e8 27 18 00 00       	call   80f199e <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE5clearEv>
 80f0177:	eb 5c                	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80f0179:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80f0180:	83 f0 01             	xor    $0x1,%eax
 80f0183:	84 c0                	test   %al,%al
 80f0185:	74 40                	je     80f01c7 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe25>
 80f0187:	c7 45 dc 07 01 00 00 	movl   $0x107,-0x24(%ebp)
 80f018e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f0191:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0195:	c7 44 24 04 94 a2 b3 	movl   $0x8b3a294,0x4(%esp)
 80f019c:	08 
 80f019d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80f01a0:	89 04 24             	mov    %eax,(%esp)
 80f01a3:	e8 2a 14 00 00       	call   80f15d2 <_ZNSt4pairIKPKciEC1IRA10_S0_iEEOT_OT0_>
 80f01a8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f01ab:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 80f01ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f01b2:	c7 44 24 04 38 ab 3f 	movl   $0x93fab38,0x4(%esp)
 80f01b9:	09 
 80f01ba:	89 04 24             	mov    %eax,(%esp)
 80f01bd:	e8 3e 14 00 00       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 80f01c2:	83 ec 04             	sub    $0x4,%esp
 80f01c5:	eb 0e                	jmp    80f01d5 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe33>
 80f01c7:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 80f01cd:	89 04 24             	mov    %eax,(%esp)
 80f01d0:	e8 8d 0f 00 00       	call   80f1162 <_ZN8itemData5clearEv>
 80f01d5:	0f b6 05 54 ab 3f 09 	movzbl 0x93fab54,%eax
 80f01dc:	83 f0 01             	xor    $0x1,%eax
 80f01df:	84 c0                	test   %al,%al
 80f01e1:	74 18                	je     80f01fb <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe59>
 80f01e3:	c7 04 24 50 ab 3f 09 	movl   $0x93fab50,(%esp)
 80f01ea:	e8 97 33 9e 00       	call   8ad3586 <_ZN8SpinLock5leaveEv>
 80f01ef:	c6 05 54 ab 3f 09 01 	movb   $0x1,0x93fab54
 80f01f6:	e9 3d f2 ff ff       	jmp    80ef438 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x96>
 80f01fb:	90                   	nop
 80f01fc:	e9 16 f2 ff ff       	jmp    80ef417 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0x75>
 80f0201:	90                   	nop
 80f0202:	0f b6 85 77 fe ff ff 	movzbl -0x189(%ebp),%eax
 80f0209:	0f b6 d8             	movzbl %al,%ebx
 80f020c:	eb 18                	jmp    80f0226 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe84>
 80f020e:	89 d3                	mov    %edx,%ebx
 80f0210:	89 c6                	mov    %eax,%esi
 80f0212:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 80f0218:	89 04 24             	mov    %eax,(%esp)
 80f021b:	e8 46 11 00 00       	call   80f1366 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEED1Ev>
 80f0220:	89 f0                	mov    %esi,%eax
 80f0222:	89 da                	mov    %ebx,%edx
 80f0224:	eb 10                	jmp    80f0236 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xe94>
 80f0226:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 80f022c:	89 04 24             	mov    %eax,(%esp)
 80f022f:	e8 32 11 00 00       	call   80f1366 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEED1Ev>
 80f0234:	eb 1e                	jmp    80f0254 <_ZN11eventReward18ImportRewardScriptEPKcS1_+0xeb2>
 80f0236:	89 d3                	mov    %edx,%ebx
 80f0238:	89 c6                	mov    %eax,%esi
 80f023a:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 80f0240:	89 04 24             	mov    %eax,(%esp)
 80f0243:	e8 98 79 61 00       	call   8707be0 <_ZNSsD1Ev>
 80f0248:	89 f0                	mov    %esi,%eax
 80f024a:	89 da                	mov    %ebx,%edx
 80f024c:	89 04 24             	mov    %eax,(%esp)
 80f024f:	e8 fc 34 9f 00       	call   8ae3750 <_Unwind_Resume>
 80f0254:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 80f025a:	89 04 24             	mov    %eax,(%esp)
 80f025d:	e8 7e 79 61 00       	call   8707be0 <_ZNSsD1Ev>
 80f0262:	89 d8                	mov    %ebx,%eax
 80f0264:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80f0267:	83 c4 00             	add    $0x0,%esp
 80f026a:	5b                   	pop    %ebx
 80f026b:	5e                   	pop    %esi
 80f026c:	5f                   	pop    %edi
 80f026d:	5d                   	pop    %ebp
 80f026e:	c3                   	ret
 80f026f:	90                   	nop

```

```c
// eventReward::ImportRewardScript @ 0x80ef3a2

/* eventReward::ImportRewardScript(char const*, char const*) */

uint __thiscall eventReward::ImportRewardScript(eventReward *this,char *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint unaff_EBX;
  undefined1 *puVar4;
  vector<itemData,std::allocator<itemData>> local_210 [12];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_204 [4];
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  vector<itemData,std::allocator<itemData>> local_1f0 [12];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_1e4 [4];
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  string local_1d0 [4];
  string local_1cc [4];
  string local_1c8 [4];
  string local_1c4 [4];
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_1c0 [4];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  rewardKey local_1ad;
  undefined1 local_1ac;
  undefined1 local_1ab;
  rewardSubKey local_1aa;
  char local_1a9;
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_1a8 [27];
  bool local_18d;
  string local_18c [4];
  _Rb_tree_iterator local_188 [4];
  undefined4 local_184;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_180 [4];
  map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>> local_17c [4];
  pair local_178 [8];
  pair<char_const*const,int> local_170 [8];
  int local_168;
  pair local_164 [8];
  pair<char_const*const,int> local_15c [8];
  int local_154;
  pair local_150 [8];
  pair<char_const*const,int> local_148 [8];
  int local_140;
  pair local_13c [8];
  pair<char_const*const,int> local_134 [8];
  int local_12c;
  pair local_128 [8];
  pair<char_const*const,int> local_120 [8];
  int local_118;
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_114 [4];
  pair local_110 [8];
  pair<int_const,std::vector<itemData,std::allocator<itemData>>> local_108 [16];
  pair<int,std::vector<itemData,std::allocator<itemData>>> local_f8 [16];
  pair local_e8 [8];
  pair<char_const*const,int> local_e0 [8];
  int local_d8;
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_d4 [4];
  pair local_d0 [8];
  pair<int_const,std::vector<itemData,std::allocator<itemData>>> local_c8 [16];
  pair<int,std::vector<itemData,std::allocator<itemData>>> local_b8 [16];
  pair local_a8 [8];
  pair<char_const*const,int> local_a0 [8];
  int local_98;
  pair local_94 [8];
  pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
  local_8c [32];
  rewardKey local_6c [32];
  pair local_4c [8];
  pair<char_const*const,int> local_44 [8];
  int local_3c;
  pair local_38 [8];
  pair<char_const*const,int> local_30 [8];
  int local_28;
  undefined4 local_24;
  int local_20;
  
  cVar2 = loadRDARScriptFile(param_1,param_2);
  if (cVar2 == '\x01') {
    std::string::string(local_18c);
    local_18d = false;
                    /* try { // try from 080ef3ef to 080ef3f3 has its CatchHandler @ 080f0236 */
    std::
    map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
    ::map(local_1a8);
    rewardKey::rewardKey(&local_1ad);
    local_24 = 0;
    itemData::itemData((itemData *)&local_1bc);
    while( true ) {
      puVar4 = (_Rb_tree_const_iterator *)0x1;
                    /* try { // try from 080ef428 to 080ef42c has its CatchHandler @ 080f020e */
      cVar2 = ScanType(local_18c,true);
      if (cVar2 != '\x01') break;
LAB_080ef438:
      while( true ) {
        if ((ImportRewardScript(char_const*,char_const*)::__lookup == '\0') &&
           (iVar3 = __cxa_guard_acquire(&ImportRewardScript(char_const*,char_const*)::__lookup,
                                        puVar4), iVar3 != 0)) {
                    /* try { // try from 080ef465 to 080ef469 has its CatchHandler @ 080ef495 */
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::map
                    ((map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                      *)ImportRewardScript(char_const*,char_const*)::__lookup);
          __cxa_guard_release(&ImportRewardScript(char_const*,char_const*)::__lookup);
          puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
          __cxa_atexit(std::
                       map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>
                       ::~map,ImportRewardScript(char_const*,char_const*)::__lookup,&__dso_handle);
        }
        if ((ImportRewardScript(char_const*,char_const*)::__init_lock == '\0') &&
           (iVar3 = __cxa_guard_acquire(&ImportRewardScript(char_const*,char_const*)::__init_lock),
           iVar3 != 0)) {
                    /* try { // try from 080ef4e1 to 080ef4e5 has its CatchHandler @ 080ef511 */
          SpinLock::SpinLock((SpinLock *)&ImportRewardScript(char_const*,char_const*)::__init_lock);
          __cxa_guard_release(&ImportRewardScript(char_const*,char_const*)::__init_lock);
          puVar4 = (undefined1 *)&ImportRewardScript(char_const*,char_const*)::__init_lock;
          __cxa_atexit(SpinLock::~SpinLock,&ImportRewardScript(char_const*,char_const*)::__init_lock
                       ,&__dso_handle);
        }
        if (ImportRewardScript(char_const*,char_const*)::__inited != '\0') break;
        SpinLock::enter((SpinLock *)&ImportRewardScript(char_const*,char_const*)::__init_lock);
        if (ImportRewardScript(char_const*,char_const*)::__inited == '\0') {
          local_20 = 0;
          goto LAB_080ef628;
        }
        SpinLock::leave((SpinLock *)&ImportRewardScript(char_const*,char_const*)::__init_lock);
      }
                    /* try { // try from 080ef548 to 080ef78b has its CatchHandler @ 080f020e */
      local_184 = std::string::c_str(local_18c);
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::find
                ((char **)local_188);
      std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                (local_1c0,local_188);
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::end
                (local_17c);
      std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                (local_180,(_Rb_tree_iterator *)local_17c);
      puVar4 = local_180;
      cVar2 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator!=
                        (local_1c0,(_Rb_tree_const_iterator *)puVar4);
      if (cVar2 == '\0') {
        local_20 = -1;
      }
      else {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator->(local_1c0)
        ;
        local_20 = *(int *)(iVar3 + 4);
      }
LAB_080ef628:
      if (local_20 == 0xaf) {
LAB_080ef9c9:
        if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
          std::string::string(local_1d0);
                    /* try { // try from 080efa3d to 080efa67 has its CatchHandler @ 080efa6a */
          cVar2 = ScanStr(local_1d0);
          if (cVar2 == '\x01') {
            puVar4 = local_1d0;
            getOptionType(this,(string *)puVar4,(itemData *)&local_1bc);
          }
                    /* try { // try from 080efa8e to 080efc28 has its CatchHandler @ 080f020e */
          std::string::~string(local_1d0);
        }
        else {
          local_12c = 0xaf;
          std::pair<char_const*const,int>::pair<char_const(&)[9],int>
                    (local_134,"[option]",&local_12c);
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
          insert(local_13c);
LAB_080efa98:
          if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
            puVar4 = (undefined1 *)(int)local_1a9;
            defaultOption(this,local_1a9,(itemData *)&local_1bc);
            while( true ) {
              local_1d4 = 0;
              local_1e0 = local_1bc;
              local_1dc = local_1b8;
              local_1d8 = local_1b4;
              local_1d4 = ScanInt(&local_18d);
              if ((local_18d != true) || (local_1dc = ScanInt(&local_18d), local_18d != true))
              break;
              std::
              map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
              ::find((int *)local_1e4);
              std::
              map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
              ::end(local_114);
              cVar2 = std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                      ::operator!=(local_1e4,(_Rb_tree_iterator *)local_114);
              if (cVar2 == '\0') {
                std::vector<itemData,std::allocator<itemData>>::vector(local_1f0);
                    /* try { // try from 080efc3c to 080efc62 has its CatchHandler @ 080efcf3 */
                std::vector<itemData,std::allocator<itemData>>::push_back
                          (local_1f0,(itemData *)&local_1e0);
                std::make_pair<int&,std::vector<itemData,std::allocator<itemData>>&>
                          ((int *)local_f8,(vector *)&local_1d4);
                    /* try { // try from 080efc79 to 080efc7d has its CatchHandler @ 080efccb */
                std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>::
                pair<int,std::vector<itemData,std::allocator<itemData>>>(local_108,local_f8);
                puVar4 = local_1a8;
                    /* try { // try from 080efc9b to 080efc9f has its CatchHandler @ 080efcb3 */
                std::
                map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
                ::insert(local_110);
                    /* try { // try from 080efcac to 080efcb0 has its CatchHandler @ 080efccb */
                std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>::~pair
                          (local_108);
                    /* try { // try from 080efcec to 080efcf0 has its CatchHandler @ 080efcf3 */
                std::pair<int,std::vector<itemData,std::allocator<itemData>>>::~pair(local_f8);
                    /* try { // try from 080efd17 to 080efee7 has its CatchHandler @ 080f020e */
                std::vector<itemData,std::allocator<itemData>>::~vector(local_1f0);
              }
              else {
                iVar3 = std::
                        _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                        ::operator->(local_1e4);
                puVar4 = (undefined1 *)&local_1e0;
                std::vector<itemData,std::allocator<itemData>>::push_back
                          ((vector<itemData,std::allocator<itemData>> *)(iVar3 + 4),
                           (itemData *)puVar4);
              }
            }
          }
          else {
            local_118 = 0xb9;
            std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                      (local_120,"[equipment item]",&local_118);
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_128);
LAB_080efd26:
            if (ImportRewardScript(char_const*,char_const*)::__inited != '\x01') {
              local_d8 = 0xd8;
              std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                        (local_e0,"[stackable item]",&local_d8);
              std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
              insert(local_e8);
              goto LAB_080effe5;
            }
            puVar4 = (undefined1 *)(int)local_1a9;
            defaultOption(this,local_1a9,(itemData *)&local_1bc);
            while( true ) {
              local_1f4 = 0;
              local_1b4 = 1;
              local_200 = local_1bc;
              local_1fc = local_1b8;
              local_1f8 = 1;
              local_1f4 = ScanInt(&local_18d);
              if (((local_18d != true) || (local_1fc = ScanInt(&local_18d), local_18d != true)) ||
                 (local_1f8 = ScanInt(&local_18d), local_18d != true)) break;
              std::
              map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
              ::find((int *)local_204);
              std::
              map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
              ::end(local_d4);
              cVar2 = std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                      ::operator!=(local_204,(_Rb_tree_iterator *)local_d4);
              if (cVar2 == '\0') {
                std::vector<itemData,std::allocator<itemData>>::vector(local_210);
                    /* try { // try from 080efefb to 080eff21 has its CatchHandler @ 080effb2 */
                std::vector<itemData,std::allocator<itemData>>::push_back
                          (local_210,(itemData *)&local_200);
                std::make_pair<int&,std::vector<itemData,std::allocator<itemData>>&>
                          ((int *)local_b8,(vector *)&local_1f4);
                    /* try { // try from 080eff38 to 080eff3c has its CatchHandler @ 080eff8a */
                std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>::
                pair<int,std::vector<itemData,std::allocator<itemData>>>(local_c8,local_b8);
                puVar4 = local_1a8;
                    /* try { // try from 080eff5a to 080eff5e has its CatchHandler @ 080eff72 */
                std::
                map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
                ::insert(local_d0);
                    /* try { // try from 080eff6b to 080eff6f has its CatchHandler @ 080eff8a */
                std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>::~pair(local_c8)
                ;
                    /* try { // try from 080effab to 080effaf has its CatchHandler @ 080effb2 */
                std::pair<int,std::vector<itemData,std::allocator<itemData>>>::~pair(local_b8);
                    /* try { // try from 080effd6 to 080f0063 has its CatchHandler @ 080f020e */
                std::vector<itemData,std::allocator<itemData>>::~vector(local_210);
              }
              else {
                iVar3 = std::
                        _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                        ::operator->(local_204);
                puVar4 = (undefined1 *)&local_200;
                std::vector<itemData,std::allocator<itemData>>::push_back
                          ((vector<itemData,std::allocator<itemData>> *)(iVar3 + 4),
                           (itemData *)puVar4);
              }
            }
          }
        }
      }
      else if (local_20 < 0xb0) {
        if (local_20 == 0x8f) {
LAB_080ef6b7:
          if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
            unaff_EBX = 1;
            goto LAB_080f0226;
          }
          local_168 = 0x8f;
          std::pair<char_const*const,int>::pair<char_const(&)[10],int>
                    (local_170,"[/reward]",&local_168);
          puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
          insert(local_178);
LAB_080ef71e:
          if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
            std::string::string(local_1c4);
                    /* try { // try from 080ef795 to 080ef7ff has its CatchHandler @ 080ef827 */
            cVar2 = ScanStr(local_1c4);
            if (cVar2 == '\x01') {
              local_1ad = (rewardKey)getCharacterJobToEnumValue(local_1c4);
              local_1ac = ScanInt(&local_18d);
              if (local_18d == true) {
                local_1ab = ScanInt(&local_18d);
                if (local_18d == true) {
                  bVar1 = true;
                }
                else {
                  unaff_EBX = 0;
                  bVar1 = false;
                }
              }
              else {
                unaff_EBX = 0;
                bVar1 = false;
              }
            }
            else {
              unaff_EBX = 0;
              bVar1 = false;
            }
                    /* try { // try from 080ef84b to 080ef8ca has its CatchHandler @ 080f020e */
            std::string::~string(local_1c4);
          }
          else {
            local_154 = 0x93;
            std::pair<char_const*const,int>::pair<char_const(&)[11],int>
                      (local_15c,"[job type]",&local_154);
            puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_164);
LAB_080ef85d:
            if (ImportRewardScript(char_const*,char_const*)::__inited != '\x01') {
              local_140 = 0xa3;
              std::pair<char_const*const,int>::pair<char_const(&)[11],int>
                        (local_148,"[sub type]",&local_140);
              puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
              std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
              insert(local_150);
              goto LAB_080ef9c9;
            }
            std::string::string(local_1c8);
                    /* try { // try from 080ef8d4 to 080ef917 has its CatchHandler @ 080ef993 */
            cVar2 = ScanStr(local_1c8);
            if (cVar2 == '\x01') {
              puVar4 = local_1c8;
              local_1aa = (rewardSubKey)getSubKeyType(this,(string *)puVar4);
              std::string::string(local_1cc);
                    /* try { // try from 080ef921 to 080ef94d has its CatchHandler @ 080ef95b */
              cVar2 = ScanStr(local_1cc);
              if (cVar2 == '\x01') {
                puVar4 = local_1cc;
                local_1a9 = getSubKeyAction(this,(string *)puVar4);
              }
              else {
                unaff_EBX = 0;
              }
                    /* try { // try from 080ef97c to 080ef980 has its CatchHandler @ 080ef993 */
              std::string::~string(local_1cc);
              if (cVar2 == '\x01') {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            }
            else {
              unaff_EBX = 0;
              bVar1 = false;
            }
                    /* try { // try from 080ef9b7 to 080efa33 has its CatchHandler @ 080f020e */
            std::string::~string(local_1c8);
          }
          if (!bVar1) goto LAB_080f0226;
        }
        else {
          if (0x8f < local_20) {
            if (local_20 == 0x93) goto LAB_080ef71e;
            if (local_20 != 0xa3) goto LAB_080f01d5;
            goto LAB_080ef85d;
          }
          if (local_20 == 0) goto LAB_080ef6b7;
        }
      }
      else if (local_20 == 0xfc) {
LAB_080effe5:
        if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
          std::
          make_pair<rewardKey&,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>&>
                    (local_6c,(map *)&local_1ad);
                    /* try { // try from 080f0077 to 080f007b has its CatchHandler @ 080f00c6 */
          std::
          pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
          ::
          pair<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
                    (local_8c,local_6c);
          puVar4 = this;
                    /* try { // try from 080f0096 to 080f009a has its CatchHandler @ 080f00ae */
          std::
          map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
          ::insert(local_94);
                    /* try { // try from 080f00a7 to 080f00ab has its CatchHandler @ 080f00c6 */
          std::
          pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
          ::~pair(local_8c);
                    /* try { // try from 080f00e4 to 080f01ee has its CatchHandler @ 080f020e */
          std::
          pair<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
          ::~pair((pair<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>
                   *)local_6c);
          rewardSubKey::clear(&local_1aa);
          std::
          map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
          ::clear(local_1a8);
        }
        else {
          local_98 = 0xfc;
          std::pair<char_const*const,int>::pair<char_const(&)[12],int>
                    (local_a0,"[/sub type]",&local_98);
          puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
          insert(local_a8);
LAB_080f010d:
          if (ImportRewardScript(char_const*,char_const*)::__inited != '\x01') {
            local_3c = 0x102;
            std::pair<char_const*const,int>::pair<char_const(&)[12],int>
                      (local_44,"[/job type]",&local_3c);
            puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
            std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
            insert(local_4c);
            goto LAB_080f0179;
          }
          rewardKey::clear(&local_1ad);
          std::
          map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
          ::clear(local_1a8);
        }
      }
      else {
        if (local_20 < 0xfd) {
          if (local_20 == 0xb9) goto LAB_080efa98;
          if (local_20 != 0xd8) goto LAB_080f01d5;
          goto LAB_080efd26;
        }
        if (local_20 == 0x102) goto LAB_080f010d;
        if (local_20 != 0x107) goto LAB_080f01d5;
LAB_080f0179:
        if (ImportRewardScript(char_const*,char_const*)::__inited == '\x01') {
          itemData::clear((itemData *)&local_1bc);
        }
        else {
          local_28 = 0x107;
          std::pair<char_const*const,int>::pair<char_const(&)[10],int>
                    (local_30,"[/option]",&local_28);
          puVar4 = ImportRewardScript(char_const*,char_const*)::__lookup;
          std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
          insert(local_38);
        }
      }
LAB_080f01d5:
      if (ImportRewardScript(char_const*,char_const*)::__inited != '\x01') {
        SpinLock::leave((SpinLock *)&ImportRewardScript(char_const*,char_const*)::__init_lock);
        ImportRewardScript(char_const*,char_const*)::__inited = '\x01';
        goto LAB_080ef438;
      }
    }
    unaff_EBX = (uint)local_18d;
LAB_080f0226:
                    /* try { // try from 080f022f to 080f0233 has its CatchHandler @ 080f0236 */
    std::
    map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
    ::~map(local_1a8);
    std::string::~string(local_18c);
  }
  else {
    unaff_EBX = 0;
  }
  return unaff_EBX;
}

```

---

## StartEndPos

```asm
// === 080f0d22 eventReward::StartEndPos  [0x080f0d22-0x80f0d6d] ===
 80f0d22:	55                   	push   %ebp
 80f0d23:	89 e5                	mov    %esp,%ebp
 80f0d25:	83 ec 28             	sub    $0x28,%esp
 80f0d28:	8b 45 08             	mov    0x8(%ebp),%eax
 80f0d2b:	8d 50 18             	lea    0x18(%eax),%edx
 80f0d2e:	8b 45 14             	mov    0x14(%ebp),%eax
 80f0d31:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f0d35:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0d38:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f0d3c:	8b 45 18             	mov    0x18(%ebp),%eax
 80f0d3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0d43:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0d46:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0d4a:	89 14 24             	mov    %edx,(%esp)
 80f0d4d:	e8 44 03 00 00       	call   80f1096 <_ZNK17CSlotBoundChecker14get_slot_boundEN10Inven_Item9ITEM_TYPEEiRiS2_>
 80f0d52:	83 f0 01             	xor    $0x1,%eax
 80f0d55:	84 c0                	test   %al,%al
 80f0d57:	74 12                	je     80f0d6b <_ZNK11eventReward11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_i+0x49>
 80f0d59:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0d5c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80f0d62:	8b 45 14             	mov    0x14(%ebp),%eax
 80f0d65:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80f0d6b:	c9                   	leave
 80f0d6c:	c3                   	ret
 80f0d6d:	90                   	nop

```

```c
// eventReward::StartEndPos @ 0x80f0d22

/* eventReward::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&, int) const */

void __thiscall
eventReward::StartEndPos
          (eventReward *this,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 param_5)

{
  char cVar1;
  
  cVar1 = CSlotBoundChecker::get_slot_bound
                    ((CSlotBoundChecker *)(this + 0x18),param_2,param_5,param_3,param_4);
  if (cVar1 != '\x01') {
    *param_3 = 0;
    *param_4 = 0;
  }
  return;
}

```

---

## applyItemOption

```asm
// === 080f0d6e eventReward::applyItemOption  [0x080f0d6e-0x80f0e3f] ===
 80f0d6e:	55                   	push   %ebp
 80f0d6f:	89 e5                	mov    %esp,%ebp
 80f0d71:	53                   	push   %ebx
 80f0d72:	83 ec 14             	sub    $0x14,%esp
 80f0d75:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0d78:	89 04 24             	mov    %eax,(%esp)
 80f0d7b:	e8 7a 05 00 00       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 80f0d80:	84 c0                	test   %al,%al
 80f0d82:	74 11                	je     80f0d95 <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0x27>
 80f0d84:	8b 45 14             	mov    0x14(%ebp),%eax
 80f0d87:	8b 50 08             	mov    0x8(%eax),%edx
 80f0d8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0d8d:	89 50 07             	mov    %edx,0x7(%eax)
 80f0d90:	e9 a5 00 00 00       	jmp    80f0e3a <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0xcc>
 80f0d95:	8b 45 14             	mov    0x14(%ebp),%eax
 80f0d98:	0f b6 50 01          	movzbl 0x1(%eax),%edx
 80f0d9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0d9f:	88 10                	mov    %dl,(%eax)
 80f0da1:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0da4:	89 04 24             	mov    %eax,(%esp)
 80f0da7:	e8 36 05 00 00       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 80f0dac:	83 f8 05             	cmp    $0x5,%eax
 80f0daf:	77 1a                	ja     80f0dcb <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0x5d>
 80f0db1:	ba 01 00 00 00       	mov    $0x1,%edx
 80f0db6:	89 d3                	mov    %edx,%ebx
 80f0db8:	89 c1                	mov    %eax,%ecx
 80f0dba:	d3 e3                	shl    %cl,%ebx
 80f0dbc:	89 d8                	mov    %ebx,%eax
 80f0dbe:	83 e0 27             	and    $0x27,%eax
 80f0dc1:	85 c0                	test   %eax,%eax
 80f0dc3:	74 06                	je     80f0dcb <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0x5d>
 80f0dc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0dc8:	c6 00 00             	movb   $0x0,(%eax)
 80f0dcb:	8b 45 14             	mov    0x14(%ebp),%eax
 80f0dce:	0f b6 00             	movzbl (%eax),%eax
 80f0dd1:	3c 01                	cmp    $0x1,%al
 80f0dd3:	7e 18                	jle    80f0ded <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0x7f>
 80f0dd5:	8b 45 14             	mov    0x14(%ebp),%eax
 80f0dd8:	0f b6 00             	movzbl (%eax),%eax
 80f0ddb:	0f b6 c0             	movzbl %al,%eax
 80f0dde:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0de2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0de5:	89 04 24             	mov    %eax,(%esp)
 80f0de8:	e8 0f 02 00 00       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 80f0ded:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0df0:	8b 00                	mov    (%eax),%eax
 80f0df2:	83 c0 4c             	add    $0x4c,%eax
 80f0df5:	8b 10                	mov    (%eax),%edx
 80f0df7:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0dfa:	89 04 24             	mov    %eax,(%esp)
 80f0dfd:	ff d2                	call   *%edx
 80f0dff:	84 c0                	test   %al,%al
 80f0e01:	74 15                	je     80f0e18 <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0xaa>
 80f0e03:	8b 45 14             	mov    0x14(%ebp),%eax
 80f0e06:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 80f0e0a:	83 f0 01             	xor    $0x1,%eax
 80f0e0d:	84 c0                	test   %al,%al
 80f0e0f:	74 07                	je     80f0e18 <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0xaa>
 80f0e11:	b8 01 00 00 00       	mov    $0x1,%eax
 80f0e16:	eb 05                	jmp    80f0e1d <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0xaf>
 80f0e18:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0e1d:	84 c0                	test   %al,%al
 80f0e1f:	74 19                	je     80f0e3a <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData+0xcc>
 80f0e21:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0e24:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0e28:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0e2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0e2f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f0e32:	89 04 24             	mov    %eax,(%esp)
 80f0e35:	e8 06 00 00 00       	call   80f0e40 <_ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item>
 80f0e3a:	83 c4 14             	add    $0x14,%esp
 80f0e3d:	5b                   	pop    %ebx
 80f0e3e:	5d                   	pop    %ebp
 80f0e3f:	c3                   	ret

```

```c
// eventReward::applyItemOption @ 0x80f0d6e

/* eventReward::applyItemOption(Inven_Item&, CItem const*, itemData const&) */

void __thiscall
eventReward::applyItemOption(eventReward *this,Inven_Item *param_1,CItem *param_2,itemData *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = CItem::is_stackable(param_2);
  if (cVar2 == '\0') {
    *param_1 = *(Inven_Item *)(param_3 + 1);
    uVar3 = CItem::GetAttachType(param_2);
    if ((uVar3 < 6) && ((1 << ((byte)uVar3 & 0x1f) & 0x27U) != 0)) {
      *param_1 = (Inven_Item)0x0;
    }
    if ('\x01' < (char)*param_3) {
      Inven_Item::SetUpgrade(param_1,(uchar)*param_3);
    }
    cVar2 = (**(code **)(*(int *)param_2 + 0x4c))(param_2);
    if ((cVar2 == '\0') || (param_3[2] == (itemData)0x1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      unsealRandomOption(this,param_2,param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 8);
  }
  return;
}

```

---

## createCharacEquipReward

```asm
// === 080f033c eventReward::createCharacEquipReward  [0x080f033c-0x80f0407] ===
 80f033c:	55                   	push   %ebp
 80f033d:	89 e5                	mov    %esp,%ebp
 80f033f:	83 ec 38             	sub    $0x38,%esp
 80f0342:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 80f0346:	e8 50 be fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f034b:	8d 90 28 b6 00 00    	lea    0xb628(%eax),%edx
 80f0351:	8b 45 18             	mov    0x18(%ebp),%eax
 80f0354:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f0358:	8b 45 10             	mov    0x10(%ebp),%eax
 80f035b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f035f:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 80f0363:	88 44 24 0c          	mov    %al,0xc(%esp)
 80f0367:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f036a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f036e:	89 14 24             	mov    %edx,(%esp)
 80f0371:	e8 64 03 00 00       	call   80f06da <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi>
 80f0376:	84 c0                	test   %al,%al
 80f0378:	74 04                	je     80f037e <_ZN11eventReward23createCharacEquipRewardEP10Inven_Item9rewardKeyi+0x42>
 80f037a:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 80f037e:	c6 45 11 00          	movb   $0x0,0x11(%ebp)
 80f0382:	c6 45 14 02          	movb   $0x2,0x14(%ebp)
 80f0386:	e8 10 be fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f038b:	8d 90 28 b6 00 00    	lea    0xb628(%eax),%edx
 80f0391:	8b 45 18             	mov    0x18(%ebp),%eax
 80f0394:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f0398:	8b 45 10             	mov    0x10(%ebp),%eax
 80f039b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f039f:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 80f03a3:	88 44 24 0c          	mov    %al,0xc(%esp)
 80f03a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f03aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f03ae:	89 14 24             	mov    %edx,(%esp)
 80f03b1:	e8 24 03 00 00       	call   80f06da <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi>
 80f03b6:	84 c0                	test   %al,%al
 80f03b8:	74 04                	je     80f03be <_ZN11eventReward23createCharacEquipRewardEP10Inven_Item9rewardKeyi+0x82>
 80f03ba:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 80f03be:	c6 45 10 0b          	movb   $0xb,0x10(%ebp)
 80f03c2:	c6 45 11 00          	movb   $0x0,0x11(%ebp)
 80f03c6:	c6 45 14 02          	movb   $0x2,0x14(%ebp)
 80f03ca:	e8 cc bd fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f03cf:	8d 90 28 b6 00 00    	lea    0xb628(%eax),%edx
 80f03d5:	8b 45 18             	mov    0x18(%ebp),%eax
 80f03d8:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f03dc:	8b 45 10             	mov    0x10(%ebp),%eax
 80f03df:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f03e3:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 80f03e7:	88 44 24 0c          	mov    %al,0xc(%esp)
 80f03eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f03ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f03f2:	89 14 24             	mov    %edx,(%esp)
 80f03f5:	e8 e0 02 00 00       	call   80f06da <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi>
 80f03fa:	84 c0                	test   %al,%al
 80f03fc:	74 04                	je     80f0402 <_ZN11eventReward23createCharacEquipRewardEP10Inven_Item9rewardKeyi+0xc6>
 80f03fe:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 80f0402:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 80f0406:	c9                   	leave
 80f0407:	c3                   	ret

```

```c
// eventReward::createCharacEquipReward @ 0x80f033c

/* eventReward::createCharacEquipReward(Inven_Item*, rewardKey, int) */

bool eventReward::createCharacEquipReward
               (undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4,
               undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool local_d;
  
  iVar3 = G_CDataManager();
  cVar1 = rewardWriteUserEquip(iVar3 + 0xb628,param_2,param_3,param_4,param_5);
  param_3 = param_3 & 0xff;
  iVar3 = G_CDataManager();
  cVar2 = rewardWriteUserEquip(iVar3 + 0xb628,param_2,param_3,2,param_5);
  local_d = cVar2 != '\0' || cVar1 != '\0';
  iVar3 = G_CDataManager();
  cVar1 = rewardWriteUserEquip(iVar3 + 0xb628,param_2,0xb,2,param_5);
  if (cVar1 != '\0') {
    local_d = true;
  }
  return local_d;
}

```

---

## createCharacInvenReward

```asm
// === 080f0270 eventReward::createCharacInvenReward  [0x080f0270-0x80f033b] ===
 80f0270:	55                   	push   %ebp
 80f0271:	89 e5                	mov    %esp,%ebp
 80f0273:	83 ec 38             	sub    $0x38,%esp
 80f0276:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 80f027a:	e8 1c bf fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f027f:	8d 90 28 b6 00 00    	lea    0xb628(%eax),%edx
 80f0285:	8b 45 18             	mov    0x18(%ebp),%eax
 80f0288:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f028c:	8b 45 10             	mov    0x10(%ebp),%eax
 80f028f:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0293:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 80f0297:	88 44 24 0c          	mov    %al,0xc(%esp)
 80f029b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f029e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f02a2:	89 14 24             	mov    %edx,(%esp)
 80f02a5:	e8 5e 01 00 00       	call   80f0408 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi>
 80f02aa:	84 c0                	test   %al,%al
 80f02ac:	74 04                	je     80f02b2 <_ZN11eventReward23createCharacInvenRewardEP10Inven_Item9rewardKeyi+0x42>
 80f02ae:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 80f02b2:	c6 45 11 00          	movb   $0x0,0x11(%ebp)
 80f02b6:	c6 45 14 01          	movb   $0x1,0x14(%ebp)
 80f02ba:	e8 dc be fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f02bf:	8d 90 28 b6 00 00    	lea    0xb628(%eax),%edx
 80f02c5:	8b 45 18             	mov    0x18(%ebp),%eax
 80f02c8:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f02cc:	8b 45 10             	mov    0x10(%ebp),%eax
 80f02cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f02d3:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 80f02d7:	88 44 24 0c          	mov    %al,0xc(%esp)
 80f02db:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f02de:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f02e2:	89 14 24             	mov    %edx,(%esp)
 80f02e5:	e8 1e 01 00 00       	call   80f0408 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi>
 80f02ea:	84 c0                	test   %al,%al
 80f02ec:	74 04                	je     80f02f2 <_ZN11eventReward23createCharacInvenRewardEP10Inven_Item9rewardKeyi+0x82>
 80f02ee:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 80f02f2:	c6 45 10 0b          	movb   $0xb,0x10(%ebp)
 80f02f6:	c6 45 11 00          	movb   $0x0,0x11(%ebp)
 80f02fa:	c6 45 14 01          	movb   $0x1,0x14(%ebp)
 80f02fe:	e8 98 be fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f0303:	8d 90 28 b6 00 00    	lea    0xb628(%eax),%edx
 80f0309:	8b 45 18             	mov    0x18(%ebp),%eax
 80f030c:	89 44 24 10          	mov    %eax,0x10(%esp)
 80f0310:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0313:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0317:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 80f031b:	88 44 24 0c          	mov    %al,0xc(%esp)
 80f031f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0322:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0326:	89 14 24             	mov    %edx,(%esp)
 80f0329:	e8 da 00 00 00       	call   80f0408 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi>
 80f032e:	84 c0                	test   %al,%al
 80f0330:	74 04                	je     80f0336 <_ZN11eventReward23createCharacInvenRewardEP10Inven_Item9rewardKeyi+0xc6>
 80f0332:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 80f0336:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 80f033a:	c9                   	leave
 80f033b:	c3                   	ret

```

```c
// eventReward::createCharacInvenReward @ 0x80f0270

/* eventReward::createCharacInvenReward(Inven_Item*, rewardKey, int) */

bool eventReward::createCharacInvenReward
               (undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4,
               undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool local_d;
  
  iVar3 = G_CDataManager();
  cVar1 = rewardWriteUserInven(iVar3 + 0xb628,param_2,param_3,param_4,param_5);
  param_3 = param_3 & 0xff;
  iVar3 = G_CDataManager();
  cVar2 = rewardWriteUserInven(iVar3 + 0xb628,param_2,param_3,1,param_5);
  local_d = cVar2 != '\0' || cVar1 != '\0';
  iVar3 = G_CDataManager();
  cVar1 = rewardWriteUserInven(iVar3 + 0xb628,param_2,0xb,1,param_5);
  if (cVar1 != '\0') {
    local_d = true;
  }
  return local_d;
}

```

---

## defaultOption

```asm
// === 080ef25c eventReward::defaultOption  [0x080ef25c-0x80ef29b] ===
 80ef25c:	55                   	push   %ebp
 80ef25d:	89 e5                	mov    %esp,%ebp
 80ef25f:	83 ec 04             	sub    $0x4,%esp
 80ef262:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef265:	88 45 fc             	mov    %al,-0x4(%ebp)
 80ef268:	0f be 45 fc          	movsbl -0x4(%ebp),%eax
 80ef26c:	83 f8 02             	cmp    $0x2,%eax
 80ef26f:	75 18                	jne    80ef289 <_ZN11eventReward13defaultOptionEcR8itemData+0x2d>
 80ef271:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef274:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 80ef27b:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef27e:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 80ef282:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef285:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 80ef289:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef28c:	0f b6 00             	movzbl (%eax),%eax
 80ef28f:	84 c0                	test   %al,%al
 80ef291:	75 06                	jne    80ef299 <_ZN11eventReward13defaultOptionEcR8itemData+0x3d>
 80ef293:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef296:	c6 00 01             	movb   $0x1,(%eax)
 80ef299:	c9                   	leave
 80ef29a:	c3                   	ret
 80ef29b:	90                   	nop

```

```c
// eventReward::defaultOption @ 0x80ef25c

/* eventReward::defaultOption(char, itemData&) */

void __thiscall eventReward::defaultOption(eventReward *this,char param_1,itemData *param_2)

{
  if (param_1 == '\x02') {
    *(undefined4 *)(param_2 + 8) = 1;
    param_2[1] = (itemData)0x0;
    param_2[2] = (itemData)0x0;
  }
  if (*param_2 == (itemData)0x0) {
    *param_2 = (itemData)0x1;
  }
  return;
}

```

---

## getOptionType

```asm
// === 080ef190 eventReward::getOptionType  [0x080ef190-0x80ef25b] ===
 80ef190:	55                   	push   %ebp
 80ef191:	89 e5                	mov    %esp,%ebp
 80ef193:	83 ec 28             	sub    $0x28,%esp
 80ef196:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 80ef19a:	c7 44 24 04 0b a2 b3 	movl   $0x8b3a20b,0x4(%esp)
 80ef1a1:	08 
 80ef1a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef1a5:	89 04 24             	mov    %eax,(%esp)
 80ef1a8:	e8 f4 17 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef1ad:	84 c0                	test   %al,%al
 80ef1af:	74 0c                	je     80ef1bd <_ZN11eventReward13getOptionTypeERSsR8itemData+0x2d>
 80ef1b1:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef1b4:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 80ef1b8:	e9 99 00 00 00       	jmp    80ef256 <_ZN11eventReward13getOptionTypeERSsR8itemData+0xc6>
 80ef1bd:	c7 44 24 04 12 a2 b3 	movl   $0x8b3a212,0x4(%esp)
 80ef1c4:	08 
 80ef1c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef1c8:	89 04 24             	mov    %eax,(%esp)
 80ef1cb:	e8 d1 17 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef1d0:	84 c0                	test   %al,%al
 80ef1d2:	74 09                	je     80ef1dd <_ZN11eventReward13getOptionTypeERSsR8itemData+0x4d>
 80ef1d4:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef1d7:	c6 40 01 01          	movb   $0x1,0x1(%eax)
 80ef1db:	eb 79                	jmp    80ef256 <_ZN11eventReward13getOptionTypeERSsR8itemData+0xc6>
 80ef1dd:	c7 44 24 04 17 a2 b3 	movl   $0x8b3a217,0x4(%esp)
 80ef1e4:	08 
 80ef1e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef1e8:	89 04 24             	mov    %eax,(%esp)
 80ef1eb:	e8 b1 17 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef1f0:	84 c0                	test   %al,%al
 80ef1f2:	74 24                	je     80ef218 <_ZN11eventReward13getOptionTypeERSsR8itemData+0x88>
 80ef1f4:	8d 45 f7             	lea    -0x9(%ebp),%eax
 80ef1f7:	89 04 24             	mov    %eax,(%esp)
 80ef1fa:	e8 7c d1 7c 00       	call   88bc37b <_Z7ScanIntPb>
 80ef1ff:	89 c2                	mov    %eax,%edx
 80ef201:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef204:	88 10                	mov    %dl,(%eax)
 80ef206:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 80ef20a:	83 f0 01             	xor    $0x1,%eax
 80ef20d:	84 c0                	test   %al,%al
 80ef20f:	74 45                	je     80ef256 <_ZN11eventReward13getOptionTypeERSsR8itemData+0xc6>
 80ef211:	b8 00 00 00 00       	mov    $0x0,%eax
 80ef216:	eb 42                	jmp    80ef25a <_ZN11eventReward13getOptionTypeERSsR8itemData+0xca>
 80ef218:	c7 44 24 04 1f a2 b3 	movl   $0x8b3a21f,0x4(%esp)
 80ef21f:	08 
 80ef220:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef223:	89 04 24             	mov    %eax,(%esp)
 80ef226:	e8 76 17 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef22b:	84 c0                	test   %al,%al
 80ef22d:	74 09                	je     80ef238 <_ZN11eventReward13getOptionTypeERSsR8itemData+0xa8>
 80ef22f:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef232:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 80ef236:	eb 1e                	jmp    80ef256 <_ZN11eventReward13getOptionTypeERSsR8itemData+0xc6>
 80ef238:	c7 44 24 04 29 a2 b3 	movl   $0x8b3a229,0x4(%esp)
 80ef23f:	08 
 80ef240:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef243:	89 04 24             	mov    %eax,(%esp)
 80ef246:	e8 56 17 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef24b:	84 c0                	test   %al,%al
 80ef24d:	74 07                	je     80ef256 <_ZN11eventReward13getOptionTypeERSsR8itemData+0xc6>
 80ef24f:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef252:	c6 40 02 01          	movb   $0x1,0x2(%eax)
 80ef256:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 80ef25a:	c9                   	leave
 80ef25b:	c3                   	ret

```

```c
// eventReward::getOptionType @ 0x80ef190

/* eventReward::getOptionType(std::string&, itemData&) */

char __thiscall eventReward::getOptionType(eventReward *this,string *param_1,itemData *param_2)

{
  bool bVar1;
  itemData iVar2;
  bool local_d [9];
  
  local_d[0] = true;
  bVar1 = std::operator==(param_1,"unseal");
  if (bVar1) {
    param_2[1] = (itemData)0x0;
  }
  else {
    bVar1 = std::operator==(param_1,"seal");
    if (bVar1) {
      param_2[1] = (itemData)0x1;
    }
    else {
      bVar1 = std::operator==(param_1,"upgrade");
      if (bVar1) {
        iVar2 = (itemData)ScanInt(local_d);
        *param_2 = iVar2;
        bVar1 = local_d[0] != true;
        local_d[0] = true;
        if (bVar1) {
          local_d[0] = false;
        }
      }
      else {
        bVar1 = std::operator==(param_1,"unsealROI");
        if (bVar1) {
          param_2[2] = (itemData)0x0;
        }
        else {
          bVar1 = std::operator==(param_1,"sealROI");
          if (bVar1) {
            param_2[2] = (itemData)0x1;
          }
        }
      }
    }
  }
  return local_d[0];
}

```

---

## getSubKeyAction

```asm
// === 080ef128 eventReward::getSubKeyAction  [0x080ef128-0x80ef18f] ===
 80ef128:	55                   	push   %ebp
 80ef129:	89 e5                	mov    %esp,%ebp
 80ef12b:	83 ec 18             	sub    $0x18,%esp
 80ef12e:	c7 44 24 04 f8 a1 b3 	movl   $0x8b3a1f8,0x4(%esp)
 80ef135:	08 
 80ef136:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef139:	89 04 24             	mov    %eax,(%esp)
 80ef13c:	e8 60 18 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef141:	84 c0                	test   %al,%al
 80ef143:	74 07                	je     80ef14c <_ZN11eventReward15getSubKeyActionERSs+0x24>
 80ef145:	b8 02 00 00 00       	mov    $0x2,%eax
 80ef14a:	eb 41                	jmp    80ef18d <_ZN11eventReward15getSubKeyActionERSs+0x65>
 80ef14c:	c7 44 24 04 fe a1 b3 	movl   $0x8b3a1fe,0x4(%esp)
 80ef153:	08 
 80ef154:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef157:	89 04 24             	mov    %eax,(%esp)
 80ef15a:	e8 42 18 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef15f:	84 c0                	test   %al,%al
 80ef161:	74 07                	je     80ef16a <_ZN11eventReward15getSubKeyActionERSs+0x42>
 80ef163:	b8 01 00 00 00       	mov    $0x1,%eax
 80ef168:	eb 23                	jmp    80ef18d <_ZN11eventReward15getSubKeyActionERSs+0x65>
 80ef16a:	c7 44 24 04 04 a2 b3 	movl   $0x8b3a204,0x4(%esp)
 80ef171:	08 
 80ef172:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef175:	89 04 24             	mov    %eax,(%esp)
 80ef178:	e8 24 18 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef17d:	84 c0                	test   %al,%al
 80ef17f:	74 07                	je     80ef188 <_ZN11eventReward15getSubKeyActionERSs+0x60>
 80ef181:	b8 03 00 00 00       	mov    $0x3,%eax
 80ef186:	eb 05                	jmp    80ef18d <_ZN11eventReward15getSubKeyActionERSs+0x65>
 80ef188:	b8 00 00 00 00       	mov    $0x0,%eax
 80ef18d:	c9                   	leave
 80ef18e:	c3                   	ret
 80ef18f:	90                   	nop

```

```c
// eventReward::getSubKeyAction @ 0x80ef128

/* eventReward::getSubKeyAction(std::string&) */

undefined4 __thiscall eventReward::getSubKeyAction(eventReward *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_1,"equip");
  if (bVar1) {
    uVar2 = 2;
  }
  else {
    bVar1 = std::operator==(param_1,"inven");
    if (bVar1) {
      uVar2 = 1;
    }
    else {
      bVar1 = std::operator==(param_1,"postal");
      if (bVar1) {
        uVar2 = 3;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## getSubKeyType

```asm
// === 080ef0c0 eventReward::getSubKeyType  [0x080ef0c0-0x80ef127] ===
 80ef0c0:	55                   	push   %ebp
 80ef0c1:	89 e5                	mov    %esp,%ebp
 80ef0c3:	83 ec 18             	sub    $0x18,%esp
 80ef0c6:	c7 44 24 04 e3 a1 b3 	movl   $0x8b3a1e3,0x4(%esp)
 80ef0cd:	08 
 80ef0ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef0d1:	89 04 24             	mov    %eax,(%esp)
 80ef0d4:	e8 c8 18 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef0d9:	84 c0                	test   %al,%al
 80ef0db:	74 07                	je     80ef0e4 <_ZN11eventReward13getSubKeyTypeERSs+0x24>
 80ef0dd:	b8 00 00 00 00       	mov    $0x0,%eax
 80ef0e2:	eb 41                	jmp    80ef125 <_ZN11eventReward13getSubKeyTypeERSs+0x65>
 80ef0e4:	c7 44 24 04 ea a1 b3 	movl   $0x8b3a1ea,0x4(%esp)
 80ef0eb:	08 
 80ef0ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef0ef:	89 04 24             	mov    %eax,(%esp)
 80ef0f2:	e8 aa 18 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef0f7:	84 c0                	test   %al,%al
 80ef0f9:	74 07                	je     80ef102 <_ZN11eventReward13getSubKeyTypeERSs+0x42>
 80ef0fb:	b8 01 00 00 00       	mov    $0x1,%eax
 80ef100:	eb 23                	jmp    80ef125 <_ZN11eventReward13getSubKeyTypeERSs+0x65>
 80ef102:	c7 44 24 04 f0 a1 b3 	movl   $0x8b3a1f0,0x4(%esp)
 80ef109:	08 
 80ef10a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef10d:	89 04 24             	mov    %eax,(%esp)
 80ef110:	e8 8c 18 f9 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 80ef115:	84 c0                	test   %al,%al
 80ef117:	74 07                	je     80ef120 <_ZN11eventReward13getSubKeyTypeERSs+0x60>
 80ef119:	b8 02 00 00 00       	mov    $0x2,%eax
 80ef11e:	eb 05                	jmp    80ef125 <_ZN11eventReward13getSubKeyTypeERSs+0x65>
 80ef120:	b8 00 00 00 00       	mov    $0x0,%eax
 80ef125:	c9                   	leave
 80ef126:	c3                   	ret
 80ef127:	90                   	nop

```

```c
// eventReward::getSubKeyType @ 0x80ef0c0

/* eventReward::getSubKeyType(std::string&) */

undefined4 __thiscall eventReward::getSubKeyType(eventReward *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_1,"common");
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    bVar1 = std::operator==(param_1,"level");
    if (bVar1) {
      uVar2 = 1;
    }
    else {
      bVar1 = std::operator==(param_1,"fatigue");
      if (bVar1) {
        uVar2 = 2;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## importRewardTable

```asm
// === 080ef29c eventReward::importRewardTable  [0x080ef29c-0x80ef3a1] ===
 80ef29c:	55                   	push   %ebp
 80ef29d:	89 e5                	mov    %esp,%ebp
 80ef29f:	56                   	push   %esi
 80ef2a0:	53                   	push   %ebx
 80ef2a1:	83 ec 30             	sub    $0x30,%esp
 80ef2a4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ef2a7:	89 04 24             	mov    %eax,(%esp)
 80ef2aa:	e8 49 ba 7c 00       	call   88bacf8 <_ZN16STScriptFileListC1Ev>
 80ef2af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80ef2b6:	00 
 80ef2b7:	8b 45 10             	mov    0x10(%ebp),%eax
 80ef2ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ef2be:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef2c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef2c5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ef2c8:	89 04 24             	mov    %eax,(%esp)
 80ef2cb:	e8 a7 ca 7c 00       	call   88bbd77 <_Z22loadRDARScriptListFileP16STScriptFileListPKcS2_PSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 80ef2d0:	84 c0                	test   %al,%al
 80ef2d2:	0f 84 90 00 00 00    	je     80ef368 <_ZN11eventReward17importRewardTableEPKcS1_+0xcc>
 80ef2d8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ef2db:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80ef2de:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ef2e2:	89 04 24             	mov    %eax,(%esp)
 80ef2e5:	e8 08 6e ff ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 80ef2ea:	83 ec 04             	sub    $0x4,%esp
 80ef2ed:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80ef2f0:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80ef2f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ef2f7:	89 04 24             	mov    %eax,(%esp)
 80ef2fa:	e8 19 6e ff ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 80ef2ff:	83 ec 04             	sub    $0x4,%esp
 80ef302:	eb 47                	jmp    80ef34b <_ZN11eventReward17importRewardTableEPKcS1_+0xaf>
 80ef304:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ef307:	89 04 24             	mov    %eax,(%esp)
 80ef30a:	e8 a9 6e ff ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 80ef30f:	83 c0 04             	add    $0x4,%eax
 80ef312:	89 04 24             	mov    %eax,(%esp)
 80ef315:	e8 d6 71 61 00       	call   87064f0 <_ZNKSs5c_strEv>
 80ef31a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ef31e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ef321:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef325:	8b 45 08             	mov    0x8(%ebp),%eax
 80ef328:	89 04 24             	mov    %eax,(%esp)
 80ef32b:	e8 72 00 00 00       	call   80ef3a2 <_ZN11eventReward18ImportRewardScriptEPKcS1_>
 80ef330:	85 c0                	test   %eax,%eax
 80ef332:	0f 94 c0             	sete   %al
 80ef335:	84 c0                	test   %al,%al
 80ef337:	74 07                	je     80ef340 <_ZN11eventReward17importRewardTableEPKcS1_+0xa4>
 80ef339:	bb 71 00 00 00       	mov    $0x71,%ebx
 80ef33e:	eb 4a                	jmp    80ef38a <_ZN11eventReward17importRewardTableEPKcS1_+0xee>
 80ef340:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ef343:	89 04 24             	mov    %eax,(%esp)
 80ef346:	e8 c5 72 ff ff       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 80ef34b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80ef34e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ef352:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ef355:	89 04 24             	mov    %eax,(%esp)
 80ef358:	e8 e1 6d ff ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 80ef35d:	84 c0                	test   %al,%al
 80ef35f:	75 a3                	jne    80ef304 <_ZN11eventReward17importRewardTableEPKcS1_+0x68>
 80ef361:	bb 00 00 00 00       	mov    $0x0,%ebx
 80ef366:	eb 22                	jmp    80ef38a <_ZN11eventReward17importRewardTableEPKcS1_+0xee>
 80ef368:	bb 77 00 00 00       	mov    $0x77,%ebx
 80ef36d:	eb 1b                	jmp    80ef38a <_ZN11eventReward17importRewardTableEPKcS1_+0xee>
 80ef36f:	89 d3                	mov    %edx,%ebx
 80ef371:	89 c6                	mov    %eax,%esi
 80ef373:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ef376:	89 04 24             	mov    %eax,(%esp)
 80ef379:	e8 d4 1f 00 00       	call   80f1352 <_ZN16STScriptFileListD1Ev>
 80ef37e:	89 f0                	mov    %esi,%eax
 80ef380:	89 da                	mov    %ebx,%edx
 80ef382:	89 04 24             	mov    %eax,(%esp)
 80ef385:	e8 c6 43 9f 00       	call   8ae3750 <_Unwind_Resume>
 80ef38a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ef38d:	89 04 24             	mov    %eax,(%esp)
 80ef390:	e8 bd 1f 00 00       	call   80f1352 <_ZN16STScriptFileListD1Ev>
 80ef395:	89 d8                	mov    %ebx,%eax
 80ef397:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80ef39a:	83 c4 00             	add    $0x0,%esp
 80ef39d:	5b                   	pop    %ebx
 80ef39e:	5e                   	pop    %esi
 80ef39f:	5d                   	pop    %ebp
 80ef3a0:	c3                   	ret
 80ef3a1:	90                   	nop

```

```c
// eventReward::importRewardTable @ 0x80ef29c

/* eventReward::importRewardTable(char const*, char const*) */

undefined4 __thiscall eventReward::importRewardTable(eventReward *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_2c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_28 [4];
  STScriptFileList local_24 [24];
  
  STScriptFileList::STScriptFileList(local_24);
                    /* try { // try from 080ef2cb to 080ef34a has its CatchHandler @ 080ef36f */
  cVar1 = loadRDARScriptListFile(local_24,param_1,param_2,(map *)0x0);
  if (cVar1 == '\0') {
    uVar4 = 0x77;
  }
  else {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_28);
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_2c);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_28,
                         (_Rb_tree_iterator *)local_2c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_28);
      pcVar3 = (char *)std::string::c_str((string *)(iVar2 + 4));
      iVar2 = ImportRewardScript(this,param_1,pcVar3);
      if (iVar2 == 0) {
        uVar4 = 0x71;
        goto LAB_080ef38a;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_28);
    }
    uVar4 = 0;
  }
LAB_080ef38a:
  STScriptFileList::~STScriptFileList(local_24);
  return uVar4;
}

```

---

## rewardWriteUserEquip

```asm
// === 080f06da eventReward::rewardWriteUserEquip  [0x080f06da-0x80f0975] ===
 80f06da:	55                   	push   %ebp
 80f06db:	89 e5                	mov    %esp,%ebp
 80f06dd:	53                   	push   %ebx
 80f06de:	81 ec 84 00 00 00    	sub    $0x84,%esp
 80f06e4:	8b 45 08             	mov    0x8(%ebp),%eax
 80f06e7:	89 04 24             	mov    %eax,(%esp)
 80f06ea:	e8 c3 12 00 00       	call   80f19b2 <_ZNKSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE5emptyEv>
 80f06ef:	84 c0                	test   %al,%al
 80f06f1:	74 0a                	je     80f06fd <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x23>
 80f06f3:	b8 00 00 00 00       	mov    $0x0,%eax
 80f06f8:	e9 73 02 00 00       	jmp    80f0970 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x296>
 80f06fd:	8b 55 08             	mov    0x8(%ebp),%edx
 80f0700:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80f0703:	8d 4d 10             	lea    0x10(%ebp),%ecx
 80f0706:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80f070a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f070e:	89 04 24             	mov    %eax,(%esp)
 80f0711:	e8 b0 12 00 00       	call   80f19c6 <_ZNSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE4findERSD_>
 80f0716:	83 ec 04             	sub    $0x4,%esp
 80f0719:	8b 55 08             	mov    0x8(%ebp),%edx
 80f071c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f071f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0723:	89 04 24             	mov    %eax,(%esp)
 80f0726:	e8 c7 12 00 00       	call   80f19f2 <_ZNSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE3endEv>
 80f072b:	83 ec 04             	sub    $0x4,%esp
 80f072e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f0731:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0735:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80f0738:	89 04 24             	mov    %eax,(%esp)
 80f073b:	e8 d8 12 00 00       	call   80f1a18 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS5_EESt4lessIiESaIS0_IKiS7_EEEEEeqERKSF_>
 80f0740:	84 c0                	test   %al,%al
 80f0742:	74 0a                	je     80f074e <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x74>
 80f0744:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0749:	e9 22 02 00 00       	jmp    80f0970 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x296>
 80f074e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80f0751:	89 04 24             	mov    %eax,(%esp)
 80f0754:	e8 d3 12 00 00       	call   80f1a2c <_ZNKSt17_Rb_tree_iteratorISt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS5_EESt4lessIiESaIS0_IKiS7_EEEEEptEv>
 80f0759:	83 c0 08             	add    $0x8,%eax
 80f075c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80f075f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f0762:	8d 55 18             	lea    0x18(%ebp),%edx
 80f0765:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f0769:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80f076c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0770:	89 04 24             	mov    %eax,(%esp)
 80f0773:	e8 3e 0f 00 00       	call   80f16b6 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 80f0778:	83 ec 04             	sub    $0x4,%esp
 80f077b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f077e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80f0781:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0785:	89 04 24             	mov    %eax,(%esp)
 80f0788:	e8 55 0f 00 00       	call   80f16e2 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 80f078d:	83 ec 04             	sub    $0x4,%esp
 80f0790:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f0793:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0797:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f079a:	89 04 24             	mov    %eax,(%esp)
 80f079d:	e8 98 12 00 00       	call   80f1a3a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEeqERKS7_>
 80f07a2:	84 c0                	test   %al,%al
 80f07a4:	74 0a                	je     80f07b0 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0xd6>
 80f07a6:	b8 00 00 00 00       	mov    $0x0,%eax
 80f07ab:	e9 c0 01 00 00       	jmp    80f0970 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x296>
 80f07b0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f07b3:	89 04 24             	mov    %eax,(%esp)
 80f07b6:	e8 61 0f 00 00       	call   80f171c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEptEv>
 80f07bb:	83 c0 04             	add    $0x4,%eax
 80f07be:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80f07c1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80f07c4:	89 04 24             	mov    %eax,(%esp)
 80f07c7:	e8 82 12 00 00       	call   80f1a4e <_ZNKSt6vectorI8itemDataSaIS0_EE5emptyEv>
 80f07cc:	84 c0                	test   %al,%al
 80f07ce:	74 0a                	je     80f07da <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x100>
 80f07d0:	b8 00 00 00 00       	mov    $0x0,%eax
 80f07d5:	e9 96 01 00 00       	jmp    80f0970 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x296>
 80f07da:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f07dd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80f07e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f07e4:	89 04 24             	mov    %eax,(%esp)
 80f07e7:	e8 a6 12 00 00       	call   80f1a92 <_ZNSt6vectorI8itemDataSaIS0_EE5beginEv>
 80f07ec:	83 ec 04             	sub    $0x4,%esp
 80f07ef:	e9 48 01 00 00       	jmp    80f093c <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x262>
 80f07f4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f07f7:	89 04 24             	mov    %eax,(%esp)
 80f07fa:	e8 3d 13 00 00       	call   80f1b3c <_ZNK9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEptEv>
 80f07ff:	8b 58 04             	mov    0x4(%eax),%ebx
 80f0802:	e8 94 b9 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f0807:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f080b:	89 04 24             	mov    %eax,(%esp)
 80f080e:	e8 1f f2 26 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 80f0813:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80f0816:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80f081a:	75 0a                	jne    80f0826 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x14c>
 80f081c:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0821:	e9 4a 01 00 00       	jmp    80f0970 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x296>
 80f0826:	8d 45 8f             	lea    -0x71(%ebp),%eax
 80f0829:	89 04 24             	mov    %eax,(%esp)
 80f082c:	e8 23 b0 fd ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80f0831:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f0834:	89 04 24             	mov    %eax,(%esp)
 80f0837:	e8 00 13 00 00       	call   80f1b3c <_ZNK9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEptEv>
 80f083c:	8b 40 04             	mov    0x4(%eax),%eax
 80f083f:	89 45 91             	mov    %eax,-0x6f(%ebp)
 80f0842:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f0845:	8b 00                	mov    (%eax),%eax
 80f0847:	83 c0 08             	add    $0x8,%eax
 80f084a:	8b 10                	mov    (%eax),%edx
 80f084c:	8d 45 8f             	lea    -0x71(%ebp),%eax
 80f084f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0853:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f0856:	89 04 24             	mov    %eax,(%esp)
 80f0859:	ff d2                	call   *%edx
 80f085b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f085e:	89 04 24             	mov    %eax,(%esp)
 80f0861:	e8 e0 12 00 00       	call   80f1b46 <_ZNK9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEdeEv>
 80f0866:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f086a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f086d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0871:	8d 45 8f             	lea    -0x71(%ebp),%eax
 80f0874:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0878:	8b 45 08             	mov    0x8(%ebp),%eax
 80f087b:	89 04 24             	mov    %eax,(%esp)
 80f087e:	e8 eb 04 00 00       	call   80f0d6e <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData>
 80f0883:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f0886:	89 04 24             	mov    %eax,(%esp)
 80f0889:	e8 6c 0a 00 00       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 80f088e:	84 c0                	test   %al,%al
 80f0890:	74 0a                	je     80f089c <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x1c2>
 80f0892:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0897:	e9 d4 00 00 00       	jmp    80f0970 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x296>
 80f089c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f089f:	8b 00                	mov    (%eax),%eax
 80f08a1:	83 c0 0c             	add    $0xc,%eax
 80f08a4:	8b 10                	mov    (%eax),%edx
 80f08a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f08a9:	89 04 24             	mov    %eax,(%esp)
 80f08ac:	ff d2                	call   *%edx
 80f08ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f08b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f08b4:	6b c0 3d             	imul   $0x3d,%eax,%eax
 80f08b7:	2d 62 02 00 00       	sub    $0x262,%eax
 80f08bc:	03 45 0c             	add    0xc(%ebp),%eax
 80f08bf:	8b 55 8f             	mov    -0x71(%ebp),%edx
 80f08c2:	89 10                	mov    %edx,(%eax)
 80f08c4:	8b 55 93             	mov    -0x6d(%ebp),%edx
 80f08c7:	89 50 04             	mov    %edx,0x4(%eax)
 80f08ca:	8b 55 97             	mov    -0x69(%ebp),%edx
 80f08cd:	89 50 08             	mov    %edx,0x8(%eax)
 80f08d0:	8b 55 9b             	mov    -0x65(%ebp),%edx
 80f08d3:	89 50 0c             	mov    %edx,0xc(%eax)
 80f08d6:	8b 55 9f             	mov    -0x61(%ebp),%edx
 80f08d9:	89 50 10             	mov    %edx,0x10(%eax)
 80f08dc:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 80f08df:	89 50 14             	mov    %edx,0x14(%eax)
 80f08e2:	8b 55 a7             	mov    -0x59(%ebp),%edx
 80f08e5:	89 50 18             	mov    %edx,0x18(%eax)
 80f08e8:	8b 55 ab             	mov    -0x55(%ebp),%edx
 80f08eb:	89 50 1c             	mov    %edx,0x1c(%eax)
 80f08ee:	8b 55 af             	mov    -0x51(%ebp),%edx
 80f08f1:	89 50 20             	mov    %edx,0x20(%eax)
 80f08f4:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 80f08f7:	89 50 24             	mov    %edx,0x24(%eax)
 80f08fa:	8b 55 b7             	mov    -0x49(%ebp),%edx
 80f08fd:	89 50 28             	mov    %edx,0x28(%eax)
 80f0900:	8b 55 bb             	mov    -0x45(%ebp),%edx
 80f0903:	89 50 2c             	mov    %edx,0x2c(%eax)
 80f0906:	8b 55 bf             	mov    -0x41(%ebp),%edx
 80f0909:	89 50 30             	mov    %edx,0x30(%eax)
 80f090c:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 80f090f:	89 50 34             	mov    %edx,0x34(%eax)
 80f0912:	8b 55 c7             	mov    -0x39(%ebp),%edx
 80f0915:	89 50 38             	mov    %edx,0x38(%eax)
 80f0918:	0f b6 55 cb          	movzbl -0x35(%ebp),%edx
 80f091c:	88 50 3c             	mov    %dl,0x3c(%eax)
 80f091f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f0922:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f0929:	00 
 80f092a:	8d 55 cc             	lea    -0x34(%ebp),%edx
 80f092d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0931:	89 04 24             	mov    %eax,(%esp)
 80f0934:	e8 cf 11 00 00       	call   80f1b08 <_ZN9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEppEi>
 80f0939:	83 ec 04             	sub    $0x4,%esp
 80f093c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f093f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80f0942:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0946:	89 04 24             	mov    %eax,(%esp)
 80f0949:	e8 68 11 00 00       	call   80f1ab6 <_ZNSt6vectorI8itemDataSaIS0_EE3endEv>
 80f094e:	83 ec 04             	sub    $0x4,%esp
 80f0951:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f0954:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0958:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f095b:	89 04 24             	mov    %eax,(%esp)
 80f095e:	e8 79 11 00 00       	call   80f1adc <_ZN9__gnu_cxxneIP8itemDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 80f0963:	84 c0                	test   %al,%al
 80f0965:	0f 85 89 fe ff ff    	jne    80f07f4 <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi+0x11a>
 80f096b:	b8 01 00 00 00       	mov    $0x1,%eax
 80f0970:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80f0973:	c9                   	leave
 80f0974:	c3                   	ret
 80f0975:	90                   	nop

```

```c
// eventReward::rewardWriteUserEquip @ 0x80f06da

/* eventReward::rewardWriteUserEquip(Inven_Item*, rewardKey, int) */

undefined4
eventReward::rewardWriteUserEquip
          (map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
           *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this;
  itemData *piVar5;
  undefined4 *puVar6;
  undefined2 local_75;
  undefined2 uStack_73;
  undefined2 uStack_71;
  undefined2 uStack_6f;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined1 local_39;
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_34 [4];
  rewardKey local_30 [4];
  map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
  local_2c [4];
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_20 [4];
  int local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  cVar1 = std::
          map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
          ::empty(param_1);
  if (cVar1 == '\0') {
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::find(local_30);
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::end(local_2c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
            ::operator==((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                          *)local_30,(_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') {
      local_1c = std::
                 _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                               *)local_30);
      local_1c = local_1c + 8;
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::find((int *)local_34);
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::end(local_28);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
              ::operator==(local_34,(_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') {
        local_18 = std::
                   _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                   ::operator->(local_34);
        local_18 = local_18 + 4;
        cVar1 = std::vector<itemData,std::allocator<itemData>>::empty();
        if (cVar1 == '\0') {
          std::vector<itemData,std::allocator<itemData>>::begin();
          while( true ) {
            std::vector<itemData,std::allocator<itemData>>::end();
            bVar2 = __gnu_cxx::operator!=(local_38,local_24);
            if (!bVar2) break;
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_38);
            iVar4 = *(int *)(iVar4 + 4);
            this = (CDataManager *)G_CDataManager();
            local_14 = (CItem *)CDataManager::find_item(this,iVar4);
            if (local_14 == (CItem *)0x0) {
              return 0;
            }
            Inven_Item::Inven_Item((Inven_Item *)&local_75);
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_38);
            uStack_73 = (undefined2)*(undefined4 *)(iVar4 + 4);
            uStack_71 = (undefined2)((uint)*(undefined4 *)(iVar4 + 4) >> 0x10);
            (**(code **)(*(int *)local_14 + 8))(local_14,&local_75);
            piVar5 = (itemData *)
                     __gnu_cxx::
                     __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                     operator*(local_38);
            applyItemOption((eventReward *)param_1,(Inven_Item *)&local_75,local_14,piVar5);
            cVar1 = CItem::is_stackable(local_14);
            if (cVar1 != '\0') {
              return 0;
            }
            local_10 = (**(code **)(*(int *)local_14 + 0xc))(local_14);
            puVar6 = (undefined4 *)(local_10 * 0x3d + -0x262 + param_2);
            *puVar6 = CONCAT22(uStack_73,local_75);
            puVar6[1] = CONCAT22(uStack_6f,uStack_71);
            puVar6[2] = local_6d;
            puVar6[3] = local_69;
            puVar6[4] = local_65;
            puVar6[5] = local_61;
            puVar6[6] = local_5d;
            puVar6[7] = local_59;
            puVar6[8] = local_55;
            puVar6[9] = local_51;
            puVar6[10] = local_4d;
            puVar6[0xb] = local_49;
            puVar6[0xc] = local_45;
            puVar6[0xd] = local_41;
            puVar6[0xe] = local_3d;
            *(undefined1 *)(puVar6 + 0xf) = local_39;
            __gnu_cxx::__normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
            operator++(local_20,(int)local_38);
          }
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
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## rewardWriteUserInven

```asm
// === 080f0408 eventReward::rewardWriteUserInven  [0x080f0408-0x80f06d9] ===
 80f0408:	55                   	push   %ebp
 80f0409:	89 e5                	mov    %esp,%ebp
 80f040b:	53                   	push   %ebx
 80f040c:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 80f0412:	8b 45 08             	mov    0x8(%ebp),%eax
 80f0415:	89 04 24             	mov    %eax,(%esp)
 80f0418:	e8 95 15 00 00       	call   80f19b2 <_ZNKSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE5emptyEv>
 80f041d:	84 c0                	test   %al,%al
 80f041f:	74 0a                	je     80f042b <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x23>
 80f0421:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0426:	e9 a9 02 00 00       	jmp    80f06d4 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x2cc>
 80f042b:	8b 55 08             	mov    0x8(%ebp),%edx
 80f042e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80f0431:	8d 4d 10             	lea    0x10(%ebp),%ecx
 80f0434:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80f0438:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f043c:	89 04 24             	mov    %eax,(%esp)
 80f043f:	e8 82 15 00 00       	call   80f19c6 <_ZNSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE4findERSD_>
 80f0444:	83 ec 04             	sub    $0x4,%esp
 80f0447:	8b 55 08             	mov    0x8(%ebp),%edx
 80f044a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f044d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0451:	89 04 24             	mov    %eax,(%esp)
 80f0454:	e8 99 15 00 00       	call   80f19f2 <_ZNSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE3endEv>
 80f0459:	83 ec 04             	sub    $0x4,%esp
 80f045c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f045f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0463:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80f0466:	89 04 24             	mov    %eax,(%esp)
 80f0469:	e8 aa 15 00 00       	call   80f1a18 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS5_EESt4lessIiESaIS0_IKiS7_EEEEEeqERKSF_>
 80f046e:	84 c0                	test   %al,%al
 80f0470:	74 0a                	je     80f047c <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x74>
 80f0472:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0477:	e9 58 02 00 00       	jmp    80f06d4 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x2cc>
 80f047c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80f047f:	89 04 24             	mov    %eax,(%esp)
 80f0482:	e8 a5 15 00 00       	call   80f1a2c <_ZNKSt17_Rb_tree_iteratorISt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS5_EESt4lessIiESaIS0_IKiS7_EEEEEptEv>
 80f0487:	83 c0 08             	add    $0x8,%eax
 80f048a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80f048d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f0490:	8d 55 18             	lea    0x18(%ebp),%edx
 80f0493:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f0497:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80f049a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f049e:	89 04 24             	mov    %eax,(%esp)
 80f04a1:	e8 10 12 00 00       	call   80f16b6 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 80f04a6:	83 ec 04             	sub    $0x4,%esp
 80f04a9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f04ac:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80f04af:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f04b3:	89 04 24             	mov    %eax,(%esp)
 80f04b6:	e8 27 12 00 00       	call   80f16e2 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 80f04bb:	83 ec 04             	sub    $0x4,%esp
 80f04be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f04c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f04c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f04c8:	89 04 24             	mov    %eax,(%esp)
 80f04cb:	e8 6a 15 00 00       	call   80f1a3a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEeqERKS7_>
 80f04d0:	84 c0                	test   %al,%al
 80f04d2:	74 0a                	je     80f04de <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0xd6>
 80f04d4:	b8 00 00 00 00       	mov    $0x0,%eax
 80f04d9:	e9 f6 01 00 00       	jmp    80f06d4 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x2cc>
 80f04de:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f04e1:	89 04 24             	mov    %eax,(%esp)
 80f04e4:	e8 33 12 00 00       	call   80f171c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEptEv>
 80f04e9:	83 c0 04             	add    $0x4,%eax
 80f04ec:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80f04ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80f04f2:	89 04 24             	mov    %eax,(%esp)
 80f04f5:	e8 54 15 00 00       	call   80f1a4e <_ZNKSt6vectorI8itemDataSaIS0_EE5emptyEv>
 80f04fa:	84 c0                	test   %al,%al
 80f04fc:	74 0a                	je     80f0508 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x100>
 80f04fe:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0503:	e9 cc 01 00 00       	jmp    80f06d4 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x2cc>
 80f0508:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f050b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80f050e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0512:	89 04 24             	mov    %eax,(%esp)
 80f0515:	e8 78 15 00 00       	call   80f1a92 <_ZNSt6vectorI8itemDataSaIS0_EE5beginEv>
 80f051a:	83 ec 04             	sub    $0x4,%esp
 80f051d:	e9 7e 01 00 00       	jmp    80f06a0 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x298>
 80f0522:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f0525:	89 04 24             	mov    %eax,(%esp)
 80f0528:	e8 0f 16 00 00       	call   80f1b3c <_ZNK9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEptEv>
 80f052d:	8b 58 04             	mov    0x4(%eax),%ebx
 80f0530:	e8 66 bc fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f0535:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f0539:	89 04 24             	mov    %eax,(%esp)
 80f053c:	e8 f1 f4 26 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 80f0541:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80f0544:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80f0548:	75 0a                	jne    80f0554 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x14c>
 80f054a:	b8 00 00 00 00       	mov    $0x0,%eax
 80f054f:	e9 80 01 00 00       	jmp    80f06d4 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x2cc>
 80f0554:	8d 45 87             	lea    -0x79(%ebp),%eax
 80f0557:	89 04 24             	mov    %eax,(%esp)
 80f055a:	e8 f5 b2 fd ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80f055f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f0562:	89 04 24             	mov    %eax,(%esp)
 80f0565:	e8 d2 15 00 00       	call   80f1b3c <_ZNK9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEptEv>
 80f056a:	8b 40 04             	mov    0x4(%eax),%eax
 80f056d:	89 45 89             	mov    %eax,-0x77(%ebp)
 80f0570:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f0573:	8b 00                	mov    (%eax),%eax
 80f0575:	83 c0 08             	add    $0x8,%eax
 80f0578:	8b 10                	mov    (%eax),%edx
 80f057a:	8d 45 87             	lea    -0x79(%ebp),%eax
 80f057d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0581:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f0584:	89 04 24             	mov    %eax,(%esp)
 80f0587:	ff d2                	call   *%edx
 80f0589:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f058c:	89 04 24             	mov    %eax,(%esp)
 80f058f:	e8 b2 15 00 00       	call   80f1b46 <_ZNK9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEdeEv>
 80f0594:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f0598:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f059b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f059f:	8d 45 87             	lea    -0x79(%ebp),%eax
 80f05a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f05a6:	8b 45 08             	mov    0x8(%ebp),%eax
 80f05a9:	89 04 24             	mov    %eax,(%esp)
 80f05ac:	e8 bd 07 00 00       	call   80f0d6e <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData>
 80f05b1:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 80f05b8:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 80f05bf:	0f b6 45 88          	movzbl -0x78(%ebp),%eax
 80f05c3:	0f b6 c0             	movzbl %al,%eax
 80f05c6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 80f05cd:	00 
 80f05ce:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 80f05d1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80f05d5:	8d 55 c8             	lea    -0x38(%ebp),%edx
 80f05d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f05dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f05e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80f05e3:	89 04 24             	mov    %eax,(%esp)
 80f05e6:	e8 37 07 00 00       	call   80f0d22 <_ZNK11eventReward11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_i>
 80f05eb:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80f05ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f05f1:	eb 7f                	jmp    80f0672 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x26a>
 80f05f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f05f6:	6b c0 3d             	imul   $0x3d,%eax,%eax
 80f05f9:	03 45 0c             	add    0xc(%ebp),%eax
 80f05fc:	8b 40 02             	mov    0x2(%eax),%eax
 80f05ff:	85 c0                	test   %eax,%eax
 80f0601:	75 6b                	jne    80f066e <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x266>
 80f0603:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f0606:	6b c0 3d             	imul   $0x3d,%eax,%eax
 80f0609:	03 45 0c             	add    0xc(%ebp),%eax
 80f060c:	8b 55 87             	mov    -0x79(%ebp),%edx
 80f060f:	89 10                	mov    %edx,(%eax)
 80f0611:	8b 55 8b             	mov    -0x75(%ebp),%edx
 80f0614:	89 50 04             	mov    %edx,0x4(%eax)
 80f0617:	8b 55 8f             	mov    -0x71(%ebp),%edx
 80f061a:	89 50 08             	mov    %edx,0x8(%eax)
 80f061d:	8b 55 93             	mov    -0x6d(%ebp),%edx
 80f0620:	89 50 0c             	mov    %edx,0xc(%eax)
 80f0623:	8b 55 97             	mov    -0x69(%ebp),%edx
 80f0626:	89 50 10             	mov    %edx,0x10(%eax)
 80f0629:	8b 55 9b             	mov    -0x65(%ebp),%edx
 80f062c:	89 50 14             	mov    %edx,0x14(%eax)
 80f062f:	8b 55 9f             	mov    -0x61(%ebp),%edx
 80f0632:	89 50 18             	mov    %edx,0x18(%eax)
 80f0635:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 80f0638:	89 50 1c             	mov    %edx,0x1c(%eax)
 80f063b:	8b 55 a7             	mov    -0x59(%ebp),%edx
 80f063e:	89 50 20             	mov    %edx,0x20(%eax)
 80f0641:	8b 55 ab             	mov    -0x55(%ebp),%edx
 80f0644:	89 50 24             	mov    %edx,0x24(%eax)
 80f0647:	8b 55 af             	mov    -0x51(%ebp),%edx
 80f064a:	89 50 28             	mov    %edx,0x28(%eax)
 80f064d:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 80f0650:	89 50 2c             	mov    %edx,0x2c(%eax)
 80f0653:	8b 55 b7             	mov    -0x49(%ebp),%edx
 80f0656:	89 50 30             	mov    %edx,0x30(%eax)
 80f0659:	8b 55 bb             	mov    -0x45(%ebp),%edx
 80f065c:	89 50 34             	mov    %edx,0x34(%eax)
 80f065f:	8b 55 bf             	mov    -0x41(%ebp),%edx
 80f0662:	89 50 38             	mov    %edx,0x38(%eax)
 80f0665:	0f b6 55 c3          	movzbl -0x3d(%ebp),%edx
 80f0669:	88 50 3c             	mov    %dl,0x3c(%eax)
 80f066c:	eb 15                	jmp    80f0683 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x27b>
 80f066e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80f0672:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 80f0675:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 80f0678:	0f 9e c0             	setle  %al
 80f067b:	84 c0                	test   %al,%al
 80f067d:	0f 85 70 ff ff ff    	jne    80f05f3 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x1eb>
 80f0683:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f0686:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f068d:	00 
 80f068e:	8d 55 cc             	lea    -0x34(%ebp),%edx
 80f0691:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0695:	89 04 24             	mov    %eax,(%esp)
 80f0698:	e8 6b 14 00 00       	call   80f1b08 <_ZN9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEppEi>
 80f069d:	83 ec 04             	sub    $0x4,%esp
 80f06a0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f06a3:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80f06a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f06aa:	89 04 24             	mov    %eax,(%esp)
 80f06ad:	e8 04 14 00 00       	call   80f1ab6 <_ZNSt6vectorI8itemDataSaIS0_EE3endEv>
 80f06b2:	83 ec 04             	sub    $0x4,%esp
 80f06b5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f06b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f06bc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f06bf:	89 04 24             	mov    %eax,(%esp)
 80f06c2:	e8 15 14 00 00       	call   80f1adc <_ZN9__gnu_cxxneIP8itemDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 80f06c7:	84 c0                	test   %al,%al
 80f06c9:	0f 85 53 fe ff ff    	jne    80f0522 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi+0x11a>
 80f06cf:	b8 01 00 00 00       	mov    $0x1,%eax
 80f06d4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80f06d7:	c9                   	leave
 80f06d8:	c3                   	ret
 80f06d9:	90                   	nop

```

```c
// eventReward::rewardWriteUserInven @ 0x80f0408

/* eventReward::rewardWriteUserInven(Inven_Item*, rewardKey, int) */

undefined4
eventReward::rewardWriteUserInven
          (map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
           *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this;
  itemData *piVar5;
  undefined4 *puVar6;
  Inven_Item local_7d;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined2 uStack_79;
  undefined2 uStack_77;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined1 local_41;
  int local_40;
  int local_3c;
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_34 [4];
  rewardKey local_30 [4];
  map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
  local_2c [4];
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_20 [4];
  int local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  cVar1 = std::
          map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
          ::empty(param_1);
  if (cVar1 == '\0') {
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::find(local_30);
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::end(local_2c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
            ::operator==((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                          *)local_30,(_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') {
      local_1c = std::
                 _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                               *)local_30);
      local_1c = local_1c + 8;
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::find((int *)local_34);
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::end(local_28);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
              ::operator==(local_34,(_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') {
        local_18 = std::
                   _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                   ::operator->(local_34);
        local_18 = local_18 + 4;
        cVar1 = std::vector<itemData,std::allocator<itemData>>::empty();
        if (cVar1 == '\0') {
          std::vector<itemData,std::allocator<itemData>>::begin();
          while( true ) {
            std::vector<itemData,std::allocator<itemData>>::end();
            bVar2 = __gnu_cxx::operator!=(local_38,local_24);
            if (!bVar2) break;
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_38);
            iVar4 = *(int *)(iVar4 + 4);
            this = (CDataManager *)G_CDataManager();
            local_14 = (CItem *)CDataManager::find_item(this,iVar4);
            if (local_14 == (CItem *)0x0) {
              return 0;
            }
            Inven_Item::Inven_Item(&local_7d);
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_38);
            uStack_7b = (undefined2)*(undefined4 *)(iVar4 + 4);
            uStack_79 = (undefined2)((uint)*(undefined4 *)(iVar4 + 4) >> 0x10);
            (**(code **)(*(int *)local_14 + 8))(local_14,&local_7d);
            piVar5 = (itemData *)
                     __gnu_cxx::
                     __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                     operator*(local_38);
            applyItemOption((eventReward *)param_1,&local_7d,local_14,piVar5);
            local_3c = 0;
            local_40 = 0;
            StartEndPos((eventReward *)param_1,uStack_7c,&local_3c,&local_40,0);
            for (local_10 = local_3c; local_10 <= local_40; local_10 = local_10 + 1) {
              if (*(int *)(local_10 * 0x3d + param_2 + 2) == 0) {
                puVar6 = (undefined4 *)(local_10 * 0x3d + param_2);
                *puVar6 = CONCAT22(uStack_7b,CONCAT11(uStack_7c,local_7d));
                puVar6[1] = CONCAT22(uStack_77,uStack_79);
                puVar6[2] = local_75;
                puVar6[3] = local_71;
                puVar6[4] = local_6d;
                puVar6[5] = local_69;
                puVar6[6] = local_65;
                puVar6[7] = local_61;
                puVar6[8] = local_5d;
                puVar6[9] = local_59;
                puVar6[10] = local_55;
                puVar6[0xb] = local_51;
                puVar6[0xc] = local_4d;
                puVar6[0xd] = local_49;
                puVar6[0xe] = local_45;
                *(undefined1 *)(puVar6 + 0xf) = local_41;
                break;
              }
            }
            __gnu_cxx::__normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
            operator++(local_20,(int)local_38);
          }
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
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## sendPostalReward

```asm
// === 080f0976 eventReward::sendPostalReward  [0x080f0976-0x80f0d21] ===
 80f0976:	55                   	push   %ebp
 80f0977:	89 e5                	mov    %esp,%ebp
 80f0979:	57                   	push   %edi
 80f097a:	56                   	push   %esi
 80f097b:	53                   	push   %ebx
 80f097c:	81 ec bc 01 00 00    	sub    $0x1bc,%esp
 80f0982:	8b 45 08             	mov    0x8(%ebp),%eax
 80f0985:	89 04 24             	mov    %eax,(%esp)
 80f0988:	e8 25 10 00 00       	call   80f19b2 <_ZNKSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE5emptyEv>
 80f098d:	84 c0                	test   %al,%al
 80f098f:	74 0a                	je     80f099b <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x25>
 80f0991:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0996:	e9 7c 03 00 00       	jmp    80f0d17 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x3a1>
 80f099b:	8b 55 08             	mov    0x8(%ebp),%edx
 80f099e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80f09a1:	8d 4d 10             	lea    0x10(%ebp),%ecx
 80f09a4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80f09a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f09ac:	89 04 24             	mov    %eax,(%esp)
 80f09af:	e8 12 10 00 00       	call   80f19c6 <_ZNSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE4findERSD_>
 80f09b4:	83 ec 04             	sub    $0x4,%esp
 80f09b7:	8b 55 08             	mov    0x8(%ebp),%edx
 80f09ba:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80f09bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f09c1:	89 04 24             	mov    %eax,(%esp)
 80f09c4:	e8 29 10 00 00       	call   80f19f2 <_ZNSt3mapI9rewardKeyS_IiSt6vectorI8itemDataSaIS2_EESt4lessIiESaISt4pairIKiS4_EEES5_IS0_ESaIS7_IKS0_SB_EEE3endEv>
 80f09c9:	83 ec 04             	sub    $0x4,%esp
 80f09cc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80f09cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f09d3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80f09d6:	89 04 24             	mov    %eax,(%esp)
 80f09d9:	e8 3a 10 00 00       	call   80f1a18 <_ZNKSt17_Rb_tree_iteratorISt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS5_EESt4lessIiESaIS0_IKiS7_EEEEEeqERKSF_>
 80f09de:	84 c0                	test   %al,%al
 80f09e0:	74 0a                	je     80f09ec <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x76>
 80f09e2:	b8 00 00 00 00       	mov    $0x0,%eax
 80f09e7:	e9 2b 03 00 00       	jmp    80f0d17 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x3a1>
 80f09ec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80f09ef:	89 04 24             	mov    %eax,(%esp)
 80f09f2:	e8 35 10 00 00       	call   80f1a2c <_ZNKSt17_Rb_tree_iteratorISt4pairIK9rewardKeySt3mapIiSt6vectorI8itemDataSaIS5_EESt4lessIiESaIS0_IKiS7_EEEEEptEv>
 80f09f7:	83 c0 08             	add    $0x8,%eax
 80f09fa:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80f09fd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80f0a00:	8d 55 18             	lea    0x18(%ebp),%edx
 80f0a03:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f0a07:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80f0a0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0a0e:	89 04 24             	mov    %eax,(%esp)
 80f0a11:	e8 a0 0c 00 00       	call   80f16b6 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 80f0a16:	83 ec 04             	sub    $0x4,%esp
 80f0a19:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80f0a1c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 80f0a1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0a23:	89 04 24             	mov    %eax,(%esp)
 80f0a26:	e8 b7 0c 00 00       	call   80f16e2 <_ZNSt3mapIiSt6vectorI8itemDataSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 80f0a2b:	83 ec 04             	sub    $0x4,%esp
 80f0a2e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80f0a31:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0a35:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80f0a38:	89 04 24             	mov    %eax,(%esp)
 80f0a3b:	e8 fa 0f 00 00       	call   80f1a3a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEeqERKS7_>
 80f0a40:	84 c0                	test   %al,%al
 80f0a42:	74 0a                	je     80f0a4e <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0xd8>
 80f0a44:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0a49:	e9 c9 02 00 00       	jmp    80f0d17 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x3a1>
 80f0a4e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80f0a51:	89 04 24             	mov    %eax,(%esp)
 80f0a54:	e8 c3 0c 00 00       	call   80f171c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI8itemDataSaIS3_EEEEptEv>
 80f0a59:	83 c0 04             	add    $0x4,%eax
 80f0a5c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80f0a5f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80f0a62:	89 04 24             	mov    %eax,(%esp)
 80f0a65:	e8 e4 0f 00 00       	call   80f1a4e <_ZNKSt6vectorI8itemDataSaIS0_EE5emptyEv>
 80f0a6a:	84 c0                	test   %al,%al
 80f0a6c:	74 0a                	je     80f0a78 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x102>
 80f0a6e:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0a73:	e9 9f 02 00 00       	jmp    80f0d17 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x3a1>
 80f0a78:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f0a7b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80f0a7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0a82:	89 04 24             	mov    %eax,(%esp)
 80f0a85:	e8 08 10 00 00       	call   80f1a92 <_ZNSt6vectorI8itemDataSaIS0_EE5beginEv>
 80f0a8a:	83 ec 04             	sub    $0x4,%esp
 80f0a8d:	e9 51 02 00 00       	jmp    80f0ce3 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x36d>
 80f0a92:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f0a95:	89 04 24             	mov    %eax,(%esp)
 80f0a98:	e8 9f 10 00 00       	call   80f1b3c <_ZNK9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEptEv>
 80f0a9d:	8b 40 04             	mov    0x4(%eax),%eax
 80f0aa0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80f0aa3:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 80f0aa9:	89 04 24             	mov    %eax,(%esp)
 80f0aac:	e8 a3 ad fd ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80f0ab1:	e8 e5 b6 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f0ab6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 80f0ab9:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0abd:	89 04 24             	mov    %eax,(%esp)
 80f0ac0:	e8 6d ef 26 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 80f0ac5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80f0ac8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80f0acf:	e8 d3 98 fe ff       	call   80da3a7 <_Z11G_GameWorldv>
 80f0ad4:	89 04 24             	mov    %eax,(%esp)
 80f0ad7:	e8 42 08 00 00       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 80f0adc:	84 c0                	test   %al,%al
 80f0ade:	74 10                	je     80f0af0 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x17a>
 80f0ae0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0ae3:	89 04 24             	mov    %eax,(%esp)
 80f0ae6:	e8 a5 b1 fd ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 80f0aeb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80f0aee:	eb 0e                	jmp    80f0afe <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x188>
 80f0af0:	e8 8c b6 fd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 80f0af5:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 80f0afb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80f0afe:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 80f0b02:	0f 84 be 01 00 00    	je     80f0cc6 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x350>
 80f0b08:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80f0b0b:	89 85 79 ff ff ff    	mov    %eax,-0x87(%ebp)
 80f0b11:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80f0b14:	8b 00                	mov    (%eax),%eax
 80f0b16:	83 c0 08             	add    $0x8,%eax
 80f0b19:	8b 10                	mov    (%eax),%edx
 80f0b1b:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 80f0b21:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0b25:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80f0b28:	89 04 24             	mov    %eax,(%esp)
 80f0b2b:	ff d2                	call   *%edx
 80f0b2d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f0b30:	89 04 24             	mov    %eax,(%esp)
 80f0b33:	e8 0e 10 00 00       	call   80f1b46 <_ZNK9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEdeEv>
 80f0b38:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80f0b3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80f0b3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0b43:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 80f0b49:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0b4d:	8b 45 08             	mov    0x8(%ebp),%eax
 80f0b50:	89 04 24             	mov    %eax,(%esp)
 80f0b53:	e8 16 02 00 00       	call   80f0d6e <_ZN11eventReward15applyItemOptionER10Inven_ItemPK5CItemRK8itemData>
 80f0b58:	8d 95 77 fe ff ff    	lea    -0x189(%ebp),%edx
 80f0b5e:	bb 00 01 00 00       	mov    $0x100,%ebx
 80f0b63:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0b68:	89 d1                	mov    %edx,%ecx
 80f0b6a:	83 e1 01             	and    $0x1,%ecx
 80f0b6d:	85 c9                	test   %ecx,%ecx
 80f0b6f:	74 08                	je     80f0b79 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x203>
 80f0b71:	88 02                	mov    %al,(%edx)
 80f0b73:	83 c2 01             	add    $0x1,%edx
 80f0b76:	83 eb 01             	sub    $0x1,%ebx
 80f0b79:	89 d1                	mov    %edx,%ecx
 80f0b7b:	83 e1 02             	and    $0x2,%ecx
 80f0b7e:	85 c9                	test   %ecx,%ecx
 80f0b80:	74 09                	je     80f0b8b <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x215>
 80f0b82:	66 89 02             	mov    %ax,(%edx)
 80f0b85:	83 c2 02             	add    $0x2,%edx
 80f0b88:	83 eb 02             	sub    $0x2,%ebx
 80f0b8b:	89 d9                	mov    %ebx,%ecx
 80f0b8d:	c1 e9 02             	shr    $0x2,%ecx
 80f0b90:	89 d7                	mov    %edx,%edi
 80f0b92:	f3 ab                	rep stos %eax,%es:(%edi)
 80f0b94:	89 fa                	mov    %edi,%edx
 80f0b96:	89 d9                	mov    %ebx,%ecx
 80f0b98:	83 e1 02             	and    $0x2,%ecx
 80f0b9b:	85 c9                	test   %ecx,%ecx
 80f0b9d:	74 06                	je     80f0ba5 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x22f>
 80f0b9f:	66 89 02             	mov    %ax,(%edx)
 80f0ba2:	83 c2 02             	add    $0x2,%edx
 80f0ba5:	89 d9                	mov    %ebx,%ecx
 80f0ba7:	83 e1 01             	and    $0x1,%ecx
 80f0baa:	85 c9                	test   %ecx,%ecx
 80f0bac:	74 05                	je     80f0bb3 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x23d>
 80f0bae:	88 02                	mov    %al,(%edx)
 80f0bb0:	83 c2 01             	add    $0x1,%edx
 80f0bb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0bb6:	89 04 24             	mov    %eax,(%esp)
 80f0bb9:	e8 fa 96 fe ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 80f0bbe:	89 c3                	mov    %eax,%ebx
 80f0bc0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f0bc7:	00 
 80f0bc8:	8b 45 20             	mov    0x20(%ebp),%eax
 80f0bcb:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0bcf:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80f0bd6:	00 
 80f0bd7:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80f0bde:	e8 1b 4c 9b 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80f0be3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80f0be7:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0beb:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 80f0bf2:	00 
 80f0bf3:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80f0bf9:	89 04 24             	mov    %eax,(%esp)
 80f0bfc:	e8 1b bc 49 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 80f0c01:	8b 85 79 ff ff ff    	mov    -0x87(%ebp),%eax
 80f0c07:	85 c0                	test   %eax,%eax
 80f0c09:	74 16                	je     80f0c21 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x2ab>
 80f0c0b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80f0c0e:	89 04 24             	mov    %eax,(%esp)
 80f0c11:	e8 e4 06 00 00       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 80f0c16:	84 c0                	test   %al,%al
 80f0c18:	74 07                	je     80f0c21 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x2ab>
 80f0c1a:	b8 01 00 00 00       	mov    $0x1,%eax
 80f0c1f:	eb 05                	jmp    80f0c26 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x2b0>
 80f0c21:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0c26:	84 c0                	test   %al,%al
 80f0c28:	0f 84 98 00 00 00    	je     80f0cc6 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x350>
 80f0c2e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80f0c31:	89 04 24             	mov    %eax,(%esp)
 80f0c34:	e8 cd 06 00 00       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 80f0c39:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80f0c3c:	8d 85 77 fe ff ff    	lea    -0x189(%ebp),%eax
 80f0c42:	89 04 24             	mov    %eax,(%esp)
 80f0c45:	e8 66 d7 f8 ff       	call   807e3b0 <strlen@plt>
 80f0c4a:	89 c6                	mov    %eax,%esi
 80f0c4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0c4f:	89 04 24             	mov    %eax,(%esp)
 80f0c52:	e8 f7 af fd ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80f0c57:	89 c3                	mov    %eax,%ebx
 80f0c59:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f0c60:	00 
 80f0c61:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80f0c64:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f0c68:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80f0c6f:	00 
 80f0c70:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80f0c77:	e8 82 4b 9b 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80f0c7c:	c7 44 24 24 01 00 00 	movl   $0x1,0x24(%esp)
 80f0c83:	00 
 80f0c84:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 80f0c8b:	00 
 80f0c8c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80f0c8f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 80f0c93:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80f0c96:	89 54 24 18          	mov    %edx,0x18(%esp)
 80f0c9a:	89 74 24 14          	mov    %esi,0x14(%esp)
 80f0c9e:	8d 95 77 fe ff ff    	lea    -0x189(%ebp),%edx
 80f0ca4:	89 54 24 10          	mov    %edx,0x10(%esp)
 80f0ca8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80f0cac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f0cb3:	00 
 80f0cb4:	8d 95 77 ff ff ff    	lea    -0x89(%ebp),%edx
 80f0cba:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0cbe:	89 04 24             	mov    %eax,(%esp)
 80f0cc1:	e8 22 49 46 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 80f0cc6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80f0cc9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f0cd0:	00 
 80f0cd1:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 80f0cd4:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0cd8:	89 04 24             	mov    %eax,(%esp)
 80f0cdb:	e8 28 0e 00 00       	call   80f1b08 <_ZN9__gnu_cxx17__normal_iteratorIP8itemDataSt6vectorIS1_SaIS1_EEEppEi>
 80f0ce0:	83 ec 04             	sub    $0x4,%esp
 80f0ce3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80f0ce6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 80f0ce9:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f0ced:	89 04 24             	mov    %eax,(%esp)
 80f0cf0:	e8 c1 0d 00 00       	call   80f1ab6 <_ZNSt6vectorI8itemDataSaIS0_EE3endEv>
 80f0cf5:	83 ec 04             	sub    $0x4,%esp
 80f0cf8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80f0cfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f0cff:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80f0d02:	89 04 24             	mov    %eax,(%esp)
 80f0d05:	e8 d2 0d 00 00       	call   80f1adc <_ZN9__gnu_cxxneIP8itemDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 80f0d0a:	84 c0                	test   %al,%al
 80f0d0c:	0f 85 80 fd ff ff    	jne    80f0a92 <_ZN11eventReward16sendPostalRewardER5CUser9rewardKeyiPKcS4_+0x11c>
 80f0d12:	b8 01 00 00 00       	mov    $0x1,%eax
 80f0d17:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80f0d1a:	83 c4 00             	add    $0x0,%esp
 80f0d1d:	5b                   	pop    %ebx
 80f0d1e:	5e                   	pop    %esi
 80f0d1f:	5f                   	pop    %edi
 80f0d20:	5d                   	pop    %ebp
 80f0d21:	c3                   	ret

```

```c
// eventReward::sendPostalReward @ 0x80f0976

/* eventReward::sendPostalReward(CUser&, rewardKey, int, char const*, char const*) */

undefined4
eventReward::sendPostalReward
          (map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
           *param_1,CUser *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this;
  GameWorld *this_00;
  itemData *piVar5;
  size_t sVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  char *in_stack_00000018;
  char *in_stack_0000001c;
  char local_18d;
  char local_18c [255];
  Inven_Item local_8d [2];
  int local_8b;
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_50 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
  local_4c [4];
  rewardKey local_48 [4];
  map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
  local_44 [4];
  map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
  local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>> local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  CItem *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar11 = 0;
  cVar1 = std::
          map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
          ::empty(param_1);
  if (cVar1 == '\0') {
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::find(local_48);
    std::
    map<rewardKey,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>,std::less<rewardKey>,std::allocator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>>
    ::end(local_44);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
            ::operator==((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                          *)local_48,(_Rb_tree_iterator *)local_44);
    if (cVar1 == '\0') {
      local_34 = std::
                 _Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<rewardKey_const,std::map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>>>
                               *)local_48);
      local_34 = local_34 + 8;
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::find((int *)local_4c);
      std::
      map<int,std::vector<itemData,std::allocator<itemData>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>>
      ::end(local_40);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
              ::operator==(local_4c,(_Rb_tree_iterator *)local_40);
      if (cVar1 == '\0') {
        local_30 = std::
                   _Rb_tree_iterator<std::pair<int_const,std::vector<itemData,std::allocator<itemData>>>>
                   ::operator->(local_4c);
        local_30 = local_30 + 4;
        cVar1 = std::vector<itemData,std::allocator<itemData>>::empty();
        if (cVar1 == '\0') {
          std::vector<itemData,std::allocator<itemData>>::begin();
          while( true ) {
            std::vector<itemData,std::allocator<itemData>>::end();
            bVar2 = __gnu_cxx::operator!=(local_50,local_3c);
            if (!bVar2) break;
            iVar4 = __gnu_cxx::
                    __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                    operator->(local_50);
            local_2c = *(int *)(iVar4 + 4);
            Inven_Item::Inven_Item(local_8d);
            this = (CDataManager *)G_CDataManager();
            local_28 = (CItem *)CDataManager::find_item(this,local_2c);
            local_24 = 0;
            this_00 = (GameWorld *)G_GameWorld();
            cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
            if (cVar1 == '\0') {
              iVar4 = G_CEnvironment();
              local_24 = *(undefined4 *)(iVar4 + 0x378);
            }
            else {
              local_24 = CUser::GetServerGroup(param_2);
            }
            if (local_28 != (CItem *)0x0) {
              local_8b = local_2c;
              (**(code **)(*(int *)local_28 + 8))(local_28,local_8d);
              piVar5 = (itemData *)
                       __gnu_cxx::
                       __normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
                       operator*(local_50);
              applyItemOption((eventReward *)param_1,local_8d,local_28,piVar5);
              pcVar9 = &local_18d;
              uVar10 = 0x100;
              bVar2 = ((uint)pcVar9 & 1) != 0;
              if (bVar2) {
                local_18d = '\0';
                pcVar9 = local_18c;
                uVar10 = 0xff;
              }
              if (((uint)pcVar9 & 2) != 0) {
                pcVar9[0] = '\0';
                pcVar9[1] = '\0';
                pcVar9 = pcVar9 + 2;
                uVar10 = uVar10 - 2;
              }
              for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                pcVar9[0] = '\0';
                pcVar9[1] = '\0';
                pcVar9[2] = '\0';
                pcVar9[3] = '\0';
                pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
              }
              if ((uVar10 & 2) != 0) {
                pcVar9[0] = '\0';
                pcVar9[1] = '\0';
                pcVar9 = pcVar9 + 2;
              }
              if (bVar2) {
                *pcVar9 = '\0';
              }
              uVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
              pcVar9 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          in_stack_0000001c,(bool *)0x0);
              OS_API::snprintf(&local_18d,0xff,pcVar9,uVar3);
              if (local_8b == 0) {
LAB_080f0c21:
                bVar2 = false;
              }
              else {
                cVar1 = CItem::is_stackable(local_28);
                if (cVar1 == '\0') goto LAB_080f0c21;
                bVar2 = true;
              }
              if (bVar2) {
                local_20 = CItem::getExpirationDate(local_28);
                sVar6 = strlen(&local_18d);
                uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
                uVar7 = RDARScriptStringManager::findString
                                  ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                   in_stack_00000018,(bool *)0x0);
                WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                          (uVar7,local_8d,0,uVar3,&local_18d,sVar6,local_20,local_24,0,1);
              }
            }
            __gnu_cxx::__normal_iterator<itemData*,std::vector<itemData,std::allocator<itemData>>>::
            operator++(local_38,(int)local_50);
          }
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
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## unsealRandomOption

```asm
// === 080f0e40 eventReward::unsealRandomOption  [0x080f0e40-0x80f0f3d] ===
 80f0e40:	55                   	push   %ebp
 80f0e41:	89 e5                	mov    %esp,%ebp
 80f0e43:	57                   	push   %edi
 80f0e44:	56                   	push   %esi
 80f0e45:	53                   	push   %ebx
 80f0e46:	83 ec 4c             	sub    $0x4c,%esp
 80f0e49:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80f0e4d:	75 0a                	jne    80f0e59 <_ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item+0x19>
 80f0e4f:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0e54:	e9 dd 00 00 00       	jmp    80f0f36 <_ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item+0xf6>
 80f0e59:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0e5c:	8b 00                	mov    (%eax),%eax
 80f0e5e:	83 c0 4c             	add    $0x4c,%eax
 80f0e61:	8b 10                	mov    (%eax),%edx
 80f0e63:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0e66:	89 04 24             	mov    %eax,(%esp)
 80f0e69:	ff d2                	call   *%edx
 80f0e6b:	83 f0 01             	xor    $0x1,%eax
 80f0e6e:	84 c0                	test   %al,%al
 80f0e70:	74 0a                	je     80f0e7c <_ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item+0x3c>
 80f0e72:	b8 00 00 00 00       	mov    $0x0,%eax
 80f0e77:	e9 ba 00 00 00       	jmp    80f0f36 <_ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item+0xf6>
 80f0e7c:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0e7f:	83 c0 25             	add    $0x25,%eax
 80f0e82:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80f0e85:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0e88:	8b 00                	mov    (%eax),%eax
 80f0e8a:	83 c0 50             	add    $0x50,%eax
 80f0e8d:	8b 10                	mov    (%eax),%edx
 80f0e8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0e92:	89 04 24             	mov    %eax,(%esp)
 80f0e95:	ff d2                	call   *%edx
 80f0e97:	89 c7                	mov    %eax,%edi
 80f0e99:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0e9c:	89 04 24             	mov    %eax,(%esp)
 80f0e9f:	e8 6e 04 00 00       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 80f0ea4:	89 c6                	mov    %eax,%esi
 80f0ea6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0ea9:	89 04 24             	mov    %eax,(%esp)
 80f0eac:	e8 3d 04 00 00       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 80f0eb1:	89 c3                	mov    %eax,%ebx
 80f0eb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f0eb6:	89 04 24             	mov    %eax,(%esp)
 80f0eb9:	e8 18 04 00 00       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 80f0ebe:	89 c2                	mov    %eax,%edx
 80f0ec0:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0ec3:	8b 48 02             	mov    0x2(%eax),%ecx
 80f0ec6:	a1 20 f8 41 09       	mov    0x941f820,%eax
 80f0ecb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80f0ece:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80f0ed1:	89 44 24 18          	mov    %eax,0x18(%esp)
 80f0ed5:	89 7c 24 14          	mov    %edi,0x14(%esp)
 80f0ed9:	89 74 24 10          	mov    %esi,0x10(%esp)
 80f0edd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80f0ee1:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f0ee5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f0ee9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80f0eec:	89 04 24             	mov    %eax,(%esp)
 80f0eef:	e8 d2 1d 50 00       	call   85f2cc6 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption>
 80f0ef4:	83 f0 01             	xor    $0x1,%eax
 80f0ef7:	84 c0                	test   %al,%al
 80f0ef9:	74 36                	je     80f0f31 <_ZN11eventReward18unsealRandomOptionEPK5CItemR10Inven_Item+0xf1>
 80f0efb:	8b 45 10             	mov    0x10(%ebp),%eax
 80f0efe:	8b 40 02             	mov    0x2(%eax),%eax
 80f0f01:	89 44 24 14          	mov    %eax,0x14(%esp)
 80f0f05:	c7 44 24 10 9e a2 b3 	movl   $0x8b3a29e,0x10(%esp)
 80f0f0c:	08 
 80f0f0d:	c7 44 24 0c 40 02 00 	movl   $0x240,0xc(%esp)
 80f0f14:	00 
 80f0f15:	c7 44 24 08 e0 ae b3 	movl   $0x8b3aee0,0x8(%esp)
 80f0f1c:	08 
 80f0f1d:	c7 44 24 04 b2 a2 b3 	movl   $0x8b3a2b2,0x4(%esp)
 80f0f24:	08 
 80f0f25:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80f0f2c:	e8 d9 2c 9e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80f0f31:	b8 01 00 00 00       	mov    $0x1,%eax
 80f0f36:	83 c4 4c             	add    $0x4c,%esp
 80f0f39:	5b                   	pop    %ebx
 80f0f3a:	5e                   	pop    %esi
 80f0f3b:	5f                   	pop    %edi
 80f0f3c:	5d                   	pop    %ebp
 80f0f3d:	c3                   	ret

```

```c
// eventReward::unsealRandomOption @ 0x80f0e40

/* eventReward::unsealRandomOption(CItem const*, Inven_Item&) */

undefined4 __thiscall
eventReward::unsealRandomOption(eventReward *this,CItem *param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 == (CItem *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(int *)param_1 + 0x4c))(param_1);
    if (cVar1 == '\x01') {
      uVar2 = (**(code **)(*(int *)param_1 + 0x50))(param_1);
      uVar3 = CItem::getItemGroupName(param_1);
      uVar4 = CItem::getUsableLevel(param_1);
      uVar5 = CItem::get_rarity(param_1);
      cVar1 = random_option::CRandomOptionItemHandle::give_option
                        (GlobalData::g_randomOptionHandle,*(undefined4 *)(param_2 + 2),uVar5,uVar4,
                         uVar3,uVar2,param_2 + 0x25);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"eventReward.cpp",
                   "bool eventReward::unsealRandomOption(const CItem*, Inven_Item&)",0x240,
                   "autoUnsealItem : %d",*(undefined4 *)(param_2 + 2));
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

