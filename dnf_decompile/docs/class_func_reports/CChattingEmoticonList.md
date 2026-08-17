# CChattingEmoticonList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Factory

```asm
// === 080e53a8 CChattingEmoticonList::Factory  [0x080e53a8-0x80e54d1] ===
 80e53a8:	55                   	push   %ebp
 80e53a9:	89 e5                	mov    %esp,%ebp
 80e53ab:	57                   	push   %edi
 80e53ac:	56                   	push   %esi
 80e53ad:	53                   	push   %ebx
 80e53ae:	83 ec 2c             	sub    $0x2c,%esp
 80e53b1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80e53b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e53bb:	8b 40 04             	mov    0x4(%eax),%eax
 80e53be:	83 f8 02             	cmp    $0x2,%eax
 80e53c1:	74 62                	je     80e5425 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x7d>
 80e53c3:	83 f8 04             	cmp    $0x4,%eax
 80e53c6:	0f 84 a6 00 00 00    	je     80e5472 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0xca>
 80e53cc:	83 f8 01             	cmp    $0x1,%eax
 80e53cf:	0f 85 f2 00 00 00    	jne    80e54c7 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x11f>
 80e53d5:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 80e53dc:	e8 6f f0 63 00       	call   8724450 <_Znwj>
 80e53e1:	89 c3                	mov    %eax,%ebx
 80e53e3:	89 d8                	mov    %ebx,%eax
 80e53e5:	89 04 24             	mov    %eax,(%esp)
 80e53e8:	e8 95 0b 00 00       	call   80e5f82 <_ZN24ChattingEmoticon_byEventC1Ev>
 80e53ed:	eb 18                	jmp    80e5407 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x5f>
 80e53ef:	89 d6                	mov    %edx,%esi
 80e53f1:	89 c7                	mov    %eax,%edi
 80e53f3:	89 1c 24             	mov    %ebx,(%esp)
 80e53f6:	e8 f5 f0 63 00       	call   87244f0 <_ZdlPv>
 80e53fb:	89 f8                	mov    %edi,%eax
 80e53fd:	89 f2                	mov    %esi,%edx
 80e53ff:	89 04 24             	mov    %eax,(%esp)
 80e5402:	e8 49 e3 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e5407:	89 d8                	mov    %ebx,%eax
 80e5409:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80e540c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e540f:	8b 00                	mov    (%eax),%eax
 80e5411:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5415:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e5418:	89 04 24             	mov    %eax,(%esp)
 80e541b:	e8 54 0b 00 00       	call   80e5f74 <_ZN20ChattingEmoticonBase8SetIndexEi>
 80e5420:	e9 a2 00 00 00       	jmp    80e54c7 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x11f>
 80e5425:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 80e542c:	e8 1f f0 63 00       	call   8724450 <_Znwj>
 80e5431:	89 c3                	mov    %eax,%ebx
 80e5433:	89 d8                	mov    %ebx,%eax
 80e5435:	89 04 24             	mov    %eax,(%esp)
 80e5438:	e8 61 0b 00 00       	call   80e5f9e <_ZN26ChattingEmoticon_byPremiumC1Ev>
 80e543d:	eb 18                	jmp    80e5457 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0xaf>
 80e543f:	89 d6                	mov    %edx,%esi
 80e5441:	89 c7                	mov    %eax,%edi
 80e5443:	89 1c 24             	mov    %ebx,(%esp)
 80e5446:	e8 a5 f0 63 00       	call   87244f0 <_ZdlPv>
 80e544b:	89 f8                	mov    %edi,%eax
 80e544d:	89 f2                	mov    %esi,%edx
 80e544f:	89 04 24             	mov    %eax,(%esp)
 80e5452:	e8 f9 e2 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e5457:	89 d8                	mov    %ebx,%eax
 80e5459:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80e545c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e545f:	8b 00                	mov    (%eax),%eax
 80e5461:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5465:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e5468:	89 04 24             	mov    %eax,(%esp)
 80e546b:	e8 04 0b 00 00       	call   80e5f74 <_ZN20ChattingEmoticonBase8SetIndexEi>
 80e5470:	eb 55                	jmp    80e54c7 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x11f>
 80e5472:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 80e5479:	e8 d2 ef 63 00       	call   8724450 <_Znwj>
 80e547e:	89 c3                	mov    %eax,%ebx
 80e5480:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e5483:	8b 50 08             	mov    0x8(%eax),%edx
 80e5486:	89 d8                	mov    %ebx,%eax
 80e5488:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e548c:	89 04 24             	mov    %eax,(%esp)
 80e548f:	e8 26 0b 00 00       	call   80e5fba <_ZN24ChattingEmoticon_byLevelC1Ei>
 80e5494:	eb 18                	jmp    80e54ae <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x106>
 80e5496:	89 d6                	mov    %edx,%esi
 80e5498:	89 c7                	mov    %eax,%edi
 80e549a:	89 1c 24             	mov    %ebx,(%esp)
 80e549d:	e8 4e f0 63 00       	call   87244f0 <_ZdlPv>
 80e54a2:	89 f8                	mov    %edi,%eax
 80e54a4:	89 f2                	mov    %esi,%edx
 80e54a6:	89 04 24             	mov    %eax,(%esp)
 80e54a9:	e8 a2 e2 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e54ae:	89 d8                	mov    %ebx,%eax
 80e54b0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80e54b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e54b6:	8b 00                	mov    (%eax),%eax
 80e54b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e54bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e54bf:	89 04 24             	mov    %eax,(%esp)
 80e54c2:	e8 ad 0a 00 00       	call   80e5f74 <_ZN20ChattingEmoticonBase8SetIndexEi>
 80e54c7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e54ca:	83 c4 2c             	add    $0x2c,%esp
 80e54cd:	5b                   	pop    %ebx
 80e54ce:	5e                   	pop    %esi
 80e54cf:	5f                   	pop    %edi
 80e54d0:	5d                   	pop    %ebp
 80e54d1:	c3                   	ret

```

