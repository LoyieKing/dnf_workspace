# TimerDispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## TimerDispatcher

```asm
// === 0863120a TimerDispatcher::TimerDispatcher  [0x0863120a-0x863298d] ===
 863120a:	55                   	push   %ebp
 863120b:	89 e5                	mov    %esp,%ebp
 863120d:	57                   	push   %edi
 863120e:	56                   	push   %esi
 863120f:	53                   	push   %ebx
 8631210:	83 ec 2c             	sub    $0x2c,%esp
 8631213:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 863121a:	eb 11                	jmp    863122d <_ZN15TimerDispatcherC1Ev+0x23>
 863121c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 863121f:	8b 45 08             	mov    0x8(%ebp),%eax
 8631222:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 8631229:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 863122d:	81 7d e4 ae 00 00 00 	cmpl   $0xae,-0x1c(%ebp)
 8631234:	0f 9e c0             	setle  %al
 8631237:	84 c0                	test   %al,%al
 8631239:	75 e1                	jne    863121c <_ZN15TimerDispatcherC1Ev+0x12>
 863123b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631242:	e8 09 32 0f 00       	call   8724450 <_Znwj>
 8631247:	89 c3                	mov    %eax,%ebx
 8631249:	89 d8                	mov    %ebx,%eax
 863124b:	89 04 24             	mov    %eax,(%esp)
 863124e:	e8 33 af 00 00       	call   863c186 <_ZN14TimerCheckConnC1Ev>
 8631253:	89 d8                	mov    %ebx,%eax
 8631255:	89 c2                	mov    %eax,%edx
 8631257:	8b 45 08             	mov    0x8(%ebp),%eax
 863125a:	89 10                	mov    %edx,(%eax)
 863125c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631263:	e8 e8 31 0f 00       	call   8724450 <_Znwj>
 8631268:	89 c3                	mov    %eax,%ebx
 863126a:	89 d8                	mov    %ebx,%eax
 863126c:	89 04 24             	mov    %eax,(%esp)
 863126f:	e8 2e af 00 00       	call   863c1a2 <_ZN13TimerDBUpdateC1Ev>
 8631274:	89 d8                	mov    %ebx,%eax
 8631276:	89 c2                	mov    %eax,%edx
 8631278:	8b 45 08             	mov    0x8(%ebp),%eax
 863127b:	89 50 04             	mov    %edx,0x4(%eax)
 863127e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631285:	e8 c6 31 0f 00       	call   8724450 <_Znwj>
 863128a:	89 c3                	mov    %eax,%ebx
 863128c:	89 d8                	mov    %ebx,%eax
 863128e:	89 04 24             	mov    %eax,(%esp)
 8631291:	e8 28 af 00 00       	call   863c1be <_ZN12TimerStaminaC1Ev>
 8631296:	89 d8                	mov    %ebx,%eax
 8631298:	89 c2                	mov    %eax,%edx
 863129a:	8b 45 08             	mov    0x8(%ebp),%eax
 863129d:	89 50 08             	mov    %edx,0x8(%eax)
 86312a0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86312a7:	e8 a4 31 0f 00       	call   8724450 <_Znwj>
 86312ac:	89 c3                	mov    %eax,%ebx
 86312ae:	89 d8                	mov    %ebx,%eax
 86312b0:	89 04 24             	mov    %eax,(%esp)
 86312b3:	e8 22 af 00 00       	call   863c1da <_ZN15TimerMapLoadingC1Ev>
 86312b8:	89 d8                	mov    %ebx,%eax
 86312ba:	89 c2                	mov    %eax,%edx
 86312bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86312bf:	89 50 2c             	mov    %edx,0x2c(%eax)
 86312c2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86312c9:	e8 82 31 0f 00       	call   8724450 <_Znwj>
 86312ce:	89 c3                	mov    %eax,%ebx
 86312d0:	89 d8                	mov    %ebx,%eax
 86312d2:	89 04 24             	mov    %eax,(%esp)
 86312d5:	e8 1c af 00 00       	call   863c1f6 <_ZN14TimerSetResultC1Ev>
 86312da:	89 d8                	mov    %ebx,%eax
 86312dc:	89 c2                	mov    %eax,%edx
 86312de:	8b 45 08             	mov    0x8(%ebp),%eax
 86312e1:	89 50 30             	mov    %edx,0x30(%eax)
 86312e4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86312eb:	e8 60 31 0f 00       	call   8724450 <_Znwj>
 86312f0:	89 c3                	mov    %eax,%ebx
 86312f2:	89 d8                	mov    %ebx,%eax
 86312f4:	89 04 24             	mov    %eax,(%esp)
 86312f7:	e8 16 af 00 00       	call   863c212 <_ZN17TimerDungeonClearC1Ev>
 86312fc:	89 d8                	mov    %ebx,%eax
 86312fe:	89 c2                	mov    %eax,%edx
 8631300:	8b 45 08             	mov    0x8(%ebp),%eax
 8631303:	89 50 34             	mov    %edx,0x34(%eax)
 8631306:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863130d:	e8 3e 31 0f 00       	call   8724450 <_Znwj>
 8631312:	89 c3                	mov    %eax,%ebx
 8631314:	89 d8                	mov    %ebx,%eax
 8631316:	89 04 24             	mov    %eax,(%esp)
 8631319:	e8 10 af 00 00       	call   863c22e <_ZN16TimerDungeonFailC1Ev>
 863131e:	89 d8                	mov    %ebx,%eax
 8631320:	89 c2                	mov    %eax,%edx
 8631322:	8b 45 08             	mov    0x8(%ebp),%eax
 8631325:	89 50 38             	mov    %edx,0x38(%eax)
 8631328:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863132f:	e8 1c 31 0f 00       	call   8724450 <_Znwj>
 8631334:	89 c3                	mov    %eax,%ebx
 8631336:	89 d8                	mov    %ebx,%eax
 8631338:	89 04 24             	mov    %eax,(%esp)
 863133b:	e8 0a af 00 00       	call   863c24a <_ZN25TimerPartyWalkOutLackUserC1Ev>
 8631340:	89 d8                	mov    %ebx,%eax
 8631342:	89 c2                	mov    %eax,%edx
 8631344:	8b 45 08             	mov    0x8(%ebp),%eax
 8631347:	89 50 3c             	mov    %edx,0x3c(%eax)
 863134a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631351:	e8 fa 30 0f 00       	call   8724450 <_Znwj>
 8631356:	89 c3                	mov    %eax,%ebx
 8631358:	89 d8                	mov    %ebx,%eax
 863135a:	89 04 24             	mov    %eax,(%esp)
 863135d:	e8 04 af 00 00       	call   863c266 <_ZN23TimerPVPWalkOutLackUserC1Ev>
 8631362:	89 d8                	mov    %ebx,%eax
 8631364:	89 c2                	mov    %eax,%edx
 8631366:	8b 45 08             	mov    0x8(%ebp),%eax
 8631369:	89 90 c4 00 00 00    	mov    %edx,0xc4(%eax)
 863136f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631376:	e8 d5 30 0f 00       	call   8724450 <_Znwj>
 863137b:	89 c3                	mov    %eax,%ebx
 863137d:	89 d8                	mov    %ebx,%eax
 863137f:	89 04 24             	mov    %eax,(%esp)
 8631382:	e8 21 a8 00 00       	call   863bba8 <_ZN17TimerFatigueResetC1Ev>
 8631387:	89 d8                	mov    %ebx,%eax
 8631389:	89 c2                	mov    %eax,%edx
 863138b:	8b 45 08             	mov    0x8(%ebp),%eax
 863138e:	89 90 40 01 00 00    	mov    %edx,0x140(%eax)
 8631394:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863139b:	e8 b0 30 0f 00       	call   8724450 <_Znwj>
 86313a0:	89 c3                	mov    %eax,%ebx
 86313a2:	89 d8                	mov    %ebx,%eax
 86313a4:	89 04 24             	mov    %eax,(%esp)
 86313a7:	e8 92 a7 00 00       	call   863bb3e <_ZN17TimerAvatarExpireC1Ev>
 86313ac:	89 d8                	mov    %ebx,%eax
 86313ae:	89 c2                	mov    %eax,%edx
 86313b0:	8b 45 08             	mov    0x8(%ebp),%eax
 86313b3:	89 90 44 01 00 00    	mov    %edx,0x144(%eax)
 86313b9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86313c0:	e8 8b 30 0f 00       	call   8724450 <_Znwj>
 86313c5:	89 c3                	mov    %eax,%ebx
 86313c7:	89 d8                	mov    %ebx,%eax
 86313c9:	89 04 24             	mov    %eax,(%esp)
 86313cc:	e8 b1 ae 00 00       	call   863c282 <_ZN18TimerStatisticsLogC1Ev>
 86313d1:	89 d8                	mov    %ebx,%eax
 86313d3:	89 c2                	mov    %eax,%edx
 86313d5:	8b 45 08             	mov    0x8(%ebp),%eax
 86313d8:	89 90 48 01 00 00    	mov    %edx,0x148(%eax)
 86313de:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86313e5:	e8 66 30 0f 00       	call   8724450 <_Znwj>
 86313ea:	89 c3                	mov    %eax,%ebx
 86313ec:	89 d8                	mov    %ebx,%eax
 86313ee:	89 04 24             	mov    %eax,(%esp)
 86313f1:	e8 a8 ae 00 00       	call   863c29e <_ZN15TimerCardSelectC1Ev>
 86313f6:	89 d8                	mov    %ebx,%eax
 86313f8:	89 c2                	mov    %eax,%edx
 86313fa:	8b 45 08             	mov    0x8(%ebp),%eax
 86313fd:	89 50 40             	mov    %edx,0x40(%eax)
 8631400:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631407:	e8 44 30 0f 00       	call   8724450 <_Znwj>
 863140c:	89 c3                	mov    %eax,%ebx
 863140e:	89 d8                	mov    %ebx,%eax
 8631410:	89 04 24             	mov    %eax,(%esp)
 8631413:	e8 a2 ae 00 00       	call   863c2ba <_ZN23TimerClearDungeonRewardC1Ev>
 8631418:	89 d8                	mov    %ebx,%eax
 863141a:	89 c2                	mov    %eax,%edx
 863141c:	8b 45 08             	mov    0x8(%ebp),%eax
 863141f:	89 50 44             	mov    %edx,0x44(%eax)
 8631422:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631429:	e8 22 30 0f 00       	call   8724450 <_Znwj>
 863142e:	89 c3                	mov    %eax,%ebx
 8631430:	89 d8                	mov    %ebx,%eax
 8631432:	89 04 24             	mov    %eax,(%esp)
 8631435:	e8 9c ae 00 00       	call   863c2d6 <_ZN27TimerClearDungeonScoreScollC1Ev>
 863143a:	89 d8                	mov    %ebx,%eax
 863143c:	89 c2                	mov    %eax,%edx
 863143e:	8b 45 08             	mov    0x8(%ebp),%eax
 8631441:	89 50 48             	mov    %edx,0x48(%eax)
 8631444:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863144b:	e8 00 30 0f 00       	call   8724450 <_Znwj>
 8631450:	89 c3                	mov    %eax,%ebx
 8631452:	89 d8                	mov    %ebx,%eax
 8631454:	89 04 24             	mov    %eax,(%esp)
 8631457:	e8 96 ae 00 00       	call   863c2f2 <_ZN32TimerClearDungeonCardSelectRightC1Ev>
 863145c:	89 d8                	mov    %ebx,%eax
 863145e:	89 c2                	mov    %eax,%edx
 8631460:	8b 45 08             	mov    0x8(%ebp),%eax
 8631463:	89 50 4c             	mov    %edx,0x4c(%eax)
 8631466:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863146d:	e8 de 2f 0f 00       	call   8724450 <_Znwj>
 8631472:	89 c3                	mov    %eax,%ebx
 8631474:	89 d8                	mov    %ebx,%eax
 8631476:	89 04 24             	mov    %eax,(%esp)
 8631479:	e8 90 ae 00 00       	call   863c30e <_ZN23TimerPremiumServiceOverC1Ev>
 863147e:	89 d8                	mov    %ebx,%eax
 8631480:	89 c2                	mov    %eax,%edx
 8631482:	8b 45 08             	mov    0x8(%ebp),%eax
 8631485:	89 50 10             	mov    %edx,0x10(%eax)
 8631488:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863148f:	e8 bc 2f 0f 00       	call   8724450 <_Znwj>
 8631494:	89 c3                	mov    %eax,%ebx
 8631496:	89 d8                	mov    %ebx,%eax
 8631498:	89 04 24             	mov    %eax,(%esp)
 863149b:	e8 8a ae 00 00       	call   863c32a <_ZN25TimerPremiumServiceUpdateC1Ev>
 86314a0:	89 d8                	mov    %ebx,%eax
 86314a2:	89 c2                	mov    %eax,%edx
 86314a4:	8b 45 08             	mov    0x8(%ebp),%eax
 86314a7:	89 50 14             	mov    %edx,0x14(%eax)
 86314aa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86314b1:	e8 9a 2f 0f 00       	call   8724450 <_Znwj>
 86314b6:	89 c3                	mov    %eax,%ebx
 86314b8:	89 d8                	mov    %ebx,%eax
 86314ba:	89 04 24             	mov    %eax,(%esp)
 86314bd:	e8 84 ae 00 00       	call   863c346 <_ZN24TimerPremiumServiceStartC1Ev>
 86314c2:	89 d8                	mov    %ebx,%eax
 86314c4:	89 c2                	mov    %eax,%edx
 86314c6:	8b 45 08             	mov    0x8(%ebp),%eax
 86314c9:	89 50 18             	mov    %edx,0x18(%eax)
 86314cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86314d3:	e8 78 2f 0f 00       	call   8724450 <_Znwj>
 86314d8:	89 c3                	mov    %eax,%ebx
 86314da:	89 d8                	mov    %ebx,%eax
 86314dc:	89 04 24             	mov    %eax,(%esp)
 86314df:	e8 7e ae 00 00       	call   863c362 <_ZN24TimerCheckPaidPCRoomTermC1Ev>
 86314e4:	89 d8                	mov    %ebx,%eax
 86314e6:	89 c2                	mov    %eax,%edx
 86314e8:	8b 45 08             	mov    0x8(%ebp),%eax
 86314eb:	89 50 1c             	mov    %edx,0x1c(%eax)
 86314ee:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86314f5:	e8 56 2f 0f 00       	call   8724450 <_Znwj>
 86314fa:	89 c3                	mov    %eax,%ebx
 86314fc:	89 d8                	mov    %ebx,%eax
 86314fe:	89 04 24             	mov    %eax,(%esp)
 8631501:	e8 78 ae 00 00       	call   863c37e <_ZN22TimerEPLPReturnVillageC1Ev>
 8631506:	89 d8                	mov    %ebx,%eax
 8631508:	89 c2                	mov    %eax,%edx
 863150a:	8b 45 08             	mov    0x8(%ebp),%eax
 863150d:	89 50 50             	mov    %edx,0x50(%eax)
 8631510:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631517:	e8 34 2f 0f 00       	call   8724450 <_Znwj>
 863151c:	89 c3                	mov    %eax,%ebx
 863151e:	89 d8                	mov    %ebx,%eax
 8631520:	89 04 24             	mov    %eax,(%esp)
 8631523:	e8 72 ae 00 00       	call   863c39a <_ZN20TimerEPLPCommandWaitC1Ev>
 8631528:	89 d8                	mov    %ebx,%eax
 863152a:	89 c2                	mov    %eax,%edx
 863152c:	8b 45 08             	mov    0x8(%ebp),%eax
 863152f:	89 50 54             	mov    %edx,0x54(%eax)
 8631532:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631539:	e8 12 2f 0f 00       	call   8724450 <_Znwj>
 863153e:	89 c3                	mov    %eax,%ebx
 8631540:	89 d8                	mov    %ebx,%eax
 8631542:	89 04 24             	mov    %eax,(%esp)
 8631545:	e8 6c ae 00 00       	call   863c3b6 <_ZN21TimerWarRoomWaitCountC1Ev>
 863154a:	89 d8                	mov    %ebx,%eax
 863154c:	89 c2                	mov    %eax,%edx
 863154e:	8b 45 08             	mov    0x8(%ebp),%eax
 8631551:	89 90 04 01 00 00    	mov    %edx,0x104(%eax)
 8631557:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863155e:	e8 ed 2e 0f 00       	call   8724450 <_Znwj>
 8631563:	89 c3                	mov    %eax,%ebx
 8631565:	89 d8                	mov    %ebx,%eax
 8631567:	89 04 24             	mov    %eax,(%esp)
 863156a:	e8 63 ae 00 00       	call   863c3d2 <_ZN26TimerWarRoomReadyLockCountC1Ev>
 863156f:	89 d8                	mov    %ebx,%eax
 8631571:	89 c2                	mov    %eax,%edx
 8631573:	8b 45 08             	mov    0x8(%ebp),%eax
 8631576:	89 90 08 01 00 00    	mov    %edx,0x108(%eax)
 863157c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631583:	e8 c8 2e 0f 00       	call   8724450 <_Znwj>
 8631588:	89 c3                	mov    %eax,%ebx
 863158a:	89 d8                	mov    %ebx,%eax
 863158c:	89 04 24             	mov    %eax,(%esp)
 863158f:	e8 5a ae 00 00       	call   863c3ee <_ZN28TimerWarRoomBattlePauseCountC1Ev>
 8631594:	89 d8                	mov    %ebx,%eax
 8631596:	89 c2                	mov    %eax,%edx
 8631598:	8b 45 08             	mov    0x8(%ebp),%eax
 863159b:	89 90 0c 01 00 00    	mov    %edx,0x10c(%eax)
 86315a1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86315a8:	e8 a3 2e 0f 00       	call   8724450 <_Znwj>
 86315ad:	89 c3                	mov    %eax,%ebx
 86315af:	89 d8                	mov    %ebx,%eax
 86315b1:	89 04 24             	mov    %eax,(%esp)
 86315b4:	e8 51 ae 00 00       	call   863c40a <_ZN23TimerWarRoomResultCountC1Ev>
 86315b9:	89 d8                	mov    %ebx,%eax
 86315bb:	89 c2                	mov    %eax,%edx
 86315bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86315c0:	89 90 10 01 00 00    	mov    %edx,0x110(%eax)
 86315c6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86315cd:	e8 7e 2e 0f 00       	call   8724450 <_Znwj>
 86315d2:	89 c3                	mov    %eax,%ebx
 86315d4:	89 d8                	mov    %ebx,%eax
 86315d6:	89 04 24             	mov    %eax,(%esp)
 86315d9:	e8 48 ae 00 00       	call   863c426 <_ZN20TImerWarRoomTimeBombC1Ev>
 86315de:	89 d8                	mov    %ebx,%eax
 86315e0:	89 c2                	mov    %eax,%edx
 86315e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86315e5:	89 90 14 01 00 00    	mov    %edx,0x114(%eax)
 86315eb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86315f2:	e8 59 2e 0f 00       	call   8724450 <_Znwj>
 86315f7:	89 c3                	mov    %eax,%ebx
 86315f9:	89 d8                	mov    %ebx,%eax
 86315fb:	89 04 24             	mov    %eax,(%esp)
 86315fe:	e8 3f ae 00 00       	call   863c442 <_ZN21TimerWarRoomCheckFailC1Ev>
 8631603:	89 d8                	mov    %ebx,%eax
 8631605:	89 c2                	mov    %eax,%edx
 8631607:	8b 45 08             	mov    0x8(%ebp),%eax
 863160a:	89 90 18 01 00 00    	mov    %edx,0x118(%eax)
 8631610:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631617:	e8 34 2e 0f 00       	call   8724450 <_Znwj>
 863161c:	89 c3                	mov    %eax,%ebx
 863161e:	89 d8                	mov    %ebx,%eax
 8631620:	89 04 24             	mov    %eax,(%esp)
 8631623:	e8 36 ae 00 00       	call   863c45e <_ZN22TimerWarRoomChangeHostC1Ev>
 8631628:	89 d8                	mov    %ebx,%eax
 863162a:	89 c2                	mov    %eax,%edx
 863162c:	8b 45 08             	mov    0x8(%ebp),%eax
 863162f:	89 90 1c 01 00 00    	mov    %edx,0x11c(%eax)
 8631635:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863163c:	e8 0f 2e 0f 00       	call   8724450 <_Znwj>
 8631641:	89 c3                	mov    %eax,%ebx
 8631643:	89 d8                	mov    %ebx,%eax
 8631645:	89 04 24             	mov    %eax,(%esp)
 8631648:	e8 2d ae 00 00       	call   863c47a <_ZN28TimerBloodSmallRoundRegisterC1Ev>
 863164d:	89 d8                	mov    %ebx,%eax
 863164f:	89 c2                	mov    %eax,%edx
 8631651:	8b 45 08             	mov    0x8(%ebp),%eax
 8631654:	89 50 58             	mov    %edx,0x58(%eax)
 8631657:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863165e:	e8 ed 2d 0f 00       	call   8724450 <_Znwj>
 8631663:	89 c3                	mov    %eax,%ebx
 8631665:	89 d8                	mov    %ebx,%eax
 8631667:	89 04 24             	mov    %eax,(%esp)
 863166a:	e8 27 ae 00 00       	call   863c496 <_ZN24TimerBloodPhaseRegister0C1Ev>
 863166f:	89 d8                	mov    %ebx,%eax
 8631671:	89 c2                	mov    %eax,%edx
 8631673:	8b 45 08             	mov    0x8(%ebp),%eax
 8631676:	89 50 5c             	mov    %edx,0x5c(%eax)
 8631679:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631680:	e8 cb 2d 0f 00       	call   8724450 <_Znwj>
 8631685:	89 c3                	mov    %eax,%ebx
 8631687:	89 d8                	mov    %ebx,%eax
 8631689:	89 04 24             	mov    %eax,(%esp)
 863168c:	e8 21 ae 00 00       	call   863c4b2 <_ZN24TimerBloodPhaseRegister1C1Ev>
 8631691:	89 d8                	mov    %ebx,%eax
 8631693:	89 c2                	mov    %eax,%edx
 8631695:	8b 45 08             	mov    0x8(%ebp),%eax
 8631698:	89 50 60             	mov    %edx,0x60(%eax)
 863169b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86316a2:	e8 a9 2d 0f 00       	call   8724450 <_Znwj>
 86316a7:	89 c3                	mov    %eax,%ebx
 86316a9:	89 d8                	mov    %ebx,%eax
 86316ab:	89 04 24             	mov    %eax,(%esp)
 86316ae:	e8 1b ae 00 00       	call   863c4ce <_ZN24TimerBloodPhaseRegister2C1Ev>
 86316b3:	89 d8                	mov    %ebx,%eax
 86316b5:	89 c2                	mov    %eax,%edx
 86316b7:	8b 45 08             	mov    0x8(%ebp),%eax
 86316ba:	89 50 64             	mov    %edx,0x64(%eax)
 86316bd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86316c4:	e8 87 2d 0f 00       	call   8724450 <_Znwj>
 86316c9:	89 c3                	mov    %eax,%ebx
 86316cb:	89 d8                	mov    %ebx,%eax
 86316cd:	89 04 24             	mov    %eax,(%esp)
 86316d0:	e8 15 ae 00 00       	call   863c4ea <_ZN24TimerBloodPhaseRegister3C1Ev>
 86316d5:	89 d8                	mov    %ebx,%eax
 86316d7:	89 c2                	mov    %eax,%edx
 86316d9:	8b 45 08             	mov    0x8(%ebp),%eax
 86316dc:	89 50 68             	mov    %edx,0x68(%eax)
 86316df:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86316e6:	e8 65 2d 0f 00       	call   8724450 <_Znwj>
 86316eb:	89 c3                	mov    %eax,%ebx
 86316ed:	89 d8                	mov    %ebx,%eax
 86316ef:	89 04 24             	mov    %eax,(%esp)
 86316f2:	e8 0f ae 00 00       	call   863c506 <_ZN24TimerBloodPhaseRegister4C1Ev>
 86316f7:	89 d8                	mov    %ebx,%eax
 86316f9:	89 c2                	mov    %eax,%edx
 86316fb:	8b 45 08             	mov    0x8(%ebp),%eax
 86316fe:	89 50 6c             	mov    %edx,0x6c(%eax)
 8631701:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631708:	e8 43 2d 0f 00       	call   8724450 <_Znwj>
 863170d:	89 c3                	mov    %eax,%ebx
 863170f:	89 d8                	mov    %ebx,%eax
 8631711:	89 04 24             	mov    %eax,(%esp)
 8631714:	e8 09 ae 00 00       	call   863c522 <_ZN24TimerBloodPhaseRegister5C1Ev>
 8631719:	89 d8                	mov    %ebx,%eax
 863171b:	89 c2                	mov    %eax,%edx
 863171d:	8b 45 08             	mov    0x8(%ebp),%eax
 8631720:	89 50 70             	mov    %edx,0x70(%eax)
 8631723:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863172a:	e8 21 2d 0f 00       	call   8724450 <_Znwj>
 863172f:	89 c3                	mov    %eax,%ebx
 8631731:	89 d8                	mov    %ebx,%eax
 8631733:	89 04 24             	mov    %eax,(%esp)
 8631736:	e8 03 ae 00 00       	call   863c53e <_ZN24TimerBloodPhaseRegister6C1Ev>
 863173b:	89 d8                	mov    %ebx,%eax
 863173d:	89 c2                	mov    %eax,%edx
 863173f:	8b 45 08             	mov    0x8(%ebp),%eax
 8631742:	89 50 74             	mov    %edx,0x74(%eax)
 8631745:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863174c:	e8 ff 2c 0f 00       	call   8724450 <_Znwj>
 8631751:	89 c3                	mov    %eax,%ebx
 8631753:	89 d8                	mov    %ebx,%eax
 8631755:	89 04 24             	mov    %eax,(%esp)
 8631758:	e8 fd ad 00 00       	call   863c55a <_ZN24TimerBloodPhaseRegister7C1Ev>
 863175d:	89 d8                	mov    %ebx,%eax
 863175f:	89 c2                	mov    %eax,%edx
 8631761:	8b 45 08             	mov    0x8(%ebp),%eax
 8631764:	89 50 78             	mov    %edx,0x78(%eax)
 8631767:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863176e:	e8 dd 2c 0f 00       	call   8724450 <_Znwj>
 8631773:	89 c3                	mov    %eax,%ebx
 8631775:	89 d8                	mov    %ebx,%eax
 8631777:	89 04 24             	mov    %eax,(%esp)
 863177a:	e8 f7 ad 00 00       	call   863c576 <_ZN24TimerBloodPhaseRegister8C1Ev>
 863177f:	89 d8                	mov    %ebx,%eax
 8631781:	89 c2                	mov    %eax,%edx
 8631783:	8b 45 08             	mov    0x8(%ebp),%eax
 8631786:	89 50 7c             	mov    %edx,0x7c(%eax)
 8631789:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631790:	e8 bb 2c 0f 00       	call   8724450 <_Znwj>
 8631795:	89 c3                	mov    %eax,%ebx
 8631797:	89 d8                	mov    %ebx,%eax
 8631799:	89 04 24             	mov    %eax,(%esp)
 863179c:	e8 f1 ad 00 00       	call   863c592 <_ZN24TimerBloodPhaseRegister9C1Ev>
 86317a1:	89 d8                	mov    %ebx,%eax
 86317a3:	89 c2                	mov    %eax,%edx
 86317a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86317a8:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 86317ae:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86317b5:	e8 96 2c 0f 00       	call   8724450 <_Znwj>
 86317ba:	89 c3                	mov    %eax,%ebx
 86317bc:	89 d8                	mov    %ebx,%eax
 86317be:	89 04 24             	mov    %eax,(%esp)
 86317c1:	e8 e8 ad 00 00       	call   863c5ae <_ZN22TimerBloodCrazyMonsterC1Ev>
 86317c6:	89 d8                	mov    %ebx,%eax
 86317c8:	89 c2                	mov    %eax,%edx
 86317ca:	8b 45 08             	mov    0x8(%ebp),%eax
 86317cd:	89 90 84 00 00 00    	mov    %edx,0x84(%eax)
 86317d3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86317da:	e8 71 2c 0f 00       	call   8724450 <_Znwj>
 86317df:	89 c3                	mov    %eax,%ebx
 86317e1:	89 d8                	mov    %ebx,%eax
 86317e3:	89 04 24             	mov    %eax,(%esp)
 86317e6:	e8 df ad 00 00       	call   863c5ca <_ZN28TimerBloodDungeonClearRewardC1Ev>
 86317eb:	89 d8                	mov    %ebx,%eax
 86317ed:	89 c2                	mov    %eax,%edx
 86317ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86317f2:	89 90 88 00 00 00    	mov    %edx,0x88(%eax)
 86317f8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86317ff:	e8 4c 2c 0f 00       	call   8724450 <_Znwj>
 8631804:	89 c3                	mov    %eax,%ebx
 8631806:	89 d8                	mov    %ebx,%eax
 8631808:	89 04 24             	mov    %eax,(%esp)
 863180b:	e8 ba ad 00 00       	call   863c5ca <_ZN28TimerBloodDungeonClearRewardC1Ev>
 8631810:	89 d8                	mov    %ebx,%eax
 8631812:	89 c2                	mov    %eax,%edx
 8631814:	8b 45 08             	mov    0x8(%ebp),%eax
 8631817:	89 90 8c 00 00 00    	mov    %edx,0x8c(%eax)
 863181d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631824:	e8 27 2c 0f 00       	call   8724450 <_Znwj>
 8631829:	89 c3                	mov    %eax,%ebx
 863182b:	89 d8                	mov    %ebx,%eax
 863182d:	89 04 24             	mov    %eax,(%esp)
 8631830:	e8 95 ad 00 00       	call   863c5ca <_ZN28TimerBloodDungeonClearRewardC1Ev>
 8631835:	89 d8                	mov    %ebx,%eax
 8631837:	89 c2                	mov    %eax,%edx
 8631839:	8b 45 08             	mov    0x8(%ebp),%eax
 863183c:	89 90 90 00 00 00    	mov    %edx,0x90(%eax)
 8631842:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631849:	e8 02 2c 0f 00       	call   8724450 <_Znwj>
 863184e:	89 c3                	mov    %eax,%ebx
 8631850:	89 d8                	mov    %ebx,%eax
 8631852:	89 04 24             	mov    %eax,(%esp)
 8631855:	e8 70 ad 00 00       	call   863c5ca <_ZN28TimerBloodDungeonClearRewardC1Ev>
 863185a:	89 d8                	mov    %ebx,%eax
 863185c:	89 c2                	mov    %eax,%edx
 863185e:	8b 45 08             	mov    0x8(%ebp),%eax
 8631861:	89 90 94 00 00 00    	mov    %edx,0x94(%eax)
 8631867:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863186e:	e8 dd 2b 0f 00       	call   8724450 <_Znwj>
 8631873:	89 c3                	mov    %eax,%ebx
 8631875:	89 d8                	mov    %ebx,%eax
 8631877:	89 04 24             	mov    %eax,(%esp)
 863187a:	e8 67 ad 00 00       	call   863c5e6 <_ZN27TimerUltimateNextRoundStartC1Ev>
 863187f:	89 d8                	mov    %ebx,%eax
 8631881:	89 c2                	mov    %eax,%edx
 8631883:	8b 45 08             	mov    0x8(%ebp),%eax
 8631886:	89 90 98 00 00 00    	mov    %edx,0x98(%eax)
 863188c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631893:	e8 b8 2b 0f 00       	call   8724450 <_Znwj>
 8631898:	89 c3                	mov    %eax,%ebx
 863189a:	89 d8                	mov    %ebx,%eax
 863189c:	89 04 24             	mov    %eax,(%esp)
 863189f:	e8 5e ad 00 00       	call   863c602 <_ZN19TimerEventChristmasC1Ev>
 86318a4:	89 d8                	mov    %ebx,%eax
 86318a6:	89 c2                	mov    %eax,%edx
 86318a8:	8b 45 08             	mov    0x8(%ebp),%eax
 86318ab:	89 90 4c 01 00 00    	mov    %edx,0x14c(%eax)
 86318b1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86318b8:	e8 93 2b 0f 00       	call   8724450 <_Znwj>
 86318bd:	89 c3                	mov    %eax,%ebx
 86318bf:	89 d8                	mov    %ebx,%eax
 86318c1:	89 04 24             	mov    %eax,(%esp)
 86318c4:	e8 55 ad 00 00       	call   863c61e <_ZN32TimerStatisticsDetailChannelInfoC1Ev>
 86318c9:	89 d8                	mov    %ebx,%eax
 86318cb:	89 c2                	mov    %eax,%edx
 86318cd:	8b 45 08             	mov    0x8(%ebp),%eax
 86318d0:	89 90 50 01 00 00    	mov    %edx,0x150(%eax)
 86318d6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86318dd:	e8 6e 2b 0f 00       	call   8724450 <_Znwj>
 86318e2:	89 c3                	mov    %eax,%ebx
 86318e4:	89 d8                	mov    %ebx,%eax
 86318e6:	89 04 24             	mov    %eax,(%esp)
 86318e9:	e8 4c ad 00 00       	call   863c63a <_ZN19TimerStatisticLevelC1Ev>
 86318ee:	89 d8                	mov    %ebx,%eax
 86318f0:	89 c2                	mov    %eax,%edx
 86318f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86318f5:	89 90 54 01 00 00    	mov    %edx,0x154(%eax)
 86318fb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631902:	e8 49 2b 0f 00       	call   8724450 <_Znwj>
 8631907:	89 c3                	mov    %eax,%ebx
 8631909:	89 d8                	mov    %ebx,%eax
 863190b:	89 04 24             	mov    %eax,(%esp)
 863190e:	e8 43 ad 00 00       	call   863c656 <_ZN20TimerScheduleOneHourC1Ev>
 8631913:	89 d8                	mov    %ebx,%eax
 8631915:	89 c2                	mov    %eax,%edx
 8631917:	8b 45 08             	mov    0x8(%ebp),%eax
 863191a:	89 90 58 01 00 00    	mov    %edx,0x158(%eax)
 8631920:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631927:	e8 24 2b 0f 00       	call   8724450 <_Znwj>
 863192c:	89 c3                	mov    %eax,%ebx
 863192e:	89 d8                	mov    %ebx,%eax
 8631930:	89 04 24             	mov    %eax,(%esp)
 8631933:	e8 3a ad 00 00       	call   863c672 <_ZN23TimerSaveLogGamechannelC1Ev>
 8631938:	89 d8                	mov    %ebx,%eax
 863193a:	89 c2                	mov    %eax,%edx
 863193c:	8b 45 08             	mov    0x8(%ebp),%eax
 863193f:	89 90 60 01 00 00    	mov    %edx,0x160(%eax)
 8631945:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863194c:	e8 ff 2a 0f 00       	call   8724450 <_Znwj>
 8631951:	89 c3                	mov    %eax,%ebx
 8631953:	89 d8                	mov    %ebx,%eax
 8631955:	89 04 24             	mov    %eax,(%esp)
 8631958:	e8 31 ad 00 00       	call   863c68e <_ZN17TimerQueryCounterC1Ev>
 863195d:	89 d8                	mov    %ebx,%eax
 863195f:	89 c2                	mov    %eax,%edx
 8631961:	8b 45 08             	mov    0x8(%ebp),%eax
 8631964:	89 90 64 01 00 00    	mov    %edx,0x164(%eax)
 863196a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631971:	e8 da 2a 0f 00       	call   8724450 <_Znwj>
 8631976:	89 c3                	mov    %eax,%ebx
 8631978:	89 d8                	mov    %ebx,%eax
 863197a:	89 04 24             	mov    %eax,(%esp)
 863197d:	e8 28 ad 00 00       	call   863c6aa <_ZN12TimerNatTypeC1Ev>
 8631982:	89 d8                	mov    %ebx,%eax
 8631984:	89 c2                	mov    %eax,%edx
 8631986:	8b 45 08             	mov    0x8(%ebp),%eax
 8631989:	89 90 68 01 00 00    	mov    %edx,0x168(%eax)
 863198f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631996:	e8 b5 2a 0f 00       	call   8724450 <_Znwj>
 863199b:	89 c3                	mov    %eax,%ebx
 863199d:	89 d8                	mov    %ebx,%eax
 863199f:	89 04 24             	mov    %eax,(%esp)
 86319a2:	e8 1f ad 00 00       	call   863c6c6 <_ZN16TimerNatTypeUserC1Ev>
 86319a7:	89 d8                	mov    %ebx,%eax
 86319a9:	89 c2                	mov    %eax,%edx
 86319ab:	8b 45 08             	mov    0x8(%ebp),%eax
 86319ae:	89 90 6c 01 00 00    	mov    %edx,0x16c(%eax)
 86319b4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86319bb:	e8 90 2a 0f 00       	call   8724450 <_Znwj>
 86319c0:	89 c3                	mov    %eax,%ebx
 86319c2:	89 d8                	mov    %ebx,%eax
 86319c4:	89 04 24             	mov    %eax,(%esp)
 86319c7:	e8 16 ad 00 00       	call   863c6e2 <_ZN21TimerCheckMailTimeOutC1Ev>
 86319cc:	89 d8                	mov    %ebx,%eax
 86319ce:	89 c2                	mov    %eax,%edx
 86319d0:	8b 45 08             	mov    0x8(%ebp),%eax
 86319d3:	89 50 20             	mov    %edx,0x20(%eax)
 86319d6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86319dd:	e8 6e 2a 0f 00       	call   8724450 <_Znwj>
 86319e2:	89 c3                	mov    %eax,%ebx
 86319e4:	89 d8                	mov    %ebx,%eax
 86319e6:	89 04 24             	mov    %eax,(%esp)
 86319e9:	e8 10 ad 00 00       	call   863c6fe <_ZN13TimerCreatureC1Ev>
 86319ee:	89 d8                	mov    %ebx,%eax
 86319f0:	89 c2                	mov    %eax,%edx
 86319f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86319f5:	89 90 70 01 00 00    	mov    %edx,0x170(%eax)
 86319fb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631a02:	e8 49 2a 0f 00       	call   8724450 <_Znwj>
 8631a07:	89 c3                	mov    %eax,%ebx
 8631a09:	89 d8                	mov    %ebx,%eax
 8631a0b:	89 04 24             	mov    %eax,(%esp)
 8631a0e:	e8 07 ad 00 00       	call   863c71a <_ZN15TimerForbidChatC1Ev>
 8631a13:	89 d8                	mov    %ebx,%eax
 8631a15:	89 c2                	mov    %eax,%edx
 8631a17:	8b 45 08             	mov    0x8(%ebp),%eax
 8631a1a:	89 90 74 01 00 00    	mov    %edx,0x174(%eax)
 8631a20:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631a27:	e8 24 2a 0f 00       	call   8724450 <_Znwj>
 8631a2c:	89 c3                	mov    %eax,%ebx
 8631a2e:	89 d8                	mov    %ebx,%eax
 8631a30:	89 04 24             	mov    %eax,(%esp)
 8631a33:	e8 fe ac 00 00       	call   863c736 <_ZN15TimerForbidMoveC1Ev>
 8631a38:	89 d8                	mov    %ebx,%eax
 8631a3a:	89 c2                	mov    %eax,%edx
 8631a3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8631a3f:	89 90 78 01 00 00    	mov    %edx,0x178(%eax)
 8631a45:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631a4c:	e8 ff 29 0f 00       	call   8724450 <_Znwj>
 8631a51:	89 c3                	mov    %eax,%ebx
 8631a53:	89 d8                	mov    %ebx,%eax
 8631a55:	89 04 24             	mov    %eax,(%esp)
 8631a58:	e8 f5 ac 00 00       	call   863c752 <_ZN27TimerScheduleFiveMinPerUserC1Ev>
 8631a5d:	89 d8                	mov    %ebx,%eax
 8631a5f:	89 c2                	mov    %eax,%edx
 8631a61:	8b 45 08             	mov    0x8(%ebp),%eax
 8631a64:	89 90 7c 01 00 00    	mov    %edx,0x17c(%eax)
 8631a6a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631a71:	e8 da 29 0f 00       	call   8724450 <_Znwj>
 8631a76:	89 c3                	mov    %eax,%ebx
 8631a78:	89 d8                	mov    %ebx,%eax
 8631a7a:	89 04 24             	mov    %eax,(%esp)
 8631a7d:	e8 ec ac 00 00       	call   863c76e <_ZN26TimerScheduleTenMinPerUserC1Ev>
 8631a82:	89 d8                	mov    %ebx,%eax
 8631a84:	89 c2                	mov    %eax,%edx
 8631a86:	8b 45 08             	mov    0x8(%ebp),%eax
 8631a89:	89 90 80 01 00 00    	mov    %edx,0x180(%eax)
 8631a8f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631a96:	e8 b5 29 0f 00       	call   8724450 <_Znwj>
 8631a9b:	89 c3                	mov    %eax,%ebx
 8631a9d:	89 d8                	mov    %ebx,%eax
 8631a9f:	89 04 24             	mov    %eax,(%esp)
 8631aa2:	e8 e3 ac 00 00       	call   863c78a <_ZN17TimerQueueSizeLogC1Ev>
 8631aa7:	89 d8                	mov    %ebx,%eax
 8631aa9:	89 c2                	mov    %eax,%edx
 8631aab:	8b 45 08             	mov    0x8(%ebp),%eax
 8631aae:	89 90 84 01 00 00    	mov    %edx,0x184(%eax)
 8631ab4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631abb:	e8 90 29 0f 00       	call   8724450 <_Znwj>
 8631ac0:	89 c3                	mov    %eax,%ebx
 8631ac2:	89 d8                	mov    %ebx,%eax
 8631ac4:	89 04 24             	mov    %eax,(%esp)
 8631ac7:	e8 da ac 00 00       	call   863c7a6 <_ZN24TimerScheduleGuildWarEndC1Ev>
 8631acc:	89 d8                	mov    %ebx,%eax
 8631ace:	89 c2                	mov    %eax,%edx
 8631ad0:	8b 45 08             	mov    0x8(%ebp),%eax
 8631ad3:	89 90 88 01 00 00    	mov    %edx,0x188(%eax)
 8631ad9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631ae0:	e8 6b 29 0f 00       	call   8724450 <_Znwj>
 8631ae5:	89 c3                	mov    %eax,%ebx
 8631ae7:	89 d8                	mov    %ebx,%eax
 8631ae9:	89 04 24             	mov    %eax,(%esp)
 8631aec:	e8 d1 ac 00 00       	call   863c7c2 <_ZN18TimerSetPlayResultC1Ev>
 8631af1:	89 d8                	mov    %ebx,%eax
 8631af3:	89 c2                	mov    %eax,%edx
 8631af5:	8b 45 08             	mov    0x8(%ebp),%eax
 8631af8:	89 90 a4 00 00 00    	mov    %edx,0xa4(%eax)
 8631afe:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631b05:	e8 46 29 0f 00       	call   8724450 <_Znwj>
 8631b0a:	89 c3                	mov    %eax,%ebx
 8631b0c:	89 d8                	mov    %ebx,%eax
 8631b0e:	89 04 24             	mov    %eax,(%esp)
 8631b11:	e8 c8 ac 00 00       	call   863c7de <_ZN21TimerStartRelayBattleC1Ev>
 8631b16:	89 d8                	mov    %ebx,%eax
 8631b18:	89 c2                	mov    %eax,%edx
 8631b1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8631b1d:	89 90 8c 01 00 00    	mov    %edx,0x18c(%eax)
 8631b23:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631b2a:	e8 21 29 0f 00       	call   8724450 <_Znwj>
 8631b2f:	89 c3                	mov    %eax,%ebx
 8631b31:	89 d8                	mov    %ebx,%eax
 8631b33:	89 04 24             	mov    %eax,(%esp)
 8631b36:	e8 bf ac 00 00       	call   863c7fa <_ZN19TimerBossDieTimeoutC1Ev>
 8631b3b:	89 d8                	mov    %ebx,%eax
 8631b3d:	89 c2                	mov    %eax,%edx
 8631b3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8631b42:	89 90 90 01 00 00    	mov    %edx,0x190(%eax)
 8631b48:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631b4f:	e8 fc 28 0f 00       	call   8724450 <_Znwj>
 8631b54:	89 c3                	mov    %eax,%ebx
 8631b56:	89 d8                	mov    %ebx,%eax
 8631b58:	89 04 24             	mov    %eax,(%esp)
 8631b5b:	e8 b6 ac 00 00       	call   863c816 <_ZN20TimerEventCoinRefillC1Ev>
 8631b60:	89 d8                	mov    %ebx,%eax
 8631b62:	89 c2                	mov    %eax,%edx
 8631b64:	8b 45 08             	mov    0x8(%ebp),%eax
 8631b67:	89 90 94 01 00 00    	mov    %edx,0x194(%eax)
 8631b6d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631b74:	e8 d7 28 0f 00       	call   8724450 <_Znwj>
 8631b79:	89 c3                	mov    %eax,%ebx
 8631b7b:	89 d8                	mov    %ebx,%eax
 8631b7d:	89 04 24             	mov    %eax,(%esp)
 8631b80:	e8 ad ac 00 00       	call   863c832 <_ZN22TimerPvPDieUserRevive0C1Ev>
 8631b85:	89 d8                	mov    %ebx,%eax
 8631b87:	89 c2                	mov    %eax,%edx
 8631b89:	8b 45 08             	mov    0x8(%ebp),%eax
 8631b8c:	89 90 cc 00 00 00    	mov    %edx,0xcc(%eax)
 8631b92:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631b99:	e8 b2 28 0f 00       	call   8724450 <_Znwj>
 8631b9e:	89 c3                	mov    %eax,%ebx
 8631ba0:	89 d8                	mov    %ebx,%eax
 8631ba2:	89 04 24             	mov    %eax,(%esp)
 8631ba5:	e8 a4 ac 00 00       	call   863c84e <_ZN22TimerPvPDieUserRevive1C1Ev>
 8631baa:	89 d8                	mov    %ebx,%eax
 8631bac:	89 c2                	mov    %eax,%edx
 8631bae:	8b 45 08             	mov    0x8(%ebp),%eax
 8631bb1:	89 90 d0 00 00 00    	mov    %edx,0xd0(%eax)
 8631bb7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631bbe:	e8 8d 28 0f 00       	call   8724450 <_Znwj>
 8631bc3:	89 c3                	mov    %eax,%ebx
 8631bc5:	89 d8                	mov    %ebx,%eax
 8631bc7:	89 04 24             	mov    %eax,(%esp)
 8631bca:	e8 9b ac 00 00       	call   863c86a <_ZN22TimerPvPDieUserRevive2C1Ev>
 8631bcf:	89 d8                	mov    %ebx,%eax
 8631bd1:	89 c2                	mov    %eax,%edx
 8631bd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8631bd6:	89 90 d4 00 00 00    	mov    %edx,0xd4(%eax)
 8631bdc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631be3:	e8 68 28 0f 00       	call   8724450 <_Znwj>
 8631be8:	89 c3                	mov    %eax,%ebx
 8631bea:	89 d8                	mov    %ebx,%eax
 8631bec:	89 04 24             	mov    %eax,(%esp)
 8631bef:	e8 92 ac 00 00       	call   863c886 <_ZN22TimerPvPDieUserRevive3C1Ev>
 8631bf4:	89 d8                	mov    %ebx,%eax
 8631bf6:	89 c2                	mov    %eax,%edx
 8631bf8:	8b 45 08             	mov    0x8(%ebp),%eax
 8631bfb:	89 90 d8 00 00 00    	mov    %edx,0xd8(%eax)
 8631c01:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631c08:	e8 43 28 0f 00       	call   8724450 <_Znwj>
 8631c0d:	89 c3                	mov    %eax,%ebx
 8631c0f:	89 d8                	mov    %ebx,%eax
 8631c11:	89 04 24             	mov    %eax,(%esp)
 8631c14:	e8 89 ac 00 00       	call   863c8a2 <_ZN22TimerPvPDieUserRevive4C1Ev>
 8631c19:	89 d8                	mov    %ebx,%eax
 8631c1b:	89 c2                	mov    %eax,%edx
 8631c1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8631c20:	89 90 dc 00 00 00    	mov    %edx,0xdc(%eax)
 8631c26:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631c2d:	e8 1e 28 0f 00       	call   8724450 <_Znwj>
 8631c32:	89 c3                	mov    %eax,%ebx
 8631c34:	89 d8                	mov    %ebx,%eax
 8631c36:	89 04 24             	mov    %eax,(%esp)
 8631c39:	e8 80 ac 00 00       	call   863c8be <_ZN22TimerPvPDieUserRevive5C1Ev>
 8631c3e:	89 d8                	mov    %ebx,%eax
 8631c40:	89 c2                	mov    %eax,%edx
 8631c42:	8b 45 08             	mov    0x8(%ebp),%eax
 8631c45:	89 90 e0 00 00 00    	mov    %edx,0xe0(%eax)
 8631c4b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631c52:	e8 f9 27 0f 00       	call   8724450 <_Znwj>
 8631c57:	89 c3                	mov    %eax,%ebx
 8631c59:	89 d8                	mov    %ebx,%eax
 8631c5b:	89 04 24             	mov    %eax,(%esp)
 8631c5e:	e8 77 ac 00 00       	call   863c8da <_ZN22TimerPvPDieUserRevive6C1Ev>
 8631c63:	89 d8                	mov    %ebx,%eax
 8631c65:	89 c2                	mov    %eax,%edx
 8631c67:	8b 45 08             	mov    0x8(%ebp),%eax
 8631c6a:	89 90 e4 00 00 00    	mov    %edx,0xe4(%eax)
 8631c70:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631c77:	e8 d4 27 0f 00       	call   8724450 <_Znwj>
 8631c7c:	89 c3                	mov    %eax,%ebx
 8631c7e:	89 d8                	mov    %ebx,%eax
 8631c80:	89 04 24             	mov    %eax,(%esp)
 8631c83:	e8 6e ac 00 00       	call   863c8f6 <_ZN22TimerPvPDieUserRevive7C1Ev>
 8631c88:	89 d8                	mov    %ebx,%eax
 8631c8a:	89 c2                	mov    %eax,%edx
 8631c8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8631c8f:	89 90 e8 00 00 00    	mov    %edx,0xe8(%eax)
 8631c95:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631c9c:	e8 af 27 0f 00       	call   8724450 <_Znwj>
 8631ca1:	89 c3                	mov    %eax,%ebx
 8631ca3:	89 d8                	mov    %ebx,%eax
 8631ca5:	89 04 24             	mov    %eax,(%esp)
 8631ca8:	e8 65 ac 00 00       	call   863c912 <_ZN25TimerDungeonDataStatisticC1Ev>
 8631cad:	89 d8                	mov    %ebx,%eax
 8631caf:	89 c2                	mov    %eax,%edx
 8631cb1:	8b 45 08             	mov    0x8(%ebp),%eax
 8631cb4:	89 90 98 01 00 00    	mov    %edx,0x198(%eax)
 8631cba:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631cc1:	e8 8a 27 0f 00       	call   8724450 <_Znwj>
 8631cc6:	89 c3                	mov    %eax,%ebx
 8631cc8:	89 d8                	mov    %ebx,%eax
 8631cca:	89 04 24             	mov    %eax,(%esp)
 8631ccd:	e8 5c ac 00 00       	call   863c92e <_ZN27TimerNotResponseUserTimeoutC1Ev>
 8631cd2:	89 d8                	mov    %ebx,%eax
 8631cd4:	89 c2                	mov    %eax,%edx
 8631cd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8631cd9:	89 90 9c 01 00 00    	mov    %edx,0x19c(%eax)
 8631cdf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631ce6:	e8 65 27 0f 00       	call   8724450 <_Znwj>
 8631ceb:	89 c3                	mov    %eax,%ebx
 8631ced:	89 d8                	mov    %ebx,%eax
 8631cef:	89 04 24             	mov    %eax,(%esp)
 8631cf2:	e8 53 ac 00 00       	call   863c94a <_ZN22TimerLightServerNoticeC1Ev>
 8631cf7:	89 d8                	mov    %ebx,%eax
 8631cf9:	89 c2                	mov    %eax,%edx
 8631cfb:	8b 45 08             	mov    0x8(%ebp),%eax
 8631cfe:	89 90 a0 01 00 00    	mov    %edx,0x1a0(%eax)
 8631d04:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631d0b:	e8 40 27 0f 00       	call   8724450 <_Znwj>
 8631d10:	89 c3                	mov    %eax,%ebx
 8631d12:	89 d8                	mov    %ebx,%eax
 8631d14:	89 04 24             	mov    %eax,(%esp)
 8631d17:	e8 4a ac 00 00       	call   863c966 <_ZN23TimerInsertUserPlayTimeC1Ev>
 8631d1c:	89 d8                	mov    %ebx,%eax
 8631d1e:	89 c2                	mov    %eax,%edx
 8631d20:	8b 45 08             	mov    0x8(%ebp),%eax
 8631d23:	89 90 a4 01 00 00    	mov    %edx,0x1a4(%eax)
 8631d29:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631d30:	e8 1b 27 0f 00       	call   8724450 <_Znwj>
 8631d35:	89 c3                	mov    %eax,%ebx
 8631d37:	89 d8                	mov    %ebx,%eax
 8631d39:	89 04 24             	mov    %eax,(%esp)
 8631d3c:	e8 41 ac 00 00       	call   863c982 <_ZN26TimerCheckForcedDisconnectC1Ev>
 8631d41:	89 d8                	mov    %ebx,%eax
 8631d43:	89 c2                	mov    %eax,%edx
 8631d45:	8b 45 08             	mov    0x8(%ebp),%eax
 8631d48:	89 90 a8 01 00 00    	mov    %edx,0x1a8(%eax)
 8631d4e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631d55:	e8 f6 26 0f 00       	call   8724450 <_Znwj>
 8631d5a:	89 c3                	mov    %eax,%ebx
 8631d5c:	89 d8                	mov    %ebx,%eax
 8631d5e:	89 04 24             	mov    %eax,(%esp)
 8631d61:	e8 38 ac 00 00       	call   863c99e <_ZN21TimerCheckPvPRoomUserC1Ev>
 8631d66:	89 d8                	mov    %ebx,%eax
 8631d68:	89 c2                	mov    %eax,%edx
 8631d6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8631d6d:	89 90 f0 00 00 00    	mov    %edx,0xf0(%eax)
 8631d73:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631d7a:	e8 d1 26 0f 00       	call   8724450 <_Znwj>
 8631d7f:	89 c3                	mov    %eax,%ebx
 8631d81:	89 d8                	mov    %ebx,%eax
 8631d83:	89 04 24             	mov    %eax,(%esp)
 8631d86:	e8 2f ac 00 00       	call   863c9ba <_ZN26TimerCheckRecvPvpEndResultC1Ev>
 8631d8b:	89 d8                	mov    %ebx,%eax
 8631d8d:	89 c2                	mov    %eax,%edx
 8631d8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8631d92:	89 90 f4 00 00 00    	mov    %edx,0xf4(%eax)
 8631d98:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631d9f:	e8 ac 26 0f 00       	call   8724450 <_Znwj>
 8631da4:	89 c3                	mov    %eax,%ebx
 8631da6:	89 d8                	mov    %ebx,%eax
 8631da8:	89 04 24             	mov    %eax,(%esp)
 8631dab:	e8 26 ac 00 00       	call   863c9d6 <_ZN29TimerCheckHumanCertifyTimeoutC1Ev>
 8631db0:	89 d8                	mov    %ebx,%eax
 8631db2:	89 c2                	mov    %eax,%edx
 8631db4:	8b 45 08             	mov    0x8(%ebp),%eax
 8631db7:	89 50 24             	mov    %edx,0x24(%eax)
 8631dba:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631dc1:	e8 8a 26 0f 00       	call   8724450 <_Znwj>
 8631dc6:	89 c3                	mov    %eax,%ebx
 8631dc8:	89 d8                	mov    %ebx,%eax
 8631dca:	89 04 24             	mov    %eax,(%esp)
 8631dcd:	e8 20 ac 00 00       	call   863c9f2 <_ZN33TimerUpdateItemGenerateStatisticsC1Ev>
 8631dd2:	89 d8                	mov    %ebx,%eax
 8631dd4:	89 c2                	mov    %eax,%edx
 8631dd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8631dd9:	89 90 ac 01 00 00    	mov    %edx,0x1ac(%eax)
 8631ddf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631de6:	e8 65 26 0f 00       	call   8724450 <_Znwj>
 8631deb:	89 c3                	mov    %eax,%ebx
 8631ded:	89 d8                	mov    %ebx,%eax
 8631def:	89 04 24             	mov    %eax,(%esp)
 8631df2:	e8 17 ac 00 00       	call   863ca0e <_ZN19TimerUpdatePvPGradeC1Ev>
 8631df7:	89 d8                	mov    %ebx,%eax
 8631df9:	89 c2                	mov    %eax,%edx
 8631dfb:	8b 45 08             	mov    0x8(%ebp),%eax
 8631dfe:	89 90 b0 01 00 00    	mov    %edx,0x1b0(%eax)
 8631e04:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631e0b:	e8 40 26 0f 00       	call   8724450 <_Znwj>
 8631e10:	89 c3                	mov    %eax,%ebx
 8631e12:	89 d8                	mov    %ebx,%eax
 8631e14:	89 04 24             	mov    %eax,(%esp)
 8631e17:	e8 0e ac 00 00       	call   863ca2a <_ZN21TimerDetectDisconnectC1Ev>
 8631e1c:	89 d8                	mov    %ebx,%eax
 8631e1e:	89 c2                	mov    %eax,%edx
 8631e20:	8b 45 08             	mov    0x8(%ebp),%eax
 8631e23:	89 90 b4 01 00 00    	mov    %edx,0x1b4(%eax)
 8631e29:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631e30:	e8 1b 26 0f 00       	call   8724450 <_Znwj>
 8631e35:	89 c3                	mov    %eax,%ebx
 8631e37:	89 d8                	mov    %ebx,%eax
 8631e39:	89 04 24             	mov    %eax,(%esp)
 8631e3c:	e8 05 ac 00 00       	call   863ca46 <_ZN31TimerCompleteLoadAssaultTimeoutC1Ev>
 8631e41:	89 d8                	mov    %ebx,%eax
 8631e43:	89 c2                	mov    %eax,%edx
 8631e45:	8b 45 08             	mov    0x8(%ebp),%eax
 8631e48:	89 90 b8 01 00 00    	mov    %edx,0x1b8(%eax)
 8631e4e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631e55:	e8 f6 25 0f 00       	call   8724450 <_Znwj>
 8631e5a:	89 c3                	mov    %eax,%ebx
 8631e5c:	89 d8                	mov    %ebx,%eax
 8631e5e:	89 04 24             	mov    %eax,(%esp)
 8631e61:	e8 fc ab 00 00       	call   863ca62 <_ZN29TimerConnectP2PAssaultTimeoutC1Ev>
 8631e66:	89 d8                	mov    %ebx,%eax
 8631e68:	89 c2                	mov    %eax,%edx
 8631e6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8631e6d:	89 90 bc 01 00 00    	mov    %edx,0x1bc(%eax)
 8631e73:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631e7a:	e8 d1 25 0f 00       	call   8724450 <_Znwj>
 8631e7f:	89 c3                	mov    %eax,%ebx
 8631e81:	89 d8                	mov    %ebx,%eax
 8631e83:	89 04 24             	mov    %eax,(%esp)
 8631e86:	e8 f3 ab 00 00       	call   863ca7e <_ZN15TimerEndAssaultC1Ev>
 8631e8b:	89 d8                	mov    %ebx,%eax
 8631e8d:	89 c2                	mov    %eax,%edx
 8631e8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8631e92:	89 90 c0 01 00 00    	mov    %edx,0x1c0(%eax)
 8631e98:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631e9f:	e8 ac 25 0f 00       	call   8724450 <_Znwj>
 8631ea4:	89 c3                	mov    %eax,%ebx
 8631ea6:	89 d8                	mov    %ebx,%eax
 8631ea8:	89 04 24             	mov    %eax,(%esp)
 8631eab:	e8 ea ab 00 00       	call   863ca9a <_ZN17TimerCloseAssaultC1Ev>
 8631eb0:	89 d8                	mov    %ebx,%eax
 8631eb2:	89 c2                	mov    %eax,%edx
 8631eb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8631eb7:	89 90 c4 01 00 00    	mov    %edx,0x1c4(%eax)
 8631ebd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631ec4:	e8 87 25 0f 00       	call   8724450 <_Znwj>
 8631ec9:	89 c3                	mov    %eax,%ebx
 8631ecb:	89 d8                	mov    %ebx,%eax
 8631ecd:	89 04 24             	mov    %eax,(%esp)
 8631ed0:	e8 e1 ab 00 00       	call   863cab6 <_ZN36TimerCompleteLoadAfterAssaultTimeoutC1Ev>
 8631ed5:	89 d8                	mov    %ebx,%eax
 8631ed7:	89 c2                	mov    %eax,%edx
 8631ed9:	8b 45 08             	mov    0x8(%ebp),%eax
 8631edc:	89 90 a8 00 00 00    	mov    %edx,0xa8(%eax)
 8631ee2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631ee9:	e8 62 25 0f 00       	call   8724450 <_Znwj>
 8631eee:	89 c3                	mov    %eax,%ebx
 8631ef0:	89 d8                	mov    %ebx,%eax
 8631ef2:	89 04 24             	mov    %eax,(%esp)
 8631ef5:	e8 d8 ab 00 00       	call   863cad2 <_ZN34TimerConnectP2PAfterAssaultTimeoutC1Ev>
 8631efa:	89 d8                	mov    %ebx,%eax
 8631efc:	89 c2                	mov    %eax,%edx
 8631efe:	8b 45 08             	mov    0x8(%ebp),%eax
 8631f01:	89 90 c8 01 00 00    	mov    %edx,0x1c8(%eax)
 8631f07:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631f0e:	e8 3d 25 0f 00       	call   8724450 <_Znwj>
 8631f13:	89 c3                	mov    %eax,%ebx
 8631f15:	89 d8                	mov    %ebx,%eax
 8631f17:	89 04 24             	mov    %eax,(%esp)
 8631f1a:	e8 cf ab 00 00       	call   863caee <_ZN15TimerDeathTowerC1Ev>
 8631f1f:	89 d8                	mov    %ebx,%eax
 8631f21:	89 c2                	mov    %eax,%edx
 8631f23:	8b 45 08             	mov    0x8(%ebp),%eax
 8631f26:	89 90 24 01 00 00    	mov    %edx,0x124(%eax)
 8631f2c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631f33:	e8 18 25 0f 00       	call   8724450 <_Znwj>
 8631f38:	89 c3                	mov    %eax,%ebx
 8631f3a:	89 d8                	mov    %ebx,%eax
 8631f3c:	89 04 24             	mov    %eax,(%esp)
 8631f3f:	e8 aa ab 00 00       	call   863caee <_ZN15TimerDeathTowerC1Ev>
 8631f44:	89 d8                	mov    %ebx,%eax
 8631f46:	89 c2                	mov    %eax,%edx
 8631f48:	8b 45 08             	mov    0x8(%ebp),%eax
 8631f4b:	89 90 2c 01 00 00    	mov    %edx,0x12c(%eax)
 8631f51:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631f58:	e8 f3 24 0f 00       	call   8724450 <_Znwj>
 8631f5d:	89 c3                	mov    %eax,%ebx
 8631f5f:	89 d8                	mov    %ebx,%eax
 8631f61:	89 04 24             	mov    %eax,(%esp)
 8631f64:	e8 85 ab 00 00       	call   863caee <_ZN15TimerDeathTowerC1Ev>
 8631f69:	89 d8                	mov    %ebx,%eax
 8631f6b:	89 c2                	mov    %eax,%edx
 8631f6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8631f70:	89 90 30 01 00 00    	mov    %edx,0x130(%eax)
 8631f76:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631f7d:	e8 ce 24 0f 00       	call   8724450 <_Znwj>
 8631f82:	89 c3                	mov    %eax,%ebx
 8631f84:	89 d8                	mov    %ebx,%eax
 8631f86:	89 04 24             	mov    %eax,(%esp)
 8631f89:	e8 60 ab 00 00       	call   863caee <_ZN15TimerDeathTowerC1Ev>
 8631f8e:	89 d8                	mov    %ebx,%eax
 8631f90:	89 c2                	mov    %eax,%edx
 8631f92:	8b 45 08             	mov    0x8(%ebp),%eax
 8631f95:	89 90 34 01 00 00    	mov    %edx,0x134(%eax)
 8631f9b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631fa2:	e8 a9 24 0f 00       	call   8724450 <_Znwj>
 8631fa7:	89 c3                	mov    %eax,%ebx
 8631fa9:	89 d8                	mov    %ebx,%eax
 8631fab:	89 04 24             	mov    %eax,(%esp)
 8631fae:	e8 3b ab 00 00       	call   863caee <_ZN15TimerDeathTowerC1Ev>
 8631fb3:	89 d8                	mov    %ebx,%eax
 8631fb5:	89 c2                	mov    %eax,%edx
 8631fb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8631fba:	89 90 38 01 00 00    	mov    %edx,0x138(%eax)
 8631fc0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631fc7:	e8 84 24 0f 00       	call   8724450 <_Znwj>
 8631fcc:	89 c3                	mov    %eax,%ebx
 8631fce:	89 d8                	mov    %ebx,%eax
 8631fd0:	89 04 24             	mov    %eax,(%esp)
 8631fd3:	e8 16 ab 00 00       	call   863caee <_ZN15TimerDeathTowerC1Ev>
 8631fd8:	89 d8                	mov    %ebx,%eax
 8631fda:	89 c2                	mov    %eax,%edx
 8631fdc:	8b 45 08             	mov    0x8(%ebp),%eax
 8631fdf:	89 90 28 01 00 00    	mov    %edx,0x128(%eax)
 8631fe5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8631fec:	e8 5f 24 0f 00       	call   8724450 <_Znwj>
 8631ff1:	89 c3                	mov    %eax,%ebx
 8631ff3:	89 d8                	mov    %ebx,%eax
 8631ff5:	89 04 24             	mov    %eax,(%esp)
 8631ff8:	e8 0d ab 00 00       	call   863cb0a <_ZN30TimerDeathTowerTopRankerReloadC1Ev>
 8631ffd:	89 d8                	mov    %ebx,%eax
 8631fff:	89 c2                	mov    %eax,%edx
 8632001:	8b 45 08             	mov    0x8(%ebp),%eax
 8632004:	89 90 cc 01 00 00    	mov    %edx,0x1cc(%eax)
 863200a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632011:	e8 3a 24 0f 00       	call   8724450 <_Znwj>
 8632016:	89 c3                	mov    %eax,%ebx
 8632018:	89 d8                	mov    %ebx,%eax
 863201a:	89 04 24             	mov    %eax,(%esp)
 863201d:	e8 04 ab 00 00       	call   863cb26 <_ZN22TimerScheduleTenSecondC1Ev>
 8632022:	89 d8                	mov    %ebx,%eax
 8632024:	89 c2                	mov    %eax,%edx
 8632026:	8b 45 08             	mov    0x8(%ebp),%eax
 8632029:	89 90 5c 01 00 00    	mov    %edx,0x15c(%eax)
 863202f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632036:	e8 15 24 0f 00       	call   8724450 <_Znwj>
 863203b:	89 c3                	mov    %eax,%ebx
 863203d:	89 d8                	mov    %ebx,%eax
 863203f:	89 04 24             	mov    %eax,(%esp)
 8632042:	e8 fb aa 00 00       	call   863cb42 <_ZN21TimerFinishItemEffectC1Ev>
 8632047:	89 d8                	mov    %ebx,%eax
 8632049:	89 c2                	mov    %eax,%edx
 863204b:	8b 45 08             	mov    0x8(%ebp),%eax
 863204e:	89 90 d8 01 00 00    	mov    %edx,0x1d8(%eax)
 8632054:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863205b:	e8 f0 23 0f 00       	call   8724450 <_Znwj>
 8632060:	89 c3                	mov    %eax,%ebx
 8632062:	89 d8                	mov    %ebx,%eax
 8632064:	89 04 24             	mov    %eax,(%esp)
 8632067:	e8 f2 aa 00 00       	call   863cb5e <_ZN18TimerStartMatchingC1Ev>
 863206c:	89 d8                	mov    %ebx,%eax
 863206e:	89 c2                	mov    %eax,%edx
 8632070:	8b 45 08             	mov    0x8(%ebp),%eax
 8632073:	89 90 e4 01 00 00    	mov    %edx,0x1e4(%eax)
 8632079:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632080:	e8 cb 23 0f 00       	call   8724450 <_Znwj>
 8632085:	89 c3                	mov    %eax,%ebx
 8632087:	89 d8                	mov    %ebx,%eax
 8632089:	89 04 24             	mov    %eax,(%esp)
 863208c:	e8 e9 aa 00 00       	call   863cb7a <_ZN26TimerGlobalEffectItemBeginC1Ev>
 8632091:	89 d8                	mov    %ebx,%eax
 8632093:	89 c2                	mov    %eax,%edx
 8632095:	8b 45 08             	mov    0x8(%ebp),%eax
 8632098:	89 90 dc 01 00 00    	mov    %edx,0x1dc(%eax)
 863209e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86320a5:	e8 a6 23 0f 00       	call   8724450 <_Znwj>
 86320aa:	89 c3                	mov    %eax,%ebx
 86320ac:	89 d8                	mov    %ebx,%eax
 86320ae:	89 04 24             	mov    %eax,(%esp)
 86320b1:	e8 e0 aa 00 00       	call   863cb96 <_ZN28TimerGlobalEffectItemTimeoutC1Ev>
 86320b6:	89 d8                	mov    %ebx,%eax
 86320b8:	89 c2                	mov    %eax,%edx
 86320ba:	8b 45 08             	mov    0x8(%ebp),%eax
 86320bd:	89 90 e0 01 00 00    	mov    %edx,0x1e0(%eax)
 86320c3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86320ca:	e8 81 23 0f 00       	call   8724450 <_Znwj>
 86320cf:	89 c3                	mov    %eax,%ebx
 86320d1:	89 d8                	mov    %ebx,%eax
 86320d3:	89 04 24             	mov    %eax,(%esp)
 86320d6:	e8 d7 aa 00 00       	call   863cbb2 <_ZN29TimerVendingMachineItemNotifyC1Ev>
 86320db:	89 d8                	mov    %ebx,%eax
 86320dd:	89 c2                	mov    %eax,%edx
 86320df:	8b 45 08             	mov    0x8(%ebp),%eax
 86320e2:	89 50 28             	mov    %edx,0x28(%eax)
 86320e5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86320ec:	e8 5f 23 0f 00       	call   8724450 <_Znwj>
 86320f1:	89 c3                	mov    %eax,%ebx
 86320f3:	89 d8                	mov    %ebx,%eax
 86320f5:	89 04 24             	mov    %eax,(%esp)
 86320f8:	e8 d1 aa 00 00       	call   863cbce <_ZN25TimerConnectMonitorServerC1Ev>
 86320fd:	89 d8                	mov    %ebx,%eax
 86320ff:	89 c2                	mov    %eax,%edx
 8632101:	8b 45 08             	mov    0x8(%ebp),%eax
 8632104:	89 90 e8 01 00 00    	mov    %edx,0x1e8(%eax)
 863210a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632111:	e8 3a 23 0f 00       	call   8724450 <_Znwj>
 8632116:	89 c3                	mov    %eax,%ebx
 8632118:	89 d8                	mov    %ebx,%eax
 863211a:	89 04 24             	mov    %eax,(%esp)
 863211d:	e8 c8 aa 00 00       	call   863cbea <_ZN27TimerAssaultSuperPowerStateC1Ev>
 8632122:	89 d8                	mov    %ebx,%eax
 8632124:	89 c2                	mov    %eax,%edx
 8632126:	8b 45 08             	mov    0x8(%ebp),%eax
 8632129:	89 90 f8 01 00 00    	mov    %edx,0x1f8(%eax)
 863212f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632136:	e8 15 23 0f 00       	call   8724450 <_Znwj>
 863213b:	89 c3                	mov    %eax,%ebx
 863213d:	89 d8                	mov    %ebx,%eax
 863213f:	89 04 24             	mov    %eax,(%esp)
 8632142:	e8 a3 aa 00 00       	call   863cbea <_ZN27TimerAssaultSuperPowerStateC1Ev>
 8632147:	89 d8                	mov    %ebx,%eax
 8632149:	89 c2                	mov    %eax,%edx
 863214b:	8b 45 08             	mov    0x8(%ebp),%eax
 863214e:	89 90 fc 01 00 00    	mov    %edx,0x1fc(%eax)
 8632154:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863215b:	e8 f0 22 0f 00       	call   8724450 <_Znwj>
 8632160:	89 c3                	mov    %eax,%ebx
 8632162:	89 d8                	mov    %ebx,%eax
 8632164:	89 04 24             	mov    %eax,(%esp)
 8632167:	e8 9a aa 00 00       	call   863cc06 <_ZN18TimerNPCMoodChangeC1Ev>
 863216c:	89 d8                	mov    %ebx,%eax
 863216e:	89 c2                	mov    %eax,%edx
 8632170:	8b 45 08             	mov    0x8(%ebp),%eax
 8632173:	89 90 d0 01 00 00    	mov    %edx,0x1d0(%eax)
 8632179:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632180:	e8 cb 22 0f 00       	call   8724450 <_Znwj>
 8632185:	89 c3                	mov    %eax,%ebx
 8632187:	89 d8                	mov    %ebx,%eax
 8632189:	89 04 24             	mov    %eax,(%esp)
 863218c:	e8 91 aa 00 00       	call   863cc22 <_ZN20TimerElevatorDungeonC1Ev>
 8632191:	89 d8                	mov    %ebx,%eax
 8632193:	89 c2                	mov    %eax,%edx
 8632195:	8b 45 08             	mov    0x8(%ebp),%eax
 8632198:	89 90 a0 00 00 00    	mov    %edx,0xa0(%eax)
 863219e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86321a5:	e8 a6 22 0f 00       	call   8724450 <_Znwj>
 86321aa:	89 c3                	mov    %eax,%ebx
 86321ac:	89 d8                	mov    %ebx,%eax
 86321ae:	89 04 24             	mov    %eax,(%esp)
 86321b1:	e8 88 aa 00 00       	call   863cc3e <_ZN31TimerRefreshPowerWarProcessInfoC1Ev>
 86321b6:	89 d8                	mov    %ebx,%eax
 86321b8:	89 c2                	mov    %eax,%edx
 86321ba:	8b 45 08             	mov    0x8(%ebp),%eax
 86321bd:	89 90 ec 01 00 00    	mov    %edx,0x1ec(%eax)
 86321c3:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 86321ca:	e8 81 22 0f 00       	call   8724450 <_Znwj>
 86321cf:	89 c3                	mov    %eax,%ebx
 86321d1:	89 d8                	mov    %ebx,%eax
 86321d3:	89 04 24             	mov    %eax,(%esp)
 86321d6:	e8 7f aa 00 00       	call   863cc5a <_ZN20TimerGeneratePowerUpC1Ev>
 86321db:	eb 18                	jmp    86321f5 <_ZN15TimerDispatcherC1Ev+0xfeb>
 86321dd:	89 d6                	mov    %edx,%esi
 86321df:	89 c7                	mov    %eax,%edi
 86321e1:	89 1c 24             	mov    %ebx,(%esp)
 86321e4:	e8 07 23 0f 00       	call   87244f0 <_ZdlPv>
 86321e9:	89 f8                	mov    %edi,%eax
 86321eb:	89 f2                	mov    %esi,%edx
 86321ed:	89 04 24             	mov    %eax,(%esp)
 86321f0:	e8 5b 15 4b 00       	call   8ae3750 <_Unwind_Resume>
 86321f5:	89 d8                	mov    %ebx,%eax
 86321f7:	89 c2                	mov    %eax,%edx
 86321f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86321fc:	89 90 f0 01 00 00    	mov    %edx,0x1f0(%eax)
 8632202:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632209:	e8 42 22 0f 00       	call   8724450 <_Znwj>
 863220e:	89 c3                	mov    %eax,%ebx
 8632210:	89 d8                	mov    %ebx,%eax
 8632212:	89 04 24             	mov    %eax,(%esp)
 8632215:	e8 f8 99 00 00       	call   863bc12 <_ZN28TimerGeneratePowerUpNotiTimeC1Ev>
 863221a:	89 d8                	mov    %ebx,%eax
 863221c:	89 c2                	mov    %eax,%edx
 863221e:	8b 45 08             	mov    0x8(%ebp),%eax
 8632221:	89 90 f4 01 00 00    	mov    %edx,0x1f4(%eax)
 8632227:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863222e:	e8 1d 22 0f 00       	call   8724450 <_Znwj>
 8632233:	89 c3                	mov    %eax,%ebx
 8632235:	89 d8                	mov    %ebx,%eax
 8632237:	89 04 24             	mov    %eax,(%esp)
 863223a:	e8 8f aa 00 00       	call   863ccce <_ZN24TimerCheckPowerWarAbuserC1Ev>
 863223f:	89 d8                	mov    %ebx,%eax
 8632241:	89 c2                	mov    %eax,%edx
 8632243:	8b 45 08             	mov    0x8(%ebp),%eax
 8632246:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
 863224c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632253:	e8 f8 21 0f 00       	call   8724450 <_Znwj>
 8632258:	89 c3                	mov    %eax,%ebx
 863225a:	89 d8                	mov    %ebx,%eax
 863225c:	89 04 24             	mov    %eax,(%esp)
 863225f:	e8 86 aa 00 00       	call   863ccea <_ZN18TimerSetPunishUserC1Ev>
 8632264:	89 d8                	mov    %ebx,%eax
 8632266:	89 c2                	mov    %eax,%edx
 8632268:	8b 45 08             	mov    0x8(%ebp),%eax
 863226b:	89 90 04 02 00 00    	mov    %edx,0x204(%eax)
 8632271:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632278:	e8 d3 21 0f 00       	call   8724450 <_Znwj>
 863227d:	89 c3                	mov    %eax,%ebx
 863227f:	89 d8                	mov    %ebx,%eax
 8632281:	89 04 24             	mov    %eax,(%esp)
 8632284:	e8 7d aa 00 00       	call   863cd06 <_ZN23TimerSetTradePunishUserC1Ev>
 8632289:	89 d8                	mov    %ebx,%eax
 863228b:	89 c2                	mov    %eax,%edx
 863228d:	8b 45 08             	mov    0x8(%ebp),%eax
 8632290:	89 90 5c 02 00 00    	mov    %edx,0x25c(%eax)
 8632296:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863229d:	e8 ae 21 0f 00       	call   8724450 <_Znwj>
 86322a2:	89 c3                	mov    %eax,%ebx
 86322a4:	89 d8                	mov    %ebx,%eax
 86322a6:	89 04 24             	mov    %eax,(%esp)
 86322a9:	e8 74 aa 00 00       	call   863cd22 <_ZN18TimerRevivalCharacC1Ev>
 86322ae:	89 d8                	mov    %ebx,%eax
 86322b0:	89 c2                	mov    %eax,%edx
 86322b2:	8b 45 08             	mov    0x8(%ebp),%eax
 86322b5:	89 90 08 02 00 00    	mov    %edx,0x208(%eax)
 86322bb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86322c2:	e8 89 21 0f 00       	call   8724450 <_Znwj>
 86322c7:	89 c3                	mov    %eax,%ebx
 86322c9:	89 d8                	mov    %ebx,%eax
 86322cb:	89 04 24             	mov    %eax,(%esp)
 86322ce:	e8 6b aa 00 00       	call   863cd3e <_ZN16TimerRequestExitC1Ev>
 86322d3:	89 d8                	mov    %ebx,%eax
 86322d5:	89 c2                	mov    %eax,%edx
 86322d7:	8b 45 08             	mov    0x8(%ebp),%eax
 86322da:	89 90 10 02 00 00    	mov    %edx,0x210(%eax)
 86322e0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86322e7:	e8 64 21 0f 00       	call   8724450 <_Znwj>
 86322ec:	89 c3                	mov    %eax,%ebx
 86322ee:	89 d8                	mov    %ebx,%eax
 86322f0:	89 04 24             	mov    %eax,(%esp)
 86322f3:	e8 62 aa 00 00       	call   863cd5a <_ZN29TimerVillageMonsterUpdateRateC1Ev>
 86322f8:	89 d8                	mov    %ebx,%eax
 86322fa:	89 c2                	mov    %eax,%edx
 86322fc:	8b 45 08             	mov    0x8(%ebp),%eax
 86322ff:	89 90 14 02 00 00    	mov    %edx,0x214(%eax)
 8632305:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863230c:	e8 3f 21 0f 00       	call   8724450 <_Znwj>
 8632311:	89 c3                	mov    %eax,%ebx
 8632313:	89 d8                	mov    %ebx,%eax
 8632315:	89 04 24             	mov    %eax,(%esp)
 8632318:	e8 59 aa 00 00       	call   863cd76 <_ZN24TimerVillageMonsterRegenC1Ev>
 863231d:	89 d8                	mov    %ebx,%eax
 863231f:	89 c2                	mov    %eax,%edx
 8632321:	8b 45 08             	mov    0x8(%ebp),%eax
 8632324:	89 90 18 02 00 00    	mov    %edx,0x218(%eax)
 863232a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632331:	e8 1a 21 0f 00       	call   8724450 <_Znwj>
 8632336:	89 c3                	mov    %eax,%ebx
 8632338:	89 d8                	mov    %ebx,%eax
 863233a:	89 04 24             	mov    %eax,(%esp)
 863233d:	e8 50 aa 00 00       	call   863cd92 <_ZN25TimerStartVillageAttackedC1Ev>
 8632342:	89 d8                	mov    %ebx,%eax
 8632344:	89 c2                	mov    %eax,%edx
 8632346:	8b 45 08             	mov    0x8(%ebp),%eax
 8632349:	89 90 1c 02 00 00    	mov    %edx,0x21c(%eax)
 863234f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632356:	e8 f5 20 0f 00       	call   8724450 <_Znwj>
 863235b:	89 c3                	mov    %eax,%ebx
 863235d:	89 d8                	mov    %ebx,%eax
 863235f:	89 04 24             	mov    %eax,(%esp)
 8632362:	e8 47 aa 00 00       	call   863cdae <_ZN31TimerVillageAttackedPlayTimeoutC1Ev>
 8632367:	89 d8                	mov    %ebx,%eax
 8632369:	89 c2                	mov    %eax,%edx
 863236b:	8b 45 08             	mov    0x8(%ebp),%eax
 863236e:	89 90 9c 00 00 00    	mov    %edx,0x9c(%eax)
 8632374:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863237b:	e8 d0 20 0f 00       	call   8724450 <_Znwj>
 8632380:	89 c3                	mov    %eax,%ebx
 8632382:	89 d8                	mov    %ebx,%eax
 8632384:	89 04 24             	mov    %eax,(%esp)
 8632387:	e8 3e aa 00 00       	call   863cdca <_ZN22TimerItemUnlockWaitingC1Ev>
 863238c:	89 d8                	mov    %ebx,%eax
 863238e:	89 c2                	mov    %eax,%edx
 8632390:	8b 45 08             	mov    0x8(%ebp),%eax
 8632393:	89 90 20 02 00 00    	mov    %edx,0x220(%eax)
 8632399:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86323a0:	e8 ab 20 0f 00       	call   8724450 <_Znwj>
 86323a5:	89 c3                	mov    %eax,%ebx
 86323a7:	89 d8                	mov    %ebx,%eax
 86323a9:	89 04 24             	mov    %eax,(%esp)
 86323ac:	e8 35 aa 00 00       	call   863cde6 <_ZN32TimerUpdateCompoundEmblemStaticsC1Ev>
 86323b1:	89 d8                	mov    %ebx,%eax
 86323b3:	89 c2                	mov    %eax,%edx
 86323b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86323b8:	89 90 24 02 00 00    	mov    %edx,0x224(%eax)
 86323be:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86323c5:	e8 86 20 0f 00       	call   8724450 <_Znwj>
 86323ca:	89 c3                	mov    %eax,%ebx
 86323cc:	89 d8                	mov    %ebx,%eax
 86323ce:	89 04 24             	mov    %eax,(%esp)
 86323d1:	e8 2c aa 00 00       	call   863ce02 <_ZN36TimerStartExpEventAfterVillageAttackC1Ev>
 86323d6:	89 d8                	mov    %ebx,%eax
 86323d8:	89 c2                	mov    %eax,%edx
 86323da:	8b 45 08             	mov    0x8(%ebp),%eax
 86323dd:	89 90 28 02 00 00    	mov    %edx,0x228(%eax)
 86323e3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86323ea:	e8 61 20 0f 00       	call   8724450 <_Znwj>
 86323ef:	89 c3                	mov    %eax,%ebx
 86323f1:	89 d8                	mov    %ebx,%eax
 86323f3:	89 04 24             	mov    %eax,(%esp)
 86323f6:	e8 23 aa 00 00       	call   863ce1e <_ZN38Timer_Security_NonClient_CheckResponseC1Ev>
 86323fb:	89 d8                	mov    %ebx,%eax
 86323fd:	89 c2                	mov    %eax,%edx
 86323ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8632402:	89 90 30 02 00 00    	mov    %edx,0x230(%eax)
 8632408:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863240f:	e8 3c 20 0f 00       	call   8724450 <_Znwj>
 8632414:	89 c3                	mov    %eax,%ebx
 8632416:	89 d8                	mov    %ebx,%eax
 8632418:	89 04 24             	mov    %eax,(%esp)
 863241b:	e8 1a aa 00 00       	call   863ce3a <_ZN14Timer_MidnightC1Ev>
 8632420:	89 d8                	mov    %ebx,%eax
 8632422:	89 c2                	mov    %eax,%edx
 8632424:	8b 45 08             	mov    0x8(%ebp),%eax
 8632427:	89 90 34 02 00 00    	mov    %edx,0x234(%eax)
 863242d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632434:	e8 17 20 0f 00       	call   8724450 <_Znwj>
 8632439:	89 c3                	mov    %eax,%ebx
 863243b:	89 d8                	mov    %ebx,%eax
 863243d:	89 04 24             	mov    %eax,(%esp)
 8632440:	e8 11 aa 00 00       	call   863ce56 <_ZN32TimerEndPowerWarVictoriousRewardC1Ev>
 8632445:	89 d8                	mov    %ebx,%eax
 8632447:	89 c2                	mov    %eax,%edx
 8632449:	8b 45 08             	mov    0x8(%ebp),%eax
 863244c:	89 90 2c 02 00 00    	mov    %edx,0x22c(%eax)
 8632452:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632459:	e8 f2 1f 0f 00       	call   8724450 <_Znwj>
 863245e:	89 c3                	mov    %eax,%ebx
 8632460:	89 d8                	mov    %ebx,%eax
 8632462:	89 04 24             	mov    %eax,(%esp)
 8632465:	e8 08 aa 00 00       	call   863ce72 <_ZN23Timer_TenMinuteScheduleC1Ev>
 863246a:	89 d8                	mov    %ebx,%eax
 863246c:	89 c2                	mov    %eax,%edx
 863246e:	8b 45 08             	mov    0x8(%ebp),%eax
 8632471:	89 90 38 02 00 00    	mov    %edx,0x238(%eax)
 8632477:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863247e:	e8 cd 1f 0f 00       	call   8724450 <_Znwj>
 8632483:	89 c3                	mov    %eax,%ebx
 8632485:	89 d8                	mov    %ebx,%eax
 8632487:	89 04 24             	mov    %eax,(%esp)
 863248a:	e8 ff a9 00 00       	call   863ce8e <_ZN33Timer_UpdateOnlinePreliminaryTeamC1Ev>
 863248f:	89 d8                	mov    %ebx,%eax
 8632491:	89 c2                	mov    %eax,%edx
 8632493:	8b 45 08             	mov    0x8(%ebp),%eax
 8632496:	89 90 3c 02 00 00    	mov    %edx,0x23c(%eax)
 863249c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86324a3:	e8 a8 1f 0f 00       	call   8724450 <_Znwj>
 86324a8:	89 c3                	mov    %eax,%ebx
 86324aa:	89 d8                	mov    %ebx,%eax
 86324ac:	89 04 24             	mov    %eax,(%esp)
 86324af:	e8 f6 a9 00 00       	call   863ceaa <_ZN25Timer_SecretShopStatisticC1Ev>
 86324b4:	89 d8                	mov    %ebx,%eax
 86324b6:	89 c2                	mov    %eax,%edx
 86324b8:	8b 45 08             	mov    0x8(%ebp),%eax
 86324bb:	89 90 40 02 00 00    	mov    %edx,0x240(%eax)
 86324c1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86324c8:	e8 83 1f 0f 00       	call   8724450 <_Znwj>
 86324cd:	89 c3                	mov    %eax,%ebx
 86324cf:	89 d8                	mov    %ebx,%eax
 86324d1:	89 04 24             	mov    %eax,(%esp)
 86324d4:	e8 ed a9 00 00       	call   863cec6 <_ZN19Timer_DailyScheduleC1Ev>
 86324d9:	89 d8                	mov    %ebx,%eax
 86324db:	89 c2                	mov    %eax,%edx
 86324dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86324e0:	89 90 44 02 00 00    	mov    %edx,0x244(%eax)
 86324e6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86324ed:	e8 5e 1f 0f 00       	call   8724450 <_Znwj>
 86324f2:	89 c3                	mov    %eax,%ebx
 86324f4:	89 d8                	mov    %ebx,%eax
 86324f6:	89 04 24             	mov    %eax,(%esp)
 86324f9:	e8 e4 a9 00 00       	call   863cee2 <_ZN26Timer_ConnectP2PPvPTimeoutC1Ev>
 86324fe:	89 d8                	mov    %ebx,%eax
 8632500:	89 c2                	mov    %eax,%edx
 8632502:	8b 45 08             	mov    0x8(%ebp),%eax
 8632505:	89 90 ec 00 00 00    	mov    %edx,0xec(%eax)
 863250b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632512:	e8 39 1f 0f 00       	call   8724450 <_Znwj>
 8632517:	89 c3                	mov    %eax,%ebx
 8632519:	89 d8                	mov    %ebx,%eax
 863251b:	89 04 24             	mov    %eax,(%esp)
 863251e:	e8 db a9 00 00       	call   863cefe <_ZN21Timer_RoutingItemWaitC1Ev>
 8632523:	89 d8                	mov    %ebx,%eax
 8632525:	89 c2                	mov    %eax,%edx
 8632527:	8b 45 08             	mov    0x8(%ebp),%eax
 863252a:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 8632530:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632537:	e8 14 1f 0f 00       	call   8724450 <_Znwj>
 863253c:	89 c3                	mov    %eax,%ebx
 863253e:	89 d8                	mov    %ebx,%eax
 8632540:	89 04 24             	mov    %eax,(%esp)
 8632543:	e8 d2 a9 00 00       	call   863cf1a <_ZN21Timer_PcRoomAuthRetryC1Ev>
 8632548:	89 d8                	mov    %ebx,%eax
 863254a:	89 c2                	mov    %eax,%edx
 863254c:	8b 45 08             	mov    0x8(%ebp),%eax
 863254f:	89 90 48 02 00 00    	mov    %edx,0x248(%eax)
 8632555:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863255c:	e8 ef 1e 0f 00       	call   8724450 <_Znwj>
 8632561:	89 c3                	mov    %eax,%ebx
 8632563:	89 d8                	mov    %ebx,%eax
 8632565:	89 04 24             	mov    %eax,(%esp)
 8632568:	e8 c9 a9 00 00       	call   863cf36 <_ZN26Timer_DungeonInoutOpenTimeC1Ev>
 863256d:	89 d8                	mov    %ebx,%eax
 863256f:	89 c2                	mov    %eax,%edx
 8632571:	8b 45 08             	mov    0x8(%ebp),%eax
 8632574:	89 90 4c 02 00 00    	mov    %edx,0x24c(%eax)
 863257a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632581:	e8 ca 1e 0f 00       	call   8724450 <_Znwj>
 8632586:	89 c3                	mov    %eax,%ebx
 8632588:	89 d8                	mov    %ebx,%eax
 863258a:	89 04 24             	mov    %eax,(%esp)
 863258d:	e8 c0 a9 00 00       	call   863cf52 <_ZN27Timer_DungeonInoutCloseTimeC1Ev>
 8632592:	89 d8                	mov    %ebx,%eax
 8632594:	89 c2                	mov    %eax,%edx
 8632596:	8b 45 08             	mov    0x8(%ebp),%eax
 8632599:	89 90 50 02 00 00    	mov    %edx,0x250(%eax)
 863259f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86325a6:	e8 a5 1e 0f 00       	call   8724450 <_Znwj>
 86325ab:	89 c3                	mov    %eax,%ebx
 86325ad:	89 d8                	mov    %ebx,%eax
 86325af:	89 04 24             	mov    %eax,(%esp)
 86325b2:	e8 b7 a9 00 00       	call   863cf6e <_ZN20Timer_FairPvPRematchC1Ev>
 86325b7:	89 d8                	mov    %ebx,%eax
 86325b9:	89 c2                	mov    %eax,%edx
 86325bb:	8b 45 08             	mov    0x8(%ebp),%eax
 86325be:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
 86325c4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86325cb:	e8 80 1e 0f 00       	call   8724450 <_Znwj>
 86325d0:	89 c3                	mov    %eax,%ebx
 86325d2:	89 d8                	mov    %ebx,%eax
 86325d4:	89 04 24             	mov    %eax,(%esp)
 86325d7:	e8 ae a9 00 00       	call   863cf8a <_ZN23Timer_ReturnUserTimeoutC1Ev>
 86325dc:	89 d8                	mov    %ebx,%eax
 86325de:	89 c2                	mov    %eax,%edx
 86325e0:	8b 45 08             	mov    0x8(%ebp),%eax
 86325e3:	89 90 54 02 00 00    	mov    %edx,0x254(%eax)
 86325e9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86325f0:	e8 5b 1e 0f 00       	call   8724450 <_Znwj>
 86325f5:	89 c3                	mov    %eax,%ebx
 86325f7:	89 d8                	mov    %ebx,%eax
 86325f9:	89 04 24             	mov    %eax,(%esp)
 86325fc:	e8 a5 a9 00 00       	call   863cfa6 <_ZN20Timer_HadesHeartBeatC1Ev>
 8632601:	89 d8                	mov    %ebx,%eax
 8632603:	89 c2                	mov    %eax,%edx
 8632605:	8b 45 08             	mov    0x8(%ebp),%eax
 8632608:	89 90 58 02 00 00    	mov    %edx,0x258(%eax)
 863260e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632615:	e8 36 1e 0f 00       	call   8724450 <_Znwj>
 863261a:	89 c3                	mov    %eax,%ebx
 863261c:	89 d8                	mov    %ebx,%eax
 863261e:	89 04 24             	mov    %eax,(%esp)
 8632621:	e8 9c a9 00 00       	call   863cfc2 <_ZN26Timer_TOD_Send_ClearRewardC1Ev>
 8632626:	89 d8                	mov    %ebx,%eax
 8632628:	89 c2                	mov    %eax,%edx
 863262a:	8b 45 08             	mov    0x8(%ebp),%eax
 863262d:	89 90 b0 00 00 00    	mov    %edx,0xb0(%eax)
 8632633:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863263a:	e8 11 1e 0f 00       	call   8724450 <_Znwj>
 863263f:	89 c3                	mov    %eax,%ebx
 8632641:	89 d8                	mov    %ebx,%eax
 8632643:	89 04 24             	mov    %eax,(%esp)
 8632646:	e8 93 a9 00 00       	call   863cfde <_ZN21Timer_OneADayItemShopC1Ev>
 863264b:	89 d8                	mov    %ebx,%eax
 863264d:	89 c2                	mov    %eax,%edx
 863264f:	8b 45 08             	mov    0x8(%ebp),%eax
 8632652:	89 90 64 02 00 00    	mov    %edx,0x264(%eax)
 8632658:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863265f:	e8 ec 1d 0f 00       	call   8724450 <_Znwj>
 8632664:	89 c3                	mov    %eax,%ebx
 8632666:	89 d8                	mov    %ebx,%eax
 8632668:	89 04 24             	mov    %eax,(%esp)
 863266b:	e8 8a a9 00 00       	call   863cffa <_ZN23Timer_Schedule_MidNightC1Ev>
 8632670:	89 d8                	mov    %ebx,%eax
 8632672:	89 c2                	mov    %eax,%edx
 8632674:	8b 45 08             	mov    0x8(%ebp),%eax
 8632677:	89 90 68 02 00 00    	mov    %edx,0x268(%eax)
 863267d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632684:	e8 c7 1d 0f 00       	call   8724450 <_Znwj>
 8632689:	89 c3                	mov    %eax,%ebx
 863268b:	89 d8                	mov    %ebx,%eax
 863268d:	89 04 24             	mov    %eax,(%esp)
 8632690:	e8 81 a9 00 00       	call   863d016 <_ZN24Timer_Send_Ontime_RewardC1Ev>
 8632695:	89 d8                	mov    %ebx,%eax
 8632697:	89 c2                	mov    %eax,%edx
 8632699:	8b 45 08             	mov    0x8(%ebp),%eax
 863269c:	89 90 6c 02 00 00    	mov    %edx,0x26c(%eax)
 86326a2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86326a9:	e8 a2 1d 0f 00       	call   8724450 <_Znwj>
 86326ae:	89 c3                	mov    %eax,%ebx
 86326b0:	89 d8                	mov    %ebx,%eax
 86326b2:	89 04 24             	mov    %eax,(%esp)
 86326b5:	e8 78 a9 00 00       	call   863d032 <_ZN21Timer_EventManagementC1Ev>
 86326ba:	89 d8                	mov    %ebx,%eax
 86326bc:	89 c2                	mov    %eax,%edx
 86326be:	8b 45 08             	mov    0x8(%ebp),%eax
 86326c1:	89 90 70 02 00 00    	mov    %edx,0x270(%eax)
 86326c7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86326ce:	e8 7d 1d 0f 00       	call   8724450 <_Znwj>
 86326d3:	89 c3                	mov    %eax,%ebx
 86326d5:	89 d8                	mov    %ebx,%eax
 86326d7:	89 04 24             	mov    %eax,(%esp)
 86326da:	e8 6f a9 00 00       	call   863d04e <_ZN36Timer_QuickPartyWaitingPartyMatchingC1Ev>
 86326df:	89 d8                	mov    %ebx,%eax
 86326e1:	89 c2                	mov    %eax,%edx
 86326e3:	8b 45 08             	mov    0x8(%ebp),%eax
 86326e6:	89 90 78 02 00 00    	mov    %edx,0x278(%eax)
 86326ec:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86326f3:	e8 58 1d 0f 00       	call   8724450 <_Znwj>
 86326f8:	89 c3                	mov    %eax,%ebx
 86326fa:	89 d8                	mov    %ebx,%eax
 86326fc:	89 04 24             	mov    %eax,(%esp)
 86326ff:	e8 66 a9 00 00       	call   863d06a <_ZN32Timer_QuickPartyWaitingStartGameC1Ev>
 8632704:	89 d8                	mov    %ebx,%eax
 8632706:	89 c2                	mov    %eax,%edx
 8632708:	8b 45 08             	mov    0x8(%ebp),%eax
 863270b:	89 90 b4 00 00 00    	mov    %edx,0xb4(%eax)
 8632711:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632718:	e8 33 1d 0f 00       	call   8724450 <_Znwj>
 863271d:	89 c3                	mov    %eax,%ebx
 863271f:	89 d8                	mov    %ebx,%eax
 8632721:	89 04 24             	mov    %eax,(%esp)
 8632724:	e8 5d a9 00 00       	call   863d086 <_ZN23Timer_AssaultGhostTimerC1Ev>
 8632729:	89 d8                	mov    %ebx,%eax
 863272b:	89 c2                	mov    %eax,%edx
 863272d:	8b 45 08             	mov    0x8(%ebp),%eax
 8632730:	89 90 80 02 00 00    	mov    %edx,0x280(%eax)
 8632736:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863273d:	e8 0e 1d 0f 00       	call   8724450 <_Znwj>
 8632742:	89 c3                	mov    %eax,%ebx
 8632744:	89 d8                	mov    %ebx,%eax
 8632746:	89 04 24             	mov    %eax,(%esp)
 8632749:	e8 54 a9 00 00       	call   863d0a2 <_ZN25Timer_GenerateCaptchaDataC1Ev>
 863274e:	89 d8                	mov    %ebx,%eax
 8632750:	89 c2                	mov    %eax,%edx
 8632752:	8b 45 08             	mov    0x8(%ebp),%eax
 8632755:	89 90 84 02 00 00    	mov    %edx,0x284(%eax)
 863275b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632762:	e8 e9 1c 0f 00       	call   8724450 <_Znwj>
 8632767:	89 c3                	mov    %eax,%ebx
 8632769:	89 d8                	mov    %ebx,%eax
 863276b:	89 04 24             	mov    %eax,(%esp)
 863276e:	e8 4b a9 00 00       	call   863d0be <_ZN42Timer_TournamentDugeonClearStateNotiRewardC1Ev>
 8632773:	89 d8                	mov    %ebx,%eax
 8632775:	89 c2                	mov    %eax,%edx
 8632777:	8b 45 08             	mov    0x8(%ebp),%eax
 863277a:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 8632780:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632787:	e8 c4 1c 0f 00       	call   8724450 <_Znwj>
 863278c:	89 c3                	mov    %eax,%ebx
 863278e:	89 d8                	mov    %ebx,%eax
 8632790:	89 04 24             	mov    %eax,(%esp)
 8632793:	e8 42 a9 00 00       	call   863d0da <_ZN38Timer_TournametDungeonClearStateSelectC1Ev>
 8632798:	89 d8                	mov    %ebx,%eax
 863279a:	89 c2                	mov    %eax,%edx
 863279c:	8b 45 08             	mov    0x8(%ebp),%eax
 863279f:	89 90 bc 00 00 00    	mov    %edx,0xbc(%eax)
 86327a5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86327ac:	e8 9f 1c 0f 00       	call   8724450 <_Znwj>
 86327b1:	89 c3                	mov    %eax,%ebx
 86327b3:	89 d8                	mov    %ebx,%eax
 86327b5:	89 04 24             	mov    %eax,(%esp)
 86327b8:	e8 39 a9 00 00       	call   863d0f6 <_ZN17Timer_TowerOnTimeC1Ev>
 86327bd:	89 d8                	mov    %ebx,%eax
 86327bf:	89 c2                	mov    %eax,%edx
 86327c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86327c4:	89 90 8c 02 00 00    	mov    %edx,0x28c(%eax)
 86327ca:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86327d1:	e8 7a 1c 0f 00       	call   8724450 <_Znwj>
 86327d6:	89 c3                	mov    %eax,%ebx
 86327d8:	89 d8                	mov    %ebx,%eax
 86327da:	89 04 24             	mov    %eax,(%esp)
 86327dd:	e8 14 a9 00 00       	call   863d0f6 <_ZN17Timer_TowerOnTimeC1Ev>
 86327e2:	89 d8                	mov    %ebx,%eax
 86327e4:	89 c2                	mov    %eax,%edx
 86327e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86327e9:	89 90 90 02 00 00    	mov    %edx,0x290(%eax)
 86327ef:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86327f6:	e8 55 1c 0f 00       	call   8724450 <_Znwj>
 86327fb:	89 c3                	mov    %eax,%ebx
 86327fd:	89 d8                	mov    %ebx,%eax
 86327ff:	89 04 24             	mov    %eax,(%esp)
 8632802:	e8 ef a8 00 00       	call   863d0f6 <_ZN17Timer_TowerOnTimeC1Ev>
 8632807:	89 d8                	mov    %ebx,%eax
 8632809:	89 c2                	mov    %eax,%edx
 863280b:	8b 45 08             	mov    0x8(%ebp),%eax
 863280e:	89 90 94 02 00 00    	mov    %edx,0x294(%eax)
 8632814:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 863281b:	e8 30 1c 0f 00       	call   8724450 <_Znwj>
 8632820:	89 c3                	mov    %eax,%ebx
 8632822:	89 d8                	mov    %ebx,%eax
 8632824:	89 04 24             	mov    %eax,(%esp)
 8632827:	e8 02 94 00 00       	call   863bc2e <_ZN33Timer_NoticeEmergencyPatchMessageC1Ev>
 863282c:	89 d8                	mov    %ebx,%eax
 863282e:	89 c2                	mov    %eax,%edx
 8632830:	8b 45 08             	mov    0x8(%ebp),%eax
 8632833:	89 90 88 02 00 00    	mov    %edx,0x288(%eax)
 8632839:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632840:	e8 0b 1c 0f 00       	call   8724450 <_Znwj>
 8632845:	89 c3                	mov    %eax,%ebx
 8632847:	89 d8                	mov    %ebx,%eax
 8632849:	89 04 24             	mov    %eax,(%esp)
 863284c:	e8 c1 a8 00 00       	call   863d112 <_ZN12advancealtar14Timer_MainTickC1Ev>
 8632851:	89 d8                	mov    %ebx,%eax
 8632853:	89 c2                	mov    %eax,%edx
 8632855:	8b 45 08             	mov    0x8(%ebp),%eax
 8632858:	89 90 98 02 00 00    	mov    %edx,0x298(%eax)
 863285e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632865:	e8 e6 1b 0f 00       	call   8724450 <_Znwj>
 863286a:	89 c3                	mov    %eax,%ebx
 863286c:	89 d8                	mov    %ebx,%eax
 863286e:	89 04 24             	mov    %eax,(%esp)
 8632871:	e8 b8 a8 00 00       	call   863d12e <_ZN12advancealtar18Timer_StageControlC1Ev>
 8632876:	89 d8                	mov    %ebx,%eax
 8632878:	89 c2                	mov    %eax,%edx
 863287a:	8b 45 08             	mov    0x8(%ebp),%eax
 863287d:	89 90 9c 02 00 00    	mov    %edx,0x29c(%eax)
 8632883:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863288a:	e8 c1 1b 0f 00       	call   8724450 <_Znwj>
 863288f:	89 c3                	mov    %eax,%ebx
 8632891:	89 d8                	mov    %ebx,%eax
 8632893:	89 04 24             	mov    %eax,(%esp)
 8632896:	e8 93 a8 00 00       	call   863d12e <_ZN12advancealtar18Timer_StageControlC1Ev>
 863289b:	89 d8                	mov    %ebx,%eax
 863289d:	89 c2                	mov    %eax,%edx
 863289f:	8b 45 08             	mov    0x8(%ebp),%eax
 86328a2:	89 90 a0 02 00 00    	mov    %edx,0x2a0(%eax)
 86328a8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86328af:	e8 9c 1b 0f 00       	call   8724450 <_Znwj>
 86328b4:	89 c3                	mov    %eax,%ebx
 86328b6:	89 d8                	mov    %ebx,%eax
 86328b8:	89 04 24             	mov    %eax,(%esp)
 86328bb:	e8 6e a8 00 00       	call   863d12e <_ZN12advancealtar18Timer_StageControlC1Ev>
 86328c0:	89 d8                	mov    %ebx,%eax
 86328c2:	89 c2                	mov    %eax,%edx
 86328c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86328c7:	89 90 a4 02 00 00    	mov    %edx,0x2a4(%eax)
 86328cd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86328d4:	e8 77 1b 0f 00       	call   8724450 <_Znwj>
 86328d9:	89 c3                	mov    %eax,%ebx
 86328db:	89 d8                	mov    %ebx,%eax
 86328dd:	89 04 24             	mov    %eax,(%esp)
 86328e0:	e8 49 a8 00 00       	call   863d12e <_ZN12advancealtar18Timer_StageControlC1Ev>
 86328e5:	89 d8                	mov    %ebx,%eax
 86328e7:	89 c2                	mov    %eax,%edx
 86328e9:	8b 45 08             	mov    0x8(%ebp),%eax
 86328ec:	89 90 a8 02 00 00    	mov    %edx,0x2a8(%eax)
 86328f2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86328f9:	e8 52 1b 0f 00       	call   8724450 <_Znwj>
 86328fe:	89 c3                	mov    %eax,%ebx
 8632900:	89 d8                	mov    %ebx,%eax
 8632902:	89 04 24             	mov    %eax,(%esp)
 8632905:	e8 4a 93 00 00       	call   863bc54 <_ZN35Timer_DungeonStatisticEntrance_HourC1Ev>
 863290a:	89 d8                	mov    %ebx,%eax
 863290c:	89 c2                	mov    %eax,%edx
 863290e:	8b 45 08             	mov    0x8(%ebp),%eax
 8632911:	89 90 ac 02 00 00    	mov    %edx,0x2ac(%eax)
 8632917:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 863291e:	e8 2d 1b 0f 00       	call   8724450 <_Znwj>
 8632923:	89 c3                	mov    %eax,%ebx
 8632925:	89 d8                	mov    %ebx,%eax
 8632927:	89 04 24             	mov    %eax,(%esp)
 863292a:	e8 1b a8 00 00       	call   863d14a <_ZN24Timer_RefreshServerStateC1Ev>
 863292f:	89 d8                	mov    %ebx,%eax
 8632931:	89 c2                	mov    %eax,%edx
 8632933:	8b 45 08             	mov    0x8(%ebp),%eax
 8632936:	89 90 b0 02 00 00    	mov    %edx,0x2b0(%eax)
 863293c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632943:	e8 08 1b 0f 00       	call   8724450 <_Znwj>
 8632948:	89 c3                	mov    %eax,%ebx
 863294a:	89 d8                	mov    %ebx,%eax
 863294c:	89 04 24             	mov    %eax,(%esp)
 863294f:	e8 12 a8 00 00       	call   863d166 <_ZN19Timer_StayTimeEventC1Ev>
 8632954:	89 d8                	mov    %ebx,%eax
 8632956:	89 c2                	mov    %eax,%edx
 8632958:	8b 45 08             	mov    0x8(%ebp),%eax
 863295b:	89 90 b4 02 00 00    	mov    %edx,0x2b4(%eax)
 8632961:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8632968:	e8 e3 1a 0f 00       	call   8724450 <_Znwj>
 863296d:	89 c3                	mov    %eax,%ebx
 863296f:	89 d8                	mov    %ebx,%eax
 8632971:	89 04 24             	mov    %eax,(%esp)
 8632974:	e8 09 a8 00 00       	call   863d182 <_ZN21Timer_CreateDnfDbLoadC1Ev>
 8632979:	89 d8                	mov    %ebx,%eax
 863297b:	89 c2                	mov    %eax,%edx
 863297d:	8b 45 08             	mov    0x8(%ebp),%eax
 8632980:	89 90 b8 02 00 00    	mov    %edx,0x2b8(%eax)
 8632986:	83 c4 2c             	add    $0x2c,%esp
 8632989:	5b                   	pop    %ebx
 863298a:	5e                   	pop    %esi
 863298b:	5f                   	pop    %edi
 863298c:	5d                   	pop    %ebp
 863298d:	c3                   	ret

```

