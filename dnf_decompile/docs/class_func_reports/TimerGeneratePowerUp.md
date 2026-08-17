# TimerGeneratePowerUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## dispatch_sig

```asm
// === 08638560 TimerGeneratePowerUp::dispatch_sig  [0x08638560-0x863895f] ===
 8638560:	55                   	push   %ebp
 8638561:	89 e5                	mov    %esp,%ebp
 8638563:	56                   	push   %esi
 8638564:	53                   	push   %ebx
 8638565:	83 c4 80             	add    $0xffffff80,%esp
 8638568:	a1 50 be 40 09       	mov    0x940be50,%eax
 863856d:	89 04 24             	mov    %eax,(%esp)
 8638570:	e8 9b 73 e4 ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 8638575:	84 c0                	test   %al,%al
 8638577:	0f 84 d7 03 00 00    	je     8638954 <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x3f4>
 863857d:	e8 19 3c a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8638582:	8b 80 70 a6 00 00    	mov    0xa670(%eax),%eax
 8638588:	c1 e0 02             	shl    $0x2,%eax
 863858b:	89 c2                	mov    %eax,%edx
 863858d:	c1 e2 04             	shl    $0x4,%edx
 8638590:	29 c2                	sub    %eax,%edx
 8638592:	a1 50 be 40 09       	mov    0x940be50,%eax
 8638597:	89 54 24 04          	mov    %edx,0x4(%esp)
 863859b:	89 04 24             	mov    %eax,(%esp)
 863859e:	e8 1b 03 c3 ff       	call   82688be <_ZN13CPowerManager20SetPowerUpRemainTimeEi>
 86385a3:	a1 50 be 40 09       	mov    0x940be50,%eax
 86385a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86385af:	00 
 86385b0:	89 04 24             	mov    %eax,(%esp)
 86385b3:	e8 14 03 c3 ff       	call   82688cc <_ZN13CPowerManager21SetPowerUpTimerPeriodEi>
 86385b8:	e8 bf de ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86385bd:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86385c4:	00 
 86385c5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86385cc:	00 
 86385cd:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 86385d4:	00 
 86385d5:	c7 44 24 0c 7d 00 00 	movl   $0x7d,0xc(%esp)
 86385dc:	00 
 86385dd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86385e4:	00 
 86385e5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86385ec:	00 
 86385ed:	89 04 24             	mov    %eax,(%esp)
 86385f0:	e8 21 88 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86385f5:	e8 a1 3b a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86385fa:	8b 80 70 a6 00 00    	mov    0xa670(%eax),%eax
 8638600:	c1 e0 02             	shl    $0x2,%eax
 8638603:	89 c2                	mov    %eax,%edx
 8638605:	c1 e2 04             	shl    $0x4,%edx
 8638608:	89 d1                	mov    %edx,%ecx
 863860a:	29 c1                	sub    %eax,%ecx
 863860c:	89 c8                	mov    %ecx,%eax
 863860e:	89 04 24             	mov    %eax,(%esp)
 8638611:	e8 46 05 00 00       	call   8638b5c <_ZN20TimerGeneratePowerUp15registNextTimerEl>
 8638616:	e8 8c 1d aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863861b:	89 04 24             	mov    %eax,(%esp)
 863861e:	e8 33 6d 09 00       	call   86cf356 <_ZN9GameWorld13CancelPowerUpEv>
 8638623:	8b 45 08             	mov    0x8(%ebp),%eax
 8638626:	83 c0 04             	add    $0x4,%eax
 8638629:	89 04 24             	mov    %eax,(%esp)
 863862c:	e8 3b 8a f1 ff       	call   855106c <_ZNSt6vectorIP5CUserSaIS1_EE5clearEv>
 8638631:	8b 45 08             	mov    0x8(%ebp),%eax
 8638634:	83 c0 10             	add    $0x10,%eax
 8638637:	89 04 24             	mov    %eax,(%esp)
 863863a:	e8 2d 8a f1 ff       	call   855106c <_ZNSt6vectorIP5CUserSaIS1_EE5clearEv>
 863863f:	e8 57 3b a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8638644:	8b 80 44 a6 00 00    	mov    0xa644(%eax),%eax
 863864a:	89 45 a0             	mov    %eax,-0x60(%ebp)
 863864d:	db 45 a0             	fildl  -0x60(%ebp)
 8638650:	dd 05 90 85 ce 08    	fldl   0x8ce8590
 8638656:	de f9                	fdivrp %st,%st(1)
 8638658:	dd 5d b8             	fstpl  -0x48(%ebp)
 863865b:	a1 50 be 40 09       	mov    0x940be50,%eax
 8638660:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8638667:	00 
 8638668:	89 04 24             	mov    %eax,(%esp)
 863866b:	e8 6a 7b e4 ff       	call   84801da <_ZN13CPowerManager17GetPowerUserCountEc>
 8638670:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8638673:	a1 50 be 40 09       	mov    0x940be50,%eax
 8638678:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863867f:	00 
 8638680:	89 04 24             	mov    %eax,(%esp)
 8638683:	e8 52 7b e4 ff       	call   84801da <_ZN13CPowerManager17GetPowerUserCountEc>
 8638688:	89 45 c8             	mov    %eax,-0x38(%ebp)
 863868b:	a1 50 be 40 09       	mov    0x940be50,%eax
 8638690:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8638697:	00 
 8638698:	89 04 24             	mov    %eax,(%esp)
 863869b:	e8 5c 7b e4 ff       	call   84801fc <_ZN13CPowerManager25GetPowerWarPointInChannelEc>
 86386a0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86386a3:	a1 50 be 40 09       	mov    0x940be50,%eax
 86386a8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86386af:	00 
 86386b0:	89 04 24             	mov    %eax,(%esp)
 86386b3:	e8 44 7b e4 ff       	call   84801fc <_ZN13CPowerManager25GetPowerWarPointInChannelEc>
 86386b8:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86386bb:	a1 50 be 40 09       	mov    0x940be50,%eax
 86386c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86386c7:	00 
 86386c8:	89 04 24             	mov    %eax,(%esp)
 86386cb:	e8 a8 87 e4 ff       	call   8480e78 <_ZN13CPowerManager16GetPowerWarPointE20ENUM_POWER_SIDE_TYPE>
 86386d0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86386d3:	a1 50 be 40 09       	mov    0x940be50,%eax
 86386d8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86386df:	00 
 86386e0:	89 04 24             	mov    %eax,(%esp)
 86386e3:	e8 90 87 e4 ff       	call   8480e78 <_ZN13CPowerManager16GetPowerWarPointE20ENUM_POWER_SIDE_TYPE>
 86386e8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86386eb:	e8 ab 3a a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86386f0:	8b 80 d0 a6 00 00    	mov    0xa6d0(%eax),%eax
 86386f6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86386f9:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 86386fd:	75 5b                	jne    863875a <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x1fa>
 86386ff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8638706:	00 
 8638707:	c7 44 24 08 f4 0f 00 	movl   $0xff4,0x8(%esp)
 863870e:	00 
 863870f:	c7 44 24 04 40 82 ce 	movl   $0x8ce8240,0x4(%esp)
 8638716:	08 
 8638717:	8d 45 a8             	lea    -0x58(%ebp),%eax
 863871a:	89 04 24             	mov    %eax,(%esp)
 863871d:	e8 f6 6f f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8638722:	c7 44 24 04 27 6f ce 	movl   $0x8ce6f27,0x4(%esp)
 8638729:	08 
 863872a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 863872d:	89 04 24             	mov    %eax,(%esp)
 8638730:	e8 53 70 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8638735:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863873c:	00 
 863873d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8638744:	00 
 8638745:	8b 45 08             	mov    0x8(%ebp),%eax
 8638748:	89 04 24             	mov    %eax,(%esp)
 863874b:	e8 5c 03 00 00       	call   8638aac <_ZN20TimerGeneratePowerUp15sendPowerUpInfoEii>
 8638750:	b8 01 00 00 00       	mov    $0x1,%eax
 8638755:	e9 ff 01 00 00       	jmp    8638959 <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x3f9>
 863875a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 863875d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8638760:	89 d1                	mov    %edx,%ecx
 8638762:	29 c1                	sub    %eax,%ecx
 8638764:	89 c8                	mov    %ecx,%eax
 8638766:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8638769:	db 45 a0             	fildl  -0x60(%ebp)
 863876c:	db 45 dc             	fildl  -0x24(%ebp)
 863876f:	de f9                	fdivrp %st,%st(1)
 8638771:	dd 5d e0             	fstpl  -0x20(%ebp)
 8638774:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8638777:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 863877a:	89 d1                	mov    %edx,%ecx
 863877c:	29 c1                	sub    %eax,%ecx
 863877e:	89 c8                	mov    %ecx,%eax
 8638780:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8638783:	db 45 a0             	fildl  -0x60(%ebp)
 8638786:	db 45 dc             	fildl  -0x24(%ebp)
 8638789:	de f9                	fdivrp %st,%st(1)
 863878b:	dd 5d e8             	fstpl  -0x18(%ebp)
 863878e:	dd 45 e0             	fldl   -0x20(%ebp)
 8638791:	dd 05 98 85 ce 08    	fldl   0x8ce8598
 8638797:	d9 c9                	fxch   %st(1)
 8638799:	da e9                	fucompp
 863879b:	df e0                	fnstsw %ax
 863879d:	9e                   	sahf
 863879e:	0f 97 c0             	seta   %al
 86387a1:	84 c0                	test   %al,%al
 86387a3:	74 09                	je     86387ae <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x24e>
 86387a5:	dd 05 98 85 ce 08    	fldl   0x8ce8598
 86387ab:	dd 5d e0             	fstpl  -0x20(%ebp)
 86387ae:	dd 45 e0             	fldl   -0x20(%ebp)
 86387b1:	dd 05 a0 85 ce 08    	fldl   0x8ce85a0
 86387b7:	da e9                	fucompp
 86387b9:	df e0                	fnstsw %ax
 86387bb:	f6 c4 45             	test   $0x45,%ah
 86387be:	0f 94 c0             	sete   %al
 86387c1:	84 c0                	test   %al,%al
 86387c3:	74 09                	je     86387ce <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x26e>
 86387c5:	dd 05 a0 85 ce 08    	fldl   0x8ce85a0
 86387cb:	dd 5d e0             	fstpl  -0x20(%ebp)
 86387ce:	dd 45 e8             	fldl   -0x18(%ebp)
 86387d1:	dd 05 98 85 ce 08    	fldl   0x8ce8598
 86387d7:	d9 c9                	fxch   %st(1)
 86387d9:	da e9                	fucompp
 86387db:	df e0                	fnstsw %ax
 86387dd:	9e                   	sahf
 86387de:	0f 97 c0             	seta   %al
 86387e1:	84 c0                	test   %al,%al
 86387e3:	74 09                	je     86387ee <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x28e>
 86387e5:	dd 05 98 85 ce 08    	fldl   0x8ce8598
 86387eb:	dd 5d e8             	fstpl  -0x18(%ebp)
 86387ee:	dd 45 e8             	fldl   -0x18(%ebp)
 86387f1:	dd 05 a0 85 ce 08    	fldl   0x8ce85a0
 86387f7:	da e9                	fucompp
 86387f9:	df e0                	fnstsw %ax
 86387fb:	f6 c4 45             	test   $0x45,%ah
 86387fe:	0f 94 c0             	sete   %al
 8638801:	84 c0                	test   %al,%al
 8638803:	74 09                	je     863880e <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x2ae>
 8638805:	dd 05 a0 85 ce 08    	fldl   0x8ce85a0
 863880b:	dd 5d e8             	fstpl  -0x18(%ebp)
 863880e:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8638812:	74 06                	je     863881a <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x2ba>
 8638814:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8638818:	75 25                	jne    863883f <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x2df>
 863881a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8638821:	00 
 8638822:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8638829:	00 
 863882a:	8b 45 08             	mov    0x8(%ebp),%eax
 863882d:	89 04 24             	mov    %eax,(%esp)
 8638830:	e8 77 02 00 00       	call   8638aac <_ZN20TimerGeneratePowerUp15sendPowerUpInfoEii>
 8638835:	b8 01 00 00 00       	mov    $0x1,%eax
 863883a:	e9 1a 01 00 00       	jmp    8638959 <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x3f9>
 863883f:	db 45 c8             	fildl  -0x38(%ebp)
 8638842:	dc 4d b8             	fmull  -0x48(%ebp)
 8638845:	db 45 d0             	fildl  -0x30(%ebp)
 8638848:	db 45 cc             	fildl  -0x34(%ebp)
 863884b:	de f9                	fdivrp %st,%st(1)
 863884d:	de c9                	fmulp  %st,%st(1)
 863884f:	dd 45 e0             	fldl   -0x20(%ebp)
 8638852:	d9 e8                	fld1
 8638854:	de c1                	faddp  %st,%st(1)
 8638856:	de c9                	fmulp  %st,%st(1)
 8638858:	d9 7d a6             	fnstcw -0x5a(%ebp)
 863885b:	0f b7 45 a6          	movzwl -0x5a(%ebp),%eax
 863885f:	b4 0c                	mov    $0xc,%ah
 8638861:	66 89 45 a4          	mov    %ax,-0x5c(%ebp)
 8638865:	d9 6d a4             	fldcw  -0x5c(%ebp)
 8638868:	db 5d f0             	fistpl -0x10(%ebp)
 863886b:	d9 6d a6             	fldcw  -0x5a(%ebp)
 863886e:	db 45 c4             	fildl  -0x3c(%ebp)
 8638871:	dc 4d b8             	fmull  -0x48(%ebp)
 8638874:	db 45 cc             	fildl  -0x34(%ebp)
 8638877:	db 45 d0             	fildl  -0x30(%ebp)
 863887a:	de f9                	fdivrp %st,%st(1)
 863887c:	de c9                	fmulp  %st,%st(1)
 863887e:	dd 45 e8             	fldl   -0x18(%ebp)
 8638881:	d9 e8                	fld1
 8638883:	de c1                	faddp  %st,%st(1)
 8638885:	de c9                	fmulp  %st,%st(1)
 8638887:	d9 6d a4             	fldcw  -0x5c(%ebp)
 863888a:	db 5d f4             	fistpl -0xc(%ebp)
 863888d:	d9 6d a6             	fldcw  -0x5a(%ebp)
 8638890:	8b 45 08             	mov    0x8(%ebp),%eax
 8638893:	8d 70 10             	lea    0x10(%eax),%esi
 8638896:	8b 45 08             	mov    0x8(%ebp),%eax
 8638899:	8d 58 04             	lea    0x4(%eax),%ebx
 863889c:	e8 06 1b aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86388a1:	89 74 24 08          	mov    %esi,0x8(%esp)
 86388a5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86388a9:	89 04 24             	mov    %eax,(%esp)
 86388ac:	e8 4d 69 09 00       	call   86cf1fe <_ZN9GameWorld16GetPowerUpDomainERSt6vectorIP5CUserSaIS2_EES5_>
 86388b1:	8b 45 08             	mov    0x8(%ebp),%eax
 86388b4:	83 c0 04             	add    $0x4,%eax
 86388b7:	89 04 24             	mov    %eax,(%esp)
 86388ba:	e8 d1 92 cb ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 86388bf:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86388c2:	7f 10                	jg     86388d4 <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x374>
 86388c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86388c7:	83 c0 04             	add    $0x4,%eax
 86388ca:	89 04 24             	mov    %eax,(%esp)
 86388cd:	e8 be 92 cb ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 86388d2:	eb 03                	jmp    86388d7 <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x377>
 86388d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86388d7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86388da:	8b 45 08             	mov    0x8(%ebp),%eax
 86388dd:	83 c0 10             	add    $0x10,%eax
 86388e0:	89 04 24             	mov    %eax,(%esp)
 86388e3:	e8 a8 92 cb ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 86388e8:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86388eb:	7f 10                	jg     86388fd <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x39d>
 86388ed:	8b 45 08             	mov    0x8(%ebp),%eax
 86388f0:	83 c0 10             	add    $0x10,%eax
 86388f3:	89 04 24             	mov    %eax,(%esp)
 86388f6:	e8 95 92 cb ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 86388fb:	eb 03                	jmp    8638900 <_ZN20TimerGeneratePowerUp12dispatch_sigEiij+0x3a0>
 86388fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638900:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638903:	8b 45 08             	mov    0x8(%ebp),%eax
 8638906:	8d 50 04             	lea    0x4(%eax),%edx
 8638909:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863890c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8638910:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638914:	8b 45 08             	mov    0x8(%ebp),%eax
 8638917:	89 04 24             	mov    %eax,(%esp)
 863891a:	e8 41 00 00 00       	call   8638960 <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi>
 863891f:	8b 45 08             	mov    0x8(%ebp),%eax
 8638922:	8d 50 10             	lea    0x10(%eax),%edx
 8638925:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638928:	89 44 24 08          	mov    %eax,0x8(%esp)
 863892c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638930:	8b 45 08             	mov    0x8(%ebp),%eax
 8638933:	89 04 24             	mov    %eax,(%esp)
 8638936:	e8 25 00 00 00       	call   8638960 <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi>
 863893b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863893e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8638942:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638945:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638949:	8b 45 08             	mov    0x8(%ebp),%eax
 863894c:	89 04 24             	mov    %eax,(%esp)
 863894f:	e8 58 01 00 00       	call   8638aac <_ZN20TimerGeneratePowerUp15sendPowerUpInfoEii>
 8638954:	b8 01 00 00 00       	mov    $0x1,%eax
 8638959:	83 ec 80             	sub    $0xffffff80,%esp
 863895c:	5b                   	pop    %ebx
 863895d:	5e                   	pop    %esi
 863895e:	5d                   	pop    %ebp
 863895f:	c3                   	ret

```