```c
// CChattingEmoticonList::Factory @ 0x80e53a8

/* CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&) */

ChattingEmoticon_byEvent * __thiscall
CChattingEmoticonList::Factory(CChattingEmoticonList *this,EmoticonScript *param_1)

{
  int iVar1;
  ChattingEmoticon_byEvent *local_20;
  
  local_20 = (ChattingEmoticon_byEvent *)0x0;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 2) {
    local_20 = operator_new(0x20);
                    /* try { // try from 080e5438 to 080e543c has its CatchHandler @ 080e543f */
    ChattingEmoticon_byPremium::ChattingEmoticon_byPremium((ChattingEmoticon_byPremium *)local_20);
    ChattingEmoticonBase::SetIndex((ChattingEmoticonBase *)local_20,*(int *)param_1);
  }
  else if (iVar1 == 4) {
    local_20 = operator_new(0x24);
                    /* try { // try from 080e548f to 080e5493 has its CatchHandler @ 080e5496 */
    ChattingEmoticon_byLevel::ChattingEmoticon_byLevel
              ((ChattingEmoticon_byLevel *)local_20,*(int *)(param_1 + 8));
    ChattingEmoticonBase::SetIndex((ChattingEmoticonBase *)local_20,*(int *)param_1);
  }
  else if (iVar1 == 1) {
    local_20 = operator_new(0x20);
                    /* try { // try from 080e53e8 to 080e53ec has its CatchHandler @ 080e53ef */
    ChattingEmoticon_byEvent::ChattingEmoticon_byEvent(local_20);
    ChattingEmoticonBase::SetIndex((ChattingEmoticonBase *)local_20,*(int *)param_1);
  }
  return local_20;
}

```

---

## Load_list