```c
// TimerDispatcher::TimerDispatcher @ 0x863120a

/* TimerDispatcher::TimerDispatcher() */

void __thiscall TimerDispatcher::TimerDispatcher(TimerDispatcher *this)

{
  TimerCheckConn *this_00;
  TimerDBUpdate *this_01;
  TimerStamina *this_02;
  TimerMapLoading *this_03;
  TimerSetResult *this_04;
  TimerDungeonClear *this_05;
  TimerDungeonFail *this_06;
  TimerPartyWalkOutLackUser *this_07;
  TimerPVPWalkOutLackUser *this_08;
  TimerFatigueReset *this_09;
  TimerAvatarExpire *this_10;
  TimerStatisticsLog *this_11;
  TimerCardSelect *this_12;
  TimerClearDungeonReward *this_13;
  TimerClearDungeonScoreScoll *this_14;
  TimerClearDungeonCardSelectRight *this_15;
  TimerPremiumServiceOver *this_16;
  TimerPremiumServiceUpdate *this_17;
  TimerPremiumServiceStart *this_18;
  TimerCheckPaidPCRoomTerm *this_19;
  TimerEPLPReturnVillage *this_20;
  TimerEPLPCommandWait *this_21;
  TimerWarRoomWaitCount *this_22;
  TimerWarRoomReadyLockCount *this_23;
  TimerWarRoomBattlePauseCount *this_24;
  TimerWarRoomResultCount *this_25;
  TImerWarRoomTimeBomb *this_26;
  TimerWarRoomCheckFail *this_27;
  TimerWarRoomChangeHost *this_28;
  TimerBloodSmallRoundRegister *this_29;
  TimerBloodPhaseRegister0 *this_30;
  TimerBloodPhaseRegister1 *this_31;
  TimerBloodPhaseRegister2 *this_32;
  TimerBloodPhaseRegister3 *this_33;
  TimerBloodPhaseRegister4 *this_34;
  TimerBloodPhaseRegister5 *this_35;
  TimerBloodPhaseRegister6 *this_36;
  TimerBloodPhaseRegister7 *this_37;
  TimerBloodPhaseRegister8 *this_38;
  TimerBloodPhaseRegister9 *this_39;
  TimerBloodCrazyMonster *this_40;
  TimerBloodDungeonClearReward *pTVar1;
  TimerUltimateNextRoundStart *this_41;
  TimerEventChristmas *this_42;
  TimerStatisticsDetailChannelInfo *this_43;
  TimerStatisticLevel *this_44;
  TimerScheduleOneHour *this_45;
  TimerSaveLogGamechannel *this_46;
  TimerQueryCounter *this_47;
  TimerNatType *this_48;
  TimerNatTypeUser *this_49;
  TimerCheckMailTimeOut *this_50;
  TimerCreature *this_51;
  TimerForbidChat *this_52;
  TimerForbidMove *this_53;
  TimerScheduleFiveMinPerUser *this_54;
  TimerScheduleTenMinPerUser *this_55;
  TimerQueueSizeLog *this_56;
  TimerScheduleGuildWarEnd *this_57;
  TimerSetPlayResult *this_58;
  TimerStartRelayBattle *this_59;
  TimerBossDieTimeout *this_60;
  TimerEventCoinRefill *this_61;
  TimerPvPDieUserRevive0 *this_62;
  TimerPvPDieUserRevive1 *this_63;
  TimerPvPDieUserRevive2 *this_64;
  TimerPvPDieUserRevive3 *this_65;
  TimerPvPDieUserRevive4 *this_66;
  TimerPvPDieUserRevive5 *this_67;
  TimerPvPDieUserRevive6 *this_68;
  TimerPvPDieUserRevive7 *this_69;
  TimerDungeonDataStatistic *this_70;
  TimerNotResponseUserTimeout *this_71;
  TimerLightServerNotice *this_72;
  TimerInsertUserPlayTime *this_73;
  TimerCheckForcedDisconnect *this_74;
  TimerCheckPvPRoomUser *this_75;
  TimerCheckRecvPvpEndResult *this_76;
  TimerCheckHumanCertifyTimeout *this_77;
  TimerUpdateItemGenerateStatistics *this_78;
  TimerUpdatePvPGrade *this_79;
  TimerDetectDisconnect *this_80;
  TimerCompleteLoadAssaultTimeout *this_81;
  TimerConnectP2PAssaultTimeout *this_82;
  TimerEndAssault *this_83;
  TimerCloseAssault *this_84;
  TimerCompleteLoadAfterAssaultTimeout *this_85;
  TimerConnectP2PAfterAssaultTimeout *this_86;
  TimerDeathTower *pTVar2;
  TimerDeathTowerTopRankerReload *this_87;
  TimerScheduleTenSecond *this_88;
  TimerFinishItemEffect *this_89;
  TimerStartMatching *this_90;
  TimerGlobalEffectItemBegin *this_91;
  TimerGlobalEffectItemTimeout *this_92;
  TimerVendingMachineItemNotify *this_93;
  TimerConnectMonitorServer *this_94;
  TimerAssaultSuperPowerState *pTVar3;
  TimerNPCMoodChange *this_95;
  TimerElevatorDungeon *this_96;
  TimerRefreshPowerWarProcessInfo *this_97;
  TimerGeneratePowerUp *this_98;
  TimerGeneratePowerUpNotiTime *this_99;
  TimerCheckPowerWarAbuser *this_x00100;
  TimerSetPunishUser *this_x00101;
  TimerSetTradePunishUser *this_x00102;
  TimerRevivalCharac *this_x00103;
  TimerRequestExit *this_x00104;
  TimerVillageMonsterUpdateRate *this_x00105;
  TimerVillageMonsterRegen *this_x00106;
  TimerStartVillageAttacked *this_x00107;
  TimerVillageAttackedPlayTimeout *this_x00108;
  TimerItemUnlockWaiting *this_x00109;
  TimerUpdateCompoundEmblemStatics *this_x00110;
  TimerStartExpEventAfterVillageAttack *this_x00111;
  Timer_Security_NonClient_CheckResponse *this_x00112;
  Timer_Midnight *this_x00113;
  TimerEndPowerWarVictoriousReward *this_x00114;
  Timer_TenMinuteSchedule *this_x00115;
  Timer_UpdateOnlinePreliminaryTeam *this_x00116;
  Timer_SecretShopStatistic *this_x00117;
  Timer_DailySchedule *this_x00118;
  Timer_ConnectP2PPvPTimeout *this_x00119;
  Timer_RoutingItemWait *this_x00120;
  Timer_PcRoomAuthRetry *this_x00121;
  Timer_DungeonInoutOpenTime *this_x00122;
  Timer_DungeonInoutCloseTime *this_x00123;
  Timer_FairPvPRematch *this_x00124;
  Timer_ReturnUserTimeout *this_x00125;
  Timer_HadesHeartBeat *this_x00126;
  Timer_TOD_Send_ClearReward *this_x00127;
  Timer_OneADayItemShop *this_x00128;
  Timer_Schedule_MidNight *this_x00129;
  Timer_Send_Ontime_Reward *this_x00130;
  Timer_EventManagement *this_x00131;
  Timer_QuickPartyWaitingPartyMatching *this_x00132;
  Timer_QuickPartyWaitingStartGame *this_x00133;
  Timer_AssaultGhostTimer *this_x00134;
  Timer_GenerateCaptchaData *this_x00135;
  Timer_TournamentDugeonClearStateNotiReward *this_x00136;
  Timer_TournametDungeonClearStateSelect *this_x00137;
  Timer_TowerOnTime *pTVar4;
  Timer_NoticeEmergencyPatchMessage *this_x00138;
  Timer_MainTick *this_x00139;
  Timer_StageControl *pTVar5;
  Timer_DungeonStatisticEntrance_Hour *this_x00140;
  Timer_RefreshServerState *this_x00141;
  Timer_StayTimeEvent *this_x00142;
  Timer_CreateDnfDbLoad *this_x00143;
  int local_20;
  
  for (local_20 = 0; local_20 < 0xaf; local_20 = local_20 + 1) {
    *(undefined4 *)(this + local_20 * 4) = 0;
  }
  this_00 = operator_new(4);
  TimerCheckConn::TimerCheckConn(this_00);
  *(TimerCheckConn **)this = this_00;
  this_01 = operator_new(4);
  TimerDBUpdate::TimerDBUpdate(this_01);
  *(TimerDBUpdate **)(this + 4) = this_01;
  this_02 = operator_new(4);
  TimerStamina::TimerStamina(this_02);
  *(TimerStamina **)(this + 8) = this_02;
  this_03 = operator_new(4);
  TimerMapLoading::TimerMapLoading(this_03);
  *(TimerMapLoading **)(this + 0x2c) = this_03;
  this_04 = operator_new(4);
  TimerSetResult::TimerSetResult(this_04);
  *(TimerSetResult **)(this + 0x30) = this_04;
  this_05 = operator_new(4);
  TimerDungeonClear::TimerDungeonClear(this_05);
  *(TimerDungeonClear **)(this + 0x34) = this_05;
  this_06 = operator_new(4);
  TimerDungeonFail::TimerDungeonFail(this_06);
  *(TimerDungeonFail **)(this + 0x38) = this_06;
  this_07 = operator_new(4);
  TimerPartyWalkOutLackUser::TimerPartyWalkOutLackUser(this_07);
  *(TimerPartyWalkOutLackUser **)(this + 0x3c) = this_07;
  this_08 = operator_new(4);
  TimerPVPWalkOutLackUser::TimerPVPWalkOutLackUser(this_08);
  *(TimerPVPWalkOutLackUser **)(this + 0xc4) = this_08;
  this_09 = operator_new(4);
  TimerFatigueReset::TimerFatigueReset(this_09);
  *(TimerFatigueReset **)(this + 0x140) = this_09;
  this_10 = operator_new(4);
  TimerAvatarExpire::TimerAvatarExpire(this_10);
  *(TimerAvatarExpire **)(this + 0x144) = this_10;
  this_11 = operator_new(4);
  TimerStatisticsLog::TimerStatisticsLog(this_11);
  *(TimerStatisticsLog **)(this + 0x148) = this_11;
  this_12 = operator_new(4);
  TimerCardSelect::TimerCardSelect(this_12);
  *(TimerCardSelect **)(this + 0x40) = this_12;
  this_13 = operator_new(4);
  TimerClearDungeonReward::TimerClearDungeonReward(this_13);
  *(TimerClearDungeonReward **)(this + 0x44) = this_13;
  this_14 = operator_new(4);
  TimerClearDungeonScoreScoll::TimerClearDungeonScoreScoll(this_14);
  *(TimerClearDungeonScoreScoll **)(this + 0x48) = this_14;
  this_15 = operator_new(4);
  TimerClearDungeonCardSelectRight::TimerClearDungeonCardSelectRight(this_15);
  *(TimerClearDungeonCardSelectRight **)(this + 0x4c) = this_15;
  this_16 = operator_new(4);
  TimerPremiumServiceOver::TimerPremiumServiceOver(this_16);
  *(TimerPremiumServiceOver **)(this + 0x10) = this_16;
  this_17 = operator_new(4);
  TimerPremiumServiceUpdate::TimerPremiumServiceUpdate(this_17);
  *(TimerPremiumServiceUpdate **)(this + 0x14) = this_17;
  this_18 = operator_new(4);
  TimerPremiumServiceStart::TimerPremiumServiceStart(this_18);
  *(TimerPremiumServiceStart **)(this + 0x18) = this_18;
  this_19 = operator_new(4);
  TimerCheckPaidPCRoomTerm::TimerCheckPaidPCRoomTerm(this_19);
  *(TimerCheckPaidPCRoomTerm **)(this + 0x1c) = this_19;
  this_20 = operator_new(4);
  TimerEPLPReturnVillage::TimerEPLPReturnVillage(this_20);
  *(TimerEPLPReturnVillage **)(this + 0x50) = this_20;
  this_21 = operator_new(4);
  TimerEPLPCommandWait::TimerEPLPCommandWait(this_21);
  *(TimerEPLPCommandWait **)(this + 0x54) = this_21;
  this_22 = operator_new(4);
  TimerWarRoomWaitCount::TimerWarRoomWaitCount(this_22);
  *(TimerWarRoomWaitCount **)(this + 0x104) = this_22;
  this_23 = operator_new(4);
  TimerWarRoomReadyLockCount::TimerWarRoomReadyLockCount(this_23);
  *(TimerWarRoomReadyLockCount **)(this + 0x108) = this_23;
  this_24 = operator_new(4);
  TimerWarRoomBattlePauseCount::TimerWarRoomBattlePauseCount(this_24);
  *(TimerWarRoomBattlePauseCount **)(this + 0x10c) = this_24;
  this_25 = operator_new(4);
  TimerWarRoomResultCount::TimerWarRoomResultCount(this_25);
  *(TimerWarRoomResultCount **)(this + 0x110) = this_25;
  this_26 = operator_new(4);
  TImerWarRoomTimeBomb::TImerWarRoomTimeBomb(this_26);
  *(TImerWarRoomTimeBomb **)(this + 0x114) = this_26;
  this_27 = operator_new(4);
  TimerWarRoomCheckFail::TimerWarRoomCheckFail(this_27);
  *(TimerWarRoomCheckFail **)(this + 0x118) = this_27;
  this_28 = operator_new(4);
  TimerWarRoomChangeHost::TimerWarRoomChangeHost(this_28);
  *(TimerWarRoomChangeHost **)(this + 0x11c) = this_28;
  this_29 = operator_new(4);
  TimerBloodSmallRoundRegister::TimerBloodSmallRoundRegister(this_29);
  *(TimerBloodSmallRoundRegister **)(this + 0x58) = this_29;
  this_30 = operator_new(4);
  TimerBloodPhaseRegister0::TimerBloodPhaseRegister0(this_30);
  *(TimerBloodPhaseRegister0 **)(this + 0x5c) = this_30;
  this_31 = operator_new(4);
  TimerBloodPhaseRegister1::TimerBloodPhaseRegister1(this_31);
  *(TimerBloodPhaseRegister1 **)(this + 0x60) = this_31;
  this_32 = operator_new(4);
  TimerBloodPhaseRegister2::TimerBloodPhaseRegister2(this_32);
  *(TimerBloodPhaseRegister2 **)(this + 100) = this_32;
  this_33 = operator_new(4);
  TimerBloodPhaseRegister3::TimerBloodPhaseRegister3(this_33);
  *(TimerBloodPhaseRegister3 **)(this + 0x68) = this_33;
  this_34 = operator_new(4);
  TimerBloodPhaseRegister4::TimerBloodPhaseRegister4(this_34);
  *(TimerBloodPhaseRegister4 **)(this + 0x6c) = this_34;
  this_35 = operator_new(4);
  TimerBloodPhaseRegister5::TimerBloodPhaseRegister5(this_35);
  *(TimerBloodPhaseRegister5 **)(this + 0x70) = this_35;
  this_36 = operator_new(4);
  TimerBloodPhaseRegister6::TimerBloodPhaseRegister6(this_36);
  *(TimerBloodPhaseRegister6 **)(this + 0x74) = this_36;
  this_37 = operator_new(4);
  TimerBloodPhaseRegister7::TimerBloodPhaseRegister7(this_37);
  *(TimerBloodPhaseRegister7 **)(this + 0x78) = this_37;
  this_38 = operator_new(4);
  TimerBloodPhaseRegister8::TimerBloodPhaseRegister8(this_38);
  *(TimerBloodPhaseRegister8 **)(this + 0x7c) = this_38;
  this_39 = operator_new(4);
  TimerBloodPhaseRegister9::TimerBloodPhaseRegister9(this_39);
  *(TimerBloodPhaseRegister9 **)(this + 0x80) = this_39;
  this_40 = operator_new(4);
  TimerBloodCrazyMonster::TimerBloodCrazyMonster(this_40);
  *(TimerBloodCrazyMonster **)(this + 0x84) = this_40;
  pTVar1 = operator_new(4);
  TimerBloodDungeonClearReward::TimerBloodDungeonClearReward(pTVar1);
  *(TimerBloodDungeonClearReward **)(this + 0x88) = pTVar1;
  pTVar1 = operator_new(4);
  TimerBloodDungeonClearReward::TimerBloodDungeonClearReward(pTVar1);
  *(TimerBloodDungeonClearReward **)(this + 0x8c) = pTVar1;
  pTVar1 = operator_new(4);
  TimerBloodDungeonClearReward::TimerBloodDungeonClearReward(pTVar1);
  *(TimerBloodDungeonClearReward **)(this + 0x90) = pTVar1;
  pTVar1 = operator_new(4);
  TimerBloodDungeonClearReward::TimerBloodDungeonClearReward(pTVar1);
  *(TimerBloodDungeonClearReward **)(this + 0x94) = pTVar1;
  this_41 = operator_new(4);
  TimerUltimateNextRoundStart::TimerUltimateNextRoundStart(this_41);
  *(TimerUltimateNextRoundStart **)(this + 0x98) = this_41;
  this_42 = operator_new(4);
  TimerEventChristmas::TimerEventChristmas(this_42);
  *(TimerEventChristmas **)(this + 0x14c) = this_42;
  this_43 = operator_new(4);
  TimerStatisticsDetailChannelInfo::TimerStatisticsDetailChannelInfo(this_43);
  *(TimerStatisticsDetailChannelInfo **)(this + 0x150) = this_43;
  this_44 = operator_new(4);
  TimerStatisticLevel::TimerStatisticLevel(this_44);
  *(TimerStatisticLevel **)(this + 0x154) = this_44;
  this_45 = operator_new(4);
  TimerScheduleOneHour::TimerScheduleOneHour(this_45);
  *(TimerScheduleOneHour **)(this + 0x158) = this_45;
  this_46 = operator_new(4);
  TimerSaveLogGamechannel::TimerSaveLogGamechannel(this_46);
  *(TimerSaveLogGamechannel **)(this + 0x160) = this_46;
  this_47 = operator_new(4);
  TimerQueryCounter::TimerQueryCounter(this_47);
  *(TimerQueryCounter **)(this + 0x164) = this_47;
  this_48 = operator_new(4);
  TimerNatType::TimerNatType(this_48);
  *(TimerNatType **)(this + 0x168) = this_48;
  this_49 = operator_new(4);
  TimerNatTypeUser::TimerNatTypeUser(this_49);
  *(TimerNatTypeUser **)(this + 0x16c) = this_49;
  this_50 = operator_new(4);
  TimerCheckMailTimeOut::TimerCheckMailTimeOut(this_50);
  *(TimerCheckMailTimeOut **)(this + 0x20) = this_50;
  this_51 = operator_new(4);
  TimerCreature::TimerCreature(this_51);
  *(TimerCreature **)(this + 0x170) = this_51;
  this_52 = operator_new(4);
  TimerForbidChat::TimerForbidChat(this_52);
  *(TimerForbidChat **)(this + 0x174) = this_52;
  this_53 = operator_new(4);
  TimerForbidMove::TimerForbidMove(this_53);
  *(TimerForbidMove **)(this + 0x178) = this_53;
  this_54 = operator_new(4);
  TimerScheduleFiveMinPerUser::TimerScheduleFiveMinPerUser(this_54);
  *(TimerScheduleFiveMinPerUser **)(this + 0x17c) = this_54;
  this_55 = operator_new(4);
  TimerScheduleTenMinPerUser::TimerScheduleTenMinPerUser(this_55);
  *(TimerScheduleTenMinPerUser **)(this + 0x180) = this_55;
  this_56 = operator_new(4);
  TimerQueueSizeLog::TimerQueueSizeLog(this_56);
  *(TimerQueueSizeLog **)(this + 0x184) = this_56;
  this_57 = operator_new(4);
  TimerScheduleGuildWarEnd::TimerScheduleGuildWarEnd(this_57);
  *(TimerScheduleGuildWarEnd **)(this + 0x188) = this_57;
  this_58 = operator_new(4);
  TimerSetPlayResult::TimerSetPlayResult(this_58);
  *(TimerSetPlayResult **)(this + 0xa4) = this_58;
  this_59 = operator_new(4);
  TimerStartRelayBattle::TimerStartRelayBattle(this_59);
  *(TimerStartRelayBattle **)(this + 0x18c) = this_59;
  this_60 = operator_new(4);
  TimerBossDieTimeout::TimerBossDieTimeout(this_60);
  *(TimerBossDieTimeout **)(this + 400) = this_60;
  this_61 = operator_new(4);
  TimerEventCoinRefill::TimerEventCoinRefill(this_61);
  *(TimerEventCoinRefill **)(this + 0x194) = this_61;
  this_62 = operator_new(4);
  TimerPvPDieUserRevive0::TimerPvPDieUserRevive0(this_62);
  *(TimerPvPDieUserRevive0 **)(this + 0xcc) = this_62;
  this_63 = operator_new(4);
  TimerPvPDieUserRevive1::TimerPvPDieUserRevive1(this_63);
  *(TimerPvPDieUserRevive1 **)(this + 0xd0) = this_63;
  this_64 = operator_new(4);
  TimerPvPDieUserRevive2::TimerPvPDieUserRevive2(this_64);
  *(TimerPvPDieUserRevive2 **)(this + 0xd4) = this_64;
  this_65 = operator_new(4);
  TimerPvPDieUserRevive3::TimerPvPDieUserRevive3(this_65);
  *(TimerPvPDieUserRevive3 **)(this + 0xd8) = this_65;
  this_66 = operator_new(4);
  TimerPvPDieUserRevive4::TimerPvPDieUserRevive4(this_66);
  *(TimerPvPDieUserRevive4 **)(this + 0xdc) = this_66;
  this_67 = operator_new(4);
  TimerPvPDieUserRevive5::TimerPvPDieUserRevive5(this_67);
  *(TimerPvPDieUserRevive5 **)(this + 0xe0) = this_67;
  this_68 = operator_new(4);
  TimerPvPDieUserRevive6::TimerPvPDieUserRevive6(this_68);
  *(TimerPvPDieUserRevive6 **)(this + 0xe4) = this_68;
  this_69 = operator_new(4);
  TimerPvPDieUserRevive7::TimerPvPDieUserRevive7(this_69);
  *(TimerPvPDieUserRevive7 **)(this + 0xe8) = this_69;
  this_70 = operator_new(4);
  TimerDungeonDataStatistic::TimerDungeonDataStatistic(this_70);
  *(TimerDungeonDataStatistic **)(this + 0x198) = this_70;
  this_71 = operator_new(4);
  TimerNotResponseUserTimeout::TimerNotResponseUserTimeout(this_71);
  *(TimerNotResponseUserTimeout **)(this + 0x19c) = this_71;
  this_72 = operator_new(4);
  TimerLightServerNotice::TimerLightServerNotice(this_72);
  *(TimerLightServerNotice **)(this + 0x1a0) = this_72;
  this_73 = operator_new(4);
  TimerInsertUserPlayTime::TimerInsertUserPlayTime(this_73);
  *(TimerInsertUserPlayTime **)(this + 0x1a4) = this_73;
  this_74 = operator_new(4);
  TimerCheckForcedDisconnect::TimerCheckForcedDisconnect(this_74);
  *(TimerCheckForcedDisconnect **)(this + 0x1a8) = this_74;
  this_75 = operator_new(4);
  TimerCheckPvPRoomUser::TimerCheckPvPRoomUser(this_75);
  *(TimerCheckPvPRoomUser **)(this + 0xf0) = this_75;
  this_76 = operator_new(4);
  TimerCheckRecvPvpEndResult::TimerCheckRecvPvpEndResult(this_76);
  *(TimerCheckRecvPvpEndResult **)(this + 0xf4) = this_76;
  this_77 = operator_new(4);
  TimerCheckHumanCertifyTimeout::TimerCheckHumanCertifyTimeout(this_77);
  *(TimerCheckHumanCertifyTimeout **)(this + 0x24) = this_77;
  this_78 = operator_new(4);
  TimerUpdateItemGenerateStatistics::TimerUpdateItemGenerateStatistics(this_78);
  *(TimerUpdateItemGenerateStatistics **)(this + 0x1ac) = this_78;
  this_79 = operator_new(4);
  TimerUpdatePvPGrade::TimerUpdatePvPGrade(this_79);
  *(TimerUpdatePvPGrade **)(this + 0x1b0) = this_79;
  this_80 = operator_new(4);
  TimerDetectDisconnect::TimerDetectDisconnect(this_80);
  *(TimerDetectDisconnect **)(this + 0x1b4) = this_80;
  this_81 = operator_new(4);
  TimerCompleteLoadAssaultTimeout::TimerCompleteLoadAssaultTimeout(this_81);
  *(TimerCompleteLoadAssaultTimeout **)(this + 0x1b8) = this_81;
  this_82 = operator_new(4);
  TimerConnectP2PAssaultTimeout::TimerConnectP2PAssaultTimeout(this_82);
  *(TimerConnectP2PAssaultTimeout **)(this + 0x1bc) = this_82;
  this_83 = operator_new(4);
  TimerEndAssault::TimerEndAssault(this_83);
  *(TimerEndAssault **)(this + 0x1c0) = this_83;
  this_84 = operator_new(4);
  TimerCloseAssault::TimerCloseAssault(this_84);
  *(TimerCloseAssault **)(this + 0x1c4) = this_84;
  this_85 = operator_new(4);
  TimerCompleteLoadAfterAssaultTimeout::TimerCompleteLoadAfterAssaultTimeout(this_85);
  *(TimerCompleteLoadAfterAssaultTimeout **)(this + 0xa8) = this_85;
  this_86 = operator_new(4);
  TimerConnectP2PAfterAssaultTimeout::TimerConnectP2PAfterAssaultTimeout(this_86);
  *(TimerConnectP2PAfterAssaultTimeout **)(this + 0x1c8) = this_86;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x124) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 300) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x130) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x134) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x138) = pTVar2;
  pTVar2 = operator_new(4);
  TimerDeathTower::TimerDeathTower(pTVar2);
  *(TimerDeathTower **)(this + 0x128) = pTVar2;
  this_87 = operator_new(4);
  TimerDeathTowerTopRankerReload::TimerDeathTowerTopRankerReload(this_87);
  *(TimerDeathTowerTopRankerReload **)(this + 0x1cc) = this_87;
  this_88 = operator_new(4);
  TimerScheduleTenSecond::TimerScheduleTenSecond(this_88);
  *(TimerScheduleTenSecond **)(this + 0x15c) = this_88;
  this_89 = operator_new(4);
  TimerFinishItemEffect::TimerFinishItemEffect(this_89);
  *(TimerFinishItemEffect **)(this + 0x1d8) = this_89;
  this_90 = operator_new(4);
  TimerStartMatching::TimerStartMatching(this_90);
  *(TimerStartMatching **)(this + 0x1e4) = this_90;
  this_91 = operator_new(4);
  TimerGlobalEffectItemBegin::TimerGlobalEffectItemBegin(this_91);
  *(TimerGlobalEffectItemBegin **)(this + 0x1dc) = this_91;
  this_92 = operator_new(4);
  TimerGlobalEffectItemTimeout::TimerGlobalEffectItemTimeout(this_92);
  *(TimerGlobalEffectItemTimeout **)(this + 0x1e0) = this_92;
  this_93 = operator_new(4);
  TimerVendingMachineItemNotify::TimerVendingMachineItemNotify(this_93);
  *(TimerVendingMachineItemNotify **)(this + 0x28) = this_93;
  this_94 = operator_new(4);
  TimerConnectMonitorServer::TimerConnectMonitorServer(this_94);
  *(TimerConnectMonitorServer **)(this + 0x1e8) = this_94;
  pTVar3 = operator_new(4);
  TimerAssaultSuperPowerState::TimerAssaultSuperPowerState(pTVar3);
  *(TimerAssaultSuperPowerState **)(this + 0x1f8) = pTVar3;
  pTVar3 = operator_new(4);
  TimerAssaultSuperPowerState::TimerAssaultSuperPowerState(pTVar3);
  *(TimerAssaultSuperPowerState **)(this + 0x1fc) = pTVar3;
  this_95 = operator_new(4);
  TimerNPCMoodChange::TimerNPCMoodChange(this_95);
  *(TimerNPCMoodChange **)(this + 0x1d0) = this_95;
  this_96 = operator_new(4);
  TimerElevatorDungeon::TimerElevatorDungeon(this_96);
  *(TimerElevatorDungeon **)(this + 0xa0) = this_96;
  this_97 = operator_new(4);
  TimerRefreshPowerWarProcessInfo::TimerRefreshPowerWarProcessInfo(this_97);
  *(TimerRefreshPowerWarProcessInfo **)(this + 0x1ec) = this_97;
  this_98 = operator_new(0x1c);
                    /* try { // try from 086321d6 to 086321da has its CatchHandler @ 086321dd */
  TimerGeneratePowerUp::TimerGeneratePowerUp(this_98);
  *(TimerGeneratePowerUp **)(this + 0x1f0) = this_98;
  this_99 = operator_new(4);
  TimerGeneratePowerUpNotiTime::TimerGeneratePowerUpNotiTime(this_99);
  *(TimerGeneratePowerUpNotiTime **)(this + 500) = this_99;
  this_x00100 = operator_new(4);
  TimerCheckPowerWarAbuser::TimerCheckPowerWarAbuser(this_x00100);
  *(TimerCheckPowerWarAbuser **)(this + 0x200) = this_x00100;
  this_x00101 = operator_new(4);
  TimerSetPunishUser::TimerSetPunishUser(this_x00101);
  *(TimerSetPunishUser **)(this + 0x204) = this_x00101;
  this_x00102 = operator_new(4);
  TimerSetTradePunishUser::TimerSetTradePunishUser(this_x00102);
  *(TimerSetTradePunishUser **)(this + 0x25c) = this_x00102;
  this_x00103 = operator_new(4);
  TimerRevivalCharac::TimerRevivalCharac(this_x00103);
  *(TimerRevivalCharac **)(this + 0x208) = this_x00103;
  this_x00104 = operator_new(4);
  TimerRequestExit::TimerRequestExit(this_x00104);
  *(TimerRequestExit **)(this + 0x210) = this_x00104;
  this_x00105 = operator_new(4);
  TimerVillageMonsterUpdateRate::TimerVillageMonsterUpdateRate(this_x00105);
  *(TimerVillageMonsterUpdateRate **)(this + 0x214) = this_x00105;
  this_x00106 = operator_new(4);
  TimerVillageMonsterRegen::TimerVillageMonsterRegen(this_x00106);
  *(TimerVillageMonsterRegen **)(this + 0x218) = this_x00106;
  this_x00107 = operator_new(4);
  TimerStartVillageAttacked::TimerStartVillageAttacked(this_x00107);
  *(TimerStartVillageAttacked **)(this + 0x21c) = this_x00107;
  this_x00108 = operator_new(4);
  TimerVillageAttackedPlayTimeout::TimerVillageAttackedPlayTimeout(this_x00108);
  *(TimerVillageAttackedPlayTimeout **)(this + 0x9c) = this_x00108;
  this_x00109 = operator_new(4);
  TimerItemUnlockWaiting::TimerItemUnlockWaiting(this_x00109);
  *(TimerItemUnlockWaiting **)(this + 0x220) = this_x00109;
  this_x00110 = operator_new(4);
  TimerUpdateCompoundEmblemStatics::TimerUpdateCompoundEmblemStatics(this_x00110);
  *(TimerUpdateCompoundEmblemStatics **)(this + 0x224) = this_x00110;
  this_x00111 = operator_new(4);
  TimerStartExpEventAfterVillageAttack::TimerStartExpEventAfterVillageAttack(this_x00111);
  *(TimerStartExpEventAfterVillageAttack **)(this + 0x228) = this_x00111;
  this_x00112 = operator_new(4);
  Timer_Security_NonClient_CheckResponse::Timer_Security_NonClient_CheckResponse(this_x00112);
  *(Timer_Security_NonClient_CheckResponse **)(this + 0x230) = this_x00112;
  this_x00113 = operator_new(4);
  Timer_Midnight::Timer_Midnight(this_x00113);
  *(Timer_Midnight **)(this + 0x234) = this_x00113;
  this_x00114 = operator_new(4);
  TimerEndPowerWarVictoriousReward::TimerEndPowerWarVictoriousReward(this_x00114);
  *(TimerEndPowerWarVictoriousReward **)(this + 0x22c) = this_x00114;
  this_x00115 = operator_new(4);
  Timer_TenMinuteSchedule::Timer_TenMinuteSchedule(this_x00115);
  *(Timer_TenMinuteSchedule **)(this + 0x238) = this_x00115;
  this_x00116 = operator_new(4);
  Timer_UpdateOnlinePreliminaryTeam::Timer_UpdateOnlinePreliminaryTeam(this_x00116);
  *(Timer_UpdateOnlinePreliminaryTeam **)(this + 0x23c) = this_x00116;
  this_x00117 = operator_new(4);
  Timer_SecretShopStatistic::Timer_SecretShopStatistic(this_x00117);
  *(Timer_SecretShopStatistic **)(this + 0x240) = this_x00117;
  this_x00118 = operator_new(4);
  Timer_DailySchedule::Timer_DailySchedule(this_x00118);
  *(Timer_DailySchedule **)(this + 0x244) = this_x00118;
  this_x00119 = operator_new(4);
  Timer_ConnectP2PPvPTimeout::Timer_ConnectP2PPvPTimeout(this_x00119);
  *(Timer_ConnectP2PPvPTimeout **)(this + 0xec) = this_x00119;
  this_x00120 = operator_new(4);
  Timer_RoutingItemWait::Timer_RoutingItemWait(this_x00120);
  *(Timer_RoutingItemWait **)(this + 0xac) = this_x00120;
  this_x00121 = operator_new(4);
  Timer_PcRoomAuthRetry::Timer_PcRoomAuthRetry(this_x00121);
  *(Timer_PcRoomAuthRetry **)(this + 0x248) = this_x00121;
  this_x00122 = operator_new(4);
  Timer_DungeonInoutOpenTime::Timer_DungeonInoutOpenTime(this_x00122);
  *(Timer_DungeonInoutOpenTime **)(this + 0x24c) = this_x00122;
  this_x00123 = operator_new(4);
  Timer_DungeonInoutCloseTime::Timer_DungeonInoutCloseTime(this_x00123);
  *(Timer_DungeonInoutCloseTime **)(this + 0x250) = this_x00123;
  this_x00124 = operator_new(4);
  Timer_FairPvPRematch::Timer_FairPvPRematch(this_x00124);
  *(Timer_FairPvPRematch **)(this + 0xf8) = this_x00124;
  this_x00125 = operator_new(4);
  Timer_ReturnUserTimeout::Timer_ReturnUserTimeout(this_x00125);
  *(Timer_ReturnUserTimeout **)(this + 0x254) = this_x00125;
  this_x00126 = operator_new(4);
  Timer_HadesHeartBeat::Timer_HadesHeartBeat(this_x00126);
  *(Timer_HadesHeartBeat **)(this + 600) = this_x00126;
  this_x00127 = operator_new(4);
  Timer_TOD_Send_ClearReward::Timer_TOD_Send_ClearReward(this_x00127);
  *(Timer_TOD_Send_ClearReward **)(this + 0xb0) = this_x00127;
  this_x00128 = operator_new(4);
  Timer_OneADayItemShop::Timer_OneADayItemShop(this_x00128);
  *(Timer_OneADayItemShop **)(this + 0x264) = this_x00128;
  this_x00129 = operator_new(4);
  Timer_Schedule_MidNight::Timer_Schedule_MidNight(this_x00129);
  *(Timer_Schedule_MidNight **)(this + 0x268) = this_x00129;
  this_x00130 = operator_new(4);
  Timer_Send_Ontime_Reward::Timer_Send_Ontime_Reward(this_x00130);
  *(Timer_Send_Ontime_Reward **)(this + 0x26c) = this_x00130;
  this_x00131 = operator_new(4);
  Timer_EventManagement::Timer_EventManagement(this_x00131);
  *(Timer_EventManagement **)(this + 0x270) = this_x00131;
  this_x00132 = operator_new(4);
  Timer_QuickPartyWaitingPartyMatching::Timer_QuickPartyWaitingPartyMatching(this_x00132);
  *(Timer_QuickPartyWaitingPartyMatching **)(this + 0x278) = this_x00132;
  this_x00133 = operator_new(4);
  Timer_QuickPartyWaitingStartGame::Timer_QuickPartyWaitingStartGame(this_x00133);
  *(Timer_QuickPartyWaitingStartGame **)(this + 0xb4) = this_x00133;
  this_x00134 = operator_new(4);
  Timer_AssaultGhostTimer::Timer_AssaultGhostTimer(this_x00134);
  *(Timer_AssaultGhostTimer **)(this + 0x280) = this_x00134;
  this_x00135 = operator_new(4);
  Timer_GenerateCaptchaData::Timer_GenerateCaptchaData(this_x00135);
  *(Timer_GenerateCaptchaData **)(this + 0x284) = this_x00135;
  this_x00136 = operator_new(4);
  Timer_TournamentDugeonClearStateNotiReward::Timer_TournamentDugeonClearStateNotiReward
            (this_x00136);
  *(Timer_TournamentDugeonClearStateNotiReward **)(this + 0xb8) = this_x00136;
  this_x00137 = operator_new(4);
  Timer_TournametDungeonClearStateSelect::Timer_TournametDungeonClearStateSelect(this_x00137);
  *(Timer_TournametDungeonClearStateSelect **)(this + 0xbc) = this_x00137;
  pTVar4 = operator_new(4);
  Timer_TowerOnTime::Timer_TowerOnTime(pTVar4);
  *(Timer_TowerOnTime **)(this + 0x28c) = pTVar4;
  pTVar4 = operator_new(4);
  Timer_TowerOnTime::Timer_TowerOnTime(pTVar4);
  *(Timer_TowerOnTime **)(this + 0x290) = pTVar4;
  pTVar4 = operator_new(4);
  Timer_TowerOnTime::Timer_TowerOnTime(pTVar4);
  *(Timer_TowerOnTime **)(this + 0x294) = pTVar4;
  this_x00138 = operator_new(8);
  Timer_NoticeEmergencyPatchMessage::Timer_NoticeEmergencyPatchMessage(this_x00138);
  *(Timer_NoticeEmergencyPatchMessage **)(this + 0x288) = this_x00138;
  this_x00139 = operator_new(4);
  advancealtar::Timer_MainTick::Timer_MainTick(this_x00139);
  *(Timer_MainTick **)(this + 0x298) = this_x00139;
  pTVar5 = operator_new(4);
  advancealtar::Timer_StageControl::Timer_StageControl(pTVar5);
  *(Timer_StageControl **)(this + 0x29c) = pTVar5;
  pTVar5 = operator_new(4);
  advancealtar::Timer_StageControl::Timer_StageControl(pTVar5);
  *(Timer_StageControl **)(this + 0x2a0) = pTVar5;
  pTVar5 = operator_new(4);
  advancealtar::Timer_StageControl::Timer_StageControl(pTVar5);
  *(Timer_StageControl **)(this + 0x2a4) = pTVar5;
  pTVar5 = operator_new(4);
  advancealtar::Timer_StageControl::Timer_StageControl(pTVar5);
  *(Timer_StageControl **)(this + 0x2a8) = pTVar5;
  this_x00140 = operator_new(4);
  Timer_DungeonStatisticEntrance_Hour::Timer_DungeonStatisticEntrance_Hour(this_x00140);
  *(Timer_DungeonStatisticEntrance_Hour **)(this + 0x2ac) = this_x00140;
  this_x00141 = operator_new(4);
  Timer_RefreshServerState::Timer_RefreshServerState(this_x00141);
  *(Timer_RefreshServerState **)(this + 0x2b0) = this_x00141;
  this_x00142 = operator_new(4);
  Timer_StayTimeEvent::Timer_StayTimeEvent(this_x00142);
  *(Timer_StayTimeEvent **)(this + 0x2b4) = this_x00142;
  this_x00143 = operator_new(4);
  Timer_CreateDnfDbLoad::Timer_CreateDnfDbLoad(this_x00143);
  *(Timer_CreateDnfDbLoad **)(this + 0x2b8) = this_x00143;
  return;
}

```