```c
// TimerGeneratePowerUp::dispatch_sig @ 0x8638560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimerGeneratePowerUp::dispatch_sig(int, int, unsigned int) */

undefined4 TimerGeneratePowerUp::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  TimerQueue *pTVar3;
  GameWorld *pGVar4;
  cMyTrace local_5c [16];
  double local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  double local_24;
  double local_1c;
  int local_14;
  int local_10;
  
  cVar1 = CPowerManager::IsPowerWarEventOn();
  if (cVar1 != '\0') {
    iVar2 = G_CDataManager();
    CPowerManager::SetPowerUpRemainTime(GlobalData::s_power_manager,*(int *)(iVar2 + 0xa670) * 0x3c)
    ;
    CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,0);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,2,0,0x7d,5,0,0);
    iVar2 = G_CDataManager();
    registNextTimer(*(int *)(iVar2 + 0xa670) * 0x3c);
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::CancelPowerUp(pGVar4);
    std::vector<CUser*,std::allocator<CUser*>>::clear
              ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 4));
    std::vector<CUser*,std::allocator<CUser*>>::clear
              ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 0x10));
    iVar2 = G_CDataManager();
    local_4c = (double)*(int *)(iVar2 + 0xa644) / _DAT_08ce8590;
    local_40 = CPowerManager::GetPowerUserCount(GlobalData::s_power_manager,'\x01');
    local_3c = CPowerManager::GetPowerUserCount(GlobalData::s_power_manager,'\x02');
    local_38 = CPowerManager::GetPowerWarPointInChannel(GlobalData::s_power_manager,'\x01');
    local_34 = CPowerManager::GetPowerWarPointInChannel(GlobalData::s_power_manager,'\x02');
    local_30 = CPowerManager::GetPowerWarPoint(GlobalData::s_power_manager,1);
    local_2c = CPowerManager::GetPowerWarPoint(GlobalData::s_power_manager,2);
    iVar2 = G_CDataManager();
    local_28 = *(int *)(iVar2 + 0xa6d0);
    if (local_28 == 0) {
      cMyTrace::cMyTrace(local_5c,
                         "virtual bool TimerGeneratePowerUp::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xff4,0);
      cMyTrace::operator()(local_5c,"[PowerWar] PowerUpMod is 0");
      sendPowerUpInfo((TimerGeneratePowerUp *)param_1,0,0);
    }
    else {
      local_24 = (double)(local_2c - local_30) / (double)local_28;
      local_1c = (double)(local_30 - local_2c) / (double)local_28;
      if (_DAT_08ce8598 < local_24) {
        local_24 = _DAT_08ce8598;
      }
      if (local_24 < _DAT_08ce85a0) {
        local_24 = _DAT_08ce85a0;
      }
      if (_DAT_08ce8598 < local_1c) {
        local_1c = _DAT_08ce8598;
      }
      if (local_1c < _DAT_08ce85a0) {
        local_1c = _DAT_08ce85a0;
      }
      if ((local_38 == 0) || (local_34 == 0)) {
        sendPowerUpInfo((TimerGeneratePowerUp *)param_1,0,0);
      }
      else {
        local_14 = (int)ROUND((local_24 + 1.0) *
                              ((double)local_34 / (double)local_38) * (double)local_3c * local_4c);
        local_10 = (int)ROUND((local_1c + 1.0) *
                              ((double)local_38 / (double)local_34) * (double)local_40 * local_4c);
        pGVar4 = (GameWorld *)G_GameWorld();
        GameWorld::GetPowerUpDomain(pGVar4,(vector *)(param_1 + 4),(vector *)(param_1 + 0x10));
        iVar2 = std::vector<CUser*,std::allocator<CUser*>>::size
                          ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 4));
        if (iVar2 <= local_14) {
          local_14 = std::vector<CUser*,std::allocator<CUser*>>::size
                               ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 4));
        }
        iVar2 = std::vector<CUser*,std::allocator<CUser*>>::size
                          ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 0x10));
        if (iVar2 <= local_10) {
          local_10 = std::vector<CUser*,std::allocator<CUser*>>::size
                               ((vector<CUser*,std::allocator<CUser*>> *)(param_1 + 0x10));
        }
        generatePowerUp((TimerGeneratePowerUp *)param_1,(vector *)(param_1 + 4),local_14);
        generatePowerUp((TimerGeneratePowerUp *)param_1,(vector *)(param_1 + 0x10),local_10);
        sendPowerUpInfo((TimerGeneratePowerUp *)param_1,local_14,local_10);
      }
    }
  }
  return 1;
}

```