```asm
// === 080e54d2 CChattingEmoticonList::Load_list  [0x080e54d2-0x80e581b] ===
 80e54d2:	55                   	push   %ebp
 80e54d3:	89 e5                	mov    %esp,%ebp
 80e54d5:	56                   	push   %esi
 80e54d6:	53                   	push   %ebx
 80e54d7:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 80e54dd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e54e4:	8d 45 98             	lea    -0x68(%ebp),%eax
 80e54e7:	c7 44 24 04 c0 6c 4f 	movl   $0x94f6cc0,0x4(%esp)
 80e54ee:	09 
 80e54ef:	89 04 24             	mov    %eax,(%esp)
 80e54f2:	e8 fb 0b 00 00       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 80e54f7:	83 ec 04             	sub    $0x4,%esp
 80e54fa:	8d 45 84             	lea    -0x7c(%ebp),%eax
 80e54fd:	89 04 24             	mov    %eax,(%esp)
 80e5500:	e8 29 0b 00 00       	call   80e602e <_ZN12EmoticonType14EmoticonScriptC1Ev>
 80e5505:	e9 a6 02 00 00       	jmp    80e57b0 <_ZN21CChattingEmoticonList9Load_listEv+0x2de>
 80e550a:	8d 45 98             	lea    -0x68(%ebp),%eax
 80e550d:	89 04 24             	mov    %eax,(%esp)
 80e5510:	e8 a3 0c 00 00       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 80e5515:	83 c0 04             	add    $0x4,%eax
 80e5518:	89 04 24             	mov    %eax,(%esp)
 80e551b:	e8 d0 0f 62 00       	call   87064f0 <_ZNKSs5c_strEv>
 80e5520:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e5523:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80e5527:	0f 84 b5 02 00 00    	je     80e57e2 <_ZN21CChattingEmoticonList9Load_listEv+0x310>
 80e552d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e5530:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5534:	8d 45 84             	lea    -0x7c(%ebp),%eax
 80e5537:	89 04 24             	mov    %eax,(%esp)
 80e553a:	e8 75 dc 7f 00       	call   88e31b4 <_Z22ImportChattingEmoticonRN12EmoticonType14EmoticonScriptEPKc>
 80e553f:	83 f0 01             	xor    $0x1,%eax
 80e5542:	84 c0                	test   %al,%al
 80e5544:	74 1d                	je     80e5563 <_ZN21CChattingEmoticonList9Load_listEv+0x91>
 80e5546:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e5549:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e554d:	c7 04 24 c0 fa b2 08 	movl   $0x8b2fac0,(%esp)
 80e5554:	e8 07 86 f9 ff       	call   807db60 <printf@plt>
 80e5559:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e555e:	e9 a2 02 00 00       	jmp    80e5805 <_ZN21CChattingEmoticonList9Load_listEv+0x333>
 80e5563:	8d 45 84             	lea    -0x7c(%ebp),%eax
 80e5566:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e556a:	8b 45 08             	mov    0x8(%ebp),%eax
 80e556d:	89 04 24             	mov    %eax,(%esp)
 80e5570:	e8 33 fe ff ff       	call   80e53a8 <_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE>
 80e5575:	89 45 80             	mov    %eax,-0x80(%ebp)
 80e5578:	8b 45 80             	mov    -0x80(%ebp),%eax
 80e557b:	85 c0                	test   %eax,%eax
 80e557d:	75 0a                	jne    80e5589 <_ZN21CChattingEmoticonList9Load_listEv+0xb7>
 80e557f:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e5584:	e9 7c 02 00 00       	jmp    80e5805 <_ZN21CChattingEmoticonList9Load_listEv+0x333>
 80e5589:	8b 55 08             	mov    0x8(%ebp),%edx
 80e558c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 80e558f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5593:	89 04 24             	mov    %eax,(%esp)
 80e5596:	e8 57 0c 00 00       	call   80e61f2 <_ZNSt3mapIiP20ChattingEmoticonBaseSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 80e559b:	83 ec 04             	sub    $0x4,%esp
 80e559e:	8b 45 80             	mov    -0x80(%ebp),%eax
 80e55a1:	89 04 24             	mov    %eax,(%esp)
 80e55a4:	e8 bf 09 00 00       	call   80e5f68 <_ZNK20ChattingEmoticonBase8GetIndexEv>
 80e55a9:	89 45 a8             	mov    %eax,-0x58(%ebp)
 80e55ac:	8b 55 08             	mov    0x8(%ebp),%edx
 80e55af:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 80e55b2:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 80e55b5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80e55b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e55bd:	89 04 24             	mov    %eax,(%esp)
 80e55c0:	e8 01 0c 00 00       	call   80e61c6 <_ZNSt3mapIiP20ChattingEmoticonBaseSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 80e55c5:	83 ec 04             	sub    $0x4,%esp
 80e55c8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 80e55cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e55cf:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 80e55d2:	89 04 24             	mov    %eax,(%esp)
 80e55d5:	e8 3e 0c 00 00       	call   80e6218 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEneERKS5_>
 80e55da:	84 c0                	test   %al,%al
 80e55dc:	74 23                	je     80e5601 <_ZN21CChattingEmoticonList9Load_listEv+0x12f>
 80e55de:	8b 45 80             	mov    -0x80(%ebp),%eax
 80e55e1:	85 c0                	test   %eax,%eax
 80e55e3:	74 12                	je     80e55f7 <_ZN21CChattingEmoticonList9Load_listEv+0x125>
 80e55e5:	8b 45 80             	mov    -0x80(%ebp),%eax
 80e55e8:	8b 00                	mov    (%eax),%eax
 80e55ea:	83 c0 04             	add    $0x4,%eax
 80e55ed:	8b 10                	mov    (%eax),%edx
 80e55ef:	8b 45 80             	mov    -0x80(%ebp),%eax
 80e55f2:	89 04 24             	mov    %eax,(%esp)
 80e55f5:	ff d2                	call   *%edx
 80e55f7:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e55fc:	e9 04 02 00 00       	jmp    80e5805 <_ZN21CChattingEmoticonList9Load_listEv+0x333>
 80e5601:	8b 45 80             	mov    -0x80(%ebp),%eax
 80e5604:	89 04 24             	mov    %eax,(%esp)
 80e5607:	e8 5c 09 00 00       	call   80e5f68 <_ZNK20ChattingEmoticonBase8GetIndexEv>
 80e560c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 80e560f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80e5612:	8d 55 80             	lea    -0x80(%ebp),%edx
 80e5615:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e5619:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 80e561c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5620:	89 04 24             	mov    %eax,(%esp)
 80e5623:	e8 04 0c 00 00       	call   80e622c <_ZSt9make_pairIiRP20ChattingEmoticonBaseESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 80e5628:	83 ec 04             	sub    $0x4,%esp
 80e562b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80e562e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5632:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80e5635:	89 04 24             	mov    %eax,(%esp)
 80e5638:	e8 35 0c 00 00       	call   80e6272 <_ZNSt4pairIKiP20ChattingEmoticonBaseEC1IiS2_EEOS_IT_T0_E>
 80e563d:	8b 55 08             	mov    0x8(%ebp),%edx
 80e5640:	8d 45 ac             	lea    -0x54(%ebp),%eax
 80e5643:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 80e5646:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80e564a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e564e:	89 04 24             	mov    %eax,(%esp)
 80e5651:	e8 4c 0c 00 00       	call   80e62a2 <_ZNSt3mapIiP20ChattingEmoticonBaseSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 80e5656:	83 ec 04             	sub    $0x4,%esp
 80e5659:	8b 45 08             	mov    0x8(%ebp),%eax
 80e565c:	8d 50 18             	lea    0x18(%eax),%edx
 80e565f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 80e5665:	8d 4d 84             	lea    -0x7c(%ebp),%ecx
 80e5668:	83 c1 04             	add    $0x4,%ecx
 80e566b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80e566f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5673:	89 04 24             	mov    %eax,(%esp)
 80e5676:	e8 53 0c 00 00       	call   80e62ce <_ZNSt3mapIiSt6vectorIP20ChattingEmoticonBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 80e567b:	83 ec 04             	sub    $0x4,%esp
 80e567e:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5681:	8d 50 18             	lea    0x18(%eax),%edx
 80e5684:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80e5687:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e568b:	89 04 24             	mov    %eax,(%esp)
 80e568e:	e8 67 0c 00 00       	call   80e62fa <_ZNSt3mapIiSt6vectorIP20ChattingEmoticonBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 80e5693:	83 ec 04             	sub    $0x4,%esp
 80e5696:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80e5699:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e569d:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 80e56a3:	89 04 24             	mov    %eax,(%esp)
 80e56a6:	e8 75 0c 00 00       	call   80e6320 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIP20ChattingEmoticonBaseSaIS4_EEEEeqERKS8_>
 80e56ab:	84 c0                	test   %al,%al
 80e56ad:	0f 84 cb 00 00 00    	je     80e577e <_ZN21CChattingEmoticonList9Load_listEv+0x2ac>
 80e56b3:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80e56b9:	89 04 24             	mov    %eax,(%esp)
 80e56bc:	e8 73 0c 00 00       	call   80e6334 <_ZNSt6vectorIP20ChattingEmoticonBaseSaIS1_EEC1Ev>
 80e56c1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e56c4:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 80e56ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e56ce:	8d 55 84             	lea    -0x7c(%ebp),%edx
 80e56d1:	83 c2 04             	add    $0x4,%edx
 80e56d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e56d8:	89 04 24             	mov    %eax,(%esp)
 80e56db:	e8 c5 0c 00 00       	call   80e63a5 <_ZSt9make_pairIRiRSt6vectorIP20ChattingEmoticonBaseSaIS3_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS8_IT0_E6__typeEEOS9_OSC_>
 80e56e0:	83 ec 04             	sub    $0x4,%esp
 80e56e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e56e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e56ea:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e56ed:	89 04 24             	mov    %eax,(%esp)
 80e56f0:	e8 f5 0c 00 00       	call   80e63ea <_ZNSt4pairIKiSt6vectorIP20ChattingEmoticonBaseSaIS3_EEEC1IiS5_EEOS_IT_T0_E>
 80e56f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80e56f8:	8d 48 18             	lea    0x18(%eax),%ecx
 80e56fb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80e56fe:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 80e5701:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e5705:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80e5709:	89 04 24             	mov    %eax,(%esp)
 80e570c:	e8 13 0d 00 00       	call   80e6424 <_ZNSt3mapIiSt6vectorIP20ChattingEmoticonBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE6insertERKS9_>
 80e5711:	83 ec 04             	sub    $0x4,%esp
 80e5714:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e5717:	89 04 24             	mov    %eax,(%esp)
 80e571a:	e8 bd 09 00 00       	call   80e60dc <_ZNSt4pairIKiSt6vectorIP20ChattingEmoticonBaseSaIS3_EEED1Ev>
 80e571f:	eb 2a                	jmp    80e574b <_ZN21CChattingEmoticonList9Load_listEv+0x279>
 80e5721:	89 d3                	mov    %edx,%ebx
 80e5723:	89 c6                	mov    %eax,%esi
 80e5725:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e5728:	89 04 24             	mov    %eax,(%esp)
 80e572b:	e8 ac 09 00 00       	call   80e60dc <_ZNSt4pairIKiSt6vectorIP20ChattingEmoticonBaseSaIS3_EEED1Ev>
 80e5730:	89 f0                	mov    %esi,%eax
 80e5732:	89 da                	mov    %ebx,%edx
 80e5734:	eb 00                	jmp    80e5736 <_ZN21CChattingEmoticonList9Load_listEv+0x264>
 80e5736:	89 d3                	mov    %edx,%ebx
 80e5738:	89 c6                	mov    %eax,%esi
 80e573a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e573d:	89 04 24             	mov    %eax,(%esp)
 80e5740:	e8 81 09 00 00       	call   80e60c6 <_ZNSt4pairIiSt6vectorIP20ChattingEmoticonBaseSaIS2_EEED1Ev>
 80e5745:	89 f0                	mov    %esi,%eax
 80e5747:	89 da                	mov    %ebx,%edx
 80e5749:	eb 0d                	jmp    80e5758 <_ZN21CChattingEmoticonList9Load_listEv+0x286>
 80e574b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e574e:	89 04 24             	mov    %eax,(%esp)
 80e5751:	e8 70 09 00 00       	call   80e60c6 <_ZNSt4pairIiSt6vectorIP20ChattingEmoticonBaseSaIS2_EEED1Ev>
 80e5756:	eb 18                	jmp    80e5770 <_ZN21CChattingEmoticonList9Load_listEv+0x29e>
 80e5758:	89 d3                	mov    %edx,%ebx
 80e575a:	89 c6                	mov    %eax,%esi
 80e575c:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80e5762:	89 04 24             	mov    %eax,(%esp)
 80e5765:	e8 de 0b 00 00       	call   80e6348 <_ZNSt6vectorIP20ChattingEmoticonBaseSaIS1_EED1Ev>
 80e576a:	89 f0                	mov    %esi,%eax
 80e576c:	89 da                	mov    %ebx,%edx
 80e576e:	eb 7a                	jmp    80e57ea <_ZN21CChattingEmoticonList9Load_listEv+0x318>
 80e5770:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80e5776:	89 04 24             	mov    %eax,(%esp)
 80e5779:	e8 ca 0b 00 00       	call   80e6348 <_ZNSt6vectorIP20ChattingEmoticonBaseSaIS1_EED1Ev>
 80e577e:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5781:	83 c0 18             	add    $0x18,%eax
 80e5784:	8d 55 84             	lea    -0x7c(%ebp),%edx
 80e5787:	83 c2 04             	add    $0x4,%edx
 80e578a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e578e:	89 04 24             	mov    %eax,(%esp)
 80e5791:	e8 ba 0c 00 00       	call   80e6450 <_ZNSt3mapIiSt6vectorIP20ChattingEmoticonBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEEixERS8_>
 80e5796:	8d 55 80             	lea    -0x80(%ebp),%edx
 80e5799:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e579d:	89 04 24             	mov    %eax,(%esp)
 80e57a0:	e8 f7 0d 00 00       	call   80e659c <_ZNSt6vectorIP20ChattingEmoticonBaseSaIS1_EE9push_backERKS1_>
 80e57a5:	8d 45 98             	lea    -0x68(%ebp),%eax
 80e57a8:	89 04 24             	mov    %eax,(%esp)
 80e57ab:	e8 60 0e 00 00       	call   80e6610 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEv>
 80e57b0:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e57b3:	c7 44 24 04 c0 6c 4f 	movl   $0x94f6cc0,0x4(%esp)
 80e57ba:	09 
 80e57bb:	89 04 24             	mov    %eax,(%esp)
 80e57be:	e8 55 09 00 00       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 80e57c3:	83 ec 04             	sub    $0x4,%esp
 80e57c6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e57c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e57cd:	8d 45 98             	lea    -0x68(%ebp),%eax
 80e57d0:	89 04 24             	mov    %eax,(%esp)
 80e57d3:	e8 66 09 00 00       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 80e57d8:	84 c0                	test   %al,%al
 80e57da:	0f 85 2a fd ff ff    	jne    80e550a <_ZN21CChattingEmoticonList9Load_listEv+0x38>
 80e57e0:	eb 01                	jmp    80e57e3 <_ZN21CChattingEmoticonList9Load_listEv+0x311>
 80e57e2:	90                   	nop
 80e57e3:	bb 01 00 00 00       	mov    $0x1,%ebx
 80e57e8:	eb 1b                	jmp    80e5805 <_ZN21CChattingEmoticonList9Load_listEv+0x333>
 80e57ea:	89 d3                	mov    %edx,%ebx
 80e57ec:	89 c6                	mov    %eax,%esi
 80e57ee:	8d 45 84             	lea    -0x7c(%ebp),%eax
 80e57f1:	89 04 24             	mov    %eax,(%esp)
 80e57f4:	e8 81 08 00 00       	call   80e607a <_ZN12EmoticonType14EmoticonScriptD1Ev>
 80e57f9:	89 f0                	mov    %esi,%eax
 80e57fb:	89 da                	mov    %ebx,%edx
 80e57fd:	89 04 24             	mov    %eax,(%esp)
 80e5800:	e8 4b df 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e5805:	8d 45 84             	lea    -0x7c(%ebp),%eax
 80e5808:	89 04 24             	mov    %eax,(%esp)
 80e580b:	e8 6a 08 00 00       	call   80e607a <_ZN12EmoticonType14EmoticonScriptD1Ev>
 80e5810:	89 d8                	mov    %ebx,%eax
 80e5812:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80e5815:	83 c4 00             	add    $0x0,%esp
 80e5818:	5b                   	pop    %ebx
 80e5819:	5e                   	pop    %esi
 80e581a:	5d                   	pop    %ebp
 80e581b:	c3                   	ret

```