---

## dispatch

```asm
// === 08632a18 TimerDispatcher::dispatch  [0x08632a18-0x8632a77] ===
 8632a18:	55                   	push   %ebp
 8632a19:	89 e5                	mov    %esp,%ebp
 8632a1b:	53                   	push   %ebx
 8632a1c:	83 ec 24             	sub    $0x24,%esp
 8632a1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632a22:	8b 40 08             	mov    0x8(%eax),%eax
 8632a25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8632a29:	8b 45 08             	mov    0x8(%ebp),%eax
 8632a2c:	89 04 24             	mov    %eax,(%esp)
 8632a2f:	e8 c2 ff ff ff       	call   86329f6 <_ZN15TimerDispatcher14get_dispatcherEi>
 8632a34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8632a37:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8632a3b:	75 07                	jne    8632a44 <_ZN15TimerDispatcher8dispatchER10TimerEntry+0x2c>
 8632a3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8632a42:	eb 2d                	jmp    8632a71 <_ZN15TimerDispatcher8dispatchER10TimerEntry+0x59>
 8632a44:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8632a47:	8b 00                	mov    (%eax),%eax
 8632a49:	8b 18                	mov    (%eax),%ebx
 8632a4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632a4e:	8b 48 18             	mov    0x18(%eax),%ecx
 8632a51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632a54:	8b 50 14             	mov    0x14(%eax),%edx
 8632a57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8632a5a:	8b 40 04             	mov    0x4(%eax),%eax
 8632a5d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8632a61:	89 54 24 08          	mov    %edx,0x8(%esp)
 8632a65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8632a69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8632a6c:	89 04 24             	mov    %eax,(%esp)
 8632a6f:	ff d3                	call   *%ebx
 8632a71:	83 c4 24             	add    $0x24,%esp
 8632a74:	5b                   	pop    %ebx
 8632a75:	5d                   	pop    %ebp
 8632a76:	c3                   	ret
 8632a77:	90                   	nop

```

