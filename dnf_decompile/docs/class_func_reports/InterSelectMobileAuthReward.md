# InterSelectMobileAuthReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0816132a InterSelectMobileAuthReward::dispatch_sig  [0x0816132a-0x81615ad] ===
 816132a:	55                   	push   %ebp
 816132b:	89 e5                	mov    %esp,%ebp
 816132d:	57                   	push   %edi
 816132e:	56                   	push   %esi
 816132f:	53                   	push   %ebx
 8161330:	81 ec ec 03 00 00    	sub    $0x3ec,%esp
 8161336:	8b 45 10             	mov    0x10(%ebp),%eax
 8161339:	89 45 e0             	mov    %eax,-0x20(%ebp)
 816133c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8161340:	75 36                	jne    8161378 <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x4e>
 8161342:	c7 44 24 10 6c 99 b7 	movl   $0x8b7996c,0x10(%esp)
 8161349:	08 
 816134a:	c7 44 24 0c 61 01 00 	movl   $0x161,0xc(%esp)
 8161351:	00 
 8161352:	c7 44 24 08 20 a9 b7 	movl   $0x8b7a920,0x8(%esp)
 8161359:	08 
 816135a:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8161361:	08 
 8161362:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8161369:	e8 9c 28 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816136e:	b8 62 01 00 00       	mov    $0x162,%eax
 8161373:	e9 2a 02 00 00       	jmp    81615a2 <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x278>
 8161378:	8b 45 e0             	mov    -0x20(%ebp),%eax
 816137b:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 816137f:	83 f0 01             	xor    $0x1,%eax
 8161382:	84 c0                	test   %al,%al
 8161384:	e9 04 02 00 00       	jmp    816158d <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x263>
 8161389:	00 8d 45 c4 89 04    	add    %cl,0x489c445(%ebp)
 816138f:	24 e8                	and    $0xe8,%al
 8161391:	41                   	inc    %ecx
 8161392:	36 fd                	ss std
 8161394:	ff c7                	inc    %edi
 8161396:	45                   	inc    %ebp
 8161397:	d8 01                	fadds  (%ecx)
 8161399:	00 00                	add    %al,(%eax)
 816139b:	00 c7                	add    %al,%bh
 816139d:	45                   	inc    %ebp
 816139e:	dc 3a                	fdivrl (%edx)
 81613a0:	98                   	cwtl
 81613a1:	28 00                	sub    %al,(%eax)
 81613a3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81613a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81613aa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81613ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81613b1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81613b4:	89 04 24             	mov    %eax,(%esp)
 81613b7:	e8 18 14 00 00       	call   81627d4 <_ZNSt4pairIiiEC1IiiEEOT_OT0_>
 81613bc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81613bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81613c3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81613c6:	89 04 24             	mov    %eax,(%esp)
 81613c9:	e8 38 c2 f7 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 81613ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81613d5:	00 
 81613d6:	c7 44 24 08 94 99 b7 	movl   $0x8b79994,0x8(%esp)
 81613dd:	08 
 81613de:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81613e5:	00 
 81613e6:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81613ed:	e8 0c 44 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81613f2:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81613f9:	00 
 81613fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81613fe:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 8161401:	89 04 24             	mov    %eax,(%esp)
 8161404:	e8 c7 c4 f1 ff       	call   807d8d0 <strncpy@plt>
 8161409:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8161410:	00 
 8161411:	c7 44 24 08 b8 99 b7 	movl   $0x8b799b8,0x8(%esp)
 8161418:	08 
 8161419:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8161420:	00 
 8161421:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8161428:	e8 d1 43 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 816142d:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 8161434:	00 
 8161435:	89 44 24 04          	mov    %eax,0x4(%esp)
 8161439:	8d 85 a6 fe ff ff    	lea    -0x15a(%ebp),%eax
 816143f:	89 04 24             	mov    %eax,(%esp)
 8161442:	e8 89 c4 f1 ff       	call   807d8d0 <strncpy@plt>
 8161447:	8d 85 44 fc ff ff    	lea    -0x3bc(%ebp),%eax
 816144d:	89 c3                	mov    %eax,%ebx
 816144f:	be 09 00 00 00       	mov    $0x9,%esi
 8161454:	eb 0e                	jmp    8161464 <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x13a>
 8161456:	89 1c 24             	mov    %ebx,(%esp)
 8161459:	e8 f6 a3 f6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 816145e:	83 c3 3d             	add    $0x3d,%ebx
 8161461:	83 ee 01             	sub    $0x1,%esi
 8161464:	83 fe ff             	cmp    $0xffffffff,%esi
 8161467:	0f 95 c0             	setne  %al
 816146a:	84 c0                	test   %al,%al
 816146c:	75 e8                	jne    8161456 <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x12c>
 816146e:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8161475:	00 
 8161476:	8d 85 44 fc ff ff    	lea    -0x3bc(%ebp),%eax
 816147c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8161480:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8161483:	89 04 24             	mov    %eax,(%esp)
 8161486:	e8 89 55 3f 00       	call   8556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>
 816148b:	8b 45 0c             	mov    0xc(%ebp),%eax
 816148e:	89 04 24             	mov    %eax,(%esp)
 8161491:	e8 fa a7 f6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8161496:	89 c6                	mov    %eax,%esi
 8161498:	8d 85 a6 fe ff ff    	lea    -0x15a(%ebp),%eax
 816149e:	89 04 24             	mov    %eax,(%esp)
 81614a1:	e8 0a cf f1 ff       	call   807e3b0 <strlen@plt>
 81614a6:	89 c7                	mov    %eax,%edi
 81614a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81614ab:	89 04 24             	mov    %eax,(%esp)
 81614ae:	e8 9b a7 f6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81614b3:	89 c3                	mov    %eax,%ebx
 81614b5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81614b8:	89 04 24             	mov    %eax,(%esp)
 81614bb:	e8 54 c3 f7 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81614c0:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81614c7:	00 
 81614c8:	89 74 24 20          	mov    %esi,0x20(%esp)
 81614cc:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81614d3:	00 
 81614d4:	89 7c 24 18          	mov    %edi,0x18(%esp)
 81614d8:	8d 95 a6 fe ff ff    	lea    -0x15a(%ebp),%edx
 81614de:	89 54 24 14          	mov    %edx,0x14(%esp)
 81614e2:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81614e6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81614ed:	00 
 81614ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 81614f2:	8d 85 44 fc ff ff    	lea    -0x3bc(%ebp),%eax
 81614f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81614fc:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 81614ff:	89 04 24             	mov    %eax,(%esp)
 8161502:	e8 61 56 3f 00       	call   8556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>
 8161507:	a1 30 f7 41 09       	mov    0x941f730,%eax
 816150c:	c7 44 24 04 a1 00 00 	movl   $0xa1,0x4(%esp)
 8161513:	00 
 8161514:	89 04 24             	mov    %eax,(%esp)
 8161517:	e8 7c 44 fb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 816151c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 816151f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8161523:	74 25                	je     816154a <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x220>
 8161525:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8161528:	8b 00                	mov    (%eax),%eax
 816152a:	83 c0 34             	add    $0x34,%eax
 816152d:	8b 10                	mov    (%eax),%edx
 816152f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8161532:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8161539:	00 
 816153a:	89 04 24             	mov    %eax,(%esp)
 816153d:	ff d2                	call   *%edx
 816153f:	84 c0                	test   %al,%al
 8161541:	74 07                	je     816154a <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x220>
 8161543:	b8 01 00 00 00       	mov    $0x1,%eax
 8161548:	eb 05                	jmp    816154f <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x225>
 816154a:	b8 00 00 00 00       	mov    $0x0,%eax
 816154f:	84 c0                	test   %al,%al
 8161551:	74 2f                	je     8161582 <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x258>
 8161553:	8b 45 0c             	mov    0xc(%ebp),%eax
 8161556:	89 44 24 04          	mov    %eax,0x4(%esp)
 816155a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 816155d:	89 04 24             	mov    %eax,(%esp)
 8161560:	e8 b9 31 00 00       	call   816471e <_ZN25CEventCeraShopRewardPoint10SendRewardEP5CUser>
 8161565:	eb 1b                	jmp    8161582 <_ZN27InterSelectMobileAuthReward12dispatch_sigEP5CUserPci+0x258>
 8161567:	89 d3                	mov    %edx,%ebx
 8161569:	89 c6                	mov    %eax,%esi
 816156b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816156e:	89 04 24             	mov    %eax,(%esp)
 8161571:	e8 74 34 fd ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8161576:	89 f0                	mov    %esi,%eax
 8161578:	89 da                	mov    %ebx,%edx
 816157a:	89 04 24             	mov    %eax,(%esp)
 816157d:	e8 ce 21 98 00       	call   8ae3750 <_Unwind_Resume>
 8161582:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8161585:	89 04 24             	mov    %eax,(%esp)
 8161588:	e8 5d 34 fd ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 816158d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8161590:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 8161594:	8b 45 0c             	mov    0xc(%ebp),%eax
 8161597:	88 90 31 ec 08 00    	mov    %dl,0x8ec31(%eax)
 816159d:	b8 00 00 00 00       	mov    $0x0,%eax
 81615a2:	81 c4 ec 03 00 00    	add    $0x3ec,%esp
 81615a8:	5b                   	pop    %ebx
 81615a9:	5e                   	pop    %esi
 81615aa:	5f                   	pop    %edi
 81615ab:	5d                   	pop    %ebp
 81615ac:	c3                   	ret
 81615ad:	90                   	nop

