# TimerScheduleGuildWarEnd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086331d0 TimerScheduleGuildWarEnd::dispatch_sig  [0x086331d0-0x863374f] ===
 86331d0:	55                   	push   %ebp
 86331d1:	89 e5                	mov    %esp,%ebp
 86331d3:	56                   	push   %esi
 86331d4:	53                   	push   %ebx
 86331d5:	83 ec 70             	sub    $0x70,%esp
 86331d8:	e8 ca 71 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86331dd:	89 04 24             	mov    %eax,(%esp)
 86331e0:	e8 3b 39 ae ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 86331e5:	83 f8 06             	cmp    $0x6,%eax
 86331e8:	0f 95 c0             	setne  %al
 86331eb:	84 c0                	test   %al,%al
 86331ed:	74 0a                	je     86331f9 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x29>
 86331ef:	b8 01 00 00 00       	mov    $0x1,%eax
 86331f4:	e9 4f 05 00 00       	jmp    8633748 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x578>
 86331f9:	a1 30 f7 41 09       	mov    0x941f730,%eax
 86331fe:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 8633205:	00 
 8633206:	89 04 24             	mov    %eax,(%esp)
 8633209:	e8 8a 27 ae ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 863320e:	8b 10                	mov    (%eax),%edx
 8633210:	83 c2 34             	add    $0x34,%edx
 8633213:	8b 12                	mov    (%edx),%edx
 8633215:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863321c:	00 
 863321d:	89 04 24             	mov    %eax,(%esp)
 8633220:	ff d2                	call   *%edx
 8633222:	83 f0 01             	xor    $0x1,%eax
 8633225:	84 c0                	test   %al,%al
 8633227:	74 0a                	je     8633233 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x63>
 8633229:	b8 01 00 00 00       	mov    $0x1,%eax
 863322e:	e9 15 05 00 00       	jmp    8633748 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x578>
 8633233:	83 7d 10 0a          	cmpl   $0xa,0x10(%ebp)
 8633237:	0f 85 ca 00 00 00    	jne    8633307 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x137>
 863323d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8633240:	89 04 24             	mov    %eax,(%esp)
 8633243:	e8 04 ab f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8633248:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 863324f:	00 
 8633250:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8633257:	00 
 8633258:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863325b:	89 04 24             	mov    %eax,(%esp)
 863325e:	e8 99 86 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8633263:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 863326a:	00 
 863326b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863326e:	89 04 24             	mov    %eax,(%esp)
 8633271:	e8 aa 86 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8633276:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863327d:	00 
 863327e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8633281:	89 04 24             	mov    %eax,(%esp)
 8633284:	e8 cf 86 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8633289:	e8 19 71 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863328e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8633291:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633295:	89 04 24             	mov    %eax,(%esp)
 8633298:	e8 77 59 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 863329d:	e8 da 31 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 86332a2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86332a9:	00 
 86332aa:	c7 44 24 14 05 00 00 	movl   $0x5,0x14(%esp)
 86332b1:	00 
 86332b2:	c7 44 24 10 2c 01 00 	movl   $0x12c,0x10(%esp)
 86332b9:	00 
 86332ba:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 86332c1:	00 
 86332c2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86332c9:	00 
 86332ca:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86332d1:	00 
 86332d2:	89 04 24             	mov    %eax,(%esp)
 86332d5:	e8 3c db ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86332da:	eb 1b                	jmp    86332f7 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x127>
 86332dc:	89 d3                	mov    %edx,%ebx
 86332de:	89 c6                	mov    %eax,%esi
 86332e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86332e3:	89 04 24             	mov    %eax,(%esp)
 86332e6:	e8 95 ab f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86332eb:	89 f0                	mov    %esi,%eax
 86332ed:	89 da                	mov    %ebx,%edx
 86332ef:	89 04 24             	mov    %eax,(%esp)
 86332f2:	e8 59 04 4b 00       	call   8ae3750 <_Unwind_Resume>
 86332f7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86332fa:	89 04 24             	mov    %eax,(%esp)
 86332fd:	e8 7e ab f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8633302:	e9 3c 04 00 00       	jmp    8633743 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x573>
 8633307:	83 7d 10 05          	cmpl   $0x5,0x10(%ebp)
 863330b:	0f 85 ca 00 00 00    	jne    86333db <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x20b>
 8633311:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8633314:	89 04 24             	mov    %eax,(%esp)
 8633317:	e8 30 aa f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863331c:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 8633323:	00 
 8633324:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863332b:	00 
 863332c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863332f:	89 04 24             	mov    %eax,(%esp)
 8633332:	e8 c5 85 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8633337:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 863333e:	00 
 863333f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8633342:	89 04 24             	mov    %eax,(%esp)
 8633345:	e8 d6 85 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863334a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8633351:	00 
 8633352:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8633355:	89 04 24             	mov    %eax,(%esp)
 8633358:	e8 fb 85 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863335d:	e8 45 70 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8633362:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8633365:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633369:	89 04 24             	mov    %eax,(%esp)
 863336c:	e8 a3 58 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8633371:	e8 06 31 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8633376:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863337d:	00 
 863337e:	c7 44 24 14 04 00 00 	movl   $0x4,0x14(%esp)
 8633385:	00 
 8633386:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 863338d:	00 
 863338e:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 8633395:	00 
 8633396:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863339d:	00 
 863339e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86333a5:	00 
 86333a6:	89 04 24             	mov    %eax,(%esp)
 86333a9:	e8 68 da ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86333ae:	eb 1b                	jmp    86333cb <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x1fb>
 86333b0:	89 d3                	mov    %edx,%ebx
 86333b2:	89 c6                	mov    %eax,%esi
 86333b4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86333b7:	89 04 24             	mov    %eax,(%esp)
 86333ba:	e8 c1 aa f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86333bf:	89 f0                	mov    %esi,%eax
 86333c1:	89 da                	mov    %ebx,%edx
 86333c3:	89 04 24             	mov    %eax,(%esp)
 86333c6:	e8 85 03 4b 00       	call   8ae3750 <_Unwind_Resume>
 86333cb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86333ce:	89 04 24             	mov    %eax,(%esp)
 86333d1:	e8 aa aa f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86333d6:	e9 68 03 00 00       	jmp    8633743 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x573>
 86333db:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 86333df:	0f 85 ca 00 00 00    	jne    86334af <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x2df>
 86333e5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86333e8:	89 04 24             	mov    %eax,(%esp)
 86333eb:	e8 5c a9 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86333f0:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 86333f7:	00 
 86333f8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86333ff:	00 
 8633400:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8633403:	89 04 24             	mov    %eax,(%esp)
 8633406:	e8 f1 84 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863340b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8633412:	00 
 8633413:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8633416:	89 04 24             	mov    %eax,(%esp)
 8633419:	e8 02 85 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863341e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8633425:	00 
 8633426:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8633429:	89 04 24             	mov    %eax,(%esp)
 863342c:	e8 27 85 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8633431:	e8 71 6f aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8633436:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8633439:	89 54 24 04          	mov    %edx,0x4(%esp)
 863343d:	89 04 24             	mov    %eax,(%esp)
 8633440:	e8 cf 57 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8633445:	e8 32 30 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 863344a:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8633451:	00 
 8633452:	c7 44 24 14 03 00 00 	movl   $0x3,0x14(%esp)
 8633459:	00 
 863345a:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 8633461:	00 
 8633462:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 8633469:	00 
 863346a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8633471:	00 
 8633472:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8633479:	00 
 863347a:	89 04 24             	mov    %eax,(%esp)
 863347d:	e8 94 d9 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8633482:	eb 1b                	jmp    863349f <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x2cf>
 8633484:	89 d3                	mov    %edx,%ebx
 8633486:	89 c6                	mov    %eax,%esi
 8633488:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863348b:	89 04 24             	mov    %eax,(%esp)
 863348e:	e8 ed a9 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8633493:	89 f0                	mov    %esi,%eax
 8633495:	89 da                	mov    %ebx,%edx
 8633497:	89 04 24             	mov    %eax,(%esp)
 863349a:	e8 b1 02 4b 00       	call   8ae3750 <_Unwind_Resume>
 863349f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86334a2:	89 04 24             	mov    %eax,(%esp)
 86334a5:	e8 d6 a9 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86334aa:	e9 94 02 00 00       	jmp    8633743 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x573>
 86334af:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 86334b3:	0f 85 ca 00 00 00    	jne    8633583 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x3b3>
 86334b9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86334bc:	89 04 24             	mov    %eax,(%esp)
 86334bf:	e8 88 a8 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86334c4:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 86334cb:	00 
 86334cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86334d3:	00 
 86334d4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86334d7:	89 04 24             	mov    %eax,(%esp)
 86334da:	e8 1d 84 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86334df:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86334e6:	00 
 86334e7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86334ea:	89 04 24             	mov    %eax,(%esp)
 86334ed:	e8 2e 84 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86334f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86334f9:	00 
 86334fa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86334fd:	89 04 24             	mov    %eax,(%esp)
 8633500:	e8 53 84 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8633505:	e8 9d 6e aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863350a:	8d 55 c8             	lea    -0x38(%ebp),%edx
 863350d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633511:	89 04 24             	mov    %eax,(%esp)
 8633514:	e8 fb 56 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8633519:	e8 5e 2f ac ff       	call   80f647c <_Z12G_TimerQueuev>
 863351e:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8633525:	00 
 8633526:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 863352d:	00 
 863352e:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 8633535:	00 
 8633536:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 863353d:	00 
 863353e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8633545:	00 
 8633546:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863354d:	00 
 863354e:	89 04 24             	mov    %eax,(%esp)
 8633551:	e8 c0 d8 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8633556:	eb 1b                	jmp    8633573 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x3a3>
 8633558:	89 d3                	mov    %edx,%ebx
 863355a:	89 c6                	mov    %eax,%esi
 863355c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 863355f:	89 04 24             	mov    %eax,(%esp)
 8633562:	e8 19 a9 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8633567:	89 f0                	mov    %esi,%eax
 8633569:	89 da                	mov    %ebx,%edx
 863356b:	89 04 24             	mov    %eax,(%esp)
 863356e:	e8 dd 01 4b 00       	call   8ae3750 <_Unwind_Resume>
 8633573:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8633576:	89 04 24             	mov    %eax,(%esp)
 8633579:	e8 02 a9 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863357e:	e9 c0 01 00 00       	jmp    8633743 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x573>
 8633583:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8633587:	0f 85 ca 00 00 00    	jne    8633657 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x487>
 863358d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8633590:	89 04 24             	mov    %eax,(%esp)
 8633593:	e8 b4 a7 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8633598:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 863359f:	00 
 86335a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86335a7:	00 
 86335a8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86335ab:	89 04 24             	mov    %eax,(%esp)
 86335ae:	e8 49 83 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86335b3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86335ba:	00 
 86335bb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86335be:	89 04 24             	mov    %eax,(%esp)
 86335c1:	e8 5a 83 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86335c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86335cd:	00 
 86335ce:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86335d1:	89 04 24             	mov    %eax,(%esp)
 86335d4:	e8 7f 83 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86335d9:	e8 c9 6d aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86335de:	8d 55 bc             	lea    -0x44(%ebp),%edx
 86335e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86335e5:	89 04 24             	mov    %eax,(%esp)
 86335e8:	e8 27 56 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 86335ed:	e8 8a 2e ac ff       	call   80f647c <_Z12G_TimerQueuev>
 86335f2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86335f9:	00 
 86335fa:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8633601:	00 
 8633602:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 8633609:	00 
 863360a:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 8633611:	00 
 8633612:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8633619:	00 
 863361a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8633621:	00 
 8633622:	89 04 24             	mov    %eax,(%esp)
 8633625:	e8 ec d7 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863362a:	eb 1b                	jmp    8633647 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x477>
 863362c:	89 d3                	mov    %edx,%ebx
 863362e:	89 c6                	mov    %eax,%esi
 8633630:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8633633:	89 04 24             	mov    %eax,(%esp)
 8633636:	e8 45 a8 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863363b:	89 f0                	mov    %esi,%eax
 863363d:	89 da                	mov    %ebx,%edx
 863363f:	89 04 24             	mov    %eax,(%esp)
 8633642:	e8 09 01 4b 00       	call   8ae3750 <_Unwind_Resume>
 8633647:	8d 45 bc             	lea    -0x44(%ebp),%eax
 863364a:	89 04 24             	mov    %eax,(%esp)
 863364d:	e8 2e a8 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8633652:	e9 ec 00 00 00       	jmp    8633743 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x573>
 8633657:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 863365b:	0f 85 c7 00 00 00    	jne    8633728 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x558>
 8633661:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8633664:	89 04 24             	mov    %eax,(%esp)
 8633667:	e8 e0 a6 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863366c:	c7 44 24 08 6d 00 00 	movl   $0x6d,0x8(%esp)
 8633673:	00 
 8633674:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863367b:	00 
 863367c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 863367f:	89 04 24             	mov    %eax,(%esp)
 8633682:	e8 75 82 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8633687:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863368e:	00 
 863368f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8633692:	89 04 24             	mov    %eax,(%esp)
 8633695:	e8 86 82 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863369a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86336a1:	00 
 86336a2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86336a5:	89 04 24             	mov    %eax,(%esp)
 86336a8:	e8 ab 82 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86336ad:	e8 f5 6c aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86336b2:	8d 55 b0             	lea    -0x50(%ebp),%edx
 86336b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86336b9:	89 04 24             	mov    %eax,(%esp)
 86336bc:	e8 53 55 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 86336c1:	e8 b6 2d ac ff       	call   80f647c <_Z12G_TimerQueuev>
 86336c6:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86336cd:	00 
 86336ce:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86336d5:	00 
 86336d6:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 86336dd:	00 
 86336de:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 86336e5:	00 
 86336e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86336ed:	00 
 86336ee:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86336f5:	00 
 86336f6:	89 04 24             	mov    %eax,(%esp)
 86336f9:	e8 18 d7 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86336fe:	eb 1b                	jmp    863371b <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x54b>
 8633700:	89 d3                	mov    %edx,%ebx
 8633702:	89 c6                	mov    %eax,%esi
 8633704:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8633707:	89 04 24             	mov    %eax,(%esp)
 863370a:	e8 71 a7 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863370f:	89 f0                	mov    %esi,%eax
 8633711:	89 da                	mov    %ebx,%edx
 8633713:	89 04 24             	mov    %eax,(%esp)
 8633716:	e8 35 00 4b 00       	call   8ae3750 <_Unwind_Resume>
 863371b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 863371e:	89 04 24             	mov    %eax,(%esp)
 8633721:	e8 5a a7 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8633726:	eb 1b                	jmp    8633743 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x573>
 8633728:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 863372c:	75 15                	jne    8633743 <_ZN24TimerScheduleGuildWarEnd12dispatch_sigEiij+0x573>
 863372e:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8633733:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 863373a:	00 
 863373b:	89 04 24             	mov    %eax,(%esp)
 863373e:	e8 1d 26 ae ff       	call   8115d60 <_ZN13CEventManager15TriggerEventEndEi>
 8633743:	b8 01 00 00 00       	mov    $0x1,%eax
 8633748:	83 c4 70             	add    $0x70,%esp
 863374b:	5b                   	pop    %ebx
 863374c:	5e                   	pop    %esi
 863374d:	5d                   	pop    %ebp
 863374e:	c3                   	ret
 863374f:	90                   	nop