```c
// TimerDispatcher::dispatch @ 0x8632a18

/* TimerDispatcher::dispatch(TimerEntry&) */

undefined4 __thiscall TimerDispatcher::dispatch(TimerDispatcher *this,TimerEntry *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)get_dispatcher(this,*(int *)(param_1 + 8));
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*puVar1)
                      (puVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),
                       *(undefined4 *)(param_1 + 0x18));
  }
  return uVar2;
}

```

---

## get_dispatcher

```asm
// === 086329f6 TimerDispatcher::get_dispatcher  [0x086329f6-0x8632a17] ===
 86329f6:	55                   	push   %ebp
 86329f7:	89 e5                	mov    %esp,%ebp
 86329f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86329fc:	8b 45 08             	mov    0x8(%ebp),%eax
 86329ff:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8632a02:	85 c0                	test   %eax,%eax
 8632a04:	74 0b                	je     8632a11 <_ZN15TimerDispatcher14get_dispatcherEi+0x1b>
 8632a06:	8b 55 0c             	mov    0xc(%ebp),%edx
 8632a09:	8b 45 08             	mov    0x8(%ebp),%eax
 8632a0c:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8632a0f:	eb 05                	jmp    8632a16 <_ZN15TimerDispatcher14get_dispatcherEi+0x20>
 8632a11:	b8 00 00 00 00       	mov    $0x0,%eax
 8632a16:	5d                   	pop    %ebp
 8632a17:	c3                   	ret

```