---

## generatePowerUp

```asm
// === 08638960 TimerGeneratePowerUp::generatePowerUp  [0x08638960-0x8638aab] ===
 8638960:	55                   	push   %ebp
 8638961:	89 e5                	mov    %esp,%ebp
 8638963:	56                   	push   %esi
 8638964:	53                   	push   %ebx
 8638965:	83 ec 50             	sub    $0x50,%esp
 8638968:	8b 45 0c             	mov    0xc(%ebp),%eax
 863896b:	89 04 24             	mov    %eax,(%esp)
 863896e:	e8 1d 92 cb ff       	call   82f1b90 <_ZNKSt6vectorIP5CUserSaIS1_EE4sizeEv>
 8638973:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8638976:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 863897d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8638984:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 863898b:	c7 45 f0 10 27 00 00 	movl   $0x2710,-0x10(%ebp)
 8638992:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8638999:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 863899c:	89 04 24             	mov    %eax,(%esp)
 863899f:	e8 7a 91 cb ff       	call   82f1b1e <_ZNSt6vectorIP5CUserSaIS1_EEC1Ev>
 86389a4:	e9 a7 00 00 00       	jmp    8638a50 <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi+0xf0>
 86389a9:	e8 f2 52 a4 ff       	call   807dca0 <rand@plt>
 86389ae:	89 c2                	mov    %eax,%edx
 86389b0:	c1 fa 1f             	sar    $0x1f,%edx
 86389b3:	f7 7d e4             	idivl  -0x1c(%ebp)
 86389b6:	89 55 ec             	mov    %edx,-0x14(%ebp)
 86389b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86389bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 86389c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 86389c3:	89 04 24             	mov    %eax,(%esp)
 86389c6:	e8 0b a1 cb ff       	call   82f2ad6 <_ZNSt6vectorIP5CUserSaIS1_EEixEj>
 86389cb:	8b 00                	mov    (%eax),%eax
 86389cd:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86389d0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86389d3:	89 04 24             	mov    %eax,(%esp)
 86389d6:	e8 89 34 00 00       	call   863be64 <_ZN5CUser9IsPowerUpEv>
 86389db:	83 f0 01             	xor    $0x1,%eax
 86389de:	84 c0                	test   %al,%al
 86389e0:	74 29                	je     8638a0b <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi+0xab>
 86389e2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86389e5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86389ec:	00 
 86389ed:	89 04 24             	mov    %eax,(%esp)
 86389f0:	e8 83 c6 f5 ff       	call   8595078 <_ZN5CUser10SetPowerUpEb>
 86389f5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86389f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86389fc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86389ff:	89 04 24             	mov    %eax,(%esp)
 8638a02:	e8 81 86 f1 ff       	call   8551088 <_ZNSt6vectorIP5CUserSaIS1_EE9push_backERKS1_>
 8638a07:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8638a0b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8638a0f:	81 7d f4 10 27 00 00 	cmpl   $0x2710,-0xc(%ebp)
 8638a16:	7e 38                	jle    8638a50 <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi+0xf0>
 8638a18:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8638a1f:	00 
 8638a20:	c7 44 24 08 4e 10 00 	movl   $0x104e,0x8(%esp)
 8638a27:	00 
 8638a28:	c7 44 24 04 e0 81 ce 	movl   $0x8ce81e0,0x4(%esp)
 8638a2f:	08 
 8638a30:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8638a33:	89 04 24             	mov    %eax,(%esp)
 8638a36:	e8 dd 6c f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8638a3b:	c7 44 24 04 44 6f ce 	movl   $0x8ce6f44,0x4(%esp)
 8638a42:	08 
 8638a43:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8638a46:	89 04 24             	mov    %eax,(%esp)
 8638a49:	e8 3a 6d f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8638a4e:	eb 11                	jmp    8638a61 <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi+0x101>
 8638a50:	8b 45 10             	mov    0x10(%ebp),%eax
 8638a53:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8638a56:	0f 9f c0             	setg   %al
 8638a59:	84 c0                	test   %al,%al
 8638a5b:	0f 85 48 ff ff ff    	jne    86389a9 <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi+0x49>
 8638a61:	e8 41 19 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8638a66:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8638a69:	89 54 24 08          	mov    %edx,0x8(%esp)
 8638a6d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8638a74:	00 
 8638a75:	89 04 24             	mov    %eax,(%esp)
 8638a78:	e8 ed 69 09 00       	call   86cf46a <_ZN9GameWorld15SendPowerUpListE27ENUM_POWER_UP_ACTIVATE_TYPERSt6vectorIP5CUserSaIS3_EE>
 8638a7d:	eb 1b                	jmp    8638a9a <_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi+0x13a>
 8638a7f:	89 d3                	mov    %edx,%ebx
 8638a81:	89 c6                	mov    %eax,%esi
 8638a83:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8638a86:	89 04 24             	mov    %eax,(%esp)
 8638a89:	e8 a4 90 cb ff       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 8638a8e:	89 f0                	mov    %esi,%eax
 8638a90:	89 da                	mov    %ebx,%edx
 8638a92:	89 04 24             	mov    %eax,(%esp)
 8638a95:	e8 b6 ac 4a 00       	call   8ae3750 <_Unwind_Resume>
 8638a9a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8638a9d:	89 04 24             	mov    %eax,(%esp)
 8638aa0:	e8 8d 90 cb ff       	call   82f1b32 <_ZNSt6vectorIP5CUserSaIS1_EED1Ev>
 8638aa5:	83 c4 50             	add    $0x50,%esp
 8638aa8:	5b                   	pop    %ebx
 8638aa9:	5e                   	pop    %esi
 8638aaa:	5d                   	pop    %ebp
 8638aab:	c3                   	ret

```