```

```c
// InterSelectMobileAuthReward::dispatch_sig @ 0x816132a

/* InterSelectMobileAuthReward::dispatch_sig(CUser*, char*, int) */

undefined4 InterSelectMobileAuthReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "virtual int InterSelectMobileAuthReward::dispatch_sig(CUser*, char*, int)",0x161,
               "[Taiwan, MobileAuth] interMsg is null.");
    uVar1 = 0x162;
  }
  else {
    param_2[0x8ec31] = *(char *)(param_3 + 4);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## makeRequest

```asm
// === 081615ae InterSelectMobileAuthReward::makeRequest  [0x081615ae-0x81616cd] ===
 81615ae:	55                   	push   %ebp
 81615af:	89 e5                	mov    %esp,%ebp
 81615b1:	56                   	push   %esi
 81615b2:	53                   	push   %ebx
 81615b3:	83 ec 40             	sub    $0x40,%esp
 81615b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81615b9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 81615bc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81615c1:	c7 44 24 08 86 01 00 	movl   $0x186,0x8(%esp)
 81615c8:	00 
 81615c9:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 81615d0:	08 
 81615d1:	89 04 24             	mov    %eax,(%esp)
 81615d4:	e8 ad e4 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81615d9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81615e0:	00 
 81615e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81615e5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81615e8:	89 04 24             	mov    %eax,(%esp)
 81615eb:	e8 36 76 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81615f0:	8b 45 08             	mov    0x8(%ebp),%eax
 81615f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81615f7:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 81615fe:	00 
 81615ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161602:	89 04 24             	mov    %eax,(%esp)
 8161605:	e8 46 23 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 816160a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816160d:	89 04 24             	mov    %eax,(%esp)
 8161610:	e8 39 76 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8161615:	89 04 24             	mov    %eax,(%esp)
 8161618:	e8 e5 11 00 00       	call   8162802 <_ZN12CStreamGuard11GetInBufferIN27InterSelectMobileAuthReward3MsgEEEPT_v>
 816161d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8161620:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8161624:	75 4b                	jne    8161671 <_ZN27InterSelectMobileAuthReward11makeRequestEijb+0xc3>
 8161626:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 816162a:	74 07                	je     8161633 <_ZN27InterSelectMobileAuthReward11makeRequestEijb+0x85>
 816162c:	b8 01 00 00 00       	mov    $0x1,%eax
 8161631:	eb 05                	jmp    8161638 <_ZN27InterSelectMobileAuthReward11makeRequestEijb+0x8a>
 8161633:	b8 00 00 00 00       	mov    $0x0,%eax
 8161638:	89 44 24 18          	mov    %eax,0x18(%esp)
 816163c:	8b 45 0c             	mov    0xc(%ebp),%eax
 816163f:	89 44 24 14          	mov    %eax,0x14(%esp)
 8161643:	c7 44 24 10 dc 99 b7 	movl   $0x8b799dc,0x10(%esp)
 816164a:	08 
 816164b:	c7 44 24 0c 8b 01 00 	movl   $0x18b,0xc(%esp)
 8161652:	00 
 8161653:	c7 44 24 08 c0 a8 b7 	movl   $0x8b7a8c0,0x8(%esp)
 816165a:	08 
 816165b:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8161662:	08 
 8161663:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816166a:	e8 9b 25 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816166f:	eb 4b                	jmp    81616bc <_ZN27InterSelectMobileAuthReward11makeRequestEijb+0x10e>
 8161671:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161674:	8b 55 0c             	mov    0xc(%ebp),%edx
 8161677:	89 10                	mov    %edx,(%eax)
 8161679:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816167c:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8161680:	88 50 04             	mov    %dl,0x4(%eax)
 8161683:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8161688:	8d 55 ec             	lea    -0x14(%ebp),%edx
 816168b:	89 54 24 08          	mov    %edx,0x8(%esp)
 816168f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8161696:	00 
 8161697:	89 04 24             	mov    %eax,(%esp)
 816169a:	e8 3f f9 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 816169f:	eb 1b                	jmp    81616bc <_ZN27InterSelectMobileAuthReward11makeRequestEijb+0x10e>
 81616a1:	89 d3                	mov    %edx,%ebx
 81616a3:	89 c6                	mov    %eax,%esi
 81616a5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81616a8:	89 04 24             	mov    %eax,(%esp)
 81616ab:	e8 22 b2 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81616b0:	89 f0                	mov    %esi,%eax
 81616b2:	89 da                	mov    %ebx,%edx
 81616b4:	89 04 24             	mov    %eax,(%esp)
 81616b7:	e8 94 20 98 00       	call   8ae3750 <_Unwind_Resume>
 81616bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81616bf:	89 04 24             	mov    %eax,(%esp)
 81616c2:	e8 0b b2 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81616c7:	83 c4 40             	add    $0x40,%esp
 81616ca:	5b                   	pop    %ebx
 81616cb:	5e                   	pop    %esi
 81616cc:	5d                   	pop    %ebp
 81616cd:	c3                   	ret

```

```c
// InterSelectMobileAuthReward::makeRequest @ 0x81615ae

/* InterSelectMobileAuthReward::makeRequest(int, unsigned int, bool) */

void InterSelectMobileAuthReward::makeRequest(int param_1,uint param_2,bool param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  Msg *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x186);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 08161605 to 0816169e has its CatchHandler @ 081616a1 */
  Taiwan::internal_stream(local_18,0xc,param_1);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<InterSelectMobileAuthReward::Msg>(this);
  if (local_10 == (Msg *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "static void InterSelectMobileAuthReward::makeRequest(int, memberIdentificationNumber_t, bool)"
               ,0x18b,"[Taiwan, MobileAuth] m_id:%d rewarded:%d",param_2,(uint)param_3);
  }
  else {
    *(uint *)local_10 = param_2;
    local_10[4] = (Msg)param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