```

```c
// TimerScheduleGuildWarEnd::dispatch_sig @ 0x86331d0

/* TimerScheduleGuildWarEnd::dispatch_sig(int, int, unsigned int) */

undefined4 TimerScheduleGuildWarEnd::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  GameWorld *pGVar2;
  int iVar3;
  int *piVar4;
  TimerQueue *pTVar5;
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  PacketGuard local_3c [12];
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  PacketGuard local_18 [12];
  
  pGVar2 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar2);
  if (iVar3 == 6) {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x21);
    cVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar1 == '\x01') {
      if (param_3 == 10) {
        PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0863325e to 086332d9 has its CatchHandler @ 086332dc */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_18);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,300,5,0);
        PacketGuard::~PacketGuard(local_18);
      }
      else if (param_3 == 5) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08633332 to 086333ad has its CatchHandler @ 086333b0 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,5);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_24);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,4,0);
        PacketGuard::~PacketGuard(local_24);
      }
      else if (param_3 == 4) {
        PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08633406 to 08633481 has its CatchHandler @ 08633484 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_30);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,3,0);
        PacketGuard::~PacketGuard(local_30);
      }
      else if (param_3 == 3) {
        PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 086334da to 08633555 has its CatchHandler @ 08633558 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,3);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_3c);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,2,0);
        PacketGuard::~PacketGuard(local_3c);
      }
      else if (param_3 == 2) {
        PacketGuard::PacketGuard(local_48);
                    /* try { // try from 086335ae to 08633629 has its CatchHandler @ 0863362c */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,2);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_48);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,1,0);
        PacketGuard::~PacketGuard(local_48);
      }
      else if (param_3 == 1) {
        PacketGuard::PacketGuard(local_54);
                    /* try { // try from 08633682 to 086336fd has its CatchHandler @ 08633700 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x6d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_54,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_54);
        pTVar5 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar5,2,0,0x62,0x3c,0,0);
        PacketGuard::~PacketGuard(local_54);
      }
      else if (param_3 == 0) {
        CEventManager::TriggerEventEnd(GlobalData::s_event_manager,0x21);
      }
    }
  }
  return 1;
}

```