```c
// TimerGeneratePowerUp::generatePowerUp @ 0x8638960

/* TimerGeneratePowerUp::generatePowerUp(std::vector<CUser*, std::allocator<CUser*> >&, int) */

void __thiscall
TimerGeneratePowerUp::generatePowerUp(TimerGeneratePowerUp *this,vector *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  GameWorld *pGVar4;
  vector<CUser*,std::allocator<CUser*>> local_40 [12];
  CUser *local_34;
  cMyTrace local_30 [16];
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  
  local_20 = std::vector<CUser*,std::allocator<CUser*>>::size
                       ((vector<CUser*,std::allocator<CUser*>> *)param_1);
  local_1c = 0;
  local_18 = 0;
  local_34 = (CUser *)0x0;
  local_14 = 10000;
  local_10 = 0;
  std::vector<CUser*,std::allocator<CUser*>>::vector(local_40);
  do {
    if (param_2 <= local_1c) goto LAB_08638a61;
    iVar2 = rand();
    local_18 = iVar2 % local_20;
    puVar3 = (undefined4 *)
             std::vector<CUser*,std::allocator<CUser*>>::operator[]
                       ((vector<CUser*,std::allocator<CUser*>> *)param_1,local_18);
    local_34 = (CUser *)*puVar3;
    cVar1 = CUser::IsPowerUp(local_34);
    if (cVar1 != '\x01') {
      CUser::SetPowerUp(local_34,true);
                    /* try { // try from 08638a02 to 08638a7c has its CatchHandler @ 08638a7f */
      std::vector<CUser*,std::allocator<CUser*>>::push_back(local_40,&local_34);
      local_1c = local_1c + 1;
    }
    local_10 = local_10 + 1;
  } while (local_10 < 0x2711);
  cMyTrace::cMyTrace(local_30,
                     "void TimerGeneratePowerUp::generatePowerUp(std::vector<CUser*, std::allocator<CUser*> >&, int)"
                     ,0x104e,5);
  cMyTrace::operator()(local_30,"Generate Power Up Party Failure");
LAB_08638a61:
  pGVar4 = (GameWorld *)G_GameWorld();
  GameWorld::SendPowerUpList(pGVar4,1,local_40);
  std::vector<CUser*,std::allocator<CUser*>>::~vector(local_40);
  return;
}

```