```c
// TimerDispatcher::get_dispatcher @ 0x86329f6

/* TimerDispatcher::get_dispatcher(int) */

undefined4 __thiscall TimerDispatcher::get_dispatcher(TimerDispatcher *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + param_1 * 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}

```

---

## ~TimerDispatcher

```asm
// === 0863298e TimerDispatcher::~TimerDispatcher  [0x0863298e-0x86329f5] ===
 863298e:	55                   	push   %ebp
 863298f:	89 e5                	mov    %esp,%ebp
 8632991:	83 ec 28             	sub    $0x28,%esp
 8632994:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 863299b:	eb 49                	jmp    86329e6 <_ZN15TimerDispatcherD1Ev+0x58>
 863299d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86329a0:	8b 45 08             	mov    0x8(%ebp),%eax
 86329a3:	8b 04 90             	mov    (%eax,%edx,4),%eax
 86329a6:	85 c0                	test   %eax,%eax
 86329a8:	74 2b                	je     86329d5 <_ZN15TimerDispatcherD1Ev+0x47>
 86329aa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86329ad:	8b 45 08             	mov    0x8(%ebp),%eax
 86329b0:	8b 04 90             	mov    (%eax,%edx,4),%eax
 86329b3:	85 c0                	test   %eax,%eax
 86329b5:	74 1e                	je     86329d5 <_ZN15TimerDispatcherD1Ev+0x47>
 86329b7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86329ba:	8b 45 08             	mov    0x8(%ebp),%eax
 86329bd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 86329c0:	8b 00                	mov    (%eax),%eax
 86329c2:	83 c0 08             	add    $0x8,%eax
 86329c5:	8b 08                	mov    (%eax),%ecx
 86329c7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86329ca:	8b 45 08             	mov    0x8(%ebp),%eax
 86329cd:	8b 04 90             	mov    (%eax,%edx,4),%eax
 86329d0:	89 04 24             	mov    %eax,(%esp)
 86329d3:	ff d1                	call   *%ecx
 86329d5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86329d8:	8b 45 08             	mov    0x8(%ebp),%eax
 86329db:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 86329e2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86329e6:	81 7d f4 ae 00 00 00 	cmpl   $0xae,-0xc(%ebp)
 86329ed:	0f 9e c0             	setle  %al
 86329f0:	84 c0                	test   %al,%al
 86329f2:	75 a9                	jne    863299d <_ZN15TimerDispatcherD1Ev+0xf>
 86329f4:	c9                   	leave
 86329f5:	c3                   	ret

```

```c
// TimerDispatcher::~TimerDispatcher @ 0x863298e

/* TimerDispatcher::~TimerDispatcher() */

void __thiscall TimerDispatcher::~TimerDispatcher(TimerDispatcher *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0xaf; local_10 = local_10 + 1) {
    if ((*(int *)(this + local_10 * 4) != 0) && (*(int *)(this + local_10 * 4) != 0)) {
      (**(code **)(**(int **)(this + local_10 * 4) + 8))(*(undefined4 *)(this + local_10 * 4));
    }
    *(undefined4 *)(this + local_10 * 4) = 0;
  }
  return;
}

```

