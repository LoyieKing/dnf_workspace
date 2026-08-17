# WongWork__CDeathTower

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 31

---

## _beginTowerClearProcess

```asm
// === 08467208 WongWork::CDeathTower::_beginTowerClearProcess  [0x08467208-0x8467b1f] ===
 8467208:	55                   	push   %ebp
 8467209:	89 e5                	mov    %esp,%ebp
 846720b:	57                   	push   %edi
 846720c:	56                   	push   %esi
 846720d:	53                   	push   %ebx
 846720e:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 8467214:	8b 45 0c             	mov    0xc(%ebp),%eax
 8467217:	88 85 54 ff ff ff    	mov    %al,-0xac(%ebp)
 846721d:	8b 45 08             	mov    0x8(%ebp),%eax
 8467220:	89 04 24             	mov    %eax,(%esp)
 8467223:	e8 34 2a 00 00       	call   8469c5c <_ZN8WongWork11CDeathTower13getTowerStateEv>
 8467228:	83 f8 02             	cmp    $0x2,%eax
 846722b:	0f 9f c0             	setg   %al
 846722e:	84 c0                	test   %al,%al
 8467230:	0f 85 dd 08 00 00    	jne    8467b13 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x90b>
 8467236:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 846723d:	8b 45 08             	mov    0x8(%ebp),%eax
 8467240:	05 10 01 00 00       	add    $0x110,%eax
 8467245:	89 04 24             	mov    %eax,(%esp)
 8467248:	e8 d9 28 00 00       	call   8469b26 <_ZN8WongWork11CDeathTower9CPlayData17getStartMemberCntEv>
 846724d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8467250:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8467253:	89 04 24             	mov    %eax,(%esp)
 8467256:	e8 f1 04 e4 ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 846725b:	89 45 c8             	mov    %eax,-0x38(%ebp)
 846725e:	0f b6 85 54 ff ff ff 	movzbl -0xac(%ebp),%eax
 8467265:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467269:	8b 45 08             	mov    0x8(%ebp),%eax
 846726c:	89 04 24             	mov    %eax,(%esp)
 846726f:	e8 ec 0b 00 00       	call   8467e60 <_ZN8WongWork11CDeathTower8_onClearEb>
 8467274:	8b 45 08             	mov    0x8(%ebp),%eax
 8467277:	8b 00                	mov    (%eax),%eax
 8467279:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 846727f:	83 f8 01             	cmp    $0x1,%eax
 8467282:	0f 85 f2 00 00 00    	jne    846737a <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x172>
 8467288:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 846728f:	00 
 8467290:	8b 45 08             	mov    0x8(%ebp),%eax
 8467293:	89 04 24             	mov    %eax,(%esp)
 8467296:	e8 99 29 00 00       	call   8469c34 <_ZN8WongWork11CDeathTower13setTowerStateENS0_16ENUM_TOWER_STATEE>
 846729b:	8b 45 08             	mov    0x8(%ebp),%eax
 846729e:	8b 00                	mov    (%eax),%eax
 84672a0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84672a7:	00 
 84672a8:	89 04 24             	mov    %eax,(%esp)
 84672ab:	e8 dc e4 cd ff       	call   814578c <_ZN6CParty12SetEPLPStateEc>
 84672b0:	c7 44 24 04 4d 00 00 	movl   $0x4d,0x4(%esp)
 84672b7:	00 
 84672b8:	8b 45 08             	mov    0x8(%ebp),%eax
 84672bb:	89 04 24             	mov    %eax,(%esp)
 84672be:	e8 29 7b ea ff       	call   830edec <_ZN8WongWork11CDeathTower12_genTimerKeyE13TIMER_MESSAGE>
 84672c3:	89 c3                	mov    %eax,%ebx
 84672c5:	8b 45 08             	mov    0x8(%ebp),%eax
 84672c8:	8b 70 04             	mov    0x4(%eax),%esi
 84672cb:	e8 ac f1 c8 ff       	call   80f647c <_Z12G_TimerQueuev>
 84672d0:	c7 44 24 18 4d 00 00 	movl   $0x4d,0x18(%esp)
 84672d7:	00 
 84672d8:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84672dc:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 84672e3:	00 
 84672e4:	c7 44 24 0c 4d 00 00 	movl   $0x4d,0xc(%esp)
 84672eb:	00 
 84672ec:	89 74 24 08          	mov    %esi,0x8(%esp)
 84672f0:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84672f7:	00 
 84672f8:	89 04 24             	mov    %eax,(%esp)
 84672fb:	e8 16 9b 1c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8467300:	8d 45 98             	lea    -0x68(%ebp),%eax
 8467303:	89 04 24             	mov    %eax,(%esp)
 8467306:	e8 41 6a 12 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 846730b:	c7 44 24 08 fe 00 00 	movl   $0xfe,0x8(%esp)
 8467312:	00 
 8467313:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 846731a:	00 
 846731b:	8d 45 98             	lea    -0x68(%ebp),%eax
 846731e:	89 04 24             	mov    %eax,(%esp)
 8467321:	e8 d6 45 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8467326:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 846732d:	00 
 846732e:	8d 45 98             	lea    -0x68(%ebp),%eax
 8467331:	89 04 24             	mov    %eax,(%esp)
 8467334:	e8 1f 46 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8467339:	8b 45 08             	mov    0x8(%ebp),%eax
 846733c:	8b 00                	mov    (%eax),%eax
 846733e:	8d 55 98             	lea    -0x68(%ebp),%edx
 8467341:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467345:	89 04 24             	mov    %eax,(%esp)
 8467348:	e8 01 5e 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 846734d:	eb 1b                	jmp    846736a <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x162>
 846734f:	89 d3                	mov    %edx,%ebx
 8467351:	89 c6                	mov    %eax,%esi
 8467353:	8d 45 98             	lea    -0x68(%ebp),%eax
 8467356:	89 04 24             	mov    %eax,(%esp)
 8467359:	e8 22 6b 12 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 846735e:	89 f0                	mov    %esi,%eax
 8467360:	89 da                	mov    %ebx,%edx
 8467362:	89 04 24             	mov    %eax,(%esp)
 8467365:	e8 e6 c3 67 00       	call   8ae3750 <_Unwind_Resume>
 846736a:	8d 45 98             	lea    -0x68(%ebp),%eax
 846736d:	89 04 24             	mov    %eax,(%esp)
 8467370:	e8 0b 6b 12 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8467375:	e9 9a 07 00 00       	jmp    8467b14 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x90c>
 846737a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8467381:	00 
 8467382:	8b 45 08             	mov    0x8(%ebp),%eax
 8467385:	89 04 24             	mov    %eax,(%esp)
 8467388:	e8 a7 28 00 00       	call   8469c34 <_ZN8WongWork11CDeathTower13setTowerStateENS0_16ENUM_TOWER_STATEE>
 846738d:	c7 44 24 04 4b 00 00 	movl   $0x4b,0x4(%esp)
 8467394:	00 
 8467395:	8b 45 08             	mov    0x8(%ebp),%eax
 8467398:	89 04 24             	mov    %eax,(%esp)
 846739b:	e8 4c 7a ea ff       	call   830edec <_ZN8WongWork11CDeathTower12_genTimerKeyE13TIMER_MESSAGE>
 84673a0:	89 c3                	mov    %eax,%ebx
 84673a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84673a5:	8b 70 04             	mov    0x4(%eax),%esi
 84673a8:	e8 cf f0 c8 ff       	call   80f647c <_Z12G_TimerQueuev>
 84673ad:	c7 44 24 18 4b 00 00 	movl   $0x4b,0x18(%esp)
 84673b4:	00 
 84673b5:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84673b9:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84673c0:	00 
 84673c1:	c7 44 24 0c 4b 00 00 	movl   $0x4b,0xc(%esp)
 84673c8:	00 
 84673c9:	89 74 24 08          	mov    %esi,0x8(%esp)
 84673cd:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84673d4:	00 
 84673d5:	89 04 24             	mov    %eax,(%esp)
 84673d8:	e8 39 9a 1c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 84673dd:	8b 45 08             	mov    0x8(%ebp),%eax
 84673e0:	83 c0 14             	add    $0x14,%eax
 84673e3:	89 04 24             	mov    %eax,(%esp)
 84673e6:	e8 17 27 00 00       	call   8469b02 <_ZN8WongWork11CDeathTower6CStage15getCurrentStageEv>
 84673eb:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84673ee:	80 bd 54 ff ff ff 00 	cmpb   $0x0,-0xac(%ebp)
 84673f5:	74 15                	je     846740c <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x204>
 84673f7:	8b 45 08             	mov    0x8(%ebp),%eax
 84673fa:	05 10 01 00 00       	add    $0x110,%eax
 84673ff:	89 04 24             	mov    %eax,(%esp)
 8467402:	e8 cd 27 00 00       	call   8469bd4 <_ZN8WongWork11CDeathTower9CPlayData11getPlayTimeEv>
 8467407:	89 45 c0             	mov    %eax,-0x40(%ebp)
 846740a:	eb 3a                	jmp    8467446 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x23e>
 846740c:	8b 45 08             	mov    0x8(%ebp),%eax
 846740f:	05 10 01 00 00       	add    $0x110,%eax
 8467414:	89 04 24             	mov    %eax,(%esp)
 8467417:	e8 c4 27 00 00       	call   8469be0 <_ZN8WongWork11CDeathTower9CPlayData15getLastPlayTimeEv>
 846741c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 846741f:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8467422:	83 e8 01             	sub    $0x1,%eax
 8467425:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8467428:	c7 45 ac 01 00 00 00 	movl   $0x1,-0x54(%ebp)
 846742f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8467432:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467436:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8467439:	89 04 24             	mov    %eax,(%esp)
 846743c:	e8 d7 6d c2 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8467441:	8b 00                	mov    (%eax),%eax
 8467443:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8467446:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 846744d:	e9 b0 06 00 00       	jmp    8467b02 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x8fa>
 8467452:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8467459:	8b 45 08             	mov    0x8(%ebp),%eax
 846745c:	8b 00                	mov    (%eax),%eax
 846745e:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8467461:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467465:	89 04 24             	mov    %eax,(%esp)
 8467468:	e8 f7 e2 cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 846746d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8467470:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8467474:	74 1b                	je     8467491 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x289>
 8467476:	8b 45 08             	mov    0x8(%ebp),%eax
 8467479:	8b 00                	mov    (%eax),%eax
 846747b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 846747e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467482:	89 04 24             	mov    %eax,(%esp)
 8467485:	e8 de e3 cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 846748a:	83 f0 01             	xor    $0x1,%eax
 846748d:	84 c0                	test   %al,%al
 846748f:	74 07                	je     8467498 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x290>
 8467491:	b8 01 00 00 00       	mov    $0x1,%eax
 8467496:	eb 05                	jmp    846749d <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x295>
 8467498:	b8 00 00 00 00       	mov    $0x0,%eax
 846749d:	84 c0                	test   %al,%al
 846749f:	0f 85 58 06 00 00    	jne    8467afd <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x8f5>
 84674a5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84674a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84674af:	00 
 84674b0:	89 04 24             	mov    %eax,(%esp)
 84674b3:	e8 2e 25 00 00       	call   84699e6 <_ZN15CUserCharacInfo26set_charac_party_bonus_expEi>
 84674b8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84674bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84674c2:	00 
 84674c3:	89 04 24             	mov    %eax,(%esp)
 84674c6:	e8 55 25 00 00       	call   8469a20 <_ZN15CUserCharacInfo27set_charac_member_bonus_expEi>
 84674cb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84674ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84674d5:	00 
 84674d6:	89 04 24             	mov    %eax,(%esp)
 84674d9:	e8 24 25 00 00       	call   8469a02 <_ZN15CUserCharacInfo32set_charac_fatigue_buf_bonus_expEi>
 84674de:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84674e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84674e8:	00 
 84674e9:	89 04 24             	mov    %eax,(%esp)
 84674ec:	e8 4d 25 00 00       	call   8469a3e <_ZN15CUserCharacInfo30set_charac_seria_buf_bonus_expEi>
 84674f1:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84674f8:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 84674fb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84674fe:	89 04 24             	mov    %eax,(%esp)
 8467501:	e8 48 47 c6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8467506:	89 c3                	mov    %eax,%ebx
 8467508:	8b 45 08             	mov    0x8(%ebp),%eax
 846750b:	83 c0 0c             	add    $0xc,%eax
 846750e:	89 04 24             	mov    %eax,(%esp)
 8467511:	e8 da d0 dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8467516:	89 04 24             	mov    %eax,(%esp)
 8467519:	e8 d2 67 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 846751e:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8467521:	89 54 24 14          	mov    %edx,0x14(%esp)
 8467525:	89 74 24 10          	mov    %esi,0x10(%esp)
 8467529:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 846752d:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8467530:	89 54 24 08          	mov    %edx,0x8(%esp)
 8467534:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467538:	8b 45 08             	mov    0x8(%ebp),%eax
 846753b:	89 04 24             	mov    %eax,(%esp)
 846753e:	e8 1b 0b 00 00       	call   846805e <_ZN8WongWork11CDeathTower19_checkRenewMyRecordEjjjjj>
 8467543:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8467546:	80 bd 54 ff ff ff 00 	cmpb   $0x0,-0xac(%ebp)
 846754d:	74 70                	je     84675bf <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x3b7>
 846754f:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 8467553:	75 07                	jne    846755c <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x354>
 8467555:	b8 01 00 00 00       	mov    $0x1,%eax
 846755a:	eb 05                	jmp    8467561 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x359>
 846755c:	b8 00 00 00 00       	mov    $0x0,%eax
 8467561:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8467564:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 8467567:	8b 45 08             	mov    0x8(%ebp),%eax
 846756a:	83 c0 0c             	add    $0xc,%eax
 846756d:	89 04 24             	mov    %eax,(%esp)
 8467570:	e8 7b d0 dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8467575:	89 04 24             	mov    %eax,(%esp)
 8467578:	e8 73 67 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 846757d:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8467580:	89 54 24 10          	mov    %edx,0x10(%esp)
 8467584:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8467588:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 846758b:	89 54 24 08          	mov    %edx,0x8(%esp)
 846758f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467593:	8b 45 08             	mov    0x8(%ebp),%eax
 8467596:	89 04 24             	mov    %eax,(%esp)
 8467599:	e8 80 0a 00 00       	call   846801e <_ZN8WongWork11CDeathTower20_checkRenewTopRecordEjjjj>
 846759e:	84 c0                	test   %al,%al
 84675a0:	74 10                	je     84675b2 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x3aa>
 84675a2:	80 bd 54 ff ff ff 00 	cmpb   $0x0,-0xac(%ebp)
 84675a9:	74 07                	je     84675b2 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x3aa>
 84675ab:	b8 01 00 00 00       	mov    $0x1,%eax
 84675b0:	eb 05                	jmp    84675b7 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x3af>
 84675b2:	b8 00 00 00 00       	mov    $0x0,%eax
 84675b7:	84 c0                	test   %al,%al
 84675b9:	74 04                	je     84675bf <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x3b7>
 84675bb:	83 45 d4 02          	addl   $0x2,-0x2c(%ebp)
 84675bf:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 84675c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84675c5:	83 c0 0c             	add    $0xc,%eax
 84675c8:	89 04 24             	mov    %eax,(%esp)
 84675cb:	e8 20 d0 dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 84675d0:	89 04 24             	mov    %eax,(%esp)
 84675d3:	e8 18 67 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 84675d8:	89 04 24             	mov    %eax,(%esp)
 84675db:	e8 89 27 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 84675e0:	8b 55 c0             	mov    -0x40(%ebp),%edx
 84675e3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84675e7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84675eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84675ef:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84675f2:	89 04 24             	mov    %eax,(%esp)
 84675f5:	e8 e6 17 00 00       	call   8468de0 <_ZN8WongWork18CDeathTowerRanking14getVirtualRankEjjj>
 84675fa:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84675fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8467600:	83 c0 0c             	add    $0xc,%eax
 8467603:	89 04 24             	mov    %eax,(%esp)
 8467606:	e8 e5 cf dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 846760b:	89 04 24             	mov    %eax,(%esp)
 846760e:	e8 dd 66 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8467613:	3d f8 2a 00 00       	cmp    $0x2af8,%eax
 8467618:	0f 94 c0             	sete   %al
 846761b:	84 c0                	test   %al,%al
 846761d:	74 06                	je     8467625 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x41d>
 846761f:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 8467623:	eb 04                	jmp    8467629 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x421>
 8467625:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 8467629:	8b 45 08             	mov    0x8(%ebp),%eax
 846762c:	05 10 01 00 00       	add    $0x110,%eax
 8467631:	89 04 24             	mov    %eax,(%esp)
 8467634:	e8 ed 24 00 00       	call   8469b26 <_ZN8WongWork11CDeathTower9CPlayData17getStartMemberCntEv>
 8467639:	89 c6                	mov    %eax,%esi
 846763b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 846763e:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8467644:	8b 45 08             	mov    0x8(%ebp),%eax
 8467647:	05 10 01 00 00       	add    $0x110,%eax
 846764c:	89 04 24             	mov    %eax,(%esp)
 846764f:	e8 e0 24 00 00       	call   8469b34 <_ZN8WongWork11CDeathTower9CPlayData18getStartMemberInfoEv>
 8467654:	89 c3                	mov    %eax,%ebx
 8467656:	0f be 7d e3          	movsbl -0x1d(%ebp),%edi
 846765a:	e8 f2 7d 1a 00       	call   860f451 <_Z38GetInstanceDeathTowerPlaydataStatisticv>
 846765f:	89 74 24 14          	mov    %esi,0x14(%esp)
 8467663:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 8467669:	89 54 24 10          	mov    %edx,0x10(%esp)
 846766d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8467671:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8467675:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8467678:	89 54 24 04          	mov    %edx,0x4(%esp)
 846767c:	89 04 24             	mov    %eax,(%esp)
 846767f:	e8 d8 7d 1a 00       	call   860f45c <_ZN28CDeathTowerPlayDataStatistic22SendDeathTowerPlayInfoEicPK30stDeathTowerRecordMemberInfo_tjj>
 8467684:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 8467687:	8b 45 d0             	mov    -0x30(%ebp),%eax
 846768a:	89 04 24             	mov    %eax,(%esp)
 846768d:	e8 26 2c c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8467692:	0f be f0             	movsbl %al,%esi
 8467695:	0f be 5d e3          	movsbl -0x1d(%ebp),%ebx
 8467699:	e8 99 7c 1a 00       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 846769e:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84676a2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84676a6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84676aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84676b1:	00 
 84676b2:	89 04 24             	mov    %eax,(%esp)
 84676b5:	e8 88 7c 1a 00       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 84676ba:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84676bd:	89 04 24             	mov    %eax,(%esp)
 84676c0:	e8 f3 2b c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84676c5:	0f be f0             	movsbl %al,%esi
 84676c8:	0f be 5d e3          	movsbl -0x1d(%ebp),%ebx
 84676cc:	e8 66 7c 1a 00       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 84676d1:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84676d8:	00 
 84676d9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84676dd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84676e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84676e8:	00 
 84676e9:	89 04 24             	mov    %eax,(%esp)
 84676ec:	e8 51 7c 1a 00       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 84676f1:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84676f5:	0f 84 73 01 00 00    	je     846786e <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x666>
 84676fb:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 84676fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8467701:	05 10 01 00 00       	add    $0x110,%eax
 8467706:	89 04 24             	mov    %eax,(%esp)
 8467709:	e8 26 24 00 00       	call   8469b34 <_ZN8WongWork11CDeathTower9CPlayData18getStartMemberInfoEv>
 846770e:	89 c6                	mov    %eax,%esi
 8467710:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8467713:	89 04 24             	mov    %eax,(%esp)
 8467716:	e8 33 45 c6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 846771b:	89 c3                	mov    %eax,%ebx
 846771d:	8b 45 08             	mov    0x8(%ebp),%eax
 8467720:	83 c0 0c             	add    $0xc,%eax
 8467723:	89 04 24             	mov    %eax,(%esp)
 8467726:	e8 c5 ce dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 846772b:	89 04 24             	mov    %eax,(%esp)
 846772e:	e8 bd 65 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8467733:	89 04 24             	mov    %eax,(%esp)
 8467736:	e8 2e 26 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 846773b:	8b 55 c0             	mov    -0x40(%ebp),%edx
 846773e:	89 54 24 14          	mov    %edx,0x14(%esp)
 8467742:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8467746:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846774a:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 846774d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8467751:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8467755:	89 04 24             	mov    %eax,(%esp)
 8467758:	e8 01 2c fc ff       	call   842a35e <_ZN29DB_UpdateDeathTowerBestRecord11makeRequestEjjjPK30stDeathTowerRecordMemberInfo_tjj>
 846775d:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8467761:	0f 8e a5 00 00 00    	jle    846780c <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x604>
 8467767:	8b 7d dc             	mov    -0x24(%ebp),%edi
 846776a:	8b 45 08             	mov    0x8(%ebp),%eax
 846776d:	83 c0 0c             	add    $0xc,%eax
 8467770:	89 04 24             	mov    %eax,(%esp)
 8467773:	e8 78 ce dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8467778:	89 04 24             	mov    %eax,(%esp)
 846777b:	e8 70 65 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8467780:	89 04 24             	mov    %eax,(%esp)
 8467783:	e8 e1 25 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 8467788:	89 c6                	mov    %eax,%esi
 846778a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 846778d:	89 04 24             	mov    %eax,(%esp)
 8467790:	e8 b9 44 c6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8467795:	89 c3                	mov    %eax,%ebx
 8467797:	a1 28 be 40 09       	mov    0x940be28,%eax
 846779c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84677a3:	00 
 84677a4:	89 04 24             	mov    %eax,(%esp)
 84677a7:	e8 de a8 ca ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84677ac:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84677b0:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 84677b3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84677b7:	89 74 24 08          	mov    %esi,0x8(%esp)
 84677bb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84677bf:	89 04 24             	mov    %eax,(%esp)
 84677c2:	e8 79 9a 00 00       	call   8471240 <_ZN19CMonitorServerProxy15updateTowerRankEjjjj>
 84677c7:	8b 75 dc             	mov    -0x24(%ebp),%esi
 84677ca:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84677cd:	89 04 24             	mov    %eax,(%esp)
 84677d0:	e8 79 44 c6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84677d5:	89 c3                	mov    %eax,%ebx
 84677d7:	8b 45 08             	mov    0x8(%ebp),%eax
 84677da:	83 c0 0c             	add    $0xc,%eax
 84677dd:	89 04 24             	mov    %eax,(%esp)
 84677e0:	e8 0b ce dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 84677e5:	89 04 24             	mov    %eax,(%esp)
 84677e8:	e8 03 65 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 84677ed:	89 04 24             	mov    %eax,(%esp)
 84677f0:	e8 74 25 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 84677f5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84677f9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84677fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467801:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8467804:	89 04 24             	mov    %eax,(%esp)
 8467807:	e8 c2 0c 00 00       	call   84684ce <_ZN8WongWork18CDeathTowerRanking13updateRankingEjjj>
 846780c:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 846780f:	8b 45 08             	mov    0x8(%ebp),%eax
 8467812:	05 10 01 00 00       	add    $0x110,%eax
 8467817:	89 04 24             	mov    %eax,(%esp)
 846781a:	e8 15 23 00 00       	call   8469b34 <_ZN8WongWork11CDeathTower9CPlayData18getStartMemberInfoEv>
 846781f:	89 c6                	mov    %eax,%esi
 8467821:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8467824:	89 04 24             	mov    %eax,(%esp)
 8467827:	e8 22 44 c6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 846782c:	89 c3                	mov    %eax,%ebx
 846782e:	8b 45 08             	mov    0x8(%ebp),%eax
 8467831:	83 c0 0c             	add    $0xc,%eax
 8467834:	89 04 24             	mov    %eax,(%esp)
 8467837:	e8 b4 cd dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 846783c:	89 04 24             	mov    %eax,(%esp)
 846783f:	e8 ac 64 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8467844:	89 04 24             	mov    %eax,(%esp)
 8467847:	e8 1d 25 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 846784c:	8b 55 c0             	mov    -0x40(%ebp),%edx
 846784f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8467853:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8467857:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846785b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846785f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467863:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8467866:	89 04 24             	mov    %eax,(%esp)
 8467869:	e8 a6 10 00 00       	call   8468914 <_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj>
 846786e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8467871:	89 04 24             	mov    %eax,(%esp)
 8467874:	e8 13 22 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8467879:	8b 45 dc             	mov    -0x24(%ebp),%eax
 846787c:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8467882:	8b 45 08             	mov    0x8(%ebp),%eax
 8467885:	83 c0 0c             	add    $0xc,%eax
 8467888:	89 04 24             	mov    %eax,(%esp)
 846788b:	e8 60 cd dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8467890:	89 04 24             	mov    %eax,(%esp)
 8467893:	e8 58 64 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8467898:	89 c7                	mov    %eax,%edi
 846789a:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 846789e:	0f 94 c0             	sete   %al
 84678a1:	0f b6 f0             	movzbl %al,%esi
 84678a4:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 84678a7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84678aa:	89 04 24             	mov    %eax,(%esp)
 84678ad:	e8 9c 43 c6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84678b2:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 84678b8:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84678bc:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84678c0:	89 74 24 14          	mov    %esi,0x14(%esp)
 84678c4:	8b 55 c0             	mov    -0x40(%ebp),%edx
 84678c7:	89 54 24 10          	mov    %edx,0x10(%esp)
 84678cb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84678cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 84678d3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84678d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84678da:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84678dd:	89 04 24             	mov    %eax,(%esp)
 84678e0:	e8 f5 88 ff ff       	call   84601da <_ZN8WongWork11CDeathTower14CPacketHandler19makeDisplayRangkingEjjjjbjj>
 84678e5:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84678e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84678ec:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84678ef:	89 04 24             	mov    %eax,(%esp)
 84678f2:	e8 c3 0c 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84678f7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84678fe:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 8467905:	8b 45 08             	mov    0x8(%ebp),%eax
 8467908:	83 c0 0c             	add    $0xc,%eax
 846790b:	89 04 24             	mov    %eax,(%esp)
 846790e:	e8 dd cc dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8467913:	89 04 24             	mov    %eax,(%esp)
 8467916:	e8 b3 3b dc ff       	call   822b4ce <_ZNK8CDungeon27limitOfStackableItemInTowerEv>
 846791b:	84 c0                	test   %al,%al
 846791d:	74 17                	je     8467936 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x72e>
 846791f:	e8 77 48 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8467924:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8467927:	81 c2 2c 15 00 00    	add    $0x152c,%edx
 846792d:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8467931:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8467934:	eb 15                	jmp    846794b <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x743>
 8467936:	e8 60 48 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 846793b:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 846793e:	81 c2 bc 16 00 00    	add    $0x16bc,%edx
 8467944:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8467948:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 846794b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 846794e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8467951:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8467954:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8467957:	8b 45 08             	mov    0x8(%ebp),%eax
 846795a:	83 c0 0c             	add    $0xc,%eax
 846795d:	89 04 24             	mov    %eax,(%esp)
 8467960:	e8 8b cc dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8467965:	89 04 24             	mov    %eax,(%esp)
 8467968:	e8 5d dc cd ff       	call   81455ca <_ZNK8CDungeon29getTowerMaxClearRewardItemNumEv>
 846796d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8467970:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8467973:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467977:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 846797a:	89 04 24             	mov    %eax,(%esp)
 846797d:	e8 0f e7 dc ff       	call   8236091 <_ZSt3minIjERKT_S2_S2_>
 8467982:	8b 00                	mov    (%eax),%eax
 8467984:	89 45 88             	mov    %eax,-0x78(%ebp)
 8467987:	c7 45 b8 0a 00 00 00 	movl   $0xa,-0x48(%ebp)
 846798e:	8d 45 88             	lea    -0x78(%ebp),%eax
 8467991:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467995:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8467998:	89 04 24             	mov    %eax,(%esp)
 846799b:	e8 6e 7f c7 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 84679a0:	8b 00                	mov    (%eax),%eax
 84679a2:	89 45 88             	mov    %eax,-0x78(%ebp)
 84679a5:	8b 45 08             	mov    0x8(%ebp),%eax
 84679a8:	8b 30                	mov    (%eax),%esi
 84679aa:	c7 45 bc 0a 00 00 00 	movl   $0xa,-0x44(%ebp)
 84679b1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84679b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84679b8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84679bb:	89 04 24             	mov    %eax,(%esp)
 84679be:	e8 ce e6 dc ff       	call   8236091 <_ZSt3minIjERKT_S2_S2_>
 84679c3:	8b 18                	mov    (%eax),%ebx
 84679c5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84679c8:	89 04 24             	mov    %eax,(%esp)
 84679cb:	e8 e8 28 c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84679d0:	89 c2                	mov    %eax,%edx
 84679d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84679d5:	8d 78 0c             	lea    0xc(%eax),%edi
 84679d8:	8b 45 88             	mov    -0x78(%ebp),%eax
 84679db:	8b 4d 08             	mov    0x8(%ebp),%ecx
 84679de:	81 c1 10 01 00 00    	add    $0x110,%ecx
 84679e4:	89 74 24 18          	mov    %esi,0x18(%esp)
 84679e8:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84679ec:	89 54 24 10          	mov    %edx,0x10(%esp)
 84679f0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84679f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84679f8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84679fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84679ff:	89 0c 24             	mov    %ecx,(%esp)
 8467a02:	e8 b9 a5 ff ff       	call   8461fc0 <_ZN8WongWork11CDeathTower9CPlayData18generateRewardItemEiiRKNS0_11CDungeonMgrEjjP6CParty>
 8467a07:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 8467a0e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8467a11:	89 04 24             	mov    %eax,(%esp)
 8467a14:	e8 9f 28 c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8467a19:	89 c3                	mov    %eax,%ebx
 8467a1b:	e8 7b 47 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8467a20:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8467a23:	89 54 24 08          	mov    %edx,0x8(%esp)
 8467a27:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8467a2b:	89 04 24             	mov    %eax,(%esp)
 8467a2e:	e8 3b 90 ef ff       	call   8360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>
 8467a33:	8b 45 08             	mov    0x8(%ebp),%eax
 8467a36:	8b 00                	mov    (%eax),%eax
 8467a38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467a3c:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8467a42:	89 04 24             	mov    %eax,(%esp)
 8467a45:	e8 2c 1f 00 00       	call   8469976 <_ZN10QuickParty16RewardData_ParamC1EP6CParty>
 8467a4a:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8467a50:	89 04 24             	mov    %eax,(%esp)
 8467a53:	e8 6e 1f 00 00       	call   84699c6 <_ZN10QuickParty17RewardData_ResultC1Ev>
 8467a58:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8467a5b:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8467a61:	8b 45 08             	mov    0x8(%ebp),%eax
 8467a64:	8b 08                	mov    (%eax),%ecx
 8467a66:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8467a6c:	89 44 24 10          	mov    %eax,0x10(%esp)
 8467a70:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8467a76:	8b 55 80             	mov    -0x80(%ebp),%edx
 8467a79:	89 44 24 08          	mov    %eax,0x8(%esp)
 8467a7d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8467a81:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8467a88:	00 
 8467a89:	89 0c 24             	mov    %ecx,(%esp)
 8467a8c:	e8 69 3e 13 00       	call   859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>
 8467a91:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8467a97:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8467a9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8467a9d:	8d 70 0c             	lea    0xc(%eax),%esi
 8467aa0:	8b 45 08             	mov    0x8(%ebp),%eax
 8467aa3:	8b 08                	mov    (%eax),%ecx
 8467aa5:	8b 55 84             	mov    -0x7c(%ebp),%edx
 8467aa8:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8467aab:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8467aae:	81 c3 10 01 00 00    	add    $0x110,%ebx
 8467ab4:	89 74 24 14          	mov    %esi,0x14(%esp)
 8467ab8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8467abc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8467ac0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8467ac4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8467ac7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467acb:	89 1c 24             	mov    %ebx,(%esp)
 8467ace:	e8 65 aa ff ff       	call   8462538 <_ZN8WongWork11CDeathTower9CPlayData17generateRewardExpEiijP6CPartyRNS0_11CDungeonMgrE>
 8467ad3:	eb 1b                	jmp    8467af0 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x8e8>
 8467ad5:	89 d3                	mov    %edx,%ebx
 8467ad7:	89 c6                	mov    %eax,%esi
 8467ad9:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8467adc:	89 04 24             	mov    %eax,(%esp)
 8467adf:	e8 bc 1f 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8467ae4:	89 f0                	mov    %esi,%eax
 8467ae6:	89 da                	mov    %ebx,%edx
 8467ae8:	89 04 24             	mov    %eax,(%esp)
 8467aeb:	e8 60 bc 67 00       	call   8ae3750 <_Unwind_Resume>
 8467af0:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8467af3:	89 04 24             	mov    %eax,(%esp)
 8467af6:	e8 a5 1f 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8467afb:	eb 01                	jmp    8467afe <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x8f6>
 8467afd:	90                   	nop
 8467afe:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 8467b02:	83 7d cc 03          	cmpl   $0x3,-0x34(%ebp)
 8467b06:	0f 9e c0             	setle  %al
 8467b09:	84 c0                	test   %al,%al
 8467b0b:	0f 85 41 f9 ff ff    	jne    8467452 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x24a>
 8467b11:	eb 01                	jmp    8467b14 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb+0x90c>
 8467b13:	90                   	nop
 8467b14:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 8467b1a:	5b                   	pop    %ebx
 8467b1b:	5e                   	pop    %esi
 8467b1c:	5f                   	pop    %edi
 8467b1d:	5d                   	pop    %ebp
 8467b1e:	c3                   	ret
 8467b1f:	90                   	nop

```

```c
// WongWork::CDeathTower::_beginTowerClearProcess @ 0x8467208

/* WongWork::CDeathTower::_beginTowerClearProcess(bool) */

void __thiscall WongWork::CDeathTower::_beginTowerClearProcess(CDeathTower *this,bool param_1)

{
  undefined4 uVar1;
  CParty *pCVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  uint uVar8;
  CDungeon *pCVar9;
  uint uVar10;
  stDeathTowerRecordMemberInfo_t *psVar11;
  CDeathTowerPlayDataStatistic *this_00;
  CDeathTowerValueStatistic *pCVar12;
  CMonitorServerProxy *this_01;
  uint uVar13;
  uint *puVar14;
  CDataManager *this_02;
  bool bVar15;
  uint local_a4 [7];
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  CPacketHandler local_78 [12];
  PacketGuard local_6c [12];
  uint local_60;
  int local_5c [3];
  uint local_50 [5];
  CDeathTowerRanking *local_3c;
  int local_38;
  CUserCharacInfo *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  char local_21;
  int local_20;
  
  iVar5 = getTowerState(this);
  if (iVar5 < 3) {
    local_50[3] = 0;
    local_50[4] = CPlayData::getStartMemberCnt((CPlayData *)(this + 0x110));
    local_3c = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(local_50[4]);
    _onClear(this,param_1);
    if (*(int *)(*(int *)this + 0xcd8) == 1) {
      setTowerState(this,5);
      CParty::SetEPLPState(*(CParty **)this,'\x02');
      uVar6 = _genTimerKey(this,0x4d);
      uVar1 = *(undefined4 *)(this + 4);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,6,uVar1,0x4d,0x3c,uVar6,0x4d);
      PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 08467321 to 0846734c has its CatchHandler @ 0846734f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,0,0xfe);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
      CParty::send_to_party(*(CParty **)this,local_6c);
      PacketGuard::~PacketGuard(local_6c);
    }
    else {
      setTowerState(this,3);
      uVar6 = _genTimerKey(this,0x4b);
      uVar1 = *(undefined4 *)(this + 4);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,6,uVar1,0x4b,1,uVar6,0x4b);
      local_60 = CStage::getCurrentStage((CStage *)(this + 0x14));
      if (param_1) {
        local_50[3] = CPlayData::getPlayTime((CPlayData *)(this + 0x110));
      }
      else {
        local_50[3] = CPlayData::getLastPlayTime((CPlayData *)(this + 0x110));
        local_5c[0] = local_60 - 1;
        local_5c[1] = 1;
        puVar14 = (uint *)std::max<int>(local_5c + 1,local_5c);
        local_60 = *puVar14;
      }
      for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
        local_34 = (CUserCharacInfo *)0x0;
        local_34 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_38);
        if ((local_34 == (CUserCharacInfo *)0x0) ||
           (cVar4 = CParty::checkValidUser(*(CParty **)this,local_38), cVar4 != '\x01')) {
          bVar15 = true;
        }
        else {
          bVar15 = false;
        }
        if (!bVar15) {
          CUserCharacInfo::set_charac_party_bonus_exp(local_34,0);
          CUserCharacInfo::set_charac_member_bonus_exp(local_34,0);
          CUserCharacInfo::set_charac_fatigue_buf_bonus_exp(local_34,0);
          CUserCharacInfo::set_charac_seria_buf_bonus_exp(local_34,0);
          uVar3 = local_60;
          local_30 = 0;
          uVar8 = CUserCharacInfo::getCurCharacNo(local_34);
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          uVar10 = CDungeon::get_index(pCVar9);
          local_2c = _checkRenewMyRecord(this,uVar10,local_50[4],uVar8,uVar3,local_50[3]);
          uVar3 = local_60;
          if (param_1) {
            local_30 = (uint)(local_2c == 1);
            pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
            uVar8 = CDungeon::get_index(pCVar9);
            cVar4 = _checkRenewTopRecord(this,uVar8,local_50[4],uVar3,local_50[3]);
            if (cVar4 != '\0') {
              local_30 = local_30 + 2;
            }
          }
          uVar3 = local_60;
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          uVar8 = CDungeon::get_index(pCVar9);
          uVar8 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar8);
          local_28 = CDeathTowerRanking::getVirtualRank(local_3c,uVar8,uVar3,local_50[3]);
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          iVar5 = CDungeon::get_index(pCVar9);
          local_21 = iVar5 != 11000;
          uVar8 = CPlayData::getStartMemberCnt((CPlayData *)(this + 0x110));
          uVar3 = local_60;
          psVar11 = (stDeathTowerRecordMemberInfo_t *)
                    CPlayData::getStartMemberInfo((CPlayData *)(this + 0x110));
          cVar4 = local_21;
          this_00 = (CDeathTowerPlayDataStatistic *)GetInstanceDeathTowerPlaydataStatistic();
          CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo
                    (this_00,local_38,cVar4,psVar11,uVar3,uVar8);
          uVar3 = local_60;
          cVar4 = CUserCharacInfo::get_charac_level(local_34);
          iVar5 = (int)local_21;
          pCVar12 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar12,1,iVar5,(int)cVar4,uVar3);
          cVar4 = CUserCharacInfo::get_charac_level(local_34);
          iVar5 = (int)local_21;
          pCVar12 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar12,0,iVar5,(int)cVar4,1);
          uVar3 = local_60;
          if (local_2c != 0) {
            psVar11 = (stDeathTowerRecordMemberInfo_t *)
                      CPlayData::getStartMemberInfo((CPlayData *)(this + 0x110));
            uVar8 = CUserCharacInfo::getCurCharacNo(local_34);
            pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
            uVar10 = CDungeon::get_index(pCVar9);
            uVar10 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar10);
            DB_UpdateDeathTowerBestRecord::makeRequest
                      (uVar10,uVar8,local_50[4],psVar11,uVar3,local_50[3]);
            uVar3 = local_28;
            if (0 < (int)local_28) {
              pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
              uVar8 = CDungeon::get_index(pCVar9);
              uVar8 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar8);
              uVar10 = CUserCharacInfo::getCurCharacNo(local_34);
              this_01 = (CMonitorServerProxy *)
                        CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                  (GlobalData::s_monitor_proxy_mgr,0);
              CMonitorServerProxy::updateTowerRank(this_01,uVar10,uVar8,local_50[4],uVar3);
              uVar3 = local_28;
              uVar8 = CUserCharacInfo::getCurCharacNo(local_34);
              pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
              uVar10 = CDungeon::get_index(pCVar9);
              uVar10 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar10);
              CDeathTowerRanking::updateRanking(local_3c,uVar10,uVar8,uVar3);
            }
            uVar3 = local_60;
            psVar11 = (stDeathTowerRecordMemberInfo_t *)
                      CPlayData::getStartMemberInfo((CPlayData *)(this + 0x110));
            uVar8 = CUserCharacInfo::getCurCharacNo(local_34);
            pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
            uVar10 = CDungeon::get_index(pCVar9);
            uVar10 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(uVar10);
            CDeathTowerRanking::registBestRecord(local_3c,uVar10,uVar8,psVar11,uVar3,local_50[3]);
          }
          CPacketHandler::CPacketHandler(local_78);
          uVar8 = local_28;
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          uVar10 = CDungeon::get_index(pCVar9);
          uVar3 = local_60;
          bVar15 = local_2c == 1;
          uVar13 = CUserCharacInfo::getCurCharacNo(local_34);
                    /* try { // try from 084678e0 to 08467ad2 has its CatchHandler @ 08467ad5 */
          CPacketHandler::makeDisplayRangking
                    (local_78,local_50[4],uVar13,uVar3,local_50[3],bVar15,uVar10,uVar8);
          CUser::Send((CUser *)local_34,(PacketGuard *)local_78);
          local_20 = 0;
          local_7c = 0;
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          cVar4 = CDungeon::limitOfStackableItemInTower(pCVar9);
          if (cVar4 == '\0') {
            iVar5 = G_CDataManager();
            local_20 = *(int *)(iVar5 + 0xc + (local_60 + 0x16bc) * 4);
          }
          else {
            iVar5 = G_CDataManager();
            local_20 = *(int *)(iVar5 + 0xc + (local_60 + 0x152c) * 4);
          }
          local_5c[2] = local_20 + local_30;
          pCVar9 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
          local_50[0] = CDungeon::getTowerMaxClearRewardItemNum(pCVar9);
          puVar14 = std::min<unsigned_int>(local_50,(uint *)(local_5c + 2));
          local_7c = *puVar14;
          local_50[1] = 10;
          puVar14 = (uint *)std::min<int>((int *)(local_50 + 1),(int *)&local_7c);
          local_7c = *puVar14;
          pCVar2 = *(CParty **)this;
          local_50[2] = 10;
          puVar14 = std::min<unsigned_int>(local_50 + 2,&local_60);
          uVar3 = *puVar14;
          uVar8 = CUserCharacInfo::get_charac_level(local_34);
          CPlayData::generateRewardItem
                    ((CPlayData *)(this + 0x110),local_38,local_7c,(CDungeonMgr *)(this + 0xc),uVar8
                     ,uVar3,pCVar2);
          local_80 = 0;
          iVar5 = CUserCharacInfo::get_charac_level(local_34);
          this_02 = (CDataManager *)G_CDataManager();
          CDataManager::get_mob_reward(this_02,iVar5,&local_80);
          QuickParty::RewardData_Param::RewardData_Param
                    ((RewardData_Param *)&local_88,*(CParty **)this);
          QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_a4);
          local_a4[0] = local_80;
          CParty::set_random_reward(*(undefined4 *)this,0,local_88,local_84,local_a4);
          local_80 = local_a4[0];
          CPlayData::generateRewardExp
                    ((CPlayData *)(this + 0x110),local_38,local_60,local_a4[0],*(CParty **)this,
                     (CDungeonMgr *)(this + 0xc));
          CPacketHandler::~CPacketHandler(local_78);
        }
      }
    }
  }
  return;
}

```

---

## _checkMemberDie

```asm
// === 08467188 WongWork::CDeathTower::_checkMemberDie  [0x08467188-0x8467207] ===
 8467188:	55                   	push   %ebp
 8467189:	89 e5                	mov    %esp,%ebp
 846718b:	83 ec 28             	sub    $0x28,%esp
 846718e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8467195:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 846719c:	eb 48                	jmp    84671e6 <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x5e>
 846719e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84671a1:	8b 45 08             	mov    0x8(%ebp),%eax
 84671a4:	8b 00                	mov    (%eax),%eax
 84671a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84671aa:	89 04 24             	mov    %eax,(%esp)
 84671ad:	e8 b6 e6 cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 84671b2:	84 c0                	test   %al,%al
 84671b4:	74 23                	je     84671d9 <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x51>
 84671b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84671b9:	8b 55 08             	mov    0x8(%ebp),%edx
 84671bc:	81 c2 10 01 00 00    	add    $0x110,%edx
 84671c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84671c6:	89 14 24             	mov    %edx,(%esp)
 84671c9:	e8 a8 29 00 00       	call   8469b76 <_ZN8WongWork11CDeathTower9CPlayData13isMemberAliveEi>
 84671ce:	84 c0                	test   %al,%al
 84671d0:	74 07                	je     84671d9 <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x51>
 84671d2:	b8 01 00 00 00       	mov    $0x1,%eax
 84671d7:	eb 05                	jmp    84671de <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x56>
 84671d9:	b8 00 00 00 00       	mov    $0x0,%eax
 84671de:	84 c0                	test   %al,%al
 84671e0:	75 11                	jne    84671f3 <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x6b>
 84671e2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84671e6:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 84671ea:	0f 96 c0             	setbe  %al
 84671ed:	84 c0                	test   %al,%al
 84671ef:	75 ad                	jne    846719e <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x16>
 84671f1:	eb 01                	jmp    84671f4 <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x6c>
 84671f3:	90                   	nop
 84671f4:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 84671f8:	75 07                	jne    8467201 <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x79>
 84671fa:	b8 01 00 00 00       	mov    $0x1,%eax
 84671ff:	eb 05                	jmp    8467206 <_ZN8WongWork11CDeathTower15_checkMemberDieEv+0x7e>
 8467201:	b8 00 00 00 00       	mov    $0x0,%eax
 8467206:	c9                   	leave
 8467207:	c3                   	ret

```

```c
// WongWork::CDeathTower::_checkMemberDie @ 0x8467188

/* WongWork::CDeathTower::_checkMemberDie() */

bool __thiscall WongWork::CDeathTower::_checkMemberDie(CDeathTower *this)

{
  bool bVar1;
  char cVar2;
  uint local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = CParty::checkValidUser(*(CParty **)this,local_10);
    if ((cVar2 == '\0') ||
       (cVar2 = CPlayData::isMemberAlive((CPlayData *)(this + 0x110),local_10), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
  }
  return local_10 == 4;
}

```

---

## _checkMemberReady

```asm
// === 084670f8 WongWork::CDeathTower::_checkMemberReady  [0x084670f8-0x8467187] ===
 84670f8:	55                   	push   %ebp
 84670f9:	89 e5                	mov    %esp,%ebp
 84670fb:	56                   	push   %esi
 84670fc:	53                   	push   %ebx
 84670fd:	83 ec 30             	sub    $0x30,%esp
 8467100:	8b 45 08             	mov    0x8(%ebp),%eax
 8467103:	05 10 01 00 00       	add    $0x110,%eax
 8467108:	89 04 24             	mov    %eax,(%esp)
 846710b:	e8 d6 ad ff ff       	call   8461ee6 <_ZN8WongWork11CDeathTower9CPlayData16resetMemberReadyEv>
 8467110:	8b 45 08             	mov    0x8(%ebp),%eax
 8467113:	8b 00                	mov    (%eax),%eax
 8467115:	89 04 24             	mov    %eax,(%esp)
 8467118:	e8 4d 30 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 846711d:	83 f8 01             	cmp    $0x1,%eax
 8467120:	75 07                	jne    8467129 <_ZN8WongWork11CDeathTower17_checkMemberReadyEv+0x31>
 8467122:	a1 f0 35 c6 08       	mov    0x8c635f0,%eax
 8467127:	eb 05                	jmp    846712e <_ZN8WongWork11CDeathTower17_checkMemberReadyEv+0x36>
 8467129:	a1 f4 35 c6 08       	mov    0x8c635f4,%eax
 846712e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8467131:	c7 44 24 04 49 00 00 	movl   $0x49,0x4(%esp)
 8467138:	00 
 8467139:	8b 45 08             	mov    0x8(%ebp),%eax
 846713c:	89 04 24             	mov    %eax,(%esp)
 846713f:	e8 a8 7c ea ff       	call   830edec <_ZN8WongWork11CDeathTower12_genTimerKeyE13TIMER_MESSAGE>
 8467144:	89 c3                	mov    %eax,%ebx
 8467146:	8b 45 08             	mov    0x8(%ebp),%eax
 8467149:	8b 70 04             	mov    0x4(%eax),%esi
 846714c:	e8 2b f3 c8 ff       	call   80f647c <_Z12G_TimerQueuev>
 8467151:	c7 44 24 18 49 00 00 	movl   $0x49,0x18(%esp)
 8467158:	00 
 8467159:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 846715d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8467160:	89 54 24 10          	mov    %edx,0x10(%esp)
 8467164:	c7 44 24 0c 49 00 00 	movl   $0x49,0xc(%esp)
 846716b:	00 
 846716c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8467170:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8467177:	00 
 8467178:	89 04 24             	mov    %eax,(%esp)
 846717b:	e8 96 9c 1c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8467180:	83 c4 30             	add    $0x30,%esp
 8467183:	5b                   	pop    %ebx
 8467184:	5e                   	pop    %esi
 8467185:	5d                   	pop    %ebp
 8467186:	c3                   	ret
 8467187:	90                   	nop

```

```c
// WongWork::CDeathTower::_checkMemberReady @ 0x84670f8

/* WongWork::CDeathTower::_checkMemberReady() */

void __thiscall WongWork::CDeathTower::_checkMemberReady(CDeathTower *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TimerQueue *pTVar5;
  
  CPlayData::resetMemberReady((CPlayData *)(this + 0x110));
  iVar2 = CParty::get_member_count(*(CParty **)this);
  uVar3 = ::CONST_PARTY_MAP_LOADING_WAIT_TIMEOUT;
  if (iVar2 == 1) {
    uVar3 = ::CONST_SINGLE_MAP_LOADING_WAIT_TIMEOUT;
  }
  uVar4 = _genTimerKey(this,0x49);
  uVar1 = *(undefined4 *)(this + 4);
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,6,uVar1,0x49,uVar3,uVar4,0x49);
  return;
}

```

---

## _checkRenewMyRecord

```asm
// === 0846805e WongWork::CDeathTower::_checkRenewMyRecord  [0x0846805e-0x84680a3] ===
 846805e:	55                   	push   %ebp
 846805f:	89 e5                	mov    %esp,%ebp
 8468061:	53                   	push   %ebx
 8468062:	83 ec 24             	sub    $0x24,%esp
 8468065:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468068:	89 04 24             	mov    %eax,(%esp)
 846806b:	e8 f9 1c 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 8468070:	89 c3                	mov    %eax,%ebx
 8468072:	8b 45 10             	mov    0x10(%ebp),%eax
 8468075:	89 04 24             	mov    %eax,(%esp)
 8468078:	e8 cf f6 e3 ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 846807d:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8468080:	89 54 24 10          	mov    %edx,0x10(%esp)
 8468084:	8b 55 18             	mov    0x18(%ebp),%edx
 8468087:	89 54 24 0c          	mov    %edx,0xc(%esp)
 846808b:	8b 55 14             	mov    0x14(%ebp),%edx
 846808e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8468092:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8468096:	89 04 24             	mov    %eax,(%esp)
 8468099:	e8 60 02 00 00       	call   84682fe <_ZN8WongWork18CDeathTowerRanking18checkRenewMyRecordEjjjj>
 846809e:	83 c4 24             	add    $0x24,%esp
 84680a1:	5b                   	pop    %ebx
 84680a2:	5d                   	pop    %ebp
 84680a3:	c3                   	ret

```

```c
// WongWork::CDeathTower::_checkRenewMyRecord @ 0x846805e

/* WongWork::CDeathTower::_checkRenewMyRecord(unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
WongWork::CDeathTower::_checkRenewMyRecord
          (CDeathTower *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  CDeathTowerRanking *this_00;
  
  uVar1 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(param_1);
  this_00 = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(param_2);
  CDeathTowerRanking::checkRenewMyRecord(this_00,uVar1,param_3,param_4,param_5);
  return;
}

```

---

## _checkRenewTopRecord

```asm
// === 0846801e WongWork::CDeathTower::_checkRenewTopRecord  [0x0846801e-0x846805d] ===
 846801e:	55                   	push   %ebp
 846801f:	89 e5                	mov    %esp,%ebp
 8468021:	53                   	push   %ebx
 8468022:	83 ec 14             	sub    $0x14,%esp
 8468025:	8b 45 0c             	mov    0xc(%ebp),%eax
 8468028:	89 04 24             	mov    %eax,(%esp)
 846802b:	e8 39 1d 00 00       	call   8469d69 <_ZN8WongWork18CDeathTowerRanking23makeDungeonIdx2TowerIdxEj>
 8468030:	89 c3                	mov    %eax,%ebx
 8468032:	8b 45 10             	mov    0x10(%ebp),%eax
 8468035:	89 04 24             	mov    %eax,(%esp)
 8468038:	e8 0f f7 e3 ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 846803d:	8b 55 18             	mov    0x18(%ebp),%edx
 8468040:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8468044:	8b 55 14             	mov    0x14(%ebp),%edx
 8468047:	89 54 24 08          	mov    %edx,0x8(%esp)
 846804b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 846804f:	89 04 24             	mov    %eax,(%esp)
 8468052:	e8 39 02 00 00       	call   8468290 <_ZN8WongWork18CDeathTowerRanking19checkRenewTopRecordEjjj>
 8468057:	83 c4 14             	add    $0x14,%esp
 846805a:	5b                   	pop    %ebx
 846805b:	5d                   	pop    %ebp
 846805c:	c3                   	ret
 846805d:	90                   	nop

```

```c
// WongWork::CDeathTower::_checkRenewTopRecord @ 0x846801e

/* WongWork::CDeathTower::_checkRenewTopRecord(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
WongWork::CDeathTower::_checkRenewTopRecord
          (CDeathTower *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  CDeathTowerRanking *this_00;
  
  uVar1 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(param_1);
  this_00 = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(param_2);
  CDeathTowerRanking::checkRenewTopRecord(this_00,uVar1,param_3,param_4);
  return;
}

```

---

## _checkStartGameCondition

```asm
// === 08463890 WongWork::CDeathTower::_checkStartGameCondition  [0x08463890-0x846398d] ===
 8463890:	55                   	push   %ebp
 8463891:	89 e5                	mov    %esp,%ebp
 8463893:	56                   	push   %esi
 8463894:	53                   	push   %ebx
 8463895:	81 ec 30 01 00 00    	sub    $0x130,%esp
 846389b:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 84638a1:	89 c3                	mov    %eax,%ebx
 84638a3:	be 03 00 00 00       	mov    $0x3,%esi
 84638a8:	eb 0e                	jmp    84638b8 <_ZN8WongWork11CDeathTower24_checkStartGameConditionERh+0x28>
 84638aa:	89 1c 24             	mov    %ebx,(%esp)
 84638ad:	e8 a2 7f c6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84638b2:	83 c3 3d             	add    $0x3d,%ebx
 84638b5:	83 ee 01             	sub    $0x1,%esi
 84638b8:	83 fe ff             	cmp    $0xffffffff,%esi
 84638bb:	0f 95 c0             	setne  %al
 84638be:	84 c0                	test   %al,%al
 84638c0:	75 e8                	jne    84638aa <_ZN8WongWork11CDeathTower24_checkStartGameConditionERh+0x1a>
 84638c2:	c7 44 24 08 f4 00 00 	movl   $0xf4,0x8(%esp)
 84638c9:	00 
 84638ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84638d1:	00 
 84638d2:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 84638d8:	89 04 24             	mov    %eax,(%esp)
 84638db:	e8 e0 a3 c1 ff       	call   807dcc0 <memset@plt>
 84638e0:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84638e7:	00 
 84638e8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84638ef:	00 
 84638f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84638f3:	89 04 24             	mov    %eax,(%esp)
 84638f6:	e8 c5 a3 c1 ff       	call   807dcc0 <memset@plt>
 84638fb:	8b 45 08             	mov    0x8(%ebp),%eax
 84638fe:	83 c0 0c             	add    $0xc,%eax
 8463901:	89 04 24             	mov    %eax,(%esp)
 8463904:	e8 e7 0c dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8463909:	8b 55 08             	mov    0x8(%ebp),%edx
 846390c:	8b 12                	mov    (%edx),%edx
 846390e:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8463911:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8463915:	8d 8d f4 fe ff ff    	lea    -0x10c(%ebp),%ecx
 846391b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 846391f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8463922:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8463926:	89 44 24 04          	mov    %eax,0x4(%esp)
 846392a:	89 14 24             	mov    %edx,(%esp)
 846392d:	e8 f6 ab 13 00       	call   859e528 <_ZN6CParty24CheckEnterAncientDungeonEPK8CDungeonRhP10Inven_ItemPi>
 8463932:	83 f0 01             	xor    $0x1,%eax
 8463935:	84 c0                	test   %al,%al
 8463937:	74 07                	je     8463940 <_ZN8WongWork11CDeathTower24_checkStartGameConditionERh+0xb0>
 8463939:	b8 11 00 00 00       	mov    $0x11,%eax
 846393e:	eb 43                	jmp    8463983 <_ZN8WongWork11CDeathTower24_checkStartGameConditionERh+0xf3>
 8463940:	8b 45 08             	mov    0x8(%ebp),%eax
 8463943:	83 c0 0c             	add    $0xc,%eax
 8463946:	89 04 24             	mov    %eax,(%esp)
 8463949:	e8 a2 0c dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 846394e:	8b 55 08             	mov    0x8(%ebp),%edx
 8463951:	8b 12                	mov    (%edx),%edx
 8463953:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8463956:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 846395a:	8d 8d f4 fe ff ff    	lea    -0x10c(%ebp),%ecx
 8463960:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8463964:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463968:	89 14 24             	mov    %edx,(%esp)
 846396b:	e8 52 b1 13 00       	call   859eac2 <_ZN6CParty22UseAncientDungeonItemsEPK8CDungeonP10Inven_ItemPi>
 8463970:	83 f0 01             	xor    $0x1,%eax
 8463973:	84 c0                	test   %al,%al
 8463975:	74 07                	je     846397e <_ZN8WongWork11CDeathTower24_checkStartGameConditionERh+0xee>
 8463977:	b8 01 00 00 00       	mov    $0x1,%eax
 846397c:	eb 05                	jmp    8463983 <_ZN8WongWork11CDeathTower24_checkStartGameConditionERh+0xf3>
 846397e:	b8 00 00 00 00       	mov    $0x0,%eax
 8463983:	81 c4 30 01 00 00    	add    $0x130,%esp
 8463989:	5b                   	pop    %ebx
 846398a:	5e                   	pop    %esi
 846398b:	5d                   	pop    %ebp
 846398c:	c3                   	ret
 846398d:	90                   	nop

```

```c
// WongWork::CDeathTower::_checkStartGameCondition @ 0x8463890

/* WongWork::CDeathTower::_checkStartGameCondition(unsigned char&) */

undefined4 __thiscall
WongWork::CDeathTower::_checkStartGameCondition(CDeathTower *this,uchar *param_1)

{
  char cVar1;
  CDungeon *pCVar2;
  undefined4 uVar3;
  Inven_Item *this_00;
  int iVar4;
  Inven_Item local_110 [244];
  int local_1c [4];
  
  this_00 = local_110;
  for (iVar4 = 3; iVar4 != -1; iVar4 = iVar4 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  memset(local_110,0,0xf4);
  memset(local_1c,0,0x10);
  pCVar2 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
  cVar1 = CParty::CheckEnterAncientDungeon(*(CParty **)this,pCVar2,param_1,local_110,local_1c);
  if (cVar1 == '\x01') {
    pCVar2 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
    cVar1 = CParty::UseAncientDungeonItems(*(CParty **)this,pCVar2,local_110,local_1c);
    if (cVar1 == '\x01') {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0x11;
  }
  return uVar3;
}

```

---

## _destroy

```asm
// === 08467b20 WongWork::CDeathTower::_destroy  [0x08467b20-0x8467b4f] ===
 8467b20:	55                   	push   %ebp
 8467b21:	89 e5                	mov    %esp,%ebp
 8467b23:	83 ec 18             	sub    $0x18,%esp
 8467b26:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8467b2d:	00 
 8467b2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8467b31:	89 04 24             	mov    %eax,(%esp)
 8467b34:	e8 fb 20 00 00       	call   8469c34 <_ZN8WongWork11CDeathTower13setTowerStateENS0_16ENUM_TOWER_STATEE>
 8467b39:	e8 50 46 c6 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8467b3e:	8b 55 08             	mov    0x8(%ebp),%edx
 8467b41:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467b45:	89 04 24             	mov    %eax,(%esp)
 8467b48:	e8 05 dd e2 ff       	call   8295852 <_ZN12CGameManager16returnDeathTowerEPN8WongWork11CDeathTowerE>
 8467b4d:	c9                   	leave
 8467b4e:	c3                   	ret
 8467b4f:	90                   	nop

```

```c
// WongWork::CDeathTower::_destroy @ 0x8467b20

/* WongWork::CDeathTower::_destroy() */

void __thiscall WongWork::CDeathTower::_destroy(CDeathTower *this)

{
  CGameManager *this_00;
  
  setTowerState(this,0);
  this_00 = (CGameManager *)G_CGameManager();
  CGameManager::returnDeathTower(this_00,this);
  return;
}

```

---

## _makeDropItem

```asm
// === 0846638c WongWork::CDeathTower::_makeDropItem  [0x0846638c-0x8466b01] ===
 846638c:	55                   	push   %ebp
 846638d:	89 e5                	mov    %esp,%ebp
 846638f:	53                   	push   %ebx
 8466390:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 8466396:	8b 45 10             	mov    0x10(%ebp),%eax
 8466399:	88 45 a4             	mov    %al,-0x5c(%ebp)
 846639c:	8d 45 ab             	lea    -0x55(%ebp),%eax
 846639f:	89 04 24             	mov    %eax,(%esp)
 84663a2:	e8 ad 54 c6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84663a7:	0f be 45 a4          	movsbl -0x5c(%ebp),%eax
 84663ab:	83 f8 02             	cmp    $0x2,%eax
 84663ae:	0f 84 26 01 00 00    	je     84664da <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x14e>
 84663b4:	83 f8 02             	cmp    $0x2,%eax
 84663b7:	7f 09                	jg     84663c2 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x36>
 84663b9:	85 c0                	test   %eax,%eax
 84663bb:	74 1c                	je     84663d9 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x4d>
 84663bd:	e9 36 03 00 00       	jmp    84666f8 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x36c>
 84663c2:	83 f8 03             	cmp    $0x3,%eax
 84663c5:	0f 84 ba 01 00 00    	je     8466585 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x1f9>
 84663cb:	83 f8 07             	cmp    $0x7,%eax
 84663ce:	0f 84 64 02 00 00    	je     8466638 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x2ac>
 84663d4:	e9 1f 03 00 00       	jmp    84666f8 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x36c>
 84663d9:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 84663dd:	75 48                	jne    8466427 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x9b>
 84663df:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84663e2:	c6 00 00             	movb   $0x0,(%eax)
 84663e5:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84663e8:	c6 40 11 02          	movb   $0x2,0x11(%eax)
 84663ec:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84663ef:	c7 40 12 00 00 00 00 	movl   $0x0,0x12(%eax)
 84663f6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84663f9:	8d 50 10             	lea    0x10(%eax),%edx
 84663fc:	8b 45 18             	mov    0x18(%ebp),%eax
 84663ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466403:	89 14 24             	mov    %edx,(%esp)
 8466406:	e8 79 54 c6 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 846640b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846640e:	66 c7 40 1b 00 00    	movw   $0x0,0x1b(%eax)
 8466414:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8466417:	83 c0 10             	add    $0x10,%eax
 846641a:	89 04 24             	mov    %eax,(%esp)
 846641d:	e8 70 54 c6 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 8466422:	e9 dc 02 00 00       	jmp    8466703 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x377>
 8466427:	8b 45 0c             	mov    0xc(%ebp),%eax
 846642a:	89 04 24             	mov    %eax,(%esp)
 846642d:	e8 4c 3e c7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8466432:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 8466438:	8b 4d 14             	mov    0x14(%ebp),%ecx
 846643b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 846643f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8466446:	00 
 8466447:	89 44 24 04          	mov    %eax,0x4(%esp)
 846644b:	89 14 24             	mov    %edx,(%esp)
 846644e:	e8 c5 54 09 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8466453:	83 ec 04             	sub    $0x4,%esp
 8466456:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 846645c:	89 45 ab             	mov    %eax,-0x55(%ebp)
 846645f:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8466465:	89 45 af             	mov    %eax,-0x51(%ebp)
 8466468:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 846646e:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 8466471:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8466477:	89 45 b7             	mov    %eax,-0x49(%ebp)
 846647a:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8466480:	89 45 bb             	mov    %eax,-0x45(%ebp)
 8466483:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8466489:	89 45 bf             	mov    %eax,-0x41(%ebp)
 846648c:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8466492:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 8466495:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 846649b:	89 45 c7             	mov    %eax,-0x39(%ebp)
 846649e:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 84664a4:	89 45 cb             	mov    %eax,-0x35(%ebp)
 84664a7:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 84664ad:	89 45 cf             	mov    %eax,-0x31(%ebp)
 84664b0:	8b 45 80             	mov    -0x80(%ebp),%eax
 84664b3:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 84664b6:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84664b9:	89 45 d7             	mov    %eax,-0x29(%ebp)
 84664bc:	8b 45 88             	mov    -0x78(%ebp),%eax
 84664bf:	89 45 db             	mov    %eax,-0x25(%ebp)
 84664c2:	8b 45 8c             	mov    -0x74(%ebp),%eax
 84664c5:	89 45 df             	mov    %eax,-0x21(%ebp)
 84664c8:	8b 45 90             	mov    -0x70(%ebp),%eax
 84664cb:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 84664ce:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 84664d2:	88 45 e7             	mov    %al,-0x19(%ebp)
 84664d5:	e9 29 02 00 00       	jmp    8466703 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x377>
 84664da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84664dd:	89 04 24             	mov    %eax,(%esp)
 84664e0:	e8 9f b5 ce ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 84664e5:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 84664eb:	8b 4d 14             	mov    0x14(%ebp),%ecx
 84664ee:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84664f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84664f6:	89 14 24             	mov    %edx,(%esp)
 84664f9:	e8 b6 4d 0a 00       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 84664fe:	83 ec 04             	sub    $0x4,%esp
 8466501:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8466507:	89 45 ab             	mov    %eax,-0x55(%ebp)
 846650a:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8466510:	89 45 af             	mov    %eax,-0x51(%ebp)
 8466513:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8466519:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 846651c:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8466522:	89 45 b7             	mov    %eax,-0x49(%ebp)
 8466525:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 846652b:	89 45 bb             	mov    %eax,-0x45(%ebp)
 846652e:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8466534:	89 45 bf             	mov    %eax,-0x41(%ebp)
 8466537:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 846653d:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 8466540:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8466546:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8466549:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 846654f:	89 45 cb             	mov    %eax,-0x35(%ebp)
 8466552:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8466558:	89 45 cf             	mov    %eax,-0x31(%ebp)
 846655b:	8b 45 80             	mov    -0x80(%ebp),%eax
 846655e:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 8466561:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8466564:	89 45 d7             	mov    %eax,-0x29(%ebp)
 8466567:	8b 45 88             	mov    -0x78(%ebp),%eax
 846656a:	89 45 db             	mov    %eax,-0x25(%ebp)
 846656d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8466570:	89 45 df             	mov    %eax,-0x21(%ebp)
 8466573:	8b 45 90             	mov    -0x70(%ebp),%eax
 8466576:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 8466579:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 846657d:	88 45 e7             	mov    %al,-0x19(%ebp)
 8466580:	e9 7e 01 00 00       	jmp    8466703 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x377>
 8466585:	8b 45 0c             	mov    0xc(%ebp),%eax
 8466588:	89 04 24             	mov    %eax,(%esp)
 846658b:	e8 ee 3c c7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8466590:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 8466596:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8466599:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 846659d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84665a4:	00 
 84665a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84665a9:	89 14 24             	mov    %edx,(%esp)
 84665ac:	e8 67 53 09 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84665b1:	83 ec 04             	sub    $0x4,%esp
 84665b4:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 84665ba:	89 45 ab             	mov    %eax,-0x55(%ebp)
 84665bd:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 84665c3:	89 45 af             	mov    %eax,-0x51(%ebp)
 84665c6:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 84665cc:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 84665cf:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 84665d5:	89 45 b7             	mov    %eax,-0x49(%ebp)
 84665d8:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 84665de:	89 45 bb             	mov    %eax,-0x45(%ebp)
 84665e1:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84665e7:	89 45 bf             	mov    %eax,-0x41(%ebp)
 84665ea:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 84665f0:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 84665f3:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 84665f9:	89 45 c7             	mov    %eax,-0x39(%ebp)
 84665fc:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8466602:	89 45 cb             	mov    %eax,-0x35(%ebp)
 8466605:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 846660b:	89 45 cf             	mov    %eax,-0x31(%ebp)
 846660e:	8b 45 80             	mov    -0x80(%ebp),%eax
 8466611:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 8466614:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8466617:	89 45 d7             	mov    %eax,-0x29(%ebp)
 846661a:	8b 45 88             	mov    -0x78(%ebp),%eax
 846661d:	89 45 db             	mov    %eax,-0x25(%ebp)
 8466620:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8466623:	89 45 df             	mov    %eax,-0x21(%ebp)
 8466626:	8b 45 90             	mov    -0x70(%ebp),%eax
 8466629:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 846662c:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 8466630:	88 45 e7             	mov    %al,-0x19(%ebp)
 8466633:	e9 cb 00 00 00       	jmp    8466703 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x377>
 8466638:	8b 45 0c             	mov    0xc(%ebp),%eax
 846663b:	89 04 24             	mov    %eax,(%esp)
 846663e:	e8 3b 3c c7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8466643:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 8466649:	8b 4d 14             	mov    0x14(%ebp),%ecx
 846664c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8466650:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8466657:	00 
 8466658:	89 44 24 04          	mov    %eax,0x4(%esp)
 846665c:	89 14 24             	mov    %edx,(%esp)
 846665f:	e8 b4 52 09 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8466664:	83 ec 04             	sub    $0x4,%esp
 8466667:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 846666d:	89 45 ab             	mov    %eax,-0x55(%ebp)
 8466670:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8466676:	89 45 af             	mov    %eax,-0x51(%ebp)
 8466679:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 846667f:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 8466682:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8466688:	89 45 b7             	mov    %eax,-0x49(%ebp)
 846668b:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8466691:	89 45 bb             	mov    %eax,-0x45(%ebp)
 8466694:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 846669a:	89 45 bf             	mov    %eax,-0x41(%ebp)
 846669d:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 84666a3:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 84666a6:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 84666ac:	89 45 c7             	mov    %eax,-0x39(%ebp)
 84666af:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 84666b5:	89 45 cb             	mov    %eax,-0x35(%ebp)
 84666b8:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 84666be:	89 45 cf             	mov    %eax,-0x31(%ebp)
 84666c1:	8b 45 80             	mov    -0x80(%ebp),%eax
 84666c4:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 84666c7:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84666ca:	89 45 d7             	mov    %eax,-0x29(%ebp)
 84666cd:	8b 45 88             	mov    -0x78(%ebp),%eax
 84666d0:	89 45 db             	mov    %eax,-0x25(%ebp)
 84666d3:	8b 45 8c             	mov    -0x74(%ebp),%eax
 84666d6:	89 45 df             	mov    %eax,-0x21(%ebp)
 84666d9:	8b 45 90             	mov    -0x70(%ebp),%eax
 84666dc:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 84666df:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 84666e3:	88 45 e7             	mov    %al,-0x19(%ebp)
 84666e6:	0f b6 45 ac          	movzbl -0x54(%ebp),%eax
 84666ea:	3c 05                	cmp    $0x5,%al
 84666ec:	75 14                	jne    8466702 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x376>
 84666ee:	b8 00 00 00 00       	mov    $0x0,%eax
 84666f3:	e9 04 04 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 84666f8:	b8 00 00 00 00       	mov    $0x0,%eax
 84666fd:	e9 fa 03 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 8466702:	90                   	nop
 8466703:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 846670a:	8b 45 ad             	mov    -0x53(%ebp),%eax
 846670d:	85 c0                	test   %eax,%eax
 846670f:	0f 84 ac 01 00 00    	je     84668c1 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x535>
 8466715:	8b 45 ad             	mov    -0x53(%ebp),%eax
 8466718:	89 c3                	mov    %eax,%ebx
 846671a:	e8 7c 5a c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 846671f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8466723:	89 04 24             	mov    %eax,(%esp)
 8466726:	e8 07 93 ef ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 846672b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 846672e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8466732:	75 0a                	jne    846673e <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x3b2>
 8466734:	b8 00 00 00 00       	mov    $0x0,%eax
 8466739:	e9 be 03 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 846673e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8466741:	89 04 24             	mov    %eax,(%esp)
 8466744:	e8 99 ab c8 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 8466749:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846674c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 846674f:	83 f8 05             	cmp    $0x5,%eax
 8466752:	77 28                	ja     846677c <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x3f0>
 8466754:	8b 04 85 58 33 c6 08 	mov    0x8c63358(,%eax,4),%eax
 846675b:	ff e0                	jmp    *%eax
 846675d:	b8 00 00 00 00       	mov    $0x0,%eax
 8466762:	e9 95 03 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 8466767:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 846676b:	83 f0 01             	xor    $0x1,%eax
 846676e:	84 c0                	test   %al,%al
 8466770:	74 0a                	je     846677c <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x3f0>
 8466772:	b8 00 00 00 00       	mov    $0x0,%eax
 8466777:	e9 80 03 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 846677c:	8d 45 ab             	lea    -0x55(%ebp),%eax
 846677f:	83 c0 33             	add    $0x33,%eax
 8466782:	89 04 24             	mov    %eax,(%esp)
 8466785:	e8 80 a3 ca ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 846678a:	84 c0                	test   %al,%al
 846678c:	0f 95 c0             	setne  %al
 846678f:	84 c0                	test   %al,%al
 8466791:	74 0a                	je     846679d <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x411>
 8466793:	b8 00 00 00 00       	mov    $0x0,%eax
 8466798:	e9 5f 03 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 846679d:	8d 45 ab             	lea    -0x55(%ebp),%eax
 84667a0:	89 04 24             	mov    %eax,(%esp)
 84667a3:	e8 6a a0 ce ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 84667a8:	84 c0                	test   %al,%al
 84667aa:	74 2c                	je     84667d8 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x44c>
 84667ac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84667af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84667b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84667b5:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 84667bb:	83 f8 0b             	cmp    $0xb,%eax
 84667be:	74 0e                	je     84667ce <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x442>
 84667c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84667c3:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 84667c9:	83 f8 09             	cmp    $0x9,%eax
 84667cc:	7f 0a                	jg     84667d8 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x44c>
 84667ce:	b8 00 00 00 00       	mov    $0x0,%eax
 84667d3:	e9 24 03 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 84667d8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84667db:	c6 00 00             	movb   $0x0,(%eax)
 84667de:	0f b6 55 ac          	movzbl -0x54(%ebp),%edx
 84667e2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84667e5:	88 50 11             	mov    %dl,0x11(%eax)
 84667e8:	8b 55 ad             	mov    -0x53(%ebp),%edx
 84667eb:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84667ee:	89 50 12             	mov    %edx,0x12(%eax)
 84667f1:	8b 55 b8             	mov    -0x48(%ebp),%edx
 84667f4:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84667f7:	89 50 1d             	mov    %edx,0x1d(%eax)
 84667fa:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84667fd:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8466800:	89 50 25             	mov    %edx,0x25(%eax)
 8466803:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8466806:	89 50 29             	mov    %edx,0x29(%eax)
 8466809:	0f b7 55 c8          	movzwl -0x38(%ebp),%edx
 846680d:	66 89 50 2d          	mov    %dx,0x2d(%eax)
 8466811:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8466814:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8466817:	89 50 21             	mov    %edx,0x21(%eax)
 846681a:	8d 45 ab             	lea    -0x55(%ebp),%eax
 846681d:	89 04 24             	mov    %eax,(%esp)
 8466820:	e8 ed 9f ce ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 8466825:	83 f0 01             	xor    $0x1,%eax
 8466828:	84 c0                	test   %al,%al
 846682a:	74 17                	je     8466843 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x4b7>
 846682c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846682f:	8d 50 10             	lea    0x10(%eax),%edx
 8466832:	8b 45 18             	mov    0x18(%ebp),%eax
 8466835:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466839:	89 14 24             	mov    %edx,(%esp)
 846683c:	e8 43 50 c6 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8466841:	eb 15                	jmp    8466858 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x4cc>
 8466843:	8b 45 b2             	mov    -0x4e(%ebp),%eax
 8466846:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8466849:	83 c2 10             	add    $0x10,%edx
 846684c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466850:	89 14 24             	mov    %edx,(%esp)
 8466853:	e8 2c 50 c6 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8466858:	8d 45 ab             	lea    -0x55(%ebp),%eax
 846685b:	89 04 24             	mov    %eax,(%esp)
 846685e:	e8 79 9f ce ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 8466863:	0f b6 c0             	movzbl %al,%eax
 8466866:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8466869:	83 c2 10             	add    $0x10,%edx
 846686c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466870:	89 14 24             	mov    %edx,(%esp)
 8466873:	e8 70 9f ce ff       	call   81507e8 <_ZN10Inven_Item11SetItemAttrEh>
 8466878:	0f b7 55 b6          	movzwl -0x4a(%ebp),%edx
 846687c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846687f:	66 89 50 1b          	mov    %dx,0x1b(%eax)
 8466883:	0f b6 55 ab          	movzbl -0x55(%ebp),%edx
 8466887:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846688a:	88 50 10             	mov    %dl,0x10(%eax)
 846688d:	8b 45 18             	mov    0x18(%ebp),%eax
 8466890:	0f bf d8             	movswl %ax,%ebx
 8466893:	e8 45 b2 ce ff       	call   8151add <_Z7G_Storev>
 8466898:	8d 55 e8             	lea    -0x18(%ebp),%edx
 846689b:	89 54 24 14          	mov    %edx,0x14(%esp)
 846689f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84668a6:	00 
 84668a7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84668ab:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84668ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 84668b2:	8d 55 ab             	lea    -0x55(%ebp),%edx
 84668b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84668b9:	89 04 24             	mov    %eax,(%esp)
 84668bc:	e8 df 25 1b 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 84668c1:	0f be 45 a4          	movsbl -0x5c(%ebp),%eax
 84668c5:	83 f8 02             	cmp    $0x2,%eax
 84668c8:	0f 84 02 01 00 00    	je     84669d0 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x644>
 84668ce:	83 f8 02             	cmp    $0x2,%eax
 84668d1:	7f 09                	jg     84668dc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x550>
 84668d3:	85 c0                	test   %eax,%eax
 84668d5:	74 1c                	je     84668f3 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x567>
 84668d7:	e9 13 02 00 00       	jmp    8466aef <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x763>
 84668dc:	83 f8 03             	cmp    $0x3,%eax
 84668df:	0f 84 29 01 00 00    	je     8466a0e <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x682>
 84668e5:	83 f8 07             	cmp    $0x7,%eax
 84668e8:	0f 84 92 01 00 00    	je     8466a80 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x6f4>
 84668ee:	e9 fc 01 00 00       	jmp    8466aef <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x763>
 84668f3:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 84668f7:	75 63                	jne    846695c <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x5d0>
 84668f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84668fc:	89 04 24             	mov    %eax,(%esp)
 84668ff:	e8 8a 39 c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8466904:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 846690b:	00 
 846690c:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 8466913:	00 
 8466914:	8b 55 18             	mov    0x18(%ebp),%edx
 8466917:	89 54 24 04          	mov    %edx,0x4(%esp)
 846691b:	89 04 24             	mov    %eax,(%esp)
 846691e:	e8 29 8c 09 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8466923:	83 f0 01             	xor    $0x1,%eax
 8466926:	84 c0                	test   %al,%al
 8466928:	74 0a                	je     8466934 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x5a8>
 846692a:	b8 00 00 00 00       	mov    $0x0,%eax
 846692f:	e9 c8 01 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 8466934:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8466937:	e8 b3 6c 1a 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 846693c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8466940:	8b 55 0c             	mov    0xc(%ebp),%edx
 8466943:	89 54 24 08          	mov    %edx,0x8(%esp)
 8466947:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 846694e:	00 
 846694f:	89 04 24             	mov    %eax,(%esp)
 8466952:	e8 2b 6d 1a 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 8466957:	e9 9b 01 00 00       	jmp    8466af7 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x76b>
 846695c:	8b 45 0c             	mov    0xc(%ebp),%eax
 846695f:	89 04 24             	mov    %eax,(%esp)
 8466962:	e8 27 39 c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8466967:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 846696e:	00 
 846696f:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 8466976:	00 
 8466977:	8b 55 18             	mov    0x18(%ebp),%edx
 846697a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 846697e:	8b 55 14             	mov    0x14(%ebp),%edx
 8466981:	89 54 24 08          	mov    %edx,0x8(%esp)
 8466985:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 846698c:	00 
 846698d:	89 04 24             	mov    %eax,(%esp)
 8466990:	e8 77 d6 09 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8466995:	83 f0 01             	xor    $0x1,%eax
 8466998:	84 c0                	test   %al,%al
 846699a:	74 0a                	je     84669a6 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x61a>
 846699c:	b8 00 00 00 00       	mov    $0x0,%eax
 84669a1:	e9 56 01 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 84669a6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84669a9:	89 c3                	mov    %eax,%ebx
 84669ab:	e8 3f 6c 1a 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 84669b0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84669b4:	8b 55 0c             	mov    0xc(%ebp),%edx
 84669b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84669bb:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 84669c2:	00 
 84669c3:	89 04 24             	mov    %eax,(%esp)
 84669c6:	e8 b7 6c 1a 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 84669cb:	e9 27 01 00 00       	jmp    8466af7 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x76b>
 84669d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84669d3:	89 04 24             	mov    %eax,(%esp)
 84669d6:	e8 b9 b0 ce ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 84669db:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 84669e2:	00 
 84669e3:	8b 55 18             	mov    0x18(%ebp),%edx
 84669e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84669ea:	8b 55 14             	mov    0x14(%ebp),%edx
 84669ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 84669f1:	89 04 24             	mov    %eax,(%esp)
 84669f4:	e8 9b 4d 0a 00       	call   850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>
 84669f9:	83 f0 01             	xor    $0x1,%eax
 84669fc:	84 c0                	test   %al,%al
 84669fe:	0f 84 f2 00 00 00    	je     8466af6 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x76a>
 8466a04:	b8 00 00 00 00       	mov    $0x0,%eax
 8466a09:	e9 ee 00 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 8466a0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8466a11:	89 04 24             	mov    %eax,(%esp)
 8466a14:	e8 75 38 c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8466a19:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8466a20:	00 
 8466a21:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 8466a28:	00 
 8466a29:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8466a30:	00 
 8466a31:	8b 55 14             	mov    0x14(%ebp),%edx
 8466a34:	89 54 24 08          	mov    %edx,0x8(%esp)
 8466a38:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8466a3f:	00 
 8466a40:	89 04 24             	mov    %eax,(%esp)
 8466a43:	e8 c4 d5 09 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8466a48:	83 f0 01             	xor    $0x1,%eax
 8466a4b:	84 c0                	test   %al,%al
 8466a4d:	74 0a                	je     8466a59 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x6cd>
 8466a4f:	b8 00 00 00 00       	mov    $0x0,%eax
 8466a54:	e9 a3 00 00 00       	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 8466a59:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466a5c:	89 c3                	mov    %eax,%ebx
 8466a5e:	e8 8c 6b 1a 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 8466a63:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8466a67:	8b 55 0c             	mov    0xc(%ebp),%edx
 8466a6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8466a6e:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 8466a75:	00 
 8466a76:	89 04 24             	mov    %eax,(%esp)
 8466a79:	e8 04 6c 1a 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 8466a7e:	eb 77                	jmp    8466af7 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x76b>
 8466a80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8466a83:	89 04 24             	mov    %eax,(%esp)
 8466a86:	e8 03 38 c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8466a8b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8466a92:	00 
 8466a93:	c7 44 24 10 06 00 00 	movl   $0x6,0x10(%esp)
 8466a9a:	00 
 8466a9b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8466aa2:	00 
 8466aa3:	8b 55 14             	mov    0x14(%ebp),%edx
 8466aa6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8466aaa:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8466ab1:	00 
 8466ab2:	89 04 24             	mov    %eax,(%esp)
 8466ab5:	e8 52 d5 09 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8466aba:	83 f0 01             	xor    $0x1,%eax
 8466abd:	84 c0                	test   %al,%al
 8466abf:	74 07                	je     8466ac8 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x73c>
 8466ac1:	b8 00 00 00 00       	mov    $0x0,%eax
 8466ac6:	eb 34                	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 8466ac8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466acb:	89 c3                	mov    %eax,%ebx
 8466acd:	e8 1d 6b 1a 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 8466ad2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8466ad6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8466ad9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8466add:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 8466ae4:	00 
 8466ae5:	89 04 24             	mov    %eax,(%esp)
 8466ae8:	e8 95 6b 1a 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 8466aed:	eb 08                	jmp    8466af7 <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x76b>
 8466aef:	b8 00 00 00 00       	mov    $0x0,%eax
 8466af4:	eb 06                	jmp    8466afc <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item+0x770>
 8466af6:	90                   	nop
 8466af7:	b8 01 00 00 00       	mov    $0x1,%eax
 8466afc:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8466aff:	c9                   	leave
 8466b00:	c3                   	ret
 8466b01:	90                   	nop

```

```c
// WongWork::CDeathTower::_makeDropItem @ 0x846638c

/* WongWork::CDeathTower::_makeDropItem(CUser*, char, int, int, map_item&) */

undefined4 __thiscall
WongWork::CDeathTower::_makeDropItem
          (CDeathTower *this,CUser *param_1,char param_2,int param_3,int param_4,map_item *param_5)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  CDataManager *this_00;
  Store *this_01;
  CInventory *pCVar4;
  CValueStatistic *pCVar5;
  CCargo *pCVar6;
  undefined1 local_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  char local_60;
  map_item local_59;
  map_item mStack_58;
  undefined2 uStack_57;
  undefined2 uStack_55;
  undefined1 uStack_53;
  int iStack_52;
  undefined1 local_4e;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined4 uStack_41;
  undefined1 uStack_3d;
  undefined2 local_3c;
  undefined1 uStack_3a;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined1 local_1d;
  int local_1c;
  CItem *local_18;
  undefined4 local_14;
  CItem *local_10;
  
  local_60 = param_2;
  Inven_Item::Inven_Item((Inven_Item *)&local_59);
  if (local_60 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_ac);
    local_59 = SUB41(local_ac._0_4_,0);
    mStack_58 = SUB41(local_ac._0_4_,1);
    uStack_57 = SUB42(local_ac._0_4_,2);
    uStack_55 = (undefined2)local_ac._4_4_;
    uStack_53 = SUB41(local_ac._4_4_,2);
    iStack_52._1_3_ = (undefined3)local_ac._8_4_;
    iStack_52 = CONCAT31(iStack_52._1_3_,SUB41(local_ac._4_4_,3));
    local_4e = SUB41(local_ac._8_4_,3);
    uStack_4d = local_a0;
    uStack_49 = local_9c;
    uStack_45 = local_98;
    uStack_41 = local_94;
    uStack_3d = (undefined1)local_90;
    local_3c = (undefined2)((uint)local_90 >> 8);
    uStack_3a = (undefined1)((uint)local_90 >> 0x18);
    local_39 = local_8c;
    local_35 = local_88;
    local_31 = local_84;
    local_2d = local_80;
    local_29 = local_7c;
    local_25 = local_78;
    local_21 = local_74;
    local_1d = local_70;
  }
  else if (local_60 < '\x03') {
    if (local_60 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      *param_5 = (map_item)0x0;
      param_5[0x11] = (map_item)0x2;
      *(undefined4 *)(param_5 + 0x12) = 0;
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
      *(undefined2 *)(param_5 + 0x1b) = 0;
      Inven_Item::ResetItemAttr((Inven_Item *)(param_5 + 0x10));
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_ac,iVar3);
      local_59 = SUB41(local_ac._0_4_,0);
      mStack_58 = SUB41(local_ac._0_4_,1);
      uStack_57 = SUB42(local_ac._0_4_,2);
      uStack_55 = (undefined2)local_ac._4_4_;
      uStack_53 = SUB41(local_ac._4_4_,2);
      iStack_52._1_3_ = (undefined3)local_ac._8_4_;
      iStack_52 = CONCAT31(iStack_52._1_3_,SUB41(local_ac._4_4_,3));
      local_4e = SUB41(local_ac._8_4_,3);
      uStack_4d = local_a0;
      uStack_49 = local_9c;
      uStack_45 = local_98;
      uStack_41 = local_94;
      uStack_3d = (undefined1)local_90;
      local_3c = (undefined2)((uint)local_90 >> 8);
      uStack_3a = (undefined1)((uint)local_90 >> 0x18);
      local_39 = local_8c;
      local_35 = local_88;
      local_31 = local_84;
      local_2d = local_80;
      local_29 = local_7c;
      local_25 = local_78;
      local_21 = local_74;
      local_1d = local_70;
    }
  }
  else if (local_60 == '\x03') {
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar3);
    local_59 = SUB41(local_ac._0_4_,0);
    mStack_58 = SUB41(local_ac._0_4_,1);
    uStack_57 = SUB42(local_ac._0_4_,2);
    uStack_55 = (undefined2)local_ac._4_4_;
    uStack_53 = SUB41(local_ac._4_4_,2);
    iStack_52._1_3_ = (undefined3)local_ac._8_4_;
    iStack_52 = CONCAT31(iStack_52._1_3_,SUB41(local_ac._4_4_,3));
    local_4e = SUB41(local_ac._8_4_,3);
    uStack_4d = local_a0;
    uStack_49 = local_9c;
    uStack_45 = local_98;
    uStack_41 = local_94;
    uStack_3d = (undefined1)local_90;
    local_3c = (undefined2)((uint)local_90 >> 8);
    uStack_3a = (undefined1)((uint)local_90 >> 0x18);
    local_39 = local_8c;
    local_35 = local_88;
    local_31 = local_84;
    local_2d = local_80;
    local_29 = local_7c;
    local_25 = local_78;
    local_21 = local_74;
    local_1d = local_70;
  }
  else {
    if (local_60 != '\a') {
      return 0;
    }
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar3);
    local_59 = SUB41(local_ac._0_4_,0);
    mStack_58 = SUB41(local_ac._0_4_,1);
    uStack_57 = SUB42(local_ac._0_4_,2);
    uStack_55 = (undefined2)local_ac._4_4_;
    uStack_53 = SUB41(local_ac._4_4_,2);
    iStack_52._1_3_ = (undefined3)local_ac._8_4_;
    iStack_52 = CONCAT31(iStack_52._1_3_,SUB41(local_ac._4_4_,3));
    local_4e = SUB41(local_ac._8_4_,3);
    uStack_4d = local_a0;
    uStack_49 = local_9c;
    uStack_45 = local_98;
    uStack_41 = local_94;
    uStack_3d = (undefined1)local_90;
    local_3c = (undefined2)((uint)local_90 >> 8);
    uStack_3a = (undefined1)((uint)local_90 >> 0x18);
    local_39 = local_8c;
    local_35 = local_88;
    local_31 = local_84;
    local_2d = local_80;
    local_29 = local_7c;
    local_25 = local_78;
    local_21 = local_74;
    local_1d = local_70;
    if (mStack_58 == (map_item)0x5) {
      return 0;
    }
  }
  local_1c = 0;
  if (CONCAT22(uStack_55,uStack_57) != 0) {
    iVar3 = CONCAT22(uStack_55,uStack_57);
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CItem *)CDataManager::find_item(this_00,iVar3);
    if (local_18 == (CItem *)0x0) {
      return 0;
    }
    local_14 = CItem::GetAttachType(local_18);
    switch(local_14) {
    case 1:
    case 2:
    case 5:
      return 0;
    case 3:
      if (local_59 != (map_item)0x1) {
        return 0;
      }
    }
    cVar1 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)((int)&local_29 + 3));
    if (cVar1 != '\0') {
      return 0;
    }
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)&local_59);
    if ((cVar1 != '\0') &&
       ((local_10 = local_18, *(int *)(local_18 + 0x234) == 0xb || (*(int *)(local_18 + 0x234) < 10)
        ))) {
      return 0;
    }
    *param_5 = (map_item)0x0;
    param_5[0x11] = mStack_58;
    *(uint *)(param_5 + 0x12) = CONCAT22(uStack_55,uStack_57);
    *(uint *)(param_5 + 0x1d) = CONCAT13((undefined1)uStack_49,uStack_4d._1_3_);
    *(uint *)(param_5 + 0x25) = CONCAT13((undefined1)uStack_41,uStack_45._1_3_);
    *(uint *)(param_5 + 0x29) = CONCAT13(uStack_3d,uStack_41._1_3_);
    *(undefined2 *)(param_5 + 0x2d) = local_3c;
    *(uint *)(param_5 + 0x21) = CONCAT13((undefined1)uStack_45,uStack_49._1_3_);
    cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)&local_59);
    if (cVar1 == '\x01') {
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),iStack_52);
    }
    else {
      Inven_Item::set_add_info((Inven_Item *)(param_5 + 0x10),param_4);
    }
    uVar2 = Inven_Item::GetItemAttr((Inven_Item *)&local_59);
    Inven_Item::SetItemAttr((Inven_Item *)(param_5 + 0x10),uVar2);
    *(ushort *)(param_5 + 0x1b) = CONCAT11((undefined1)uStack_4d,local_4e);
    param_5[0x10] = local_59;
    this_01 = (Store *)G_Store();
    Store::GetSellItemPrice(this_01,(Inven_Item *)&local_59,local_18,(short)param_4,false,&local_1c)
    ;
  }
  if (local_60 == '\x02') {
    pCVar6 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
    cVar1 = CCargo::delete_item(pCVar6,param_3,param_4,0x10);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  else if (local_60 < '\x03') {
    if (local_60 != '\0') {
      return 0;
    }
    if (param_3 == 0) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::use_money(pCVar4,param_4,6,1);
      if (cVar1 != '\x01') {
        return 0;
      }
      pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar5,0x17,param_1,param_4);
    }
    else {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar1 = CInventory::delete_item(pCVar4,1,param_3,param_4,6,1);
      iVar3 = local_1c;
      if (cVar1 != '\x01') {
        return 0;
      }
      pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar5,0x16,param_1,iVar3);
    }
  }
  else if (local_60 == '\x03') {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar4,0,param_3,1,6,1);
    iVar3 = local_1c;
    if (cVar1 != '\x01') {
      return 0;
    }
    pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar5,0x16,param_1,iVar3);
  }
  else {
    if (local_60 != '\a') {
      return 0;
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::delete_item(pCVar4,3,param_3,1,6,1);
    iVar3 = local_1c;
    if (cVar1 != '\x01') {
      return 0;
    }
    pCVar5 = (CValueStatistic *)GetInstanceValueStatistic();
    CValueStatistic::AddValueStatistic(pCVar5,0x16,param_1,iVar3);
  }
  return 1;
}

```

---

## _onClear

```asm
// === 08467e60 WongWork::CDeathTower::_onClear  [0x08467e60-0x8467f6d] ===
 8467e60:	55                   	push   %ebp
 8467e61:	89 e5                	mov    %esp,%ebp
 8467e63:	83 ec 38             	sub    $0x38,%esp
 8467e66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8467e69:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8467e6c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8467e73:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8467e77:	74 15                	je     8467e8e <_ZN8WongWork11CDeathTower8_onClearEb+0x2e>
 8467e79:	8b 45 08             	mov    0x8(%ebp),%eax
 8467e7c:	05 10 01 00 00       	add    $0x110,%eax
 8467e81:	89 04 24             	mov    %eax,(%esp)
 8467e84:	e8 4b 1d 00 00       	call   8469bd4 <_ZN8WongWork11CDeathTower9CPlayData11getPlayTimeEv>
 8467e89:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8467e8c:	eb 13                	jmp    8467ea1 <_ZN8WongWork11CDeathTower8_onClearEb+0x41>
 8467e8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8467e91:	05 10 01 00 00       	add    $0x110,%eax
 8467e96:	89 04 24             	mov    %eax,(%esp)
 8467e99:	e8 42 1d 00 00       	call   8469be0 <_ZN8WongWork11CDeathTower9CPlayData15getLastPlayTimeEv>
 8467e9e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8467ea1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8467ea8:	e9 af 00 00 00       	jmp    8467f5c <_ZN8WongWork11CDeathTower8_onClearEb+0xfc>
 8467ead:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8467eb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8467eb7:	8b 00                	mov    (%eax),%eax
 8467eb9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467ebc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467ec0:	89 04 24             	mov    %eax,(%esp)
 8467ec3:	e8 9c d8 cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 8467ec8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8467ecb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8467ecf:	74 1b                	je     8467eec <_ZN8WongWork11CDeathTower8_onClearEb+0x8c>
 8467ed1:	8b 45 08             	mov    0x8(%ebp),%eax
 8467ed4:	8b 00                	mov    (%eax),%eax
 8467ed6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467ed9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467edd:	89 04 24             	mov    %eax,(%esp)
 8467ee0:	e8 83 d9 cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8467ee5:	83 f0 01             	xor    $0x1,%eax
 8467ee8:	84 c0                	test   %al,%al
 8467eea:	74 07                	je     8467ef3 <_ZN8WongWork11CDeathTower8_onClearEb+0x93>
 8467eec:	b8 01 00 00 00       	mov    $0x1,%eax
 8467ef1:	eb 05                	jmp    8467ef8 <_ZN8WongWork11CDeathTower8_onClearEb+0x98>
 8467ef3:	b8 00 00 00 00       	mov    $0x0,%eax
 8467ef8:	84 c0                	test   %al,%al
 8467efa:	75 5b                	jne    8467f57 <_ZN8WongWork11CDeathTower8_onClearEb+0xf7>
 8467efc:	8b 45 08             	mov    0x8(%ebp),%eax
 8467eff:	8b 00                	mov    (%eax),%eax
 8467f01:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467f04:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467f08:	89 04 24             	mov    %eax,(%esp)
 8467f0b:	e8 54 d8 cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 8467f10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8467f17:	00 
 8467f18:	89 04 24             	mov    %eax,(%esp)
 8467f1b:	e8 3c 1b 00 00       	call   8469a5c <_ZN5CUser23setChattingMessageCountEi>
 8467f20:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8467f23:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8467f28:	89 c8                	mov    %ecx,%eax
 8467f2a:	f7 ea                	imul   %edx
 8467f2c:	c1 fa 06             	sar    $0x6,%edx
 8467f2f:	89 c8                	mov    %ecx,%eax
 8467f31:	c1 f8 1f             	sar    $0x1f,%eax
 8467f34:	89 d1                	mov    %edx,%ecx
 8467f36:	29 c1                	sub    %eax,%ecx
 8467f38:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8467f3c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8467f3f:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8467f45:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8467f49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467f4d:	89 14 24             	mov    %edx,(%esp)
 8467f50:	e8 6f cb 21 00       	call   8684ac4 <_ZN15cUserHistoryLog16DungeonClearInfoEil>
 8467f55:	eb 01                	jmp    8467f58 <_ZN8WongWork11CDeathTower8_onClearEb+0xf8>
 8467f57:	90                   	nop
 8467f58:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8467f5c:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8467f60:	0f 9e c0             	setle  %al
 8467f63:	84 c0                	test   %al,%al
 8467f65:	0f 85 42 ff ff ff    	jne    8467ead <_ZN8WongWork11CDeathTower8_onClearEb+0x4d>
 8467f6b:	c9                   	leave
 8467f6c:	c3                   	ret
 8467f6d:	90                   	nop

```

```c
// WongWork::CDeathTower::_onClear @ 0x8467e60

/* WongWork::CDeathTower::_onClear(bool) */

void __thiscall WongWork::CDeathTower::_onClear(CDeathTower *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *this_00;
  int local_18;
  int local_14;
  
  if (param_1) {
    local_18 = CPlayData::getPlayTime((CPlayData *)(this + 0x110));
  }
  else {
    local_18 = CPlayData::getLastPlayTime((CPlayData *)(this + 0x110));
  }
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    iVar3 = CParty::get_user(*(CParty **)this,local_14);
    if (iVar3 == 0) {
LAB_08467eec:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_14);
      if (cVar2 != '\x01') goto LAB_08467eec;
      bVar1 = false;
    }
    if (!bVar1) {
      this_00 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
      CUser::setChattingMessageCount(this_00,0);
      cUserHistoryLog::DungeonClearInfo
                ((cUserHistoryLog *)(iVar3 + 0x79700),(uint)param_1,local_18 / 1000);
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _onFinishDeathTower

```asm
// === 08467f6e WongWork::CDeathTower::_onFinishDeathTower  [0x08467f6e-0x846801d] ===
 8467f6e:	55                   	push   %ebp
 8467f6f:	89 e5                	mov    %esp,%ebp
 8467f71:	83 ec 28             	sub    $0x28,%esp
 8467f74:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8467f7b:	eb 68                	jmp    8467fe5 <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv+0x77>
 8467f7d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8467f84:	8b 45 08             	mov    0x8(%ebp),%eax
 8467f87:	8b 00                	mov    (%eax),%eax
 8467f89:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467f8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467f90:	89 04 24             	mov    %eax,(%esp)
 8467f93:	e8 cc d7 cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 8467f98:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8467f9b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8467f9f:	74 1b                	je     8467fbc <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv+0x4e>
 8467fa1:	8b 45 08             	mov    0x8(%ebp),%eax
 8467fa4:	8b 00                	mov    (%eax),%eax
 8467fa6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467fa9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467fad:	89 04 24             	mov    %eax,(%esp)
 8467fb0:	e8 b3 d8 cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8467fb5:	83 f0 01             	xor    $0x1,%eax
 8467fb8:	84 c0                	test   %al,%al
 8467fba:	74 07                	je     8467fc3 <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv+0x55>
 8467fbc:	b8 01 00 00 00       	mov    $0x1,%eax
 8467fc1:	eb 05                	jmp    8467fc8 <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv+0x5a>
 8467fc3:	b8 00 00 00 00       	mov    $0x0,%eax
 8467fc8:	84 c0                	test   %al,%al
 8467fca:	75 14                	jne    8467fe0 <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv+0x72>
 8467fcc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8467fcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467fd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8467fd6:	89 04 24             	mov    %eax,(%esp)
 8467fd9:	e8 14 b7 ff ff       	call   84636f2 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser>
 8467fde:	eb 01                	jmp    8467fe1 <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv+0x73>
 8467fe0:	90                   	nop
 8467fe1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8467fe5:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8467fe9:	0f 9e c0             	setle  %al
 8467fec:	84 c0                	test   %al,%al
 8467fee:	75 8d                	jne    8467f7d <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv+0xf>
 8467ff0:	8b 45 08             	mov    0x8(%ebp),%eax
 8467ff3:	8b 00                	mov    (%eax),%eax
 8467ff5:	89 04 24             	mov    %eax,(%esp)
 8467ff8:	e8 63 4a 14 00       	call   85aca60 <_ZN6CParty15ReturnToVillageEv>
 8467ffd:	8b 45 08             	mov    0x8(%ebp),%eax
 8468000:	89 04 24             	mov    %eax,(%esp)
 8468003:	e8 54 1c 00 00       	call   8469c5c <_ZN8WongWork11CDeathTower13getTowerStateEv>
 8468008:	85 c0                	test   %eax,%eax
 846800a:	0f 9f c0             	setg   %al
 846800d:	84 c0                	test   %al,%al
 846800f:	74 0b                	je     846801c <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv+0xae>
 8468011:	8b 45 08             	mov    0x8(%ebp),%eax
 8468014:	89 04 24             	mov    %eax,(%esp)
 8468017:	e8 04 fb ff ff       	call   8467b20 <_ZN8WongWork11CDeathTower8_destroyEv>
 846801c:	c9                   	leave
 846801d:	c3                   	ret

```

```c
// WongWork::CDeathTower::_onFinishDeathTower @ 0x8467f6e

/* WongWork::CDeathTower::_onFinishDeathTower() */

void __thiscall WongWork::CDeathTower::_onFinishDeathTower(CDeathTower *this)

{
  bool bVar1;
  char cVar2;
  CUser *pCVar3;
  int iVar4;
  undefined4 local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      CParty::ReturnToVillage(*(CParty **)this);
      iVar4 = getTowerState(this);
      if (0 < iVar4) {
        _destroy(this);
      }
      return;
    }
    pCVar3 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
    if (pCVar3 == (CUser *)0x0) {
LAB_08467fbc:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_14);
      if (cVar2 != '\x01') goto LAB_08467fbc;
      bVar1 = false;
    }
    if (!bVar1) {
      onLeaveUser(this,pCVar3);
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _onFinishStage

```asm
// === 08467cc2 WongWork::CDeathTower::_onFinishStage  [0x08467cc2-0x8467dff] ===
 8467cc2:	55                   	push   %ebp
 8467cc3:	89 e5                	mov    %esp,%ebp
 8467cc5:	53                   	push   %ebx
 8467cc6:	83 ec 34             	sub    $0x34,%esp
 8467cc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8467ccc:	83 c0 14             	add    $0x14,%eax
 8467ccf:	89 04 24             	mov    %eax,(%esp)
 8467cd2:	e8 69 9f ff ff       	call   8461c40 <_ZN8WongWork11CDeathTower6CStage13onFinishStageEv>
 8467cd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8467cda:	83 c0 14             	add    $0x14,%eax
 8467cdd:	89 04 24             	mov    %eax,(%esp)
 8467ce0:	e8 15 c9 dc ff       	call   82345fa <_ZN8WongWork11CDeathTower6CStage17getStageClearTimeEv>
 8467ce5:	8b 55 08             	mov    0x8(%ebp),%edx
 8467ce8:	81 c2 10 01 00 00    	add    $0x110,%edx
 8467cee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467cf2:	89 14 24             	mov    %edx,(%esp)
 8467cf5:	e8 b8 1e 00 00       	call   8469bb2 <_ZN8WongWork11CDeathTower9CPlayData11addPlayTimeEj>
 8467cfa:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8467d01:	e9 e5 00 00 00       	jmp    8467deb <_ZN8WongWork11CDeathTower14_onFinishStageEv+0x129>
 8467d06:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8467d0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8467d10:	8b 00                	mov    (%eax),%eax
 8467d12:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467d15:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467d19:	89 04 24             	mov    %eax,(%esp)
 8467d1c:	e8 43 da cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 8467d21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8467d24:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8467d28:	74 1b                	je     8467d45 <_ZN8WongWork11CDeathTower14_onFinishStageEv+0x83>
 8467d2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8467d2d:	8b 00                	mov    (%eax),%eax
 8467d2f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467d32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467d36:	89 04 24             	mov    %eax,(%esp)
 8467d39:	e8 2a db cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8467d3e:	83 f0 01             	xor    $0x1,%eax
 8467d41:	84 c0                	test   %al,%al
 8467d43:	74 07                	je     8467d4c <_ZN8WongWork11CDeathTower14_onFinishStageEv+0x8a>
 8467d45:	b8 01 00 00 00       	mov    $0x1,%eax
 8467d4a:	eb 05                	jmp    8467d51 <_ZN8WongWork11CDeathTower14_onFinishStageEv+0x8f>
 8467d4c:	b8 00 00 00 00       	mov    $0x0,%eax
 8467d51:	84 c0                	test   %al,%al
 8467d53:	0f 85 8d 00 00 00    	jne    8467de6 <_ZN8WongWork11CDeathTower14_onFinishStageEv+0x124>
 8467d59:	8b 45 08             	mov    0x8(%ebp),%eax
 8467d5c:	83 c0 14             	add    $0x14,%eax
 8467d5f:	89 04 24             	mov    %eax,(%esp)
 8467d62:	e8 93 c8 dc ff       	call   82345fa <_ZN8WongWork11CDeathTower6CStage17getStageClearTimeEv>
 8467d67:	3d 6f 17 00 00       	cmp    $0x176f,%eax
 8467d6c:	0f 96 c0             	setbe  %al
 8467d6f:	84 c0                	test   %al,%al
 8467d71:	74 3a                	je     8467dad <_ZN8WongWork11CDeathTower14_onFinishStageEv+0xeb>
 8467d73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8467d76:	89 04 24             	mov    %eax,(%esp)
 8467d79:	e8 dc 1b c9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8467d7e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8467d85:	00 
 8467d86:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8467d8d:	00 
 8467d8e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8467d95:	00 
 8467d96:	c7 44 24 08 9a 01 00 	movl   $0x19a,0x8(%esp)
 8467d9d:	00 
 8467d9e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8467da1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467da5:	89 04 24             	mov    %eax,(%esp)
 8467da8:	e8 d1 0e c9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8467dad:	8b 45 08             	mov    0x8(%ebp),%eax
 8467db0:	83 c0 14             	add    $0x14,%eax
 8467db3:	89 04 24             	mov    %eax,(%esp)
 8467db6:	e8 51 1d 00 00       	call   8469b0c <_ZN8WongWork11CDeathTower6CStage16getStageMapIndexEv>
 8467dbb:	89 c3                	mov    %eax,%ebx
 8467dbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8467dc0:	89 04 24             	mov    %eax,(%esp)
 8467dc3:	e8 96 2c ce ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 8467dc8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8467dcf:	00 
 8467dd0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8467dd4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8467ddb:	00 
 8467ddc:	89 04 24             	mov    %eax,(%esp)
 8467ddf:	e8 cc 3f 24 00       	call   86abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>
 8467de4:	eb 01                	jmp    8467de7 <_ZN8WongWork11CDeathTower14_onFinishStageEv+0x125>
 8467de6:	90                   	nop
 8467de7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8467deb:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8467def:	0f 9e c0             	setle  %al
 8467df2:	84 c0                	test   %al,%al
 8467df4:	0f 85 0c ff ff ff    	jne    8467d06 <_ZN8WongWork11CDeathTower14_onFinishStageEv+0x44>
 8467dfa:	83 c4 34             	add    $0x34,%esp
 8467dfd:	5b                   	pop    %ebx
 8467dfe:	5d                   	pop    %ebp
 8467dff:	c3                   	ret

```

```c
// WongWork::CDeathTower::_onFinishStage @ 0x8467cc2

/* WongWork::CDeathTower::_onFinishStage() */

void __thiscall WongWork::CDeathTower::_onFinishStage(CDeathTower *this)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  CUser *this_00;
  CHackAnalyzer *pCVar4;
  undefined4 uVar5;
  UserQuest *pUVar6;
  int local_14;
  
  CStage::onFinishStage((CStage *)(this + 0x14));
  uVar3 = CStage::getStageClearTime((CStage *)(this + 0x14));
  CPlayData::addPlayTime((CPlayData *)(this + 0x110),uVar3);
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    this_00 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
    if (this_00 == (CUser *)0x0) {
LAB_08467d45:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_14);
      if (cVar2 != '\x01') goto LAB_08467d45;
      bVar1 = false;
    }
    if (!bVar1) {
      uVar3 = CStage::getStageClearTime((CStage *)(this + 0x14));
      if (uVar3 < 6000) {
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_00);
        CHackAnalyzer::addServerHackCnt(pCVar4,this_00,0x19a,1,0,0);
      }
      uVar5 = CStage::getStageMapIndex((CStage *)(this + 0x14));
      pUVar6 = (UserQuest *)CUser::getCurCharacQuestW(this_00);
      UserQuest::set_authen_data(pUVar6,1,uVar5,0);
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _onPrepareFinishTower

```asm
// === 08467e00 WongWork::CDeathTower::_onPrepareFinishTower  [0x08467e00-0x8467e5f] ===
 8467e00:	55                   	push   %ebp
 8467e01:	89 e5                	mov    %esp,%ebp
 8467e03:	56                   	push   %esi
 8467e04:	53                   	push   %ebx
 8467e05:	83 ec 20             	sub    $0x20,%esp
 8467e08:	c7 44 24 04 4a 00 00 	movl   $0x4a,0x4(%esp)
 8467e0f:	00 
 8467e10:	8b 45 08             	mov    0x8(%ebp),%eax
 8467e13:	89 04 24             	mov    %eax,(%esp)
 8467e16:	e8 d1 6f ea ff       	call   830edec <_ZN8WongWork11CDeathTower12_genTimerKeyE13TIMER_MESSAGE>
 8467e1b:	89 c3                	mov    %eax,%ebx
 8467e1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8467e20:	8b 70 04             	mov    0x4(%eax),%esi
 8467e23:	e8 54 e6 c8 ff       	call   80f647c <_Z12G_TimerQueuev>
 8467e28:	c7 44 24 18 4a 00 00 	movl   $0x4a,0x18(%esp)
 8467e2f:	00 
 8467e30:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8467e34:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 8467e3b:	00 
 8467e3c:	c7 44 24 0c 4a 00 00 	movl   $0x4a,0xc(%esp)
 8467e43:	00 
 8467e44:	89 74 24 08          	mov    %esi,0x8(%esp)
 8467e48:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8467e4f:	00 
 8467e50:	89 04 24             	mov    %eax,(%esp)
 8467e53:	e8 be 8f 1c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8467e58:	83 c4 20             	add    $0x20,%esp
 8467e5b:	5b                   	pop    %ebx
 8467e5c:	5e                   	pop    %esi
 8467e5d:	5d                   	pop    %ebp
 8467e5e:	c3                   	ret
 8467e5f:	90                   	nop

```

```c
// WongWork::CDeathTower::_onPrepareFinishTower @ 0x8467e00

/* WongWork::CDeathTower::_onPrepareFinishTower() */

void __thiscall WongWork::CDeathTower::_onPrepareFinishTower(CDeathTower *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar2 = _genTimerKey(this,0x4a);
  uVar1 = *(undefined4 *)(this + 4);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,6,uVar1,0x4a,5,uVar2,0x4a);
  return;
}

```

---

## _onStartDeathTower

```asm
// === 08467b50 WongWork::CDeathTower::_onStartDeathTower  [0x08467b50-0x8467cab] ===
 8467b50:	55                   	push   %ebp
 8467b51:	89 e5                	mov    %esp,%ebp
 8467b53:	57                   	push   %edi
 8467b54:	53                   	push   %ebx
 8467b55:	81 ec 30 01 00 00    	sub    $0x130,%esp
 8467b5b:	8d 9d f0 fe ff ff    	lea    -0x110(%ebp),%ebx
 8467b61:	b8 00 00 00 00       	mov    $0x0,%eax
 8467b66:	ba 40 00 00 00       	mov    $0x40,%edx
 8467b6b:	89 df                	mov    %ebx,%edi
 8467b6d:	89 d1                	mov    %edx,%ecx
 8467b6f:	f3 ab                	rep stos %eax,%es:(%edi)
 8467b71:	8b 45 08             	mov    0x8(%ebp),%eax
 8467b74:	8b 00                	mov    (%eax),%eax
 8467b76:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 8467b7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467b80:	89 04 24             	mov    %eax,(%esp)
 8467b83:	e8 fa dc cd ff       	call   8145882 <_ZN6CParty14getMemberNamesEPc>
 8467b88:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8467b8f:	e9 ff 00 00 00       	jmp    8467c93 <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv+0x143>
 8467b94:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8467b9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8467b9e:	8b 00                	mov    (%eax),%eax
 8467ba0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467ba3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467ba7:	89 04 24             	mov    %eax,(%esp)
 8467baa:	e8 b5 db cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 8467baf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8467bb2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8467bb6:	74 1b                	je     8467bd3 <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv+0x83>
 8467bb8:	8b 45 08             	mov    0x8(%ebp),%eax
 8467bbb:	8b 00                	mov    (%eax),%eax
 8467bbd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8467bc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467bc4:	89 04 24             	mov    %eax,(%esp)
 8467bc7:	e8 9c dc cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8467bcc:	83 f0 01             	xor    $0x1,%eax
 8467bcf:	84 c0                	test   %al,%al
 8467bd1:	74 07                	je     8467bda <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv+0x8a>
 8467bd3:	b8 01 00 00 00       	mov    $0x1,%eax
 8467bd8:	eb 05                	jmp    8467bdf <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv+0x8f>
 8467bda:	b8 00 00 00 00       	mov    $0x0,%eax
 8467bdf:	84 c0                	test   %al,%al
 8467be1:	0f 85 a7 00 00 00    	jne    8467c8e <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv+0x13e>
 8467be7:	8b 45 08             	mov    0x8(%ebp),%eax
 8467bea:	8b 00                	mov    (%eax),%eax
 8467bec:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8467bf2:	89 c3                	mov    %eax,%ebx
 8467bf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8467bf7:	83 c0 0c             	add    $0xc,%eax
 8467bfa:	89 04 24             	mov    %eax,(%esp)
 8467bfd:	e8 ee c9 dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8467c02:	89 04 24             	mov    %eax,(%esp)
 8467c05:	e8 9c d9 cd ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 8467c0a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8467c0d:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8467c13:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8467c17:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 8467c1d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8467c21:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8467c28:	00 
 8467c29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8467c2d:	89 0c 24             	mov    %ecx,(%esp)
 8467c30:	e8 6d cd 21 00       	call   86849a2 <_ZN15cUserHistoryLog12EnterDungeonEPKciS1_i>
 8467c35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8467c38:	89 04 24             	mov    %eax,(%esp)
 8467c3b:	e8 1e 2e ce ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 8467c40:	05 d8 75 00 00       	add    $0x75d8,%eax
 8467c45:	89 04 24             	mov    %eax,(%esp)
 8467c48:	e8 c9 2d ce ff       	call   814aa16 <_ZN18_Quest_Authen_Data5resetEv>
 8467c4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8467c50:	83 c0 0c             	add    $0xc,%eax
 8467c53:	89 04 24             	mov    %eax,(%esp)
 8467c56:	e8 95 c9 dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8467c5b:	89 04 24             	mov    %eax,(%esp)
 8467c5e:	e8 8d 60 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8467c63:	89 c3                	mov    %eax,%ebx
 8467c65:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8467c68:	89 04 24             	mov    %eax,(%esp)
 8467c6b:	e8 ee 2d ce ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 8467c70:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 8467c77:	ff 
 8467c78:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8467c7c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8467c83:	00 
 8467c84:	89 04 24             	mov    %eax,(%esp)
 8467c87:	e8 24 41 24 00       	call   86abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>
 8467c8c:	eb 01                	jmp    8467c8f <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv+0x13f>
 8467c8e:	90                   	nop
 8467c8f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8467c93:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 8467c97:	0f 9e c0             	setle  %al
 8467c9a:	84 c0                	test   %al,%al
 8467c9c:	0f 85 f2 fe ff ff    	jne    8467b94 <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv+0x44>
 8467ca2:	81 c4 30 01 00 00    	add    $0x130,%esp
 8467ca8:	5b                   	pop    %ebx
 8467ca9:	5f                   	pop    %edi
 8467caa:	5d                   	pop    %ebp
 8467cab:	c3                   	ret

```

```c
// WongWork::CDeathTower::_onStartDeathTower @ 0x8467b50

/* WongWork::CDeathTower::_onStartDeathTower() */

void __thiscall WongWork::CDeathTower::_onStartDeathTower(CDeathTower *this)

{
  bool bVar1;
  char cVar2;
  CDungeon *pCVar3;
  char *pcVar4;
  undefined4 uVar5;
  UserQuest *pUVar6;
  int iVar7;
  char local_114 [256];
  int local_14;
  CUser *local_10;
  
  pcVar4 = local_114;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  CParty::getMemberNames(*(CParty **)this,local_114);
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    local_10 = (CUser *)0x0;
    local_10 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
    if (local_10 == (CUser *)0x0) {
LAB_08467bd3:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_14);
      if (cVar2 != '\x01') goto LAB_08467bd3;
      bVar1 = false;
    }
    if (!bVar1) {
      iVar7 = *(int *)(*(int *)this + 0xcd8);
      pCVar3 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      pcVar4 = (char *)CDungeon::GetDungeonName(pCVar3);
      cUserHistoryLog::EnterDungeon
                ((cUserHistoryLog *)(local_10 + 0x79700),pcVar4,0,local_114,iVar7);
      iVar7 = CUser::getCurCharacQuestW(local_10);
      _Quest_Authen_Data::reset((_Quest_Authen_Data *)(iVar7 + 0x75d8));
      pCVar3 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      uVar5 = CDungeon::get_index(pCVar3);
      pUVar6 = (UserQuest *)CUser::getCurCharacQuestW(local_10);
      UserQuest::set_authen_data(pUVar6,0,uVar5,0xffffffff);
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## _onStartStage

```asm
// === 08467cac WongWork::CDeathTower::_onStartStage  [0x08467cac-0x8467cc1] ===
 8467cac:	55                   	push   %ebp
 8467cad:	89 e5                	mov    %esp,%ebp
 8467caf:	83 ec 18             	sub    $0x18,%esp
 8467cb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8467cb5:	83 c0 14             	add    $0x14,%eax
 8467cb8:	89 04 24             	mov    %eax,(%esp)
 8467cbb:	e8 66 9f ff ff       	call   8461c26 <_ZN8WongWork11CDeathTower6CStage12onStartStageEv>
 8467cc0:	c9                   	leave
 8467cc1:	c3                   	ret

```

```c
// WongWork::CDeathTower::_onStartStage @ 0x8467cac

/* WongWork::CDeathTower::_onStartStage() */

void __thiscall WongWork::CDeathTower::_onStartStage(CDeathTower *this)

{
  CStage::onStartStage((CStage *)(this + 0x14));
  return;
}

```

---

## _pickupItem

```asm
// === 08466cfe WongWork::CDeathTower::_pickupItem  [0x08466cfe-0x84670f7] ===
 8466cfe:	55                   	push   %ebp
 8466cff:	89 e5                	mov    %esp,%ebp
 8466d01:	56                   	push   %esi
 8466d02:	53                   	push   %ebx
 8466d03:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8466d09:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8466d0c:	8b 45 20             	mov    0x20(%ebp),%eax
 8466d0f:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 8466d12:	88 45 c0             	mov    %al,-0x40(%ebp)
 8466d15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8466d18:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8466d1b:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8466d1f:	0f 8e c5 03 00 00    	jle    84670ea <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3ec>
 8466d25:	c6 45 db 01          	movb   $0x1,-0x25(%ebp)
 8466d29:	8b 45 18             	mov    0x18(%ebp),%eax
 8466d2c:	0f b6 00             	movzbl (%eax),%eax
 8466d2f:	83 f0 01             	xor    $0x1,%eax
 8466d32:	84 c0                	test   %al,%al
 8466d34:	74 04                	je     8466d3a <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3c>
 8466d36:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 8466d3a:	8b 45 24             	mov    0x24(%ebp),%eax
 8466d3d:	89 04 24             	mov    %eax,(%esp)
 8466d40:	e8 91 a5 c8 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8466d45:	83 f8 03             	cmp    $0x3,%eax
 8466d48:	0f 9f c0             	setg   %al
 8466d4b:	84 c0                	test   %al,%al
 8466d4d:	74 07                	je     8466d56 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x58>
 8466d4f:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8466d53:	88 45 db             	mov    %al,-0x25(%ebp)
 8466d56:	8b 45 18             	mov    0x18(%ebp),%eax
 8466d59:	0f b6 00             	movzbl (%eax),%eax
 8466d5c:	84 c0                	test   %al,%al
 8466d5e:	74 16                	je     8466d76 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x78>
 8466d60:	8b 45 24             	mov    0x24(%ebp),%eax
 8466d63:	89 04 24             	mov    %eax,(%esp)
 8466d66:	e8 ff 2b 00 00       	call   846996a <_ZNK5CItem17isEpicRoutingItemEv>
 8466d6b:	84 c0                	test   %al,%al
 8466d6d:	74 07                	je     8466d76 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x78>
 8466d6f:	b8 01 00 00 00       	mov    $0x1,%eax
 8466d74:	eb 05                	jmp    8466d7b <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x7d>
 8466d76:	b8 00 00 00 00       	mov    $0x0,%eax
 8466d7b:	84 c0                	test   %al,%al
 8466d7d:	74 07                	je     8466d86 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x88>
 8466d7f:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8466d83:	88 45 db             	mov    %al,-0x25(%ebp)
 8466d86:	80 7d db 00          	cmpb   $0x0,-0x25(%ebp)
 8466d8a:	0f 84 5a 03 00 00    	je     84670ea <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3ec>
 8466d90:	8b 45 24             	mov    0x24(%ebp),%eax
 8466d93:	89 04 24             	mov    %eax,(%esp)
 8466d96:	e8 bb 69 0a 00       	call   850d756 <_ZNK5CItem18check_item_routingEv>
 8466d9b:	84 c0                	test   %al,%al
 8466d9d:	0f 84 47 03 00 00    	je     84670ea <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3ec>
 8466da3:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8466daa:	8b 45 08             	mov    0x8(%ebp),%eax
 8466dad:	05 10 01 00 00       	add    $0x110,%eax
 8466db2:	89 04 24             	mov    %eax,(%esp)
 8466db5:	e8 88 2d 00 00       	call   8469b42 <_ZN8WongWork11CDeathTower9CPlayData17getLastRoutedTurnEv>
 8466dba:	83 c0 01             	add    $0x1,%eax
 8466dbd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8466dc0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8466dc3:	3b 45 14             	cmp    0x14(%ebp),%eax
 8466dc6:	7c 07                	jl     8466dcf <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0xd1>
 8466dc8:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8466dcf:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8466dd6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8466ddd:	e9 0b 02 00 00       	jmp    8466fed <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x2ef>
 8466de2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8466de9:	8b 45 08             	mov    0x8(%ebp),%eax
 8466dec:	8b 00                	mov    (%eax),%eax
 8466dee:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8466df1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466df5:	89 04 24             	mov    %eax,(%esp)
 8466df8:	e8 67 e9 cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 8466dfd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8466e00:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8466e04:	74 1b                	je     8466e21 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x123>
 8466e06:	8b 45 08             	mov    0x8(%ebp),%eax
 8466e09:	8b 00                	mov    (%eax),%eax
 8466e0b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8466e0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466e12:	89 04 24             	mov    %eax,(%esp)
 8466e15:	e8 4e ea cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8466e1a:	83 f0 01             	xor    $0x1,%eax
 8466e1d:	84 c0                	test   %al,%al
 8466e1f:	74 07                	je     8466e28 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x12a>
 8466e21:	b8 01 00 00 00       	mov    $0x1,%eax
 8466e26:	eb 05                	jmp    8466e2d <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x12f>
 8466e28:	b8 00 00 00 00       	mov    $0x0,%eax
 8466e2d:	84 c0                	test   %al,%al
 8466e2f:	0f 85 ad 01 00 00    	jne    8466fe2 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x2e4>
 8466e35:	8b 45 08             	mov    0x8(%ebp),%eax
 8466e38:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8466e3e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466e41:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466e45:	89 14 24             	mov    %edx,(%esp)
 8466e48:	e8 29 2d 00 00       	call   8469b76 <_ZN8WongWork11CDeathTower9CPlayData13isMemberAliveEi>
 8466e4d:	83 f0 01             	xor    $0x1,%eax
 8466e50:	84 c0                	test   %al,%al
 8466e52:	0f 85 8d 01 00 00    	jne    8466fe5 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x2e7>
 8466e58:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8466e5b:	89 04 24             	mov    %eax,(%esp)
 8466e5e:	e8 1b 34 c7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8466e63:	89 c2                	mov    %eax,%edx
 8466e65:	8b 45 18             	mov    0x18(%ebp),%eax
 8466e68:	8b 48 10             	mov    0x10(%eax),%ecx
 8466e6b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8466e6f:	8b 48 14             	mov    0x14(%eax),%ecx
 8466e72:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8466e76:	8b 48 18             	mov    0x18(%eax),%ecx
 8466e79:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8466e7d:	8b 48 1c             	mov    0x1c(%eax),%ecx
 8466e80:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8466e84:	8b 48 20             	mov    0x20(%eax),%ecx
 8466e87:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8466e8b:	8b 48 24             	mov    0x24(%eax),%ecx
 8466e8e:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8466e92:	8b 48 28             	mov    0x28(%eax),%ecx
 8466e95:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8466e99:	8b 48 2c             	mov    0x2c(%eax),%ecx
 8466e9c:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8466ea0:	8b 48 30             	mov    0x30(%eax),%ecx
 8466ea3:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8466ea7:	8b 48 34             	mov    0x34(%eax),%ecx
 8466eaa:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 8466eae:	8b 48 38             	mov    0x38(%eax),%ecx
 8466eb1:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 8466eb5:	8b 48 3c             	mov    0x3c(%eax),%ecx
 8466eb8:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 8466ebc:	8b 48 40             	mov    0x40(%eax),%ecx
 8466ebf:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 8466ec3:	8b 48 44             	mov    0x44(%eax),%ecx
 8466ec6:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 8466eca:	8b 48 48             	mov    0x48(%eax),%ecx
 8466ecd:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 8466ed1:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 8466ed5:	88 44 24 40          	mov    %al,0x40(%esp)
 8466ed9:	89 14 24             	mov    %edx,(%esp)
 8466edc:	e8 e9 af 09 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 8466ee1:	83 f8 ff             	cmp    $0xffffffff,%eax
 8466ee4:	0f 94 c0             	sete   %al
 8466ee7:	84 c0                	test   %al,%al
 8466ee9:	0f 85 f9 00 00 00    	jne    8466fe8 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x2ea>
 8466eef:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466ef2:	03 45 10             	add    0x10(%ebp),%eax
 8466ef5:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8466ef8:	03 55 10             	add    0x10(%ebp),%edx
 8466efb:	0f b6 12             	movzbl (%edx),%edx
 8466efe:	83 c2 01             	add    $0x1,%edx
 8466f01:	88 10                	mov    %dl,(%eax)
 8466f03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8466f06:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8466f09:	75 2c                	jne    8466f37 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x239>
 8466f0b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466f0e:	03 45 10             	add    0x10(%ebp),%eax
 8466f11:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8466f14:	03 55 10             	add    0x10(%ebp),%edx
 8466f17:	0f b6 12             	movzbl (%edx),%edx
 8466f1a:	83 c2 28             	add    $0x28,%edx
 8466f1d:	88 10                	mov    %dl,(%eax)
 8466f1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8466f22:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8466f28:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8466f2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466f2f:	89 14 24             	mov    %edx,(%esp)
 8466f32:	e8 15 2c 00 00       	call   8469b4c <_ZN8WongWork11CDeathTower9CPlayData17setLastRoutedTurnEi>
 8466f37:	8b 45 24             	mov    0x24(%ebp),%eax
 8466f3a:	89 04 24             	mov    %eax,(%esp)
 8466f3d:	e8 b8 a3 c8 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8466f42:	83 f0 01             	xor    $0x1,%eax
 8466f45:	84 c0                	test   %al,%al
 8466f47:	74 3f                	je     8466f88 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x28a>
 8466f49:	8b 45 24             	mov    0x24(%ebp),%eax
 8466f4c:	8b 00                	mov    (%eax),%eax
 8466f4e:	83 c0 0c             	add    $0xc,%eax
 8466f51:	8b 10                	mov    (%eax),%edx
 8466f53:	8b 45 24             	mov    0x24(%ebp),%eax
 8466f56:	89 04 24             	mov    %eax,(%esp)
 8466f59:	ff d2                	call   *%edx
 8466f5b:	83 f8 0a             	cmp    $0xa,%eax
 8466f5e:	75 28                	jne    8466f88 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x28a>
 8466f60:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8466f63:	89 04 24             	mov    %eax,(%esp)
 8466f66:	e8 b5 6f c9 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8466f6b:	0f be c0             	movsbl %al,%eax
 8466f6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466f72:	8b 45 24             	mov    0x24(%ebp),%eax
 8466f75:	89 04 24             	mov    %eax,(%esp)
 8466f78:	e8 ab 67 0a 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 8466f7d:	84 c0                	test   %al,%al
 8466f7f:	74 07                	je     8466f88 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x28a>
 8466f81:	b8 01 00 00 00       	mov    $0x1,%eax
 8466f86:	eb 05                	jmp    8466f8d <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x28f>
 8466f88:	b8 00 00 00 00       	mov    $0x0,%eax
 8466f8d:	84 c0                	test   %al,%al
 8466f8f:	74 14                	je     8466fa5 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x2a7>
 8466f91:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466f94:	03 45 10             	add    0x10(%ebp),%eax
 8466f97:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8466f9a:	03 55 10             	add    0x10(%ebp),%edx
 8466f9d:	0f b6 12             	movzbl (%edx),%edx
 8466fa0:	83 c2 1e             	add    $0x1e,%edx
 8466fa3:	88 10                	mov    %dl,(%eax)
 8466fa5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466fa8:	89 c3                	mov    %eax,%ebx
 8466faa:	03 5d 10             	add    0x10(%ebp),%ebx
 8466fad:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466fb0:	03 45 10             	add    0x10(%ebp),%eax
 8466fb3:	0f b6 00             	movzbl (%eax),%eax
 8466fb6:	89 c6                	mov    %eax,%esi
 8466fb8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466fbb:	03 45 10             	add    0x10(%ebp),%eax
 8466fbe:	0f b6 00             	movzbl (%eax),%eax
 8466fc1:	0f be c0             	movsbl %al,%eax
 8466fc4:	ba 64 00 00 00       	mov    $0x64,%edx
 8466fc9:	89 d1                	mov    %edx,%ecx
 8466fcb:	29 c1                	sub    %eax,%ecx
 8466fcd:	89 c8                	mov    %ecx,%eax
 8466fcf:	89 04 24             	mov    %eax,(%esp)
 8466fd2:	e8 b0 ab 24 00       	call   86b1b87 <_Z12get_rand_inti>
 8466fd7:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8466fda:	88 03                	mov    %al,(%ebx)
 8466fdc:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8466fe0:	eb 07                	jmp    8466fe9 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x2eb>
 8466fe2:	90                   	nop
 8466fe3:	eb 04                	jmp    8466fe9 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x2eb>
 8466fe5:	90                   	nop
 8466fe6:	eb 01                	jmp    8466fe9 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x2eb>
 8466fe8:	90                   	nop
 8466fe9:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8466fed:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 8466ff1:	0f 9e c0             	setle  %al
 8466ff4:	84 c0                	test   %al,%al
 8466ff6:	0f 85 e6 fd ff ff    	jne    8466de2 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0xe4>
 8466ffc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8467003:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 846700a:	e9 cc 00 00 00       	jmp    84670db <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3dd>
 846700f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8467016:	8b 45 08             	mov    0x8(%ebp),%eax
 8467019:	8b 00                	mov    (%eax),%eax
 846701b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 846701e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8467022:	89 04 24             	mov    %eax,(%esp)
 8467025:	e8 3a e7 cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 846702a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846702d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8467031:	74 1b                	je     846704e <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x350>
 8467033:	8b 45 08             	mov    0x8(%ebp),%eax
 8467036:	8b 00                	mov    (%eax),%eax
 8467038:	8b 55 f0             	mov    -0x10(%ebp),%edx
 846703b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846703f:	89 04 24             	mov    %eax,(%esp)
 8467042:	e8 21 e8 cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8467047:	83 f0 01             	xor    $0x1,%eax
 846704a:	84 c0                	test   %al,%al
 846704c:	74 07                	je     8467055 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x357>
 846704e:	b8 01 00 00 00       	mov    $0x1,%eax
 8467053:	eb 05                	jmp    846705a <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x35c>
 8467055:	b8 00 00 00 00       	mov    $0x0,%eax
 846705a:	84 c0                	test   %al,%al
 846705c:	75 75                	jne    84670d3 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3d5>
 846705e:	8b 45 08             	mov    0x8(%ebp),%eax
 8467061:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8467067:	8b 45 f0             	mov    -0x10(%ebp),%eax
 846706a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846706e:	89 14 24             	mov    %edx,(%esp)
 8467071:	e8 00 2b 00 00       	call   8469b76 <_ZN8WongWork11CDeathTower9CPlayData13isMemberAliveEi>
 8467076:	83 f0 01             	xor    $0x1,%eax
 8467079:	84 c0                	test   %al,%al
 846707b:	75 59                	jne    84670d6 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3d8>
 846707d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8467080:	03 45 10             	add    0x10(%ebp),%eax
 8467083:	0f b6 00             	movzbl (%eax),%eax
 8467086:	0f be c0             	movsbl %al,%eax
 8467089:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 846708c:	7e 17                	jle    84670a5 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3a7>
 846708e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8467091:	03 45 10             	add    0x10(%ebp),%eax
 8467094:	0f b6 00             	movzbl (%eax),%eax
 8467097:	0f be c0             	movsbl %al,%eax
 846709a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 846709d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84670a0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84670a3:	eb 32                	jmp    84670d7 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3d9>
 84670a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84670a8:	03 45 10             	add    0x10(%ebp),%eax
 84670ab:	0f b6 00             	movzbl (%eax),%eax
 84670ae:	0f be c0             	movsbl %al,%eax
 84670b1:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84670b4:	75 21                	jne    84670d7 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3d9>
 84670b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84670b9:	03 45 10             	add    0x10(%ebp),%eax
 84670bc:	0f b6 00             	movzbl (%eax),%eax
 84670bf:	84 c0                	test   %al,%al
 84670c1:	7e 14                	jle    84670d7 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3d9>
 84670c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84670c6:	03 45 10             	add    0x10(%ebp),%eax
 84670c9:	0f b6 10             	movzbl (%eax),%edx
 84670cc:	83 ea 01             	sub    $0x1,%edx
 84670cf:	88 10                	mov    %dl,(%eax)
 84670d1:	eb 04                	jmp    84670d7 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3d9>
 84670d3:	90                   	nop
 84670d4:	eb 01                	jmp    84670d7 <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x3d9>
 84670d6:	90                   	nop
 84670d7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84670db:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 84670df:	0f 9e c0             	setle  %al
 84670e2:	84 c0                	test   %al,%al
 84670e4:	0f 85 25 ff ff ff    	jne    846700f <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem+0x311>
 84670ea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84670ed:	81 c4 90 00 00 00    	add    $0x90,%esp
 84670f3:	5b                   	pop    %ebx
 84670f4:	5e                   	pop    %esi
 84670f5:	5d                   	pop    %ebp
 84670f6:	c3                   	ret
 84670f7:	90                   	nop

```

```c
// WongWork::CDeathTower::_pickupItem @ 0x8466cfe

/* WongWork::CDeathTower::_pickupItem(CUser*, char*, int, map_item const&, bool, char, CItem const*)
    */

CUser * __thiscall
WongWork::CDeathTower::_pickupItem
          (CDeathTower *this,CUser *param_1,char *param_2,int param_3,map_item *param_4,bool param_5
          ,char param_6,CItem *param_7)

{
  map_item mVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  CUserCharacInfo *this_00;
  undefined4 uVar6;
  CUser *pCVar7;
  CUser *local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_1c;
  int local_14;
  
  local_30 = param_1;
  if (1 < param_3) {
    mVar1 = *param_4;
    iVar5 = CItem::get_rarity(param_7);
    local_29 = mVar1 == (map_item)0x1;
    if (3 < iVar5) {
      local_29 = param_5;
    }
    if ((*param_4 == (map_item)0x0) || (cVar3 = CItem::isEpicRoutingItem(param_7), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_29 = param_5;
    }
    if ((local_29 != '\0') && (cVar3 = CItem::check_item_routing(param_7), cVar3 != '\0')) {
      local_30 = (CUser *)0x0;
      local_28 = CPlayData::getLastRoutedTurn((CPlayData *)(this + 0x110));
      local_28 = local_28 + 1;
      if (param_3 <= local_28) {
        local_28 = 0;
      }
      local_24 = 0;
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        this_00 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_1c);
        if ((this_00 == (CUserCharacInfo *)0x0) ||
           (cVar3 = CParty::checkValidUser(*(CParty **)this,local_1c), cVar3 != '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((!bVar2) &&
           (cVar3 = CPlayData::isMemberAlive((CPlayData *)(this + 0x110),local_1c), cVar3 == '\x01')
           ) {
          uVar6 = CUserCharacInfo::getCurCharacInvenR(this_00);
          iVar5 = CInventory::tryInsertItemIntoInventory
                            (uVar6,*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),
                             *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                             *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                             *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
                             *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                             *(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x3c),
                             *(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),
                             *(undefined4 *)(param_4 + 0x48),param_4[0x4c]);
          if (iVar5 != -1) {
            param_2[local_1c] = param_2[local_1c] + '\x01';
            if (local_24 == local_28) {
              param_2[local_1c] = param_2[local_1c] + '(';
              CPlayData::setLastRoutedTurn((CPlayData *)(this + 0x110),local_24);
            }
            cVar3 = CItem::is_stackable(param_7);
            if ((cVar3 == '\x01') ||
               (iVar5 = (**(code **)(*(int *)param_7 + 0xc))(param_7), iVar5 != 10)) {
LAB_08466f88:
              bVar2 = false;
            }
            else {
              cVar3 = CUserCharacInfo::get_charac_job(this_00);
              cVar3 = CItem::check_job_type(param_7,cVar3);
              if (cVar3 == '\0') goto LAB_08466f88;
              bVar2 = true;
            }
            if (bVar2) {
              param_2[local_1c] = param_2[local_1c] + '\x1e';
            }
            cVar3 = param_2[local_1c];
            cVar4 = get_rand_int(100 - param_2[local_1c]);
            param_2[local_1c] = cVar3 + cVar4;
            local_24 = local_24 + 1;
          }
        }
      }
      cVar3 = '\0';
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        pCVar7 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
        if ((pCVar7 == (CUser *)0x0) ||
           (cVar4 = CParty::checkValidUser(*(CParty **)this,local_14), cVar4 != '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((!bVar2) &&
           (cVar4 = CPlayData::isMemberAlive((CPlayData *)(this + 0x110),local_14), cVar4 == '\x01')
           ) {
          if (cVar3 < param_2[local_14]) {
            cVar3 = param_2[local_14];
            local_30 = pCVar7;
          }
          else if ((param_2[local_14] == cVar3) && ('\0' < param_2[local_14])) {
            param_2[local_14] = param_2[local_14] + -1;
          }
        }
      }
    }
  }
  return local_30;
}

```

---

## _pickupItemMoney

```asm
// === 08466b02 WongWork::CDeathTower::_pickupItemMoney  [0x08466b02-0x8466cfd] ===
 8466b02:	55                   	push   %ebp
 8466b03:	89 e5                	mov    %esp,%ebp
 8466b05:	53                   	push   %ebx
 8466b06:	83 ec 54             	sub    $0x54,%esp
 8466b09:	8b 45 14             	mov    0x14(%ebp),%eax
 8466b0c:	83 c0 10             	add    $0x10,%eax
 8466b0f:	89 04 24             	mov    %eax,(%esp)
 8466b12:	e8 23 0d c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8466b17:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8466b1a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8466b1d:	89 c2                	mov    %eax,%edx
 8466b1f:	c1 fa 1f             	sar    $0x1f,%edx
 8466b22:	f7 7d 10             	idivl  0x10(%ebp)
 8466b25:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8466b28:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8466b2b:	89 c2                	mov    %eax,%edx
 8466b2d:	c1 fa 1f             	sar    $0x1f,%edx
 8466b30:	f7 7d 10             	idivl  0x10(%ebp)
 8466b33:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8466b36:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8466b39:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8466b3c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8466b3f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8466b42:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8466b45:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8466b48:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8466b4f:	e9 95 01 00 00       	jmp    8466ce9 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x1e7>
 8466b54:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8466b5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8466b5e:	8b 00                	mov    (%eax),%eax
 8466b60:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8466b63:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466b67:	89 04 24             	mov    %eax,(%esp)
 8466b6a:	e8 f5 eb cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 8466b6f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8466b72:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8466b76:	74 1b                	je     8466b93 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x91>
 8466b78:	8b 45 08             	mov    0x8(%ebp),%eax
 8466b7b:	8b 00                	mov    (%eax),%eax
 8466b7d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8466b80:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466b84:	89 04 24             	mov    %eax,(%esp)
 8466b87:	e8 dc ec cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8466b8c:	83 f0 01             	xor    $0x1,%eax
 8466b8f:	84 c0                	test   %al,%al
 8466b91:	74 07                	je     8466b9a <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x98>
 8466b93:	b8 01 00 00 00       	mov    $0x1,%eax
 8466b98:	eb 05                	jmp    8466b9f <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x9d>
 8466b9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8466b9f:	84 c0                	test   %al,%al
 8466ba1:	0f 85 3d 01 00 00    	jne    8466ce4 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x1e2>
 8466ba7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8466baa:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8466bad:	75 05                	jne    8466bb4 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0xb2>
 8466baf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8466bb2:	eb 03                	jmp    8466bb7 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0xb5>
 8466bb4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8466bb7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8466bba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8466bbd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8466bc0:	8b 45 14             	mov    0x14(%ebp),%eax
 8466bc3:	0f b6 00             	movzbl (%eax),%eax
 8466bc6:	84 c0                	test   %al,%al
 8466bc8:	74 37                	je     8466c01 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0xff>
 8466bca:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466bcd:	c1 e0 02             	shl    $0x2,%eax
 8466bd0:	89 c3                	mov    %eax,%ebx
 8466bd2:	03 5d 1c             	add    0x1c(%ebp),%ebx
 8466bd5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8466bd8:	89 04 24             	mov    %eax,(%esp)
 8466bdb:	e8 9e 36 c7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8466be0:	89 04 24             	mov    %eax,(%esp)
 8466be3:	e8 20 08 d5 ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 8466be8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8466beb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466bef:	89 04 24             	mov    %eax,(%esp)
 8466bf2:	e8 23 57 ed ff       	call   833c31a <_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi>
 8466bf7:	89 03                	mov    %eax,(%ebx)
 8466bf9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8466bfc:	01 c0                	add    %eax,%eax
 8466bfe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8466c01:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466c04:	c1 e0 02             	shl    $0x2,%eax
 8466c07:	89 c3                	mov    %eax,%ebx
 8466c09:	03 5d 18             	add    0x18(%ebp),%ebx
 8466c0c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8466c0f:	89 04 24             	mov    %eax,(%esp)
 8466c12:	e8 77 36 c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8466c17:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8466c1e:	00 
 8466c1f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8466c26:	00 
 8466c27:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8466c2e:	00 
 8466c2f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8466c32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466c36:	89 04 24             	mov    %eax,(%esp)
 8466c39:	e8 5e 86 09 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 8466c3e:	89 03                	mov    %eax,(%ebx)
 8466c40:	8b 45 14             	mov    0x14(%ebp),%eax
 8466c43:	0f b6 00             	movzbl (%eax),%eax
 8466c46:	84 c0                	test   %al,%al
 8466c48:	74 12                	je     8466c5c <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x15a>
 8466c4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8466c4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466c51:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8466c54:	89 04 24             	mov    %eax,(%esp)
 8466c57:	e8 8e 8c 1e 00       	call   864f8ea <_ZN5CUser26saveTaxMoneyForUpperMemberEi>
 8466c5c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466c5f:	c1 e0 02             	shl    $0x2,%eax
 8466c62:	03 45 18             	add    0x18(%ebp),%eax
 8466c65:	8b 00                	mov    (%eax),%eax
 8466c67:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8466c6a:	7d 49                	jge    8466cb5 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x1b3>
 8466c6c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466c6f:	c1 e0 02             	shl    $0x2,%eax
 8466c72:	03 45 18             	add    0x18(%ebp),%eax
 8466c75:	8b 00                	mov    (%eax),%eax
 8466c77:	85 c0                	test   %eax,%eax
 8466c79:	79 0f                	jns    8466c8a <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x188>
 8466c7b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466c7e:	c1 e0 02             	shl    $0x2,%eax
 8466c81:	03 45 18             	add    0x18(%ebp),%eax
 8466c84:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8466c8a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466c8d:	c1 e0 02             	shl    $0x2,%eax
 8466c90:	03 45 18             	add    0x18(%ebp),%eax
 8466c93:	8b 00                	mov    (%eax),%eax
 8466c95:	89 c2                	mov    %eax,%edx
 8466c97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8466c9a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8466c9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8466ca2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8466ca9:	00 
 8466caa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8466cad:	89 04 24             	mov    %eax,(%esp)
 8466cb0:	e8 8f 5b 21 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 8466cb5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8466cb8:	c1 e0 02             	shl    $0x2,%eax
 8466cbb:	03 45 18             	add    0x18(%ebp),%eax
 8466cbe:	8b 00                	mov    (%eax),%eax
 8466cc0:	89 c3                	mov    %eax,%ebx
 8466cc2:	e8 28 69 1a 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 8466cc7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8466ccb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8466cce:	89 54 24 08          	mov    %edx,0x8(%esp)
 8466cd2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8466cd9:	00 
 8466cda:	89 04 24             	mov    %eax,(%esp)
 8466cdd:	e8 a0 69 1a 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 8466ce2:	eb 01                	jmp    8466ce5 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x1e3>
 8466ce4:	90                   	nop
 8466ce5:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8466ce9:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 8466ced:	0f 9e c0             	setle  %al
 8466cf0:	84 c0                	test   %al,%al
 8466cf2:	0f 85 5c fe ff ff    	jne    8466b54 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_+0x52>
 8466cf8:	83 c4 54             	add    $0x54,%esp
 8466cfb:	5b                   	pop    %ebx
 8466cfc:	5d                   	pop    %ebp
 8466cfd:	c3                   	ret

```

```c
// WongWork::CDeathTower::_pickupItemMoney @ 0x8466b02

/* WongWork::CDeathTower::_pickupItemMoney(CUser*, int, map_item const&, int*, int*) */

void __thiscall
WongWork::CDeathTower::_pickupItemMoney
          (CDeathTower *this,CUser *param_1,int param_2,map_item *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CUser *this_00;
  CInventory *pCVar4;
  CCreatureMgr *this_01;
  int iVar5;
  CValueStatistic *pCVar6;
  int local_1c;
  int local_10;
  
  iVar3 = Inven_Item::get_add_info((Inven_Item *)(param_3 + 0x10));
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    this_00 = (CUser *)CParty::get_user(*(CParty **)this,local_1c);
    if ((this_00 == (CUser *)0x0) ||
       (cVar2 = CParty::checkValidUser(*(CParty **)this,local_1c), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      local_10 = iVar3 / param_2;
      if (this_00 == param_1) {
        local_10 = iVar3 / param_2 + iVar3 % param_2;
      }
      if (*param_3 != (map_item)0x0) {
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this_00);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar4);
        iVar5 = user_creature::CCreatureMgr::GetExtraGold(this_01,local_10);
        param_5[local_1c] = iVar5;
        local_10 = local_10 * 2;
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this_00);
      iVar5 = CInventory::gain_money(pCVar4,local_10,4,1,0);
      param_4[local_1c] = iVar5;
      if (*param_3 != (map_item)0x0) {
        CUser::saveTaxMoneyForUpperMember(this_00,local_10);
      }
      if (param_4[local_1c] < local_10) {
        if (param_4[local_1c] < 0) {
          param_4[local_1c] = 0;
        }
        CUser::SendMoneyFullReason(this_00,0,local_10,param_4[local_1c]);
      }
      iVar5 = param_4[local_1c];
      pCVar6 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar6,1,this_00,iVar5);
    }
  }
  return;
}

```

---

## attachParty

```asm
// === 08462a26 WongWork::CDeathTower::attachParty  [0x08462a26-0x8462aad] ===
 8462a26:	55                   	push   %ebp
 8462a27:	89 e5                	mov    %esp,%ebp
 8462a29:	53                   	push   %ebx
 8462a2a:	83 ec 24             	sub    $0x24,%esp
 8462a2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8462a30:	8b 55 0c             	mov    0xc(%ebp),%edx
 8462a33:	89 10                	mov    %edx,(%eax)
 8462a35:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8462a3c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8462a43:	eb 45                	jmp    8462a8a <_ZN8WongWork11CDeathTower11attachPartyEP6CParty+0x64>
 8462a45:	8b 45 08             	mov    0x8(%ebp),%eax
 8462a48:	8b 00                	mov    (%eax),%eax
 8462a4a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8462a4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462a51:	89 04 24             	mov    %eax,(%esp)
 8462a54:	e8 0f 2e ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8462a59:	84 c0                	test   %al,%al
 8462a5b:	74 29                	je     8462a86 <_ZN8WongWork11CDeathTower11attachPartyEP6CParty+0x60>
 8462a5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8462a60:	8b 40 04             	mov    0x4(%eax),%eax
 8462a63:	0f bf d8             	movswl %ax,%ebx
 8462a66:	8b 45 08             	mov    0x8(%ebp),%eax
 8462a69:	8b 00                	mov    (%eax),%eax
 8462a6b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8462a6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462a72:	89 04 24             	mov    %eax,(%esp)
 8462a75:	e8 ea 2c ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8462a7a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8462a7e:	89 04 24             	mov    %eax,(%esp)
 8462a81:	e8 e8 6f 00 00       	call   8469a6e <_ZN5CUser18setDeathTowerIndexEs>
 8462a86:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8462a8a:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8462a8e:	0f 9e c0             	setle  %al
 8462a91:	84 c0                	test   %al,%al
 8462a93:	75 b0                	jne    8462a45 <_ZN8WongWork11CDeathTower11attachPartyEP6CParty+0x1f>
 8462a95:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8462a9c:	00 
 8462a9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8462aa0:	89 04 24             	mov    %eax,(%esp)
 8462aa3:	e8 8c 71 00 00       	call   8469c34 <_ZN8WongWork11CDeathTower13setTowerStateENS0_16ENUM_TOWER_STATEE>
 8462aa8:	83 c4 24             	add    $0x24,%esp
 8462aab:	5b                   	pop    %ebx
 8462aac:	5d                   	pop    %ebp
 8462aad:	c3                   	ret

```

```c
// WongWork::CDeathTower::attachParty @ 0x8462a26

/* WongWork::CDeathTower::attachParty(CParty*) */

void __thiscall WongWork::CDeathTower::attachParty(CDeathTower *this,CParty *param_1)

{
  undefined4 uVar1;
  char cVar2;
  CUser *this_00;
  int local_10;
  
  *(CParty **)this = param_1;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = CParty::checkValidUser(*(CParty **)this,local_10);
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(this + 4);
      this_00 = (CUser *)CParty::get_user(*(CParty **)this,local_10);
      CUser::setDeathTowerIndex(this_00,(short)uVar1);
    }
  }
  setTowerState(this,1);
  return;
}

```

---

## deathTowerCardStatistic

```asm
// === 0846966c WongWork::CDeathTower::deathTowerCardStatistic  [0x0846966c-0x84698dc] ===
 846966c:	55                   	push   %ebp
 846966d:	89 e5                	mov    %esp,%ebp
 846966f:	57                   	push   %edi
 8469670:	56                   	push   %esi
 8469671:	53                   	push   %ebx
 8469672:	83 ec 4c             	sub    $0x4c,%esp
 8469675:	8b 45 08             	mov    0x8(%ebp),%eax
 8469678:	83 c0 0c             	add    $0xc,%eax
 846967b:	89 04 24             	mov    %eax,(%esp)
 846967e:	e8 6d af dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8469683:	89 04 24             	mov    %eax,(%esp)
 8469686:	e8 65 46 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 846968b:	3d f8 2a 00 00       	cmp    $0x2af8,%eax
 8469690:	0f 94 c0             	sete   %al
 8469693:	84 c0                	test   %al,%al
 8469695:	74 06                	je     846969d <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x31>
 8469697:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 846969b:	eb 04                	jmp    84696a1 <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x35>
 846969d:	c6 45 db 01          	movb   $0x1,-0x25(%ebp)
 84696a1:	8b 45 10             	mov    0x10(%ebp),%eax
 84696a4:	89 04 24             	mov    %eax,(%esp)
 84696a7:	e8 0c 0c c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84696ac:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84696af:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84696b6:	e9 09 02 00 00       	jmp    84698c4 <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x258>
 84696bb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84696be:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84696c1:	03 45 14             	add    0x14(%ebp),%eax
 84696c4:	8b 40 02             	mov    0x2(%eax),%eax
 84696c7:	85 c0                	test   %eax,%eax
 84696c9:	75 76                	jne    8469741 <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0xd5>
 84696cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84696ce:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84696d1:	03 45 14             	add    0x14(%ebp),%eax
 84696d4:	89 04 24             	mov    %eax,(%esp)
 84696d7:	e8 5e e1 c8 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 84696dc:	89 c3                	mov    %eax,%ebx
 84696de:	e8 0c 3f 1a 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 84696e3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84696e7:	8b 55 10             	mov    0x10(%ebp),%edx
 84696ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 84696ee:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 84696f5:	00 
 84696f6:	89 04 24             	mov    %eax,(%esp)
 84696f9:	e8 84 3f 1a 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 84696fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8469701:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8469704:	03 45 14             	add    0x14(%ebp),%eax
 8469707:	89 04 24             	mov    %eax,(%esp)
 846970a:	e8 2b e1 c8 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 846970f:	89 c7                	mov    %eax,%edi
 8469711:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8469714:	0f be f0             	movsbl %al,%esi
 8469717:	0f be 5d db          	movsbl -0x25(%ebp),%ebx
 846971b:	e8 17 5c 1a 00       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 8469720:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8469724:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8469728:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846972c:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8469733:	00 
 8469734:	89 04 24             	mov    %eax,(%esp)
 8469737:	e8 06 5c 1a 00       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 846973c:	e9 7f 01 00 00       	jmp    84698c0 <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x254>
 8469741:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8469744:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8469747:	03 45 14             	add    0x14(%ebp),%eax
 846974a:	8b 40 02             	mov    0x2(%eax),%eax
 846974d:	89 c3                	mov    %eax,%ebx
 846974f:	e8 47 2a c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8469754:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8469758:	89 04 24             	mov    %eax,(%esp)
 846975b:	e8 d2 62 ef ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8469760:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8469763:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 846976a:	8b 45 0c             	mov    0xc(%ebp),%eax
 846976d:	0f bf f0             	movswl %ax,%esi
 8469770:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8469773:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8469776:	89 c3                	mov    %eax,%ebx
 8469778:	03 5d 14             	add    0x14(%ebp),%ebx
 846977b:	e8 5d 83 ce ff       	call   8151add <_Z7G_Storev>
 8469780:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8469783:	89 54 24 14          	mov    %edx,0x14(%esp)
 8469787:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 846978e:	00 
 846978f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8469793:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8469796:	89 54 24 08          	mov    %edx,0x8(%esp)
 846979a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 846979e:	89 04 24             	mov    %eax,(%esp)
 84697a1:	e8 fa f6 1a 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 84697a6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84697aa:	74 25                	je     84697d1 <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x165>
 84697ac:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84697af:	89 c3                	mov    %eax,%ebx
 84697b1:	e8 39 3e 1a 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 84697b6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84697ba:	8b 55 10             	mov    0x10(%ebp),%edx
 84697bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 84697c1:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 84697c8:	00 
 84697c9:	89 04 24             	mov    %eax,(%esp)
 84697cc:	e8 b1 3e 1a 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 84697d1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84697d5:	0f 84 e5 00 00 00    	je     84698c0 <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x254>
 84697db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84697de:	8b 00                	mov    (%eax),%eax
 84697e0:	83 c0 0c             	add    $0xc,%eax
 84697e3:	8b 10                	mov    (%eax),%edx
 84697e5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84697e8:	89 04 24             	mov    %eax,(%esp)
 84697eb:	ff d2                	call   *%edx
 84697ed:	83 f8 03             	cmp    $0x3,%eax
 84697f0:	0f 94 c0             	sete   %al
 84697f3:	84 c0                	test   %al,%al
 84697f5:	74 61                	je     8469858 <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x1ec>
 84697f7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84697fa:	0f be f0             	movsbl %al,%esi
 84697fd:	0f be 5d db          	movsbl -0x25(%ebp),%ebx
 8469801:	e8 31 5b 1a 00       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 8469806:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 846980d:	00 
 846980e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8469812:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8469816:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 846981d:	00 
 846981e:	89 04 24             	mov    %eax,(%esp)
 8469821:	e8 1c 5b 1a 00       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 8469826:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8469829:	89 c7                	mov    %eax,%edi
 846982b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 846982e:	0f be f0             	movsbl %al,%esi
 8469831:	0f be 5d db          	movsbl -0x25(%ebp),%ebx
 8469835:	e8 fd 5a 1a 00       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 846983a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 846983e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8469842:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8469846:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 846984d:	00 
 846984e:	89 04 24             	mov    %eax,(%esp)
 8469851:	e8 ec 5a 1a 00       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 8469856:	eb 68                	jmp    84698c0 <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x254>
 8469858:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 846985b:	89 04 24             	mov    %eax,(%esp)
 846985e:	e8 73 7a c8 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8469863:	89 c7                	mov    %eax,%edi
 8469865:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8469868:	0f be f0             	movsbl %al,%esi
 846986b:	0f be 5d db          	movsbl -0x25(%ebp),%ebx
 846986f:	e8 c3 5a 1a 00       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 8469874:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8469878:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846987c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8469880:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8469887:	00 
 8469888:	89 04 24             	mov    %eax,(%esp)
 846988b:	e8 b2 5a 1a 00       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 8469890:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8469893:	89 c7                	mov    %eax,%edi
 8469895:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8469898:	0f be f0             	movsbl %al,%esi
 846989b:	0f be 5d db          	movsbl -0x25(%ebp),%ebx
 846989f:	e8 93 5a 1a 00       	call   860f337 <_Z35GetInstanceDeathTowerValueStatisticv>
 84698a4:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84698a8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84698ac:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84698b0:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 84698b7:	00 
 84698b8:	89 04 24             	mov    %eax,(%esp)
 84698bb:	e8 82 5a 1a 00       	call   860f342 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj>
 84698c0:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84698c4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84698c7:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84698ca:	0f 9c c0             	setl   %al
 84698cd:	84 c0                	test   %al,%al
 84698cf:	0f 85 e6 fd ff ff    	jne    84696bb <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item+0x4f>
 84698d5:	83 c4 4c             	add    $0x4c,%esp
 84698d8:	5b                   	pop    %ebx
 84698d9:	5e                   	pop    %esi
 84698da:	5f                   	pop    %edi
 84698db:	5d                   	pop    %ebp
 84698dc:	c3                   	ret

```

```c
// WongWork::CDeathTower::deathTowerCardStatistic @ 0x846966c

/* WongWork::CDeathTower::deathTowerCardStatistic(int, CUser*, Inven_Item const*) */

void __thiscall
WongWork::CDeathTower::deathTowerCardStatistic
          (CDeathTower *this,int param_1,CUser *param_2,Inven_Item *param_3)

{
  char cVar1;
  CDungeon *this_00;
  int iVar2;
  undefined4 uVar3;
  CValueStatistic *pCVar4;
  CDeathTowerValueStatistic *pCVar5;
  CDataManager *this_01;
  Store *this_02;
  int iVar6;
  int local_30;
  char local_29;
  undefined4 local_28;
  int local_24;
  CItem *local_20;
  
  this_00 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
  iVar2 = CDungeon::get_index(this_00);
  local_29 = iVar2 != 11000;
  local_28 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    if (*(int *)(param_3 + local_24 * 0x3d + 2) == 0) {
      uVar3 = Inven_Item::get_add_info(param_3 + local_24 * 0x3d);
      pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar4,0xb,param_2,uVar3);
      uVar3 = Inven_Item::get_add_info(param_3 + local_24 * 0x3d);
      cVar1 = (char)local_28;
      iVar2 = (int)local_29;
      pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
      CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,8,iVar2,(int)cVar1,uVar3);
    }
    else {
      iVar2 = *(int *)(param_3 + local_24 * 0x3d + 2);
      this_01 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_01,iVar2);
      local_30 = 0;
      iVar2 = local_24 * 0x3d;
      this_02 = (Store *)G_Store();
      Store::GetSellItemPrice(this_02,param_3 + iVar2,local_20,(short)param_1,false,&local_30);
      iVar2 = local_30;
      if (local_20 != (CItem *)0x0) {
        pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar4,0xc,param_2,iVar2);
      }
      if (local_20 != (CItem *)0x0) {
        iVar2 = (**(code **)(*(int *)local_20 + 0xc))(local_20);
        if (iVar2 == 3) {
          cVar1 = (char)local_28;
          iVar2 = (int)local_29;
          pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,2,iVar2,(int)cVar1,1);
          iVar2 = local_30;
          cVar1 = (char)local_28;
          iVar6 = (int)local_29;
          pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,7,iVar6,(int)cVar1,iVar2);
        }
        else {
          uVar3 = CItem::get_rarity(local_20);
          cVar1 = (char)local_28;
          iVar2 = (int)local_29;
          pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,10,iVar2,(int)cVar1,uVar3);
          iVar2 = local_30;
          cVar1 = (char)local_28;
          iVar6 = (int)local_29;
          pCVar5 = (CDeathTowerValueStatistic *)GetInstanceDeathTowerValueStatistic();
          CDeathTowerValueStatistic::SendDeathTowerValueStatistic(pCVar5,7,iVar6,(int)cVar1,iVar2);
        }
      }
    }
  }
  return;
}

```

---

## handleDieUser

```asm
// === 0846595a WongWork::CDeathTower::handleDieUser  [0x0846595a-0x8465ac1] ===
 846595a:	55                   	push   %ebp
 846595b:	89 e5                	mov    %esp,%ebp
 846595d:	56                   	push   %esi
 846595e:	53                   	push   %ebx
 846595f:	83 ec 20             	sub    $0x20,%esp
 8465962:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8465969:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8465970:	e9 0c 01 00 00       	jmp    8465a81 <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x127>
 8465975:	8b 45 08             	mov    0x8(%ebp),%eax
 8465978:	8b 00                	mov    (%eax),%eax
 846597a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 846597d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465981:	89 04 24             	mov    %eax,(%esp)
 8465984:	e8 df fe cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8465989:	84 c0                	test   %al,%al
 846598b:	0f 84 ec 00 00 00    	je     8465a7d <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x123>
 8465991:	8b 45 08             	mov    0x8(%ebp),%eax
 8465994:	8b 00                	mov    (%eax),%eax
 8465996:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8465999:	89 54 24 04          	mov    %edx,0x4(%esp)
 846599d:	89 04 24             	mov    %eax,(%esp)
 84659a0:	e8 bf fd cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 84659a5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84659a8:	0f 94 c0             	sete   %al
 84659ab:	84 c0                	test   %al,%al
 84659ad:	0f 84 ca 00 00 00    	je     8465a7d <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x123>
 84659b3:	8b 45 08             	mov    0x8(%ebp),%eax
 84659b6:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 84659bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84659bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84659c3:	89 14 24             	mov    %edx,(%esp)
 84659c6:	e8 ab 41 00 00       	call   8469b76 <_ZN8WongWork11CDeathTower9CPlayData13isMemberAliveEi>
 84659cb:	83 f0 01             	xor    $0x1,%eax
 84659ce:	84 c0                	test   %al,%al
 84659d0:	74 25                	je     84659f7 <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x9d>
 84659d2:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 84659d9:	00 
 84659da:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 84659e1:	00 
 84659e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84659e5:	89 04 24             	mov    %eax,(%esp)
 84659e8:	e8 55 65 21 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84659ed:	b8 00 00 00 00       	mov    $0x0,%eax
 84659f2:	e9 c3 00 00 00       	jmp    8465aba <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x160>
 84659f7:	8b 45 08             	mov    0x8(%ebp),%eax
 84659fa:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8465a00:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8465a07:	00 
 8465a08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8465a0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465a0f:	89 14 24             	mov    %edx,(%esp)
 8465a12:	e8 43 41 00 00       	call   8469b5a <_ZN8WongWork11CDeathTower9CPlayData14setMemberAliveEib>
 8465a17:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465a1a:	89 04 24             	mov    %eax,(%esp)
 8465a1d:	e8 6a 40 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8465a22:	8b 45 0c             	mov    0xc(%ebp),%eax
 8465a25:	89 04 24             	mov    %eax,(%esp)
 8465a28:	e8 4f 49 c7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8465a2d:	0f b7 c0             	movzwl %ax,%eax
 8465a30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465a34:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465a37:	89 04 24             	mov    %eax,(%esp)
 8465a3a:	e8 37 a7 ff ff       	call   8460176 <_ZN8WongWork11CDeathTower14CPacketHandler12makeDieStateEt>
 8465a3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8465a42:	8b 00                	mov    (%eax),%eax
 8465a44:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8465a47:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465a4b:	89 04 24             	mov    %eax,(%esp)
 8465a4e:	e8 fb 76 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8465a53:	eb 1b                	jmp    8465a70 <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x116>
 8465a55:	89 d3                	mov    %edx,%ebx
 8465a57:	89 c6                	mov    %eax,%esi
 8465a59:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465a5c:	89 04 24             	mov    %eax,(%esp)
 8465a5f:	e8 3c 40 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465a64:	89 f0                	mov    %esi,%eax
 8465a66:	89 da                	mov    %ebx,%edx
 8465a68:	89 04 24             	mov    %eax,(%esp)
 8465a6b:	e8 e0 dc 67 00       	call   8ae3750 <_Unwind_Resume>
 8465a70:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465a73:	89 04 24             	mov    %eax,(%esp)
 8465a76:	e8 25 40 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465a7b:	eb 13                	jmp    8465a90 <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x136>
 8465a7d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8465a81:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8465a85:	0f 9e c0             	setle  %al
 8465a88:	84 c0                	test   %al,%al
 8465a8a:	0f 85 e5 fe ff ff    	jne    8465975 <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x1b>
 8465a90:	8b 45 08             	mov    0x8(%ebp),%eax
 8465a93:	89 04 24             	mov    %eax,(%esp)
 8465a96:	e8 ed 16 00 00       	call   8467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>
 8465a9b:	84 c0                	test   %al,%al
 8465a9d:	74 16                	je     8465ab5 <_ZN8WongWork11CDeathTower13handleDieUserEP5CUser+0x15b>
 8465a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8465aa2:	89 04 24             	mov    %eax,(%esp)
 8465aa5:	e8 18 22 00 00       	call   8467cc2 <_ZN8WongWork11CDeathTower14_onFinishStageEv>
 8465aaa:	8b 45 08             	mov    0x8(%ebp),%eax
 8465aad:	89 04 24             	mov    %eax,(%esp)
 8465ab0:	e8 4b 23 00 00       	call   8467e00 <_ZN8WongWork11CDeathTower21_onPrepareFinishTowerEv>
 8465ab5:	b8 01 00 00 00       	mov    $0x1,%eax
 8465aba:	83 c4 20             	add    $0x20,%esp
 8465abd:	5b                   	pop    %ebx
 8465abe:	5e                   	pop    %esi
 8465abf:	5d                   	pop    %ebp
 8465ac0:	c3                   	ret
 8465ac1:	90                   	nop

```

```c
// WongWork::CDeathTower::handleDieUser @ 0x846595a

/* WongWork::CDeathTower::handleDieUser(CUser*) */

undefined4 __thiscall WongWork::CDeathTower::handleDieUser(CDeathTower *this,CUser *param_1)

{
  char cVar1;
  ushort uVar2;
  CUser *pCVar3;
  CPacketHandler local_1c [12];
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
LAB_08465a90:
      cVar1 = _checkMemberDie(this);
      if (cVar1 != '\0') {
        _onFinishStage(this);
        _onPrepareFinishTower(this);
      }
      return 1;
    }
    cVar1 = CParty::checkValidUser(*(CParty **)this,local_10);
    if ((cVar1 != '\0') &&
       (pCVar3 = (CUser *)CParty::get_user(*(CParty **)this,local_10), pCVar3 == param_1)) {
      cVar1 = CPlayData::isMemberAlive((CPlayData *)(this + 0x110),local_10);
      if (cVar1 != '\x01') {
        CUser::SendCmdErrorPacket(param_1,0x2b,0x12);
        return 0;
      }
      CPlayData::setMemberAlive((CPlayData *)(this + 0x110),local_10,false);
      CPacketHandler::CPacketHandler(local_1c);
      uVar2 = CUser::get_unique_id(param_1);
                    /* try { // try from 08465a3a to 08465a52 has its CatchHandler @ 08465a55 */
      CPacketHandler::makeDieState(local_1c,uVar2);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_1c);
      CPacketHandler::~CPacketHandler(local_1c);
      goto LAB_08465a90;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## handleDropItem

```asm
// === 0846466e WongWork::CDeathTower::handleDropItem  [0x0846466e-0x846483d] ===
 846466e:	55                   	push   %ebp
 846466f:	89 e5                	mov    %esp,%ebp
 8464671:	56                   	push   %esi
 8464672:	53                   	push   %ebx
 8464673:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 8464679:	8b 45 18             	mov    0x18(%ebp),%eax
 846467c:	88 45 84             	mov    %al,-0x7c(%ebp)
 846467f:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 8464683:	79 0a                	jns    846468f <_ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii+0x21>
 8464685:	bb 00 00 00 00       	mov    $0x0,%ebx
 846468a:	e9 a3 01 00 00       	jmp    8464832 <_ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii+0x1c4>
 846468f:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8464692:	89 04 24             	mov    %eax,(%esp)
 8464695:	e8 32 cc ce ff       	call   81512cc <_ZN8map_itemC1Ev>
 846469a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846469d:	89 04 24             	mov    %eax,(%esp)
 84646a0:	e8 e7 53 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 84646a5:	0f be 45 84          	movsbl -0x7c(%ebp),%eax
 84646a9:	8d 55 94             	lea    -0x6c(%ebp),%edx
 84646ac:	89 54 24 14          	mov    %edx,0x14(%esp)
 84646b0:	8b 55 20             	mov    0x20(%ebp),%edx
 84646b3:	89 54 24 10          	mov    %edx,0x10(%esp)
 84646b7:	8b 55 1c             	mov    0x1c(%ebp),%edx
 84646ba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84646be:	89 44 24 08          	mov    %eax,0x8(%esp)
 84646c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84646c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84646c9:	8b 45 08             	mov    0x8(%ebp),%eax
 84646cc:	89 04 24             	mov    %eax,(%esp)
 84646cf:	e8 b8 1c 00 00       	call   846638c <_ZN8WongWork11CDeathTower13_makeDropItemEP5CUserciiR8map_item>
 84646d4:	83 f0 01             	xor    $0x1,%eax
 84646d7:	84 c0                	test   %al,%al
 84646d9:	74 3f                	je     846471a <_ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii+0xac>
 84646db:	0f be 45 84          	movsbl -0x7c(%ebp),%eax
 84646df:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84646e3:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 84646ea:	00 
 84646eb:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 84646f2:	00 
 84646f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84646f6:	89 04 24             	mov    %eax,(%esp)
 84646f9:	e8 a8 b7 ff ff       	call   845fea6 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDropItemErrorE14ENUM_CMDPACKET10ENUM_ERRORc>
 84646fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8464701:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464705:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464708:	89 04 24             	mov    %eax,(%esp)
 846470b:	e8 aa 3e 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8464710:	bb 00 00 00 00       	mov    $0x0,%ebx
 8464715:	e9 0d 01 00 00       	jmp    8464827 <_ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii+0x1b9>
 846471a:	8b 45 08             	mov    0x8(%ebp),%eax
 846471d:	8d 50 14             	lea    0x14(%eax),%edx
 8464720:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8464723:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464727:	89 14 24             	mov    %edx,(%esp)
 846472a:	e8 79 cf ff ff       	call   84616a8 <_ZN8WongWork11CDeathTower6CStage8dropItemER8map_item>
 846472f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8464732:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8464736:	75 3f                	jne    8464777 <_ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii+0x109>
 8464738:	0f be 45 84          	movsbl -0x7c(%ebp),%eax
 846473c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8464740:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8464747:	00 
 8464748:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 846474f:	00 
 8464750:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8464753:	89 04 24             	mov    %eax,(%esp)
 8464756:	e8 4b b7 ff ff       	call   845fea6 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDropItemErrorE14ENUM_CMDPACKET10ENUM_ERRORc>
 846475b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846475e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464762:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464765:	89 04 24             	mov    %eax,(%esp)
 8464768:	e8 4d 3e 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 846476d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8464772:	e9 b0 00 00 00       	jmp    8464827 <_ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii+0x1b9>
 8464777:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846477a:	0f b7 d8             	movzwl %ax,%ebx
 846477d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464780:	89 04 24             	mov    %eax,(%esp)
 8464783:	e8 f4 5b c7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8464788:	0f b7 c0             	movzwl %ax,%eax
 846478b:	8d 55 94             	lea    -0x6c(%ebp),%edx
 846478e:	89 54 24 14          	mov    %edx,0x14(%esp)
 8464792:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8464796:	8b 55 14             	mov    0x14(%ebp),%edx
 8464799:	89 54 24 0c          	mov    %edx,0xc(%esp)
 846479d:	8b 55 10             	mov    0x10(%ebp),%edx
 84647a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84647a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84647a8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84647ab:	89 04 24             	mov    %eax,(%esp)
 84647ae:	e8 67 b7 ff ff       	call   845ff1a <_ZN8WongWork11CDeathTower14CPacketHandler18makeDropItemNotifyEtiitRK8map_item>
 84647b3:	8b 45 08             	mov    0x8(%ebp),%eax
 84647b6:	8b 00                	mov    (%eax),%eax
 84647b8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84647bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84647bf:	89 04 24             	mov    %eax,(%esp)
 84647c2:	e8 87 89 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 84647c7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84647ca:	89 04 24             	mov    %eax,(%esp)
 84647cd:	e8 14 71 c6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84647d2:	0f be 45 84          	movsbl -0x7c(%ebp),%eax
 84647d6:	8b 55 20             	mov    0x20(%ebp),%edx
 84647d9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84647dd:	8b 55 1c             	mov    0x1c(%ebp),%edx
 84647e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84647e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84647e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84647eb:	89 04 24             	mov    %eax,(%esp)
 84647ee:	e8 b3 b8 ff ff       	call   84600a6 <_ZN8WongWork11CDeathTower14CPacketHandler12makeDropItemEcii>
 84647f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84647f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84647fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84647fd:	89 04 24             	mov    %eax,(%esp)
 8464800:	e8 b5 3d 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8464805:	bb 01 00 00 00       	mov    $0x1,%ebx
 846480a:	eb 1b                	jmp    8464827 <_ZN8WongWork11CDeathTower14handleDropItemEP5CUseriicii+0x1b9>
 846480c:	89 d3                	mov    %edx,%ebx
 846480e:	89 c6                	mov    %eax,%esi
 8464810:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8464813:	89 04 24             	mov    %eax,(%esp)
 8464816:	e8 85 52 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 846481b:	89 f0                	mov    %esi,%eax
 846481d:	89 da                	mov    %ebx,%edx
 846481f:	89 04 24             	mov    %eax,(%esp)
 8464822:	e8 29 ef 67 00       	call   8ae3750 <_Unwind_Resume>
 8464827:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846482a:	89 04 24             	mov    %eax,(%esp)
 846482d:	e8 6e 52 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8464832:	89 d8                	mov    %ebx,%eax
 8464834:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 846483a:	5b                   	pop    %ebx
 846483b:	5e                   	pop    %esi
 846483c:	5d                   	pop    %ebp
 846483d:	c3                   	ret

```

```c
// WongWork::CDeathTower::handleDropItem @ 0x846466e

/* WongWork::CDeathTower::handleDropItem(CUser*, int, int, char, int, int) */

undefined4 __thiscall
WongWork::CDeathTower::handleDropItem
          (CDeathTower *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,
          int param_6)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  map_item local_70 [84];
  CPacketHandler local_1c [12];
  int local_10;
  
  if (param_6 < 0) {
    uVar4 = 0;
  }
  else {
    map_item::map_item(local_70);
    CPacketHandler::CPacketHandler(local_1c);
                    /* try { // try from 084646cf to 08464804 has its CatchHandler @ 0846480c */
    cVar1 = _makeDropItem(this,param_1,param_4,param_5,param_6,local_70);
    if (cVar1 == '\x01') {
      iVar3 = CStage::dropItem((CStage *)(this + 0x14),local_70);
      local_10 = iVar3;
      if (iVar3 == -1) {
        CPacketHandler::makeDropItemError(local_1c,0x32,0x16,(int)param_4);
        CUser::Send(param_1,(PacketGuard *)local_1c);
        uVar4 = 0;
      }
      else {
        uVar2 = CUser::get_unique_id(param_1);
        CPacketHandler::makeDropItemNotify(local_1c,uVar2,param_2,param_3,(ushort)iVar3,local_70);
        CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_1c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        CPacketHandler::makeDropItem(local_1c,param_4,param_5,param_6);
        CUser::Send(param_1,(PacketGuard *)local_1c);
        uVar4 = 1;
      }
    }
    else {
      CPacketHandler::makeDropItemError(local_1c,0x32,0x11,(int)param_4);
      CUser::Send(param_1,(PacketGuard *)local_1c);
      uVar4 = 0;
    }
    CPacketHandler::~CPacketHandler(local_1c);
  }
  return uVar4;
}

```

---

## handleFinishLoading

```asm
// === 08466024 WongWork::CDeathTower::handleFinishLoading  [0x08466024-0x846614f] ===
 8466024:	55                   	push   %ebp
 8466025:	89 e5                	mov    %esp,%ebp
 8466027:	56                   	push   %esi
 8466028:	53                   	push   %ebx
 8466029:	83 ec 20             	sub    $0x20,%esp
 846602c:	8b 45 08             	mov    0x8(%ebp),%eax
 846602f:	8b 00                	mov    (%eax),%eax
 8466031:	8b 55 0c             	mov    0xc(%ebp),%edx
 8466034:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466038:	89 04 24             	mov    %eax,(%esp)
 846603b:	e8 3c 4c 13 00       	call   859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>
 8466040:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8466043:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8466047:	74 1f                	je     8466068 <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser+0x44>
 8466049:	8b 45 08             	mov    0x8(%ebp),%eax
 846604c:	8b 00                	mov    (%eax),%eax
 846604e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8466051:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466055:	89 04 24             	mov    %eax,(%esp)
 8466058:	e8 0b f8 cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 846605d:	84 c0                	test   %al,%al
 846605f:	74 07                	je     8466068 <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser+0x44>
 8466061:	b8 01 00 00 00       	mov    $0x1,%eax
 8466066:	eb 05                	jmp    846606d <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser+0x49>
 8466068:	b8 00 00 00 00       	mov    $0x0,%eax
 846606d:	84 c0                	test   %al,%al
 846606f:	0f 84 ce 00 00 00    	je     8466143 <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser+0x11f>
 8466075:	8b 45 08             	mov    0x8(%ebp),%eax
 8466078:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 846607e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8466081:	89 44 24 04          	mov    %eax,0x4(%esp)
 8466085:	89 14 24             	mov    %edx,(%esp)
 8466088:	e8 bd bd ff ff       	call   8461e4a <_ZN8WongWork11CDeathTower9CPlayData18checkEnterStartMapEi>
 846608d:	84 c0                	test   %al,%al
 846608f:	74 13                	je     84660a4 <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser+0x80>
 8466091:	c7 44 24 04 28 00 00 	movl   $0x28,0x4(%esp)
 8466098:	00 
 8466099:	8b 45 0c             	mov    0xc(%ebp),%eax
 846609c:	89 04 24             	mov    %eax,(%esp)
 846609f:	e8 fc 5d 21 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 84660a4:	8b 45 08             	mov    0x8(%ebp),%eax
 84660a7:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 84660ad:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84660b4:	00 
 84660b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84660b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84660bc:	89 14 24             	mov    %edx,(%esp)
 84660bf:	e8 c2 3a 00 00       	call   8469b86 <_ZN8WongWork11CDeathTower9CPlayData14setMemberReadyEib>
 84660c4:	8b 45 08             	mov    0x8(%ebp),%eax
 84660c7:	8b 00                	mov    (%eax),%eax
 84660c9:	89 04 24             	mov    %eax,(%esp)
 84660cc:	e8 99 40 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 84660d1:	8b 55 08             	mov    0x8(%ebp),%edx
 84660d4:	81 c2 10 01 00 00    	add    $0x110,%edx
 84660da:	89 44 24 04          	mov    %eax,0x4(%esp)
 84660de:	89 14 24             	mov    %edx,(%esp)
 84660e1:	e8 98 bd ff ff       	call   8461e7e <_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi>
 84660e6:	84 c0                	test   %al,%al
 84660e8:	74 52                	je     846613c <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser+0x118>
 84660ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84660ed:	89 04 24             	mov    %eax,(%esp)
 84660f0:	e8 97 39 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 84660f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84660f8:	89 04 24             	mov    %eax,(%esp)
 84660fb:	e8 2c a0 ff ff       	call   846012c <_ZN8WongWork11CDeathTower14CPacketHandler17makeFinishLoadingEv>
 8466100:	8b 45 08             	mov    0x8(%ebp),%eax
 8466103:	8b 00                	mov    (%eax),%eax
 8466105:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8466108:	89 54 24 04          	mov    %edx,0x4(%esp)
 846610c:	89 04 24             	mov    %eax,(%esp)
 846610f:	e8 3a 70 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8466114:	eb 1b                	jmp    8466131 <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser+0x10d>
 8466116:	89 d3                	mov    %edx,%ebx
 8466118:	89 c6                	mov    %eax,%esi
 846611a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846611d:	89 04 24             	mov    %eax,(%esp)
 8466120:	e8 7b 39 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8466125:	89 f0                	mov    %esi,%eax
 8466127:	89 da                	mov    %ebx,%edx
 8466129:	89 04 24             	mov    %eax,(%esp)
 846612c:	e8 1f d6 67 00       	call   8ae3750 <_Unwind_Resume>
 8466131:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8466134:	89 04 24             	mov    %eax,(%esp)
 8466137:	e8 64 39 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 846613c:	b8 01 00 00 00       	mov    $0x1,%eax
 8466141:	eb 05                	jmp    8466148 <_ZN8WongWork11CDeathTower19handleFinishLoadingEP5CUser+0x124>
 8466143:	b8 00 00 00 00       	mov    $0x0,%eax
 8466148:	83 c4 20             	add    $0x20,%esp
 846614b:	5b                   	pop    %ebx
 846614c:	5e                   	pop    %esi
 846614d:	5d                   	pop    %ebp
 846614e:	c3                   	ret
 846614f:	90                   	nop

```

```c
// WongWork::CDeathTower::handleFinishLoading @ 0x8466024

/* WongWork::CDeathTower::handleFinishLoading(CUser*) */

undefined4 __thiscall WongWork::CDeathTower::handleFinishLoading(CDeathTower *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPacketHandler local_1c [12];
  int local_10;
  
  local_10 = CParty::GetMemberSlotNo(*(CParty **)this,param_1);
  if (local_10 != -1) {
    cVar2 = CParty::checkValidUser(*(CParty **)this,local_10);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0846606d;
    }
  }
  bVar1 = false;
LAB_0846606d:
  if (bVar1) {
    cVar2 = CPlayData::checkEnterStartMap((CPlayData *)(this + 0x110),local_10);
    if (cVar2 != '\0') {
      CUser::SendCmdOkPacket(param_1,0x28);
    }
    CPlayData::setMemberReady((CPlayData *)(this + 0x110),local_10,true);
    iVar3 = CParty::get_member_count(*(CParty **)this);
    cVar2 = CPlayData::checkAllMemberReady((CPlayData *)(this + 0x110),iVar3);
    if (cVar2 != '\0') {
      CPacketHandler::CPacketHandler(local_1c);
                    /* try { // try from 084660fb to 08466113 has its CatchHandler @ 08466116 */
      CPacketHandler::makeFinishLoading(local_1c);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_1c);
      CPacketHandler::~CPacketHandler(local_1c);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## handleKillMonster

```asm
// === 0846483e WongWork::CDeathTower::handleKillMonster  [0x0846483e-0x8465959] ===
 846483e:	55                   	push   %ebp
 846483f:	89 e5                	mov    %esp,%ebp
 8464841:	57                   	push   %edi
 8464842:	56                   	push   %esi
 8464843:	53                   	push   %ebx
 8464844:	81 ec 9c 05 00 00    	sub    $0x59c,%esp
 846484a:	8b 55 10             	mov    0x10(%ebp),%edx
 846484d:	8b 45 14             	mov    0x14(%ebp),%eax
 8464850:	66 89 95 c4 fa ff ff 	mov    %dx,-0x53c(%ebp)
 8464857:	66 89 85 c0 fa ff ff 	mov    %ax,-0x540(%ebp)
 846485e:	8b 45 08             	mov    0x8(%ebp),%eax
 8464861:	83 c0 14             	add    $0x14,%eax
 8464864:	89 04 24             	mov    %eax,(%esp)
 8464867:	e8 ac 52 00 00       	call   8469b18 <_ZN8WongWork11CDeathTower6CStage8getStateEv>
 846486c:	83 f8 01             	cmp    $0x1,%eax
 846486f:	0f 95 c0             	setne  %al
 8464872:	84 c0                	test   %al,%al
 8464874:	74 25                	je     846489b <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x5d>
 8464876:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 846487d:	00 
 846487e:	c7 44 24 04 2a 00 00 	movl   $0x2a,0x4(%esp)
 8464885:	00 
 8464886:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464889:	89 04 24             	mov    %eax,(%esp)
 846488c:	e8 b1 76 21 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8464891:	bb 00 00 00 00       	mov    $0x0,%ebx
 8464896:	e9 b1 10 00 00       	jmp    846594c <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x110e>
 846489b:	8b 45 08             	mov    0x8(%ebp),%eax
 846489e:	05 58 0b 00 00       	add    $0xb58,%eax
 84648a3:	89 04 24             	mov    %eax,(%esp)
 84648a6:	e8 2f 54 00 00       	call   8469cda <_ZN8WongWork11CDeathTower25stMapMonsterKillChecker_t23getUseSkillMaterialTimeEv>
 84648ab:	85 c0                	test   %eax,%eax
 84648ad:	75 35                	jne    84648e4 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa6>
 84648af:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84648b6:	e8 f1 0f ce ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 84648bb:	8b 55 08             	mov    0x8(%ebp),%edx
 84648be:	81 c2 58 0b 00 00    	add    $0xb58,%edx
 84648c4:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 84648cb:	00 
 84648cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84648d0:	89 14 24             	mov    %edx,(%esp)
 84648d3:	e8 be 53 00 00       	call   8469c96 <_ZN8WongWork11CDeathTower25stMapMonsterKillChecker_t10dieMonsterEjj>
 84648d8:	83 f8 02             	cmp    $0x2,%eax
 84648db:	76 07                	jbe    84648e4 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa6>
 84648dd:	b8 01 00 00 00       	mov    $0x1,%eax
 84648e2:	eb 05                	jmp    84648e9 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xab>
 84648e4:	b8 00 00 00 00       	mov    $0x0,%eax
 84648e9:	84 c0                	test   %al,%al
 84648eb:	0f 84 77 01 00 00    	je     8464a68 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x22a>
 84648f1:	c6 45 af 00          	movb   $0x0,-0x51(%ebp)
 84648f5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84648f9:	74 17                	je     8464912 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xd4>
 84648fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84648fe:	89 04 24             	mov    %eax,(%esp)
 8464901:	e8 b2 59 c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8464906:	83 f8 1d             	cmp    $0x1d,%eax
 8464909:	7e 07                	jle    8464912 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xd4>
 846490b:	b8 01 00 00 00       	mov    $0x1,%eax
 8464910:	eb 05                	jmp    8464917 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xd9>
 8464912:	b8 00 00 00 00       	mov    $0x0,%eax
 8464917:	84 c0                	test   %al,%al
 8464919:	74 09                	je     8464924 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xe6>
 846491b:	c6 45 af 01          	movb   $0x1,-0x51(%ebp)
 846491f:	e9 f4 00 00 00       	jmp    8464a18 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1da>
 8464924:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8464928:	74 17                	je     8464941 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x103>
 846492a:	8b 45 0c             	mov    0xc(%ebp),%eax
 846492d:	89 04 24             	mov    %eax,(%esp)
 8464930:	e8 83 59 c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8464935:	83 f8 18             	cmp    $0x18,%eax
 8464938:	7e 07                	jle    8464941 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x103>
 846493a:	b8 01 00 00 00       	mov    $0x1,%eax
 846493f:	eb 05                	jmp    8464946 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x108>
 8464941:	b8 00 00 00 00       	mov    $0x0,%eax
 8464946:	84 c0                	test   %al,%al
 8464948:	0f 84 ca 00 00 00    	je     8464a18 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1da>
 846494e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464951:	89 04 24             	mov    %eax,(%esp)
 8464954:	e8 cf 84 cc ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 8464959:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 846495f:	c7 44 24 08 0f 27 00 	movl   $0x270f,0x8(%esp)
 8464966:	00 
 8464967:	89 44 24 04          	mov    %eax,0x4(%esp)
 846496b:	89 14 24             	mov    %edx,(%esp)
 846496e:	e8 29 95 24 00       	call   86ade9c <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi>
 8464973:	83 ec 04             	sub    $0x4,%esp
 8464976:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 846497d:	eb 6f                	jmp    84649ee <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1b0>
 846497f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8464982:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464986:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 846498c:	89 04 24             	mov    %eax,(%esp)
 846498f:	e8 a6 54 00 00       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 8464994:	8b 00                	mov    (%eax),%eax
 8464996:	83 f8 16             	cmp    $0x16,%eax
 8464999:	7e 40                	jle    84649db <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x19d>
 846499b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 846499e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84649a2:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84649a8:	89 04 24             	mov    %eax,(%esp)
 84649ab:	e8 8a 54 00 00       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 84649b0:	8b 00                	mov    (%eax),%eax
 84649b2:	83 f8 1b             	cmp    $0x1b,%eax
 84649b5:	7f 24                	jg     84649db <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x19d>
 84649b7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84649ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 84649be:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84649c4:	89 04 24             	mov    %eax,(%esp)
 84649c7:	e8 6e 54 00 00       	call   8469e3a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEixEj>
 84649cc:	8b 40 10             	mov    0x10(%eax),%eax
 84649cf:	83 f8 01             	cmp    $0x1,%eax
 84649d2:	75 07                	jne    84649db <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x19d>
 84649d4:	b8 01 00 00 00       	mov    $0x1,%eax
 84649d9:	eb 05                	jmp    84649e0 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1a2>
 84649db:	b8 00 00 00 00       	mov    $0x0,%eax
 84649e0:	84 c0                	test   %al,%al
 84649e2:	74 06                	je     84649ea <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1ac>
 84649e4:	c6 45 af 01          	movb   $0x1,-0x51(%ebp)
 84649e8:	eb 20                	jmp    8464a0a <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1cc>
 84649ea:	83 45 b0 01          	addl   $0x1,-0x50(%ebp)
 84649ee:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 84649f4:	89 04 24             	mov    %eax,(%esp)
 84649f7:	e8 20 51 ec ff       	call   8329b1c <_ZNKSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE4sizeEv>
 84649fc:	3b 45 b0             	cmp    -0x50(%ebp),%eax
 84649ff:	0f 97 c0             	seta   %al
 8464a02:	84 c0                	test   %al,%al
 8464a04:	0f 85 75 ff ff ff    	jne    846497f <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x141>
 8464a0a:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8464a10:	89 04 24             	mov    %eax,(%esp)
 8464a13:	e8 f2 3a ec ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 8464a18:	80 7d af 00          	cmpb   $0x0,-0x51(%ebp)
 8464a1c:	74 4a                	je     8464a68 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x22a>
 8464a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8464a21:	05 58 0b 00 00       	add    $0xb58,%eax
 8464a26:	89 04 24             	mov    %eax,(%esp)
 8464a29:	e8 58 52 00 00       	call   8469c86 <_ZN8WongWork11CDeathTower25stMapMonsterKillChecker_t15initMonsterInfoEv>
 8464a2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464a31:	89 04 24             	mov    %eax,(%esp)
 8464a34:	e8 21 4f c9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8464a39:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8464a40:	00 
 8464a41:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8464a48:	00 
 8464a49:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8464a50:	00 
 8464a51:	c7 44 24 08 d6 00 00 	movl   $0xd6,0x8(%esp)
 8464a58:	00 
 8464a59:	8b 55 0c             	mov    0xc(%ebp),%edx
 8464a5c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8464a60:	89 04 24             	mov    %eax,(%esp)
 8464a63:	e8 16 42 c9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8464a68:	8d 85 d0 fa ff ff    	lea    -0x530(%ebp),%eax
 8464a6e:	89 04 24             	mov    %eax,(%esp)
 8464a71:	e8 52 c7 ce ff       	call   81511c8 <_ZN11map_monsterC1Ev>
 8464a76:	0f b7 85 c4 fa ff ff 	movzwl -0x53c(%ebp),%eax
 8464a7d:	8b 55 08             	mov    0x8(%ebp),%edx
 8464a80:	8d 4a 14             	lea    0x14(%edx),%ecx
 8464a83:	8d 95 d0 fa ff ff    	lea    -0x530(%ebp),%edx
 8464a89:	89 54 24 08          	mov    %edx,0x8(%esp)
 8464a8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464a91:	89 0c 24             	mov    %ecx,(%esp)
 8464a94:	e8 6f cc ff ff       	call   8461708 <_ZN8WongWork11CDeathTower6CStage11killMonsterEiR11map_monster>
 8464a99:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8464a9c:	83 7d 9c 00          	cmpl   $0x0,-0x64(%ebp)
 8464aa0:	75 0a                	jne    8464aac <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x26e>
 8464aa2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8464aa7:	e9 92 0e 00 00       	jmp    846593e <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1100>
 8464aac:	8b 45 08             	mov    0x8(%ebp),%eax
 8464aaf:	8b 00                	mov    (%eax),%eax
 8464ab1:	89 04 24             	mov    %eax,(%esp)
 8464ab4:	e8 b7 cf ce ff       	call   8151a70 <_ZN6CParty17getMemberLevelGapEv>
 8464ab9:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8464abc:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8464ac3:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8464ac9:	89 04 24             	mov    %eax,(%esp)
 8464acc:	e8 f1 08 c9 ff       	call   80f53c2 <_ZNSt6vectorImSaImEEC1Ev>
 8464ad1:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8464ad7:	89 04 24             	mov    %eax,(%esp)
 8464ada:	e8 4d df ce ff       	call   8152a2c <_ZNSt4listI8map_itemSaIS0_EEC1Ev>
 8464adf:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 8464ae5:	89 04 24             	mov    %eax,(%esp)
 8464ae8:	e8 19 60 ce ff       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 8464aed:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 8464af1:	74 0b                	je     8464afe <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x2c0>
 8464af3:	8b 95 dc fa ff ff    	mov    -0x524(%ebp),%edx
 8464af9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8464afc:	89 10                	mov    %edx,(%eax)
 8464afe:	0f b6 85 d8 fa ff ff 	movzbl -0x528(%ebp),%eax
 8464b05:	3c 04                	cmp    $0x4,%al
 8464b07:	0f 8e 8a 00 00 00    	jle    8464b97 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x359>
 8464b0d:	8b 85 dc fa ff ff    	mov    -0x524(%ebp),%eax
 8464b13:	89 c3                	mov    %eax,%ebx
 8464b15:	e8 81 76 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8464b1a:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 8464b20:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8464b24:	89 04 24             	mov    %eax,(%esp)
 8464b27:	e8 a6 5e ee ff       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 8464b2c:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8464b2f:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 8464b33:	0f 84 e6 00 00 00    	je     8464c1f <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x3e1>
 8464b39:	8b 45 08             	mov    0x8(%ebp),%eax
 8464b3c:	83 c0 0c             	add    $0xc,%eax
 8464b3f:	89 04 24             	mov    %eax,(%esp)
 8464b42:	e8 a9 fa dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8464b47:	89 04 24             	mov    %eax,(%esp)
 8464b4a:	e8 df bd ce ff       	call   815092e <_ZNK8CDungeon16hasTowerItemDropEv>
 8464b4f:	84 c0                	test   %al,%al
 8464b51:	74 15                	je     8464b68 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x32a>
 8464b53:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8464b59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464b5d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8464b60:	89 04 24             	mov    %eax,(%esp)
 8464b63:	e8 34 56 ee ff       	call   834a19c <_ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE>
 8464b68:	8b 85 fc fa ff ff    	mov    -0x504(%ebp),%eax
 8464b6e:	83 f8 64             	cmp    $0x64,%eax
 8464b71:	74 11                	je     8464b84 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x346>
 8464b73:	8b 85 fc fa ff ff    	mov    -0x504(%ebp),%eax
 8464b79:	3d c8 00 00 00       	cmp    $0xc8,%eax
 8464b7e:	0f 85 9b 00 00 00    	jne    8464c1f <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x3e1>
 8464b84:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8464b87:	89 04 24             	mov    %eax,(%esp)
 8464b8a:	e8 b1 56 ee ff       	call   834a240 <_ZNK12CAICharacter14getPvPWinPointEv>
 8464b8f:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8464b92:	e9 88 00 00 00       	jmp    8464c1f <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x3e1>
 8464b97:	c7 85 20 ff ff ff fe 	movl   $0xfffffffe,-0xe0(%ebp)
 8464b9e:	ff ff ff 
 8464ba1:	8b 9d dc fa ff ff    	mov    -0x524(%ebp),%ebx
 8464ba7:	e8 ef 75 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8464bac:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8464bb0:	89 04 24             	mov    %eax,(%esp)
 8464bb3:	e8 cc b1 ef ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 8464bb8:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8464bbb:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 8464bbf:	74 21                	je     8464be2 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x3a4>
 8464bc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8464bc4:	83 c0 0c             	add    $0xc,%eax
 8464bc7:	89 04 24             	mov    %eax,(%esp)
 8464bca:	e8 21 fa dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8464bcf:	89 04 24             	mov    %eax,(%esp)
 8464bd2:	e8 57 bd ce ff       	call   815092e <_ZNK8CDungeon16hasTowerItemDropEv>
 8464bd7:	84 c0                	test   %al,%al
 8464bd9:	74 07                	je     8464be2 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x3a4>
 8464bdb:	b8 01 00 00 00       	mov    $0x1,%eax
 8464be0:	eb 05                	jmp    8464be7 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x3a9>
 8464be2:	b8 00 00 00 00       	mov    $0x0,%eax
 8464be7:	84 c0                	test   %al,%al
 8464be9:	74 11                	je     8464bfc <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x3be>
 8464beb:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8464bee:	89 04 24             	mov    %eax,(%esp)
 8464bf1:	e8 54 ac ee ff       	call   834f84a <_ZNK8CMonster25deathTowerSpecifyItemDropEv>
 8464bf6:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 8464bfc:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8464c02:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8464c05:	74 18                	je     8464c1f <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x3e1>
 8464c07:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8464c0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464c11:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8464c17:	89 04 24             	mov    %eax,(%esp)
 8464c1a:	e8 35 52 00 00       	call   8469e54 <_ZNSt6vectorImSaImEE9push_backERKm>
 8464c1f:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8464c25:	89 04 24             	mov    %eax,(%esp)
 8464c28:	e8 05 eb d2 ff       	call   8193732 <_ZNKSt6vectorImSaImEE5emptyEv>
 8464c2d:	83 f0 01             	xor    $0x1,%eax
 8464c30:	84 c0                	test   %al,%al
 8464c32:	0f 84 50 01 00 00    	je     8464d88 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x54a>
 8464c38:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8464c3b:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8464c41:	89 54 24 04          	mov    %edx,0x4(%esp)
 8464c45:	89 04 24             	mov    %eax,(%esp)
 8464c48:	e8 69 85 d3 ff       	call   819d1b6 <_ZNSt6vectorImSaImEE5beginEv>
 8464c4d:	83 ec 04             	sub    $0x4,%esp
 8464c50:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8464c53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464c57:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8464c5d:	89 04 24             	mov    %eax,(%esp)
 8464c60:	e8 63 52 00 00       	call   8469ec8 <_ZN9__gnu_cxx17__normal_iteratorIPKmSt6vectorImSaImEEEC1IPmEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8464c65:	8d 45 88             	lea    -0x78(%ebp),%eax
 8464c68:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 8464c6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8464c72:	89 04 24             	mov    %eax,(%esp)
 8464c75:	e8 60 85 d3 ff       	call   819d1da <_ZNSt6vectorImSaImEE3endEv>
 8464c7a:	83 ec 04             	sub    $0x4,%esp
 8464c7d:	8d 45 88             	lea    -0x78(%ebp),%eax
 8464c80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464c84:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8464c8a:	89 04 24             	mov    %eax,(%esp)
 8464c8d:	e8 36 52 00 00       	call   8469ec8 <_ZN9__gnu_cxx17__normal_iteratorIPKmSt6vectorImSaImEEEC1IPmEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8464c92:	e9 d1 00 00 00       	jmp    8464d68 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x52a>
 8464c97:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8464c9d:	89 04 24             	mov    %eax,(%esp)
 8464ca0:	e8 7f 52 00 00       	call   8469f24 <_ZNK9__gnu_cxx17__normal_iteratorIPKmSt6vectorImSaImEEEdeEv>
 8464ca5:	8b 00                	mov    (%eax),%eax
 8464ca7:	89 c3                	mov    %eax,%ebx
 8464ca9:	e8 ed 74 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8464cae:	8b 40 0c             	mov    0xc(%eax),%eax
 8464cb1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8464cb5:	89 04 24             	mov    %eax,(%esp)
 8464cb8:	e8 cd d1 0a 00       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8464cbd:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8464cc0:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8464cc4:	0f 84 90 00 00 00    	je     8464d5a <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x51c>
 8464cca:	8d 85 73 fe ff ff    	lea    -0x18d(%ebp),%eax
 8464cd0:	89 04 24             	mov    %eax,(%esp)
 8464cd3:	e8 7c 6b c6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8464cd8:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8464cde:	89 04 24             	mov    %eax,(%esp)
 8464ce1:	e8 3e 52 00 00       	call   8469f24 <_ZNK9__gnu_cxx17__normal_iteratorIPKmSt6vectorImSaImEEEdeEv>
 8464ce6:	8b 00                	mov    (%eax),%eax
 8464ce8:	89 85 75 fe ff ff    	mov    %eax,-0x18b(%ebp)
 8464cee:	e8 a8 74 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8464cf3:	8b 40 0c             	mov    0xc(%eax),%eax
 8464cf6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8464cfd:	00 
 8464cfe:	8d 95 73 fe ff ff    	lea    -0x18d(%ebp),%edx
 8464d04:	89 54 24 08          	mov    %edx,0x8(%esp)
 8464d08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8464d0f:	00 
 8464d10:	89 04 24             	mov    %eax,(%esp)
 8464d13:	e8 a0 d2 0a 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8464d18:	8b 45 08             	mov    0x8(%ebp),%eax
 8464d1b:	8b 00                	mov    (%eax),%eax
 8464d1d:	89 04 24             	mov    %eax,(%esp)
 8464d20:	e8 45 54 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8464d25:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8464d28:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8464d2f:	eb 1c                	jmp    8464d4d <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x50f>
 8464d31:	8d 85 73 fe ff ff    	lea    -0x18d(%ebp),%eax
 8464d37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464d3b:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 8464d41:	89 04 24             	mov    %eax,(%esp)
 8464d44:	e8 19 25 dd ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8464d49:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8464d4d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8464d50:	3b 45 c0             	cmp    -0x40(%ebp),%eax
 8464d53:	0f 92 c0             	setb   %al
 8464d56:	84 c0                	test   %al,%al
 8464d58:	75 d7                	jne    8464d31 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x4f3>
 8464d5a:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8464d60:	89 04 24             	mov    %eax,(%esp)
 8464d63:	e8 a6 51 00 00       	call   8469f0e <_ZN9__gnu_cxx17__normal_iteratorIPKmSt6vectorImSaImEEEppEv>
 8464d68:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8464d6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464d72:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8464d78:	89 04 24             	mov    %eax,(%esp)
 8464d7b:	e8 62 51 00 00       	call   8469ee2 <_ZN9__gnu_cxxneIPKmSt6vectorImSaImEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8464d80:	84 c0                	test   %al,%al
 8464d82:	0f 85 0f ff ff ff    	jne    8464c97 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x459>
 8464d88:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8464d8f:	e9 00 05 00 00       	jmp    8465294 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa56>
 8464d94:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8464d9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8464d9e:	8b 00                	mov    (%eax),%eax
 8464da0:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8464da3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8464da7:	89 04 24             	mov    %eax,(%esp)
 8464daa:	e8 b5 09 ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8464daf:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8464db2:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8464db6:	74 1b                	je     8464dd3 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x595>
 8464db8:	8b 45 08             	mov    0x8(%ebp),%eax
 8464dbb:	8b 00                	mov    (%eax),%eax
 8464dbd:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8464dc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8464dc4:	89 04 24             	mov    %eax,(%esp)
 8464dc7:	e8 9c 0a ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8464dcc:	83 f0 01             	xor    $0x1,%eax
 8464dcf:	84 c0                	test   %al,%al
 8464dd1:	74 07                	je     8464dda <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x59c>
 8464dd3:	b8 01 00 00 00       	mov    $0x1,%eax
 8464dd8:	eb 05                	jmp    8464ddf <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x5a1>
 8464dda:	b8 00 00 00 00       	mov    $0x0,%eax
 8464ddf:	84 c0                	test   %al,%al
 8464de1:	0f 85 a5 04 00 00    	jne    846528c <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa4e>
 8464de7:	8b 45 08             	mov    0x8(%ebp),%eax
 8464dea:	8b 00                	mov    (%eax),%eax
 8464dec:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8464df2:	83 f8 01             	cmp    $0x1,%eax
 8464df5:	0f 84 94 04 00 00    	je     846528f <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa51>
 8464dfb:	c7 85 14 ff ff ff 00 	movl   $0x0,-0xec(%ebp)
 8464e02:	00 00 00 
 8464e05:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8464e08:	89 04 24             	mov    %eax,(%esp)
 8464e0b:	e8 a8 54 c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8464e10:	89 c3                	mov    %eax,%ebx
 8464e12:	e8 84 73 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8464e17:	8d 95 14 ff ff ff    	lea    -0xec(%ebp),%edx
 8464e1d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8464e21:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8464e25:	89 04 24             	mov    %eax,(%esp)
 8464e28:	e8 41 bc ef ff       	call   8360a6e <_ZNK12CDataManager14get_mob_rewardEiRj>
 8464e2d:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 8464e33:	8b 45 08             	mov    0x8(%ebp),%eax
 8464e36:	8b 00                	mov    (%eax),%eax
 8464e38:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8464e3f:	00 
 8464e40:	b9 00 00 80 3f       	mov    $0x3f800000,%ecx
 8464e45:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8464e49:	b9 00 00 80 3f       	mov    $0x3f800000,%ecx
 8464e4e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8464e52:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8464e59:	00 
 8464e5a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8464e61:	00 
 8464e62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8464e66:	89 04 24             	mov    %eax,(%esp)
 8464e69:	e8 6e d5 13 00       	call   85a23dc <_ZN6CParty18getMonsterTotalExpEjciffb>
 8464e6e:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8464e74:	8b 45 08             	mov    0x8(%ebp),%eax
 8464e77:	8b 00                	mov    (%eax),%eax
 8464e79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464e7d:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 8464e83:	89 04 24             	mov    %eax,(%esp)
 8464e86:	e8 eb 4a 00 00       	call   8469976 <_ZN10QuickParty16RewardData_ParamC1EP6CParty>
 8464e8b:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 8464e91:	89 04 24             	mov    %eax,(%esp)
 8464e94:	e8 2d 4b 00 00       	call   84699c6 <_ZN10QuickParty17RewardData_ResultC1Ev>
 8464e99:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8464e9f:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 8464ea5:	8b 45 08             	mov    0x8(%ebp),%eax
 8464ea8:	8b 08                	mov    (%eax),%ecx
 8464eaa:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 8464eb0:	89 44 24 10          	mov    %eax,0x10(%esp)
 8464eb4:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 8464eba:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 8464ec0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8464ec4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8464ec8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8464ecf:	00 
 8464ed0:	89 0c 24             	mov    %ecx,(%esp)
 8464ed3:	e8 22 6a 13 00       	call   859b8fa <_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE>
 8464ed8:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 8464ede:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8464ee4:	0f b6 85 d8 fa ff ff 	movzbl -0x528(%ebp),%eax
 8464eeb:	3c 05                	cmp    $0x5,%al
 8464eed:	75 68                	jne    8464f57 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x719>
 8464eef:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8464ef5:	ba 00 00 00 00       	mov    $0x0,%edx
 8464efa:	89 85 b0 fa ff ff    	mov    %eax,-0x550(%ebp)
 8464f00:	89 95 b4 fa ff ff    	mov    %edx,-0x54c(%ebp)
 8464f06:	df ad b0 fa ff ff    	fildll -0x550(%ebp)
 8464f0c:	d9 9d 94 fa ff ff    	fstps  -0x56c(%ebp)
 8464f12:	e8 84 72 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8464f17:	d9 80 98 51 00 00    	flds   0x5198(%eax)
 8464f1d:	d8 8d 94 fa ff ff    	fmuls  -0x56c(%ebp)
 8464f23:	d9 bd be fa ff ff    	fnstcw -0x542(%ebp)
 8464f29:	0f b7 85 be fa ff ff 	movzwl -0x542(%ebp),%eax
 8464f30:	b4 0c                	mov    $0xc,%ah
 8464f32:	66 89 85 bc fa ff ff 	mov    %ax,-0x544(%ebp)
 8464f39:	d9 ad bc fa ff ff    	fldcw  -0x544(%ebp)
 8464f3f:	db 9d b8 fa ff ff    	fistpl -0x548(%ebp)
 8464f45:	d9 ad be fa ff ff    	fldcw  -0x542(%ebp)
 8464f4b:	8b 85 b8 fa ff ff    	mov    -0x548(%ebp),%eax
 8464f51:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8464f57:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8464f5d:	ba 00 00 00 00       	mov    $0x0,%edx
 8464f62:	89 85 b0 fa ff ff    	mov    %eax,-0x550(%ebp)
 8464f68:	89 95 b4 fa ff ff    	mov    %edx,-0x54c(%ebp)
 8464f6e:	df ad b0 fa ff ff    	fildll -0x550(%ebp)
 8464f74:	d9 9d 98 fa ff ff    	fstps  -0x568(%ebp)
 8464f7a:	e8 1c 72 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8464f7f:	d9 80 1c 5e 00 00    	flds   0x5e1c(%eax)
 8464f85:	d8 8d 98 fa ff ff    	fmuls  -0x568(%ebp)
 8464f8b:	d9 bd be fa ff ff    	fnstcw -0x542(%ebp)
 8464f91:	0f b7 85 be fa ff ff 	movzwl -0x542(%ebp),%eax
 8464f98:	b4 0c                	mov    $0xc,%ah
 8464f9a:	66 89 85 bc fa ff ff 	mov    %ax,-0x544(%ebp)
 8464fa1:	d9 ad bc fa ff ff    	fldcw  -0x544(%ebp)
 8464fa7:	db 9d b8 fa ff ff    	fistpl -0x548(%ebp)
 8464fad:	d9 ad be fa ff ff    	fldcw  -0x542(%ebp)
 8464fb3:	8b 85 b8 fa ff ff    	mov    -0x548(%ebp),%eax
 8464fb9:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8464fbf:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 8464fc5:	89 04 24             	mov    %eax,(%esp)
 8464fc8:	e8 89 ca ce ff       	call   8151a56 <_ZN19STGainedEachExpDataC1Ev>
 8464fcd:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8464fd3:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 8464fd9:	8b 45 08             	mov    0x8(%ebp),%eax
 8464fdc:	8b 00                	mov    (%eax),%eax
 8464fde:	8d 95 e8 fe ff ff    	lea    -0x118(%ebp),%edx
 8464fe4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8464fe8:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8464feb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8464fef:	89 04 24             	mov    %eax,(%esp)
 8464ff2:	e8 91 d4 13 00       	call   85a2488 <_ZN6CParty16sumGainedEachExpEP5CUserRK19STGainedEachExpData>
 8464ff7:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8464ffd:	83 7d a4 00          	cmpl   $0x0,-0x5c(%ebp)
 8465001:	0f 84 97 00 00 00    	je     846509e <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x860>
 8465007:	a1 30 f7 41 09       	mov    0x941f730,%eax
 846500c:	c7 44 24 04 27 00 00 	movl   $0x27,0x4(%esp)
 8465013:	00 
 8465014:	89 04 24             	mov    %eax,(%esp)
 8465017:	e8 7c 09 cb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 846501c:	89 04 24             	mov    %eax,(%esp)
 846501f:	e8 a8 4d 00 00       	call   8469dcc <_ZN24CDeathTowerWinPointEvent12getBonusRateEv>
 8465024:	d9 5d d8             	fstps  -0x28(%ebp)
 8465027:	d9 45 d8             	flds   -0x28(%ebp)
 846502a:	d9 ee                	fldz
 846502c:	d9 c9                	fxch   %st(1)
 846502e:	da e9                	fucompp
 8465030:	df e0                	fnstsw %ax
 8465032:	9e                   	sahf
 8465033:	7a 02                	jp     8465037 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x7f9>
 8465035:	74 4d                	je     8465084 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x846>
 8465037:	db 45 a4             	fildl  -0x5c(%ebp)
 846503a:	d8 4d d8             	fmuls  -0x28(%ebp)
 846503d:	d9 bd be fa ff ff    	fnstcw -0x542(%ebp)
 8465043:	0f b7 85 be fa ff ff 	movzwl -0x542(%ebp),%eax
 846504a:	b4 0c                	mov    $0xc,%ah
 846504c:	66 89 85 bc fa ff ff 	mov    %ax,-0x544(%ebp)
 8465053:	d9 ad bc fa ff ff    	fldcw  -0x544(%ebp)
 8465059:	db 9d b8 fa ff ff    	fistpl -0x548(%ebp)
 846505f:	d9 ad be fa ff ff    	fldcw  -0x542(%ebp)
 8465065:	8b 85 b8 fa ff ff    	mov    -0x548(%ebp),%eax
 846506b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8465072:	00 
 8465073:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465077:	8b 45 cc             	mov    -0x34(%ebp),%eax
 846507a:	89 04 24             	mov    %eax,(%esp)
 846507d:	e8 aa ac 1e 00       	call   864fd2c <_ZN5CUser12gainWinPointEi12eWPAddReason>
 8465082:	eb 1a                	jmp    846509e <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x860>
 8465084:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 846508b:	00 
 846508c:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 846508f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465093:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8465096:	89 04 24             	mov    %eax,(%esp)
 8465099:	e8 8e ac 1e 00       	call   864fd2c <_ZN5CUser12gainWinPointEi12eWPAddReason>
 846509e:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 84650a4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84650a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84650ae:	00 
 84650af:	89 54 24 04          	mov    %edx,0x4(%esp)
 84650b3:	89 04 24             	mov    %eax,(%esp)
 84650b6:	e8 47 93 1e 00       	call   864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>
 84650bb:	c7 85 e4 fe ff ff 00 	movl   $0x0,-0x11c(%ebp)
 84650c2:	00 00 00 
 84650c5:	c7 45 d0 0b 00 00 00 	movl   $0xb,-0x30(%ebp)
 84650cc:	0f b6 85 d8 fa ff ff 	movzbl -0x528(%ebp),%eax
 84650d3:	3c 05                	cmp    $0x5,%al
 84650d5:	75 07                	jne    84650de <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x8a0>
 84650d7:	c7 45 d0 0c 00 00 00 	movl   $0xc,-0x30(%ebp)
 84650de:	c7 85 e0 fe ff ff 00 	movl   $0x0,-0x120(%ebp)
 84650e5:	00 00 00 
 84650e8:	8b 95 dc fa ff ff    	mov    -0x524(%ebp),%edx
 84650ee:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 84650f4:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84650fb:	00 
 84650fc:	89 54 24 14          	mov    %edx,0x14(%esp)
 8465100:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8465103:	89 54 24 10          	mov    %edx,0x10(%esp)
 8465107:	8d 95 e0 fe ff ff    	lea    -0x120(%ebp),%edx
 846510d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8465111:	8d 95 e4 fe ff ff    	lea    -0x11c(%ebp),%edx
 8465117:	89 54 24 08          	mov    %edx,0x8(%esp)
 846511b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846511f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8465122:	89 04 24             	mov    %eax,(%esp)
 8465125:	e8 d4 52 20 00       	call   866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>
 846512a:	84 c0                	test   %al,%al
 846512c:	74 23                	je     8465151 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x913>
 846512e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8465135:	00 
 8465136:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 846513d:	00 
 846513e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8465145:	00 
 8465146:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8465149:	89 04 24             	mov    %eax,(%esp)
 846514c:	e8 0b 69 21 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 8465151:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8465157:	89 c6                	mov    %eax,%esi
 8465159:	8b 45 cc             	mov    -0x34(%ebp),%eax
 846515c:	89 04 24             	mov    %eax,(%esp)
 846515f:	e8 5a c9 ce ff       	call   8151abe <_ZNK15CUserCharacInfo15getCurCharacExpEv>
 8465164:	89 c1                	mov    %eax,%ecx
 8465166:	0f b6 85 d8 fa ff ff 	movzbl -0x528(%ebp),%eax
 846516d:	3c 05                	cmp    $0x5,%al
 846516f:	0f 94 c0             	sete   %al
 8465172:	0f b6 c0             	movzbl %al,%eax
 8465175:	89 85 9c fa ff ff    	mov    %eax,-0x564(%ebp)
 846517b:	0f b6 85 d8 fa ff ff 	movzbl -0x528(%ebp),%eax
 8465182:	0f be c0             	movsbl %al,%eax
 8465185:	89 85 a0 fa ff ff    	mov    %eax,-0x560(%ebp)
 846518b:	8b 45 18             	mov    0x18(%ebp),%eax
 846518e:	0f b7 80 26 0a 00 00 	movzwl 0xa26(%eax),%eax
 8465195:	0f b7 c0             	movzwl %ax,%eax
 8465198:	89 85 a4 fa ff ff    	mov    %eax,-0x55c(%ebp)
 846519e:	8b 45 18             	mov    0x18(%ebp),%eax
 84651a1:	0f b7 80 24 0a 00 00 	movzwl 0xa24(%eax),%eax
 84651a8:	0f b7 c0             	movzwl %ax,%eax
 84651ab:	89 85 a8 fa ff ff    	mov    %eax,-0x558(%ebp)
 84651b1:	8b 45 18             	mov    0x18(%ebp),%eax
 84651b4:	8b 80 1a 0a 00 00    	mov    0xa1a(%eax),%eax
 84651ba:	89 85 ac fa ff ff    	mov    %eax,-0x554(%ebp)
 84651c0:	8b 45 18             	mov    0x18(%ebp),%eax
 84651c3:	8b b8 1e 0a 00 00    	mov    0xa1e(%eax),%edi
 84651c9:	8b 9d dc fa ff ff    	mov    -0x524(%ebp),%ebx
 84651cf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84651d2:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84651d8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84651db:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84651df:	89 74 24 28          	mov    %esi,0x28(%esp)
 84651e3:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 84651e7:	8b 85 9c fa ff ff    	mov    -0x564(%ebp),%eax
 84651ed:	89 44 24 20          	mov    %eax,0x20(%esp)
 84651f1:	8b 85 a0 fa ff ff    	mov    -0x560(%ebp),%eax
 84651f7:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84651fb:	8b 45 18             	mov    0x18(%ebp),%eax
 84651fe:	89 44 24 18          	mov    %eax,0x18(%esp)
 8465202:	8b 85 a4 fa ff ff    	mov    -0x55c(%ebp),%eax
 8465208:	89 44 24 14          	mov    %eax,0x14(%esp)
 846520c:	8b 85 a8 fa ff ff    	mov    -0x558(%ebp),%eax
 8465212:	89 44 24 10          	mov    %eax,0x10(%esp)
 8465216:	8b 85 ac fa ff ff    	mov    -0x554(%ebp),%eax
 846521c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8465220:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8465224:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8465228:	89 14 24             	mov    %edx,(%esp)
 846522b:	e8 7c ff 21 00       	call   86851ac <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason>
 8465230:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 8465237:	0f b6 85 d8 fa ff ff 	movzbl -0x528(%ebp),%eax
 846523e:	3c 04                	cmp    $0x4,%al
 8465240:	7e 12                	jle    8465254 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa16>
 8465242:	0f b6 85 d8 fa ff ff 	movzbl -0x528(%ebp),%eax
 8465249:	3c 08                	cmp    $0x8,%al
 846524b:	7f 07                	jg     8465254 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa16>
 846524d:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 8465254:	8b 9d dc fa ff ff    	mov    -0x524(%ebp),%ebx
 846525a:	8b 45 08             	mov    0x8(%ebp),%eax
 846525d:	83 c0 0c             	add    $0xc,%eax
 8465260:	89 04 24             	mov    %eax,(%esp)
 8465263:	e8 88 f3 dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8465268:	89 04 24             	mov    %eax,(%esp)
 846526b:	e8 80 8a c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8465270:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8465273:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8465277:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846527b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846527f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8465282:	89 04 24             	mov    %eax,(%esp)
 8465285:	e8 7a 78 20 00       	call   866cb04 <_ZN5CUser17CheckQuestMonsterEii21ENUM_QUEST_ENEMY_TYPE>
 846528a:	eb 04                	jmp    8465290 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa52>
 846528c:	90                   	nop
 846528d:	eb 01                	jmp    8465290 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xa52>
 846528f:	90                   	nop
 8465290:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 8465294:	83 7d c8 03          	cmpl   $0x3,-0x38(%ebp)
 8465298:	0f 9e c0             	setle  %al
 846529b:	84 c0                	test   %al,%al
 846529d:	0f 85 f1 fa ff ff    	jne    8464d94 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x556>
 84652a3:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84652a6:	8d 95 b0 fe ff ff    	lea    -0x150(%ebp),%edx
 84652ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 84652b0:	89 04 24             	mov    %eax,(%esp)
 84652b3:	e8 4c 5a ce ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 84652b8:	83 ec 04             	sub    $0x4,%esp
 84652bb:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84652be:	89 44 24 04          	mov    %eax,0x4(%esp)
 84652c2:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 84652c8:	89 04 24             	mov    %eax,(%esp)
 84652cb:	e8 1c d8 ce ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 84652d0:	8d 45 90             	lea    -0x70(%ebp),%eax
 84652d3:	8d 95 b0 fe ff ff    	lea    -0x150(%ebp),%edx
 84652d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84652dd:	89 04 24             	mov    %eax,(%esp)
 84652e0:	e8 05 d6 ce ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 84652e5:	83 ec 04             	sub    $0x4,%esp
 84652e8:	8d 45 90             	lea    -0x70(%ebp),%eax
 84652eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84652ef:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 84652f5:	89 04 24             	mov    %eax,(%esp)
 84652f8:	e8 ef d7 ce ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 84652fd:	e9 11 01 00 00       	jmp    8465413 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xbd5>
 8465302:	8d 85 1c fe ff ff    	lea    -0x1e4(%ebp),%eax
 8465308:	89 04 24             	mov    %eax,(%esp)
 846530b:	e8 bc bf ce ff       	call   81512cc <_ZN8map_itemC1Ev>
 8465310:	c6 85 1c fe ff ff 01 	movb   $0x1,-0x1e4(%ebp)
 8465317:	0f b7 85 c0 fa ff ff 	movzwl -0x540(%ebp),%eax
 846531e:	66 89 85 24 fe ff ff 	mov    %ax,-0x1dc(%ebp)
 8465325:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 846532c:	e8 6d 69 c6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8465331:	89 85 28 fe ff ff    	mov    %eax,-0x1d8(%ebp)
 8465337:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 846533d:	89 04 24             	mov    %eax,(%esp)
 8465340:	e8 03 d8 ce ff       	call   8152b48 <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 8465345:	8b 10                	mov    (%eax),%edx
 8465347:	89 95 2c fe ff ff    	mov    %edx,-0x1d4(%ebp)
 846534d:	8b 50 04             	mov    0x4(%eax),%edx
 8465350:	89 95 30 fe ff ff    	mov    %edx,-0x1d0(%ebp)
 8465356:	8b 50 08             	mov    0x8(%eax),%edx
 8465359:	89 95 34 fe ff ff    	mov    %edx,-0x1cc(%ebp)
 846535f:	8b 50 0c             	mov    0xc(%eax),%edx
 8465362:	89 95 38 fe ff ff    	mov    %edx,-0x1c8(%ebp)
 8465368:	8b 50 10             	mov    0x10(%eax),%edx
 846536b:	89 95 3c fe ff ff    	mov    %edx,-0x1c4(%ebp)
 8465371:	8b 50 14             	mov    0x14(%eax),%edx
 8465374:	89 95 40 fe ff ff    	mov    %edx,-0x1c0(%ebp)
 846537a:	8b 50 18             	mov    0x18(%eax),%edx
 846537d:	89 95 44 fe ff ff    	mov    %edx,-0x1bc(%ebp)
 8465383:	8b 50 1c             	mov    0x1c(%eax),%edx
 8465386:	89 95 48 fe ff ff    	mov    %edx,-0x1b8(%ebp)
 846538c:	8b 50 20             	mov    0x20(%eax),%edx
 846538f:	89 95 4c fe ff ff    	mov    %edx,-0x1b4(%ebp)
 8465395:	8b 50 24             	mov    0x24(%eax),%edx
 8465398:	89 95 50 fe ff ff    	mov    %edx,-0x1b0(%ebp)
 846539e:	8b 50 28             	mov    0x28(%eax),%edx
 84653a1:	89 95 54 fe ff ff    	mov    %edx,-0x1ac(%ebp)
 84653a7:	8b 50 2c             	mov    0x2c(%eax),%edx
 84653aa:	89 95 58 fe ff ff    	mov    %edx,-0x1a8(%ebp)
 84653b0:	8b 50 30             	mov    0x30(%eax),%edx
 84653b3:	89 95 5c fe ff ff    	mov    %edx,-0x1a4(%ebp)
 84653b9:	8b 50 34             	mov    0x34(%eax),%edx
 84653bc:	89 95 60 fe ff ff    	mov    %edx,-0x1a0(%ebp)
 84653c2:	8b 50 38             	mov    0x38(%eax),%edx
 84653c5:	89 95 64 fe ff ff    	mov    %edx,-0x19c(%ebp)
 84653cb:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 84653cf:	88 85 68 fe ff ff    	mov    %al,-0x198(%ebp)
 84653d5:	8b 45 08             	mov    0x8(%ebp),%eax
 84653d8:	8d 50 14             	lea    0x14(%eax),%edx
 84653db:	8d 85 1c fe ff ff    	lea    -0x1e4(%ebp),%eax
 84653e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84653e5:	89 14 24             	mov    %edx,(%esp)
 84653e8:	e8 bb c2 ff ff       	call   84616a8 <_ZN8WongWork11CDeathTower6CStage8dropItemER8map_item>
 84653ed:	8d 85 1c fe ff ff    	lea    -0x1e4(%ebp),%eax
 84653f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84653f7:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84653fd:	89 04 24             	mov    %eax,(%esp)
 8465400:	e8 4d d7 ce ff       	call   8152b52 <_ZNSt4listI8map_itemSaIS0_EE9push_backERKS0_>
 8465405:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 846540b:	89 04 24             	mov    %eax,(%esp)
 846540e:	e8 1f d7 ce ff       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 8465413:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8465419:	89 44 24 04          	mov    %eax,0x4(%esp)
 846541d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8465423:	89 04 24             	mov    %eax,(%esp)
 8465426:	e8 db d6 ce ff       	call   8152b06 <_ZN9__gnu_cxxneIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 846542b:	84 c0                	test   %al,%al
 846542d:	0f 85 cf fe ff ff    	jne    8465302 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xac4>
 8465433:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465439:	89 04 24             	mov    %eax,(%esp)
 846543c:	e8 4b 46 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8465441:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 8465448:	00 
 8465449:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8465450:	00 
 8465451:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465457:	89 04 24             	mov    %eax,(%esp)
 846545a:	e8 9d 64 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 846545f:	0f b7 85 c4 fa ff ff 	movzwl -0x53c(%ebp),%eax
 8465466:	89 44 24 04          	mov    %eax,0x4(%esp)
 846546a:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465470:	89 04 24             	mov    %eax,(%esp)
 8465473:	e8 2c 4a c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8465478:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 846547e:	89 04 24             	mov    %eax,(%esp)
 8465481:	e8 c6 b6 ca ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 8465486:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 846548c:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8465493:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8465496:	89 44 24 04          	mov    %eax,0x4(%esp)
 846549a:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84654a0:	89 04 24             	mov    %eax,(%esp)
 84654a3:	e8 78 64 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84654a8:	8d 85 3a ff ff ff    	lea    -0xc6(%ebp),%eax
 84654ae:	89 04 24             	mov    %eax,(%esp)
 84654b1:	e8 32 b2 ce ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 84654b6:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84654b9:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84654bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84654c3:	89 04 24             	mov    %eax,(%esp)
 84654c6:	e8 bd d6 ce ff       	call   8152b88 <_ZNSt4listI8map_itemSaIS0_EE5beginEv>
 84654cb:	83 ec 04             	sub    $0x4,%esp
 84654ce:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84654d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84654d5:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 84654db:	89 04 24             	mov    %eax,(%esp)
 84654de:	e8 cb d6 ce ff       	call   8152bae <_ZNSt20_List_const_iteratorI8map_itemEC1ERKSt14_List_iteratorIS0_E>
 84654e3:	8d 45 98             	lea    -0x68(%ebp),%eax
 84654e6:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84654ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 84654f0:	89 04 24             	mov    %eax,(%esp)
 84654f3:	e8 c6 d6 ce ff       	call   8152bbe <_ZNSt4listI8map_itemSaIS0_EE3endEv>
 84654f8:	83 ec 04             	sub    $0x4,%esp
 84654fb:	8d 45 98             	lea    -0x68(%ebp),%eax
 84654fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465502:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 8465508:	89 04 24             	mov    %eax,(%esp)
 846550b:	e8 9e d6 ce ff       	call   8152bae <_ZNSt20_List_const_iteratorI8map_itemEC1ERKSt14_List_iteratorIS0_E>
 8465510:	e9 69 02 00 00       	jmp    846577e <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xf40>
 8465515:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 846551b:	89 04 24             	mov    %eax,(%esp)
 846551e:	e8 e7 d6 ce ff       	call   8152c0a <_ZNKSt20_List_const_iteratorI8map_itemEdeEv>
 8465523:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8465526:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8465529:	8b 40 04             	mov    0x4(%eax),%eax
 846552c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465530:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465536:	89 04 24             	mov    %eax,(%esp)
 8465539:	e8 66 49 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 846553e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8465541:	8b 40 12             	mov    0x12(%eax),%eax
 8465544:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465548:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 846554e:	89 04 24             	mov    %eax,(%esp)
 8465551:	e8 e6 63 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8465556:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8465559:	83 c0 10             	add    $0x10,%eax
 846555c:	89 04 24             	mov    %eax,(%esp)
 846555f:	e8 78 b2 ce ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 8465564:	0f b6 c0             	movzbl %al,%eax
 8465567:	89 44 24 04          	mov    %eax,0x4(%esp)
 846556b:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465571:	89 04 24             	mov    %eax,(%esp)
 8465574:	e8 a7 63 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8465579:	8b 45 dc             	mov    -0x24(%ebp),%eax
 846557c:	83 c0 10             	add    $0x10,%eax
 846557f:	89 04 24             	mov    %eax,(%esp)
 8465582:	e8 79 b2 ce ff       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 8465587:	84 c0                	test   %al,%al
 8465589:	0f 84 b1 00 00 00    	je     8465640 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xe02>
 846558f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8465592:	8b 40 12             	mov    0x12(%eax),%eax
 8465595:	89 c3                	mov    %eax,%ebx
 8465597:	e8 ff 6b c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 846559c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84655a0:	89 04 24             	mov    %eax,(%esp)
 84655a3:	e8 8a a4 ef ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84655a8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84655ab:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84655af:	75 25                	jne    84655d6 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xd98>
 84655b1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84655b4:	83 c0 10             	add    $0x10,%eax
 84655b7:	89 04 24             	mov    %eax,(%esp)
 84655ba:	e8 7b 22 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 84655bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84655c3:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84655c9:	89 04 24             	mov    %eax,(%esp)
 84655cc:	e8 6b 63 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84655d1:	e9 8a 00 00 00       	jmp    8465660 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xe22>
 84655d6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84655d9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84655dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84655df:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 84655e3:	0f b6 d0             	movzbl %al,%edx
 84655e6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84655e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84655ed:	89 04 24             	mov    %eax,(%esp)
 84655f0:	e8 2b bb ce ff       	call   8151120 <_ZNK10CEquipItem15getAvatarPeriodEh>
 84655f5:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 84655fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84655ff:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465605:	89 04 24             	mov    %eax,(%esp)
 8465608:	e8 2f 63 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 846560d:	8d 85 3a ff ff ff    	lea    -0xc6(%ebp),%eax
 8465613:	89 04 24             	mov    %eax,(%esp)
 8465616:	e8 cd b0 ce ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 846561b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 846561e:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 8465622:	0f b7 c0             	movzwl %ax,%eax
 8465625:	8d 95 3a ff ff ff    	lea    -0xc6(%ebp),%edx
 846562b:	89 54 24 08          	mov    %edx,0x8(%esp)
 846562f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465633:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8465636:	89 04 24             	mov    %eax,(%esp)
 8465639:	e8 f8 b8 ce ff       	call   8150f36 <_ZNK10CEquipItem15getAvatarSocketEiR20stAvatarEmblemInfo_t>
 846563e:	eb 20                	jmp    8465660 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xe22>
 8465640:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8465643:	83 c0 10             	add    $0x10,%eax
 8465646:	89 04 24             	mov    %eax,(%esp)
 8465649:	e8 ec 21 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 846564e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465652:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465658:	89 04 24             	mov    %eax,(%esp)
 846565b:	e8 dc 62 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8465660:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8465663:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 8465667:	0f b7 c0             	movzwl %ax,%eax
 846566a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846566e:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465674:	89 04 24             	mov    %eax,(%esp)
 8465677:	e8 28 48 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 846567c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 846567f:	83 c0 21             	add    $0x21,%eax
 8465682:	89 04 24             	mov    %eax,(%esp)
 8465685:	e8 a8 b0 ce ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 846568a:	0f b6 c0             	movzbl %al,%eax
 846568d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465691:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465697:	89 04 24             	mov    %eax,(%esp)
 846569a:	e8 81 62 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 846569f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84656a2:	83 c0 21             	add    $0x21,%eax
 84656a5:	89 04 24             	mov    %eax,(%esp)
 84656a8:	e8 c5 b0 ce ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 84656ad:	0f b7 c0             	movzwl %ax,%eax
 84656b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84656b4:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84656ba:	89 04 24             	mov    %eax,(%esp)
 84656bd:	e8 e2 47 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84656c2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84656c5:	83 c0 10             	add    $0x10,%eax
 84656c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84656cc:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84656d2:	89 04 24             	mov    %eax,(%esp)
 84656d5:	e8 b4 b2 ce ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 84656da:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84656dd:	83 c0 10             	add    $0x10,%eax
 84656e0:	89 04 24             	mov    %eax,(%esp)
 84656e3:	e8 18 b1 ce ff       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 84656e8:	84 c0                	test   %al,%al
 84656ea:	74 4e                	je     846573a <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xefc>
 84656ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84656f3:	00 
 84656f4:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84656fa:	89 04 24             	mov    %eax,(%esp)
 84656fd:	e8 1e 62 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8465702:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 8465709:	00 
 846570a:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465710:	89 04 24             	mov    %eax,(%esp)
 8465713:	e8 24 62 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8465718:	8d 85 3a ff ff ff    	lea    -0xc6(%ebp),%eax
 846571e:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8465725:	00 
 8465726:	89 44 24 04          	mov    %eax,0x4(%esp)
 846572a:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465730:	89 04 24             	mov    %eax,(%esp)
 8465733:	e8 32 b2 ce ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 8465738:	eb 16                	jmp    8465750 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xf12>
 846573a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8465741:	00 
 8465742:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465748:	89 04 24             	mov    %eax,(%esp)
 846574b:	e8 d0 61 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8465750:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8465753:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8465757:	0f b7 c0             	movzwl %ax,%eax
 846575a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846575e:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465764:	89 04 24             	mov    %eax,(%esp)
 8465767:	e8 38 47 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 846576c:	83 45 a8 01          	addl   $0x1,-0x58(%ebp)
 8465770:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8465776:	89 04 24             	mov    %eax,(%esp)
 8465779:	e8 78 d4 ce ff       	call   8152bf6 <_ZNSt20_List_const_iteratorI8map_itemEppEv>
 846577e:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 8465784:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465788:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 846578e:	89 04 24             	mov    %eax,(%esp)
 8465791:	e8 4c d4 ce ff       	call   8152be2 <_ZNKSt20_List_const_iteratorI8map_itemEneERKS1_>
 8465796:	84 c0                	test   %al,%al
 8465798:	0f 85 77 fd ff ff    	jne    8465515 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0xcd7>
 846579e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84657a5:	00 
 84657a6:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84657ac:	89 04 24             	mov    %eax,(%esp)
 84657af:	e8 6c 61 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84657b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84657bb:	00 
 84657bc:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84657c2:	89 04 24             	mov    %eax,(%esp)
 84657c5:	e8 56 61 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84657ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84657d1:	00 
 84657d2:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84657d8:	89 04 24             	mov    %eax,(%esp)
 84657db:	e8 40 61 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84657e0:	8b 45 a8             	mov    -0x58(%ebp),%eax
 84657e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84657e7:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 84657ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 84657f1:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84657f7:	89 04 24             	mov    %eax,(%esp)
 84657fa:	e8 29 b3 ca ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 84657ff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8465806:	00 
 8465807:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 846580d:	89 04 24             	mov    %eax,(%esp)
 8465810:	e8 43 61 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8465815:	8b 45 08             	mov    0x8(%ebp),%eax
 8465818:	8b 00                	mov    (%eax),%eax
 846581a:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 8465820:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465824:	89 04 24             	mov    %eax,(%esp)
 8465827:	e8 22 79 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 846582c:	8b 45 08             	mov    0x8(%ebp),%eax
 846582f:	83 c0 14             	add    $0x14,%eax
 8465832:	89 04 24             	mov    %eax,(%esp)
 8465835:	e8 04 c3 ff ff       	call   8461b3e <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv>
 846583a:	84 c0                	test   %al,%al
 846583c:	74 3d                	je     846587b <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x103d>
 846583e:	8b 45 08             	mov    0x8(%ebp),%eax
 8465841:	89 04 24             	mov    %eax,(%esp)
 8465844:	e8 79 24 00 00       	call   8467cc2 <_ZN8WongWork11CDeathTower14_onFinishStageEv>
 8465849:	8b 45 08             	mov    0x8(%ebp),%eax
 846584c:	83 c0 14             	add    $0x14,%eax
 846584f:	89 04 24             	mov    %eax,(%esp)
 8465852:	e8 ab 42 00 00       	call   8469b02 <_ZN8WongWork11CDeathTower6CStage15getCurrentStageEv>
 8465857:	89 c3                	mov    %eax,%ebx
 8465859:	8b 45 08             	mov    0x8(%ebp),%eax
 846585c:	83 c0 0c             	add    $0xc,%eax
 846585f:	89 04 24             	mov    %eax,(%esp)
 8465862:	e8 4d 42 00 00       	call   8469ab4 <_ZN8WongWork11CDeathTower11CDungeonMgr11getEndStageEv>
 8465867:	39 c3                	cmp    %eax,%ebx
 8465869:	0f 94 c0             	sete   %al
 846586c:	84 c0                	test   %al,%al
 846586e:	74 0b                	je     846587b <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x103d>
 8465870:	8b 45 08             	mov    0x8(%ebp),%eax
 8465873:	89 04 24             	mov    %eax,(%esp)
 8465876:	e8 85 25 00 00       	call   8467e00 <_ZN8WongWork11CDeathTower21_onPrepareFinishTowerEv>
 846587b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8465880:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8465886:	89 04 24             	mov    %eax,(%esp)
 8465889:	e8 12 42 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 846588e:	eb 30                	jmp    84658c0 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1082>
 8465890:	89 d3                	mov    %edx,%ebx
 8465892:	89 c6                	mov    %eax,%esi
 8465894:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 846589a:	89 04 24             	mov    %eax,(%esp)
 846589d:	e8 fe 41 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 84658a2:	89 f0                	mov    %esi,%eax
 84658a4:	89 da                	mov    %ebx,%edx
 84658a6:	eb 00                	jmp    84658a8 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x106a>
 84658a8:	89 d3                	mov    %edx,%ebx
 84658aa:	89 c6                	mov    %eax,%esi
 84658ac:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 84658b2:	89 04 24             	mov    %eax,(%esp)
 84658b5:	e8 92 52 ce ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 84658ba:	89 f0                	mov    %esi,%eax
 84658bc:	89 da                	mov    %ebx,%edx
 84658be:	eb 10                	jmp    84658d0 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1092>
 84658c0:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 84658c6:	89 04 24             	mov    %eax,(%esp)
 84658c9:	e8 7e 52 ce ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 84658ce:	eb 18                	jmp    84658e8 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x10aa>
 84658d0:	89 d3                	mov    %edx,%ebx
 84658d2:	89 c6                	mov    %eax,%esi
 84658d4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84658da:	89 04 24             	mov    %eax,(%esp)
 84658dd:	e8 8c c6 ce ff       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 84658e2:	89 f0                	mov    %esi,%eax
 84658e4:	89 da                	mov    %ebx,%edx
 84658e6:	eb 10                	jmp    84658f8 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x10ba>
 84658e8:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84658ee:	89 04 24             	mov    %eax,(%esp)
 84658f1:	e8 78 c6 ce ff       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 84658f6:	eb 18                	jmp    8465910 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x10d2>
 84658f8:	89 d3                	mov    %edx,%ebx
 84658fa:	89 c6                	mov    %eax,%esi
 84658fc:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8465902:	89 04 24             	mov    %eax,(%esp)
 8465905:	e8 cc fa c8 ff       	call   80f53d6 <_ZNSt6vectorImSaImEED1Ev>
 846590a:	89 f0                	mov    %esi,%eax
 846590c:	89 da                	mov    %ebx,%edx
 846590e:	eb 10                	jmp    8465920 <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x10e2>
 8465910:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8465916:	89 04 24             	mov    %eax,(%esp)
 8465919:	e8 b8 fa c8 ff       	call   80f53d6 <_ZNSt6vectorImSaImEED1Ev>
 846591e:	eb 1e                	jmp    846593e <_ZN8WongWork11CDeathTower17handleKillMonsterEP5CUserttRK15MSG_MONSTER_DIEPi+0x1100>
 8465920:	89 d3                	mov    %edx,%ebx
 8465922:	89 c6                	mov    %eax,%esi
 8465924:	8d 85 d0 fa ff ff    	lea    -0x530(%ebp),%eax
 846592a:	89 04 24             	mov    %eax,(%esp)
 846592d:	e8 7c bc ce ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8465932:	89 f0                	mov    %esi,%eax
 8465934:	89 da                	mov    %ebx,%edx
 8465936:	89 04 24             	mov    %eax,(%esp)
 8465939:	e8 12 de 67 00       	call   8ae3750 <_Unwind_Resume>
 846593e:	8d 85 d0 fa ff ff    	lea    -0x530(%ebp),%eax
 8465944:	89 04 24             	mov    %eax,(%esp)
 8465947:	e8 62 bc ce ff       	call   81515ae <_ZN11map_monsterD1Ev>
 846594c:	89 d8                	mov    %ebx,%eax
 846594e:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8465951:	83 c4 00             	add    $0x0,%esp
 8465954:	5b                   	pop    %ebx
 8465955:	5e                   	pop    %esi
 8465956:	5f                   	pop    %edi
 8465957:	5d                   	pop    %ebp
 8465958:	c3                   	ret
 8465959:	90                   	nop

```

```c
// WongWork::CDeathTower::handleKillMonster @ 0x846483e

/* WongWork::CDeathTower::handleKillMonster(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE
   const&, int*) */

undefined4 __thiscall
WongWork::CDeathTower::handleKillMonster
          (CDeathTower *this,CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4,
          int *param_5)

{
  ulonglong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  CHackAnalyzer *pCVar6;
  CDungeon *pCVar7;
  int *piVar8;
  CDeathTowerWinPointEvent *this_00;
  undefined4 *puVar9;
  CDataManager *pCVar10;
  int iVar11;
  undefined4 uVar12;
  longdouble lVar13;
  map_monster local_534 [8];
  char local_52c;
  uint local_528;
  int local_508;
  map_item local_1e8 [8];
  ushort local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  Inven_Item local_191 [2];
  undefined4 local_18f;
  stGenerateResult_t local_154 [48];
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c [2];
  uint local_114 [7];
  undefined4 local_f8;
  undefined4 local_f4;
  uint local_f0;
  __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
  local_ec [4];
  __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
  local_e8 [4];
  ulong local_e4;
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_e0 [12];
  _List_const_iterator<map_item> local_d4 [4];
  _List_const_iterator<map_item> local_d0 [6];
  stAvatarEmblemInfo_t local_ca [30];
  int local_ac;
  CPacketHandler local_a8 [12];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_9c [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_98 [4];
  list<map_item,std::allocator<map_item>> local_94 [8];
  vector<unsigned_long,std::allocator<unsigned_long>> local_8c [12];
  __normal_iterator local_80 [4];
  __normal_iterator local_7c [4];
  __normal_iterator local_78 [4];
  __normal_iterator local_74 [4];
  _List_iterator local_70 [4];
  _List_iterator local_6c [4];
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  char local_55;
  uint local_54;
  CAICharacter *local_50;
  CMonster *local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  CUserCharacInfo *local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  int local_28;
  CEquipItem *local_24;
  CEquipItem *local_20;
  
  iVar4 = CStage::getState((CStage *)(this + 0x14));
  if (iVar4 != 1) {
    CUser::SendCmdErrorPacket(param_1,0x2a,0x13);
    return 0;
  }
  iVar4 = stMapMonsterKillChecker_t::getUseSkillMaterialTime
                    ((stMapMonsterKillChecker_t *)(this + 0xb58));
  if (iVar4 == 0) {
    uVar5 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    uVar5 = stMapMonsterKillChecker_t::dieMonster
                      ((stMapMonsterKillChecker_t *)(this + 0xb58),uVar5,1000);
    if (uVar5 < 3) goto LAB_084648e4;
    bVar3 = true;
  }
  else {
LAB_084648e4:
    bVar3 = false;
  }
  if (bVar3) {
    local_55 = '\0';
    if ((param_1 == (CUser *)0x0) ||
       (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar4 < 0x1e)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_55 = '\x01';
    }
    else {
      if ((param_1 == (CUser *)0x0) ||
         (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar4 < 0x19)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        CUser::GetPremiumInfo(param_1);
        CUserPremium::GetPremiumInfoList((int)local_e0);
        local_54 = 0;
        while (uVar5 = std::
                       vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                       ::size(local_e0), local_54 < uVar5) {
          piVar8 = (int *)std::
                          vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                          ::operator[](local_e0,local_54);
          if (((*piVar8 < 0x17) ||
              (piVar8 = (int *)std::
                               vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                               ::operator[](local_e0,local_54), 0x1b < *piVar8)) ||
             (iVar4 = std::
                      vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>
                      ::operator[](local_e0,local_54), *(int *)(iVar4 + 0x10) != 1)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_55 = '\x01';
            break;
          }
          local_54 = local_54 + 1;
        }
        std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
                  (local_e0);
      }
    }
    if (local_55 != '\0') {
      stMapMonsterKillChecker_t::initMonsterInfo((stMapMonsterKillChecker_t *)(this + 0xb58));
      pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xd6,1,0,0);
    }
  }
  map_monster::map_monster(local_534);
                    /* try { // try from 08464a94 to 08464ad0 has its CatchHandler @ 08465920 */
  local_68 = CStage::killMonster((CStage *)(this + 0x14),(uint)param_2,local_534);
  if (local_68 == 0) {
    uVar12 = 0;
    goto LAB_0846593e;
  }
  local_64 = CParty::getMemberLevelGap(*(CParty **)this);
  local_60 = 0;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::vector(local_8c);
                    /* try { // try from 08464ada to 08464ade has its CatchHandler @ 084658f8 */
  std::list<map_item,std::allocator<map_item>>::list(local_94);
                    /* try { // try from 08464ae8 to 08464aec has its CatchHandler @ 084658d0 */
  stGenerateResult_t::stGenerateResult_t(local_154);
  uVar5 = local_528;
  if (param_5 != (int *)0x0) {
    *param_5 = local_528;
  }
  if (local_52c < '\x05') {
    local_e4 = 0xfffffffe;
    iVar4 = G_CDataManager();
    local_4c = (CMonster *)CDataManager::find_monster(iVar4);
    if (local_4c == (CMonster *)0x0) {
LAB_08464be2:
      bVar3 = false;
    }
    else {
      pCVar7 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      cVar2 = CDungeon::hasTowerItemDrop(pCVar7);
      if (cVar2 == '\0') goto LAB_08464be2;
      bVar3 = true;
    }
    if (bVar3) {
      local_e4 = CMonster::deathTowerSpecifyItemDrop(local_4c);
    }
    if (local_e4 != 0xfffffffe) {
      std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back(local_8c,&local_e4);
    }
  }
  else {
                    /* try { // try from 08464b15 to 08465440 has its CatchHandler @ 084658a8 */
    iVar4 = G_CDataManager();
    local_50 = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar4 + 0x869c),uVar5);
    if (local_50 != (CAICharacter *)0x0) {
      pCVar7 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      cVar2 = CDungeon::hasTowerItemDrop(pCVar7);
      if (cVar2 != '\0') {
        CAICharacter::deathTowerSpecifyItemDrop(local_50,(vector *)local_8c);
      }
      if ((local_508 == 100) || (local_508 == 200)) {
        local_60 = CAICharacter::getPvPWinPoint(local_50);
      }
    }
  }
  cVar2 = std::vector<unsigned_long,std::allocator<unsigned_long>>::empty();
  if (cVar2 != '\x01') {
    std::vector<unsigned_long,std::allocator<unsigned_long>>::begin();
    __gnu_cxx::
    __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
    ::__normal_iterator<unsigned_long*>(local_e8,local_80);
    std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
    __gnu_cxx::
    __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
    ::__normal_iterator<unsigned_long*>(local_ec,local_7c);
    while (bVar3 = __gnu_cxx::operator!=(local_e8,local_ec), bVar3) {
      piVar8 = (int *)__gnu_cxx::
                      __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
                      ::operator*(local_e8);
      iVar4 = *piVar8;
      iVar11 = G_CDataManager();
      local_48 = CItemList::find_item(*(CItemList **)(iVar11 + 0xc),iVar4);
      if (local_48 != 0) {
        Inven_Item::Inven_Item(local_191);
        puVar9 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
                 ::operator*(local_e8);
        local_18f = *puVar9;
        iVar4 = G_CDataManager();
        CItemList::create_item(*(CItemList **)(iVar4 + 0xc),1,local_191,1);
        local_44 = CParty::get_member_count(*(CParty **)this);
        for (local_40 = 0; local_40 < local_44; local_40 = local_40 + 1) {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)local_154,local_191);
        }
      }
      __gnu_cxx::
      __normal_iterator<unsigned_long_const*,std::vector<unsigned_long,std::allocator<unsigned_long>>>
      ::operator++(local_e8);
    }
  }
  for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
    local_38 = (CUserCharacInfo *)0x0;
    local_38 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_3c);
    if ((local_38 == (CUserCharacInfo *)0x0) ||
       (cVar2 = CParty::checkValidUser(*(CParty **)this,local_3c), cVar2 != '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((!bVar3) && (*(int *)(*(int *)this + 0xcd8) != 1)) {
      local_f0 = 0;
      iVar4 = CUserCharacInfo::get_charac_level(local_38);
      pCVar10 = (CDataManager *)G_CDataManager();
      CDataManager::get_mob_reward(pCVar10,iVar4,&local_f0);
      local_f0 = CParty::getMonsterTotalExp(*(CParty **)this,local_f0,'\0',0,1.0,1.0,false);
      QuickParty::RewardData_Param::RewardData_Param((RewardData_Param *)&local_f8,*(CParty **)this)
      ;
      QuickParty::RewardData_Result::RewardData_Result((RewardData_Result *)local_114);
      local_114[0] = local_f0;
      CParty::set_random_reward(*(undefined4 *)this,0,local_f8,local_f4,local_114);
      local_f0 = local_114[0];
      if (local_52c == '\x05') {
        uVar1 = (ulonglong)local_114[0];
        iVar4 = G_CDataManager();
        local_f0 = (uint)ROUND(*(float *)(iVar4 + 0x5198) * (float)uVar1);
      }
      uVar1 = (ulonglong)local_f0;
      iVar4 = G_CDataManager();
      local_f0 = (uint)ROUND(*(float *)(iVar4 + 0x5e1c) * (float)uVar1);
      STGainedEachExpData::STGainedEachExpData((STGainedEachExpData *)local_11c);
      local_11c[0] = local_f0;
      local_f0 = CParty::sumGainedEachExp
                           (*(CParty **)this,(CUser *)local_38,(STGainedEachExpData *)local_11c);
      if (local_60 != 0) {
        this_00 = (CDeathTowerWinPointEvent *)
                  CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x27);
        lVar13 = (longdouble)CDeathTowerWinPointEvent::getBonusRate(this_00);
        local_2c = (float)lVar13;
        if (local_2c == 0.0) {
          CUser::gainWinPoint((CUser *)local_38,local_60,2);
        }
        else {
          CUser::gainWinPoint((CUser *)local_38,(int)ROUND((float)local_60 * local_2c),2);
        }
      }
      CUserCharacInfo::calcHelpAbuseRatio((uint)local_38,SUB41(local_f0,0));
      local_120 = 0;
      local_34 = 0xb;
      if (local_52c == '\x05') {
        local_34 = 0xc;
      }
      local_124 = 0;
      cVar2 = CUser::gain_exp_sp((CUser *)local_38,local_f0,&local_120,&local_124,local_34,local_528
                                 ,0);
      if (cVar2 != '\0') {
        CUser::SendNotiPacket((CUser *)local_38,2,2,1);
      }
      uVar5 = local_f0;
      uVar12 = CUserCharacInfo::getCurCharacExp(local_38);
      cUserHistoryLog::KillMonster
                ((cUserHistoryLog *)(local_38 + 0x79700),local_528,*(undefined4 *)(param_4 + 0xa1e),
                 *(undefined4 *)(param_4 + 0xa1a),*(undefined2 *)(param_4 + 0xa24),
                 *(undefined2 *)(param_4 + 0xa26),param_4,(int)local_52c,local_52c == '\x05',uVar12,
                 uVar5,local_34);
      uVar5 = local_528;
      local_30 = 1;
      if (('\x04' < local_52c) && (local_52c < '\t')) {
        local_30 = 2;
      }
      pCVar7 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      uVar12 = CDungeon::get_index(pCVar7);
      CUser::CheckQuestMonster((CUser *)local_38,uVar12,uVar5,local_30);
    }
  }
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_98,local_78);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_9c,local_74);
  while (bVar3 = __gnu_cxx::operator!=(local_98,local_9c), bVar3) {
    map_item::map_item(local_1e8);
    local_1e8[0] = (map_item)0x1;
    local_1e0 = param_3;
    local_1dc = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
             ::operator*(local_98);
    local_1d8 = *puVar9;
    local_1d4 = puVar9[1];
    local_1d0 = puVar9[2];
    local_1cc = puVar9[3];
    local_1c8 = puVar9[4];
    local_1c4 = puVar9[5];
    local_1c0 = puVar9[6];
    local_1bc = puVar9[7];
    local_1b8 = puVar9[8];
    local_1b4 = puVar9[9];
    local_1b0 = puVar9[10];
    local_1ac = puVar9[0xb];
    local_1a8 = puVar9[0xc];
    local_1a4 = puVar9[0xd];
    local_1a0 = puVar9[0xe];
    local_19c = *(undefined1 *)(puVar9 + 0xf);
    CStage::dropItem((CStage *)(this + 0x14),local_1e8);
    std::list<map_item,std::allocator<map_item>>::push_back(local_94,local_1e8);
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_98);
  }
  CPacketHandler::CPacketHandler(local_a8);
                    /* try { // try from 0846545a to 0846587a has its CatchHandler @ 08465890 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_a8,0,0x26);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,(uint)param_2);
  local_ac = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_a8);
  local_5c = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
  stAvatarEmblemInfo_t::init(local_ca);
  std::list<map_item,std::allocator<map_item>>::begin();
  std::_List_const_iterator<map_item>::_List_const_iterator(local_d0,local_70);
  std::list<map_item,std::allocator<map_item>>::end();
  std::_List_const_iterator<map_item>::_List_const_iterator(local_d4,local_6c);
  while (cVar2 = std::_List_const_iterator<map_item>::operator!=(local_d0,local_d4), cVar2 != '\0')
  {
    local_28 = std::_List_const_iterator<map_item>::operator*(local_d0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,*(int *)(local_28 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,*(int *)(local_28 + 0x12));
    uVar5 = Inven_Item::GetItemAttr((Inven_Item *)(local_28 + 0x10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,uVar5 & 0xff);
    cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)(local_28 + 0x10));
    if (cVar2 == '\0') {
      iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_28 + 0x10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,iVar4);
    }
    else {
      iVar4 = *(int *)(local_28 + 0x12);
      pCVar10 = (CDataManager *)G_CDataManager();
      local_24 = (CEquipItem *)CDataManager::find_item(pCVar10,iVar4);
      if (local_24 == (CEquipItem *)0x0) {
        iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_28 + 0x10));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,iVar4);
      }
      else {
        local_20 = local_24;
        iVar4 = CEquipItem::getAvatarPeriod(local_24,(uchar)*(undefined2 *)(local_28 + 0x1b));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,iVar4 * 0x15180);
        stAvatarEmblemInfo_t::init(local_ca);
        CEquipItem::getAvatarSocket(local_20,(uint)*(ushort *)(local_28 + 0x1b),local_ca);
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,(uint)*(ushort *)(local_28 + 0x1b))
    ;
    uVar5 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_28 + 0x21));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,uVar5 & 0xff);
    uVar5 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_28 + 0x21));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,uVar5 & 0xffff);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_a8,(Inven_Item *)(local_28 + 0x10));
    cVar2 = Inven_Item::isAvatarItemType((Inven_Item *)(local_28 + 0x10));
    if (cVar2 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_a8,0x1e);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_a8,(char *)local_ca,0x1e);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_a8,(uint)*(ushort *)(local_28 + 8));
    local_5c = local_5c + 1;
    std::_List_const_iterator<map_item>::operator++(local_d0);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_a8,&local_ac,local_5c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_a8,true);
  CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_a8);
  cVar2 = CStage::checkClearStage();
  if (cVar2 != '\0') {
    _onFinishStage(this);
    iVar4 = CStage::getCurrentStage((CStage *)(this + 0x14));
    iVar11 = CDungeonMgr::getEndStage((CDungeonMgr *)(this + 0xc));
    if (iVar4 == iVar11) {
      _onPrepareFinishTower(this);
    }
  }
  uVar12 = 1;
                    /* try { // try from 08465889 to 0846588d has its CatchHandler @ 084658a8 */
  CPacketHandler::~CPacketHandler(local_a8);
                    /* try { // try from 084658c9 to 084658cd has its CatchHandler @ 084658d0 */
  stGenerateResult_t::~stGenerateResult_t(local_154);
                    /* try { // try from 084658f1 to 084658f5 has its CatchHandler @ 084658f8 */
  std::list<map_item,std::allocator<map_item>>::~list(local_94);
                    /* try { // try from 08465919 to 0846591d has its CatchHandler @ 08465920 */
  std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector(local_8c);
LAB_0846593e:
  map_monster::~map_monster(local_534);
  return uVar12;
}

```

---

## handleLeaveUser

```asm
// === 08465ac2 WongWork::CDeathTower::handleLeaveUser  [0x08465ac2-0x8465c93] ===
 8465ac2:	55                   	push   %ebp
 8465ac3:	89 e5                	mov    %esp,%ebp
 8465ac5:	56                   	push   %esi
 8465ac6:	53                   	push   %ebx
 8465ac7:	83 ec 20             	sub    $0x20,%esp
 8465aca:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8465ad1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8465ad8:	eb 76                	jmp    8465b50 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser+0x8e>
 8465ada:	8b 45 08             	mov    0x8(%ebp),%eax
 8465add:	8b 00                	mov    (%eax),%eax
 8465adf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8465ae2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465ae6:	89 04 24             	mov    %eax,(%esp)
 8465ae9:	e8 7a fd cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8465aee:	84 c0                	test   %al,%al
 8465af0:	74 5a                	je     8465b4c <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser+0x8a>
 8465af2:	8b 45 08             	mov    0x8(%ebp),%eax
 8465af5:	8b 00                	mov    (%eax),%eax
 8465af7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8465afa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465afe:	89 04 24             	mov    %eax,(%esp)
 8465b01:	e8 5e fc cd ff       	call   8145764 <_ZN6CParty8get_userEi>
 8465b06:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8465b09:	0f 94 c0             	sete   %al
 8465b0c:	84 c0                	test   %al,%al
 8465b0e:	74 3c                	je     8465b4c <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser+0x8a>
 8465b10:	8b 45 08             	mov    0x8(%ebp),%eax
 8465b13:	8b 00                	mov    (%eax),%eax
 8465b15:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8465b1c:	00 
 8465b1d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8465b20:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465b24:	89 04 24             	mov    %eax,(%esp)
 8465b27:	e8 e8 65 13 00       	call   859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>
 8465b2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8465b2f:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8465b35:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8465b3c:	00 
 8465b3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8465b40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465b44:	89 14 24             	mov    %edx,(%esp)
 8465b47:	e8 0e 40 00 00       	call   8469b5a <_ZN8WongWork11CDeathTower9CPlayData14setMemberAliveEib>
 8465b4c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8465b50:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8465b54:	0f 9e c0             	setle  %al
 8465b57:	84 c0                	test   %al,%al
 8465b59:	0f 85 7b ff ff ff    	jne    8465ada <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser+0x18>
 8465b5f:	e8 43 48 c7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8465b64:	8b 55 0c             	mov    0xc(%ebp),%edx
 8465b67:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465b6b:	89 04 24             	mov    %eax,(%esp)
 8465b6e:	e8 a3 0e 26 00       	call   86c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>
 8465b73:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465b76:	89 04 24             	mov    %eax,(%esp)
 8465b79:	e8 0e 3f 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8465b7e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8465b85:	00 
 8465b86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8465b8d:	00 
 8465b8e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465b91:	89 04 24             	mov    %eax,(%esp)
 8465b94:	e8 63 5d c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8465b99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8465ba0:	00 
 8465ba1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465ba4:	89 04 24             	mov    %eax,(%esp)
 8465ba7:	e8 74 5d c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8465bac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8465bb3:	00 
 8465bb4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465bb7:	89 04 24             	mov    %eax,(%esp)
 8465bba:	e8 e5 42 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8465bbf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465bc2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8465bc9:	00 
 8465bca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465bce:	8b 45 0c             	mov    0xc(%ebp),%eax
 8465bd1:	89 04 24             	mov    %eax,(%esp)
 8465bd4:	e8 75 48 1f 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 8465bd9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8465be0:	00 
 8465be1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465be4:	89 04 24             	mov    %eax,(%esp)
 8465be7:	e8 6c 5d c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8465bec:	e8 b6 47 c7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8465bf1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8465bf4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8465bf8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8465bfb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465bff:	89 04 24             	mov    %eax,(%esp)
 8465c02:	e8 55 ed cc ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 8465c07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8465c0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465c0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8465c11:	89 04 24             	mov    %eax,(%esp)
 8465c14:	e8 d9 da ff ff       	call   84636f2 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser>
 8465c19:	8b 45 08             	mov    0x8(%ebp),%eax
 8465c1c:	8b 00                	mov    (%eax),%eax
 8465c1e:	89 04 24             	mov    %eax,(%esp)
 8465c21:	e8 44 45 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8465c26:	85 c0                	test   %eax,%eax
 8465c28:	7e 16                	jle    8465c40 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser+0x17e>
 8465c2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8465c2d:	89 04 24             	mov    %eax,(%esp)
 8465c30:	e8 53 15 00 00       	call   8467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>
 8465c35:	84 c0                	test   %al,%al
 8465c37:	74 07                	je     8465c40 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser+0x17e>
 8465c39:	b8 01 00 00 00       	mov    $0x1,%eax
 8465c3e:	eb 05                	jmp    8465c45 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser+0x183>
 8465c40:	b8 00 00 00 00       	mov    $0x0,%eax
 8465c45:	84 c0                	test   %al,%al
 8465c47:	74 16                	je     8465c5f <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser+0x19d>
 8465c49:	8b 45 08             	mov    0x8(%ebp),%eax
 8465c4c:	89 04 24             	mov    %eax,(%esp)
 8465c4f:	e8 6e 20 00 00       	call   8467cc2 <_ZN8WongWork11CDeathTower14_onFinishStageEv>
 8465c54:	8b 45 08             	mov    0x8(%ebp),%eax
 8465c57:	89 04 24             	mov    %eax,(%esp)
 8465c5a:	e8 a1 21 00 00       	call   8467e00 <_ZN8WongWork11CDeathTower21_onPrepareFinishTowerEv>
 8465c5f:	bb 01 00 00 00       	mov    $0x1,%ebx
 8465c64:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465c67:	89 04 24             	mov    %eax,(%esp)
 8465c6a:	e8 31 3e 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465c6f:	89 d8                	mov    %ebx,%eax
 8465c71:	83 c4 20             	add    $0x20,%esp
 8465c74:	5b                   	pop    %ebx
 8465c75:	5e                   	pop    %esi
 8465c76:	5d                   	pop    %ebp
 8465c77:	c3                   	ret
 8465c78:	89 d3                	mov    %edx,%ebx
 8465c7a:	89 c6                	mov    %eax,%esi
 8465c7c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8465c7f:	89 04 24             	mov    %eax,(%esp)
 8465c82:	e8 19 3e 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465c87:	89 f0                	mov    %esi,%eax
 8465c89:	89 da                	mov    %ebx,%edx
 8465c8b:	89 04 24             	mov    %eax,(%esp)
 8465c8e:	e8 bd da 67 00       	call   8ae3750 <_Unwind_Resume>
 8465c93:	90                   	nop

```

```c
// WongWork::CDeathTower::handleLeaveUser @ 0x8465ac2

/* WongWork::CDeathTower::handleLeaveUser(CUser*) */

undefined4 __thiscall WongWork::CDeathTower::handleLeaveUser(CDeathTower *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CUser *pCVar3;
  GameWorld *pGVar4;
  int iVar5;
  CPacketHandler local_1c [12];
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = CParty::checkValidUser(*(CParty **)this,local_10);
    if (cVar2 != '\0') {
      pCVar3 = (CUser *)CParty::get_user(*(CParty **)this,local_10);
      if (pCVar3 == param_1) {
        CParty::leave_user(*(CParty **)this,param_1,2);
        CPlayData::setMemberAlive((CPlayData *)(this + 0x110),local_10,false);
      }
    }
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  GameWorld::out_from_dungeon(pGVar4,param_1);
  CPacketHandler::CPacketHandler(local_1c);
                    /* try { // try from 08465b94 to 08465c5e has its CatchHandler @ 08465c78 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
  CUser::make_basic_info(param_1,(char *)local_1c,'\0');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  pGVar4 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(pGVar4,(PacketGuard *)local_1c,param_1);
  onLeaveUser(this,param_1);
  iVar5 = CParty::get_member_count(*(CParty **)this);
  if (0 < iVar5) {
    cVar2 = _checkMemberDie(this);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08465c45;
    }
  }
  bVar1 = false;
LAB_08465c45:
  if (bVar1) {
    _onFinishStage(this);
    _onPrepareFinishTower(this);
  }
  CPacketHandler::~CPacketHandler(local_1c);
  return 1;
}

```

---

## handleMoveMap

```asm
// === 08465c94 WongWork::CDeathTower::handleMoveMap  [0x08465c94-0x8466023] ===
 8465c94:	55                   	push   %ebp
 8465c95:	89 e5                	mov    %esp,%ebp
 8465c97:	56                   	push   %esi
 8465c98:	53                   	push   %ebx
 8465c99:	83 ec 60             	sub    $0x60,%esp
 8465c9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8465c9f:	89 04 24             	mov    %eax,(%esp)
 8465ca2:	e8 e1 14 00 00       	call   8467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>
 8465ca7:	84 c0                	test   %al,%al
 8465ca9:	74 6a                	je     8465d15 <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x81>
 8465cab:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8465cae:	89 04 24             	mov    %eax,(%esp)
 8465cb1:	e8 d6 3d 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8465cb6:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8465cbd:	00 
 8465cbe:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 8465cc5:	00 
 8465cc6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8465cc9:	89 04 24             	mov    %eax,(%esp)
 8465ccc:	e8 7b a1 ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 8465cd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8465cd4:	8b 00                	mov    (%eax),%eax
 8465cd6:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8465cd9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465cdd:	89 04 24             	mov    %eax,(%esp)
 8465ce0:	e8 69 74 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8465ce5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8465cea:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8465ced:	89 04 24             	mov    %eax,(%esp)
 8465cf0:	e8 ab 3d 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465cf5:	e9 21 03 00 00       	jmp    846601b <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x387>
 8465cfa:	89 d3                	mov    %edx,%ebx
 8465cfc:	89 c6                	mov    %eax,%esi
 8465cfe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8465d01:	89 04 24             	mov    %eax,(%esp)
 8465d04:	e8 97 3d 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465d09:	89 f0                	mov    %esi,%eax
 8465d0b:	89 da                	mov    %ebx,%edx
 8465d0d:	89 04 24             	mov    %eax,(%esp)
 8465d10:	e8 3b da 67 00       	call   8ae3750 <_Unwind_Resume>
 8465d15:	8b 45 08             	mov    0x8(%ebp),%eax
 8465d18:	83 c0 14             	add    $0x14,%eax
 8465d1b:	89 04 24             	mov    %eax,(%esp)
 8465d1e:	e8 f5 3d 00 00       	call   8469b18 <_ZN8WongWork11CDeathTower6CStage8getStateEv>
 8465d23:	83 f8 01             	cmp    $0x1,%eax
 8465d26:	0f 9e c0             	setle  %al
 8465d29:	84 c0                	test   %al,%al
 8465d2b:	74 6a                	je     8465d97 <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x103>
 8465d2d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8465d30:	89 04 24             	mov    %eax,(%esp)
 8465d33:	e8 54 3d 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8465d38:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8465d3f:	00 
 8465d40:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 8465d47:	00 
 8465d48:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8465d4b:	89 04 24             	mov    %eax,(%esp)
 8465d4e:	e8 f9 a0 ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 8465d53:	8b 45 08             	mov    0x8(%ebp),%eax
 8465d56:	8b 00                	mov    (%eax),%eax
 8465d58:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8465d5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465d5f:	89 04 24             	mov    %eax,(%esp)
 8465d62:	e8 e7 73 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8465d67:	bb 00 00 00 00       	mov    $0x0,%ebx
 8465d6c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8465d6f:	89 04 24             	mov    %eax,(%esp)
 8465d72:	e8 29 3d 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465d77:	e9 9f 02 00 00       	jmp    846601b <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x387>
 8465d7c:	89 d3                	mov    %edx,%ebx
 8465d7e:	89 c6                	mov    %eax,%esi
 8465d80:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8465d83:	89 04 24             	mov    %eax,(%esp)
 8465d86:	e8 15 3d 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465d8b:	89 f0                	mov    %esi,%eax
 8465d8d:	89 da                	mov    %ebx,%edx
 8465d8f:	89 04 24             	mov    %eax,(%esp)
 8465d92:	e8 b9 d9 67 00       	call   8ae3750 <_Unwind_Resume>
 8465d97:	8b 45 08             	mov    0x8(%ebp),%eax
 8465d9a:	83 c0 0c             	add    $0xc,%eax
 8465d9d:	89 04 24             	mov    %eax,(%esp)
 8465da0:	e8 0f 3d 00 00       	call   8469ab4 <_ZN8WongWork11CDeathTower11CDungeonMgr11getEndStageEv>
 8465da5:	8b 55 08             	mov    0x8(%ebp),%edx
 8465da8:	83 c2 14             	add    $0x14,%edx
 8465dab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465daf:	89 14 24             	mov    %edx,(%esp)
 8465db2:	e8 23 ba ff ff       	call   84617da <_ZN8WongWork11CDeathTower6CStage13moveNextStageEj>
 8465db7:	84 c0                	test   %al,%al
 8465db9:	0f 84 f5 01 00 00    	je     8465fb4 <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x320>
 8465dbf:	8b 45 08             	mov    0x8(%ebp),%eax
 8465dc2:	83 c0 14             	add    $0x14,%eax
 8465dc5:	89 04 24             	mov    %eax,(%esp)
 8465dc8:	e8 35 3d 00 00       	call   8469b02 <_ZN8WongWork11CDeathTower6CStage15getCurrentStageEv>
 8465dcd:	8b 55 08             	mov    0x8(%ebp),%edx
 8465dd0:	83 c2 0c             	add    $0xc,%edx
 8465dd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465dd7:	89 14 24             	mov    %edx,(%esp)
 8465dda:	e8 0f a8 ff ff       	call   84605ee <_ZN8WongWork11CDeathTower11CDungeonMgr11getStageMapEj>
 8465ddf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8465de2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8465de6:	75 2c                	jne    8465e14 <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x180>
 8465de8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8465def:	e8 0c fa 2b 00       	call   8725800 <__cxa_allocate_exception>
 8465df4:	89 c2                	mov    %eax,%edx
 8465df6:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 8465dfc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8465e03:	00 
 8465e04:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8465e0b:	08 
 8465e0c:	89 04 24             	mov    %eax,(%esp)
 8465e0f:	e8 3c ee 2b 00       	call   8724c50 <__cxa_throw>
 8465e14:	8b 45 08             	mov    0x8(%ebp),%eax
 8465e17:	83 c0 14             	add    $0x14,%eax
 8465e1a:	89 04 24             	mov    %eax,(%esp)
 8465e1d:	e8 ca b6 ff ff       	call   84614ec <_ZN8WongWork11CDeathTower6CStage5resetEv>
 8465e22:	8b 45 08             	mov    0x8(%ebp),%eax
 8465e25:	8d 48 0c             	lea    0xc(%eax),%ecx
 8465e28:	8b 45 08             	mov    0x8(%ebp),%eax
 8465e2b:	8d 50 14             	lea    0x14(%eax),%edx
 8465e2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8465e31:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8465e35:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8465e38:	89 44 24 08          	mov    %eax,0x8(%esp)
 8465e3c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8465e40:	89 14 24             	mov    %edx,(%esp)
 8465e43:	e8 ec a7 ff ff       	call   8460634 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_>
 8465e48:	83 f0 01             	xor    $0x1,%eax
 8465e4b:	84 c0                	test   %al,%al
 8465e4d:	0f 84 c5 00 00 00    	je     8465f18 <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x284>
 8465e53:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8465e5a:	e8 a1 f9 2b 00       	call   8725800 <__cxa_allocate_exception>
 8465e5f:	89 c2                	mov    %eax,%edx
 8465e61:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 8465e67:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8465e6e:	00 
 8465e6f:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8465e76:	08 
 8465e77:	89 04 24             	mov    %eax,(%esp)
 8465e7a:	e8 d1 ed 2b 00       	call   8724c50 <__cxa_throw>
 8465e7f:	83 fa 01             	cmp    $0x1,%edx
 8465e82:	74 08                	je     8465e8c <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x1f8>
 8465e84:	89 04 24             	mov    %eax,(%esp)
 8465e87:	e8 c4 d8 67 00       	call   8ae3750 <_Unwind_Resume>
 8465e8c:	89 04 24             	mov    %eax,(%esp)
 8465e8f:	e8 4c fe 2b 00       	call   8725ce0 <__cxa_begin_catch>
 8465e94:	8b 00                	mov    (%eax),%eax
 8465e96:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8465e99:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8465e9c:	89 04 24             	mov    %eax,(%esp)
 8465e9f:	e8 e8 3b 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8465ea4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8465ea7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8465eab:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 8465eb2:	00 
 8465eb3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8465eb6:	89 04 24             	mov    %eax,(%esp)
 8465eb9:	e8 8e 9f ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 8465ebe:	8b 45 08             	mov    0x8(%ebp),%eax
 8465ec1:	8b 00                	mov    (%eax),%eax
 8465ec3:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8465ec6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465eca:	89 04 24             	mov    %eax,(%esp)
 8465ecd:	e8 7c 72 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8465ed2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8465ed7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8465eda:	89 04 24             	mov    %eax,(%esp)
 8465edd:	e8 be 3b 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465ee2:	eb 2a                	jmp    8465f0e <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x27a>
 8465ee4:	89 d3                	mov    %edx,%ebx
 8465ee6:	89 c6                	mov    %eax,%esi
 8465ee8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8465eeb:	89 04 24             	mov    %eax,(%esp)
 8465eee:	e8 ad 3b 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465ef3:	89 f0                	mov    %esi,%eax
 8465ef5:	89 da                	mov    %ebx,%edx
 8465ef7:	eb 00                	jmp    8465ef9 <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x265>
 8465ef9:	89 d3                	mov    %edx,%ebx
 8465efb:	89 c6                	mov    %eax,%esi
 8465efd:	e8 2e fd 2b 00       	call   8725c30 <__cxa_end_catch>
 8465f02:	89 f0                	mov    %esi,%eax
 8465f04:	89 da                	mov    %ebx,%edx
 8465f06:	89 04 24             	mov    %eax,(%esp)
 8465f09:	e8 42 d8 67 00       	call   8ae3750 <_Unwind_Resume>
 8465f0e:	e8 1d fd 2b 00       	call   8725c30 <__cxa_end_catch>
 8465f13:	e9 03 01 00 00       	jmp    846601b <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x387>
 8465f18:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8465f1b:	89 04 24             	mov    %eax,(%esp)
 8465f1e:	e8 69 3b 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8465f23:	c7 44 24 08 8f 00 00 	movl   $0x8f,0x8(%esp)
 8465f2a:	00 
 8465f2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8465f32:	00 
 8465f33:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8465f36:	89 04 24             	mov    %eax,(%esp)
 8465f39:	e8 be 59 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8465f3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8465f41:	8d 50 14             	lea    0x14(%eax),%edx
 8465f44:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8465f47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8465f4b:	89 14 24             	mov    %edx,(%esp)
 8465f4e:	e8 d5 b8 ff ff       	call   8461828 <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard>
 8465f53:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8465f5a:	00 
 8465f5b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8465f5e:	89 04 24             	mov    %eax,(%esp)
 8465f61:	e8 f2 59 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8465f66:	8b 45 08             	mov    0x8(%ebp),%eax
 8465f69:	8b 00                	mov    (%eax),%eax
 8465f6b:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8465f6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465f72:	89 04 24             	mov    %eax,(%esp)
 8465f75:	e8 d4 71 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8465f7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8465f7d:	89 04 24             	mov    %eax,(%esp)
 8465f80:	e8 73 11 00 00       	call   84670f8 <_ZN8WongWork11CDeathTower17_checkMemberReadyEv>
 8465f85:	eb 1b                	jmp    8465fa2 <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x30e>
 8465f87:	89 d3                	mov    %edx,%ebx
 8465f89:	89 c6                	mov    %eax,%esi
 8465f8b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8465f8e:	89 04 24             	mov    %eax,(%esp)
 8465f91:	e8 0a 3b 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465f96:	89 f0                	mov    %esi,%eax
 8465f98:	89 da                	mov    %ebx,%edx
 8465f9a:	89 04 24             	mov    %eax,(%esp)
 8465f9d:	e8 ae d7 67 00       	call   8ae3750 <_Unwind_Resume>
 8465fa2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8465fa5:	89 04 24             	mov    %eax,(%esp)
 8465fa8:	e8 f3 3a 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465fad:	bb 01 00 00 00       	mov    $0x1,%ebx
 8465fb2:	eb 67                	jmp    846601b <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x387>
 8465fb4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8465fb7:	89 04 24             	mov    %eax,(%esp)
 8465fba:	e8 cd 3a 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8465fbf:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8465fc6:	00 
 8465fc7:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 8465fce:	00 
 8465fcf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8465fd2:	89 04 24             	mov    %eax,(%esp)
 8465fd5:	e8 72 9e ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 8465fda:	8b 45 08             	mov    0x8(%ebp),%eax
 8465fdd:	8b 00                	mov    (%eax),%eax
 8465fdf:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8465fe2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8465fe6:	89 04 24             	mov    %eax,(%esp)
 8465fe9:	e8 60 71 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8465fee:	bb 00 00 00 00       	mov    $0x0,%ebx
 8465ff3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8465ff6:	89 04 24             	mov    %eax,(%esp)
 8465ff9:	e8 a2 3a 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8465ffe:	eb 1b                	jmp    846601b <_ZN8WongWork11CDeathTower13handleMoveMapEv+0x387>
 8466000:	89 d3                	mov    %edx,%ebx
 8466002:	89 c6                	mov    %eax,%esi
 8466004:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8466007:	89 04 24             	mov    %eax,(%esp)
 846600a:	e8 91 3a 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 846600f:	89 f0                	mov    %esi,%eax
 8466011:	89 da                	mov    %ebx,%edx
 8466013:	89 04 24             	mov    %eax,(%esp)
 8466016:	e8 35 d7 67 00       	call   8ae3750 <_Unwind_Resume>
 846601b:	89 d8                	mov    %ebx,%eax
 846601d:	83 c4 60             	add    $0x60,%esp
 8466020:	5b                   	pop    %ebx
 8466021:	5e                   	pop    %esi
 8466022:	5d                   	pop    %ebp
 8466023:	c3                   	ret

```

```c
// WongWork::CDeathTower::handleMoveMap @ 0x8465c94

/* WongWork::CDeathTower::handleMoveMap() */

undefined4 __thiscall WongWork::CDeathTower::handleMoveMap(CDeathTower *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  CPacketHandler local_50 [24];
  CPacketHandler local_38 [12];
  CPacketHandler local_2c [12];
  CPacketHandler local_20 [12];
  CMap *local_14;
  
  cVar1 = _checkMemberDie(this);
  if (cVar1 == '\0') {
    iVar2 = CStage::getState((CStage *)(this + 0x14));
    if (iVar2 < 2) {
      CPacketHandler::CPacketHandler(local_2c);
                    /* try { // try from 08465d4e to 08465d66 has its CatchHandler @ 08465d7c */
      CPacketHandler::makeCommonError(local_2c,0x30,0x13);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_2c);
      uVar5 = 0;
      CPacketHandler::~CPacketHandler(local_2c);
    }
    else {
      uVar3 = CDungeonMgr::getEndStage((CDungeonMgr *)(this + 0xc));
      cVar1 = CStage::moveNextStage((CStage *)(this + 0x14),uVar3);
      if (cVar1 == '\0') {
        CPacketHandler::CPacketHandler(local_50);
                    /* try { // try from 08465fd5 to 08465fed has its CatchHandler @ 08466000 */
        CPacketHandler::makeCommonError(local_50,0x30,0x16);
        CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_50);
        uVar5 = 0;
        CPacketHandler::~CPacketHandler(local_50);
      }
      else {
        uVar3 = CStage::getCurrentStage((CStage *)(this + 0x14));
                    /* try { // try from 08465dda to 08465e7e has its CatchHandler @ 08465e7f */
        local_14 = (CMap *)CDungeonMgr::getStageMap((CDungeonMgr *)(this + 0xc),uVar3);
        if (local_14 == (CMap *)0x0) {
          puVar4 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar4 = 0x15;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
        }
        CStage::reset((CStage *)(this + 0x14));
        cVar1 = CStage::consistMap((CStage *)(this + 0x14),(CDungeonMgr *)(this + 0xc),local_14,this
                                  );
        if (cVar1 != '\x01') {
          puVar4 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
        }
        CPacketHandler::CPacketHandler(local_38);
                    /* try { // try from 08465f39 to 08465f84 has its CatchHandler @ 08465f87 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0x8f);
        CStage::makeStagePacket((CStage *)(this + 0x14),(PacketGuard *)local_38);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_38);
        _checkMemberReady(this);
        CPacketHandler::~CPacketHandler(local_38);
        uVar5 = 1;
      }
    }
  }
  else {
    CPacketHandler::CPacketHandler(local_20);
                    /* try { // try from 08465ccc to 08465ce4 has its CatchHandler @ 08465cfa */
    CPacketHandler::makeCommonError(local_20,0x30,0x16);
    CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_20);
    uVar5 = 0;
    CPacketHandler::~CPacketHandler(local_20);
  }
  return uVar5;
}

```

---

## handlePickupItem

```asm
// === 08464036 WongWork::CDeathTower::handlePickupItem  [0x08464036-0x846466d] ===
 8464036:	55                   	push   %ebp
 8464037:	89 e5                	mov    %esp,%ebp
 8464039:	56                   	push   %esi
 846403a:	53                   	push   %ebx
 846403b:	81 ec 10 01 00 00    	sub    $0x110,%esp
 8464041:	8b 55 14             	mov    0x14(%ebp),%edx
 8464044:	8b 45 18             	mov    0x18(%ebp),%eax
 8464047:	88 95 44 ff ff ff    	mov    %dl,-0xbc(%ebp)
 846404d:	88 85 40 ff ff ff    	mov    %al,-0xc0(%ebp)
 8464053:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8464059:	89 04 24             	mov    %eax,(%esp)
 846405c:	e8 6b d2 ce ff       	call   81512cc <_ZN8map_itemC1Ev>
 8464061:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8464064:	89 04 24             	mov    %eax,(%esp)
 8464067:	e8 20 5a 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 846406c:	8b 45 08             	mov    0x8(%ebp),%eax
 846406f:	8d 50 14             	lea    0x14(%eax),%edx
 8464072:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8464078:	89 44 24 08          	mov    %eax,0x8(%esp)
 846407c:	8b 45 10             	mov    0x10(%ebp),%eax
 846407f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464083:	89 14 24             	mov    %edx,(%esp)
 8464086:	e8 a9 d4 ff ff       	call   8461534 <_ZN8WongWork11CDeathTower6CStage8peekItemEiR8map_item>
 846408b:	83 f0 01             	xor    $0x1,%eax
 846408e:	84 c0                	test   %al,%al
 8464090:	74 5d                	je     84640ef <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0xb9>
 8464092:	80 bd 40 ff ff ff 03 	cmpb   $0x3,-0xc0(%ebp)
 8464099:	7e 1d                	jle    84640b8 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x82>
 846409b:	c7 44 24 08 51 00 00 	movl   $0x51,0x8(%esp)
 84640a2:	00 
 84640a3:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 84640aa:	00 
 84640ab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84640ae:	89 04 24             	mov    %eax,(%esp)
 84640b1:	e8 96 bd ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 84640b6:	eb 1b                	jmp    84640d3 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x9d>
 84640b8:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 84640bf:	00 
 84640c0:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 84640c7:	00 
 84640c8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84640cb:	89 04 24             	mov    %eax,(%esp)
 84640ce:	e8 79 bd ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 84640d3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84640d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84640da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84640dd:	89 04 24             	mov    %eax,(%esp)
 84640e0:	e8 d5 44 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84640e5:	bb 00 00 00 00       	mov    $0x0,%ebx
 84640ea:	e9 68 05 00 00       	jmp    8464657 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x621>
 84640ef:	8b 45 08             	mov    0x8(%ebp),%eax
 84640f2:	8b 00                	mov    (%eax),%eax
 84640f4:	89 04 24             	mov    %eax,(%esp)
 84640f7:	e8 6e 60 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 84640fc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84640ff:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8464103:	7f 37                	jg     846413c <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x106>
 8464105:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 846410c:	00 
 846410d:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 8464114:	00 
 8464115:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8464118:	89 04 24             	mov    %eax,(%esp)
 846411b:	e8 2c bd ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 8464120:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8464123:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464127:	8b 45 0c             	mov    0xc(%ebp),%eax
 846412a:	89 04 24             	mov    %eax,(%esp)
 846412d:	e8 88 44 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8464132:	bb 00 00 00 00       	mov    $0x0,%ebx
 8464137:	e9 1b 05 00 00       	jmp    8464657 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x621>
 846413c:	8b 85 5a ff ff ff    	mov    -0xa6(%ebp),%eax
 8464142:	85 c0                	test   %eax,%eax
 8464144:	0f 85 14 01 00 00    	jne    846425e <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x228>
 846414a:	8b 45 08             	mov    0x8(%ebp),%eax
 846414d:	8d 50 14             	lea    0x14(%eax),%edx
 8464150:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8464156:	89 44 24 08          	mov    %eax,0x8(%esp)
 846415a:	8b 45 10             	mov    0x10(%ebp),%eax
 846415d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464161:	89 14 24             	mov    %edx,(%esp)
 8464164:	e8 7b d4 ff ff       	call   84615e4 <_ZN8WongWork11CDeathTower6CStage10pickupItemEiR8map_item>
 8464169:	83 f0 01             	xor    $0x1,%eax
 846416c:	84 c0                	test   %al,%al
 846416e:	74 37                	je     84641a7 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x171>
 8464170:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8464177:	00 
 8464178:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 846417f:	00 
 8464180:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8464183:	89 04 24             	mov    %eax,(%esp)
 8464186:	e8 c1 bc ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 846418b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846418e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464192:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464195:	89 04 24             	mov    %eax,(%esp)
 8464198:	e8 1d 44 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 846419d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84641a2:	e9 b0 04 00 00       	jmp    8464657 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x621>
 84641a7:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 84641ae:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84641b5:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84641bc:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84641c3:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 84641ca:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 84641d1:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 84641d8:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 84641df:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84641e2:	89 44 24 14          	mov    %eax,0x14(%esp)
 84641e6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84641e9:	89 44 24 10          	mov    %eax,0x10(%esp)
 84641ed:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84641f3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84641f7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84641fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84641fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464201:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464205:	8b 45 08             	mov    0x8(%ebp),%eax
 8464208:	89 04 24             	mov    %eax,(%esp)
 846420b:	e8 f2 28 00 00       	call   8466b02 <_ZN8WongWork11CDeathTower16_pickupItemMoneyEP5CUseriRK8map_itemPiS6_>
 8464210:	8b 45 10             	mov    0x10(%ebp),%eax
 8464213:	0f b7 d8             	movzwl %ax,%ebx
 8464216:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464219:	89 04 24             	mov    %eax,(%esp)
 846421c:	e8 5b 61 c7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8464221:	0f b7 c0             	movzwl %ax,%eax
 8464224:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8464228:	89 44 24 04          	mov    %eax,0x4(%esp)
 846422c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846422f:	89 04 24             	mov    %eax,(%esp)
 8464232:	e8 35 ba ff ff       	call   845fc6c <_ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt>
 8464237:	8b 45 08             	mov    0x8(%ebp),%eax
 846423a:	8b 00                	mov    (%eax),%eax
 846423c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8464240:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8464243:	89 44 24 08          	mov    %eax,0x8(%esp)
 8464247:	8d 45 c8             	lea    -0x38(%ebp),%eax
 846424a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846424e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8464251:	89 04 24             	mov    %eax,(%esp)
 8464254:	e8 6b ba ff ff       	call   845fcc4 <_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty>
 8464259:	e9 c3 03 00 00       	jmp    8464621 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x5eb>
 846425e:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8464265:	8b 85 5a ff ff ff    	mov    -0xa6(%ebp),%eax
 846426b:	89 c3                	mov    %eax,%ebx
 846426d:	e8 29 7f c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8464272:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8464276:	89 04 24             	mov    %eax,(%esp)
 8464279:	e8 b4 b7 ef ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 846427e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8464281:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8464285:	75 0a                	jne    8464291 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x25b>
 8464287:	bb 00 00 00 00       	mov    $0x0,%ebx
 846428c:	e9 c6 03 00 00       	jmp    8464657 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x621>
 8464291:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8464298:	8b 45 e8             	mov    -0x18(%ebp),%eax
 846429b:	89 04 24             	mov    %eax,(%esp)
 846429e:	e8 57 d0 c8 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84642a3:	84 c0                	test   %al,%al
 84642a5:	74 25                	je     84642cc <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x296>
 84642a7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84642aa:	8b 00                	mov    (%eax),%eax
 84642ac:	83 c0 0c             	add    $0xc,%eax
 84642af:	8b 10                	mov    (%eax),%edx
 84642b1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84642b4:	89 04 24             	mov    %eax,(%esp)
 84642b7:	ff d2                	call   *%edx
 84642b9:	83 f8 09             	cmp    $0x9,%eax
 84642bc:	0f 94 c0             	sete   %al
 84642bf:	84 c0                	test   %al,%al
 84642c1:	74 45                	je     8464308 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x2d2>
 84642c3:	c7 45 ec 07 00 00 00 	movl   $0x7,-0x14(%ebp)
 84642ca:	eb 3c                	jmp    8464308 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x2d2>
 84642cc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84642cf:	8b 00                	mov    (%eax),%eax
 84642d1:	83 c0 14             	add    $0x14,%eax
 84642d4:	8b 10                	mov    (%eax),%edx
 84642d6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84642d9:	89 04 24             	mov    %eax,(%esp)
 84642dc:	ff d2                	call   *%edx
 84642de:	84 c0                	test   %al,%al
 84642e0:	74 09                	je     84642eb <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x2b5>
 84642e2:	c7 45 ec 07 00 00 00 	movl   $0x7,-0x14(%ebp)
 84642e9:	eb 1d                	jmp    8464308 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x2d2>
 84642eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84642ee:	8b 00                	mov    (%eax),%eax
 84642f0:	83 c0 10             	add    $0x10,%eax
 84642f3:	8b 10                	mov    (%eax),%edx
 84642f5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84642f8:	89 04 24             	mov    %eax,(%esp)
 84642fb:	ff d2                	call   *%edx
 84642fd:	84 c0                	test   %al,%al
 84642ff:	74 07                	je     8464308 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x2d2>
 8464301:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 8464308:	0f be 95 40 ff ff ff 	movsbl -0xc0(%ebp),%edx
 846430f:	0f b6 85 44 ff ff ff 	movzbl -0xbc(%ebp),%eax
 8464316:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 8464319:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 846431d:	89 54 24 18          	mov    %edx,0x18(%esp)
 8464321:	89 44 24 14          	mov    %eax,0x14(%esp)
 8464325:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 846432b:	89 44 24 10          	mov    %eax,0x10(%esp)
 846432f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8464332:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8464336:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8464339:	89 44 24 08          	mov    %eax,0x8(%esp)
 846433d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8464340:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464344:	8b 45 08             	mov    0x8(%ebp),%eax
 8464347:	89 04 24             	mov    %eax,(%esp)
 846434a:	e8 af 29 00 00       	call   8466cfe <_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem>
 846434f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8464352:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8464356:	75 37                	jne    846438f <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x359>
 8464358:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 846435f:	00 
 8464360:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 8464367:	00 
 8464368:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846436b:	89 04 24             	mov    %eax,(%esp)
 846436e:	e8 d9 ba ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 8464373:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8464376:	89 44 24 04          	mov    %eax,0x4(%esp)
 846437a:	8b 45 0c             	mov    0xc(%ebp),%eax
 846437d:	89 04 24             	mov    %eax,(%esp)
 8464380:	e8 35 42 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8464385:	bb 00 00 00 00       	mov    $0x0,%ebx
 846438a:	e9 c8 02 00 00       	jmp    8464657 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x621>
 846438f:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 8464396:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 846439c:	83 c0 10             	add    $0x10,%eax
 846439f:	89 04 24             	mov    %eax,(%esp)
 84643a2:	e8 59 c4 ce ff       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 84643a7:	84 c0                	test   %al,%al
 84643a9:	74 64                	je     846440f <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x3d9>
 84643ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84643ae:	89 04 24             	mov    %eax,(%esp)
 84643b1:	e8 98 78 c6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84643b6:	8d 55 9c             	lea    -0x64(%ebp),%edx
 84643b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84643bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84643c1:	c7 04 24 05 00 00 00 	movl   $0x5,(%esp)
 84643c8:	e8 83 33 05 00       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 84643cd:	0f b7 85 63 ff ff ff 	movzwl -0x9d(%ebp),%eax
 84643d4:	0f be d0             	movsbl %al,%edx
 84643d7:	8b 85 5a ff ff ff    	mov    -0xa6(%ebp),%eax
 84643dd:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 84643e4:	00 
 84643e5:	8d 4d 9c             	lea    -0x64(%ebp),%ecx
 84643e8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84643ec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84643f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84643f7:	00 
 84643f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84643fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84643ff:	89 04 24             	mov    %eax,(%esp)
 8464402:	e8 1d ce 21 00       	call   8681224 <_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason>
 8464407:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846440a:	e9 bd 00 00 00       	jmp    84644cc <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x496>
 846440f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8464412:	89 04 24             	mov    %eax,(%esp)
 8464415:	e8 74 5e c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 846441a:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8464421:	00 
 8464422:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8464429:	00 
 846442a:	c7 44 24 44 04 00 00 	movl   $0x4,0x44(%esp)
 8464431:	00 
 8464432:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 8464438:	89 54 24 04          	mov    %edx,0x4(%esp)
 846443c:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 8464442:	89 54 24 08          	mov    %edx,0x8(%esp)
 8464446:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 846444c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8464450:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8464456:	89 54 24 10          	mov    %edx,0x10(%esp)
 846445a:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8464460:	89 54 24 14          	mov    %edx,0x14(%esp)
 8464464:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 846446a:	89 54 24 18          	mov    %edx,0x18(%esp)
 846446e:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 8464474:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8464478:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 846447e:	89 54 24 20          	mov    %edx,0x20(%esp)
 8464482:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 8464488:	89 54 24 24          	mov    %edx,0x24(%esp)
 846448c:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 8464492:	89 54 24 28          	mov    %edx,0x28(%esp)
 8464496:	8b 55 80             	mov    -0x80(%ebp),%edx
 8464499:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 846449d:	8b 55 84             	mov    -0x7c(%ebp),%edx
 84644a0:	89 54 24 30          	mov    %edx,0x30(%esp)
 84644a4:	8b 55 88             	mov    -0x78(%ebp),%edx
 84644a7:	89 54 24 34          	mov    %edx,0x34(%esp)
 84644ab:	8b 55 8c             	mov    -0x74(%ebp),%edx
 84644ae:	89 54 24 38          	mov    %edx,0x38(%esp)
 84644b2:	8b 55 90             	mov    -0x70(%ebp),%edx
 84644b5:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 84644b9:	0f b6 55 94          	movzbl -0x6c(%ebp),%edx
 84644bd:	88 54 24 40          	mov    %dl,0x40(%esp)
 84644c1:	89 04 24             	mov    %eax,(%esp)
 84644c4:	e8 bd e8 09 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 84644c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84644cc:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 84644d0:	75 37                	jne    8464509 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x4d3>
 84644d2:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84644d9:	00 
 84644da:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 84644e1:	00 
 84644e2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84644e5:	89 04 24             	mov    %eax,(%esp)
 84644e8:	e8 5f b9 ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 84644ed:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84644f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84644f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84644f7:	89 04 24             	mov    %eax,(%esp)
 84644fa:	e8 bb 40 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84644ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 8464504:	e9 4e 01 00 00       	jmp    8464657 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x621>
 8464509:	8b 45 e8             	mov    -0x18(%ebp),%eax
 846450c:	8b 00                	mov    (%eax),%eax
 846450e:	83 c0 4c             	add    $0x4c,%eax
 8464511:	8b 10                	mov    (%eax),%edx
 8464513:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8464516:	89 04 24             	mov    %eax,(%esp)
 8464519:	ff d2                	call   *%edx
 846451b:	84 c0                	test   %al,%al
 846451d:	74 4c                	je     846456b <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x535>
 846451f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8464526:	e8 33 ff dc ff       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 846452b:	89 c3                	mov    %eax,%ebx
 846452d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8464530:	89 04 24             	mov    %eax,(%esp)
 8464533:	e8 68 ae dc ff       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 8464538:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 846453c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8464540:	c7 44 24 10 33 33 c6 	movl   $0x8c63333,0x10(%esp)
 8464547:	08 
 8464548:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 846454f:	00 
 8464550:	c7 44 24 08 3b 33 c6 	movl   $0x8c6333b,0x8(%esp)
 8464557:	08 
 8464558:	c7 44 24 04 44 33 c6 	movl   $0x8c63344,0x4(%esp)
 846455f:	08 
 8464560:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8464563:	89 04 24             	mov    %eax,(%esp)
 8464566:	e8 67 b8 1a 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 846456b:	8b 45 08             	mov    0x8(%ebp),%eax
 846456e:	8d 50 14             	lea    0x14(%eax),%edx
 8464571:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8464577:	89 44 24 08          	mov    %eax,0x8(%esp)
 846457b:	8b 45 10             	mov    0x10(%ebp),%eax
 846457e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464582:	89 14 24             	mov    %edx,(%esp)
 8464585:	e8 5a d0 ff ff       	call   84615e4 <_ZN8WongWork11CDeathTower6CStage10pickupItemEiR8map_item>
 846458a:	83 f0 01             	xor    $0x1,%eax
 846458d:	84 c0                	test   %al,%al
 846458f:	74 37                	je     84645c8 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x592>
 8464591:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8464598:	00 
 8464599:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 84645a0:	00 
 84645a1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84645a4:	89 04 24             	mov    %eax,(%esp)
 84645a7:	e8 a0 b8 ff ff       	call   845fe4c <_ZN8WongWork11CDeathTower14CPacketHandler15makeCommonErrorE14ENUM_CMDPACKET10ENUM_ERROR>
 84645ac:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84645af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84645b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84645b6:	89 04 24             	mov    %eax,(%esp)
 84645b9:	e8 fc 3f 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84645be:	bb 00 00 00 00       	mov    $0x0,%ebx
 84645c3:	e9 8f 00 00 00       	jmp    8464657 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x621>
 84645c8:	8b 45 10             	mov    0x10(%ebp),%eax
 84645cb:	0f b7 d8             	movzwl %ax,%ebx
 84645ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84645d1:	89 04 24             	mov    %eax,(%esp)
 84645d4:	e8 a3 5d c7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84645d9:	0f b7 c0             	movzwl %ax,%eax
 84645dc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84645e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84645e4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84645e7:	89 04 24             	mov    %eax,(%esp)
 84645ea:	e8 7d b6 ff ff       	call   845fc6c <_ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt>
 84645ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84645f2:	89 04 24             	mov    %eax,(%esp)
 84645f5:	e8 82 5d c7 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84645fa:	0f b7 c0             	movzwl %ax,%eax
 84645fd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8464600:	89 54 24 10          	mov    %edx,0x10(%esp)
 8464604:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8464607:	89 54 24 0c          	mov    %edx,0xc(%esp)
 846460b:	89 44 24 08          	mov    %eax,0x8(%esp)
 846460f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8464612:	89 44 24 04          	mov    %eax,0x4(%esp)
 8464616:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8464619:	89 04 24             	mov    %eax,(%esp)
 846461c:	e8 9f b7 ff ff       	call   845fdc0 <_ZN8WongWork11CDeathTower14CPacketHandler16appendPickupItemEPctii>
 8464621:	8b 45 08             	mov    0x8(%ebp),%eax
 8464624:	8b 00                	mov    (%eax),%eax
 8464626:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8464629:	89 54 24 04          	mov    %edx,0x4(%esp)
 846462d:	89 04 24             	mov    %eax,(%esp)
 8464630:	e8 19 8b 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8464635:	bb 01 00 00 00       	mov    $0x1,%ebx
 846463a:	eb 1b                	jmp    8464657 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc+0x621>
 846463c:	89 d3                	mov    %edx,%ebx
 846463e:	89 c6                	mov    %eax,%esi
 8464640:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8464643:	89 04 24             	mov    %eax,(%esp)
 8464646:	e8 55 54 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 846464b:	89 f0                	mov    %esi,%eax
 846464d:	89 da                	mov    %ebx,%edx
 846464f:	89 04 24             	mov    %eax,(%esp)
 8464652:	e8 f9 f0 67 00       	call   8ae3750 <_Unwind_Resume>
 8464657:	8d 45 d8             	lea    -0x28(%ebp),%eax
 846465a:	89 04 24             	mov    %eax,(%esp)
 846465d:	e8 3e 54 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8464662:	89 d8                	mov    %ebx,%eax
 8464664:	81 c4 10 01 00 00    	add    $0x110,%esp
 846466a:	5b                   	pop    %ebx
 846466b:	5e                   	pop    %esi
 846466c:	5d                   	pop    %ebp
 846466d:	c3                   	ret

```

```c
// WongWork::CDeathTower::handlePickupItem @ 0x8464036

/* WongWork::CDeathTower::handlePickupItem(CUser*, int, bool, char) */

undefined4 __thiscall
WongWork::CDeathTower::handlePickupItem
          (CDeathTower *this,CUser *param_1,int param_2,bool param_3,char param_4)

{
  char cVar1;
  ushort uVar2;
  CDataManager *this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  map_item local_bc [16];
  undefined2 uStack_ac;
  undefined2 local_aa;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_68 [24];
  char local_50 [4];
  int local_4c [8];
  CPacketHandler local_2c [12];
  int local_20;
  CItem *local_1c;
  int local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  map_item::map_item(local_bc);
  CPacketHandler::CPacketHandler(local_2c);
                    /* try { // try from 08464086 to 08464634 has its CatchHandler @ 0846463c */
  cVar1 = CStage::peekItem((CStage *)(this + 0x14),param_2,local_bc);
  if (cVar1 == '\x01') {
    local_20 = CParty::get_member_count(*(CParty **)this);
    if (local_20 < 1) {
      CPacketHandler::makeCommonError(local_2c,0x2e,0x15);
      CUser::Send(param_1,(PacketGuard *)local_2c);
      uVar5 = 0;
    }
    else {
      if (CONCAT22(uStack_a8,local_aa) == 0) {
        cVar1 = CStage::pickupItem((CStage *)(this + 0x14),param_2,local_bc);
        if (cVar1 != '\x01') {
          CPacketHandler::makeCommonError(local_2c,0x2e,0x15);
          CUser::Send(param_1,(PacketGuard *)local_2c);
          uVar5 = 0;
          goto LAB_08464657;
        }
        local_4c[4] = 0;
        local_4c[5] = 0;
        local_4c[6] = 0;
        local_4c[7] = 0;
        local_4c[0] = 0;
        local_4c[1] = 0;
        local_4c[2] = 0;
        local_4c[3] = 0;
        _pickupItemMoney(this,param_1,local_20,local_bc,local_4c + 4,local_4c);
        uVar2 = CUser::get_unique_id(param_1);
        CPacketHandler::makePickupItemHeader(local_2c,uVar2,(ushort)param_2);
        CPacketHandler::appendPickupMoney(local_2c,local_4c + 4,local_4c,*(CParty **)this);
      }
      else {
        local_50[0] = '\0';
        local_50[1] = '\0';
        local_50[2] = '\0';
        local_50[3] = '\0';
        iVar3 = CONCAT22(uStack_a8,local_aa);
        this_00 = (CDataManager *)G_CDataManager();
        local_1c = (CItem *)CDataManager::find_item(this_00,iVar3);
        if (local_1c == (CItem *)0x0) {
          uVar5 = 0;
          goto LAB_08464657;
        }
        local_18 = 0;
        cVar1 = CItem::is_stackable(local_1c);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*(int *)local_1c + 0x14))(local_1c);
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*(int *)local_1c + 0x10))(local_1c);
            if (cVar1 != '\0') {
              local_18 = 1;
            }
          }
          else {
            local_18 = 7;
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)local_1c + 0xc))(local_1c);
          if (iVar3 == 9) {
            local_18 = 7;
          }
        }
        local_14 = (CUserCharacInfo *)
                   _pickupItem(this,param_1,local_50,local_20,local_bc,param_3,param_4,local_1c);
        if (local_14 == (CUserCharacInfo *)0x0) {
          CPacketHandler::makeCommonError(local_2c,0x2e,0x16);
          CUser::Send(param_1,(PacketGuard *)local_2c);
          uVar5 = 0;
          goto LAB_08464657;
        }
        local_10 = 0xffffffff;
        cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)&uStack_ac);
        if (cVar1 == '\0') {
          uVar5 = CUserCharacInfo::getCurCharacInvenW(local_14);
          local_10 = CInventory::insertItemIntoInventory
                               (uVar5,CONCAT22(local_aa,uStack_ac),CONCAT22(uStack_a6,uStack_a8),
                                local_a4,uStack_a0,local_9c,local_98,local_94,local_90,local_8c,
                                local_88,local_84,local_80,local_7c,local_78,local_74,local_70,4,1,1
                               );
        }
        else {
          uVar5 = CUserCharacInfo::getCurCharacNo(local_14);
          CGenUniqueNo::genIPGNo(5,uVar5,local_68);
          local_10 = CUser::addAvatarItem
                               ((CUser *)local_14,CONCAT22(uStack_a8,local_aa),0,(int)local_a4._3_1_
                                ,local_68,0x10);
        }
        if (local_10 == -1) {
          CPacketHandler::makeCommonError(local_2c,0x2e,4);
          CUser::Send(param_1,(PacketGuard *)local_2c);
          uVar5 = 0;
          goto LAB_08464657;
        }
        cVar1 = (**(code **)(*(int *)local_1c + 0x4c))(local_1c);
        if (cVar1 != '\0') {
          uVar5 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
          uVar4 = CUserCharacInfo::get_charac_10_level_section(local_14);
          statistc_proxy::add((CUser *)local_14,"log_random_option","pick_cnt",1,"%d,\'%s\'",uVar4,
                              uVar5);
        }
        cVar1 = CStage::pickupItem((CStage *)(this + 0x14),param_2,local_bc);
        if (cVar1 != '\x01') {
          CPacketHandler::makeCommonError(local_2c,0x2e,0x15);
          CUser::Send(param_1,(PacketGuard *)local_2c);
          uVar5 = 0;
          goto LAB_08464657;
        }
        uVar2 = CUser::get_unique_id(param_1);
        CPacketHandler::makePickupItemHeader(local_2c,uVar2,(ushort)param_2);
        uVar2 = CUser::get_unique_id((CUser *)local_14);
        CPacketHandler::appendPickupItem(local_2c,local_50,uVar2,local_10,local_18);
      }
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_2c);
      uVar5 = 1;
    }
  }
  else {
    if (param_4 < '\x04') {
      CPacketHandler::makeCommonError(local_2c,0x2e,0x15);
    }
    else {
      CPacketHandler::makeCommonError(local_2c,0x2e,0x51);
    }
    CUser::Send(param_1,(PacketGuard *)local_2c);
    uVar5 = 0;
  }
LAB_08464657:
  CPacketHandler::~CPacketHandler(local_2c);
  return uVar5;
}

```

---

## handleSelectEPLPCommand

```asm
// === 08466208 WongWork::CDeathTower::handleSelectEPLPCommand  [0x08466208-0x84662cb] ===
 8466208:	55                   	push   %ebp
 8466209:	89 e5                	mov    %esp,%ebp
 846620b:	56                   	push   %esi
 846620c:	53                   	push   %ebx
 846620d:	83 ec 30             	sub    $0x30,%esp
 8466210:	8b 45 08             	mov    0x8(%ebp),%eax
 8466213:	8b 00                	mov    (%eax),%eax
 8466215:	8b 55 0c             	mov    0xc(%ebp),%edx
 8466218:	89 54 24 04          	mov    %edx,0x4(%esp)
 846621c:	89 04 24             	mov    %eax,(%esp)
 846621f:	e8 58 4a 13 00       	call   859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>
 8466224:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8466227:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 846622b:	74 1f                	je     846624c <_ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri+0x44>
 846622d:	8b 45 08             	mov    0x8(%ebp),%eax
 8466230:	8b 00                	mov    (%eax),%eax
 8466232:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8466235:	89 54 24 04          	mov    %edx,0x4(%esp)
 8466239:	89 04 24             	mov    %eax,(%esp)
 846623c:	e8 27 f6 cd ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8466241:	84 c0                	test   %al,%al
 8466243:	74 07                	je     846624c <_ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri+0x44>
 8466245:	b8 01 00 00 00       	mov    $0x1,%eax
 846624a:	eb 05                	jmp    8466251 <_ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri+0x49>
 846624c:	b8 00 00 00 00       	mov    $0x0,%eax
 8466251:	84 c0                	test   %al,%al
 8466253:	74 6b                	je     84662c0 <_ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri+0xb8>
 8466255:	8b 45 08             	mov    0x8(%ebp),%eax
 8466258:	8b 00                	mov    (%eax),%eax
 846625a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8466261:	00 
 8466262:	89 04 24             	mov    %eax,(%esp)
 8466265:	e8 22 f5 cd ff       	call   814578c <_ZN6CParty12SetEPLPStateEc>
 846626a:	c7 44 24 04 4e 00 00 	movl   $0x4e,0x4(%esp)
 8466271:	00 
 8466272:	8b 45 08             	mov    0x8(%ebp),%eax
 8466275:	89 04 24             	mov    %eax,(%esp)
 8466278:	e8 6f 8b ea ff       	call   830edec <_ZN8WongWork11CDeathTower12_genTimerKeyE13TIMER_MESSAGE>
 846627d:	89 c3                	mov    %eax,%ebx
 846627f:	8b 45 08             	mov    0x8(%ebp),%eax
 8466282:	8b 70 04             	mov    0x4(%eax),%esi
 8466285:	e8 f2 01 c9 ff       	call   80f647c <_Z12G_TimerQueuev>
 846628a:	c7 44 24 18 4e 00 00 	movl   $0x4e,0x18(%esp)
 8466291:	00 
 8466292:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8466296:	8b 55 10             	mov    0x10(%ebp),%edx
 8466299:	89 54 24 10          	mov    %edx,0x10(%esp)
 846629d:	c7 44 24 0c 4e 00 00 	movl   $0x4e,0xc(%esp)
 84662a4:	00 
 84662a5:	89 74 24 08          	mov    %esi,0x8(%esp)
 84662a9:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84662b0:	00 
 84662b1:	89 04 24             	mov    %eax,(%esp)
 84662b4:	e8 5d ab 1c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 84662b9:	b8 01 00 00 00       	mov    $0x1,%eax
 84662be:	eb 05                	jmp    84662c5 <_ZN8WongWork11CDeathTower23handleSelectEPLPCommandEP5CUseri+0xbd>
 84662c0:	b8 00 00 00 00       	mov    $0x0,%eax
 84662c5:	83 c4 30             	add    $0x30,%esp
 84662c8:	5b                   	pop    %ebx
 84662c9:	5e                   	pop    %esi
 84662ca:	5d                   	pop    %ebp
 84662cb:	c3                   	ret

```

```c
// WongWork::CDeathTower::handleSelectEPLPCommand @ 0x8466208

/* WongWork::CDeathTower::handleSelectEPLPCommand(CUser*, int) */

bool __thiscall
WongWork::CDeathTower::handleSelectEPLPCommand(CDeathTower *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  
  iVar4 = CParty::GetMemberSlotNo(*(CParty **)this,param_1);
  if ((iVar4 == -1) || (cVar3 = CParty::checkValidUser(*(CParty **)this,iVar4), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CParty::SetEPLPState(*(CParty **)this,'\x03');
    uVar5 = _genTimerKey(this,0x4e);
    uVar1 = *(undefined4 *)(this + 4);
    pTVar6 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar6,6,uVar1,0x4e,param_2,uVar5,0x4e);
  }
  return bVar2;
}

```

---

## handleStageCommand

```asm
// === 08466150 WongWork::CDeathTower::handleStageCommand  [0x08466150-0x8466207] ===
 8466150:	55                   	push   %ebp
 8466151:	89 e5                	mov    %esp,%ebp
 8466153:	83 ec 28             	sub    $0x28,%esp
 8466156:	8b 45 10             	mov    0x10(%ebp),%eax
 8466159:	88 45 f4             	mov    %al,-0xc(%ebp)
 846615c:	8b 45 08             	mov    0x8(%ebp),%eax
 846615f:	8b 00                	mov    (%eax),%eax
 8466161:	89 04 24             	mov    %eax,(%esp)
 8466164:	e8 17 f6 cd ff       	call   8145780 <_ZN6CParty10getManagerEv>
 8466169:	3b 45 0c             	cmp    0xc(%ebp),%eax
 846616c:	0f 95 c0             	setne  %al
 846616f:	84 c0                	test   %al,%al
 8466171:	74 0a                	je     846617d <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0x2d>
 8466173:	b8 00 00 00 00       	mov    $0x0,%eax
 8466178:	e9 88 00 00 00       	jmp    8466205 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0xb5>
 846617d:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 8466181:	83 f8 01             	cmp    $0x1,%eax
 8466184:	74 07                	je     846618d <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0x3d>
 8466186:	83 f8 02             	cmp    $0x2,%eax
 8466189:	74 49                	je     84661d4 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0x84>
 846618b:	eb 6b                	jmp    84661f8 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0xa8>
 846618d:	8b 45 08             	mov    0x8(%ebp),%eax
 8466190:	83 c0 14             	add    $0x14,%eax
 8466193:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 846619a:	00 
 846619b:	89 04 24             	mov    %eax,(%esp)
 846619e:	e8 b7 ba ff ff       	call   8461c5a <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE>
 84661a3:	83 f0 01             	xor    $0x1,%eax
 84661a6:	84 c0                	test   %al,%al
 84661a8:	74 07                	je     84661b1 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0x61>
 84661aa:	b8 01 00 00 00       	mov    $0x1,%eax
 84661af:	eb 54                	jmp    8466205 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0xb5>
 84661b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84661b4:	89 04 24             	mov    %eax,(%esp)
 84661b7:	e8 cc 0f 00 00       	call   8467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>
 84661bc:	84 c0                	test   %al,%al
 84661be:	74 07                	je     84661c7 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0x77>
 84661c0:	b8 01 00 00 00       	mov    $0x1,%eax
 84661c5:	eb 3e                	jmp    8466205 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0xb5>
 84661c7:	8b 45 08             	mov    0x8(%ebp),%eax
 84661ca:	89 04 24             	mov    %eax,(%esp)
 84661cd:	e8 da 1a 00 00       	call   8467cac <_ZN8WongWork11CDeathTower13_onStartStageEv>
 84661d2:	eb 2c                	jmp    8466200 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0xb0>
 84661d4:	8b 45 08             	mov    0x8(%ebp),%eax
 84661d7:	83 c0 14             	add    $0x14,%eax
 84661da:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84661e1:	00 
 84661e2:	89 04 24             	mov    %eax,(%esp)
 84661e5:	e8 70 ba ff ff       	call   8461c5a <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE>
 84661ea:	83 f0 01             	xor    $0x1,%eax
 84661ed:	84 c0                	test   %al,%al
 84661ef:	74 0e                	je     84661ff <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0xaf>
 84661f1:	b8 01 00 00 00       	mov    $0x1,%eax
 84661f6:	eb 0d                	jmp    8466205 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0xb5>
 84661f8:	b8 00 00 00 00       	mov    $0x0,%eax
 84661fd:	eb 06                	jmp    8466205 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh+0xb5>
 84661ff:	90                   	nop
 8466200:	b8 01 00 00 00       	mov    $0x1,%eax
 8466205:	c9                   	leave
 8466206:	c3                   	ret
 8466207:	90                   	nop

```

```c
// WongWork::CDeathTower::handleStageCommand @ 0x8466150

/* WongWork::CDeathTower::handleStageCommand(CUser*, unsigned char) */

undefined4 __thiscall
WongWork::CDeathTower::handleStageCommand(CDeathTower *this,CUser *param_1,uchar param_2)

{
  char cVar1;
  CUser *pCVar2;
  
  pCVar2 = (CUser *)CParty::getManager(*(CParty **)this);
  if (pCVar2 != param_1) {
    return 0;
  }
  if (param_2 == '\x01') {
    cVar1 = CStage::setState((CStage *)(this + 0x14),1);
    if (cVar1 != '\x01') {
      return 1;
    }
    cVar1 = _checkMemberDie(this);
    if (cVar1 != '\0') {
      return 1;
    }
    _onStartStage(this);
  }
  else {
    if (param_2 != '\x02') {
      return 0;
    }
    cVar1 = CStage::setState((CStage *)(this + 0x14),2);
    if (cVar1 != '\x01') {
      return 1;
    }
  }
  return 1;
}

```

---

## handleStartGame

```asm
// === 0846398e WongWork::CDeathTower::handleStartGame  [0x0846398e-0x8464035] ===
 846398e:	55                   	push   %ebp
 846398f:	89 e5                	mov    %esp,%ebp
 8463991:	56                   	push   %esi
 8463992:	53                   	push   %ebx
 8463993:	83 ec 60             	sub    $0x60,%esp
 8463996:	8b 45 10             	mov    0x10(%ebp),%eax
 8463999:	88 45 b4             	mov    %al,-0x4c(%ebp)
 846399c:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 84639a0:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 84639a4:	75 2c                	jne    84639d2 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x44>
 84639a6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84639ad:	e8 4e 1e 2c 00       	call   8725800 <__cxa_allocate_exception>
 84639b2:	89 c2                	mov    %eax,%edx
 84639b4:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 84639ba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84639c1:	00 
 84639c2:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 84639c9:	08 
 84639ca:	89 04 24             	mov    %eax,(%esp)
 84639cd:	e8 7e 12 2c 00       	call   8724c50 <__cxa_throw>
 84639d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84639d5:	83 c0 0c             	add    $0xc,%eax
 84639d8:	89 04 24             	mov    %eax,(%esp)
 84639db:	e8 b8 3a e4 ff       	call   82a7498 <_ZN8WongWork11CDeathTower11CDungeonMgr5resetEv>
 84639e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84639e3:	8d 50 0c             	lea    0xc(%eax),%edx
 84639e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84639e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84639ed:	89 14 24             	mov    %edx,(%esp)
 84639f0:	e8 ad cb ff ff       	call   84605a2 <_ZN8WongWork11CDeathTower11CDungeonMgr14initDungeonMgrEi>
 84639f5:	83 f0 01             	xor    $0x1,%eax
 84639f8:	84 c0                	test   %al,%al
 84639fa:	74 2c                	je     8463a28 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x9a>
 84639fc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8463a03:	e8 f8 1d 2c 00       	call   8725800 <__cxa_allocate_exception>
 8463a08:	89 c2                	mov    %eax,%edx
 8463a0a:	c7 02 16 00 00 00    	movl   $0x16,(%edx)
 8463a10:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8463a17:	00 
 8463a18:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8463a1f:	08 
 8463a20:	89 04 24             	mov    %eax,(%esp)
 8463a23:	e8 28 12 2c 00       	call   8724c50 <__cxa_throw>
 8463a28:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8463a2f:	8d 45 df             	lea    -0x21(%ebp),%eax
 8463a32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463a36:	8b 45 08             	mov    0x8(%ebp),%eax
 8463a39:	89 04 24             	mov    %eax,(%esp)
 8463a3c:	e8 4f fe ff ff       	call   8463890 <_ZN8WongWork11CDeathTower24_checkStartGameConditionERh>
 8463a41:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8463a44:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8463a48:	0f 95 c0             	setne  %al
 8463a4b:	84 c0                	test   %al,%al
 8463a4d:	74 2b                	je     8463a7a <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0xec>
 8463a4f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8463a56:	e8 a5 1d 2c 00       	call   8725800 <__cxa_allocate_exception>
 8463a5b:	89 c2                	mov    %eax,%edx
 8463a5d:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8463a60:	89 0a                	mov    %ecx,(%edx)
 8463a62:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8463a69:	00 
 8463a6a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8463a71:	08 
 8463a72:	89 04 24             	mov    %eax,(%esp)
 8463a75:	e8 d6 11 2c 00       	call   8724c50 <__cxa_throw>
 8463a7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8463a7d:	83 c0 14             	add    $0x14,%eax
 8463a80:	89 04 24             	mov    %eax,(%esp)
 8463a83:	e8 64 da ff ff       	call   84614ec <_ZN8WongWork11CDeathTower6CStage5resetEv>
 8463a88:	8b 45 08             	mov    0x8(%ebp),%eax
 8463a8b:	83 c0 14             	add    $0x14,%eax
 8463a8e:	89 04 24             	mov    %eax,(%esp)
 8463a91:	e8 26 3a e4 ff       	call   82a74bc <_ZN8WongWork11CDeathTower6CStage17resetCurrentStageEv>
 8463a96:	8b 45 08             	mov    0x8(%ebp),%eax
 8463a99:	83 c0 14             	add    $0x14,%eax
 8463a9c:	89 04 24             	mov    %eax,(%esp)
 8463a9f:	e8 5e 60 00 00       	call   8469b02 <_ZN8WongWork11CDeathTower6CStage15getCurrentStageEv>
 8463aa4:	8b 55 08             	mov    0x8(%ebp),%edx
 8463aa7:	83 c2 0c             	add    $0xc,%edx
 8463aaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463aae:	89 14 24             	mov    %edx,(%esp)
 8463ab1:	e8 38 cb ff ff       	call   84605ee <_ZN8WongWork11CDeathTower11CDungeonMgr11getStageMapEj>
 8463ab6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8463ab9:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8463abd:	75 2c                	jne    8463aeb <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x15d>
 8463abf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8463ac6:	e8 35 1d 2c 00       	call   8725800 <__cxa_allocate_exception>
 8463acb:	89 c2                	mov    %eax,%edx
 8463acd:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 8463ad3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8463ada:	00 
 8463adb:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8463ae2:	08 
 8463ae3:	89 04 24             	mov    %eax,(%esp)
 8463ae6:	e8 65 11 2c 00       	call   8724c50 <__cxa_throw>
 8463aeb:	8b 45 08             	mov    0x8(%ebp),%eax
 8463aee:	8d 48 0c             	lea    0xc(%eax),%ecx
 8463af1:	8b 45 08             	mov    0x8(%ebp),%eax
 8463af4:	8d 50 14             	lea    0x14(%eax),%edx
 8463af7:	8b 45 08             	mov    0x8(%ebp),%eax
 8463afa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8463afe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8463b01:	89 44 24 08          	mov    %eax,0x8(%esp)
 8463b05:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8463b09:	89 14 24             	mov    %edx,(%esp)
 8463b0c:	e8 23 cb ff ff       	call   8460634 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_>
 8463b11:	83 f0 01             	xor    $0x1,%eax
 8463b14:	84 c0                	test   %al,%al
 8463b16:	74 2c                	je     8463b44 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x1b6>
 8463b18:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8463b1f:	e8 dc 1c 2c 00       	call   8725800 <__cxa_allocate_exception>
 8463b24:	89 c2                	mov    %eax,%edx
 8463b26:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 8463b2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8463b33:	00 
 8463b34:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8463b3b:	08 
 8463b3c:	89 04 24             	mov    %eax,(%esp)
 8463b3f:	e8 0c 11 2c 00       	call   8724c50 <__cxa_throw>
 8463b44:	8b 45 08             	mov    0x8(%ebp),%eax
 8463b47:	05 10 01 00 00       	add    $0x110,%eax
 8463b4c:	89 04 24             	mov    %eax,(%esp)
 8463b4f:	e8 c4 e3 ff ff       	call   8461f18 <_ZN8WongWork11CDeathTower9CPlayData5resetEv>
 8463b54:	8b 45 08             	mov    0x8(%ebp),%eax
 8463b57:	8b 00                	mov    (%eax),%eax
 8463b59:	8b 55 08             	mov    0x8(%ebp),%edx
 8463b5c:	81 c2 10 01 00 00    	add    $0x110,%edx
 8463b62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463b66:	89 14 24             	mov    %edx,(%esp)
 8463b69:	e8 94 e1 ff ff       	call   8461d02 <_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty>
 8463b6e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8463b75:	e9 31 01 00 00       	jmp    8463cab <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x31d>
 8463b7a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8463b81:	8b 45 08             	mov    0x8(%ebp),%eax
 8463b84:	8b 00                	mov    (%eax),%eax
 8463b86:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8463b89:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463b8d:	89 04 24             	mov    %eax,(%esp)
 8463b90:	e8 cf 1b ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8463b95:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8463b98:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8463b9c:	74 1b                	je     8463bb9 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x22b>
 8463b9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8463ba1:	8b 00                	mov    (%eax),%eax
 8463ba3:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8463ba6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463baa:	89 04 24             	mov    %eax,(%esp)
 8463bad:	e8 b6 1c ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8463bb2:	83 f0 01             	xor    $0x1,%eax
 8463bb5:	84 c0                	test   %al,%al
 8463bb7:	74 07                	je     8463bc0 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x232>
 8463bb9:	b8 01 00 00 00       	mov    $0x1,%eax
 8463bbe:	eb 05                	jmp    8463bc5 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x237>
 8463bc0:	b8 00 00 00 00       	mov    $0x0,%eax
 8463bc5:	84 c0                	test   %al,%al
 8463bc7:	0f 85 d9 00 00 00    	jne    8463ca6 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x318>
 8463bcd:	8b 45 08             	mov    0x8(%ebp),%eax
 8463bd0:	83 c0 0c             	add    $0xc,%eax
 8463bd3:	89 04 24             	mov    %eax,(%esp)
 8463bd6:	e8 15 0a dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8463bdb:	89 04 24             	mov    %eax,(%esp)
 8463bde:	e8 b7 19 ce ff       	call   814559a <_ZNK8CDungeon13get_min_levelEv>
 8463be3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8463be6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8463be9:	89 04 24             	mov    %eax,(%esp)
 8463bec:	e8 c7 66 c7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8463bf1:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8463bf4:	0f 9c c0             	setl   %al
 8463bf7:	84 c0                	test   %al,%al
 8463bf9:	74 2c                	je     8463c27 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x299>
 8463bfb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8463c02:	e8 f9 1b 2c 00       	call   8725800 <__cxa_allocate_exception>
 8463c07:	89 c2                	mov    %eax,%edx
 8463c09:	c7 02 0e 00 00 00    	movl   $0xe,(%edx)
 8463c0f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8463c16:	00 
 8463c17:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8463c1e:	08 
 8463c1f:	89 04 24             	mov    %eax,(%esp)
 8463c22:	e8 29 10 2c 00       	call   8724c50 <__cxa_throw>
 8463c27:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8463c2e:	00 
 8463c2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8463c32:	89 04 24             	mov    %eax,(%esp)
 8463c35:	e8 78 b1 21 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 8463c3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8463c3d:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8463c43:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8463c4a:	00 
 8463c4b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8463c4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463c52:	89 14 24             	mov    %edx,(%esp)
 8463c55:	e8 00 5f 00 00       	call   8469b5a <_ZN8WongWork11CDeathTower9CPlayData14setMemberAliveEib>
 8463c5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8463c5d:	8b 00                	mov    (%eax),%eax
 8463c5f:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8463c65:	83 f8 01             	cmp    $0x1,%eax
 8463c68:	74 1e                	je     8463c88 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x2fa>
 8463c6a:	e8 ec a4 1a 00       	call   860e15b <_Z29GetInstanceDungeonEntranceLogv>
 8463c6f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8463c76:	00 
 8463c77:	8b 55 0c             	mov    0xc(%ebp),%edx
 8463c7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463c7e:	89 04 24             	mov    %eax,(%esp)
 8463c81:	e8 68 a5 1a 00       	call   860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>
 8463c86:	eb 1f                	jmp    8463ca7 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x319>
 8463c88:	e8 ce a4 1a 00       	call   860e15b <_Z29GetInstanceDungeonEntranceLogv>
 8463c8d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8463c94:	00 
 8463c95:	8b 55 0c             	mov    0xc(%ebp),%edx
 8463c98:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463c9c:	89 04 24             	mov    %eax,(%esp)
 8463c9f:	e8 4a a5 1a 00       	call   860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>
 8463ca4:	eb 01                	jmp    8463ca7 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x319>
 8463ca6:	90                   	nop
 8463ca7:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8463cab:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 8463caf:	0f 9e c0             	setle  %al
 8463cb2:	84 c0                	test   %al,%al
 8463cb4:	0f 85 c0 fe ff ff    	jne    8463b7a <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x1ec>
 8463cba:	8b 45 08             	mov    0x8(%ebp),%eax
 8463cbd:	8b 00                	mov    (%eax),%eax
 8463cbf:	c7 44 24 04 2d 00 00 	movl   $0x2d,0x4(%esp)
 8463cc6:	00 
 8463cc7:	89 04 24             	mov    %eax,(%esp)
 8463cca:	e8 a7 71 13 00       	call   859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>
 8463ccf:	8b 45 08             	mov    0x8(%ebp),%eax
 8463cd2:	8b 00                	mov    (%eax),%eax
 8463cd4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8463cdb:	ff 
 8463cdc:	89 04 24             	mov    %eax,(%esp)
 8463cdf:	e8 44 1b ce ff       	call   8145828 <_ZN6CParty18SetSelectedEPLPCmdEc>
 8463ce4:	8b 45 08             	mov    0x8(%ebp),%eax
 8463ce7:	8b 00                	mov    (%eax),%eax
 8463ce9:	05 24 0b 00 00       	add    $0xb24,%eax
 8463cee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8463cf5:	00 
 8463cf6:	89 04 24             	mov    %eax,(%esp)
 8463cf9:	e8 a6 6d ea ff       	call   830aaa4 <_ZN13CBattle_Field24getRandomBuffDungeonTypeEi>
 8463cfe:	8b 55 08             	mov    0x8(%ebp),%edx
 8463d01:	8b 12                	mov    (%edx),%edx
 8463d03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463d07:	89 14 24             	mov    %edx,(%esp)
 8463d0a:	e8 05 7b 13 00       	call   859b814 <_ZN6CParty18choose_random_buffEN10QuickParty17RandomBuffDungeonE>
 8463d0f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463d12:	89 04 24             	mov    %eax,(%esp)
 8463d15:	e8 72 5d 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8463d1a:	c7 44 24 08 8e 00 00 	movl   $0x8e,0x8(%esp)
 8463d21:	00 
 8463d22:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8463d29:	00 
 8463d2a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463d2d:	89 04 24             	mov    %eax,(%esp)
 8463d30:	e8 c7 7b c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8463d35:	8b 45 0c             	mov    0xc(%ebp),%eax
 8463d38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463d3c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463d3f:	89 04 24             	mov    %eax,(%esp)
 8463d42:	e8 f5 7b c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8463d47:	8b 45 08             	mov    0x8(%ebp),%eax
 8463d4a:	83 c0 0c             	add    $0xc,%eax
 8463d4d:	89 04 24             	mov    %eax,(%esp)
 8463d50:	e8 5f 5d 00 00       	call   8469ab4 <_ZN8WongWork11CDeathTower11CDungeonMgr11getEndStageEv>
 8463d55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463d59:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463d5c:	89 04 24             	mov    %eax,(%esp)
 8463d5f:	e8 40 61 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8463d64:	8b 45 08             	mov    0x8(%ebp),%eax
 8463d67:	8b 00                	mov    (%eax),%eax
 8463d69:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8463d6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463d73:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463d76:	89 04 24             	mov    %eax,(%esp)
 8463d79:	e8 a2 7b c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8463d7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8463d81:	8b 00                	mov    (%eax),%eax
 8463d83:	85 c0                	test   %eax,%eax
 8463d85:	74 1e                	je     8463da5 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x417>
 8463d87:	8b 45 08             	mov    0x8(%ebp),%eax
 8463d8a:	8b 00                	mov    (%eax),%eax
 8463d8c:	89 04 24             	mov    %eax,(%esp)
 8463d8f:	e8 a6 af ea ff       	call   830ed3a <_ZN6CParty20get_random_buff_typeEv>
 8463d94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463d98:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463d9b:	89 04 24             	mov    %eax,(%esp)
 8463d9e:	e8 7d 7b c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8463da3:	eb 13                	jmp    8463db8 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x42a>
 8463da5:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 8463dac:	00 
 8463dad:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463db0:	89 04 24             	mov    %eax,(%esp)
 8463db3:	e8 68 7b c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8463db8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8463dbf:	00 
 8463dc0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463dc3:	89 04 24             	mov    %eax,(%esp)
 8463dc6:	e8 8d 7b c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8463dcb:	8b 45 08             	mov    0x8(%ebp),%eax
 8463dce:	8b 00                	mov    (%eax),%eax
 8463dd0:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8463dd3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463dd7:	89 04 24             	mov    %eax,(%esp)
 8463dda:	e8 6f 93 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8463ddf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463de2:	89 04 24             	mov    %eax,(%esp)
 8463de5:	e8 fc 7a c6 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8463dea:	c7 44 24 08 8f 00 00 	movl   $0x8f,0x8(%esp)
 8463df1:	00 
 8463df2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8463df9:	00 
 8463dfa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463dfd:	89 04 24             	mov    %eax,(%esp)
 8463e00:	e8 f7 7a c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8463e05:	8b 45 08             	mov    0x8(%ebp),%eax
 8463e08:	8d 50 14             	lea    0x14(%eax),%edx
 8463e0b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463e0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463e12:	89 14 24             	mov    %edx,(%esp)
 8463e15:	e8 0e da ff ff       	call   8461828 <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard>
 8463e1a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8463e21:	00 
 8463e22:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463e25:	89 04 24             	mov    %eax,(%esp)
 8463e28:	e8 2b 7b c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8463e2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8463e30:	8b 00                	mov    (%eax),%eax
 8463e32:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8463e35:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463e39:	89 04 24             	mov    %eax,(%esp)
 8463e3c:	e8 0d 93 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8463e41:	8b 45 08             	mov    0x8(%ebp),%eax
 8463e44:	89 04 24             	mov    %eax,(%esp)
 8463e47:	e8 ac 32 00 00       	call   84670f8 <_ZN8WongWork11CDeathTower17_checkMemberReadyEv>
 8463e4c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8463e53:	00 
 8463e54:	8b 45 08             	mov    0x8(%ebp),%eax
 8463e57:	89 04 24             	mov    %eax,(%esp)
 8463e5a:	e8 d5 5d 00 00       	call   8469c34 <_ZN8WongWork11CDeathTower13setTowerStateENS0_16ENUM_TOWER_STATEE>
 8463e5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8463e62:	89 04 24             	mov    %eax,(%esp)
 8463e65:	e8 e6 3c 00 00       	call   8467b50 <_ZN8WongWork11CDeathTower18_onStartDeathTowerEv>
 8463e6a:	eb 15                	jmp    8463e81 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x4f3>
 8463e6c:	89 d3                	mov    %edx,%ebx
 8463e6e:	89 c6                	mov    %eax,%esi
 8463e70:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463e73:	89 04 24             	mov    %eax,(%esp)
 8463e76:	e8 25 5c 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8463e7b:	89 f0                	mov    %esi,%eax
 8463e7d:	89 da                	mov    %ebx,%edx
 8463e7f:	eb 10                	jmp    8463e91 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x503>
 8463e81:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8463e84:	89 04 24             	mov    %eax,(%esp)
 8463e87:	e8 14 5c 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8463e8c:	e9 97 01 00 00       	jmp    8464028 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x69a>
 8463e91:	83 fa 01             	cmp    $0x1,%edx
 8463e94:	74 08                	je     8463e9e <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x510>
 8463e96:	89 04 24             	mov    %eax,(%esp)
 8463e99:	e8 b2 f8 67 00       	call   8ae3750 <_Unwind_Resume>
 8463e9e:	89 04 24             	mov    %eax,(%esp)
 8463ea1:	e8 3a 1e 2c 00       	call   8725ce0 <__cxa_begin_catch>
 8463ea6:	8b 00                	mov    (%eax),%eax
 8463ea8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8463eab:	83 7d f4 11          	cmpl   $0x11,-0xc(%ebp)
 8463eaf:	0f 85 b3 00 00 00    	jne    8463f68 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x5da>
 8463eb5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8463eb8:	89 04 24             	mov    %eax,(%esp)
 8463ebb:	e8 8c 9e 12 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8463ec0:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8463ec7:	00 
 8463ec8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8463ecf:	00 
 8463ed0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8463ed3:	89 04 24             	mov    %eax,(%esp)
 8463ed6:	e8 21 7a c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8463edb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8463ee2:	00 
 8463ee3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8463ee6:	89 04 24             	mov    %eax,(%esp)
 8463ee9:	e8 32 7a c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8463eee:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 8463ef5:	00 
 8463ef6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8463ef9:	89 04 24             	mov    %eax,(%esp)
 8463efc:	e8 1f 7a c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8463f01:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8463f05:	0f b6 c0             	movzbl %al,%eax
 8463f08:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463f0c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8463f0f:	89 04 24             	mov    %eax,(%esp)
 8463f12:	e8 09 7a c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8463f17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8463f1e:	00 
 8463f1f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8463f22:	89 04 24             	mov    %eax,(%esp)
 8463f25:	e8 2e 7a c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8463f2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8463f2d:	8b 00                	mov    (%eax),%eax
 8463f2f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8463f32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463f36:	89 04 24             	mov    %eax,(%esp)
 8463f39:	e8 10 92 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8463f3e:	eb 18                	jmp    8463f58 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x5ca>
 8463f40:	89 d3                	mov    %edx,%ebx
 8463f42:	89 c6                	mov    %eax,%esi
 8463f44:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8463f47:	89 04 24             	mov    %eax,(%esp)
 8463f4a:	e8 31 9f 12 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8463f4f:	89 f0                	mov    %esi,%eax
 8463f51:	89 da                	mov    %ebx,%edx
 8463f53:	e9 bb 00 00 00       	jmp    8464013 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x685>
 8463f58:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8463f5b:	89 04 24             	mov    %eax,(%esp)
 8463f5e:	e8 1d 9f 12 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8463f63:	e9 94 00 00 00       	jmp    8463ffc <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x66e>
 8463f68:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8463f6b:	89 04 24             	mov    %eax,(%esp)
 8463f6e:	e8 d9 9d 12 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8463f73:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8463f7a:	00 
 8463f7b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8463f82:	00 
 8463f83:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8463f86:	89 04 24             	mov    %eax,(%esp)
 8463f89:	e8 6e 79 c6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8463f8e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8463f95:	00 
 8463f96:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8463f99:	89 04 24             	mov    %eax,(%esp)
 8463f9c:	e8 7f 79 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8463fa1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8463fa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463fa8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8463fab:	89 04 24             	mov    %eax,(%esp)
 8463fae:	e8 6d 79 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8463fb3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8463fba:	00 
 8463fbb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8463fbe:	89 04 24             	mov    %eax,(%esp)
 8463fc1:	e8 92 79 c6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8463fc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8463fc9:	8b 00                	mov    (%eax),%eax
 8463fcb:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8463fce:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463fd2:	89 04 24             	mov    %eax,(%esp)
 8463fd5:	e8 74 91 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8463fda:	eb 15                	jmp    8463ff1 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x663>
 8463fdc:	89 d3                	mov    %edx,%ebx
 8463fde:	89 c6                	mov    %eax,%esi
 8463fe0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8463fe3:	89 04 24             	mov    %eax,(%esp)
 8463fe6:	e8 95 9e 12 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8463feb:	89 f0                	mov    %esi,%eax
 8463fed:	89 da                	mov    %ebx,%edx
 8463fef:	eb 22                	jmp    8464013 <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x685>
 8463ff1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8463ff4:	89 04 24             	mov    %eax,(%esp)
 8463ff7:	e8 84 9e 12 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8463ffc:	8b 45 08             	mov    0x8(%ebp),%eax
 8463fff:	89 04 24             	mov    %eax,(%esp)
 8464002:	e8 19 3b 00 00       	call   8467b20 <_ZN8WongWork11CDeathTower8_destroyEv>
 8464007:	bb 00 00 00 00       	mov    $0x0,%ebx
 846400c:	e8 1f 1c 2c 00       	call   8725c30 <__cxa_end_catch>
 8464011:	eb 1a                	jmp    846402d <_ZN8WongWork11CDeathTower15handleStartGameEic17ENUM_DUNGEON_TYPE+0x69f>
 8464013:	89 d3                	mov    %edx,%ebx
 8464015:	89 c6                	mov    %eax,%esi
 8464017:	e8 14 1c 2c 00       	call   8725c30 <__cxa_end_catch>
 846401c:	89 f0                	mov    %esi,%eax
 846401e:	89 da                	mov    %ebx,%edx
 8464020:	89 04 24             	mov    %eax,(%esp)
 8464023:	e8 28 f7 67 00       	call   8ae3750 <_Unwind_Resume>
 8464028:	bb 01 00 00 00       	mov    $0x1,%ebx
 846402d:	89 d8                	mov    %ebx,%eax
 846402f:	83 c4 60             	add    $0x60,%esp
 8464032:	5b                   	pop    %ebx
 8464033:	5e                   	pop    %esi
 8464034:	5d                   	pop    %ebp
 8464035:	c3                   	ret

```

```c
// WongWork::CDeathTower::handleStartGame @ 0x846398e

/* WongWork::CDeathTower::handleStartGame(int, char, ENUM_DUNGEON_TYPE) */

undefined4 __thiscall
WongWork::CDeathTower::handleStartGame(CDeathTower *this,int param_1,undefined4 param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  CDungeon *this_00;
  CDungeonEntranceLog *pCVar6;
  undefined4 uVar7;
  int iVar8;
  CPacketHandler local_34 [15];
  uchar local_25;
  int local_24;
  CMap *local_20;
  int local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  
  local_25 = '\0';
  if (param_4 == 1) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 8;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 084639cd to 08463d19 has its CatchHandler @ 08463e91 */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  CDungeonMgr::reset((CDungeonMgr *)(this + 0xc));
  iVar8 = param_1;
  cVar2 = CDungeonMgr::initDungeonMgr((int)(this + 0xc));
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4,iVar8);
    *puVar3 = 0x16;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  local_24 = 0;
  local_24 = _checkStartGameCondition(this,&local_25);
  if (local_24 != 0) {
    piVar4 = (int *)__cxa_allocate_exception(4);
    *piVar4 = local_24;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar4,&ENUM_ERROR::typeinfo,0);
  }
  CStage::reset((CStage *)(this + 0x14));
  CStage::resetCurrentStage((CStage *)(this + 0x14));
  uVar5 = CStage::getCurrentStage((CStage *)(this + 0x14));
  local_20 = (CMap *)CDungeonMgr::getStageMap((CDungeonMgr *)(this + 0xc),uVar5);
  if (local_20 == (CMap *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  cVar2 = CStage::consistMap((CStage *)(this + 0x14),(CDungeonMgr *)(this + 0xc),local_20,this);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  CPlayData::reset((CPlayData *)(this + 0x110));
  CPlayData::makeStartMemberInfo((CPlayData *)(this + 0x110),*(CParty **)this);
  local_1c = 0;
  do {
    if (3 < local_1c) {
      CParty::gen_timer_key(*(CParty **)this,0x2d);
      CParty::SetSelectedEPLPCmd(*(CParty **)this,-1);
      uVar7 = CBattle_Field::getRandomBuffDungeonType((CBattle_Field *)(*(int *)this + 0xb24),0);
      CParty::choose_random_buff(*(CParty **)this,uVar7);
      CPacketHandler::CPacketHandler(local_34);
                    /* try { // try from 08463d30 to 08463e69 has its CatchHandler @ 08463e6c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x8e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,param_1);
      iVar8 = CDungeonMgr::getEndStage((CDungeonMgr *)(this + 0xc));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,iVar8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*(int *)(*(int *)this + 0xcd8));
      if (*(int *)this == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0xb);
      }
      else {
        iVar8 = CParty::get_random_buff_type(*(CParty **)this);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar8);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_34);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x8f);
      CStage::makeStagePacket((CStage *)(this + 0x14),(PacketGuard *)local_34);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_34);
      _checkMemberReady(this);
      setTowerState(this,2);
      _onStartDeathTower(this);
                    /* try { // try from 08463e87 to 08463e8b has its CatchHandler @ 08463e91 */
      CPacketHandler::~CPacketHandler(local_34);
      return 1;
    }
    local_18 = (CUserCharacInfo *)0x0;
    local_18 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_1c);
    if (local_18 == (CUserCharacInfo *)0x0) {
LAB_08463bb9:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_1c);
      if (cVar2 != '\x01') goto LAB_08463bb9;
      bVar1 = false;
    }
    if (!bVar1) {
      this_00 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
      local_14 = CDungeon::get_min_level(this_00);
      iVar8 = CUserCharacInfo::get_charac_level(local_18);
      if (iVar8 < local_14) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0xe;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      CUser::set_state((CUser *)local_18,10);
      CPlayData::setMemberAlive((CPlayData *)(this + 0x110),local_1c,true);
      if (*(int *)(*(int *)this + 0xcd8) == 1) {
        pCVar6 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
        CDungeonEntranceLog::IncrementDungeonEntrance(pCVar6,param_1,true);
      }
      else {
        pCVar6 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
        CDungeonEntranceLog::IncrementDungeonEntrance(pCVar6,param_1,false);
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}

```

---

## handleUseStackable

```asm
// === 084662cc WongWork::CDeathTower::handleUseStackable  [0x084662cc-0x846638b] ===
 84662cc:	55                   	push   %ebp
 84662cd:	89 e5                	mov    %esp,%ebp
 84662cf:	56                   	push   %esi
 84662d0:	53                   	push   %ebx
 84662d1:	83 ec 30             	sub    $0x30,%esp
 84662d4:	8b 45 14             	mov    0x14(%ebp),%eax
 84662d7:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 84662db:	0f b7 75 e4          	movzwl -0x1c(%ebp),%esi
 84662df:	8b 45 10             	mov    0x10(%ebp),%eax
 84662e2:	89 04 24             	mov    %eax,(%esp)
 84662e5:	e8 5b 15 c9 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 84662ea:	89 c3                	mov    %eax,%ebx
 84662ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84662ef:	89 04 24             	mov    %eax,(%esp)
 84662f2:	e8 87 3f c7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84662f7:	89 74 24 08          	mov    %esi,0x8(%esp)
 84662fb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84662ff:	89 04 24             	mov    %eax,(%esp)
 8466302:	e8 d7 5e 09 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8466307:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846630a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 846630e:	75 07                	jne    8466317 <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0x4b>
 8466310:	b8 00 00 00 00       	mov    $0x0,%eax
 8466315:	eb 6d                	jmp    8466384 <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xb8>
 8466317:	8b 45 08             	mov    0x8(%ebp),%eax
 846631a:	83 c0 0c             	add    $0xc,%eax
 846631d:	89 04 24             	mov    %eax,(%esp)
 8466320:	e8 cb e2 dc ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8466325:	89 04 24             	mov    %eax,(%esp)
 8466328:	e8 a1 51 dc ff       	call   822b4ce <_ZNK8CDungeon27limitOfStackableItemInTowerEv>
 846632d:	84 c0                	test   %al,%al
 846632f:	74 4e                	je     846637f <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xb3>
 8466331:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8466334:	8b 40 02             	mov    0x2(%eax),%eax
 8466337:	3d 63 19 00 00       	cmp    $0x1963,%eax
 846633c:	76 0d                	jbe    846634b <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0x7f>
 846633e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8466341:	8b 40 02             	mov    0x2(%eax),%eax
 8466344:	3d 57 1b 00 00       	cmp    $0x1b57,%eax
 8466349:	76 34                	jbe    846637f <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xb3>
 846634b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846634e:	8b 40 02             	mov    0x2(%eax),%eax
 8466351:	83 f8 18             	cmp    $0x18,%eax
 8466354:	74 1f                	je     8466375 <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xa9>
 8466356:	83 f8 18             	cmp    $0x18,%eax
 8466359:	77 07                	ja     8466362 <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0x96>
 846635b:	83 f8 0a             	cmp    $0xa,%eax
 846635e:	74 18                	je     8466378 <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xac>
 8466360:	eb 0c                	jmp    846636e <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xa2>
 8466362:	83 f8 33             	cmp    $0x33,%eax
 8466365:	74 14                	je     846637b <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xaf>
 8466367:	3d 8a 97 28 00       	cmp    $0x28978a,%eax
 846636c:	74 10                	je     846637e <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xb2>
 846636e:	b8 00 00 00 00       	mov    $0x0,%eax
 8466373:	eb 0f                	jmp    8466384 <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xb8>
 8466375:	90                   	nop
 8466376:	eb 07                	jmp    846637f <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xb3>
 8466378:	90                   	nop
 8466379:	eb 04                	jmp    846637f <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xb3>
 846637b:	90                   	nop
 846637c:	eb 01                	jmp    846637f <_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt+0xb3>
 846637e:	90                   	nop
 846637f:	b8 01 00 00 00       	mov    $0x1,%eax
 8466384:	83 c4 30             	add    $0x30,%esp
 8466387:	5b                   	pop    %ebx
 8466388:	5e                   	pop    %esi
 8466389:	5d                   	pop    %ebp
 846638a:	c3                   	ret
 846638b:	90                   	nop

```

```c
// WongWork::CDeathTower::handleUseStackable @ 0x84662cc

/* WongWork::CDeathTower::handleUseStackable(CUser*, ENUM_ITEMSPACE, unsigned short) */

undefined4 __thiscall
WongWork::CDeathTower::handleUseStackable
          (CDeathTower *this,CUserCharacInfo *param_1,undefined4 param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  CDungeon *this_01;
  
  iVar3 = GetInvenTypeFromItemSpace(param_3);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(param_1);
  iVar3 = CInventory::GetInvenRef(this_00,iVar3,param_4 & 0xffff);
  if (iVar3 == 0) {
    return 0;
  }
  this_01 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
  cVar2 = CDungeon::limitOfStackableItemInTower(this_01);
  if ((cVar2 != '\0') &&
     (((*(uint *)(iVar3 + 2) < 0x1964 || (6999 < *(uint *)(iVar3 + 2))) &&
      (uVar1 = *(uint *)(iVar3 + 2), uVar1 != 0x18)))) {
    if (uVar1 < 0x19) {
      if (uVar1 != 10) {
        return 0;
      }
    }
    else if ((uVar1 != 0x33) && (uVar1 != 0x28978a)) {
      return 0;
    }
  }
  return 1;
}

```

---

## onLeaveUser

```asm
// === 084636f2 WongWork::CDeathTower::onLeaveUser  [0x084636f2-0x846388f] ===
 84636f2:	55                   	push   %ebp
 84636f3:	89 e5                	mov    %esp,%ebp
 84636f5:	57                   	push   %edi
 84636f6:	56                   	push   %esi
 84636f7:	53                   	push   %ebx
 84636f8:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 84636fe:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8463705:	ff 
 8463706:	8b 45 0c             	mov    0xc(%ebp),%eax
 8463709:	89 04 24             	mov    %eax,(%esp)
 846370c:	e8 5d 63 00 00       	call   8469a6e <_ZN5CUser18setDeathTowerIndexEs>
 8463711:	8b 45 0c             	mov    0xc(%ebp),%eax
 8463714:	89 04 24             	mov    %eax,(%esp)
 8463717:	e8 72 6b c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 846371c:	89 04 24             	mov    %eax,(%esp)
 846371f:	e8 6e 6c 0a 00       	call   850a392 <_ZN10CInventory12RemoveFPItemEv>
 8463724:	8d 95 e7 fe ff ff    	lea    -0x119(%ebp),%edx
 846372a:	bb 00 01 00 00       	mov    $0x100,%ebx
 846372f:	b8 00 00 00 00       	mov    $0x0,%eax
 8463734:	89 d1                	mov    %edx,%ecx
 8463736:	83 e1 01             	and    $0x1,%ecx
 8463739:	85 c9                	test   %ecx,%ecx
 846373b:	74 08                	je     8463745 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x53>
 846373d:	88 02                	mov    %al,(%edx)
 846373f:	83 c2 01             	add    $0x1,%edx
 8463742:	83 eb 01             	sub    $0x1,%ebx
 8463745:	89 d1                	mov    %edx,%ecx
 8463747:	83 e1 02             	and    $0x2,%ecx
 846374a:	85 c9                	test   %ecx,%ecx
 846374c:	74 09                	je     8463757 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x65>
 846374e:	66 89 02             	mov    %ax,(%edx)
 8463751:	83 c2 02             	add    $0x2,%edx
 8463754:	83 eb 02             	sub    $0x2,%ebx
 8463757:	89 d9                	mov    %ebx,%ecx
 8463759:	c1 e9 02             	shr    $0x2,%ecx
 846375c:	89 d7                	mov    %edx,%edi
 846375e:	f3 ab                	rep stos %eax,%es:(%edi)
 8463760:	89 fa                	mov    %edi,%edx
 8463762:	89 d9                	mov    %ebx,%ecx
 8463764:	83 e1 02             	and    $0x2,%ecx
 8463767:	85 c9                	test   %ecx,%ecx
 8463769:	74 06                	je     8463771 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x7f>
 846376b:	66 89 02             	mov    %ax,(%edx)
 846376e:	83 c2 02             	add    $0x2,%edx
 8463771:	89 d9                	mov    %ebx,%ecx
 8463773:	83 e1 01             	and    $0x1,%ecx
 8463776:	85 c9                	test   %ecx,%ecx
 8463778:	74 05                	je     846377f <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x8d>
 846377a:	88 02                	mov    %al,(%edx)
 846377c:	83 c2 01             	add    $0x1,%edx
 846377f:	8b 45 08             	mov    0x8(%ebp),%eax
 8463782:	8b 00                	mov    (%eax),%eax
 8463784:	85 c0                	test   %eax,%eax
 8463786:	74 66                	je     84637ee <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0xfc>
 8463788:	8b 45 08             	mov    0x8(%ebp),%eax
 846378b:	8b 00                	mov    (%eax),%eax
 846378d:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 8463793:	88 45 e7             	mov    %al,-0x19(%ebp)
 8463796:	0f be 75 e7          	movsbl -0x19(%ebp),%esi
 846379a:	8b 45 08             	mov    0x8(%ebp),%eax
 846379d:	8b 00                	mov    (%eax),%eax
 846379f:	8d 95 e7 fe ff ff    	lea    -0x119(%ebp),%edx
 84637a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84637a9:	89 04 24             	mov    %eax,(%esp)
 84637ac:	e8 d1 20 ce ff       	call   8145882 <_ZN6CParty14getMemberNamesEPc>
 84637b1:	89 c3                	mov    %eax,%ebx
 84637b3:	8b 45 08             	mov    0x8(%ebp),%eax
 84637b6:	83 c0 0c             	add    $0xc,%eax
 84637b9:	89 04 24             	mov    %eax,(%esp)
 84637bc:	e8 2f 0e dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 84637c1:	89 04 24             	mov    %eax,(%esp)
 84637c4:	e8 dd 1d ce ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 84637c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84637cc:	81 c2 00 97 07 00    	add    $0x79700,%edx
 84637d2:	89 74 24 10          	mov    %esi,0x10(%esp)
 84637d6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84637da:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84637e1:	00 
 84637e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84637e6:	89 14 24             	mov    %edx,(%esp)
 84637e9:	e8 ee 11 22 00       	call   86849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>
 84637ee:	8b 45 08             	mov    0x8(%ebp),%eax
 84637f1:	8b 00                	mov    (%eax),%eax
 84637f3:	85 c0                	test   %eax,%eax
 84637f5:	74 19                	je     8463810 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x11e>
 84637f7:	8b 45 08             	mov    0x8(%ebp),%eax
 84637fa:	83 c0 0c             	add    $0xc,%eax
 84637fd:	89 04 24             	mov    %eax,(%esp)
 8463800:	e8 eb 0d dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8463805:	85 c0                	test   %eax,%eax
 8463807:	74 07                	je     8463810 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x11e>
 8463809:	b8 01 00 00 00       	mov    $0x1,%eax
 846380e:	eb 05                	jmp    8463815 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x123>
 8463810:	b8 00 00 00 00       	mov    $0x0,%eax
 8463815:	84 c0                	test   %al,%al
 8463817:	74 31                	je     846384a <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x158>
 8463819:	8b 45 08             	mov    0x8(%ebp),%eax
 846381c:	83 c0 0c             	add    $0xc,%eax
 846381f:	89 04 24             	mov    %eax,(%esp)
 8463822:	e8 c9 0d dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8463827:	89 04 24             	mov    %eax,(%esp)
 846382a:	e8 c1 a4 c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 846382f:	89 c3                	mov    %eax,%ebx
 8463831:	e8 25 a9 1a 00       	call   860e15b <_Z29GetInstanceDungeonEntranceLogv>
 8463836:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 846383d:	00 
 846383e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8463842:	89 04 24             	mov    %eax,(%esp)
 8463845:	e8 da aa 1a 00       	call   860e324 <_ZN19CDungeonEntranceLog24DecrementDungeonEntranceEib>
 846384a:	8b 45 08             	mov    0x8(%ebp),%eax
 846384d:	8b 00                	mov    (%eax),%eax
 846384f:	85 c0                	test   %eax,%eax
 8463851:	74 11                	je     8463864 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x172>
 8463853:	8b 45 08             	mov    0x8(%ebp),%eax
 8463856:	8b 00                	mov    (%eax),%eax
 8463858:	89 04 24             	mov    %eax,(%esp)
 846385b:	e8 0a 69 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8463860:	85 c0                	test   %eax,%eax
 8463862:	7f 07                	jg     846386b <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x179>
 8463864:	b8 01 00 00 00       	mov    $0x1,%eax
 8463869:	eb 05                	jmp    8463870 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x17e>
 846386b:	b8 00 00 00 00       	mov    $0x0,%eax
 8463870:	84 c0                	test   %al,%al
 8463872:	74 0b                	je     846387f <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser+0x18d>
 8463874:	8b 45 08             	mov    0x8(%ebp),%eax
 8463877:	89 04 24             	mov    %eax,(%esp)
 846387a:	e8 a1 42 00 00       	call   8467b20 <_ZN8WongWork11CDeathTower8_destroyEv>
 846387f:	b8 01 00 00 00       	mov    $0x1,%eax
 8463884:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 846388a:	5b                   	pop    %ebx
 846388b:	5e                   	pop    %esi
 846388c:	5f                   	pop    %edi
 846388d:	5d                   	pop    %ebp
 846388e:	c3                   	ret
 846388f:	90                   	nop

```

```c
// WongWork::CDeathTower::onLeaveUser @ 0x84636f2

/* WongWork::CDeathTower::onLeaveUser(CUser*) */

undefined4 __thiscall WongWork::CDeathTower::onLeaveUser(CDeathTower *this,CUser *param_1)

{
  CInventory *this_00;
  CDungeon *pCVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  char local_11d;
  char local_11c [255];
  char local_1d;
  
  bVar8 = 0;
  CUser::setDeathTowerIndex(param_1,-1);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::RemoveFPItem(this_00);
  pcVar4 = &local_11d;
  uVar5 = 0x100;
  bVar7 = ((uint)pcVar4 & 1) != 0;
  if (bVar7) {
    local_11d = '\0';
    pcVar4 = local_11c;
    uVar5 = 0xff;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (bVar7) {
    *pcVar4 = '\0';
  }
  if (*(int *)this != 0) {
    local_1d = (char)*(undefined4 *)(*(int *)this + 0xcd8);
    iVar6 = (int)local_1d;
    pcVar4 = (char *)CParty::getMemberNames(*(CParty **)this,&local_11d);
    pCVar1 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
    pcVar2 = (char *)CDungeon::GetDungeonName(pCVar1);
    cUserHistoryLog::LeaveDungeon((cUserHistoryLog *)(param_1 + 0x79700),pcVar2,0,pcVar4,iVar6);
  }
  if (*(int *)this == 0) {
LAB_08463810:
    bVar7 = false;
  }
  else {
    iVar6 = CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
    if (iVar6 == 0) goto LAB_08463810;
    bVar7 = true;
  }
  if (bVar7) {
    pCVar1 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
    bVar7 = (bool)CDungeon::get_index(pCVar1);
    iVar6 = GetInstanceDungeonEntranceLog();
    CDungeonEntranceLog::DecrementDungeonEntrance(iVar6,bVar7);
  }
  if (*(int *)this != 0) {
    iVar6 = CParty::get_member_count(*(CParty **)this);
    if (0 < iVar6) {
      bVar7 = false;
      goto LAB_08463870;
    }
  }
  bVar7 = true;
LAB_08463870:
  if (bVar7) {
    _destroy(this);
  }
  return 1;
}

```

---

## onTimer

```asm
// === 08462aae WongWork::CDeathTower::onTimer  [0x08462aae-0x84636f1] ===
 8462aae:	55                   	push   %ebp
 8462aaf:	89 e5                	mov    %esp,%ebp
 8462ab1:	57                   	push   %edi
 8462ab2:	56                   	push   %esi
 8462ab3:	53                   	push   %ebx
 8462ab4:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 8462aba:	8b 45 10             	mov    0x10(%ebp),%eax
 8462abd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8462ac1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8462ac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462ac8:	8b 45 08             	mov    0x8(%ebp),%eax
 8462acb:	89 04 24             	mov    %eax,(%esp)
 8462ace:	e8 95 71 00 00       	call   8469c68 <_ZN8WongWork11CDeathTower14_checkTimerKeyE13TIMER_MESSAGEj>
 8462ad3:	83 f0 01             	xor    $0x1,%eax
 8462ad6:	84 c0                	test   %al,%al
 8462ad8:	74 0a                	je     8462ae4 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x36>
 8462ada:	b8 00 00 00 00       	mov    $0x0,%eax
 8462adf:	e9 03 0c 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 8462ae4:	8b 45 08             	mov    0x8(%ebp),%eax
 8462ae7:	89 04 24             	mov    %eax,(%esp)
 8462aea:	e8 6d 71 00 00       	call   8469c5c <_ZN8WongWork11CDeathTower13getTowerStateEv>
 8462aef:	85 c0                	test   %eax,%eax
 8462af1:	0f 94 c0             	sete   %al
 8462af4:	84 c0                	test   %al,%al
 8462af6:	74 0a                	je     8462b02 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x54>
 8462af8:	b8 00 00 00 00       	mov    $0x0,%eax
 8462afd:	e9 e5 0b 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 8462b02:	83 7d 0c 49          	cmpl   $0x49,0xc(%ebp)
 8462b06:	0f 85 f5 01 00 00    	jne    8462d01 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x253>
 8462b0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8462b0f:	8b 00                	mov    (%eax),%eax
 8462b11:	89 04 24             	mov    %eax,(%esp)
 8462b14:	e8 51 76 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8462b19:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8462b1c:	83 7d a0 00          	cmpl   $0x0,-0x60(%ebp)
 8462b20:	75 15                	jne    8462b37 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x89>
 8462b22:	8b 45 08             	mov    0x8(%ebp),%eax
 8462b25:	89 04 24             	mov    %eax,(%esp)
 8462b28:	e8 f3 4f 00 00       	call   8467b20 <_ZN8WongWork11CDeathTower8_destroyEv>
 8462b2d:	b8 01 00 00 00       	mov    $0x1,%eax
 8462b32:	e9 b0 0b 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 8462b37:	c6 45 a7 00          	movb   $0x0,-0x59(%ebp)
 8462b3b:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8462b42:	e9 dd 00 00 00       	jmp    8462c24 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x176>
 8462b47:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8462b4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8462b51:	8b 00                	mov    (%eax),%eax
 8462b53:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8462b56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462b5a:	89 04 24             	mov    %eax,(%esp)
 8462b5d:	e8 02 2c ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8462b62:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8462b65:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 8462b69:	74 1b                	je     8462b86 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xd8>
 8462b6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8462b6e:	8b 00                	mov    (%eax),%eax
 8462b70:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8462b73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462b77:	89 04 24             	mov    %eax,(%esp)
 8462b7a:	e8 e9 2c ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8462b7f:	83 f0 01             	xor    $0x1,%eax
 8462b82:	84 c0                	test   %al,%al
 8462b84:	74 07                	je     8462b8d <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xdf>
 8462b86:	b8 01 00 00 00       	mov    $0x1,%eax
 8462b8b:	eb 05                	jmp    8462b92 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xe4>
 8462b8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8462b92:	84 c0                	test   %al,%al
 8462b94:	0f 85 85 00 00 00    	jne    8462c1f <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x171>
 8462b9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8462b9d:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8462ba3:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8462ba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462baa:	89 14 24             	mov    %edx,(%esp)
 8462bad:	e8 f0 6f 00 00       	call   8469ba2 <_ZN8WongWork11CDeathTower9CPlayData13isMemberReadyEi>
 8462bb2:	83 f0 01             	xor    $0x1,%eax
 8462bb5:	84 c0                	test   %al,%al
 8462bb7:	74 67                	je     8462c20 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x172>
 8462bb9:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8462bbc:	89 04 24             	mov    %eax,(%esp)
 8462bbf:	e8 c8 6e 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8462bc4:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8462bc7:	89 04 24             	mov    %eax,(%esp)
 8462bca:	e8 5d d5 ff ff       	call   846012c <_ZN8WongWork11CDeathTower14CPacketHandler17makeFinishLoadingEv>
 8462bcf:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8462bd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462bd6:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8462bd9:	89 04 24             	mov    %eax,(%esp)
 8462bdc:	e8 d9 59 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8462be1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8462be4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462be8:	8b 45 08             	mov    0x8(%ebp),%eax
 8462beb:	89 04 24             	mov    %eax,(%esp)
 8462bee:	e8 cf 2e 00 00       	call   8465ac2 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser>
 8462bf3:	c6 45 a7 01          	movb   $0x1,-0x59(%ebp)
 8462bf7:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8462bfa:	89 04 24             	mov    %eax,(%esp)
 8462bfd:	e8 9e 6e 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8462c02:	eb 1c                	jmp    8462c20 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x172>
 8462c04:	89 d3                	mov    %edx,%ebx
 8462c06:	89 c6                	mov    %eax,%esi
 8462c08:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8462c0b:	89 04 24             	mov    %eax,(%esp)
 8462c0e:	e8 8d 6e 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8462c13:	89 f0                	mov    %esi,%eax
 8462c15:	89 da                	mov    %ebx,%edx
 8462c17:	89 04 24             	mov    %eax,(%esp)
 8462c1a:	e8 31 0b 68 00       	call   8ae3750 <_Unwind_Resume>
 8462c1f:	90                   	nop
 8462c20:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 8462c24:	83 7d ac 03          	cmpl   $0x3,-0x54(%ebp)
 8462c28:	0f 9e c0             	setle  %al
 8462c2b:	84 c0                	test   %al,%al
 8462c2d:	0f 85 14 ff ff ff    	jne    8462b47 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x99>
 8462c33:	8b 45 08             	mov    0x8(%ebp),%eax
 8462c36:	8b 00                	mov    (%eax),%eax
 8462c38:	89 04 24             	mov    %eax,(%esp)
 8462c3b:	e8 2a 75 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8462c40:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8462c43:	80 7d a7 00          	cmpb   $0x0,-0x59(%ebp)
 8462c47:	0f 84 9a 00 00 00    	je     8462ce7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x239>
 8462c4d:	83 7d a8 00          	cmpl   $0x0,-0x58(%ebp)
 8462c51:	0f 8e 90 00 00 00    	jle    8462ce7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x239>
 8462c57:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8462c5e:	eb 24                	jmp    8462c84 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x1d6>
 8462c60:	8b 45 08             	mov    0x8(%ebp),%eax
 8462c63:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8462c69:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8462c70:	00 
 8462c71:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8462c74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462c78:	89 14 24             	mov    %edx,(%esp)
 8462c7b:	e8 06 6f 00 00       	call   8469b86 <_ZN8WongWork11CDeathTower9CPlayData14setMemberReadyEib>
 8462c80:	83 45 b4 01          	addl   $0x1,-0x4c(%ebp)
 8462c84:	83 7d b4 03          	cmpl   $0x3,-0x4c(%ebp)
 8462c88:	0f 9e c0             	setle  %al
 8462c8b:	84 c0                	test   %al,%al
 8462c8d:	75 d1                	jne    8462c60 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x1b2>
 8462c8f:	8d 45 88             	lea    -0x78(%ebp),%eax
 8462c92:	89 04 24             	mov    %eax,(%esp)
 8462c95:	e8 f2 6d 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8462c9a:	8d 45 88             	lea    -0x78(%ebp),%eax
 8462c9d:	89 04 24             	mov    %eax,(%esp)
 8462ca0:	e8 87 d4 ff ff       	call   846012c <_ZN8WongWork11CDeathTower14CPacketHandler17makeFinishLoadingEv>
 8462ca5:	8b 45 08             	mov    0x8(%ebp),%eax
 8462ca8:	8b 00                	mov    (%eax),%eax
 8462caa:	8d 55 88             	lea    -0x78(%ebp),%edx
 8462cad:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462cb1:	89 04 24             	mov    %eax,(%esp)
 8462cb4:	e8 95 a4 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8462cb9:	eb 1b                	jmp    8462cd6 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x228>
 8462cbb:	89 d3                	mov    %edx,%ebx
 8462cbd:	89 c6                	mov    %eax,%esi
 8462cbf:	8d 45 88             	lea    -0x78(%ebp),%eax
 8462cc2:	89 04 24             	mov    %eax,(%esp)
 8462cc5:	e8 d6 6d 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8462cca:	89 f0                	mov    %esi,%eax
 8462ccc:	89 da                	mov    %ebx,%edx
 8462cce:	89 04 24             	mov    %eax,(%esp)
 8462cd1:	e8 7a 0a 68 00       	call   8ae3750 <_Unwind_Resume>
 8462cd6:	8d 45 88             	lea    -0x78(%ebp),%eax
 8462cd9:	89 04 24             	mov    %eax,(%esp)
 8462cdc:	e8 bf 6d 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8462ce1:	90                   	nop
 8462ce2:	e9 fb 09 00 00       	jmp    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 8462ce7:	83 7d a8 00          	cmpl   $0x0,-0x58(%ebp)
 8462ceb:	0f 85 f0 09 00 00    	jne    84636e1 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc33>
 8462cf1:	8b 45 08             	mov    0x8(%ebp),%eax
 8462cf4:	89 04 24             	mov    %eax,(%esp)
 8462cf7:	e8 24 4e 00 00       	call   8467b20 <_ZN8WongWork11CDeathTower8_destroyEv>
 8462cfc:	e9 e1 09 00 00       	jmp    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 8462d01:	83 7d 0c 4b          	cmpl   $0x4b,0xc(%ebp)
 8462d05:	0f 85 e5 02 00 00    	jne    8462ff0 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x542>
 8462d0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8462d0e:	89 04 24             	mov    %eax,(%esp)
 8462d11:	e8 46 6f 00 00       	call   8469c5c <_ZN8WongWork11CDeathTower13getTowerStateEv>
 8462d16:	83 f8 02             	cmp    $0x2,%eax
 8462d19:	0f 9e c0             	setle  %al
 8462d1c:	84 c0                	test   %al,%al
 8462d1e:	74 0a                	je     8462d2a <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x27c>
 8462d20:	b8 00 00 00 00       	mov    $0x0,%eax
 8462d25:	e9 bd 09 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 8462d2a:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8462d31:	e9 43 02 00 00       	jmp    8462f79 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x4cb>
 8462d36:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8462d3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8462d40:	8b 00                	mov    (%eax),%eax
 8462d42:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8462d45:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462d49:	89 04 24             	mov    %eax,(%esp)
 8462d4c:	e8 13 2a ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8462d51:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8462d54:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8462d58:	74 1b                	je     8462d75 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x2c7>
 8462d5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8462d5d:	8b 00                	mov    (%eax),%eax
 8462d5f:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8462d62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8462d66:	89 04 24             	mov    %eax,(%esp)
 8462d69:	e8 fa 2a ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8462d6e:	83 f0 01             	xor    $0x1,%eax
 8462d71:	84 c0                	test   %al,%al
 8462d73:	74 07                	je     8462d7c <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x2ce>
 8462d75:	b8 01 00 00 00       	mov    $0x1,%eax
 8462d7a:	eb 05                	jmp    8462d81 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x2d3>
 8462d7c:	b8 00 00 00 00       	mov    $0x0,%eax
 8462d81:	84 c0                	test   %al,%al
 8462d83:	0f 85 eb 01 00 00    	jne    8462f74 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x4c6>
 8462d89:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8462d8f:	89 04 24             	mov    %eax,(%esp)
 8462d92:	e8 f5 6c 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8462d97:	8b 45 08             	mov    0x8(%ebp),%eax
 8462d9a:	05 10 01 00 00       	add    $0x110,%eax
 8462d9f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8462da6:	00 
 8462da7:	89 04 24             	mov    %eax,(%esp)
 8462daa:	e8 57 6e 00 00       	call   8469c06 <_ZN8WongWork11CDeathTower9CPlayData13getRewardItemEi>
 8462daf:	89 c7                	mov    %eax,%edi
 8462db1:	8b 45 08             	mov    0x8(%ebp),%eax
 8462db4:	05 10 01 00 00       	add    $0x110,%eax
 8462db9:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8462dc0:	00 
 8462dc1:	89 04 24             	mov    %eax,(%esp)
 8462dc4:	e8 23 6e 00 00       	call   8469bec <_ZN8WongWork11CDeathTower9CPlayData18getRewardItemCountEi>
 8462dc9:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 8462dcf:	8b 45 08             	mov    0x8(%ebp),%eax
 8462dd2:	05 10 01 00 00       	add    $0x110,%eax
 8462dd7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8462dde:	00 
 8462ddf:	89 04 24             	mov    %eax,(%esp)
 8462de2:	e8 1f 6e 00 00       	call   8469c06 <_ZN8WongWork11CDeathTower9CPlayData13getRewardItemEi>
 8462de7:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8462ded:	8b 45 08             	mov    0x8(%ebp),%eax
 8462df0:	05 10 01 00 00       	add    $0x110,%eax
 8462df5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8462dfc:	00 
 8462dfd:	89 04 24             	mov    %eax,(%esp)
 8462e00:	e8 e7 6d 00 00       	call   8469bec <_ZN8WongWork11CDeathTower9CPlayData18getRewardItemCountEi>
 8462e05:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8462e0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8462e0e:	05 10 01 00 00       	add    $0x110,%eax
 8462e13:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8462e1a:	00 
 8462e1b:	89 04 24             	mov    %eax,(%esp)
 8462e1e:	e8 e3 6d 00 00       	call   8469c06 <_ZN8WongWork11CDeathTower9CPlayData13getRewardItemEi>
 8462e23:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8462e29:	8b 45 08             	mov    0x8(%ebp),%eax
 8462e2c:	05 10 01 00 00       	add    $0x110,%eax
 8462e31:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8462e38:	00 
 8462e39:	89 04 24             	mov    %eax,(%esp)
 8462e3c:	e8 ab 6d 00 00       	call   8469bec <_ZN8WongWork11CDeathTower9CPlayData18getRewardItemCountEi>
 8462e41:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8462e47:	8b 45 08             	mov    0x8(%ebp),%eax
 8462e4a:	05 10 01 00 00       	add    $0x110,%eax
 8462e4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8462e56:	00 
 8462e57:	89 04 24             	mov    %eax,(%esp)
 8462e5a:	e8 a7 6d 00 00       	call   8469c06 <_ZN8WongWork11CDeathTower9CPlayData13getRewardItemEi>
 8462e5f:	89 c6                	mov    %eax,%esi
 8462e61:	8b 45 08             	mov    0x8(%ebp),%eax
 8462e64:	05 10 01 00 00       	add    $0x110,%eax
 8462e69:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8462e70:	00 
 8462e71:	89 04 24             	mov    %eax,(%esp)
 8462e74:	e8 73 6d 00 00       	call   8469bec <_ZN8WongWork11CDeathTower9CPlayData18getRewardItemCountEi>
 8462e79:	89 c3                	mov    %eax,%ebx
 8462e7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8462e7e:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8462e84:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8462e87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462e8b:	89 14 24             	mov    %edx,(%esp)
 8462e8e:	e8 8b 6d 00 00       	call   8469c1e <_ZN8WongWork11CDeathTower9CPlayData12getRewardExpEi>
 8462e93:	89 7c 24 24          	mov    %edi,0x24(%esp)
 8462e97:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 8462e9d:	89 54 24 20          	mov    %edx,0x20(%esp)
 8462ea1:	8b 95 08 ff ff ff    	mov    -0xf8(%ebp),%edx
 8462ea7:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8462eab:	8b 95 0c ff ff ff    	mov    -0xf4(%ebp),%edx
 8462eb1:	89 54 24 18          	mov    %edx,0x18(%esp)
 8462eb5:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 8462ebb:	89 54 24 14          	mov    %edx,0x14(%esp)
 8462ebf:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 8462ec5:	89 54 24 10          	mov    %edx,0x10(%esp)
 8462ec9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8462ecd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8462ed1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462ed5:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8462edb:	89 04 24             	mov    %eax,(%esp)
 8462ede:	e8 e1 d3 ff ff       	call   84602c4 <_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_>
 8462ee3:	8b 45 08             	mov    0x8(%ebp),%eax
 8462ee6:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8462eec:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8462eef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462ef3:	89 14 24             	mov    %edx,(%esp)
 8462ef6:	e8 0b 6d 00 00       	call   8469c06 <_ZN8WongWork11CDeathTower9CPlayData13getRewardItemEi>
 8462efb:	89 c3                	mov    %eax,%ebx
 8462efd:	8b 45 08             	mov    0x8(%ebp),%eax
 8462f00:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8462f06:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8462f09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462f0d:	89 14 24             	mov    %edx,(%esp)
 8462f10:	e8 d7 6c 00 00       	call   8469bec <_ZN8WongWork11CDeathTower9CPlayData18getRewardItemCountEi>
 8462f15:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8462f19:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8462f1c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8462f20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462f24:	8b 45 08             	mov    0x8(%ebp),%eax
 8462f27:	89 04 24             	mov    %eax,(%esp)
 8462f2a:	e8 3d 67 00 00       	call   846966c <_ZN8WongWork11CDeathTower23deathTowerCardStatisticEiP5CUserPK10Inven_Item>
 8462f2f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8462f35:	89 44 24 04          	mov    %eax,0x4(%esp)
 8462f39:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8462f3c:	89 04 24             	mov    %eax,(%esp)
 8462f3f:	e8 76 56 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8462f44:	eb 1e                	jmp    8462f64 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x4b6>
 8462f46:	89 d3                	mov    %edx,%ebx
 8462f48:	89 c6                	mov    %eax,%esi
 8462f4a:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8462f50:	89 04 24             	mov    %eax,(%esp)
 8462f53:	e8 48 6b 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8462f58:	89 f0                	mov    %esi,%eax
 8462f5a:	89 da                	mov    %ebx,%edx
 8462f5c:	89 04 24             	mov    %eax,(%esp)
 8462f5f:	e8 ec 07 68 00       	call   8ae3750 <_Unwind_Resume>
 8462f64:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8462f6a:	89 04 24             	mov    %eax,(%esp)
 8462f6d:	e8 2e 6b 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8462f72:	eb 01                	jmp    8462f75 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x4c7>
 8462f74:	90                   	nop
 8462f75:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
 8462f79:	83 7d b8 03          	cmpl   $0x3,-0x48(%ebp)
 8462f7d:	0f 9e c0             	setle  %al
 8462f80:	84 c0                	test   %al,%al
 8462f82:	0f 85 ae fd ff ff    	jne    8462d36 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x288>
 8462f88:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8462f8f:	00 
 8462f90:	8b 45 08             	mov    0x8(%ebp),%eax
 8462f93:	89 04 24             	mov    %eax,(%esp)
 8462f96:	e8 99 6c 00 00       	call   8469c34 <_ZN8WongWork11CDeathTower13setTowerStateENS0_16ENUM_TOWER_STATEE>
 8462f9b:	c7 44 24 04 4c 00 00 	movl   $0x4c,0x4(%esp)
 8462fa2:	00 
 8462fa3:	8b 45 08             	mov    0x8(%ebp),%eax
 8462fa6:	89 04 24             	mov    %eax,(%esp)
 8462fa9:	e8 3e be ea ff       	call   830edec <_ZN8WongWork11CDeathTower12_genTimerKeyE13TIMER_MESSAGE>
 8462fae:	89 c3                	mov    %eax,%ebx
 8462fb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8462fb3:	8b 70 04             	mov    0x4(%eax),%esi
 8462fb6:	e8 c1 34 c9 ff       	call   80f647c <_Z12G_TimerQueuev>
 8462fbb:	c7 44 24 18 4c 00 00 	movl   $0x4c,0x18(%esp)
 8462fc2:	00 
 8462fc3:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8462fc7:	c7 44 24 10 05 00 00 	movl   $0x5,0x10(%esp)
 8462fce:	00 
 8462fcf:	c7 44 24 0c 4c 00 00 	movl   $0x4c,0xc(%esp)
 8462fd6:	00 
 8462fd7:	89 74 24 08          	mov    %esi,0x8(%esp)
 8462fdb:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8462fe2:	00 
 8462fe3:	89 04 24             	mov    %eax,(%esp)
 8462fe6:	e8 2b de 1c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8462feb:	e9 f2 06 00 00       	jmp    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 8462ff0:	83 7d 0c 4c          	cmpl   $0x4c,0xc(%ebp)
 8462ff4:	0f 85 aa 05 00 00    	jne    84635a4 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xaf6>
 8462ffa:	8b 45 08             	mov    0x8(%ebp),%eax
 8462ffd:	89 04 24             	mov    %eax,(%esp)
 8463000:	e8 57 6c 00 00       	call   8469c5c <_ZN8WongWork11CDeathTower13getTowerStateEv>
 8463005:	83 f8 03             	cmp    $0x3,%eax
 8463008:	0f 9e c0             	setle  %al
 846300b:	84 c0                	test   %al,%al
 846300d:	74 0a                	je     8463019 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x56b>
 846300f:	b8 00 00 00 00       	mov    $0x0,%eax
 8463014:	e9 ce 06 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 8463019:	c6 45 c3 01          	movb   $0x1,-0x3d(%ebp)
 846301d:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8463024:	e9 96 00 00 00       	jmp    84630bf <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x611>
 8463029:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8463030:	8b 45 08             	mov    0x8(%ebp),%eax
 8463033:	8b 00                	mov    (%eax),%eax
 8463035:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8463038:	89 54 24 04          	mov    %edx,0x4(%esp)
 846303c:	89 04 24             	mov    %eax,(%esp)
 846303f:	e8 20 27 ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8463044:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8463047:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 846304b:	74 1b                	je     8463068 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x5ba>
 846304d:	8b 45 08             	mov    0x8(%ebp),%eax
 8463050:	8b 00                	mov    (%eax),%eax
 8463052:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8463055:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463059:	89 04 24             	mov    %eax,(%esp)
 846305c:	e8 07 28 ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8463061:	83 f0 01             	xor    $0x1,%eax
 8463064:	84 c0                	test   %al,%al
 8463066:	74 07                	je     846306f <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x5c1>
 8463068:	b8 01 00 00 00       	mov    $0x1,%eax
 846306d:	eb 05                	jmp    8463074 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x5c6>
 846306f:	b8 00 00 00 00       	mov    $0x0,%eax
 8463074:	84 c0                	test   %al,%al
 8463076:	75 42                	jne    84630ba <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x60c>
 8463078:	8d 85 1f ff ff ff    	lea    -0xe1(%ebp),%eax
 846307e:	89 04 24             	mov    %eax,(%esp)
 8463081:	e8 ce 87 c6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8463086:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8463089:	89 04 24             	mov    %eax,(%esp)
 846308c:	e8 ed 71 c7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8463091:	8d 95 1f ff ff ff    	lea    -0xe1(%ebp),%edx
 8463097:	89 54 24 08          	mov    %edx,0x8(%esp)
 846309b:	c7 44 24 04 57 10 00 	movl   $0x1057,0x4(%esp)
 84630a2:	00 
 84630a3:	89 04 24             	mov    %eax,(%esp)
 84630a6:	e8 81 8e 09 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 84630ab:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84630ae:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 84630b2:	79 07                	jns    84630bb <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x60d>
 84630b4:	c6 45 c3 00          	movb   $0x0,-0x3d(%ebp)
 84630b8:	eb 14                	jmp    84630ce <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x620>
 84630ba:	90                   	nop
 84630bb:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 84630bf:	83 7d c4 03          	cmpl   $0x3,-0x3c(%ebp)
 84630c3:	0f 9e c0             	setle  %al
 84630c6:	84 c0                	test   %al,%al
 84630c8:	0f 85 5b ff ff ff    	jne    8463029 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x57b>
 84630ce:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84630d4:	89 04 24             	mov    %eax,(%esp)
 84630d7:	e8 b0 69 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 84630dc:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 84630e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84630e4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84630ea:	89 04 24             	mov    %eax,(%esp)
 84630ed:	e8 be d3 ff ff       	call   84604b0 <_ZN8WongWork11CDeathTower14CPacketHandler15makeDisplayEPLPEb>
 84630f2:	8b 45 08             	mov    0x8(%ebp),%eax
 84630f5:	8b 00                	mov    (%eax),%eax
 84630f7:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84630fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463101:	89 04 24             	mov    %eax,(%esp)
 8463104:	e8 45 a0 13 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8463109:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8463110:	e9 d5 03 00 00       	jmp    84634ea <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xa3c>
 8463115:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 846311c:	8b 45 08             	mov    0x8(%ebp),%eax
 846311f:	8b 00                	mov    (%eax),%eax
 8463121:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8463124:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463128:	89 04 24             	mov    %eax,(%esp)
 846312b:	e8 34 26 ce ff       	call   8145764 <_ZN6CParty8get_userEi>
 8463130:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8463133:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8463137:	74 1b                	je     8463154 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x6a6>
 8463139:	8b 45 08             	mov    0x8(%ebp),%eax
 846313c:	8b 00                	mov    (%eax),%eax
 846313e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8463141:	89 54 24 04          	mov    %edx,0x4(%esp)
 8463145:	89 04 24             	mov    %eax,(%esp)
 8463148:	e8 1b 27 ce ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 846314d:	83 f0 01             	xor    $0x1,%eax
 8463150:	84 c0                	test   %al,%al
 8463152:	74 07                	je     846315b <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x6ad>
 8463154:	b8 01 00 00 00       	mov    $0x1,%eax
 8463159:	eb 05                	jmp    8463160 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x6b2>
 846315b:	b8 00 00 00 00       	mov    $0x0,%eax
 8463160:	84 c0                	test   %al,%al
 8463162:	0f 85 7d 03 00 00    	jne    84634e5 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xa37>
 8463168:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 846316f:	e9 8c 02 00 00       	jmp    8463400 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x952>
 8463174:	8b 45 08             	mov    0x8(%ebp),%eax
 8463177:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 846317d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8463180:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463184:	89 14 24             	mov    %edx,(%esp)
 8463187:	e8 7a 6a 00 00       	call   8469c06 <_ZN8WongWork11CDeathTower9CPlayData13getRewardItemEi>
 846318c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 846318f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8463192:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8463195:	03 45 dc             	add    -0x24(%ebp),%eax
 8463198:	8b 40 02             	mov    0x2(%eax),%eax
 846319b:	83 f8 ff             	cmp    $0xffffffff,%eax
 846319e:	0f 84 57 02 00 00    	je     84633fb <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x94d>
 84631a4:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 84631ab:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84631ae:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84631b1:	03 45 dc             	add    -0x24(%ebp),%eax
 84631b4:	8b 40 02             	mov    0x2(%eax),%eax
 84631b7:	85 c0                	test   %eax,%eax
 84631b9:	0f 85 08 01 00 00    	jne    84632c7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x819>
 84631bf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84631c2:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84631c5:	03 45 dc             	add    -0x24(%ebp),%eax
 84631c8:	89 04 24             	mov    %eax,(%esp)
 84631cb:	e8 6a 46 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 84631d0:	89 c3                	mov    %eax,%ebx
 84631d2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84631d5:	89 04 24             	mov    %eax,(%esp)
 84631d8:	e8 b1 70 c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84631dd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84631e4:	00 
 84631e5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84631ec:	00 
 84631ed:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 84631f4:	00 
 84631f5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84631f9:	89 04 24             	mov    %eax,(%esp)
 84631fc:	e8 9b c0 09 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 8463201:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8463204:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8463207:	6b c0 3d             	imul   $0x3d,%eax,%eax
 846320a:	03 45 dc             	add    -0x24(%ebp),%eax
 846320d:	89 04 24             	mov    %eax,(%esp)
 8463210:	e8 25 46 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8463215:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8463218:	0f 9f c0             	setg   %al
 846321b:	84 c0                	test   %al,%al
 846321d:	74 2f                	je     846324e <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x7a0>
 846321f:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8463222:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8463225:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8463228:	03 45 dc             	add    -0x24(%ebp),%eax
 846322b:	89 04 24             	mov    %eax,(%esp)
 846322e:	e8 07 46 c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8463233:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8463237:	89 44 24 08          	mov    %eax,0x8(%esp)
 846323b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8463242:	00 
 8463243:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8463246:	89 04 24             	mov    %eax,(%esp)
 8463249:	e8 f6 95 21 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 846324e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8463255:	8b 45 08             	mov    0x8(%ebp),%eax
 8463258:	83 c0 0c             	add    $0xc,%eax
 846325b:	89 04 24             	mov    %eax,(%esp)
 846325e:	e8 8d 13 dd ff       	call   82345f0 <_ZNK8WongWork11CDeathTower11CDungeonMgr10getDungeonEv>
 8463263:	89 04 24             	mov    %eax,(%esp)
 8463266:	e8 85 aa c9 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 846326b:	3d f8 2a 00 00       	cmp    $0x2af8,%eax
 8463270:	0f 94 c0             	sete   %al
 8463273:	84 c0                	test   %al,%al
 8463275:	74 28                	je     846329f <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x7f1>
 8463277:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 846327a:	e8 98 a7 1a 00       	call   860da17 <_Z31GetInstanceCirculationStatisticv>
 846327f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8463283:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8463286:	89 54 24 08          	mov    %edx,0x8(%esp)
 846328a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8463291:	00 
 8463292:	89 04 24             	mov    %eax,(%esp)
 8463295:	e8 10 a8 1a 00       	call   860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>
 846329a:	e9 d1 00 00 00       	jmp    8463370 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x8c2>
 846329f:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84632a2:	e8 70 a7 1a 00       	call   860da17 <_Z31GetInstanceCirculationStatisticv>
 84632a7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84632ab:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84632ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 84632b2:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 84632b9:	00 
 84632ba:	89 04 24             	mov    %eax,(%esp)
 84632bd:	e8 e8 a7 1a 00       	call   860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>
 84632c2:	e9 a9 00 00 00       	jmp    8463370 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x8c2>
 84632c7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84632ca:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84632cd:	89 c3                	mov    %eax,%ebx
 84632cf:	03 5d dc             	add    -0x24(%ebp),%ebx
 84632d2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84632d5:	89 04 24             	mov    %eax,(%esp)
 84632d8:	e8 b1 6f c7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84632dd:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 84632e4:	00 
 84632e5:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 84632ec:	00 
 84632ed:	c7 44 24 44 0b 00 00 	movl   $0xb,0x44(%esp)
 84632f4:	00 
 84632f5:	8b 13                	mov    (%ebx),%edx
 84632f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84632fb:	8b 53 04             	mov    0x4(%ebx),%edx
 84632fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8463302:	8b 53 08             	mov    0x8(%ebx),%edx
 8463305:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8463309:	8b 53 0c             	mov    0xc(%ebx),%edx
 846330c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8463310:	8b 53 10             	mov    0x10(%ebx),%edx
 8463313:	89 54 24 14          	mov    %edx,0x14(%esp)
 8463317:	8b 53 14             	mov    0x14(%ebx),%edx
 846331a:	89 54 24 18          	mov    %edx,0x18(%esp)
 846331e:	8b 53 18             	mov    0x18(%ebx),%edx
 8463321:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8463325:	8b 53 1c             	mov    0x1c(%ebx),%edx
 8463328:	89 54 24 20          	mov    %edx,0x20(%esp)
 846332c:	8b 53 20             	mov    0x20(%ebx),%edx
 846332f:	89 54 24 24          	mov    %edx,0x24(%esp)
 8463333:	8b 53 24             	mov    0x24(%ebx),%edx
 8463336:	89 54 24 28          	mov    %edx,0x28(%esp)
 846333a:	8b 53 28             	mov    0x28(%ebx),%edx
 846333d:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8463341:	8b 53 2c             	mov    0x2c(%ebx),%edx
 8463344:	89 54 24 30          	mov    %edx,0x30(%esp)
 8463348:	8b 53 30             	mov    0x30(%ebx),%edx
 846334b:	89 54 24 34          	mov    %edx,0x34(%esp)
 846334f:	8b 53 34             	mov    0x34(%ebx),%edx
 8463352:	89 54 24 38          	mov    %edx,0x38(%esp)
 8463356:	8b 53 38             	mov    0x38(%ebx),%edx
 8463359:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 846335d:	0f b6 53 3c          	movzbl 0x3c(%ebx),%edx
 8463361:	88 54 24 40          	mov    %dl,0x40(%esp)
 8463365:	89 04 24             	mov    %eax,(%esp)
 8463368:	e8 19 fa 09 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 846336d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8463370:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8463374:	0f 88 82 00 00 00    	js     84633fc <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x94e>
 846337a:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8463380:	89 04 24             	mov    %eax,(%esp)
 8463383:	e8 04 67 00 00       	call   8469a8c <_ZN8WongWork11CDeathTower14CPacketHandlerC1Ev>
 8463388:	8b 45 d8             	mov    -0x28(%ebp),%eax
 846338b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 846338e:	03 45 dc             	add    -0x24(%ebp),%eax
 8463391:	89 04 24             	mov    %eax,(%esp)
 8463394:	e8 49 4e ee ff       	call   83481e2 <_ZNK10Inven_Item12GetItemSpaceEv>
 8463399:	8b 55 e0             	mov    -0x20(%ebp),%edx
 846339c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84633a0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84633a4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84633a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84633ab:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84633b1:	89 04 24             	mov    %eax,(%esp)
 84633b4:	e8 55 d1 ff ff       	call   846050e <_ZN8WongWork11CDeathTower14CPacketHandler18makeUpdateItemListEP5CUser14ENUM_ITEMSPACEi>
 84633b9:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84633bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84633c3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84633c6:	89 04 24             	mov    %eax,(%esp)
 84633c9:	e8 ec 51 1e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84633ce:	eb 1b                	jmp    84633eb <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x93d>
 84633d0:	89 d3                	mov    %edx,%ebx
 84633d2:	89 c6                	mov    %eax,%esi
 84633d4:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84633da:	89 04 24             	mov    %eax,(%esp)
 84633dd:	e8 be 66 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 84633e2:	89 f0                	mov    %esi,%eax
 84633e4:	89 da                	mov    %ebx,%edx
 84633e6:	e9 88 01 00 00       	jmp    8463573 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xac5>
 84633eb:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84633f1:	89 04 24             	mov    %eax,(%esp)
 84633f4:	e8 a7 66 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 84633f9:	eb 01                	jmp    84633fc <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x94e>
 84633fb:	90                   	nop
 84633fc:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8463400:	8b 45 08             	mov    0x8(%ebp),%eax
 8463403:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8463409:	8b 45 d0             	mov    -0x30(%ebp),%eax
 846340c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463410:	89 14 24             	mov    %edx,(%esp)
 8463413:	e8 d4 67 00 00       	call   8469bec <_ZN8WongWork11CDeathTower9CPlayData18getRewardItemCountEi>
 8463418:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 846341b:	0f 9f c0             	setg   %al
 846341e:	84 c0                	test   %al,%al
 8463420:	0f 85 4e fd ff ff    	jne    8463174 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x6c6>
 8463426:	8b 45 08             	mov    0x8(%ebp),%eax
 8463429:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 846342f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8463432:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463436:	89 14 24             	mov    %edx,(%esp)
 8463439:	e8 e0 67 00 00       	call   8469c1e <_ZN8WongWork11CDeathTower9CPlayData12getRewardExpEi>
 846343e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8463441:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8463448:	00 
 8463449:	89 44 24 04          	mov    %eax,0x4(%esp)
 846344d:	89 14 24             	mov    %edx,(%esp)
 8463450:	e8 ad af 1e 00       	call   864e402 <_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb>
 8463455:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 846345c:	00 00 00 
 846345f:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 8463466:	00 00 00 
 8463469:	8b 45 08             	mov    0x8(%ebp),%eax
 846346c:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 8463472:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8463475:	89 44 24 04          	mov    %eax,0x4(%esp)
 8463479:	89 14 24             	mov    %edx,(%esp)
 846347c:	e8 9d 67 00 00       	call   8469c1e <_ZN8WongWork11CDeathTower9CPlayData12getRewardExpEi>
 8463481:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8463488:	00 
 8463489:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8463490:	00 
 8463491:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8463498:	00 
 8463499:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 846349f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84634a3:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 84634a9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84634ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84634b1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84634b4:	89 04 24             	mov    %eax,(%esp)
 84634b7:	e8 42 6f 20 00       	call   866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>
 84634bc:	84 c0                	test   %al,%al
 84634be:	74 26                	je     84634e6 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xa38>
 84634c0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84634c7:	00 
 84634c8:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84634cf:	00 
 84634d0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84634d7:	00 
 84634d8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84634db:	89 04 24             	mov    %eax,(%esp)
 84634de:	e8 79 85 21 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 84634e3:	eb 01                	jmp    84634e6 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xa38>
 84634e5:	90                   	nop
 84634e6:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 84634ea:	83 7d d0 03          	cmpl   $0x3,-0x30(%ebp)
 84634ee:	0f 9e c0             	setle  %al
 84634f1:	84 c0                	test   %al,%al
 84634f3:	0f 85 1c fc ff ff    	jne    8463115 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0x667>
 84634f9:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8463500:	00 
 8463501:	8b 45 08             	mov    0x8(%ebp),%eax
 8463504:	89 04 24             	mov    %eax,(%esp)
 8463507:	e8 28 67 00 00       	call   8469c34 <_ZN8WongWork11CDeathTower13setTowerStateENS0_16ENUM_TOWER_STATEE>
 846350c:	8b 45 08             	mov    0x8(%ebp),%eax
 846350f:	8b 00                	mov    (%eax),%eax
 8463511:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8463518:	00 
 8463519:	89 04 24             	mov    %eax,(%esp)
 846351c:	e8 6b 22 ce ff       	call   814578c <_ZN6CParty12SetEPLPStateEc>
 8463521:	c7 44 24 04 4d 00 00 	movl   $0x4d,0x4(%esp)
 8463528:	00 
 8463529:	8b 45 08             	mov    0x8(%ebp),%eax
 846352c:	89 04 24             	mov    %eax,(%esp)
 846352f:	e8 b8 b8 ea ff       	call   830edec <_ZN8WongWork11CDeathTower12_genTimerKeyE13TIMER_MESSAGE>
 8463534:	89 c3                	mov    %eax,%ebx
 8463536:	8b 45 08             	mov    0x8(%ebp),%eax
 8463539:	8b 70 04             	mov    0x4(%eax),%esi
 846353c:	e8 3b 2f c9 ff       	call   80f647c <_Z12G_TimerQueuev>
 8463541:	c7 44 24 18 4d 00 00 	movl   $0x4d,0x18(%esp)
 8463548:	00 
 8463549:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 846354d:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 8463554:	00 
 8463555:	c7 44 24 0c 4d 00 00 	movl   $0x4d,0xc(%esp)
 846355c:	00 
 846355d:	89 74 24 08          	mov    %esi,0x8(%esp)
 8463561:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8463568:	00 
 8463569:	89 04 24             	mov    %eax,(%esp)
 846356c:	e8 a5 d8 1c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8463571:	eb 1e                	jmp    8463591 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xae3>
 8463573:	89 d3                	mov    %edx,%ebx
 8463575:	89 c6                	mov    %eax,%esi
 8463577:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 846357d:	89 04 24             	mov    %eax,(%esp)
 8463580:	e8 1b 65 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 8463585:	89 f0                	mov    %esi,%eax
 8463587:	89 da                	mov    %ebx,%edx
 8463589:	89 04 24             	mov    %eax,(%esp)
 846358c:	e8 bf 01 68 00       	call   8ae3750 <_Unwind_Resume>
 8463591:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8463597:	89 04 24             	mov    %eax,(%esp)
 846359a:	e8 01 65 00 00       	call   8469aa0 <_ZN8WongWork11CDeathTower14CPacketHandlerD1Ev>
 846359f:	e9 3e 01 00 00       	jmp    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 84635a4:	83 7d 0c 4d          	cmpl   $0x4d,0xc(%ebp)
 84635a8:	75 50                	jne    84635fa <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xb4c>
 84635aa:	8b 45 08             	mov    0x8(%ebp),%eax
 84635ad:	8b 00                	mov    (%eax),%eax
 84635af:	89 04 24             	mov    %eax,(%esp)
 84635b2:	e8 65 22 ce ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 84635b7:	3c 02                	cmp    $0x2,%al
 84635b9:	0f 95 c0             	setne  %al
 84635bc:	84 c0                	test   %al,%al
 84635be:	74 0a                	je     84635ca <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xb1c>
 84635c0:	b8 00 00 00 00       	mov    $0x0,%eax
 84635c5:	e9 1d 01 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 84635ca:	8b 45 08             	mov    0x8(%ebp),%eax
 84635cd:	8b 00                	mov    (%eax),%eax
 84635cf:	89 04 24             	mov    %eax,(%esp)
 84635d2:	e8 03 64 00 00       	call   84699da <_ZN6CParty18GetSelectedEPLPCmdEv>
 84635d7:	3c 03                	cmp    $0x3,%al
 84635d9:	0f 94 c0             	sete   %al
 84635dc:	84 c0                	test   %al,%al
 84635de:	74 0a                	je     84635ea <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xb3c>
 84635e0:	b8 00 00 00 00       	mov    $0x0,%eax
 84635e5:	e9 fd 00 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 84635ea:	8b 45 08             	mov    0x8(%ebp),%eax
 84635ed:	89 04 24             	mov    %eax,(%esp)
 84635f0:	e8 79 49 00 00       	call   8467f6e <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv>
 84635f5:	e9 e8 00 00 00       	jmp    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 84635fa:	83 7d 0c 4e          	cmpl   $0x4e,0xc(%ebp)
 84635fe:	75 30                	jne    8463630 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xb82>
 8463600:	8b 45 08             	mov    0x8(%ebp),%eax
 8463603:	8b 00                	mov    (%eax),%eax
 8463605:	89 04 24             	mov    %eax,(%esp)
 8463608:	e8 0f 22 ce ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 846360d:	3c 03                	cmp    $0x3,%al
 846360f:	0f 95 c0             	setne  %al
 8463612:	84 c0                	test   %al,%al
 8463614:	74 0a                	je     8463620 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xb72>
 8463616:	b8 00 00 00 00       	mov    $0x0,%eax
 846361b:	e9 c7 00 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 8463620:	8b 45 08             	mov    0x8(%ebp),%eax
 8463623:	89 04 24             	mov    %eax,(%esp)
 8463626:	e8 43 49 00 00       	call   8467f6e <_ZN8WongWork11CDeathTower19_onFinishDeathTowerEv>
 846362b:	e9 b2 00 00 00       	jmp    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 8463630:	83 7d 0c 4a          	cmpl   $0x4a,0xc(%ebp)
 8463634:	0f 85 a8 00 00 00    	jne    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 846363a:	8b 45 08             	mov    0x8(%ebp),%eax
 846363d:	89 04 24             	mov    %eax,(%esp)
 8463640:	e8 17 66 00 00       	call   8469c5c <_ZN8WongWork11CDeathTower13getTowerStateEv>
 8463645:	83 f8 01             	cmp    $0x1,%eax
 8463648:	0f 9e c0             	setle  %al
 846364b:	84 c0                	test   %al,%al
 846364d:	74 0a                	je     8463659 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xbab>
 846364f:	b8 00 00 00 00       	mov    $0x0,%eax
 8463654:	e9 8e 00 00 00       	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 8463659:	8b 45 08             	mov    0x8(%ebp),%eax
 846365c:	8b 00                	mov    (%eax),%eax
 846365e:	89 04 24             	mov    %eax,(%esp)
 8463661:	e8 04 6b 13 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8463666:	85 c0                	test   %eax,%eax
 8463668:	0f 9e c0             	setle  %al
 846366b:	84 c0                	test   %al,%al
 846366d:	74 12                	je     8463681 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xbd3>
 846366f:	8b 45 08             	mov    0x8(%ebp),%eax
 8463672:	89 04 24             	mov    %eax,(%esp)
 8463675:	e8 a6 44 00 00       	call   8467b20 <_ZN8WongWork11CDeathTower8_destroyEv>
 846367a:	b8 01 00 00 00       	mov    $0x1,%eax
 846367f:	eb 66                	jmp    84636e7 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc39>
 8463681:	8b 45 08             	mov    0x8(%ebp),%eax
 8463684:	89 04 24             	mov    %eax,(%esp)
 8463687:	e8 fc 3a 00 00       	call   8467188 <_ZN8WongWork11CDeathTower15_checkMemberDieEv>
 846368c:	84 c0                	test   %al,%al
 846368e:	74 15                	je     84636a5 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xbf7>
 8463690:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8463697:	00 
 8463698:	8b 45 08             	mov    0x8(%ebp),%eax
 846369b:	89 04 24             	mov    %eax,(%esp)
 846369e:	e8 65 3b 00 00       	call   8467208 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb>
 84636a3:	eb 3d                	jmp    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 84636a5:	8b 45 08             	mov    0x8(%ebp),%eax
 84636a8:	83 c0 14             	add    $0x14,%eax
 84636ab:	89 04 24             	mov    %eax,(%esp)
 84636ae:	e8 4f 64 00 00       	call   8469b02 <_ZN8WongWork11CDeathTower6CStage15getCurrentStageEv>
 84636b3:	89 c3                	mov    %eax,%ebx
 84636b5:	8b 45 08             	mov    0x8(%ebp),%eax
 84636b8:	83 c0 0c             	add    $0xc,%eax
 84636bb:	89 04 24             	mov    %eax,(%esp)
 84636be:	e8 f1 63 00 00       	call   8469ab4 <_ZN8WongWork11CDeathTower11CDungeonMgr11getEndStageEv>
 84636c3:	39 c3                	cmp    %eax,%ebx
 84636c5:	0f 94 c0             	sete   %al
 84636c8:	84 c0                	test   %al,%al
 84636ca:	74 16                	je     84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 84636cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84636d3:	00 
 84636d4:	8b 45 08             	mov    0x8(%ebp),%eax
 84636d7:	89 04 24             	mov    %eax,(%esp)
 84636da:	e8 29 3b 00 00       	call   8467208 <_ZN8WongWork11CDeathTower23_beginTowerClearProcessEb>
 84636df:	eb 01                	jmp    84636e2 <_ZN8WongWork11CDeathTower7onTimerE13TIMER_MESSAGEj+0xc34>
 84636e1:	90                   	nop
 84636e2:	b8 01 00 00 00       	mov    $0x1,%eax
 84636e7:	81 c4 4c 01 00 00    	add    $0x14c,%esp
 84636ed:	5b                   	pop    %ebx
 84636ee:	5e                   	pop    %esi
 84636ef:	5f                   	pop    %edi
 84636f0:	5d                   	pop    %ebp
 84636f1:	c3                   	ret

```

```c
// WongWork::CDeathTower::onTimer @ 0x8462aae

/* WongWork::CDeathTower::onTimer(TIMER_MESSAGE, unsigned int) */

undefined4 __thiscall
WongWork::CDeathTower::onTimer(CDeathTower *this,int param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  Inven_Item *pIVar5;
  Inven_Item *pIVar6;
  int iVar7;
  Inven_Item *pIVar8;
  int iVar9;
  Inven_Item *pIVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  TimerQueue *pTVar14;
  CInventory *pCVar15;
  CDungeon *this_00;
  CCirculationStatistic *pCVar16;
  undefined4 *puVar17;
  Inven_Item local_e5 [61];
  CPacketHandler local_a8 [12];
  undefined4 local_9c;
  undefined4 local_98;
  CPacketHandler local_94 [12];
  CPacketHandler local_88 [12];
  CPacketHandler local_7c [12];
  CPacketHandler local_70 [12];
  int local_64;
  char local_5d;
  int local_5c;
  int local_58;
  CUser *local_54;
  int local_50;
  int local_4c;
  CUser *local_48;
  bool local_41;
  int local_40;
  CUserCharacInfo *local_3c;
  int local_38;
  int local_34;
  CUserCharacInfo *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  cVar1 = _checkTimerKey(this,param_2,param_3);
  if (cVar1 == '\x01') {
    iVar4 = getTowerState(this);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      if (param_2 == 0x49) {
        local_64 = CParty::get_member_count(*(CParty **)this);
        if (local_64 == 0) {
          _destroy(this);
          return 1;
        }
        local_5d = '\0';
        for (local_58 = 0; local_58 < 4; local_58 = local_58 + 1) {
          local_54 = (CUser *)0x0;
          local_54 = (CUser *)CParty::get_user(*(CParty **)this,local_58);
          if ((local_54 == (CUser *)0x0) ||
             (cVar1 = CParty::checkValidUser(*(CParty **)this,local_58), cVar1 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((!bVar2) &&
             (cVar1 = CPlayData::isMemberReady((CPlayData *)(this + 0x110),local_58),
             cVar1 != '\x01')) {
            CPacketHandler::CPacketHandler(local_70);
                    /* try { // try from 08462bca to 08462bf2 has its CatchHandler @ 08462c04 */
            CPacketHandler::makeFinishLoading(local_70);
            CUser::Send(local_54,(PacketGuard *)local_70);
            handleLeaveUser(this,local_54);
            local_5d = '\x01';
            CPacketHandler::~CPacketHandler(local_70);
          }
        }
        local_5c = CParty::get_member_count(*(CParty **)this);
        if ((local_5d == '\0') || (local_5c < 1)) {
          if (local_5c == 0) {
            _destroy(this);
          }
        }
        else {
          for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
            CPlayData::setMemberReady((CPlayData *)(this + 0x110),local_50,true);
          }
          CPacketHandler::CPacketHandler(local_7c);
                    /* try { // try from 08462ca0 to 08462cb8 has its CatchHandler @ 08462cbb */
          CPacketHandler::makeFinishLoading(local_7c);
          CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_7c);
          CPacketHandler::~CPacketHandler(local_7c);
        }
      }
      else if (param_2 == 0x4b) {
        iVar4 = getTowerState(this);
        if (iVar4 < 3) {
          return 0;
        }
        for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
          local_48 = (CUser *)0x0;
          local_48 = (CUser *)CParty::get_user(*(CParty **)this,local_4c);
          if ((local_48 == (CUser *)0x0) ||
             (cVar1 = CParty::checkValidUser(*(CParty **)this,local_4c), cVar1 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            CPacketHandler::CPacketHandler(local_88);
            pIVar5 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),3);
            iVar4 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),3);
            pIVar6 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),2);
            iVar7 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),2);
            pIVar8 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),1);
            iVar9 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),1);
            pIVar10 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),0);
            iVar11 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),0);
            iVar12 = CPlayData::getRewardExp((CPlayData *)(this + 0x110),local_4c);
                    /* try { // try from 08462ede to 08462f43 has its CatchHandler @ 08462f46 */
            CPacketHandler::makeDisplayReward
                      (local_88,iVar12,iVar11,pIVar10,iVar9,pIVar8,iVar7,pIVar6,iVar4,pIVar5);
            pIVar5 = (Inven_Item *)CPlayData::getRewardItem((CPlayData *)(this + 0x110),local_4c);
            iVar4 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),local_4c);
            deathTowerCardStatistic(this,iVar4,local_48,pIVar5);
            CUser::Send(local_48,(PacketGuard *)local_88);
            CPacketHandler::~CPacketHandler(local_88);
          }
        }
        setTowerState(this,4);
        uVar13 = _genTimerKey(this,0x4c);
        uVar3 = *(undefined4 *)(this + 4);
        pTVar14 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar14,6,uVar3,0x4c,5,uVar13,0x4c);
      }
      else if (param_2 == 0x4c) {
        iVar4 = getTowerState(this);
        if (iVar4 < 4) {
          return 0;
        }
        local_41 = true;
        for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
          local_3c = (CUserCharacInfo *)0x0;
          local_3c = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_40);
          if ((local_3c == (CUserCharacInfo *)0x0) ||
             (cVar1 = CParty::checkValidUser(*(CParty **)this,local_40), cVar1 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            Inven_Item::Inven_Item(local_e5);
            pCVar15 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_3c);
            local_38 = CInventory::GetInvenData(pCVar15,0x1057,local_e5);
            if (local_38 < 0) {
              local_41 = false;
              break;
            }
          }
        }
        CPacketHandler::CPacketHandler(local_94);
                    /* try { // try from 084630ed to 08463387 has its CatchHandler @ 08463573 */
        CPacketHandler::makeDisplayEPLP(local_94,local_41);
        CParty::send_to_party(*(CParty **)this,(PacketGuard *)local_94);
        for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
          local_30 = (CUserCharacInfo *)0x0;
          local_30 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_34);
          if ((local_30 == (CUserCharacInfo *)0x0) ||
             (cVar1 = CParty::checkValidUser(*(CParty **)this,local_34), cVar1 != '\x01')) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            local_2c = 0;
            while (iVar4 = CPlayData::getRewardItemCount((CPlayData *)(this + 0x110),local_34),
                  local_2c < iVar4) {
              local_28 = CPlayData::getRewardItem((CPlayData *)(this + 0x110),local_34);
              if (*(int *)(local_2c * 0x3d + local_28 + 2) != -1) {
                local_24 = 0xffffffff;
                if (*(int *)(local_2c * 0x3d + local_28 + 2) == 0) {
                  uVar3 = Inven_Item::get_add_info((Inven_Item *)(local_2c * 0x3d + local_28));
                  pCVar15 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(local_30);
                  local_20 = CInventory::gain_money(pCVar15,uVar3,5,1,0);
                  iVar7 = Inven_Item::get_add_info((Inven_Item *)(local_2c * 0x3d + local_28));
                  iVar4 = local_20;
                  if (local_20 < iVar7) {
                    uVar3 = Inven_Item::get_add_info((Inven_Item *)(local_2c * 0x3d + local_28));
                    CUser::SendMoneyFullReason((CUser *)local_30,0,uVar3,iVar4);
                  }
                  local_24 = 0;
                  this_00 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
                  iVar7 = CDungeon::get_index(this_00);
                  iVar4 = local_20;
                  if (iVar7 == 11000) {
                    pCVar16 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
                    CCirculationStatistic::AddCirculationStatistic(pCVar16,4,local_30,iVar4);
                  }
                  else {
                    pCVar16 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
                    CCirculationStatistic::AddCirculationStatistic(pCVar16,5,local_30,iVar4);
                  }
                }
                else {
                  puVar17 = (undefined4 *)(local_2c * 0x3d + local_28);
                  uVar3 = CUserCharacInfo::getCurCharacInvenW(local_30);
                  local_24 = CInventory::insertItemIntoInventory
                                       (uVar3,*puVar17,puVar17[1],puVar17[2],puVar17[3],puVar17[4],
                                        puVar17[5],puVar17[6],puVar17[7],puVar17[8],puVar17[9],
                                        puVar17[10],puVar17[0xb],puVar17[0xc],puVar17[0xd],
                                        puVar17[0xe],*(undefined1 *)(puVar17 + 0xf),0xb,1,1);
                }
                if (-1 < local_24) {
                  CPacketHandler::CPacketHandler(local_a8);
                    /* try { // try from 08463394 to 084633cd has its CatchHandler @ 084633d0 */
                  uVar3 = Inven_Item::GetItemSpace((Inven_Item *)(local_2c * 0x3d + local_28));
                  CPacketHandler::makeUpdateItemList(local_a8,local_30,uVar3,local_24);
                  CUser::Send((CUser *)local_30,(PacketGuard *)local_a8);
                    /* try { // try from 084633f4 to 08463570 has its CatchHandler @ 08463573 */
                  CPacketHandler::~CPacketHandler(local_a8);
                }
              }
              local_2c = local_2c + 1;
            }
            bVar2 = (bool)CPlayData::getRewardExp((CPlayData *)(this + 0x110),local_34);
            CUserCharacInfo::calcHelpAbuseRatio((uint)local_30,bVar2);
            local_98 = 0;
            local_9c = 0;
            uVar3 = CPlayData::getRewardExp((CPlayData *)(this + 0x110),local_34);
            cVar1 = CUser::gain_exp_sp((CUser *)local_30,uVar3,&local_98,&local_9c,2,0,0);
            if (cVar1 != '\0') {
              CUser::SendNotiPacket((CUser *)local_30,2,2,1);
            }
          }
        }
        setTowerState(this,5);
        CParty::SetEPLPState(*(CParty **)this,'\x02');
        uVar13 = _genTimerKey(this,0x4d);
        uVar3 = *(undefined4 *)(this + 4);
        pTVar14 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar14,6,uVar3,0x4d,0x3c,uVar13,0x4d);
        CPacketHandler::~CPacketHandler(local_94);
      }
      else if (param_2 == 0x4d) {
        cVar1 = CParty::GetEPLPState(*(CParty **)this);
        if (cVar1 != '\x02') {
          return 0;
        }
        cVar1 = CParty::GetSelectedEPLPCmd(*(CParty **)this);
        if (cVar1 == '\x03') {
          return 0;
        }
        _onFinishDeathTower(this);
      }
      else if (param_2 == 0x4e) {
        cVar1 = CParty::GetEPLPState(*(CParty **)this);
        if (cVar1 != '\x03') {
          return 0;
        }
        _onFinishDeathTower(this);
      }
      else if (param_2 == 0x4a) {
        iVar4 = getTowerState(this);
        if (iVar4 < 2) {
          return 0;
        }
        iVar4 = CParty::get_member_count(*(CParty **)this);
        if (iVar4 < 1) {
          _destroy(this);
          return 1;
        }
        cVar1 = _checkMemberDie(this);
        if (cVar1 == '\0') {
          iVar4 = CStage::getCurrentStage((CStage *)(this + 0x14));
          iVar7 = CDungeonMgr::getEndStage((CDungeonMgr *)(this + 0xc));
          if (iVar4 == iVar7) {
            _beginTowerClearProcess(this,true);
          }
        }
        else {
          _beginTowerClearProcess(this,false);
        }
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