```c
// CChattingEmoticonList::Load_list @ 0x80e54d2

/* CChattingEmoticonList::Load_list() */

undefined4 __thiscall CChattingEmoticonList::Load_list(CChattingEmoticonList *this)

{
  char cVar1;
  int iVar2;
  vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>> *this_00;
  undefined4 uVar3;
  _Rb_tree_iterator *p_Var4;
  undefined4 *puVar5;
  vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>> local_94 [12];
  _Rb_tree_iterator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>
  local_88 [4];
  ChattingEmoticonBase *local_84;
  EmoticonScript local_80 [4];
  vector avStack_7c [16];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_6c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_68 [4];
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  local_64 [4];
  _Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> local_60 [4];
  undefined4 local_5c;
  pair local_58 [8];
  pair<int_const,ChattingEmoticonBase*> local_50 [8];
  int local_48 [2];
  ChattingEmoticonBase *local_40;
  map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
  local_3c [4];
  pair local_38 [8];
  pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>
  local_30 [16];
  pair<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>> local_20 [16];
  char *local_10;
  
  local_10 = (char *)0x0;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_6c);
  EmoticonType::EmoticonScript::EmoticonScript(local_80);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_68);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_6c,
                       (_Rb_tree_iterator *)local_68);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_6c);
                    /* try { // try from 080e551b to 080e56c0 has its CatchHandler @ 080e57ea */
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = ImportChattingEmoticon(local_80,local_10);
    if (cVar1 != '\x01') {
      printf("Mission Script Error: %s\n",local_10);
      uVar3 = 0;
      goto LAB_080e5805;
    }
    local_84 = (ChattingEmoticonBase *)Factory(this,local_80);
    if (local_84 == (ChattingEmoticonBase *)0x0) {
      uVar3 = 0;
      goto LAB_080e5805;
    }
    std::
    map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
    ::end(local_64);
    local_5c = ChattingEmoticonBase::GetIndex(local_84);
    puVar5 = &local_5c;
    std::
    map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
    ::find((int *)local_60);
    p_Var4 = (_Rb_tree_iterator *)local_64;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator!=
                      (local_60,p_Var4);
    if (cVar1 != '\0') {
      if (local_84 != (ChattingEmoticonBase *)0x0) {
        (**(code **)(*(int *)local_84 + 4))(local_84,p_Var4,puVar5);
      }
      uVar3 = 0;
      goto LAB_080e5805;
    }
    local_40 = (ChattingEmoticonBase *)ChattingEmoticonBase::GetIndex(local_84);
    std::make_pair<int,ChattingEmoticonBase*&>(local_48,&local_40);
    std::pair<int_const,ChattingEmoticonBase*>::pair<int,ChattingEmoticonBase*>
              (local_50,(pair *)local_48);
    std::
    map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
    ::insert(local_58);
    std::
    map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
    ::find((int *)local_88);
    std::
    map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
    ::end(local_3c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>
            ::operator==(local_88,(_Rb_tree_iterator *)local_3c);
    if (cVar1 != '\0') {
      std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>::vector(local_94);
                    /* try { // try from 080e56db to 080e56df has its CatchHandler @ 080e5758 */
      std::make_pair<int&,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>&>
                ((int *)local_20,avStack_7c);
                    /* try { // try from 080e56f0 to 080e56f4 has its CatchHandler @ 080e5736 */
      std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>
      ::pair<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>
                (local_30,local_20);
                    /* try { // try from 080e570c to 080e5710 has its CatchHandler @ 080e5721 */
      std::
      map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
      ::insert(local_38);
                    /* try { // try from 080e571a to 080e571e has its CatchHandler @ 080e5736 */
      std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>
      ::~pair(local_30);
                    /* try { // try from 080e5751 to 080e5755 has its CatchHandler @ 080e5758 */
      std::pair<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>::~pair
                (local_20);
                    /* try { // try from 080e5779 to 080e57c2 has its CatchHandler @ 080e57ea */
      std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>::~vector(local_94);
    }
    this_00 = (vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>> *)
              std::
              map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
              ::operator[]((map<int,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>>>>
                            *)(this + 0x18),(int *)avStack_7c);
    std::vector<ChattingEmoticonBase*,std::allocator<ChattingEmoticonBase*>>::push_back
              (this_00,&local_84);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_6c);
  }
  uVar3 = 1;
LAB_080e5805:
  EmoticonType::EmoticonScript::~EmoticonScript(local_80);
  return uVar3;
}

```

