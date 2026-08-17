# Inter_LoadCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c3398 Inter_LoadCharac::dispatch_sig  [0x084c3398-0x84c3da4] ===
 84c3398:	55                   	push   %ebp
 84c3399:	89 e5                	mov    %esp,%ebp
 84c339b:	57                   	push   %edi
 84c339c:	56                   	push   %esi
 84c339d:	53                   	push   %ebx
 84c339e:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 84c33a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c33a7:	89 04 24             	mov    %eax,(%esp)
 84c33aa:	e8 dd 6f c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c33af:	85 c0                	test   %eax,%eax
 84c33b1:	0f 94 c0             	sete   %al
 84c33b4:	84 c0                	test   %al,%al
 84c33b6:	74 0a                	je     84c33c2 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x2a>
 84c33b8:	bb dd 13 00 00       	mov    $0x13dd,%ebx
 84c33bd:	e9 d6 09 00 00       	jmp    84c3d98 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0xa00>
 84c33c2:	8b 45 10             	mov    0x10(%ebp),%eax
 84c33c5:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84c33c8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c33cb:	8b 40 08             	mov    0x8(%eax),%eax
 84c33ce:	85 c0                	test   %eax,%eax
 84c33d0:	74 0a                	je     84c33dc <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x44>
 84c33d2:	bb e3 13 00 00       	mov    $0x13e3,%ebx
 84c33d7:	e9 bc 09 00 00       	jmp    84c3d98 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0xa00>
 84c33dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c33df:	89 04 24             	mov    %eax,(%esp)
 84c33e2:	e8 87 6f c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c33e7:	8b 55 b0             	mov    -0x50(%ebp),%edx
 84c33ea:	8b 92 40 01 00 00    	mov    0x140(%edx),%edx
 84c33f0:	39 d0                	cmp    %edx,%eax
 84c33f2:	0f 95 c0             	setne  %al
 84c33f5:	84 c0                	test   %al,%al
 84c33f7:	0f 84 30 01 00 00    	je     84c352d <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x195>
 84c33fd:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c3402:	c7 44 24 08 f9 13 00 	movl   $0x13f9,0x8(%esp)
 84c3409:	00 
 84c340a:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c3411:	08 
 84c3412:	89 04 24             	mov    %eax,(%esp)
 84c3415:	e8 6c c6 dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c341a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c3421:	00 
 84c3422:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3426:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c342c:	89 04 24             	mov    %eax,(%esp)
 84c342f:	e8 f2 57 c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c3434:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c343a:	89 04 24             	mov    %eax,(%esp)
 84c343d:	e8 04 58 c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c3442:	c7 44 24 04 9d 00 00 	movl   $0x9d,0x4(%esp)
 84c3449:	00 
 84c344a:	89 04 24             	mov    %eax,(%esp)
 84c344d:	e8 04 58 c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c3452:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c3458:	89 04 24             	mov    %eax,(%esp)
 84c345b:	e8 e6 57 c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c3460:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c3467:	ff 
 84c3468:	89 04 24             	mov    %eax,(%esp)
 84c346b:	e8 e6 57 c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c3470:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c3476:	89 04 24             	mov    %eax,(%esp)
 84c3479:	e8 d0 57 c0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84c347e:	89 04 24             	mov    %eax,(%esp)
 84c3481:	e8 f2 e0 02 00       	call   84f1578 <_ZN12CStreamGuard11GetInBufferI39SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACKEEPT_v>
 84c3486:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84c3489:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c348c:	89 04 24             	mov    %eax,(%esp)
 84c348f:	e8 da 6e c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c3494:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84c3497:	89 02                	mov    %eax,(%edx)
 84c3499:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c349c:	8b 90 40 01 00 00    	mov    0x140(%eax),%edx
 84c34a2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84c34a5:	89 50 04             	mov    %edx,0x4(%eax)
 84c34a8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c34ab:	8b 40 0c             	mov    0xc(%eax),%eax
 84c34ae:	89 c2                	mov    %eax,%edx
 84c34b0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84c34b3:	89 50 08             	mov    %edx,0x8(%eax)
 84c34b6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84c34b9:	8d 50 0c             	lea    0xc(%eax),%edx
 84c34bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c34bf:	05 e0 00 00 00       	add    $0xe0,%eax
 84c34c4:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84c34cb:	00 
 84c34cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c34d0:	89 04 24             	mov    %eax,(%esp)
 84c34d3:	e8 56 f3 c9 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c34d8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c34dd:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84c34e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c34e7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84c34ee:	00 
 84c34ef:	89 04 24             	mov    %eax,(%esp)
 84c34f2:	e8 e7 da 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c34f7:	bb 05 14 00 00       	mov    $0x1405,%ebx
 84c34fc:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c3502:	89 04 24             	mov    %eax,(%esp)
 84c3505:	e8 c8 93 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c350a:	e9 89 08 00 00       	jmp    84c3d98 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0xa00>
 84c350f:	89 d3                	mov    %edx,%ebx
 84c3511:	89 c6                	mov    %eax,%esi
 84c3513:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c3519:	89 04 24             	mov    %eax,(%esp)
 84c351c:	e8 b1 93 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c3521:	89 f0                	mov    %esi,%eax
 84c3523:	89 da                	mov    %ebx,%edx
 84c3525:	89 04 24             	mov    %eax,(%esp)
 84c3528:	e8 23 02 62 00       	call   8ae3750 <_Unwind_Resume>
 84c352d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3530:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 84c3534:	84 c0                	test   %al,%al
 84c3536:	75 0a                	jne    84c3542 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x1aa>
 84c3538:	bb 0b 14 00 00       	mov    $0x140b,%ebx
 84c353d:	e9 56 08 00 00       	jmp    84c3d98 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0xa00>
 84c3542:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3545:	8b 40 04             	mov    0x4(%eax),%eax
 84c3548:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c354c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c354f:	89 04 24             	mov    %eax,(%esp)
 84c3552:	e8 bb a9 18 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84c3557:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84c355a:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 84c355e:	78 2d                	js     84c358d <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x1f5>
 84c3560:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3563:	8d 50 0c             	lea    0xc(%eax),%edx
 84c3566:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3569:	8b 40 04             	mov    0x4(%eax),%eax
 84c356c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c3570:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c3574:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84c3577:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c357b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c357e:	89 04 24             	mov    %eax,(%esp)
 84c3581:	e8 94 76 18 00       	call   864ac1a <_ZN5CUser19setCharacInfoDetailEijP11CHARAC_DATA>
 84c3586:	83 f0 01             	xor    $0x1,%eax
 84c3589:	84 c0                	test   %al,%al
 84c358b:	74 07                	je     84c3594 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x1fc>
 84c358d:	b8 01 00 00 00       	mov    $0x1,%eax
 84c3592:	eb 05                	jmp    84c3599 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x201>
 84c3594:	b8 00 00 00 00       	mov    $0x0,%eax
 84c3599:	84 c0                	test   %al,%al
 84c359b:	74 0a                	je     84c35a7 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x20f>
 84c359d:	bb 15 14 00 00       	mov    $0x1415,%ebx
 84c35a2:	e9 f1 07 00 00       	jmp    84c3d98 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0xa00>
 84c35a7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c35aa:	8b 80 86 06 00 00    	mov    0x686(%eax),%eax
 84c35b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c35b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c35b7:	89 04 24             	mov    %eax,(%esp)
 84c35ba:	e8 53 a9 18 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84c35bf:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84c35c2:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c35c5:	8b 80 86 06 00 00    	mov    0x686(%eax),%eax
 84c35cb:	85 c0                	test   %eax,%eax
 84c35cd:	0f 84 81 00 00 00    	je     84c3654 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x2bc>
 84c35d3:	83 7d b8 ff          	cmpl   $0xffffffff,-0x48(%ebp)
 84c35d7:	74 7b                	je     84c3654 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x2bc>
 84c35d9:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 84c35dd:	78 33                	js     84c3612 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x27a>
 84c35df:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c35e2:	8d 90 8b 06 00 00    	lea    0x68b(%eax),%edx
 84c35e8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c35eb:	8b 80 86 06 00 00    	mov    0x686(%eax),%eax
 84c35f1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c35f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c35f9:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84c35fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3600:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3603:	89 04 24             	mov    %eax,(%esp)
 84c3606:	e8 8d ca 1c 00       	call   8690098 <_ZN5CUser16setTagCharacInfoEijP15TAG_CHARAC_DATA>
 84c360b:	83 f0 01             	xor    $0x1,%eax
 84c360e:	84 c0                	test   %al,%al
 84c3610:	74 07                	je     84c3619 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x281>
 84c3612:	b8 01 00 00 00       	mov    $0x1,%eax
 84c3617:	eb 05                	jmp    84c361e <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x286>
 84c3619:	b8 00 00 00 00       	mov    $0x0,%eax
 84c361e:	84 c0                	test   %al,%al
 84c3620:	74 0a                	je     84c362c <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x294>
 84c3622:	bb 1f 14 00 00       	mov    $0x141f,%ebx
 84c3627:	e9 6c 07 00 00       	jmp    84c3d98 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0xa00>
 84c362c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84c362f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c3632:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84c3638:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c363c:	89 14 24             	mov    %edx,(%esp)
 84c363f:	e8 74 d5 cd ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84c3644:	8b 55 b0             	mov    -0x50(%ebp),%edx
 84c3647:	0f b6 92 8a 06 00 00 	movzbl 0x68a(%edx),%edx
 84c364e:	88 90 b7 14 00 00    	mov    %dl,0x14b7(%eax)
 84c3654:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84c3657:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c365b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84c365e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3662:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3665:	89 04 24             	mov    %eax,(%esp)
 84c3668:	e8 25 97 18 00       	call   864cd92 <_ZN5CUser12SelectCharacEii>
 84c366d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3670:	89 04 24             	mov    %eax,(%esp)
 84c3673:	e8 70 ca d6 ff       	call   82300e8 <_ZN5CUser16get_charac_countEv>
 84c3678:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84c367b:	0f be d2             	movsbl %dl,%edx
 84c367e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c3682:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c3686:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3689:	89 04 24             	mov    %eax,(%esp)
 84c368c:	e8 75 f4 18 00       	call   8652b06 <_ZN5CUser27decideLinkCharacSlotIndexesEci>
 84c3691:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3694:	89 04 24             	mov    %eax,(%esp)
 84c3697:	e8 4c ca d6 ff       	call   82300e8 <_ZN5CUser16get_charac_countEv>
 84c369c:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84c369f:	0f be d2             	movsbl %dl,%edx
 84c36a2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c36a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c36aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c36ad:	89 04 24             	mov    %eax,(%esp)
 84c36b0:	e8 db f4 18 00       	call   8652b90 <_ZN5CUser19checkCharacLinkTypeEci>
 84c36b5:	83 f0 01             	xor    $0x1,%eax
 84c36b8:	84 c0                	test   %al,%al
 84c36ba:	74 68                	je     84c3724 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x38c>
 84c36bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c36bf:	89 04 24             	mov    %eax,(%esp)
 84c36c2:	e8 a7 6c c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c36c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c36ce:	00 
 84c36cf:	89 04 24             	mov    %eax,(%esp)
 84c36d2:	e8 74 59 c4 ff       	call   810904b <_Z14NumberToStringji>
 84c36d7:	89 c3                	mov    %eax,%ebx
 84c36d9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84c36e0:	00 
 84c36e1:	c7 44 24 08 30 14 00 	movl   $0x1430,0x8(%esp)
 84c36e8:	00 
 84c36e9:	c7 44 24 04 c0 e0 c8 	movl   $0x8c8e0c0,0x4(%esp)
 84c36f0:	08 
 84c36f1:	8d 45 80             	lea    -0x80(%ebp),%eax
 84c36f4:	89 04 24             	mov    %eax,(%esp)
 84c36f7:	e8 1c c0 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c36fc:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84c36ff:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c3703:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c3707:	c7 44 24 04 8c 72 c8 	movl   $0x8c8728c,0x4(%esp)
 84c370e:	08 
 84c370f:	8d 45 80             	lea    -0x80(%ebp),%eax
 84c3712:	89 04 24             	mov    %eax,(%esp)
 84c3715:	e8 6e c0 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c371a:	bb 31 14 00 00       	mov    $0x1431,%ebx
 84c371f:	e9 74 06 00 00       	jmp    84c3d98 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0xa00>
 84c3724:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84c3727:	0f be c0             	movsbl %al,%eax
 84c372a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c372e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3731:	89 04 24             	mov    %eax,(%esp)
 84c3734:	e8 19 96 02 00       	call   84ecd52 <_ZN5CUser24isCharacLinkBonusSettingEc>
 84c3739:	84 c0                	test   %al,%al
 84c373b:	74 1a                	je     84c3757 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x3bf>
 84c373d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c3744:	00 
 84c3745:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84c3748:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c374c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c374f:	89 04 24             	mov    %eax,(%esp)
 84c3752:	e8 5f 96 02 00       	call   84ecdb6 <_ZN5CUser25setCharacLinkBonusSettingEib>
 84c3757:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c375a:	0f b7 80 28 01 00 00 	movzwl 0x128(%eax),%eax
 84c3761:	0f bf d0             	movswl %ax,%edx
 84c3764:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3767:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c376b:	89 04 24             	mov    %eax,(%esp)
 84c376e:	e8 c3 bf d6 ff       	call   822f736 <_ZN15CUserCharacInfo19SetCurCharacEmotionEs>
 84c3773:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3776:	0f b6 80 2b 01 00 00 	movzbl 0x12b(%eax),%eax
 84c377d:	84 c0                	test   %al,%al
 84c377f:	78 0e                	js     84c378f <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x3f7>
 84c3781:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3784:	0f b6 80 2b 01 00 00 	movzbl 0x12b(%eax),%eax
 84c378b:	3c 03                	cmp    $0x3,%al
 84c378d:	7e 15                	jle    84c37a4 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x40c>
 84c378f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3792:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3799:	00 
 84c379a:	89 04 24             	mov    %eax,(%esp)
 84c379d:	e8 aa 8c 02 00       	call   84ec44c <_ZN15CUserCharacInfo22SetCurExpEquipSlotStatEc>
 84c37a2:	eb 1c                	jmp    84c37c0 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x428>
 84c37a4:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c37a7:	0f b6 80 2b 01 00 00 	movzbl 0x12b(%eax),%eax
 84c37ae:	0f be d0             	movsbl %al,%edx
 84c37b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c37b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c37b8:	89 04 24             	mov    %eax,(%esp)
 84c37bb:	e8 8c 8c 02 00       	call   84ec44c <_ZN15CUserCharacInfo22SetCurExpEquipSlotStatEc>
 84c37c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c37c3:	89 04 24             	mov    %eax,(%esp)
 84c37c6:	e8 a1 bc d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84c37cb:	85 c0                	test   %eax,%eax
 84c37cd:	0f 95 c0             	setne  %al
 84c37d0:	84 c0                	test   %al,%al
 84c37d2:	74 67                	je     84c383b <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x4a3>
 84c37d4:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 84c37da:	89 04 24             	mov    %eax,(%esp)
 84c37dd:	e8 fc 0c d7 ff       	call   82344de <_ZN12STGuildProxyC1Ev>
 84c37e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c37e5:	89 04 24             	mov    %eax,(%esp)
 84c37e8:	e8 7f bc d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84c37ed:	89 c3                	mov    %eax,%ebx
 84c37ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c37f2:	89 04 24             	mov    %eax,(%esp)
 84c37f5:	e8 96 84 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c37fa:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84c3800:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3804:	89 14 24             	mov    %edx,(%esp)
 84c3807:	e8 ac 9b c5 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84c380c:	8d 95 56 ff ff ff    	lea    -0xaa(%ebp),%edx
 84c3812:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c3816:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c381a:	89 04 24             	mov    %eax,(%esp)
 84c381d:	e8 98 b3 fa ff       	call   846ebba <_ZN17CGuildServerProxy17GetGuildInfoProxyEjR12STGuildProxy>
 84c3822:	84 c0                	test   %al,%al
 84c3824:	74 15                	je     84c383b <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x4a3>
 84c3826:	8d 85 56 ff ff ff    	lea    -0xaa(%ebp),%eax
 84c382c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3830:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3833:	89 04 24             	mov    %eax,(%esp)
 84c3836:	e8 cf 94 19 00       	call   865cd0a <_ZN5CUser17SetGuildInfoProxyER12STGuildProxy>
 84c383b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c383e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3845:	00 
 84c3846:	89 04 24             	mov    %eax,(%esp)
 84c3849:	e8 00 52 19 00       	call   8658a4e <_ZN15CUserCharacInfo26calc_disp_help_abuse_ratioEi>
 84c384e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c3851:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3855:	89 14 24             	mov    %edx,(%esp)
 84c3858:	e8 05 bb d6 ff       	call   822f362 <_ZN15CUserCharacInfo34setCurCharacHelpAbuseComputedRatioEj>
 84c385d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3864:	00 
 84c3865:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3868:	89 04 24             	mov    %eax,(%esp)
 84c386b:	e8 84 1b c6 ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 84c3870:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3873:	8b 40 04             	mov    0x4(%eax),%eax
 84c3876:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c387a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c387d:	89 04 24             	mov    %eax,(%esp)
 84c3880:	e8 27 1a 09 00       	call   85552ac <_ZN8WongWork14CMailBoxHelper13ReqDBLoadMailEP5CUserj>
 84c3885:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3888:	89 04 24             	mov    %eax,(%esp)
 84c388b:	e8 de 6a c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c3890:	89 c3                	mov    %eax,%ebx
 84c3892:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3895:	8d 70 10             	lea    0x10(%eax),%esi
 84c3898:	e8 0a 6b c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c389d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c38a1:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c38a5:	89 04 24             	mov    %eax,(%esp)
 84c38a8:	e8 bb 9c 20 00       	call   86cd568 <_ZN9GameWorld17InsertUserToIDMapEPKcj>
 84c38ad:	83 f0 01             	xor    $0x1,%eax
 84c38b0:	84 c0                	test   %al,%al
 84c38b2:	74 61                	je     84c3915 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x57d>
 84c38b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c38b7:	89 04 24             	mov    %eax,(%esp)
 84c38ba:	e8 af 6a c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c38bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c38c6:	00 
 84c38c7:	89 04 24             	mov    %eax,(%esp)
 84c38ca:	e8 7c 57 c4 ff       	call   810904b <_Z14NumberToStringji>
 84c38cf:	89 c3                	mov    %eax,%ebx
 84c38d1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c38d4:	8d 70 10             	lea    0x10(%eax),%esi
 84c38d7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84c38de:	00 
 84c38df:	c7 44 24 08 64 14 00 	movl   $0x1464,0x8(%esp)
 84c38e6:	00 
 84c38e7:	c7 44 24 04 c0 e0 c8 	movl   $0x8c8e0c0,0x4(%esp)
 84c38ee:	08 
 84c38ef:	8d 45 90             	lea    -0x70(%ebp),%eax
 84c38f2:	89 04 24             	mov    %eax,(%esp)
 84c38f5:	e8 1e be 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c38fa:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84c38fe:	89 74 24 08          	mov    %esi,0x8(%esp)
 84c3902:	c7 44 24 04 c8 72 c8 	movl   $0x8c872c8,0x4(%esp)
 84c3909:	08 
 84c390a:	8d 45 90             	lea    -0x70(%ebp),%eax
 84c390d:	89 04 24             	mov    %eax,(%esp)
 84c3910:	e8 73 be 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c3915:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c391c:	e8 7d 83 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c3921:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 84c3927:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84c392d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3931:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84c3937:	89 04 24             	mov    %eax,(%esp)
 84c393a:	e8 21 aa bb ff       	call   807e360 <localtime_r@plt>
 84c393f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84c3942:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84c3945:	8b 40 14             	mov    0x14(%eax),%eax
 84c3948:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84c394b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84c394e:	8b 40 10             	mov    0x10(%eax),%eax
 84c3951:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84c3954:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84c3957:	8b 40 0c             	mov    0xc(%eax),%eax
 84c395a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84c395d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3960:	89 04 24             	mov    %eax,(%esp)
 84c3963:	e8 6a b5 1c 00       	call   868eed2 <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv>
 84c3968:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 84c396e:	39 d0                	cmp    %edx,%eax
 84c3970:	0f 9e c0             	setle  %al
 84c3973:	84 c0                	test   %al,%al
 84c3975:	74 3b                	je     84c39b2 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x61a>
 84c3977:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c397a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3981:	00 
 84c3982:	89 04 24             	mov    %eax,(%esp)
 84c3985:	e8 a6 d2 e2 ff       	call   82f0c30 <_ZN15CUserCharacInfo17SetCurCharacGhostEb>
 84c398a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c398d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3994:	00 
 84c3995:	89 04 24             	mov    %eax,(%esp)
 84c3998:	e8 67 d2 e2 ff       	call   82f0c04 <_ZN15CUserCharacInfo24SetCurCharacChaosDieTimeEi>
 84c399d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c39a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c39a7:	00 
 84c39a8:	89 04 24             	mov    %eax,(%esp)
 84c39ab:	e8 44 b5 1c 00       	call   868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>
 84c39b0:	eb 63                	jmp    84c3a15 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x67d>
 84c39b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c39b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c39bc:	00 
 84c39bd:	89 04 24             	mov    %eax,(%esp)
 84c39c0:	e8 6b d2 e2 ff       	call   82f0c30 <_ZN15CUserCharacInfo17SetCurCharacGhostEb>
 84c39c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c39c8:	89 04 24             	mov    %eax,(%esp)
 84c39cb:	e8 02 b5 1c 00       	call   868eed2 <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv>
 84c39d0:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 84c39d6:	29 d0                	sub    %edx,%eax
 84c39d8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84c39db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c39de:	89 04 24             	mov    %eax,(%esp)
 84c39e1:	e8 ec b4 1c 00       	call   868eed2 <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv>
 84c39e6:	89 c3                	mov    %eax,%ebx
 84c39e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c39eb:	89 04 24             	mov    %eax,(%esp)
 84c39ee:	e8 95 d1 e2 ff       	call   82f0b88 <_ZN15CUserCharacInfo24GetCurCharacChaosDieTimeEv>
 84c39f3:	89 da                	mov    %ebx,%edx
 84c39f5:	29 c2                	sub    %eax,%edx
 84c39f7:	89 d0                	mov    %edx,%eax
 84c39f9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84c39fc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84c39ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c3a03:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c3a06:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3a0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3a0d:	89 04 24             	mov    %eax,(%esp)
 84c3a10:	e8 2d c5 e2 ff       	call   82eff42 <_ZN11pvp_assault11CAssaultMgr15NotifyGhostTimeEP5CUserii>
 84c3a15:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3a18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3a1f:	00 
 84c3a20:	89 04 24             	mov    %eax,(%esp)
 84c3a23:	e8 58 d3 e2 ff       	call   82f0d80 <_ZN15CUserCharacInfo24SetCurCharacLeaveTimeoutEb>
 84c3a28:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c3a2f:	e8 6a 82 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c3a34:	89 c6                	mov    %eax,%esi
 84c3a36:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3a39:	89 04 24             	mov    %eax,(%esp)
 84c3a3c:	e8 69 2c de ff       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 84c3a41:	89 c3                	mov    %eax,%ebx
 84c3a43:	e8 39 87 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c3a48:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84c3a4e:	89 74 24 08          	mov    %esi,0x8(%esp)
 84c3a52:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c3a56:	89 04 24             	mov    %eax,(%esp)
 84c3a59:	e8 4a 86 fa ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84c3a5e:	84 c0                	test   %al,%al
 84c3a60:	74 13                	je     84c3a75 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x6dd>
 84c3a62:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3a65:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3a6c:	00 
 84c3a6d:	89 04 24             	mov    %eax,(%esp)
 84c3a70:	e8 8d 85 02 00       	call   84ec002 <_ZN15CUserCharacInfo26setCurCharacTradeGoldDailyEj>
 84c3a75:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3a78:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3a7f:	00 
 84c3a80:	89 04 24             	mov    %eax,(%esp)
 84c3a83:	e8 84 88 02 00       	call   84ec30c <_ZN15CUserCharacInfo36SetCurCharacLuckPointUpdateTimeCountEi>
 84c3a88:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3a8b:	89 04 24             	mov    %eax,(%esp)
 84c3a8e:	e8 17 2c de ff       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 84c3a93:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 84c3a99:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 84c3a9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3aa3:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84c3aa9:	89 04 24             	mov    %eax,(%esp)
 84c3aac:	e8 af a8 bb ff       	call   807e360 <localtime_r@plt>
 84c3ab1:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84c3ab4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c3ab7:	8b 40 14             	mov    0x14(%eax),%eax
 84c3aba:	3b 45 c0             	cmp    -0x40(%ebp),%eax
 84c3abd:	75 16                	jne    84c3ad5 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x73d>
 84c3abf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c3ac2:	8b 40 10             	mov    0x10(%eax),%eax
 84c3ac5:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 84c3ac8:	75 0b                	jne    84c3ad5 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x73d>
 84c3aca:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84c3acd:	8b 40 0c             	mov    0xc(%eax),%eax
 84c3ad0:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 84c3ad3:	74 24                	je     84c3af9 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x761>
 84c3ad5:	e8 15 9b 14 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 84c3ada:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c3ae1:	00 
 84c3ae2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c3ae5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c3ae9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c3af0:	00 
 84c3af1:	89 04 24             	mov    %eax,(%esp)
 84c3af4:	e8 89 9b 14 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 84c3af9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3afc:	89 04 24             	mov    %eax,(%esp)
 84c3aff:	e8 a8 8d 02 00       	call   84ec8ac <_ZN5CUser20fillUserInfo4AntibotEv>
 84c3b04:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3b07:	89 04 24             	mov    %eax,(%esp)
 84c3b0a:	e8 db 8d 02 00       	call   84ec8ea <_ZN5CUser19getUserInfo4AntibotEv>
 84c3b0f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84c3b12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3b15:	89 04 24             	mov    %eax,(%esp)
 84c3b18:	e8 55 d5 c3 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84c3b1d:	89 04 24             	mov    %eax,(%esp)
 84c3b20:	e8 d5 55 c4 ff       	call   81090fa <_Z14StringToNumberPKc>
 84c3b25:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 84c3b2b:	c7 85 b8 fe ff ff ff 	movl   $0xffffffff,-0x148(%ebp)
 84c3b32:	ff ff ff 
 84c3b35:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c3b38:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 84c3b3f:	00 
 84c3b40:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3b44:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 84c3b4a:	83 c0 08             	add    $0x8,%eax
 84c3b4d:	89 04 24             	mov    %eax,(%esp)
 84c3b50:	e8 7b 9d bb ff       	call   807d8d0 <strncpy@plt>
 84c3b55:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 84c3b5a:	8b 00                	mov    (%eax),%eax
 84c3b5c:	83 c0 38             	add    $0x38,%eax
 84c3b5f:	8b 30                	mov    (%eax),%esi
 84c3b61:	8d 9d b4 fe ff ff    	lea    -0x14c(%ebp),%ebx
 84c3b67:	e8 15 86 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c3b6c:	89 04 24             	mov    %eax,(%esp)
 84c3b6f:	e8 a2 09 d7 ff       	call   8234516 <_ZNK12CEnvironment18getProcessSequenceEv>
 84c3b74:	8b 15 e4 f7 41 09    	mov    0x941f7e4,%edx
 84c3b7a:	c7 44 24 14 48 00 00 	movl   $0x48,0x14(%esp)
 84c3b81:	00 
 84c3b82:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84c3b86:	c7 44 24 0c a1 86 01 	movl   $0x186a1,0xc(%esp)
 84c3b8d:	00 
 84c3b8e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c3b95:	00 
 84c3b96:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3b9a:	89 14 24             	mov    %edx,(%esp)
 84c3b9d:	ff d6                	call   *%esi
 84c3b9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3ba2:	89 04 24             	mov    %eax,(%esp)
 84c3ba5:	e8 88 c8 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c3baa:	8b 40 7b             	mov    0x7b(%eax),%eax
 84c3bad:	85 c0                	test   %eax,%eax
 84c3baf:	0f 95 c0             	setne  %al
 84c3bb2:	84 c0                	test   %al,%al
 84c3bb4:	0f 84 01 01 00 00    	je     84c3cbb <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x923>
 84c3bba:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c3bc1:	e8 d8 80 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c3bc6:	89 c3                	mov    %eax,%ebx
 84c3bc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3bcb:	89 04 24             	mov    %eax,(%esp)
 84c3bce:	e8 5f c8 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c3bd3:	8b 70 7b             	mov    0x7b(%eax),%esi
 84c3bd6:	e8 a6 85 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c3bdb:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84c3be1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c3be5:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c3be9:	89 04 24             	mov    %eax,(%esp)
 84c3bec:	e8 53 85 fa ff       	call   846c144 <_Z23ComputeDaysScheduleTimeill>
 84c3bf1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c3bf4:	e8 a2 85 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c3bf9:	8b 80 b4 a6 00 00    	mov    0xa6b4(%eax),%eax
 84c3bff:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c3c02:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84c3c06:	0f 8e af 00 00 00    	jle    84c3cbb <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x923>
 84c3c0c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c3c0f:	89 c2                	mov    %eax,%edx
 84c3c11:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c3c14:	0f af c2             	imul   %edx,%eax
 84c3c17:	0f bf d0             	movswl %ax,%edx
 84c3c1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3c1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c3c21:	89 04 24             	mov    %eax,(%esp)
 84c3c24:	e8 3d 43 1c 00       	call   8687f66 <_ZN15CUserCharacInfo21DecreasePowerWarPointEs>
 84c3c29:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c3c2c:	89 c2                	mov    %eax,%edx
 84c3c2e:	0f af 55 e4          	imul   -0x1c(%ebp),%edx
 84c3c32:	89 95 a4 fe ff ff    	mov    %edx,-0x15c(%ebp)
 84c3c38:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c3c3f:	e8 5a 80 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c3c44:	89 c3                	mov    %eax,%ebx
 84c3c46:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3c49:	89 04 24             	mov    %eax,(%esp)
 84c3c4c:	e8 e1 c7 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c3c51:	8b 78 7b             	mov    0x7b(%eax),%edi
 84c3c54:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3c57:	89 04 24             	mov    %eax,(%esp)
 84c3c5a:	e8 d3 c7 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c3c5f:	8b 30                	mov    (%eax),%esi
 84c3c61:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c3c68:	00 
 84c3c69:	c7 44 24 08 e4 14 00 	movl   $0x14e4,0x8(%esp)
 84c3c70:	00 
 84c3c71:	c7 44 24 04 c0 e0 c8 	movl   $0x8c8e0c0,0x4(%esp)
 84c3c78:	08 
 84c3c79:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84c3c7c:	89 04 24             	mov    %eax,(%esp)
 84c3c7f:	e8 94 ba 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c3c84:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 84c3c8a:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84c3c8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c3c91:	89 44 24 18          	mov    %eax,0x18(%esp)
 84c3c95:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c3c98:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c3c9c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84c3ca0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84c3ca4:	89 74 24 08          	mov    %esi,0x8(%esp)
 84c3ca8:	c7 44 24 04 ec 72 c8 	movl   $0x8c872ec,0x4(%esp)
 84c3caf:	08 
 84c3cb0:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84c3cb3:	89 04 24             	mov    %eax,(%esp)
 84c3cb6:	e8 cd ba 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c3cbb:	a1 50 be 40 09       	mov    0x940be50,%eax
 84c3cc0:	89 04 24             	mov    %eax,(%esp)
 84c3cc3:	e8 48 bc fb ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 84c3cc8:	83 f0 01             	xor    $0x1,%eax
 84c3ccb:	84 c0                	test   %al,%al
 84c3ccd:	74 39                	je     84c3d08 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x970>
 84c3ccf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3cd2:	89 04 24             	mov    %eax,(%esp)
 84c3cd5:	e8 2e 87 02 00       	call   84ec408 <_ZN15CUserCharacInfo23GetPowerWarAssaultCountEv>
 84c3cda:	85 c0                	test   %eax,%eax
 84c3cdc:	75 0f                	jne    84c3ced <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x955>
 84c3cde:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3ce1:	89 04 24             	mov    %eax,(%esp)
 84c3ce4:	e8 41 87 02 00       	call   84ec42a <_ZN15CUserCharacInfo30GetPowerWarAssaultVictoryCountEv>
 84c3ce9:	85 c0                	test   %eax,%eax
 84c3ceb:	74 07                	je     84c3cf4 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x95c>
 84c3ced:	b8 01 00 00 00       	mov    $0x1,%eax
 84c3cf2:	eb 05                	jmp    84c3cf9 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x961>
 84c3cf4:	b8 00 00 00 00       	mov    $0x0,%eax
 84c3cf9:	84 c0                	test   %al,%al
 84c3cfb:	74 0b                	je     84c3d08 <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x970>
 84c3cfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3d00:	89 04 24             	mov    %eax,(%esp)
 84c3d03:	e8 c2 86 02 00       	call   84ec3ca <_ZN15CUserCharacInfo26ResetPowerWarAssaultRecordEv>
 84c3d08:	e8 8e 84 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c3d0d:	89 04 24             	mov    %eax,(%esp)
 84c3d10:	e8 4d ce c4 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84c3d15:	c7 44 24 04 9b 01 00 	movl   $0x19b,0x4(%esp)
 84c3d1c:	00 
 84c3d1d:	89 04 24             	mov    %eax,(%esp)
 84c3d20:	e8 11 7d c4 ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 84c3d25:	84 c0                	test   %al,%al
 84c3d27:	74 43                	je     84c3d6c <_ZN16Inter_LoadCharac12dispatch_sigEP5CUserPci+0x9d4>
 84c3d29:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3d2c:	0f b6 80 39 01 00 00 	movzbl 0x139(%eax),%eax
 84c3d33:	0f b6 d0             	movzbl %al,%edx
 84c3d36:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3d39:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c3d3d:	89 04 24             	mov    %eax,(%esp)
 84c3d40:	e8 53 87 02 00       	call   84ec498 <_ZN15CUserCharacInfo29setCurUseBringUpMaterialTotalEh>
 84c3d45:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3d48:	0f b6 80 38 01 00 00 	movzbl 0x138(%eax),%eax
 84c3d4f:	0f b6 d0             	movzbl %al,%edx
 84c3d52:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3d55:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c3d59:	89 04 24             	mov    %eax,(%esp)
 84c3d5c:	e8 39 d0 c4 ff       	call   8110d9a <_ZN15CUserCharacInfo20setBringUpRewardFlagEb>
 84c3d61:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3d64:	89 04 24             	mov    %eax,(%esp)
 84c3d67:	e8 fc 5b 1c 00       	call   8689968 <_ZN5CUser20SendEventBringUpInfoEv>
 84c3d6c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c3d6f:	0f b6 80 3a 01 00 00 	movzbl 0x13a(%eax),%eax
 84c3d76:	0f be c0             	movsbl %al,%eax
 84c3d79:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3d7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3d80:	89 04 24             	mov    %eax,(%esp)
 84c3d83:	e8 8c 81 1c 00       	call   868bf14 <_ZN5CUser32select_charac_set_visible_valuesEc>
 84c3d88:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3d8b:	89 04 24             	mov    %eax,(%esp)
 84c3d8e:	e8 ed 99 1c 00       	call   868d780 <_ZN5CUser33decide_growth_power_reward_systemEv>
 84c3d93:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c3d98:	89 d8                	mov    %ebx,%eax
 84c3d9a:	81 c4 7c 01 00 00    	add    $0x17c,%esp
 84c3da0:	5b                   	pop    %ebx
 84c3da1:	5e                   	pop    %esi
 84c3da2:	5f                   	pop    %edi
 84c3da3:	5d                   	pop    %ebp
 84c3da4:	c3                   	ret