---

## registNextTimer

```asm
// === 08638b5c TimerGeneratePowerUp::registNextTimer  [0x08638b5c-0x8638b9f] ===
 8638b5c:	55                   	push   %ebp
 8638b5d:	89 e5                	mov    %esp,%ebp
 8638b5f:	83 ec 28             	sub    $0x28,%esp
 8638b62:	e8 15 d9 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8638b67:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8638b6e:	00 
 8638b6f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8638b76:	00 
 8638b77:	8b 55 08             	mov    0x8(%ebp),%edx
 8638b7a:	89 54 24 10          	mov    %edx,0x10(%esp)
 8638b7e:	c7 44 24 0c 7c 00 00 	movl   $0x7c,0xc(%esp)
 8638b85:	00 
 8638b86:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8638b8d:	00 
 8638b8e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8638b95:	00 
 8638b96:	89 04 24             	mov    %eax,(%esp)
 8638b99:	e8 78 82 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8638b9e:	c9                   	leave
 8638b9f:	c3                   	ret

```

```c
// TimerGeneratePowerUp::registNextTimer @ 0x8638b5c

/* TimerGeneratePowerUp::registNextTimer(long) */

void TimerGeneratePowerUp::registNextTimer(long param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x7c,param_1,0,0);
  return;
}

```