---

## ReCalc

```asm
// === 080e5880 CChattingEmoticonList::ReCalc  [0x080e5880-0x80e5c29] ===
 80e5880:	55                   	push   %ebp
 80e5881:	89 e5                	mov    %esp,%ebp
 80e5883:	56                   	push   %esi
 80e5884:	53                   	push   %ebx
 80e5885:	83 ec 70             	sub    $0x70,%esp
 80e5888:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e588b:	89 04 24             	mov    %eax,(%esp)
 80e588e:	e8 bd 0d 00 00       	call   80e6650 <_ZNSt6vectorI26CChattingEmoticonConfigRowSaIS0_EEC1Ev>
 80e5893:	8d 45 a0             	lea    -0x60(%ebp),%eax
 80e5896:	89 04 24             	mov    %eax,(%esp)
 80e5899:	e8 3e 4b ff ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 80e589e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80e58a5:	e9 a1 00 00 00       	jmp    80e594b <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0xcb>
 80e58aa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80e58ad:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e58b0:	6b c0 16             	imul   $0x16,%eax,%eax
 80e58b3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80e58b6:	83 c0 10             	add    $0x10,%eax
 80e58b9:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80e58bd:	98                   	cwtl
 80e58be:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e58c2:	8b 45 08             	mov    0x8(%ebp),%eax
 80e58c5:	89 04 24             	mov    %eax,(%esp)
 80e58c8:	e8 4f ff ff ff       	call   80e581c <_ZN21CChattingEmoticonList13find_emoticonEi>
 80e58cd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80e58d0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 80e58d4:	74 6d                	je     80e5943 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0xc3>
 80e58d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e58d9:	8b 00                	mov    (%eax),%eax
 80e58db:	83 c0 14             	add    $0x14,%eax
 80e58de:	8b 10                	mov    (%eax),%edx
 80e58e0:	8b 45 10             	mov    0x10(%ebp),%eax
 80e58e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e58e7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e58ea:	89 04 24             	mov    %eax,(%esp)
 80e58ed:	ff d2                	call   *%edx
 80e58ef:	83 f0 01             	xor    $0x1,%eax
 80e58f2:	84 c0                	test   %al,%al
 80e58f4:	75 50                	jne    80e5946 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0xc6>
 80e58f6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80e58f9:	6b c0 16             	imul   $0x16,%eax,%eax
 80e58fc:	03 45 0c             	add    0xc(%ebp),%eax
 80e58ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5903:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e5906:	89 04 24             	mov    %eax,(%esp)
 80e5909:	e8 b4 0d 00 00       	call   80e66c2 <_ZNSt6vectorI26CChattingEmoticonConfigRowSaIS0_EE9push_backERKS0_>
 80e590e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80e5911:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e5914:	6b c0 16             	imul   $0x16,%eax,%eax
 80e5917:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80e591a:	83 c0 10             	add    $0x10,%eax
 80e591d:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80e5921:	98                   	cwtl
 80e5922:	89 45 cc             	mov    %eax,-0x34(%ebp)
 80e5925:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80e5928:	8d 55 cc             	lea    -0x34(%ebp),%edx
 80e592b:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e592f:	8d 55 a0             	lea    -0x60(%ebp),%edx
 80e5932:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5936:	89 04 24             	mov    %eax,(%esp)
 80e5939:	e8 88 4c ff ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 80e593e:	83 ec 04             	sub    $0x4,%esp
 80e5941:	eb 04                	jmp    80e5947 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0xc7>
 80e5943:	90                   	nop
 80e5944:	eb 01                	jmp    80e5947 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0xc7>
 80e5946:	90                   	nop
 80e5947:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 80e594b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80e594e:	83 f8 17             	cmp    $0x17,%eax
 80e5951:	0f 96 c0             	setbe  %al
 80e5954:	84 c0                	test   %al,%al
 80e5956:	0f 85 4e ff ff ff    	jne    80e58aa <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x2a>
 80e595c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e595f:	89 04 24             	mov    %eax,(%esp)
 80e5962:	e8 ab 05 00 00       	call   80e5f12 <_ZN23CChattingEmoticonConfig5clearEv>
 80e5967:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80e596e:	e9 d0 00 00 00       	jmp    80e5a43 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x1c3>
 80e5973:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80e5976:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e597a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e597d:	89 04 24             	mov    %eax,(%esp)
 80e5980:	e8 d1 0d 00 00       	call   80e6756 <_ZNSt6vectorI26CChattingEmoticonConfigRowSaIS0_EEixEj>
 80e5985:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 80e5989:	98                   	cwtl
 80e598a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e598e:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5991:	89 04 24             	mov    %eax,(%esp)
 80e5994:	e8 83 fe ff ff       	call   80e581c <_ZN21CChattingEmoticonList13find_emoticonEi>
 80e5999:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80e599c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 80e59a0:	0f 84 98 00 00 00    	je     80e5a3e <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x1be>
 80e59a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e59a9:	8b 00                	mov    (%eax),%eax
 80e59ab:	83 c0 0c             	add    $0xc,%eax
 80e59ae:	8b 10                	mov    (%eax),%edx
 80e59b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e59b3:	89 04 24             	mov    %eax,(%esp)
 80e59b6:	ff d2                	call   *%edx
 80e59b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e59bb:	eb 63                	jmp    80e5a20 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x1a0>
 80e59bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e59c0:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e59c3:	6b c0 16             	imul   $0x16,%eax,%eax
 80e59c6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80e59c9:	83 c0 10             	add    $0x10,%eax
 80e59cc:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80e59d0:	66 85 c0             	test   %ax,%ax
 80e59d3:	75 47                	jne    80e5a1c <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x19c>
 80e59d5:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 80e59d8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80e59db:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e59df:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e59e2:	89 04 24             	mov    %eax,(%esp)
 80e59e5:	e8 6c 0d 00 00       	call   80e6756 <_ZNSt6vectorI26CChattingEmoticonConfigRowSaIS0_EEixEj>
 80e59ea:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e59ed:	6b cb 16             	imul   $0x16,%ebx,%ecx
 80e59f0:	8b 18                	mov    (%eax),%ebx
 80e59f2:	89 1c 11             	mov    %ebx,(%ecx,%edx,1)
 80e59f5:	8b 58 04             	mov    0x4(%eax),%ebx
 80e59f8:	89 5c 11 04          	mov    %ebx,0x4(%ecx,%edx,1)
 80e59fc:	8b 58 08             	mov    0x8(%eax),%ebx
 80e59ff:	89 5c 11 08          	mov    %ebx,0x8(%ecx,%edx,1)
 80e5a03:	8b 58 0c             	mov    0xc(%eax),%ebx
 80e5a06:	89 5c 11 0c          	mov    %ebx,0xc(%ecx,%edx,1)
 80e5a0a:	8b 58 10             	mov    0x10(%eax),%ebx
 80e5a0d:	89 5c 11 10          	mov    %ebx,0x10(%ecx,%edx,1)
 80e5a11:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 80e5a15:	66 89 44 11 14       	mov    %ax,0x14(%ecx,%edx,1)
 80e5a1a:	eb 23                	jmp    80e5a3f <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x1bf>
 80e5a1c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80e5a20:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e5a23:	8b 00                	mov    (%eax),%eax
 80e5a25:	83 c0 10             	add    $0x10,%eax
 80e5a28:	8b 10                	mov    (%eax),%edx
 80e5a2a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e5a2d:	89 04 24             	mov    %eax,(%esp)
 80e5a30:	ff d2                	call   *%edx
 80e5a32:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80e5a35:	0f 9d c0             	setge  %al
 80e5a38:	84 c0                	test   %al,%al
 80e5a3a:	75 81                	jne    80e59bd <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x13d>
 80e5a3c:	eb 01                	jmp    80e5a3f <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x1bf>
 80e5a3e:	90                   	nop
 80e5a3f:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80e5a43:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e5a46:	89 04 24             	mov    %eax,(%esp)
 80e5a49:	e8 e8 0c 00 00       	call   80e6736 <_ZNKSt6vectorI26CChattingEmoticonConfigRowSaIS0_EE4sizeEv>
 80e5a4e:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 80e5a51:	0f 97 c0             	seta   %al
 80e5a54:	84 c0                	test   %al,%al
 80e5a56:	0f 85 17 ff ff ff    	jne    80e5973 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0xf3>
 80e5a5c:	8b 55 08             	mov    0x8(%ebp),%edx
 80e5a5f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e5a62:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5a66:	89 04 24             	mov    %eax,(%esp)
 80e5a69:	e8 fc 0c 00 00       	call   80e676a <_ZNSt3mapIiP20ChattingEmoticonBaseSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 80e5a6e:	83 ec 04             	sub    $0x4,%esp
 80e5a71:	e9 2b 01 00 00       	jmp    80e5ba1 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x321>
 80e5a76:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e5a79:	8d 55 a0             	lea    -0x60(%ebp),%edx
 80e5a7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5a80:	89 04 24             	mov    %eax,(%esp)
 80e5a83:	e8 0e 4a ff ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 80e5a88:	83 ec 04             	sub    $0x4,%esp
 80e5a8b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e5a8e:	89 04 24             	mov    %eax,(%esp)
 80e5a91:	e8 ac 0b 00 00       	call   80e6642 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEptEv>
 80e5a96:	8b 40 04             	mov    0x4(%eax),%eax
 80e5a99:	89 04 24             	mov    %eax,(%esp)
 80e5a9c:	e8 c7 04 00 00       	call   80e5f68 <_ZNK20ChattingEmoticonBase8GetIndexEv>
 80e5aa1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80e5aa4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e5aa7:	8d 55 dc             	lea    -0x24(%ebp),%edx
 80e5aaa:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e5aae:	8d 55 a0             	lea    -0x60(%ebp),%edx
 80e5ab1:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5ab5:	89 04 24             	mov    %eax,(%esp)
 80e5ab8:	e8 b7 4a ff ff       	call   80da574 <_ZNSt3setIiSt4lessIiESaIiEE4findERKi>
 80e5abd:	83 ec 04             	sub    $0x4,%esp
 80e5ac0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e5ac3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5ac7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80e5aca:	89 04 24             	mov    %eax,(%esp)
 80e5acd:	e8 80 06 00 00       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 80e5ad2:	84 c0                	test   %al,%al
 80e5ad4:	0f 85 b8 00 00 00    	jne    80e5b92 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x312>
 80e5ada:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e5add:	89 04 24             	mov    %eax,(%esp)
 80e5ae0:	e8 5d 0b 00 00       	call   80e6642 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEptEv>
 80e5ae5:	8b 40 04             	mov    0x4(%eax),%eax
 80e5ae8:	8b 10                	mov    (%eax),%edx
 80e5aea:	83 c2 14             	add    $0x14,%edx
 80e5aed:	8b 0a                	mov    (%edx),%ecx
 80e5aef:	8b 55 10             	mov    0x10(%ebp),%edx
 80e5af2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5af6:	89 04 24             	mov    %eax,(%esp)
 80e5af9:	ff d1                	call   *%ecx
 80e5afb:	83 f0 01             	xor    $0x1,%eax
 80e5afe:	84 c0                	test   %al,%al
 80e5b00:	0f 85 8f 00 00 00    	jne    80e5b95 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x315>
 80e5b06:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e5b09:	89 04 24             	mov    %eax,(%esp)
 80e5b0c:	e8 31 0b 00 00       	call   80e6642 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEptEv>
 80e5b11:	8b 40 04             	mov    0x4(%eax),%eax
 80e5b14:	8b 10                	mov    (%eax),%edx
 80e5b16:	83 c2 0c             	add    $0xc,%edx
 80e5b19:	8b 12                	mov    (%edx),%edx
 80e5b1b:	89 04 24             	mov    %eax,(%esp)
 80e5b1e:	ff d2                	call   *%edx
 80e5b20:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e5b23:	eb 47                	jmp    80e5b6c <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x2ec>
 80e5b25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e5b28:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e5b2b:	6b c0 16             	imul   $0x16,%eax,%eax
 80e5b2e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80e5b31:	83 c0 10             	add    $0x10,%eax
 80e5b34:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80e5b38:	66 85 c0             	test   %ax,%ax
 80e5b3b:	75 2b                	jne    80e5b68 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x2e8>
 80e5b3d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 80e5b40:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e5b43:	89 04 24             	mov    %eax,(%esp)
 80e5b46:	e8 f7 0a 00 00       	call   80e6642 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEptEv>
 80e5b4b:	8b 40 04             	mov    0x4(%eax),%eax
 80e5b4e:	89 04 24             	mov    %eax,(%esp)
 80e5b51:	e8 12 04 00 00       	call   80e5f68 <_ZNK20ChattingEmoticonBase8GetIndexEv>
 80e5b56:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 80e5b59:	6b d3 16             	imul   $0x16,%ebx,%edx
 80e5b5c:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80e5b5f:	83 c2 10             	add    $0x10,%edx
 80e5b62:	66 89 42 04          	mov    %ax,0x4(%edx)
 80e5b66:	eb 2e                	jmp    80e5b96 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x316>
 80e5b68:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e5b6c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e5b6f:	89 04 24             	mov    %eax,(%esp)
 80e5b72:	e8 cb 0a 00 00       	call   80e6642 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEptEv>
 80e5b77:	8b 40 04             	mov    0x4(%eax),%eax
 80e5b7a:	8b 10                	mov    (%eax),%edx
 80e5b7c:	83 c2 10             	add    $0x10,%edx
 80e5b7f:	8b 12                	mov    (%edx),%edx
 80e5b81:	89 04 24             	mov    %eax,(%esp)
 80e5b84:	ff d2                	call   *%edx
 80e5b86:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80e5b89:	0f 9d c0             	setge  %al
 80e5b8c:	84 c0                	test   %al,%al
 80e5b8e:	75 95                	jne    80e5b25 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x2a5>
 80e5b90:	eb 04                	jmp    80e5b96 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x316>
 80e5b92:	90                   	nop
 80e5b93:	eb 01                	jmp    80e5b96 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x316>
 80e5b95:	90                   	nop
 80e5b96:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e5b99:	89 04 24             	mov    %eax,(%esp)
 80e5b9c:	e8 ef 0b 00 00       	call   80e6790 <_ZNSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEppEv>
 80e5ba1:	8b 55 08             	mov    0x8(%ebp),%edx
 80e5ba4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80e5ba7:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5bab:	89 04 24             	mov    %eax,(%esp)
 80e5bae:	e8 3f 06 00 00       	call   80e61f2 <_ZNSt3mapIiP20ChattingEmoticonBaseSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 80e5bb3:	83 ec 04             	sub    $0x4,%esp
 80e5bb6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80e5bb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e5bbd:	8d 45 9c             	lea    -0x64(%ebp),%eax
 80e5bc0:	89 04 24             	mov    %eax,(%esp)
 80e5bc3:	e8 50 06 00 00       	call   80e6218 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEneERKS5_>
 80e5bc8:	84 c0                	test   %al,%al
 80e5bca:	0f 85 a6 fe ff ff    	jne    80e5a76 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x1f6>
 80e5bd0:	bb 01 00 00 00       	mov    $0x1,%ebx
 80e5bd5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 80e5bd8:	89 04 24             	mov    %eax,(%esp)
 80e5bdb:	e8 54 43 ff ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 80e5be0:	eb 30                	jmp    80e5c12 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x392>
 80e5be2:	89 d3                	mov    %edx,%ebx
 80e5be4:	89 c6                	mov    %eax,%esi
 80e5be6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 80e5be9:	89 04 24             	mov    %eax,(%esp)
 80e5bec:	e8 43 43 ff ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 80e5bf1:	89 f0                	mov    %esi,%eax
 80e5bf3:	89 da                	mov    %ebx,%edx
 80e5bf5:	eb 00                	jmp    80e5bf7 <_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser+0x377>
 80e5bf7:	89 d3                	mov    %edx,%ebx
 80e5bf9:	89 c6                	mov    %eax,%esi
 80e5bfb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e5bfe:	89 04 24             	mov    %eax,(%esp)
 80e5c01:	e8 5e 0a 00 00       	call   80e6664 <_ZNSt6vectorI26CChattingEmoticonConfigRowSaIS0_EED1Ev>
 80e5c06:	89 f0                	mov    %esi,%eax
 80e5c08:	89 da                	mov    %ebx,%edx
 80e5c0a:	89 04 24             	mov    %eax,(%esp)
 80e5c0d:	e8 3e db 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e5c12:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e5c15:	89 04 24             	mov    %eax,(%esp)
 80e5c18:	e8 47 0a 00 00       	call   80e6664 <_ZNSt6vectorI26CChattingEmoticonConfigRowSaIS0_EED1Ev>
 80e5c1d:	89 d8                	mov    %ebx,%eax
 80e5c1f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80e5c22:	83 c4 00             	add    $0x0,%esp
 80e5c25:	5b                   	pop    %ebx
 80e5c26:	5e                   	pop    %esi
 80e5c27:	5d                   	pop    %ebp
 80e5c28:	c3                   	ret
 80e5c29:	90                   	nop

```