```

```c
// Inter_LoadCharac::dispatch_sig @ 0x84c3398

/* Inter_LoadCharac::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCharac::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  CGuildServerProxy *this;
  GameWorld *this_00;
  long lVar10;
  long lVar11;
  CValueStatistic *pCVar12;
  char *pcVar13;
  CEnvironment *this_01;
  undefined4 uVar14;
  undefined4 *puVar15;
  CDataManager *this_02;
  CEventScriptMng *this_03;
  int iVar16;
  undefined4 local_150;
  undefined4 local_14c;
  char acStack_148 [64];
  tm local_108;
  tm local_dc;
  STGuildProxy local_ae [26];
  CStreamGuard local_94 [8];
  time_t local_8c;
  int local_88;
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  int local_54;
  uint local_50;
  int local_4c;
  tm *local_48;
  int local_44;
  int local_40;
  int local_3c;
  tm *local_38;
  char *local_34;
  SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACK *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (iVar5 == 0) {
    return 0x13dd;
  }
  local_54 = param_3;
  if (*(int *)(param_3 + 8) != 0) {
    return 0x13e3;
  }
  iVar5 = CUser::get_acc_id((CUser *)param_2);
  if (iVar5 != *(int *)(local_54 + 0x140)) {
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x13f9);
    CStreamGuard::CStreamGuard(local_94,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_94);
                    /* try { // try from 084c344d to 084c34f6 has its CatchHandler @ 084c350f */
    CStreamGuard::operator<<(pCVar7,0x9d);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_94);
    CStreamGuard::operator<<(pCVar7,-1);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_94);
    local_30 = CStreamGuard::GetInBuffer<SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACK>(pCVar7);
    uVar8 = CUser::get_acc_id((CUser *)param_2);
    *(undefined4 *)local_30 = uVar8;
    *(undefined4 *)(local_30 + 4) = *(undefined4 *)(local_54 + 0x140);
    *(undefined4 *)(local_30 + 8) = *(undefined4 *)(local_54 + 0xc);
    CNetwork<4096,450000>::GetPeerIP2
              ((CNetwork<4096,450000> *)(param_2 + 0xe0),(char *)(local_30 + 0xc),0x14);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_94);
    CStreamGuard::~CStreamGuard(local_94);
    return 0x1405;
  }
  if (*(char *)(local_54 + 0x2e) != '\0') {
    local_50 = CUser::get_charac_idx((CUser *)param_2,*(uint *)(local_54 + 4));
    if (((int)local_50 < 0) ||
       (cVar4 = CUser::setCharacInfoDetail
                          ((CUser *)param_2,local_50,*(uint *)(local_54 + 4),
                           (CHARAC_DATA *)(local_54 + 0xc)), cVar4 != '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      return 0x1415;
    }
    local_4c = CUser::get_charac_idx((CUser *)param_2,*(uint *)(local_54 + 0x686));
    if ((*(int *)(local_54 + 0x686) != 0) && (local_4c != -1)) {
      if ((local_4c < 0) ||
         (cVar4 = CUser::setTagCharacInfo
                            ((CUser *)param_2,local_4c,*(uint *)(local_54 + 0x686),
                             (TAG_CHARAC_DATA *)(local_54 + 0x68b)), cVar4 != '\x01')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        return 0x141f;
      }
      iVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                         local_50);
      *(undefined1 *)(iVar5 + 0x14b7) = *(undefined1 *)(local_54 + 0x68a);
    }
    CUser::SelectCharac((CUser *)param_2,local_50,local_4c);
    iVar5 = CUser::get_charac_count((CUser *)param_2);
    CUser::decideLinkCharacSlotIndexes((CUser *)param_2,(char)local_50,iVar5);
    iVar5 = CUser::get_charac_count((CUser *)param_2);
    cVar4 = CUser::checkCharacLinkType((CUser *)param_2,(char)local_50,iVar5);
    if (cVar4 == '\x01') {
      cVar4 = CUser::isCharacLinkBonusSetting((CUser *)param_2,(char)local_50);
      if (cVar4 != '\0') {
        CUser::setCharacLinkBonusSetting((CUser *)param_2,local_50,false);
      }
      CUserCharacInfo::SetCurCharacEmotion((CUserCharacInfo *)param_2,*(short *)(local_54 + 0x128));
      if ((*(char *)(local_54 + 299) < '\0') || ('\x03' < *(char *)(local_54 + 299))) {
        CUserCharacInfo::SetCurExpEquipSlotStat((CUserCharacInfo *)param_2,'\0');
      }
      else {
        CUserCharacInfo::SetCurExpEquipSlotStat
                  ((CUserCharacInfo *)param_2,*(char *)(local_54 + 299));
      }
      iVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar5 != 0) {
        STGuildProxy::STGuildProxy(local_ae);
        uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
        uVar8 = CUser::GetServerGroup((CUser *)param_2);
        this = (CGuildServerProxy *)
               CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                         (GlobalData::s_guild_proxy_mgr,uVar8);
        cVar4 = CGuildServerProxy::GetGuildInfoProxy(this,uVar9,local_ae);
        if (cVar4 != '\0') {
          CUser::SetGuildInfoProxy((CUser *)param_2,local_ae);
        }
      }
      uVar9 = CUserCharacInfo::calc_disp_help_abuse_ratio((CUserCharacInfo *)param_2,0);
      CUserCharacInfo::setCurCharacHelpAbuseComputedRatio((CUserCharacInfo *)param_2,uVar9);
      CUser::EnableCharacInfo((CUser *)param_2,0);
      WongWork::CMailBoxHelper::ReqDBLoadMail((CUser *)param_2,*(uint *)(local_54 + 4));
      uVar9 = CUser::get_acc_id((CUser *)param_2);
      pcVar13 = (char *)(local_54 + 0x10);
      this_00 = (GameWorld *)G_GameWorld();
      cVar4 = GameWorld::InsertUserToIDMap(this_00,pcVar13,uVar9);
      if (cVar4 != '\x01') {
        uVar9 = CUser::get_acc_id((CUser *)param_2);
        uVar8 = NumberToString(uVar9,0);
        iVar5 = local_54 + 0x10;
        cMyTrace::cMyTrace(local_74,"virtual int Inter_LoadCharac::dispatch_sig(CUser*, char*, int)"
                           ,0x1464,5);
        cMyTrace::operator()(local_74,"Insert into IDMap Failed %s [%s]",iVar5,uVar8);
      }
      local_88 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_48 = localtime_r(&local_88,&local_dc);
      local_44 = local_48->tm_year;
      local_40 = local_48->tm_mon;
      local_3c = local_48->tm_mday;
      iVar5 = CUserCharacInfo::GetCurCharacChaosResponTime((CUserCharacInfo *)param_2);
      if (local_88 < iVar5) {
        CUserCharacInfo::SetCurCharacGhost((CUserCharacInfo *)param_2,true);
        local_2c = CUserCharacInfo::GetCurCharacChaosResponTime((CUserCharacInfo *)param_2);
        local_2c = local_2c - local_88;
        iVar5 = CUserCharacInfo::GetCurCharacChaosResponTime((CUserCharacInfo *)param_2);
        local_28 = CUserCharacInfo::GetCurCharacChaosDieTime((CUserCharacInfo *)param_2);
        local_28 = iVar5 - local_28;
        pvp_assault::CAssaultMgr::NotifyGhostTime((CUser *)param_2,local_28,local_2c);
      }
      else {
        CUserCharacInfo::SetCurCharacGhost((CUserCharacInfo *)param_2,false);
        CUserCharacInfo::SetCurCharacChaosDieTime((CUserCharacInfo *)param_2,0);
        CUserCharacInfo::SetCurCharacChaosResponTime((CUserCharacInfo *)param_2,0);
      }
      CUserCharacInfo::SetCurCharacLeaveTimeout((CUserCharacInfo *)param_2,false);
      lVar10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar11 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_2);
      iVar5 = G_CEnvironment();
      cVar4 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar11,lVar10);
      if (cVar4 != '\0') {
        CUserCharacInfo::setCurCharacTradeGoldDaily((CUserCharacInfo *)param_2,0);
      }
      CUserCharacInfo::SetCurCharacLuckPointUpdateTimeCount((CUserCharacInfo *)param_2,0);
      local_8c = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_2);
      local_38 = localtime_r(&local_8c,&local_108);
      if (((local_38->tm_year != local_44) || (local_38->tm_mon != local_40)) ||
         (local_38->tm_mday != local_3c)) {
        pCVar12 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar12,0,param_2,1);
      }
      CUser::fillUserInfo4Antibot((CUser *)param_2);
      local_34 = (char *)CUser::getUserInfo4Antibot((CUser *)param_2);
      pcVar13 = (char *)CUser::get_acc_name((CUser *)param_2);
      local_150 = StringToNumber(pcVar13);
      local_14c = 0xffffffff;
      strncpy(acStack_148,local_34,0x40);
      pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x38);
      this_01 = (CEnvironment *)G_CEnvironment();
      uVar8 = CEnvironment::getProcessSequence(this_01);
      (*pcVar1)(GlobalData::s_antibotChecker_,uVar8,0,0x186a1,&local_150,0x48);
      iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (*(int *)(iVar5 + 0x7b) != 0) {
        lVar11 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        lVar10 = *(long *)(iVar5 + 0x7b);
        iVar5 = G_CEnvironment();
        local_24 = ComputeDaysScheduleTime(*(int *)(iVar5 + 0x37c),lVar10,lVar11);
        iVar5 = G_CDataManager();
        local_20 = *(int *)(iVar5 + 0xa6b4);
        if (0 < local_24) {
          CUserCharacInfo::DecreasePowerWarPoint
                    ((CUserCharacInfo *)param_2,(short)local_20 * (short)local_24);
          iVar16 = local_24 * local_20;
          uVar14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          uVar8 = *(undefined4 *)(iVar5 + 0x7b);
          puVar15 = (undefined4 *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          uVar2 = *puVar15;
          cMyTrace::cMyTrace(local_64,
                             "virtual int Inter_LoadCharac::dispatch_sig(CUser*, char*, int)",0x14e4
                             ,0);
          cMyTrace::operator()
                    (local_64,
                     "POWERWAR POINT DECREASE : user:%d, last_play_tme:%d, current_time:%d, Unconnected Days:%d, Per Day Point : %d, Decrease powerwar point:%d"
                     ,uVar2,uVar8,uVar14,local_24,local_20,iVar16);
        }
      }
      cVar4 = CPowerManager::IsPowerWarEventOn();
      if (cVar4 != '\x01') {
        iVar5 = CUserCharacInfo::GetPowerWarAssaultCount((CUserCharacInfo *)param_2);
        if ((iVar5 == 0) &&
           (iVar5 = CUserCharacInfo::GetPowerWarAssaultVictoryCount((CUserCharacInfo *)param_2),
           iVar5 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          CUserCharacInfo::ResetPowerWarAssaultRecord((CUserCharacInfo *)param_2);
        }
      }
      this_02 = (CDataManager *)G_CDataManager();
      this_03 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_02);
      cVar4 = EventClassify::CEventScriptMng::is_eventing(this_03,0x19b);
      if (cVar4 != '\0') {
        CUserCharacInfo::setCurUseBringUpMaterialTotal
                  ((CUserCharacInfo *)param_2,*(uchar *)(local_54 + 0x139));
        CUserCharacInfo::setBringUpRewardFlag
                  ((CUserCharacInfo *)param_2,*(bool *)(local_54 + 0x138));
        CUser::SendEventBringUpInfo((CUser *)param_2);
      }
      CUser::select_charac_set_visible_values((CUser *)param_2,*(char *)(local_54 + 0x13a));
      CUser::decide_growth_power_reward_system((CUser *)param_2);
      return 0;
    }
    uVar9 = CUser::get_acc_id((CUser *)param_2);
    uVar8 = NumberToString(uVar9,0);
    cMyTrace::cMyTrace(local_84,"virtual int Inter_LoadCharac::dispatch_sig(CUser*, char*, int)",
                       0x1430,5);
    cMyTrace::operator()
              (local_84,"LINK_LOG : ABNOMAL LINK CHARAC!! m_id (%s), slot_index(%d)",uVar8,local_50)
    ;
    return 0x1431;
  }
  return 0x140b;
}

```