---

## sendPowerUpInfo

```asm
// === 08638aac TimerGeneratePowerUp::sendPowerUpInfo  [0x08638aac-0x8638b5b] ===
 8638aac:	55                   	push   %ebp
 8638aad:	89 e5                	mov    %esp,%ebp
 8638aaf:	56                   	push   %esi
 8638ab0:	53                   	push   %ebx
 8638ab1:	83 ec 20             	sub    $0x20,%esp
 8638ab4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638ab7:	89 04 24             	mov    %eax,(%esp)
 8638aba:	e8 8d 52 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8638abf:	c7 44 24 08 dd 00 00 	movl   $0xdd,0x8(%esp)
 8638ac6:	00 
 8638ac7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8638ace:	00 
 8638acf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638ad2:	89 04 24             	mov    %eax,(%esp)
 8638ad5:	e8 22 2e a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8638ada:	8b 45 0c             	mov    0xc(%ebp),%eax
 8638add:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638ae1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638ae4:	89 04 24             	mov    %eax,(%esp)
 8638ae7:	e8 50 2e a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8638aec:	8b 45 10             	mov    0x10(%ebp),%eax
 8638aef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638af3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638af6:	89 04 24             	mov    %eax,(%esp)
 8638af9:	e8 3e 2e a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8638afe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8638b05:	00 
 8638b06:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638b09:	89 04 24             	mov    %eax,(%esp)
 8638b0c:	e8 47 2e a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8638b11:	e8 91 18 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8638b16:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8638b19:	89 54 24 08          	mov    %edx,0x8(%esp)
 8638b1d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8638b24:	00 
 8638b25:	89 04 24             	mov    %eax,(%esp)
 8638b28:	e8 1b f4 08 00       	call   86c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>
 8638b2d:	eb 1b                	jmp    8638b4a <_ZN20TimerGeneratePowerUp15sendPowerUpInfoEii+0x9e>
 8638b2f:	89 d3                	mov    %edx,%ebx
 8638b31:	89 c6                	mov    %eax,%esi
 8638b33:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638b36:	89 04 24             	mov    %eax,(%esp)
 8638b39:	e8 42 53 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8638b3e:	89 f0                	mov    %esi,%eax
 8638b40:	89 da                	mov    %ebx,%edx
 8638b42:	89 04 24             	mov    %eax,(%esp)
 8638b45:	e8 06 ac 4a 00       	call   8ae3750 <_Unwind_Resume>
 8638b4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638b4d:	89 04 24             	mov    %eax,(%esp)
 8638b50:	e8 2b 53 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8638b55:	83 c4 20             	add    $0x20,%esp
 8638b58:	5b                   	pop    %ebx
 8638b59:	5e                   	pop    %esi
 8638b5a:	5d                   	pop    %ebp
 8638b5b:	c3                   	ret

```

```c
// TimerGeneratePowerUp::sendPowerUpInfo @ 0x8638aac

/* TimerGeneratePowerUp::sendPowerUpInfo(int, int) */

void __thiscall
TimerGeneratePowerUp::sendPowerUpInfo(TimerGeneratePowerUp *this,int param_1,int param_2)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08638ad5 to 08638b2c has its CatchHandler @ 08638b2f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xdd);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_to_vill(this_00,7,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