```c
// CChattingEmoticonList::ReCalc @ 0x80e5880

/* CChattingEmoticonList::ReCalc(CChattingEmoticonConfig&, CUser const&) */

undefined4 __thiscall
CChattingEmoticonList::ReCalc
          (CChattingEmoticonList *this,CChattingEmoticonConfig *param_1,CUser *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  local_68 [4];
  set<int,std::less<int>,std::allocator<int>> local_64 [24];
  vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>> local_4c [12];
  int local_40 [2];
  int local_38;
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  local_34 [4];
  set<int,std::less<int>,std::allocator<int>> local_30 [4];
  _Rb_tree_const_iterator<int> local_2c [4];
  undefined4 local_28;
  uint local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  int local_10;
  
  std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::vector
            (local_4c);
                    /* try { // try from 080e5899 to 080e589d has its CatchHandler @ 080e5bf7 */
  std::set<int,std::less<int>,std::allocator<int>>::set(local_64);
  for (local_24 = 0; local_24 < 0x18; local_24 = local_24 + 1) {
                    /* try { // try from 080e58c8 to 080e5bb2 has its CatchHandler @ 080e5be2 */
    local_20 = (int *)find_emoticon((int)this);
    if ((local_20 != (int *)0x0) &&
       (cVar1 = (**(code **)(*local_20 + 0x14))(local_20,param_2), cVar1 == '\x01')) {
      std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::push_back
                (local_4c,(CChattingEmoticonConfigRow *)(param_1 + local_24 * 0x16));
      local_38 = (int)*(short *)(param_1 + local_24 * 0x16 + 0x14);
      std::set<int,std::less<int>,std::allocator<int>>::insert(local_40);
    }
  }
  CChattingEmoticonConfig::clear(param_1);
  local_1c = 0;
  do {
    uVar4 = std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::size
                      (local_4c);
    if (uVar4 <= local_1c) {
      std::
      map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
      ::begin(local_68);
      do {
        std::
        map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
        ::end(local_34);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_68
                           ,(_Rb_tree_iterator *)local_34);
        if (cVar1 == '\0') {
                    /* try { // try from 080e5bdb to 080e5bdf has its CatchHandler @ 080e5bf7 */
          std::set<int,std::less<int>,std::allocator<int>>::~set(local_64);
          std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::
          ~vector(local_4c);
          return 1;
        }
        std::set<int,std::less<int>,std::allocator<int>>::end(local_30);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_68
                          );
        local_28 = ChattingEmoticonBase::GetIndex(*(ChattingEmoticonBase **)(iVar5 + 4));
        puVar3 = &local_28;
        std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_2c);
        cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                          (local_2c,(_Rb_tree_const_iterator *)local_30);
        if (cVar1 == '\0') {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)
                             local_68);
          cVar1 = (**(code **)(**(int **)(iVar5 + 4) + 0x14))(*(int **)(iVar5 + 4),param_2,puVar3);
          if (cVar1 == '\x01') {
            iVar5 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)
                               local_68);
            local_10 = (**(code **)(**(int **)(iVar5 + 4) + 0xc))(*(int **)(iVar5 + 4));
            while( true ) {
              iVar5 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)
                                 local_68);
              iVar6 = (**(code **)(**(int **)(iVar5 + 4) + 0x10))(*(int **)(iVar5 + 4));
              iVar5 = local_10;
              if (iVar6 < local_10) break;
              if (*(short *)(param_1 + local_10 * 0x16 + 0x14) == 0) {
                iVar6 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::
                        operator->((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)
                                   local_68);
                uVar2 = ChattingEmoticonBase::GetIndex(*(ChattingEmoticonBase **)(iVar6 + 4));
                *(undefined2 *)(param_1 + iVar5 * 0x16 + 0x14) = uVar2;
                break;
              }
              local_10 = local_10 + 1;
            }
          }
        }
        std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_68);
      } while( true );
    }
    iVar5 = std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::
            operator[](local_4c,local_1c);
    iVar5 = (int)*(short *)(iVar5 + 0x14);
    local_18 = (int *)find_emoticon((int)this);
    if (local_18 != (int *)0x0) {
      local_14 = (**(code **)(*local_18 + 0xc))(local_18,iVar5);
      while (iVar6 = (**(code **)(*local_18 + 0x10))(local_18), iVar5 = local_14, local_14 <= iVar6)
      {
        if (*(short *)(param_1 + local_14 * 0x16 + 0x14) == 0) {
          puVar3 = (undefined4 *)
                   std::
                   vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::
                   operator[](local_4c,local_1c);
          iVar5 = iVar5 * 0x16;
          *(undefined4 *)(param_1 + iVar5) = *puVar3;
          *(undefined4 *)(param_1 + iVar5 + 4) = puVar3[1];
          *(undefined4 *)(param_1 + iVar5 + 8) = puVar3[2];
          *(undefined4 *)(param_1 + iVar5 + 0xc) = puVar3[3];
          *(undefined4 *)(param_1 + iVar5 + 0x10) = puVar3[4];
          *(undefined2 *)(param_1 + iVar5 + 0x14) = *(undefined2 *)(puVar3 + 5);
          break;
        }
        local_14 = local_14 + 1;
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}

```

---

## find_emoticon

```asm
// === 080e581c CChattingEmoticonList::find_emoticon  [0x080e581c-0x80e587f] ===
 80e581c:	55                   	push   %ebp
 80e581d:	89 e5                	mov    %esp,%ebp
 80e581f:	83 ec 28             	sub    $0x28,%esp
 80e5822:	8b 55 08             	mov    0x8(%ebp),%edx
 80e5825:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5828:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 80e582b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80e582f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5833:	89 04 24             	mov    %eax,(%esp)
 80e5836:	e8 8b 09 00 00       	call   80e61c6 <_ZNSt3mapIiP20ChattingEmoticonBaseSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 80e583b:	83 ec 04             	sub    $0x4,%esp
 80e583e:	8b 55 08             	mov    0x8(%ebp),%edx
 80e5841:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80e5844:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e5848:	89 04 24             	mov    %eax,(%esp)
 80e584b:	e8 a2 09 00 00       	call   80e61f2 <_ZNSt3mapIiP20ChattingEmoticonBaseSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 80e5850:	83 ec 04             	sub    $0x4,%esp
 80e5853:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5856:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e585a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80e585d:	89 04 24             	mov    %eax,(%esp)
 80e5860:	e8 c9 0d 00 00       	call   80e662e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEeqERKS5_>
 80e5865:	84 c0                	test   %al,%al
 80e5867:	74 07                	je     80e5870 <_ZN21CChattingEmoticonList13find_emoticonEi+0x54>
 80e5869:	b8 00 00 00 00       	mov    $0x0,%eax
 80e586e:	eb 0e                	jmp    80e587e <_ZN21CChattingEmoticonList13find_emoticonEi+0x62>
 80e5870:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e5873:	89 04 24             	mov    %eax,(%esp)
 80e5876:	e8 c7 0d 00 00       	call   80e6642 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP20ChattingEmoticonBaseEEptEv>
 80e587b:	8b 40 04             	mov    0x4(%eax),%eax
 80e587e:	c9                   	leave
 80e587f:	c3                   	ret

```

```c
// CChattingEmoticonList::find_emoticon @ 0x80e581c

/* CChattingEmoticonList::find_emoticon(int) */

undefined4 CChattingEmoticonList::find_emoticon(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator local_14 [4];
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  local_10 [12];
  
  std::
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  ::find((int *)local_14);
  std::
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_10,
                     local_14);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

