# Inter_LoadEtc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 17

---

## ProcessOneDayLethe

```asm
// === 084d94c4 Inter_LoadEtc::ProcessOneDayLethe  [0x084d94c4-0x84d98a3] ===
 84d94c4:	55                   	push   %ebp
 84d94c5:	89 e5                	mov    %esp,%ebp
 84d94c7:	56                   	push   %esi
 84d94c8:	53                   	push   %ebx
 84d94c9:	83 ec 30             	sub    $0x30,%esp
 84d94cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d94cf:	0f b6 80 95 2b 00 00 	movzbl 0x2b95(%eax),%eax
 84d94d6:	0f b6 d0             	movzbl %al,%edx
 84d94d9:	8b 45 10             	mov    0x10(%ebp),%eax
 84d94dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d94e0:	89 04 24             	mov    %eax,(%esp)
 84d94e3:	e8 42 2e 01 00       	call   84ec32a <_ZN15CUserCharacInfo18SetOneDayLetheFlagEh>
 84d94e8:	e8 a1 2c bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84d94ed:	89 04 24             	mov    %eax,(%esp)
 84d94f0:	e8 93 f9 db ff       	call   8298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>
 84d94f5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d94f8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84d94fc:	75 0a                	jne    84d9508 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x44>
 84d94fe:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9503:	e9 95 03 00 00       	jmp    84d989d <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x3d9>
 84d9508:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 84d950f:	00 
 84d9510:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9513:	89 04 24             	mov    %eax,(%esp)
 84d9516:	e8 f3 ca c0 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84d951b:	83 f0 01             	xor    $0x1,%eax
 84d951e:	84 c0                	test   %al,%al
 84d9520:	74 31                	je     84d9553 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x8f>
 84d9522:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9525:	0f b6 90 95 2b 00 00 	movzbl 0x2b95(%eax),%edx
 84d952c:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 84d9533:	38 c2                	cmp    %al,%dl
 84d9535:	74 15                	je     84d954c <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x88>
 84d9537:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d953a:	0f b6 90 95 2b 00 00 	movzbl 0x2b95(%eax),%edx
 84d9541:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 84d9548:	38 c2                	cmp    %al,%dl
 84d954a:	75 07                	jne    84d9553 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x8f>
 84d954c:	b8 01 00 00 00       	mov    $0x1,%eax
 84d9551:	eb 05                	jmp    84d9558 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x94>
 84d9553:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9558:	84 c0                	test   %al,%al
 84d955a:	0f 84 bd 01 00 00    	je     84d971d <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x259>
 84d9560:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9563:	05 fd 29 00 00       	add    $0x29fd,%eax
 84d9568:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d956f:	00 
 84d9570:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d9574:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9577:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d957b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d957e:	89 04 24             	mov    %eax,(%esp)
 84d9581:	e8 a4 a8 0e 00       	call   85c3e2a <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND>
 84d9586:	83 f0 01             	xor    $0x1,%eax
 84d9589:	84 c0                	test   %al,%al
 84d958b:	74 0a                	je     84d9597 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0xd3>
 84d958d:	b8 c6 40 00 00       	mov    $0x40c6,%eax
 84d9592:	e9 06 03 00 00       	jmp    84d989d <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x3d9>
 84d9597:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d959a:	0f b6 90 95 2b 00 00 	movzbl 0x2b95(%eax),%edx
 84d95a1:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 84d95a8:	38 c2                	cmp    %al,%dl
 84d95aa:	74 1c                	je     84d95c8 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x104>
 84d95ac:	8b 45 14             	mov    0x14(%ebp),%eax
 84d95af:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 84d95b5:	8b 45 10             	mov    0x10(%ebp),%eax
 84d95b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d95bf:	00 
 84d95c0:	89 04 24             	mov    %eax,(%esp)
 84d95c3:	e8 8a 2d 01 00       	call   84ec352 <_ZN15CUserCharacInfo18SetIsInitSkillFlagEb>
 84d95c8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84d95cd:	c7 44 24 08 d2 40 00 	movl   $0x40d2,0x8(%esp)
 84d95d4:	00 
 84d95d5:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d95dc:	08 
 84d95dd:	89 04 24             	mov    %eax,(%esp)
 84d95e0:	e8 a1 64 db ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84d95e5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d95ec:	00 
 84d95ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d95f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d95f4:	89 04 24             	mov    %eax,(%esp)
 84d95f7:	e8 2a f6 be ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84d95fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d95ff:	89 04 24             	mov    %eax,(%esp)
 84d9602:	e8 3f f6 be ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84d9607:	c7 44 24 04 5c 01 00 	movl   $0x15c,0x4(%esp)
 84d960e:	00 
 84d960f:	89 04 24             	mov    %eax,(%esp)
 84d9612:	e8 3f f6 be ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84d9617:	8b 45 10             	mov    0x10(%ebp),%eax
 84d961a:	89 04 24             	mov    %eax,(%esp)
 84d961d:	e8 74 f6 be ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84d9622:	89 c3                	mov    %eax,%ebx
 84d9624:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d9627:	89 04 24             	mov    %eax,(%esp)
 84d962a:	e8 17 f6 be ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84d962f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d9633:	89 04 24             	mov    %eax,(%esp)
 84d9636:	e8 1b f6 be ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84d963b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d963e:	89 04 24             	mov    %eax,(%esp)
 84d9641:	e8 08 f6 be ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84d9646:	89 04 24             	mov    %eax,(%esp)
 84d9649:	e8 0e 80 01 00       	call   84f165c <_ZN12CStreamGuard11GetInBufferI35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADEEPT_v>
 84d964e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d9651:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9654:	89 04 24             	mov    %eax,(%esp)
 84d9657:	e8 12 0d c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d965c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d965f:	89 02                	mov    %eax,(%edx)
 84d9661:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9664:	89 04 24             	mov    %eax,(%esp)
 84d9667:	e8 e2 25 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d966c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d966f:	89 42 04             	mov    %eax,0x4(%edx)
 84d9672:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9675:	83 c0 0d             	add    $0xd,%eax
 84d9678:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 84d967f:	00 
 84d9680:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d9687:	00 
 84d9688:	89 04 24             	mov    %eax,(%esp)
 84d968b:	e8 30 46 ba ff       	call   807dcc0 <memset@plt>
 84d9690:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 84d9697:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d969a:	88 90 a5 01 00 00    	mov    %dl,0x1a5(%eax)
 84d96a0:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 84d96a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d96aa:	88 50 0c             	mov    %dl,0xc(%eax)
 84d96ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d96b0:	c6 80 a6 01 00 00 00 	movb   $0x0,0x1a6(%eax)
 84d96b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d96ba:	83 c0 0d             	add    $0xd,%eax
 84d96bd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d96c4:	00 
 84d96c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d96c9:	8b 45 10             	mov    0x10(%ebp),%eax
 84d96cc:	89 04 24             	mov    %eax,(%esp)
 84d96cf:	e8 b8 7d 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d96d4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84d96d9:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d96dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d96e0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d96e7:	00 
 84d96e8:	89 04 24             	mov    %eax,(%esp)
 84d96eb:	e8 ee 78 09 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84d96f0:	eb 1b                	jmp    84d970d <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x249>
 84d96f2:	89 d3                	mov    %edx,%ebx
 84d96f4:	89 c6                	mov    %eax,%esi
 84d96f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d96f9:	89 04 24             	mov    %eax,(%esp)
 84d96fc:	e8 d1 31 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84d9701:	89 f0                	mov    %esi,%eax
 84d9703:	89 da                	mov    %ebx,%edx
 84d9705:	89 04 24             	mov    %eax,(%esp)
 84d9708:	e8 43 a0 60 00       	call   8ae3750 <_Unwind_Resume>
 84d970d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d9710:	89 04 24             	mov    %eax,(%esp)
 84d9713:	e8 ba 31 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84d9718:	e9 7b 01 00 00       	jmp    84d9898 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x3d4>
 84d971d:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 84d9724:	00 
 84d9725:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9728:	89 04 24             	mov    %eax,(%esp)
 84d972b:	e8 de c8 c0 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84d9730:	84 c0                	test   %al,%al
 84d9732:	74 1c                	je     84d9750 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x28c>
 84d9734:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9737:	0f b6 90 fc 29 00 00 	movzbl 0x29fc(%eax),%edx
 84d973e:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 84d9745:	38 c2                	cmp    %al,%dl
 84d9747:	75 07                	jne    84d9750 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x28c>
 84d9749:	b8 01 00 00 00       	mov    $0x1,%eax
 84d974e:	eb 05                	jmp    84d9755 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x291>
 84d9750:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9755:	84 c0                	test   %al,%al
 84d9757:	0f 84 82 00 00 00    	je     84d97df <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x31b>
 84d975d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d9764:	00 
 84d9765:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9768:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d976c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d976f:	89 04 24             	mov    %eax,(%esp)
 84d9772:	e8 71 af 0e 00       	call   85c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>
 84d9777:	8b 45 10             	mov    0x10(%ebp),%eax
 84d977a:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84d9780:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d9787:	00 
 84d9788:	8b 45 10             	mov    0x10(%ebp),%eax
 84d978b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d978f:	89 14 24             	mov    %edx,(%esp)
 84d9792:	e8 f1 c9 1a 00       	call   8686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>
 84d9797:	8b 45 10             	mov    0x10(%ebp),%eax
 84d979a:	89 04 24             	mov    %eax,(%esp)
 84d979d:	e8 7e 47 c2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 84d97a2:	89 c3                	mov    %eax,%ebx
 84d97a4:	8b 45 10             	mov    0x10(%ebp),%eax
 84d97a7:	89 04 24             	mov    %eax,(%esp)
 84d97aa:	e8 81 59 d5 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 84d97af:	8d 50 46             	lea    0x46(%eax),%edx
 84d97b2:	8b 45 10             	mov    0x10(%ebp),%eax
 84d97b5:	05 00 97 07 00       	add    $0x79700,%eax
 84d97ba:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84d97c1:	00 
 84d97c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d97c9:	00 
 84d97ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d97ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d97d2:	89 04 24             	mov    %eax,(%esp)
 84d97d5:	e8 f4 c5 1a 00       	call   8685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>
 84d97da:	e9 b9 00 00 00       	jmp    84d9898 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x3d4>
 84d97df:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 84d97e6:	00 
 84d97e7:	8b 45 10             	mov    0x10(%ebp),%eax
 84d97ea:	89 04 24             	mov    %eax,(%esp)
 84d97ed:	e8 1c c8 c0 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84d97f2:	84 c0                	test   %al,%al
 84d97f4:	74 1c                	je     84d9812 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x34e>
 84d97f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d97f9:	0f b6 90 fc 29 00 00 	movzbl 0x29fc(%eax),%edx
 84d9800:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 84d9807:	38 c2                	cmp    %al,%dl
 84d9809:	75 07                	jne    84d9812 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x34e>
 84d980b:	b8 01 00 00 00       	mov    $0x1,%eax
 84d9810:	eb 05                	jmp    84d9817 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x353>
 84d9812:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9817:	84 c0                	test   %al,%al
 84d9819:	74 7d                	je     84d9898 <_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi+0x3d4>
 84d981b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d9822:	00 
 84d9823:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9826:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d982a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d982d:	89 04 24             	mov    %eax,(%esp)
 84d9830:	e8 b3 ae 0e 00       	call   85c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>
 84d9835:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9838:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84d983e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d9845:	00 
 84d9846:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9849:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d984d:	89 14 24             	mov    %edx,(%esp)
 84d9850:	e8 33 c9 1a 00       	call   8686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>
 84d9855:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9858:	89 04 24             	mov    %eax,(%esp)
 84d985b:	e8 c0 46 c2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 84d9860:	89 c3                	mov    %eax,%ebx
 84d9862:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9865:	89 04 24             	mov    %eax,(%esp)
 84d9868:	e8 c3 58 d5 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 84d986d:	8d 50 46             	lea    0x46(%eax),%edx
 84d9870:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9873:	05 00 97 07 00       	add    $0x79700,%eax
 84d9878:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84d987f:	00 
 84d9880:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d9887:	00 
 84d9888:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d988c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d9890:	89 04 24             	mov    %eax,(%esp)
 84d9893:	e8 36 c5 1a 00       	call   8685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>
 84d9898:	b8 00 00 00 00       	mov    $0x0,%eax
 84d989d:	83 c4 30             	add    $0x30,%esp
 84d98a0:	5b                   	pop    %ebx
 84d98a1:	5e                   	pop    %esi
 84d98a2:	5d                   	pop    %ebp
 84d98a3:	c3                   	ret

```

```c
// Inter_LoadEtc::ProcessOneDayLethe @ 0x84d94c4

/* Inter_LoadEtc::ProcessOneDayLethe(SIG_LOAD_ETC*, CUser*, int&) */

undefined4 __thiscall
Inter_LoadEtc::ProcessOneDayLethe
          (Inter_LoadEtc *this,SIG_LOAD_ETC *param_1,CUser *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  CGameManager *this_00;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_1c [8];
  CPremiumLetheManager *local_14;
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *local_10;
  
  CUserCharacInfo::SetOneDayLetheFlag((CUserCharacInfo *)param_2,(uchar)param_1[0x2b95]);
  this_00 = (CGameManager *)G_CGameManager();
  local_14 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this_00);
  if (local_14 != (CPremiumLetheManager *)0x0) {
    cVar2 = CUser::isAffectedPremium(param_2,0x21);
    if ((cVar2 == '\x01') ||
       ((param_1[0x2b95] != CPremiumLetheManager::USE_LETHE_STATE &&
        (param_1[0x2b95] != CPremiumLetheManager::SKILL_CONFIRM_STATE)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = CPremiumLetheManager::BackToPre(local_14,param_2,param_1 + 0x29fd,0);
      if (cVar2 != '\x01') {
        return 0x40c6;
      }
      if (param_1[0x2b95] != CPremiumLetheManager::SKILL_CONFIRM_STATE) {
        *param_3 = 1;
        CUserCharacInfo::SetIsInitSkillFlag((CUserCharacInfo *)param_2,false);
      }
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x40d2)
      ;
      CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 084d9612 to 084d96ef has its CatchHandler @ 084d96f2 */
      CStreamGuard::operator<<(pCVar4,0x15c);
      iVar5 = CUser::GetUID(param_2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar4,iVar5);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
      local_10 = CStreamGuard::GetInBuffer<SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>(pCVar4);
      uVar6 = CUser::get_acc_id(param_2);
      *(undefined4 *)local_10 = uVar6;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      *(undefined4 *)(local_10 + 4) = uVar6;
      memset(local_10 + 0xd,0,0x198);
      local_10[0x1a5] = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      local_10[0xc] = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      local_10[0x1a6] = (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x0;
      CUser::SaveBackupSkillInfo(param_2,local_10 + 0xd,0);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
      CStreamGuard::~CStreamGuard(local_1c);
    }
    else {
      cVar2 = CUser::isAffectedPremium(param_2,0x21);
      if ((cVar2 == '\0') ||
         (*(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)(param_1 + 0x29fc) !=
          CPremiumLetheManager::NOT_USE_LETHE_STATE)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CPremiumLetheManager::BackupSkill(local_14,param_2,0);
        cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(param_2 + 0x79700),param_2,0);
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
        iVar5 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_2);
        cUserHistoryLog::SkillSave((cUserHistoryLog *)(param_2 + 0x79700),iVar5 + 0x46,uVar6,0,1);
      }
      else {
        cVar2 = CUser::isAffectedPremium(param_2,0x21);
        if ((cVar2 == '\0') || (param_1[0x29fc] != CPremiumLetheManager::SKILL_CONFIRM_STATE)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CPremiumLetheManager::BackupSkill(local_14,param_2,0);
          cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(param_2 + 0x79700),param_2,0);
          uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
          iVar5 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_2);
          cUserHistoryLog::SkillSave((cUserHistoryLog *)(param_2 + 0x79700),iVar5 + 0x46,uVar6,0,1);
        }
      }
    }
  }
  return 0;
}

```

---

## ProcessOneDayLethe2ND

```asm
// === 084d98a4 Inter_LoadEtc::ProcessOneDayLethe2ND  [0x084d98a4-0x84d9c8d] ===
 84d98a4:	55                   	push   %ebp
 84d98a5:	89 e5                	mov    %esp,%ebp
 84d98a7:	56                   	push   %esi
 84d98a8:	53                   	push   %ebx
 84d98a9:	83 ec 30             	sub    $0x30,%esp
 84d98ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d98af:	0f b6 80 2f 2d 00 00 	movzbl 0x2d2f(%eax),%eax
 84d98b6:	0f b6 d0             	movzbl %al,%edx
 84d98b9:	8b 45 10             	mov    0x10(%ebp),%eax
 84d98bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d98c0:	89 04 24             	mov    %eax,(%esp)
 84d98c3:	e8 b2 2a 01 00       	call   84ec37a <_ZN15CUserCharacInfo21SetOneDayLetheFlag2NDEh>
 84d98c8:	e8 c1 28 bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84d98cd:	89 04 24             	mov    %eax,(%esp)
 84d98d0:	e8 b3 f5 db ff       	call   8298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>
 84d98d5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d98d8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84d98dc:	75 0a                	jne    84d98e8 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x44>
 84d98de:	b8 00 00 00 00       	mov    $0x0,%eax
 84d98e3:	e9 9f 03 00 00       	jmp    84d9c87 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x3e3>
 84d98e8:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 84d98ef:	00 
 84d98f0:	8b 45 10             	mov    0x10(%ebp),%eax
 84d98f3:	89 04 24             	mov    %eax,(%esp)
 84d98f6:	e8 13 c7 c0 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84d98fb:	83 f0 01             	xor    $0x1,%eax
 84d98fe:	84 c0                	test   %al,%al
 84d9900:	74 31                	je     84d9933 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x8f>
 84d9902:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9905:	0f b6 90 2f 2d 00 00 	movzbl 0x2d2f(%eax),%edx
 84d990c:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 84d9913:	38 c2                	cmp    %al,%dl
 84d9915:	74 15                	je     84d992c <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x88>
 84d9917:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d991a:	0f b6 90 2f 2d 00 00 	movzbl 0x2d2f(%eax),%edx
 84d9921:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 84d9928:	38 c2                	cmp    %al,%dl
 84d992a:	75 07                	jne    84d9933 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x8f>
 84d992c:	b8 01 00 00 00       	mov    $0x1,%eax
 84d9931:	eb 05                	jmp    84d9938 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x94>
 84d9933:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9938:	84 c0                	test   %al,%al
 84d993a:	0f 84 bd 01 00 00    	je     84d9afd <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x259>
 84d9940:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9943:	05 97 2b 00 00       	add    $0x2b97,%eax
 84d9948:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d994f:	00 
 84d9950:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d9954:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9957:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d995b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d995e:	89 04 24             	mov    %eax,(%esp)
 84d9961:	e8 c4 a4 0e 00       	call   85c3e2a <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND>
 84d9966:	83 f0 01             	xor    $0x1,%eax
 84d9969:	84 c0                	test   %al,%al
 84d996b:	74 0a                	je     84d9977 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0xd3>
 84d996d:	b8 11 41 00 00       	mov    $0x4111,%eax
 84d9972:	e9 10 03 00 00       	jmp    84d9c87 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x3e3>
 84d9977:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d997a:	0f b6 90 2f 2d 00 00 	movzbl 0x2d2f(%eax),%edx
 84d9981:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 84d9988:	38 c2                	cmp    %al,%dl
 84d998a:	74 1c                	je     84d99a8 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x104>
 84d998c:	8b 45 14             	mov    0x14(%ebp),%eax
 84d998f:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 84d9995:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9998:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d999f:	00 
 84d99a0:	89 04 24             	mov    %eax,(%esp)
 84d99a3:	e8 fa 29 01 00       	call   84ec3a2 <_ZN15CUserCharacInfo21SetIsInitSkillFlag2NDEb>
 84d99a8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84d99ad:	c7 44 24 08 1d 41 00 	movl   $0x411d,0x8(%esp)
 84d99b4:	00 
 84d99b5:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d99bc:	08 
 84d99bd:	89 04 24             	mov    %eax,(%esp)
 84d99c0:	e8 c1 60 db ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84d99c5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d99cc:	00 
 84d99cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d99d1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d99d4:	89 04 24             	mov    %eax,(%esp)
 84d99d7:	e8 4a f2 be ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84d99dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d99df:	89 04 24             	mov    %eax,(%esp)
 84d99e2:	e8 5f f2 be ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84d99e7:	c7 44 24 04 5c 01 00 	movl   $0x15c,0x4(%esp)
 84d99ee:	00 
 84d99ef:	89 04 24             	mov    %eax,(%esp)
 84d99f2:	e8 5f f2 be ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84d99f7:	8b 45 10             	mov    0x10(%ebp),%eax
 84d99fa:	89 04 24             	mov    %eax,(%esp)
 84d99fd:	e8 94 f2 be ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84d9a02:	89 c3                	mov    %eax,%ebx
 84d9a04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d9a07:	89 04 24             	mov    %eax,(%esp)
 84d9a0a:	e8 37 f2 be ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84d9a0f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d9a13:	89 04 24             	mov    %eax,(%esp)
 84d9a16:	e8 3b f2 be ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84d9a1b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d9a1e:	89 04 24             	mov    %eax,(%esp)
 84d9a21:	e8 28 f2 be ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84d9a26:	89 04 24             	mov    %eax,(%esp)
 84d9a29:	e8 2e 7c 01 00       	call   84f165c <_ZN12CStreamGuard11GetInBufferI35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADEEPT_v>
 84d9a2e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d9a31:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9a34:	89 04 24             	mov    %eax,(%esp)
 84d9a37:	e8 32 09 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d9a3c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d9a3f:	89 02                	mov    %eax,(%edx)
 84d9a41:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9a44:	89 04 24             	mov    %eax,(%esp)
 84d9a47:	e8 02 22 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d9a4c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d9a4f:	89 42 04             	mov    %eax,0x4(%edx)
 84d9a52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9a55:	83 c0 0d             	add    $0xd,%eax
 84d9a58:	c7 44 24 08 98 01 00 	movl   $0x198,0x8(%esp)
 84d9a5f:	00 
 84d9a60:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d9a67:	00 
 84d9a68:	89 04 24             	mov    %eax,(%esp)
 84d9a6b:	e8 50 42 ba ff       	call   807dcc0 <memset@plt>
 84d9a70:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 84d9a77:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9a7a:	88 90 a5 01 00 00    	mov    %dl,0x1a5(%eax)
 84d9a80:	0f b6 15 bc 2d 47 09 	movzbl 0x9472dbc,%edx
 84d9a87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9a8a:	88 50 0c             	mov    %dl,0xc(%eax)
 84d9a8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9a90:	c6 80 a6 01 00 00 01 	movb   $0x1,0x1a6(%eax)
 84d9a97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9a9a:	83 c0 0d             	add    $0xd,%eax
 84d9a9d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d9aa4:	00 
 84d9aa5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9aa9:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9aac:	89 04 24             	mov    %eax,(%esp)
 84d9aaf:	e8 d8 79 1a 00       	call   868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>
 84d9ab4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84d9ab9:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d9abc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d9ac0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d9ac7:	00 
 84d9ac8:	89 04 24             	mov    %eax,(%esp)
 84d9acb:	e8 0e 75 09 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84d9ad0:	eb 1b                	jmp    84d9aed <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x249>
 84d9ad2:	89 d3                	mov    %edx,%ebx
 84d9ad4:	89 c6                	mov    %eax,%esi
 84d9ad6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d9ad9:	89 04 24             	mov    %eax,(%esp)
 84d9adc:	e8 f1 2d 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84d9ae1:	89 f0                	mov    %esi,%eax
 84d9ae3:	89 da                	mov    %ebx,%edx
 84d9ae5:	89 04 24             	mov    %eax,(%esp)
 84d9ae8:	e8 63 9c 60 00       	call   8ae3750 <_Unwind_Resume>
 84d9aed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d9af0:	89 04 24             	mov    %eax,(%esp)
 84d9af3:	e8 da 2d 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84d9af8:	e9 85 01 00 00       	jmp    84d9c82 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x3de>
 84d9afd:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 84d9b04:	00 
 84d9b05:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9b08:	89 04 24             	mov    %eax,(%esp)
 84d9b0b:	e8 fe c4 c0 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84d9b10:	84 c0                	test   %al,%al
 84d9b12:	74 1c                	je     84d9b30 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x28c>
 84d9b14:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9b17:	0f b6 90 96 2b 00 00 	movzbl 0x2b96(%eax),%edx
 84d9b1e:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 84d9b25:	38 c2                	cmp    %al,%dl
 84d9b27:	75 07                	jne    84d9b30 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x28c>
 84d9b29:	b8 01 00 00 00       	mov    $0x1,%eax
 84d9b2e:	eb 05                	jmp    84d9b35 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x291>
 84d9b30:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9b35:	84 c0                	test   %al,%al
 84d9b37:	0f 84 85 00 00 00    	je     84d9bc2 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x31e>
 84d9b3d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d9b44:	00 
 84d9b45:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9b48:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9b4c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d9b4f:	89 04 24             	mov    %eax,(%esp)
 84d9b52:	e8 91 ab 0e 00       	call   85c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>
 84d9b57:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9b5a:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84d9b60:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d9b67:	00 
 84d9b68:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9b6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9b6f:	89 14 24             	mov    %edx,(%esp)
 84d9b72:	e8 11 c6 1a 00       	call   8686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>
 84d9b77:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9b7a:	89 04 24             	mov    %eax,(%esp)
 84d9b7d:	e8 9e 43 c2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 84d9b82:	89 c3                	mov    %eax,%ebx
 84d9b84:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9b87:	89 04 24             	mov    %eax,(%esp)
 84d9b8a:	e8 a1 55 d5 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 84d9b8f:	8d 90 de 01 00 00    	lea    0x1de(%eax),%edx
 84d9b95:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9b98:	05 00 97 07 00       	add    $0x79700,%eax
 84d9b9d:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84d9ba4:	00 
 84d9ba5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d9bac:	00 
 84d9bad:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d9bb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d9bb5:	89 04 24             	mov    %eax,(%esp)
 84d9bb8:	e8 11 c2 1a 00       	call   8685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>
 84d9bbd:	e9 c0 00 00 00       	jmp    84d9c82 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x3de>
 84d9bc2:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 84d9bc9:	00 
 84d9bca:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9bcd:	89 04 24             	mov    %eax,(%esp)
 84d9bd0:	e8 39 c4 c0 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 84d9bd5:	84 c0                	test   %al,%al
 84d9bd7:	74 1c                	je     84d9bf5 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x351>
 84d9bd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9bdc:	0f b6 90 96 2b 00 00 	movzbl 0x2b96(%eax),%edx
 84d9be3:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 84d9bea:	38 c2                	cmp    %al,%dl
 84d9bec:	75 07                	jne    84d9bf5 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x351>
 84d9bee:	b8 01 00 00 00       	mov    $0x1,%eax
 84d9bf3:	eb 05                	jmp    84d9bfa <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x356>
 84d9bf5:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9bfa:	84 c0                	test   %al,%al
 84d9bfc:	0f 84 80 00 00 00    	je     84d9c82 <_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi+0x3de>
 84d9c02:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d9c09:	00 
 84d9c0a:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9c0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9c11:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d9c14:	89 04 24             	mov    %eax,(%esp)
 84d9c17:	e8 cc aa 0e 00       	call   85c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>
 84d9c1c:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9c1f:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84d9c25:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d9c2c:	00 
 84d9c2d:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9c30:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9c34:	89 14 24             	mov    %edx,(%esp)
 84d9c37:	e8 4c c5 1a 00       	call   8686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>
 84d9c3c:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9c3f:	89 04 24             	mov    %eax,(%esp)
 84d9c42:	e8 d9 42 c2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 84d9c47:	89 c3                	mov    %eax,%ebx
 84d9c49:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9c4c:	89 04 24             	mov    %eax,(%esp)
 84d9c4f:	e8 dc 54 d5 ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 84d9c54:	8d 90 de 01 00 00    	lea    0x1de(%eax),%edx
 84d9c5a:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9c5d:	05 00 97 07 00       	add    $0x79700,%eax
 84d9c62:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 84d9c69:	00 
 84d9c6a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d9c71:	00 
 84d9c72:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d9c76:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d9c7a:	89 04 24             	mov    %eax,(%esp)
 84d9c7d:	e8 4c c1 1a 00       	call   8685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>
 84d9c82:	b8 00 00 00 00       	mov    $0x0,%eax
 84d9c87:	83 c4 30             	add    $0x30,%esp
 84d9c8a:	5b                   	pop    %ebx
 84d9c8b:	5e                   	pop    %esi
 84d9c8c:	5d                   	pop    %ebp
 84d9c8d:	c3                   	ret

```

```c
// Inter_LoadEtc::ProcessOneDayLethe2ND @ 0x84d98a4

/* Inter_LoadEtc::ProcessOneDayLethe2ND(SIG_LOAD_ETC*, CUser*, int&) */

undefined4 __thiscall
Inter_LoadEtc::ProcessOneDayLethe2ND
          (Inter_LoadEtc *this,SIG_LOAD_ETC *param_1,CUser *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  CGameManager *this_00;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_1c [8];
  CPremiumLetheManager *local_14;
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *local_10;
  
  CUserCharacInfo::SetOneDayLetheFlag2ND((CUserCharacInfo *)param_2,(uchar)param_1[0x2d2f]);
  this_00 = (CGameManager *)G_CGameManager();
  local_14 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this_00);
  if (local_14 != (CPremiumLetheManager *)0x0) {
    cVar2 = CUser::isAffectedPremium(param_2,0x21);
    if ((cVar2 == '\x01') ||
       ((param_1[0x2d2f] != CPremiumLetheManager::USE_LETHE_STATE &&
        (param_1[0x2d2f] != CPremiumLetheManager::SKILL_CONFIRM_STATE)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = CPremiumLetheManager::BackToPre(local_14,param_2,param_1 + 0x2b97,1);
      if (cVar2 != '\x01') {
        return 0x4111;
      }
      if (param_1[0x2d2f] != CPremiumLetheManager::SKILL_CONFIRM_STATE) {
        *param_3 = 1;
        CUserCharacInfo::SetIsInitSkillFlag2ND((CUserCharacInfo *)param_2,false);
      }
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x411d)
      ;
      CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 084d99f2 to 084d9acf has its CatchHandler @ 084d9ad2 */
      CStreamGuard::operator<<(pCVar4,0x15c);
      iVar5 = CUser::GetUID(param_2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar4,iVar5);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
      local_10 = CStreamGuard::GetInBuffer<SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>(pCVar4);
      uVar6 = CUser::get_acc_id(param_2);
      *(undefined4 *)local_10 = uVar6;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      *(undefined4 *)(local_10 + 4) = uVar6;
      memset(local_10 + 0xd,0,0x198);
      local_10[0x1a5] = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      local_10[0xc] = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      local_10[0x1a6] = (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x1;
      CUser::SaveBackupSkillInfo(param_2,local_10 + 0xd,1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
      CStreamGuard::~CStreamGuard(local_1c);
    }
    else {
      cVar2 = CUser::isAffectedPremium(param_2,0x21);
      if ((cVar2 == '\0') ||
         (*(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)(param_1 + 0x2b96) !=
          CPremiumLetheManager::NOT_USE_LETHE_STATE)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CPremiumLetheManager::BackupSkill(local_14,param_2,1);
        cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(param_2 + 0x79700),param_2,0);
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
        iVar5 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_2);
        cUserHistoryLog::SkillSave((cUserHistoryLog *)(param_2 + 0x79700),iVar5 + 0x1de,uVar6,1,1);
      }
      else {
        cVar2 = CUser::isAffectedPremium(param_2,0x21);
        if ((cVar2 == '\0') || (param_1[0x2b96] != CPremiumLetheManager::SKILL_CONFIRM_STATE)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CPremiumLetheManager::BackupSkill(local_14,param_2,1);
          cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(param_2 + 0x79700),param_2,0);
          uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
          iVar5 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_2);
          cUserHistoryLog::SkillSave((cUserHistoryLog *)(param_2 + 0x79700),iVar5 + 0x1de,uVar6,1,1)
          ;
        }
      }
    }
  }
  return 0;
}

```

---

## RequestDBEventArad

```asm
// === 084c266e Inter_LoadEtc::RequestDBEventArad  [0x084c266e-0x84c275f] ===
 84c266e:	55                   	push   %ebp
 84c266f:	89 e5                	mov    %esp,%ebp
 84c2671:	56                   	push   %esi
 84c2672:	53                   	push   %ebx
 84c2673:	83 ec 70             	sub    $0x70,%esp
 84c2676:	8d 45 9a             	lea    -0x66(%ebp),%eax
 84c2679:	89 04 24             	mov    %eax,(%esp)
 84c267c:	e8 05 40 cc ff       	call   8186686 <_ZN4arad22SigLoadRewardEventItemC1Ev>
 84c2681:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2684:	89 04 24             	mov    %eax,(%esp)
 84c2687:	e8 e2 7c c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c268c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2690:	8d 45 9a             	lea    -0x66(%ebp),%eax
 84c2693:	89 04 24             	mov    %eax,(%esp)
 84c2696:	e8 1b 40 cc ff       	call   81866b6 <_ZN4arad22SigLoadRewardEventItem3setEj>
 84c269b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c26a0:	c7 44 24 08 93 11 00 	movl   $0x1193,0x8(%esp)
 84c26a7:	00 
 84c26a8:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c26af:	08 
 84c26b0:	89 04 24             	mov    %eax,(%esp)
 84c26b3:	e8 ce d3 dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c26b8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c26bf:	00 
 84c26c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c26c4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c26c7:	89 04 24             	mov    %eax,(%esp)
 84c26ca:	e8 57 65 c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c26cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c26d2:	89 04 24             	mov    %eax,(%esp)
 84c26d5:	e8 bc 65 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c26da:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c26de:	c7 44 24 04 26 00 00 	movl   $0x26,0x4(%esp)
 84c26e5:	00 
 84c26e6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c26e9:	89 04 24             	mov    %eax,(%esp)
 84c26ec:	e8 c5 50 cd ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 84c26f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c26f4:	89 04 24             	mov    %eax,(%esp)
 84c26f7:	e8 52 65 c0 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84c26fc:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 84c2703:	00 
 84c2704:	8d 55 9a             	lea    -0x66(%ebp),%edx
 84c2707:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c270b:	89 04 24             	mov    %eax,(%esp)
 84c270e:	e8 3f bf c1 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84c2713:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c2718:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84c271b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c271f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c2726:	00 
 84c2727:	89 04 24             	mov    %eax,(%esp)
 84c272a:	e8 af e8 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c272f:	89 c3                	mov    %eax,%ebx
 84c2731:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c2734:	89 04 24             	mov    %eax,(%esp)
 84c2737:	e8 96 a1 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c273c:	89 d8                	mov    %ebx,%eax
 84c273e:	83 c4 70             	add    $0x70,%esp
 84c2741:	5b                   	pop    %ebx
 84c2742:	5e                   	pop    %esi
 84c2743:	5d                   	pop    %ebp
 84c2744:	c3                   	ret
 84c2745:	89 d3                	mov    %edx,%ebx
 84c2747:	89 c6                	mov    %eax,%esi
 84c2749:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c274c:	89 04 24             	mov    %eax,(%esp)
 84c274f:	e8 7e a1 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c2754:	89 f0                	mov    %esi,%eax
 84c2756:	89 da                	mov    %ebx,%edx
 84c2758:	89 04 24             	mov    %eax,(%esp)
 84c275b:	e8 f0 0f 62 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_LoadEtc::RequestDBEventArad @ 0x84c266e

/* Inter_LoadEtc::RequestDBEventArad(CUser*) */

undefined4 __thiscall Inter_LoadEtc::RequestDBEventArad(Inter_LoadEtc *this,CUser *param_1)

{
  uint uVar1;
  Stream *pSVar2;
  undefined4 uVar3;
  CStreamGuard *this_00;
  SigLoadRewardEventItem local_6a [86];
  CStreamGuard local_14 [8];
  
  arad::SigLoadRewardEventItem::SigLoadRewardEventItem(local_6a);
  uVar1 = CUser::get_acc_id(param_1);
  arad::SigLoadRewardEventItem::set(local_6a,uVar1);
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x1193);
  CStreamGuard::CStreamGuard(local_14,pSVar2,true);
  uVar3 = CUser::GetUID(param_1);
                    /* try { // try from 084c26ec to 084c272e has its CatchHandler @ 084c2745 */
  ARAD::DISPATCHER::make_internal_stream_jpn(local_14,0x26,uVar3);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(this_00,local_6a,0x56);
  uVar3 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return uVar3;
}

```

---

## SendResult

```asm
// === 084c2b82 Inter_LoadEtc::SendResult  [0x084c2b82-0x84c3119] ===
 84c2b82:	55                   	push   %ebp
 84c2b83:	89 e5                	mov    %esp,%ebp
 84c2b85:	56                   	push   %esi
 84c2b86:	53                   	push   %ebx
 84c2b87:	83 c4 80             	add    $0xffffff80,%esp
 84c2b8a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2b8d:	89 04 24             	mov    %eax,(%esp)
 84c2b90:	e8 b7 b1 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c2b95:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84c2b9c:	00 
 84c2b9d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c2ba4:	00 
 84c2ba5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2ba8:	89 04 24             	mov    %eax,(%esp)
 84c2bab:	e8 4c 8d c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c2bb0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c2bb7:	00 
 84c2bb8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2bbb:	89 04 24             	mov    %eax,(%esp)
 84c2bbe:	e8 5d 8d c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c2bc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2bc6:	89 04 24             	mov    %eax,(%esp)
 84c2bc9:	e8 18 d2 d6 ff       	call   822fde6 <_ZNK5CUser10getRegTimeEv>
 84c2bce:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2bd2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2bd5:	89 04 24             	mov    %eax,(%esp)
 84c2bd8:	e8 5f 8d c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c2bdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2be0:	89 04 24             	mov    %eax,(%esp)
 84c2be3:	e8 1a c6 d6 ff       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 84c2be8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2bec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2bef:	89 04 24             	mov    %eax,(%esp)
 84c2bf2:	e8 45 8d c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c2bf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2bfa:	89 04 24             	mov    %eax,(%esp)
 84c2bfd:	e8 7a 77 c1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84c2c02:	0f b7 c0             	movzwl %ax,%eax
 84c2c05:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2c09:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2c0c:	89 04 24             	mov    %eax,(%esp)
 84c2c0f:	e8 90 72 c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c2c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2c17:	89 04 24             	mov    %eax,(%esp)
 84c2c1a:	e8 47 4b 19 00       	call   8657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>
 84c2c1f:	0f b7 c0             	movzwl %ax,%eax
 84c2c22:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2c26:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2c29:	89 04 24             	mov    %eax,(%esp)
 84c2c2c:	e8 73 72 c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c2c31:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2c34:	89 04 24             	mov    %eax,(%esp)
 84c2c37:	e8 c8 4b 19 00       	call   8657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>
 84c2c3c:	0f b7 c0             	movzwl %ax,%eax
 84c2c3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2c43:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2c46:	89 04 24             	mov    %eax,(%esp)
 84c2c49:	e8 56 72 c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c2c4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2c51:	89 04 24             	mov    %eax,(%esp)
 84c2c54:	e8 61 e0 c4 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 84c2c59:	0f b7 c0             	movzwl %ax,%eax
 84c2c5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2c60:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2c63:	89 04 24             	mov    %eax,(%esp)
 84c2c66:	e8 39 72 c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c2c6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2c6e:	89 04 24             	mov    %eax,(%esp)
 84c2c71:	e8 b2 a1 c6 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 84c2c76:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84c2c79:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84c2c7c:	c7 44 24 08 0f 27 00 	movl   $0x270f,0x8(%esp)
 84c2c83:	00 
 84c2c84:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84c2c87:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c2c8b:	89 04 24             	mov    %eax,(%esp)
 84c2c8e:	e8 09 b2 1e 00       	call   86ade9c <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi>
 84c2c93:	83 ec 04             	sub    $0x4,%esp
 84c2c96:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2c99:	89 04 24             	mov    %eax,(%esp)
 84c2c9c:	e8 ab de c4 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84c2ca1:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84c2ca4:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84c2cab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c2cb2:	00 
 84c2cb3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2cb6:	89 04 24             	mov    %eax,(%esp)
 84c2cb9:	e8 62 8c c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c2cbe:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c2cc5:	e8 d4 8f c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c2cca:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c2ccd:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84c2cd0:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84c2cd3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c2cd7:	89 04 24             	mov    %eax,(%esp)
 84c2cda:	e8 eb e7 02 00       	call   84f14ca <_ZNKSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE5beginEv>
 84c2cdf:	83 ec 04             	sub    $0x4,%esp
 84c2ce2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84c2ce5:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84c2ce8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c2cec:	89 04 24             	mov    %eax,(%esp)
 84c2cef:	e8 02 e8 02 00       	call   84f14f6 <_ZNKSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE3endEv>
 84c2cf4:	83 ec 04             	sub    $0x4,%esp
 84c2cf7:	e9 e0 00 00 00       	jmp    84c2ddc <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x25a>
 84c2cfc:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84c2cff:	89 04 24             	mov    %eax,(%esp)
 84c2d02:	e8 5d e8 02 00       	call   84f1564 <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEdeEv>
 84c2d07:	8b 10                	mov    (%eax),%edx
 84c2d09:	89 55 8c             	mov    %edx,-0x74(%ebp)
 84c2d0c:	8b 50 04             	mov    0x4(%eax),%edx
 84c2d0f:	89 55 90             	mov    %edx,-0x70(%ebp)
 84c2d12:	8b 50 08             	mov    0x8(%eax),%edx
 84c2d15:	89 55 94             	mov    %edx,-0x6c(%ebp)
 84c2d18:	8b 50 0c             	mov    0xc(%eax),%edx
 84c2d1b:	89 55 98             	mov    %edx,-0x68(%ebp)
 84c2d1e:	8b 40 10             	mov    0x10(%eax),%eax
 84c2d21:	89 45 9c             	mov    %eax,-0x64(%ebp)
 84c2d24:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84c2d27:	89 04 24             	mov    %eax,(%esp)
 84c2d2a:	e8 3f e8 02 00       	call   84f156e <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84c2d2f:	8b 40 10             	mov    0x10(%eax),%eax
 84c2d32:	83 f8 02             	cmp    $0x2,%eax
 84c2d35:	0f 94 c0             	sete   %al
 84c2d38:	84 c0                	test   %al,%al
 84c2d3a:	0f 85 8d 00 00 00    	jne    84c2dcd <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x24b>
 84c2d40:	e8 62 76 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c2d45:	89 04 24             	mov    %eax,(%esp)
 84c2d48:	e8 d1 16 d7 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 84c2d4d:	84 c0                	test   %al,%al
 84c2d4f:	74 17                	je     84c2d68 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x1e6>
 84c2d51:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2d54:	89 04 24             	mov    %eax,(%esp)
 84c2d57:	e8 ee c0 cd ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 84c2d5c:	83 f8 09             	cmp    $0x9,%eax
 84c2d5f:	7f 07                	jg     84c2d68 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x1e6>
 84c2d61:	b8 01 00 00 00       	mov    $0x1,%eax
 84c2d66:	eb 05                	jmp    84c2d6d <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x1eb>
 84c2d68:	b8 00 00 00 00       	mov    $0x0,%eax
 84c2d6d:	84 c0                	test   %al,%al
 84c2d6f:	74 17                	je     84c2d88 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x206>
 84c2d71:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84c2d74:	89 04 24             	mov    %eax,(%esp)
 84c2d77:	e8 f2 e7 02 00       	call   84f156e <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84c2d7c:	8b 00                	mov    (%eax),%eax
 84c2d7e:	83 f8 21             	cmp    $0x21,%eax
 84c2d81:	0f 94 c0             	sete   %al
 84c2d84:	84 c0                	test   %al,%al
 84c2d86:	75 48                	jne    84c2dd0 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x24e>
 84c2d88:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84c2d8b:	89 04 24             	mov    %eax,(%esp)
 84c2d8e:	e8 db e7 02 00       	call   84f156e <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84c2d93:	8b 00                	mov    (%eax),%eax
 84c2d95:	0f b6 c0             	movzbl %al,%eax
 84c2d98:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2d9c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2d9f:	89 04 24             	mov    %eax,(%esp)
 84c2da2:	e8 79 8b c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c2da7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84c2daa:	89 04 24             	mov    %eax,(%esp)
 84c2dad:	e8 bc e7 02 00       	call   84f156e <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 84c2db2:	8b 40 08             	mov    0x8(%eax),%eax
 84c2db5:	2b 45 e0             	sub    -0x20(%ebp),%eax
 84c2db8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2dbc:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2dbf:	89 04 24             	mov    %eax,(%esp)
 84c2dc2:	e8 75 8b c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c2dc7:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84c2dcb:	eb 04                	jmp    84c2dd1 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x24f>
 84c2dcd:	90                   	nop
 84c2dce:	eb 01                	jmp    84c2dd1 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x24f>
 84c2dd0:	90                   	nop
 84c2dd1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84c2dd4:	89 04 24             	mov    %eax,(%esp)
 84c2dd7:	e8 72 e7 02 00       	call   84f154e <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEppEv>
 84c2ddc:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84c2ddf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2de3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84c2de6:	89 04 24             	mov    %eax,(%esp)
 84c2de9:	e8 34 e7 02 00       	call   84f1522 <_ZN9__gnu_cxxneIPKN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 84c2dee:	84 c0                	test   %al,%al
 84c2df0:	0f 85 06 ff ff ff    	jne    84c2cfc <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x17a>
 84c2df6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c2df9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c2dfd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84c2e00:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2e04:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2e07:	89 04 24             	mov    %eax,(%esp)
 84c2e0a:	e8 19 dd c4 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 84c2e0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2e12:	89 04 24             	mov    %eax,(%esp)
 84c2e15:	e8 60 b1 c3 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 84c2e1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2e1e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2e21:	89 04 24             	mov    %eax,(%esp)
 84c2e24:	e8 13 8b c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c2e29:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2e2c:	89 04 24             	mov    %eax,(%esp)
 84c2e2f:	e8 fe d5 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c2e34:	85 c0                	test   %eax,%eax
 84c2e36:	0f 94 c0             	sete   %al
 84c2e39:	84 c0                	test   %al,%al
 84c2e3b:	74 40                	je     84c2e7d <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x2fb>
 84c2e3d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84c2e44:	00 
 84c2e45:	c7 44 24 08 23 13 00 	movl   $0x1323,0x8(%esp)
 84c2e4c:	00 
 84c2e4d:	c7 44 24 04 40 e1 c8 	movl   $0x8c8e140,0x4(%esp)
 84c2e54:	08 
 84c2e55:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84c2e58:	89 04 24             	mov    %eax,(%esp)
 84c2e5b:	e8 b8 c8 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c2e60:	c7 44 24 04 b0 71 c8 	movl   $0x8c871b0,0x4(%esp)
 84c2e67:	08 
 84c2e68:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84c2e6b:	89 04 24             	mov    %eax,(%esp)
 84c2e6e:	e8 15 c9 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c2e73:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c2e78:	e9 5e 02 00 00       	jmp    84c30db <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x559>
 84c2e7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2e80:	89 04 24             	mov    %eax,(%esp)
 84c2e83:	e8 bc a2 1c 00       	call   868d144 <_ZN5CUser16verifyDoingQuestEv>
 84c2e88:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84c2e8f:	e9 88 00 00 00       	jmp    84c2f1c <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x39a>
 84c2e94:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2e97:	89 04 24             	mov    %eax,(%esp)
 84c2e9a:	e8 07 7a cd ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84c2e9f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84c2ea2:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 84c2ea8:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 84c2eac:	85 c0                	test   %eax,%eax
 84c2eae:	0f 94 c0             	sete   %al
 84c2eb1:	84 c0                	test   %al,%al
 84c2eb3:	74 15                	je     84c2eca <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x348>
 84c2eb5:	c7 44 24 04 ff ff 00 	movl   $0xffff,0x4(%esp)
 84c2ebc:	00 
 84c2ebd:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2ec0:	89 04 24             	mov    %eax,(%esp)
 84c2ec3:	e8 dc 6f c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c2ec8:	eb 27                	jmp    84c2ef1 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x36f>
 84c2eca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2ecd:	89 04 24             	mov    %eax,(%esp)
 84c2ed0:	e8 d1 79 cd ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84c2ed5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84c2ed8:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 84c2ede:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 84c2ee2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2ee6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2ee9:	89 04 24             	mov    %eax,(%esp)
 84c2eec:	e8 b3 6f c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c2ef1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2ef4:	89 04 24             	mov    %eax,(%esp)
 84c2ef7:	e8 aa 79 cd ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84c2efc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84c2eff:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 84c2f05:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 84c2f09:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2f0d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2f10:	89 04 24             	mov    %eax,(%esp)
 84c2f13:	e8 24 8a c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c2f18:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84c2f1c:	83 7d ec 13          	cmpl   $0x13,-0x14(%ebp)
 84c2f20:	0f 9e c0             	setle  %al
 84c2f23:	84 c0                	test   %al,%al
 84c2f25:	0f 85 69 ff ff ff    	jne    84c2e94 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x312>
 84c2f2b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84c2f32:	eb 2b                	jmp    84c2f5f <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x3dd>
 84c2f34:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2f37:	89 04 24             	mov    %eax,(%esp)
 84c2f3a:	e8 67 79 cd ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84c2f3f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84c2f42:	81 c2 7c 1d 00 00    	add    $0x1d7c,%edx
 84c2f48:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 84c2f4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2f50:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2f53:	89 04 24             	mov    %eax,(%esp)
 84c2f56:	e8 e1 89 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c2f5b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84c2f5f:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 84c2f63:	0f 9e c0             	setle  %al
 84c2f66:	84 c0                	test   %al,%al
 84c2f68:	75 ca                	jne    84c2f34 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x3b2>
 84c2f6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2f6d:	89 04 24             	mov    %eax,(%esp)
 84c2f70:	e8 ef 25 18 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 84c2f75:	0f be c0             	movsbl %al,%eax
 84c2f78:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2f7c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2f7f:	89 04 24             	mov    %eax,(%esp)
 84c2f82:	e8 99 89 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c2f87:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2f8a:	89 04 24             	mov    %eax,(%esp)
 84c2f8d:	e8 42 9b 02 00       	call   84ecad4 <_ZN5CUser19GetTutorialSkipableEv>
 84c2f92:	0f b6 c0             	movzbl %al,%eax
 84c2f95:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2f99:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2f9c:	89 04 24             	mov    %eax,(%esp)
 84c2f9f:	e8 7c 89 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c2fa4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2fa7:	89 04 24             	mov    %eax,(%esp)
 84c2faa:	e8 9d db c4 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84c2faf:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84c2fb2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84c2fb9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c2fbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2fc0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2fc3:	89 04 24             	mov    %eax,(%esp)
 84c2fc6:	e8 55 89 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c2fcb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84c2fd2:	eb 35                	jmp    84c3009 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x487>
 84c2fd4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84c2fd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2fda:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c2fde:	89 04 24             	mov    %eax,(%esp)
 84c2fe1:	e8 38 45 18 00       	call   864751e <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj>
 84c2fe6:	84 c0                	test   %al,%al
 84c2fe8:	0f 95 c0             	setne  %al
 84c2feb:	84 c0                	test   %al,%al
 84c2fed:	74 16                	je     84c3005 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x483>
 84c2fef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c2ff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2ff6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c2ff9:	89 04 24             	mov    %eax,(%esp)
 84c2ffc:	e8 1f 89 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c3001:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84c3005:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84c3009:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
 84c300d:	0f 9e c0             	setle  %al
 84c3010:	84 c0                	test   %al,%al
 84c3012:	75 c0                	jne    84c2fd4 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x452>
 84c3014:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c3017:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c301b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84c301e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3022:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c3025:	89 04 24             	mov    %eax,(%esp)
 84c3028:	e8 fb da c4 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 84c302d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3030:	89 04 24             	mov    %eax,(%esp)
 84c3033:	e8 46 55 fe ff       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84c3038:	98                   	cwtl
 84c3039:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c303d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c3040:	89 04 24             	mov    %eax,(%esp)
 84c3043:	e8 5c 6e c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c3048:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c304b:	89 04 24             	mov    %eax,(%esp)
 84c304e:	e8 d9 54 fe ff       	call   84a852c <_ZNK15CUserCharacInfo30getCurCharacFatigueGrownUpBuffEv>
 84c3053:	0f b7 c0             	movzwl %ax,%eax
 84c3056:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c305a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c305d:	89 04 24             	mov    %eax,(%esp)
 84c3060:	e8 3f 6e c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c3065:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 84c3069:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c306c:	89 04 24             	mov    %eax,(%esp)
 84c306f:	e8 0c 68 1c 00       	call   8689880 <_ZN5CUser27isTradePunishOverThirtyDaysEv>
 84c3074:	84 c0                	test   %al,%al
 84c3076:	74 04                	je     84c307c <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x4fa>
 84c3078:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 84c307c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84c3080:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c3084:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c3087:	89 04 24             	mov    %eax,(%esp)
 84c308a:	e8 91 88 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c308f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c3096:	00 
 84c3097:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c309a:	89 04 24             	mov    %eax,(%esp)
 84c309d:	e8 b6 88 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c30a2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c30a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c30a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c30ac:	89 04 24             	mov    %eax,(%esp)
 84c30af:	e8 06 55 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c30b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c30b7:	89 04 24             	mov    %eax,(%esp)
 84c30ba:	e8 25 cf cb ff       	call   817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>
 84c30bf:	bb 01 00 00 00       	mov    $0x1,%ebx
 84c30c4:	eb 15                	jmp    84c30db <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x559>
 84c30c6:	89 d3                	mov    %edx,%ebx
 84c30c8:	89 c6                	mov    %eax,%esi
 84c30ca:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84c30cd:	89 04 24             	mov    %eax,(%esp)
 84c30d0:	e8 35 54 e6 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 84c30d5:	89 f0                	mov    %esi,%eax
 84c30d7:	89 da                	mov    %ebx,%edx
 84c30d9:	eb 0d                	jmp    84c30e8 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x566>
 84c30db:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84c30de:	89 04 24             	mov    %eax,(%esp)
 84c30e1:	e8 24 54 e6 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 84c30e6:	eb 1b                	jmp    84c3103 <_ZN13Inter_LoadEtc10SendResultEP5CUser+0x581>
 84c30e8:	89 d3                	mov    %edx,%ebx
 84c30ea:	89 c6                	mov    %eax,%esi
 84c30ec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c30ef:	89 04 24             	mov    %eax,(%esp)
 84c30f2:	e8 89 ad 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c30f7:	89 f0                	mov    %esi,%eax
 84c30f9:	89 da                	mov    %ebx,%edx
 84c30fb:	89 04 24             	mov    %eax,(%esp)
 84c30fe:	e8 4d 06 62 00       	call   8ae3750 <_Unwind_Resume>
 84c3103:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c3106:	89 04 24             	mov    %eax,(%esp)
 84c3109:	e8 72 ad 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c310e:	89 d8                	mov    %ebx,%eax
 84c3110:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84c3113:	83 c4 00             	add    $0x0,%esp
 84c3116:	5b                   	pop    %ebx
 84c3117:	5e                   	pop    %esi
 84c3118:	5d                   	pop    %ebp
 84c3119:	c3                   	ret

```

```c
// Inter_LoadEtc::SendResult @ 0x84c2b82

/* Inter_LoadEtc::SendResult(CUser*) */

undefined4 __thiscall Inter_LoadEtc::SendResult(Inter_LoadEtc *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  GameWorld *this_00;
  int *piVar6;
  uint *puVar7;
  undefined4 uVar8;
  int local_64;
  __normal_iterator local_60 [4];
  __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
  local_5c [4];
  int local_58;
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_54 [12];
  PacketGuard local_48 [12];
  cMyTrace local_3c [16];
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte local_19;
  int local_18;
  int local_14;
  uint local_10;
  
  PacketGuard::PacketGuard(local_48);
                    /* try { // try from 084c2bab to 084c2c92 has its CatchHandler @ 084c30e8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
  iVar4 = CUser::getRegTime(param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar4);
  iVar4 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar4);
  uVar5 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
  uVar5 = CUser::getCurCharacTotalFatigue(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
  uVar5 = CUser::getCurCharacTotalMaxFatigue(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
  uVar5 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
  local_2c = CUser::GetPremiumInfo(param_1);
  WongWork::CUserPremium::GetPremiumInfoList((int)local_54);
  local_58 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_48);
  local_28 = 0;
                    /* try { // try from 084c2cb9 to 084c30be has its CatchHandler @ 084c30c6 */
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::begin();
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::end();
  while (bVar1 = __gnu_cxx::operator!=(local_5c,local_60), bVar1) {
    __gnu_cxx::
    __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
    ::operator*(local_5c);
    iVar4 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_5c);
    if (*(int *)(iVar4 + 0x10) != 2) {
      this_00 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
      if ((cVar2 == '\0') ||
         (iVar4 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), 9 < iVar4)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((!bVar1) ||
         (piVar6 = (int *)__gnu_cxx::
                          __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                          ::operator->(local_5c), *piVar6 != 0x21)) {
        puVar7 = (uint *)__gnu_cxx::
                         __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                         ::operator->(local_5c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,*puVar7 & 0xff);
        iVar4 = __gnu_cxx::
                __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                ::operator->(local_5c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,*(int *)(iVar4 + 8) - local_24);
        local_28 = local_28 + 1;
      }
    }
    __gnu_cxx::
    __normal_iterator<WongWork::SUserPremiumInfo_const*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
    ::operator++(local_5c);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,&local_58,local_28);
  iVar4 = CUser::GetCera(param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar4);
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar4 == 0) {
    cMyTrace::cMyTrace(local_3c,"bool Inter_LoadEtc::SendResult(CUser*)",0x1323,5);
    cMyTrace::operator()(local_3c,"bool Inter_LoadEtc::SendResult()");
    uVar8 = 0;
  }
  else {
    CUser::verifyDoingQuest(param_1);
    for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
      iVar4 = CUser::getCurCharacQuestR(param_1);
      if (*(int *)(iVar4 + 8 + (local_18 + 0x1d4c) * 4) == 0) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,0xffff);
      }
      else {
        iVar4 = CUser::getCurCharacQuestR(param_1);
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_48,*(int *)(iVar4 + 8 + (local_18 + 0x1d4c) * 4));
      }
      iVar4 = CUser::getCurCharacQuestR(param_1);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_48,*(int *)(iVar4 + 8 + (local_18 + 0x1d60) * 4));
    }
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      iVar4 = CUser::getCurCharacQuestR(param_1);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_48,*(int *)(iVar4 + 4 + (local_14 + 0x1d7c) * 4));
    }
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(int)cVar2);
    uVar5 = CUser::GetTutorialSkipable(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,uVar5 & 0xff);
    local_64 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_48);
    local_20 = 0;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
    for (local_10 = 0; (int)local_10 < 0x80; local_10 = local_10 + 1) {
      cVar2 = CUserCharacInfo::getCurCharacEscaladeTutorialFlag((CUserCharacInfo *)param_1,local_10)
      ;
      if (cVar2 != '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,local_10);
        local_20 = local_20 + 1;
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,&local_64,local_20);
    sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,(int)sVar3);
    uVar5 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar5 & 0xffff);
    local_19 = 0;
    cVar2 = CUser::isTradePunishOverThirtyDays(param_1);
    if (cVar2 != '\0') {
      local_19 = 1;
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)local_19);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send(param_1,local_48);
    AvatarCoin::SendSyncPacket(param_1);
    uVar8 = 1;
  }
                    /* try { // try from 084c30e1 to 084c30e5 has its CatchHandler @ 084c30e8 */
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
            (local_54);
  PacketGuard::~PacketGuard(local_48);
  return uVar8;
}

```

---

## SetFatigue

```asm
// === 084c311a Inter_LoadEtc::SetFatigue  [0x084c311a-0x84c3397] ===
 84c311a:	55                   	push   %ebp
 84c311b:	89 e5                	mov    %esp,%ebp
 84c311d:	57                   	push   %edi
 84c311e:	56                   	push   %esi
 84c311f:	53                   	push   %ebx
 84c3120:	83 ec 6c             	sub    $0x6c,%esp
 84c3123:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3126:	89 04 24             	mov    %eax,(%esp)
 84c3129:	e8 04 d3 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c312e:	85 c0                	test   %eax,%eax
 84c3130:	0f 94 c0             	sete   %al
 84c3133:	84 c0                	test   %al,%al
 84c3135:	74 0a                	je     84c3141 <_ZN13Inter_LoadEtc10SetFatigueEP5CUser+0x27>
 84c3137:	b8 00 00 00 00       	mov    $0x0,%eax
 84c313c:	e9 4f 02 00 00       	jmp    84c3390 <_ZN13Inter_LoadEtc10SetFatigueEP5CUser+0x276>
 84c3141:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c3148:	e8 51 8b c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c314d:	89 c3                	mov    %eax,%ebx
 84c314f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3152:	89 04 24             	mov    %eax,(%esp)
 84c3155:	e8 d8 d2 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c315a:	8b 70 7b             	mov    0x7b(%eax),%esi
 84c315d:	e8 1f 90 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c3162:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84c3168:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c316c:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c3170:	89 04 24             	mov    %eax,(%esp)
 84c3173:	e8 30 8f fa ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84c3178:	84 c0                	test   %al,%al
 84c317a:	0f 84 0b 02 00 00    	je     84c338b <_ZN13Inter_LoadEtc10SetFatigueEP5CUser+0x271>
 84c3180:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84c3187:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c318a:	89 04 24             	mov    %eax,(%esp)
 84c318d:	e8 a0 d2 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c3192:	8b 40 7b             	mov    0x7b(%eax),%eax
 84c3195:	85 c0                	test   %eax,%eax
 84c3197:	0f 95 c0             	setne  %al
 84c319a:	84 c0                	test   %al,%al
 84c319c:	74 3a                	je     84c31d8 <_ZN13Inter_LoadEtc10SetFatigueEP5CUser+0xbe>
 84c319e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c31a5:	e8 f4 8a c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c31aa:	89 c3                	mov    %eax,%ebx
 84c31ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c31af:	89 04 24             	mov    %eax,(%esp)
 84c31b2:	e8 7b d2 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c31b7:	8b 70 7b             	mov    0x7b(%eax),%esi
 84c31ba:	e8 c2 8f c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c31bf:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84c31c5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c31c9:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c31cd:	89 04 24             	mov    %eax,(%esp)
 84c31d0:	e8 6f 8f fa ff       	call   846c144 <_Z23ComputeDaysScheduleTimeill>
 84c31d5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84c31d8:	a1 58 be 40 09       	mov    0x940be58,%eax
 84c31dd:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84c31e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c31e4:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c31e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c31eb:	89 04 24             	mov    %eax,(%esp)
 84c31ee:	e8 a1 4e fe ff       	call   84a8094 <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri>
 84c31f3:	66 89 45 e2          	mov    %ax,-0x1e(%ebp)
 84c31f7:	66 83 7d e2 00       	cmpw   $0x0,-0x1e(%ebp)
 84c31fc:	0f 8e a9 00 00 00    	jle    84c32ab <_ZN13Inter_LoadEtc10SetFatigueEP5CUser+0x191>
 84c3202:	0f bf 55 e2          	movswl -0x1e(%ebp),%edx
 84c3206:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3209:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c320d:	89 04 24             	mov    %eax,(%esp)
 84c3210:	e8 cf 34 19 00       	call   86566e4 <_ZN15CUserCharacInfo25IncFatigueBatteryChargingEs>
 84c3215:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3218:	89 04 24             	mov    %eax,(%esp)
 84c321b:	e8 5e 53 fe ff       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84c3220:	98                   	cwtl
 84c3221:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84c3224:	0f bf 45 e2          	movswl -0x1e(%ebp),%eax
 84c3228:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84c322b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c3232:	e8 67 8a c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c3237:	89 c6                	mov    %eax,%esi
 84c3239:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c323c:	89 04 24             	mov    %eax,(%esp)
 84c323f:	e8 ee d1 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c3244:	8b 78 7b             	mov    0x7b(%eax),%edi
 84c3247:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c324a:	89 04 24             	mov    %eax,(%esp)
 84c324d:	e8 fc 89 c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c3252:	89 c3                	mov    %eax,%ebx
 84c3254:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c325b:	00 
 84c325c:	c7 44 24 08 9a 13 00 	movl   $0x139a,0x8(%esp)
 84c3263:	00 
 84c3264:	c7 44 24 04 00 e1 c8 	movl   $0x8c8e100,0x4(%esp)
 84c326b:	08 
 84c326c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c326f:	89 04 24             	mov    %eax,(%esp)
 84c3272:	e8 a1 c4 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c3277:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84c327a:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84c327e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84c3281:	89 44 24 18          	mov    %eax,0x18(%esp)
 84c3285:	89 74 24 14          	mov    %esi,0x14(%esp)
 84c3289:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c328d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c3290:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c3294:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c3298:	c7 44 24 04 d4 71 c8 	movl   $0x8c871d4,0x4(%esp)
 84c329f:	08 
 84c32a0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84c32a3:	89 04 24             	mov    %eax,(%esp)
 84c32a6:	e8 dd c4 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c32ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c32ae:	89 04 24             	mov    %eax,(%esp)
 84c32b1:	e8 c8 52 fe ff       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84c32b6:	66 85 c0             	test   %ax,%ax
 84c32b9:	0f 9f c0             	setg   %al
 84c32bc:	84 c0                	test   %al,%al
 84c32be:	0f 84 93 00 00 00    	je     84c3357 <_ZN13Inter_LoadEtc10SetFatigueEP5CUser+0x23d>
 84c32c4:	a1 58 be 40 09       	mov    0x940be58,%eax
 84c32c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c32cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c32d0:	89 04 24             	mov    %eax,(%esp)
 84c32d3:	e8 02 51 fe ff       	call   84a83da <_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser>
 84c32d8:	98                   	cwtl
 84c32d9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c32dc:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84c32e0:	74 75                	je     84c3357 <_ZN13Inter_LoadEtc10SetFatigueEP5CUser+0x23d>
 84c32e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c32e5:	0f bf d0             	movswl %ax,%edx
 84c32e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c32eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c32ef:	89 04 24             	mov    %eax,(%esp)
 84c32f2:	e8 8d 34 19 00       	call   8656784 <_ZN15CUserCharacInfo25DecFatigueBatteryChargingEs>
 84c32f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c32fa:	89 04 24             	mov    %eax,(%esp)
 84c32fd:	e8 7c 52 fe ff       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84c3302:	0f bf f0             	movswl %ax,%esi
 84c3305:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3308:	89 04 24             	mov    %eax,(%esp)
 84c330b:	e8 3e 89 c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c3310:	89 c3                	mov    %eax,%ebx
 84c3312:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c3319:	00 
 84c331a:	c7 44 24 08 a4 13 00 	movl   $0x13a4,0x8(%esp)
 84c3321:	00 
 84c3322:	c7 44 24 04 00 e1 c8 	movl   $0x8c8e100,0x4(%esp)
 84c3329:	08 
 84c332a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c332d:	89 04 24             	mov    %eax,(%esp)
 84c3330:	e8 e3 c3 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c3335:	89 74 24 10          	mov    %esi,0x10(%esp)
 84c3339:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c333c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c3340:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c3344:	c7 44 24 04 3c 72 c8 	movl   $0x8c8723c,0x4(%esp)
 84c334b:	08 
 84c334c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84c334f:	89 04 24             	mov    %eax,(%esp)
 84c3352:	e8 31 c4 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c3357:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c335e:	00 
 84c335f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3362:	89 04 24             	mov    %eax,(%esp)
 84c3365:	e8 70 47 19 00       	call   8657ada <_ZN5CUser14RecoverFatigueEi>
 84c336a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c336d:	89 04 24             	mov    %eax,(%esp)
 84c3370:	e8 1b 8c 02 00       	call   84ebf90 <_ZN15CUserCharacInfo32resetCurCharacMemberBonusFatigueEv>
 84c3375:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3378:	89 04 24             	mov    %eax,(%esp)
 84c337b:	e8 f0 41 19 00       	call   8657570 <_ZN5CUser15ResetDailyQuestEv>
 84c3380:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c3383:	89 04 24             	mov    %eax,(%esp)
 84c3386:	e8 d7 42 19 00       	call   8657662 <_ZN5CUser18ResetTrainingQuestEv>
 84c338b:	b8 01 00 00 00       	mov    $0x1,%eax
 84c3390:	83 c4 6c             	add    $0x6c,%esp
 84c3393:	5b                   	pop    %ebx
 84c3394:	5e                   	pop    %esi
 84c3395:	5f                   	pop    %edi
 84c3396:	5d                   	pop    %ebp
 84c3397:	c3                   	ret

```

```c
// Inter_LoadEtc::SetFatigue @ 0x84c311a

/* Inter_LoadEtc::SetFatigue(CUser*) */

undefined4 __thiscall Inter_LoadEtc::SetFatigue(Inter_LoadEtc *this,CUser *param_1)

{
  long lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  short local_22;
  int local_20;
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    lVar1 = *(long *)(iVar4 + 0x7b);
    iVar4 = G_CEnvironment();
    cVar2 = CheckDailyScheduleTime(*(int *)(iVar4 + 0x37c),lVar1,lVar6);
    if (cVar2 != '\0') {
      local_28 = 0;
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (*(int *)(iVar4 + 0x7b) != 0) {
        lVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        lVar1 = *(long *)(iVar4 + 0x7b);
        iVar4 = G_CEnvironment();
        local_28 = ComputeDaysScheduleTime(*(int *)(iVar4 + 0x37c),lVar1,lVar6);
      }
      local_22 = CFatigueBatteryHandle::ChargingFatigueBattery
                           (GlobalData::s_fatigueBatteryHandle_,param_1,local_28);
      if (0 < local_22) {
        CUserCharacInfo::IncFatigueBatteryCharging((CUserCharacInfo *)param_1,local_22);
        sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
        iVar4 = (int)local_22;
        uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar8 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
        uVar5 = *(undefined4 *)(iVar8 + 0x7b);
        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_48,"bool Inter_LoadEtc::SetFatigue(CUser*)",0x139a,0);
        cMyTrace::operator()
                  (local_48,
                   "FATIGUE BATTERY : charno(%d) days(%d), lastplaytick(%d), curTick(%d), charging(%d), cur charging(%d)"
                   ,uVar9,local_28,uVar5,uVar7,iVar4,(int)sVar3);
      }
      sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
      if (0 < sVar3) {
        sVar3 = CFatigueBatteryHandle::ActiveFatigueBattery
                          (GlobalData::s_fatigueBatteryHandle_,param_1);
        local_20 = (int)sVar3;
        if (local_20 != 0) {
          CUserCharacInfo::DecFatigueBatteryCharging((CUserCharacInfo *)param_1,sVar3);
          sVar3 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
          uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_38,"bool Inter_LoadEtc::SetFatigue(CUser*)",0x13a4,0);
          cMyTrace::operator()
                    (local_38,
                     "FATIGUE BATTERY ACTIVE: charno(%d) , descFatigueAmount(%d), cur charging(%d)",
                     uVar5,local_20,(int)sVar3);
        }
      }
      CUser::RecoverFatigue(param_1,0);
      CUserCharacInfo::resetCurCharacMemberBonusFatigue((CUserCharacInfo *)param_1);
      CUser::ResetDailyQuest(param_1);
      CUser::ResetTrainingQuest(param_1);
    }
    uVar5 = 1;
  }
  return uVar5;
}

```

---

## SetPvpRecord

```asm
// === 084c2964 Inter_LoadEtc::SetPvpRecord  [0x084c2964-0x84c2a97] ===
 84c2964:	55                   	push   %ebp
 84c2965:	89 e5                	mov    %esp,%ebp
 84c2967:	56                   	push   %esi
 84c2968:	53                   	push   %ebx
 84c2969:	83 ec 20             	sub    $0x20,%esp
 84c296c:	8b 45 10             	mov    0x10(%ebp),%eax
 84c296f:	05 40 03 00 00       	add    $0x340,%eax
 84c2974:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2978:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c297b:	89 04 24             	mov    %eax,(%esp)
 84c297e:	e8 67 b5 18 00       	call   864deea <_ZN5CUser12SetPvpRecordER13PvpResultType>
 84c2983:	83 f0 01             	xor    $0x1,%eax
 84c2986:	84 c0                	test   %al,%al
 84c2988:	74 15                	je     84c299f <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC+0x3b>
 84c298a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c298d:	89 04 24             	mov    %eax,(%esp)
 84c2990:	e8 9b 95 02 00       	call   84ebf30 <_ZN15CUserCharacInfo14disableSavePvPEv>
 84c2995:	b8 00 00 00 00       	mov    $0x0,%eax
 84c299a:	e9 f1 00 00 00       	jmp    84c2a90 <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC+0x12c>
 84c299f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c29a2:	89 04 24             	mov    %eax,(%esp)
 84c29a5:	e8 86 95 02 00       	call   84ebf30 <_ZN15CUserCharacInfo14disableSavePvPEv>
 84c29aa:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 84c29af:	89 04 24             	mov    %eax,(%esp)
 84c29b2:	e8 95 ab f8 ff       	call   844d54c <_ZN11RefPvpGrade18getPvPExpLossGradeEv>
 84c29b7:	8b 15 3c f7 41 09    	mov    0x941f73c,%edx
 84c29bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c29c1:	89 14 24             	mov    %edx,(%esp)
 84c29c4:	e8 69 1e 11 00       	call   85d4832 <_ZNK11RefPvpGrade11GetPvpPointEi>
 84c29c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c29cc:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 84c29d1:	89 04 24             	mov    %eax,(%esp)
 84c29d4:	e8 73 ab f8 ff       	call   844d54c <_ZN11RefPvpGrade18getPvPExpLossGradeEv>
 84c29d9:	89 c3                	mov    %eax,%ebx
 84c29db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c29de:	89 04 24             	mov    %eax,(%esp)
 84c29e1:	e8 78 c7 d6 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 84c29e6:	8b 40 14             	mov    0x14(%eax),%eax
 84c29e9:	39 c3                	cmp    %eax,%ebx
 84c29eb:	7f 1c                	jg     84c2a09 <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC+0xa5>
 84c29ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c29f0:	89 04 24             	mov    %eax,(%esp)
 84c29f3:	e8 66 c7 d6 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 84c29f8:	8b 50 08             	mov    0x8(%eax),%edx
 84c29fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c29fe:	39 c2                	cmp    %eax,%edx
 84c2a00:	7e 07                	jle    84c2a09 <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC+0xa5>
 84c2a02:	b8 01 00 00 00       	mov    $0x1,%eax
 84c2a07:	eb 05                	jmp    84c2a0e <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC+0xaa>
 84c2a09:	b8 00 00 00 00       	mov    $0x0,%eax
 84c2a0e:	84 c0                	test   %al,%al
 84c2a10:	74 79                	je     84c2a8b <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC+0x127>
 84c2a12:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c2a19:	e8 80 92 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c2a1e:	89 c3                	mov    %eax,%ebx
 84c2a20:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2a23:	89 04 24             	mov    %eax,(%esp)
 84c2a26:	e8 7f 3c de ff       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 84c2a2b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c2a2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2a33:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84c2a3a:	e8 69 96 fa ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84c2a3f:	84 c0                	test   %al,%al
 84c2a41:	74 48                	je     84c2a8b <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC+0x127>
 84c2a43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2a46:	89 04 24             	mov    %eax,(%esp)
 84c2a49:	e8 76 94 02 00       	call   84ebec4 <_ZN15CUserCharacInfo16getPVPResultRefWEv>
 84c2a4e:	89 c3                	mov    %eax,%ebx
 84c2a50:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2a53:	89 04 24             	mov    %eax,(%esp)
 84c2a56:	e8 03 c7 d6 ff       	call   822f15e <_ZNK15CUserCharacInfo16getPVPResultRefREv>
 84c2a5b:	8b 70 08             	mov    0x8(%eax),%esi
 84c2a5e:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 84c2a63:	89 04 24             	mov    %eax,(%esp)
 84c2a66:	e8 ef aa f8 ff       	call   844d55a <_ZN11RefPvpGrade16getPvPExpLossExpEv>
 84c2a6b:	89 f2                	mov    %esi,%edx
 84c2a6d:	29 c2                	sub    %eax,%edx
 84c2a6f:	89 d0                	mov    %edx,%eax
 84c2a71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c2a74:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84c2a77:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2a7b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84c2a7e:	89 04 24             	mov    %eax,(%esp)
 84c2a81:	e8 92 b7 bc ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 84c2a86:	8b 00                	mov    (%eax),%eax
 84c2a88:	89 43 08             	mov    %eax,0x8(%ebx)
 84c2a8b:	b8 01 00 00 00       	mov    $0x1,%eax
 84c2a90:	83 c4 20             	add    $0x20,%esp
 84c2a93:	5b                   	pop    %ebx
 84c2a94:	5e                   	pop    %esi
 84c2a95:	5d                   	pop    %ebp
 84c2a96:	c3                   	ret
 84c2a97:	90                   	nop

```

```c
// Inter_LoadEtc::SetPvpRecord @ 0x84c2964

/* Inter_LoadEtc::SetPvpRecord(CUser*, SIG_LOAD_ETC*) */

undefined4 __thiscall
Inter_LoadEtc::SetPvpRecord(Inter_LoadEtc *this,CUser *param_1,SIG_LOAD_ETC *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int local_14;
  int local_10;
  
  cVar2 = CUser::SetPvpRecord(param_1,(PvpResultType *)(param_2 + 0x340));
  if (cVar2 == '\x01') {
    CUserCharacInfo::disableSavePvP((CUserCharacInfo *)param_1);
    iVar3 = RefPvpGrade::getPvPExpLossGrade(GlobalData::s_ref_pvp_grade);
    local_14 = RefPvpGrade::GetPvpPoint(GlobalData::s_ref_pvp_grade,iVar3);
    iVar3 = RefPvpGrade::getPvPExpLossGrade(GlobalData::s_ref_pvp_grade);
    iVar4 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
    if ((*(int *)(iVar4 + 0x14) < iVar3) ||
       (iVar3 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1),
       *(int *)(iVar3 + 8) <= local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar6 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
      cVar2 = CheckDailyScheduleTime(4,lVar6,lVar5);
      if (cVar2 != '\0') {
        iVar4 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)param_1);
        iVar3 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)param_1);
        iVar3 = *(int *)(iVar3 + 8);
        local_10 = RefPvpGrade::getPvPExpLossExp(GlobalData::s_ref_pvp_grade);
        local_10 = iVar3 - local_10;
        piVar7 = std::max<int>(&local_14,&local_10);
        *(int *)(iVar4 + 8) = *piVar7;
      }
    }
    return 1;
  }
  CUserCharacInfo::disableSavePvP((CUserCharacInfo *)param_1);
  return 0;
}

```

---

## SetRankRecord

```asm
// === 084c2a98 Inter_LoadEtc::SetRankRecord  [0x084c2a98-0x84c2b07] ===
 84c2a98:	55                   	push   %ebp
 84c2a99:	89 e5                	mov    %esp,%ebp
 84c2a9b:	83 ec 28             	sub    $0x28,%esp
 84c2a9e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84c2aa5:	eb 46                	jmp    84c2aed <_ZN13Inter_LoadEtc13SetRankRecordEP5CUserP12SIG_LOAD_ETC+0x55>
 84c2aa7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84c2aaa:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84c2aad:	89 d0                	mov    %edx,%eax
 84c2aaf:	c1 e0 02             	shl    $0x2,%eax
 84c2ab2:	01 d0                	add    %edx,%eax
 84c2ab4:	c1 e0 04             	shl    $0x4,%eax
 84c2ab7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84c2aba:	05 c8 03 00 00       	add    $0x3c8,%eax
 84c2abf:	c6 00 01             	movb   $0x1,(%eax)
 84c2ac2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84c2ac5:	89 d0                	mov    %edx,%eax
 84c2ac7:	c1 e0 02             	shl    $0x2,%eax
 84c2aca:	01 d0                	add    %edx,%eax
 84c2acc:	c1 e0 04             	shl    $0x4,%eax
 84c2acf:	05 c0 03 00 00       	add    $0x3c0,%eax
 84c2ad4:	03 45 10             	add    0x10(%ebp),%eax
 84c2ad7:	83 c0 08             	add    $0x8,%eax
 84c2ada:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2ade:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2ae1:	89 04 24             	mov    %eax,(%esp)
 84c2ae4:	e8 8d 3d 1b 00       	call   8676876 <_ZN5CUser13update_recordER14GameResultType>
 84c2ae9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84c2aed:	8b 45 10             	mov    0x10(%ebp),%eax
 84c2af0:	8b 80 c4 03 00 00    	mov    0x3c4(%eax),%eax
 84c2af6:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84c2af9:	0f 9f c0             	setg   %al
 84c2afc:	84 c0                	test   %al,%al
 84c2afe:	75 a7                	jne    84c2aa7 <_ZN13Inter_LoadEtc13SetRankRecordEP5CUserP12SIG_LOAD_ETC+0xf>
 84c2b00:	b8 01 00 00 00       	mov    $0x1,%eax
 84c2b05:	c9                   	leave
 84c2b06:	c3                   	ret
 84c2b07:	90                   	nop

```

```c
// Inter_LoadEtc::SetRankRecord @ 0x84c2a98

/* Inter_LoadEtc::SetRankRecord(CUser*, SIG_LOAD_ETC*) */

undefined4 __thiscall
Inter_LoadEtc::SetRankRecord(Inter_LoadEtc *this,CUser *param_1,SIG_LOAD_ETC *param_2)

{
  int local_10;
  
  for (local_10 = 0; local_10 < *(int *)(param_2 + 0x3c4); local_10 = local_10 + 1) {
    param_2[local_10 * 0x50 + 0x3c8] = (SIG_LOAD_ETC)0x1;
    CUser::update_record(param_1,(GameResultType *)(param_2 + local_10 * 0x50 + 0x3c8));
  }
  return 1;
}

```

---

## _checkUserDisadvantage

```asm
// === 084c2760 Inter_LoadEtc::_checkUserDisadvantage  [0x084c2760-0x84c2963] ===
 84c2760:	55                   	push   %ebp
 84c2761:	89 e5                	mov    %esp,%ebp
 84c2763:	53                   	push   %ebx
 84c2764:	83 ec 44             	sub    $0x44,%esp
 84c2767:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c276a:	89 04 24             	mov    %eax,(%esp)
 84c276d:	e8 7c c6 c5 ff       	call   811edee <_ZNK5CUser16IsGameMasterModeEv>
 84c2772:	84 c0                	test   %al,%al
 84c2774:	0f 85 da 01 00 00    	jne    84c2954 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1f4>
 84c277a:	e8 67 fe c9 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 84c277f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c2786:	00 
 84c2787:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84c278e:	00 
 84c278f:	89 04 24             	mov    %eax,(%esp)
 84c2792:	e8 c7 bf ca ff       	call   816e75e <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi>
 84c2797:	83 f0 01             	xor    $0x1,%eax
 84c279a:	84 c0                	test   %al,%al
 84c279c:	0f 85 b5 01 00 00    	jne    84c2957 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1f7>
 84c27a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c27a5:	89 04 24             	mov    %eax,(%esp)
 84c27a8:	e8 85 dc c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c27ad:	85 c0                	test   %eax,%eax
 84c27af:	0f 94 c0             	sete   %al
 84c27b2:	84 c0                	test   %al,%al
 84c27b4:	0f 85 a0 01 00 00    	jne    84c295a <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1fa>
 84c27ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c27bd:	89 04 24             	mov    %eax,(%esp)
 84c27c0:	e8 f3 7a c1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84c27c5:	83 f8 13             	cmp    $0x13,%eax
 84c27c8:	7e 0f                	jle    84c27d9 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x79>
 84c27ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c27cd:	89 04 24             	mov    %eax,(%esp)
 84c27d0:	e8 53 a3 02 00       	call   84ecb28 <_ZN5CUser14getStdDropRateEv>
 84c27d5:	85 c0                	test   %eax,%eax
 84c27d7:	75 07                	jne    84c27e0 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x80>
 84c27d9:	b8 01 00 00 00       	mov    $0x1,%eax
 84c27de:	eb 05                	jmp    84c27e5 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x85>
 84c27e0:	b8 00 00 00 00       	mov    $0x0,%eax
 84c27e5:	84 c0                	test   %al,%al
 84c27e7:	0f 85 70 01 00 00    	jne    84c295d <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1fd>
 84c27ed:	c6 45 f2 00          	movb   $0x0,-0xe(%ebp)
 84c27f1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84c27f8:	eb 2b                	jmp    84c2825 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0xc5>
 84c27fa:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84c27fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2800:	89 04 24             	mov    %eax,(%esp)
 84c2803:	e8 9e 80 cd ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84c2808:	83 c0 04             	add    $0x4,%eax
 84c280b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c280f:	89 04 24             	mov    %eax,(%esp)
 84c2812:	e8 c9 92 bc ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 84c2817:	84 c0                	test   %al,%al
 84c2819:	74 06                	je     84c2821 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0xc1>
 84c281b:	c6 45 f2 01          	movb   $0x1,-0xe(%ebp)
 84c281f:	eb 12                	jmp    84c2833 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0xd3>
 84c2821:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84c2825:	81 7d f4 2f 75 00 00 	cmpl   $0x752f,-0xc(%ebp)
 84c282c:	0f 9e c0             	setle  %al
 84c282f:	84 c0                	test   %al,%al
 84c2831:	75 c7                	jne    84c27fa <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x9a>
 84c2833:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 84c2837:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84c283e:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 84c2842:	83 f0 01             	xor    $0x1,%eax
 84c2845:	84 c0                	test   %al,%al
 84c2847:	74 09                	je     84c2852 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0xf2>
 84c2849:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c284c:	83 c0 28             	add    $0x28,%eax
 84c284f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c2852:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84c2856:	83 f0 01             	xor    $0x1,%eax
 84c2859:	84 c0                	test   %al,%al
 84c285b:	74 09                	je     84c2866 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x106>
 84c285d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c2860:	83 c0 1e             	add    $0x1e,%eax
 84c2863:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c2866:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 84c286a:	83 f0 01             	xor    $0x1,%eax
 84c286d:	84 c0                	test   %al,%al
 84c286f:	75 0b                	jne    84c287c <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x11c>
 84c2871:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84c2875:	83 f0 01             	xor    $0x1,%eax
 84c2878:	84 c0                	test   %al,%al
 84c287a:	74 25                	je     84c28a1 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x141>
 84c287c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c287f:	89 04 24             	mov    %eax,(%esp)
 84c2882:	e8 fd f1 c8 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 84c2887:	89 04 24             	mov    %eax,(%esp)
 84c288a:	e8 61 71 02 00       	call   84e99f0 <_ZNK6CCargo12GetItemCountEv>
 84c288f:	85 c0                	test   %eax,%eax
 84c2891:	0f 94 c0             	sete   %al
 84c2894:	84 c0                	test   %al,%al
 84c2896:	74 09                	je     84c28a1 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x141>
 84c2898:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c289b:	83 c0 0a             	add    $0xa,%eax
 84c289e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c28a1:	c7 45 e8 64 00 00 00 	movl   $0x64,-0x18(%ebp)
 84c28a8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c28ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c28af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c28b2:	89 04 24             	mov    %eax,(%esp)
 84c28b5:	e8 54 d0 c1 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 84c28ba:	8b 00                	mov    (%eax),%eax
 84c28bc:	ba 64 00 00 00       	mov    $0x64,%edx
 84c28c1:	89 d1                	mov    %edx,%ecx
 84c28c3:	29 c1                	sub    %eax,%ecx
 84c28c5:	89 c8                	mov    %ecx,%eax
 84c28c7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c28ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c28cd:	89 04 24             	mov    %eax,(%esp)
 84c28d0:	e8 53 a2 02 00       	call   84ecb28 <_ZN5CUser14getStdDropRateEv>
 84c28d5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84c28d8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84c28db:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c28df:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c28e2:	89 04 24             	mov    %eax,(%esp)
 84c28e5:	e8 24 d0 c1 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 84c28ea:	8b 00                	mov    (%eax),%eax
 84c28ec:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c28ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c28f2:	89 04 24             	mov    %eax,(%esp)
 84c28f5:	e8 2e a2 02 00       	call   84ecb28 <_ZN5CUser14getStdDropRateEv>
 84c28fa:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c28fd:	39 d0                	cmp    %edx,%eax
 84c28ff:	0f 95 c0             	setne  %al
 84c2902:	84 c0                	test   %al,%al
 84c2904:	74 58                	je     84c295e <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1fe>
 84c2906:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84c2909:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c290c:	89 04 24             	mov    %eax,(%esp)
 84c290f:	e8 5a 7a c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c2914:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c291b:	00 
 84c291c:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 84c2923:	00 
 84c2924:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84c2928:	c7 44 24 08 65 00 00 	movl   $0x65,0x8(%esp)
 84c292f:	00 
 84c2930:	c7 44 24 04 41 9c 00 	movl   $0x9c41,0x4(%esp)
 84c2937:	00 
 84c2938:	89 04 24             	mov    %eax,(%esp)
 84c293b:	e8 da 56 f6 ff       	call   842801a <_ZN19DB_SaveUserHandicap11makeRequestEjiiiii>
 84c2940:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c2943:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2947:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c294a:	89 04 24             	mov    %eax,(%esp)
 84c294d:	e8 0a 48 dc ff       	call   828715c <_ZN5CUser14setStdDropRateEi>
 84c2952:	eb 0a                	jmp    84c295e <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1fe>
 84c2954:	90                   	nop
 84c2955:	eb 07                	jmp    84c295e <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1fe>
 84c2957:	90                   	nop
 84c2958:	eb 04                	jmp    84c295e <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1fe>
 84c295a:	90                   	nop
 84c295b:	eb 01                	jmp    84c295e <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser+0x1fe>
 84c295d:	90                   	nop
 84c295e:	83 c4 44             	add    $0x44,%esp
 84c2961:	5b                   	pop    %ebx
 84c2962:	5d                   	pop    %ebp
 84c2963:	c3                   	ret

```

```c
// Inter_LoadEtc::_checkUserDisadvantage @ 0x84c2760

/* WARNING: Removing unreachable block (ram,0x084c285d) */
/* Inter_LoadEtc::_checkUserDisadvantage(CUser*) */

void __thiscall Inter_LoadEtc::_checkUserDisadvantage(Inter_LoadEtc *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  ServiceRestrictManager *pSVar3;
  int iVar4;
  CCargo *this_00;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int local_20 [3];
  char local_12;
  undefined1 local_11;
  uint local_10;
  
  cVar2 = CUser::IsGameMasterMode(param_1);
  if (cVar2 == '\0') {
    pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar3,3,1);
    if ((cVar2 == '\x01') &&
       (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if ((iVar4 < 0x14) || (iVar4 = CUser::getStdDropRate(param_1), iVar4 == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_12 = '\0';
        for (local_10 = 0; uVar7 = local_10, (int)local_10 < 30000; local_10 = local_10 + 1) {
          iVar4 = CUser::getCurCharacQuestR(param_1);
          cVar2 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar4 + 4),uVar7);
          if (cVar2 != '\0') {
            local_12 = '\x01';
            break;
          }
        }
        local_11 = 1;
        local_20[0] = 0;
        if (local_12 != '\x01') {
          local_20[0] = 0x28;
          this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
          iVar4 = CCargo::GetItemCount(this_00);
          if (iVar4 == 0) {
            local_20[0] = local_20[0] + 10;
          }
        }
        local_20[1] = 100;
        piVar5 = std::min<int>(local_20 + 1,local_20);
        local_20[0] = 100 - *piVar5;
        local_20[2] = CUser::getStdDropRate(param_1);
        piVar5 = std::min<int>(local_20,local_20 + 2);
        local_20[0] = *piVar5;
        iVar6 = CUser::getStdDropRate(param_1);
        iVar4 = local_20[0];
        if (iVar6 != local_20[0]) {
          uVar7 = CUser::get_acc_id(param_1);
          DB_SaveUserHandicap::makeRequest(uVar7,0x9c41,0x65,iVar4,3,0);
          CUser::setStdDropRate(param_1,local_20[0]);
        }
      }
    }
  }
  return;
}

```

---

## _fnEnumQuestClear

```asm
// === 084c2b08 Inter_LoadEtc::_fnEnumQuestClear  [0x084c2b08-0x84c2b81] ===
 84c2b08:	55                   	push   %ebp
 84c2b09:	89 e5                	mov    %esp,%ebp
 84c2b0b:	53                   	push   %ebx
 84c2b0c:	83 ec 24             	sub    $0x24,%esp
 84c2b0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2b12:	8d 50 04             	lea    0x4(%eax),%edx
 84c2b15:	89 55 0c             	mov    %edx,0xc(%ebp)
 84c2b18:	8b 00                	mov    (%eax),%eax
 84c2b1a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84c2b1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2b20:	8d 50 04             	lea    0x4(%eax),%edx
 84c2b23:	89 55 0c             	mov    %edx,0xc(%ebp)
 84c2b26:	8b 00                	mov    (%eax),%eax
 84c2b28:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c2b2b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 84c2b2e:	e8 68 96 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c2b33:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c2b37:	89 04 24             	mov    %eax,(%esp)
 84c2b3a:	e8 87 d2 e9 ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 84c2b3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c2b42:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84c2b46:	74 2e                	je     84c2b76 <_ZN13Inter_LoadEtc17_fnEnumQuestClearEjPc+0x6e>
 84c2b48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c2b4b:	89 04 24             	mov    %eax,(%esp)
 84c2b4e:	e8 e9 66 02 00       	call   84e923c <_ZNK5Quest16check_clear_sendEv>
 84c2b53:	84 c0                	test   %al,%al
 84c2b55:	74 1f                	je     84c2b76 <_ZN13Inter_LoadEtc17_fnEnumQuestClearEjPc+0x6e>
 84c2b57:	8b 55 08             	mov    0x8(%ebp),%edx
 84c2b5a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c2b5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c2b61:	89 04 24             	mov    %eax,(%esp)
 84c2b64:	e8 3b 73 c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c2b69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c2b6c:	8b 00                	mov    (%eax),%eax
 84c2b6e:	8d 50 01             	lea    0x1(%eax),%edx
 84c2b71:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c2b74:	89 10                	mov    %edx,(%eax)
 84c2b76:	b8 01 00 00 00       	mov    $0x1,%eax
 84c2b7b:	83 c4 24             	add    $0x24,%esp
 84c2b7e:	5b                   	pop    %ebx
 84c2b7f:	5d                   	pop    %ebp
 84c2b80:	c3                   	ret
 84c2b81:	90                   	nop

```

```c
// Inter_LoadEtc::_fnEnumQuestClear @ 0x84c2b08

/* Inter_LoadEtc::_fnEnumQuestClear(unsigned int, char*) */

undefined4 Inter_LoadEtc::_fnEnumQuestClear(uint param_1,char *param_2)

{
  InterfacePacketBuf *this;
  int *piVar1;
  char cVar2;
  int iVar3;
  Quest *this_00;
  
  this = *(InterfacePacketBuf **)param_2;
  piVar1 = *(int **)(param_2 + 4);
  iVar3 = G_CDataManager();
  this_00 = (Quest *)CDataManager::find_quest(iVar3);
  if (this_00 != (Quest *)0x0) {
    cVar2 = Quest::check_clear_send(this_00);
    if (cVar2 != '\0') {
      InterfacePacketBuf::put_short(this,param_1);
      *piVar1 = *piVar1 + 1;
    }
  }
  return 1;
}

```

---

## dispatch_sig

```asm
// === 084c0264 Inter_LoadEtc::dispatch_sig  [0x084c0264-0x84c266d] ===
 84c0264:	55                   	push   %ebp
 84c0265:	89 e5                	mov    %esp,%ebp
 84c0267:	57                   	push   %edi
 84c0268:	56                   	push   %esi
 84c0269:	53                   	push   %ebx
 84c026a:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 84c0270:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0273:	89 04 24             	mov    %eax,(%esp)
 84c0276:	e8 11 a1 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c027b:	85 c0                	test   %eax,%eax
 84c027d:	0f 94 c0             	sete   %al
 84c0280:	84 c0                	test   %al,%al
 84c0282:	74 0a                	je     84c028e <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x2a>
 84c0284:	bb 7b 0a 00 00       	mov    $0xa7b,%ebx
 84c0289:	e9 d3 23 00 00       	jmp    84c2661 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23fd>
 84c028e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0291:	89 04 24             	mov    %eax,(%esp)
 84c0294:	e8 99 01 c6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c0299:	85 c0                	test   %eax,%eax
 84c029b:	0f 94 c0             	sete   %al
 84c029e:	84 c0                	test   %al,%al
 84c02a0:	74 0a                	je     84c02ac <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x48>
 84c02a2:	bb 7f 0a 00 00       	mov    $0xa7f,%ebx
 84c02a7:	e9 b5 23 00 00       	jmp    84c2661 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23fd>
 84c02ac:	8b 45 10             	mov    0x10(%ebp),%eax
 84c02af:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84c02b2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c02b5:	8b 40 08             	mov    0x8(%eax),%eax
 84c02b8:	83 f8 01             	cmp    $0x1,%eax
 84c02bb:	75 0a                	jne    84c02c7 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x63>
 84c02bd:	bb 96 0a 00 00       	mov    $0xa96,%ebx
 84c02c2:	e9 9a 23 00 00       	jmp    84c2661 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23fd>
 84c02c7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c02ca:	8b 98 54 03 00 00    	mov    0x354(%eax),%ebx
 84c02d0:	e8 c6 be c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c02d5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c02d9:	89 04 24             	mov    %eax,(%esp)
 84c02dc:	e8 ff ea cd ff       	call   819ede0 <_ZN12CDataManager21IsAvailablePvPChannelEi>
 84c02e1:	83 f0 01             	xor    $0x1,%eax
 84c02e4:	84 c0                	test   %al,%al
 84c02e6:	74 43                	je     84c032b <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xc7>
 84c02e8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c02eb:	8b 80 54 03 00 00    	mov    0x354(%eax),%eax
 84c02f1:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c02f5:	c7 44 24 10 20 71 c8 	movl   $0x8c87120,0x10(%esp)
 84c02fc:	08 
 84c02fd:	c7 44 24 0c 9b 0a 00 	movl   $0xa9b,0xc(%esp)
 84c0304:	00 
 84c0305:	c7 44 24 08 80 e1 c8 	movl   $0x8c8e180,0x8(%esp)
 84c030c:	08 
 84c030d:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c0314:	08 
 84c0315:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c031c:	e8 e9 38 61 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c0321:	bb 9c 0a 00 00       	mov    $0xa9c,%ebx
 84c0326:	e9 36 23 00 00       	jmp    84c2661 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23fd>
 84c032b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c0331:	89 04 24             	mov    %eax,(%esp)
 84c0334:	e8 13 da 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c0339:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c033c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c0340:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0343:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0347:	8b 45 08             	mov    0x8(%ebp),%eax
 84c034a:	89 04 24             	mov    %eax,(%esp)
 84c034d:	e8 12 26 00 00       	call   84c2964 <_ZN13Inter_LoadEtc12SetPvpRecordEP5CUserP12SIG_LOAD_ETC>
 84c0352:	88 45 9f             	mov    %al,-0x61(%ebp)
 84c0355:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 84c0359:	83 f0 01             	xor    $0x1,%eax
 84c035c:	84 c0                	test   %al,%al
 84c035e:	74 0a                	je     84c036a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x106>
 84c0360:	bb a2 0a 00 00       	mov    $0xaa2,%ebx
 84c0365:	e9 e9 22 00 00       	jmp    84c2653 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23ef>
 84c036a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c036d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c0371:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0374:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0378:	8b 45 08             	mov    0x8(%ebp),%eax
 84c037b:	89 04 24             	mov    %eax,(%esp)
 84c037e:	e8 15 27 00 00       	call   84c2a98 <_ZN13Inter_LoadEtc13SetRankRecordEP5CUserP12SIG_LOAD_ETC>
 84c0383:	88 45 9f             	mov    %al,-0x61(%ebp)
 84c0386:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 84c038a:	83 f0 01             	xor    $0x1,%eax
 84c038d:	84 c0                	test   %al,%al
 84c038f:	74 0a                	je     84c039b <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x137>
 84c0391:	bb a5 0a 00 00       	mov    $0xaa5,%ebx
 84c0396:	e9 b8 22 00 00       	jmp    84c2653 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23ef>
 84c039b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c039e:	89 04 24             	mov    %eax,(%esp)
 84c03a1:	e8 8c 00 c6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c03a6:	8b 70 7b             	mov    0x7b(%eax),%esi
 84c03a9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c03ac:	8b 58 04             	mov    0x4(%eax),%ebx
 84c03af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c03b6:	00 
 84c03b7:	c7 44 24 08 c5 0a 00 	movl   $0xac5,0x8(%esp)
 84c03be:	00 
 84c03bf:	c7 44 24 04 80 e1 c8 	movl   $0x8c8e180,0x4(%esp)
 84c03c6:	08 
 84c03c7:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84c03cd:	89 04 24             	mov    %eax,(%esp)
 84c03d0:	e8 43 f3 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c03d5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c03d9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c03dd:	c7 44 24 04 4c 71 c8 	movl   $0x8c8714c,0x4(%esp)
 84c03e4:	08 
 84c03e5:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 84c03eb:	89 04 24             	mov    %eax,(%esp)
 84c03ee:	e8 95 f3 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c03f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c03f6:	89 04 24             	mov    %eax,(%esp)
 84c03f9:	e8 e6 c7 1b 00       	call   867cbe4 <_ZN5CUser18ProcPremiumFatigueEv>
 84c03fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0401:	89 04 24             	mov    %eax,(%esp)
 84c0404:	e8 1f ca c6 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 84c0409:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c040c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0410:	89 04 24             	mov    %eax,(%esp)
 84c0413:	e8 ae e4 1e 00       	call   86ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>
 84c0418:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c041b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c041f:	8b 45 08             	mov    0x8(%ebp),%eax
 84c0422:	89 04 24             	mov    %eax,(%esp)
 84c0425:	e8 f0 2c 00 00       	call   84c311a <_ZN13Inter_LoadEtc10SetFatigueEP5CUser>
 84c042a:	88 45 9f             	mov    %al,-0x61(%ebp)
 84c042d:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 84c0431:	83 f0 01             	xor    $0x1,%eax
 84c0434:	84 c0                	test   %al,%al
 84c0436:	74 0a                	je     84c0442 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1de>
 84c0438:	bb cf 0a 00 00       	mov    $0xacf,%ebx
 84c043d:	e9 11 22 00 00       	jmp    84c2653 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23ef>
 84c0442:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0445:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0449:	8b 45 08             	mov    0x8(%ebp),%eax
 84c044c:	89 04 24             	mov    %eax,(%esp)
 84c044f:	e8 18 82 02 00       	call   84e866c <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser>
 84c0454:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0457:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c045b:	8b 45 08             	mov    0x8(%ebp),%eax
 84c045e:	89 04 24             	mov    %eax,(%esp)
 84c0461:	e8 1c 27 00 00       	call   84c2b82 <_ZN13Inter_LoadEtc10SendResultEP5CUser>
 84c0466:	88 45 9f             	mov    %al,-0x61(%ebp)
 84c0469:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 84c046d:	83 f0 01             	xor    $0x1,%eax
 84c0470:	84 c0                	test   %al,%al
 84c0472:	74 0a                	je     84c047e <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x21a>
 84c0474:	bb e6 0a 00 00       	mov    $0xae6,%ebx
 84c0479:	e9 d5 21 00 00       	jmp    84c2653 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23ef>
 84c047e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c0485:	00 
 84c0486:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c048d:	00 
 84c048e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0491:	89 04 24             	mov    %eax,(%esp)
 84c0494:	e8 0b d5 18 00       	call   864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>
 84c0499:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c049c:	05 0c 23 00 00       	add    $0x230c,%eax
 84c04a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c04a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c04a8:	89 04 24             	mov    %eax,(%esp)
 84c04ab:	e8 46 8b 19 00       	call   8658ff6 <_ZN5CUser20LoadCoolTimeItemInfoEP20CONTINUOUS_ITEM_INFO>
 84c04b0:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c04b3:	05 a4 24 00 00       	add    $0x24a4,%eax
 84c04b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c04bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c04bf:	89 04 24             	mov    %eax,(%esp)
 84c04c2:	e8 29 8c 19 00       	call   86590f0 <_ZN5CUser18LoadEffectItemInfoEP20CONTINUOUS_ITEM_INFO>
 84c04c7:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84c04ce:	00 
 84c04cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c04d2:	89 04 24             	mov    %eax,(%esp)
 84c04d5:	e8 aa d0 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c04da:	8b 10                	mov    (%eax),%edx
 84c04dc:	83 c2 04             	add    $0x4,%edx
 84c04df:	8b 0a                	mov    (%edx),%ecx
 84c04e1:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c04e4:	81 c2 ce 40 00 00    	add    $0x40ce,%edx
 84c04ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c04ee:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c04f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c04f5:	89 04 24             	mov    %eax,(%esp)
 84c04f8:	ff d1                	call   *%ecx
 84c04fa:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84c0501:	00 
 84c0502:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0505:	89 04 24             	mov    %eax,(%esp)
 84c0508:	e8 77 d0 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c050d:	8b 10                	mov    (%eax),%edx
 84c050f:	83 c2 04             	add    $0x4,%edx
 84c0512:	8b 0a                	mov    (%edx),%ecx
 84c0514:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c0517:	81 c2 d5 cd 00 00    	add    $0xcdd5,%edx
 84c051d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c0521:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0524:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0528:	89 04 24             	mov    %eax,(%esp)
 84c052b:	ff d1                	call   *%ecx
 84c052d:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 84c0534:	00 
 84c0535:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0538:	89 04 24             	mov    %eax,(%esp)
 84c053b:	e8 44 d0 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0540:	8b 10                	mov    (%eax),%edx
 84c0542:	83 c2 04             	add    $0x4,%edx
 84c0545:	8b 0a                	mov    (%edx),%ecx
 84c0547:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c054a:	81 c2 18 d7 00 00    	add    $0xd718,%edx
 84c0550:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c0554:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0557:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c055b:	89 04 24             	mov    %eax,(%esp)
 84c055e:	ff d1                	call   *%ecx
 84c0560:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0563:	8b 40 0c             	mov    0xc(%eax),%eax
 84c0566:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c056a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c056d:	89 04 24             	mov    %eax,(%esp)
 84c0570:	e8 9d d9 18 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84c0575:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84c0578:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c057b:	8b 40 0c             	mov    0xc(%eax),%eax
 84c057e:	85 c0                	test   %eax,%eax
 84c0580:	74 4f                	je     84c05d1 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x36d>
 84c0582:	83 7d a4 ff          	cmpl   $0xffffffff,-0x5c(%ebp)
 84c0586:	74 49                	je     84c05d1 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x36d>
 84c0588:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c058b:	89 04 24             	mov    %eax,(%esp)
 84c058e:	e8 15 b9 02 00       	call   84ebea8 <_ZNK15CUserCharacInfo13getTagCharacREv>
 84c0593:	85 c0                	test   %eax,%eax
 84c0595:	0f 95 c0             	setne  %al
 84c0598:	84 c0                	test   %al,%al
 84c059a:	74 35                	je     84c05d1 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x36d>
 84c059c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c059f:	05 a8 01 00 00       	add    $0x1a8,%eax
 84c05a4:	89 c6                	mov    %eax,%esi
 84c05a6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c05a9:	83 c0 10             	add    $0x10,%eax
 84c05ac:	89 c3                	mov    %eax,%ebx
 84c05ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c05b1:	89 04 24             	mov    %eax,(%esp)
 84c05b4:	e8 fb b8 02 00       	call   84ebeb4 <_ZN15CUserCharacInfo18getTagCharacSkillWEv>
 84c05b9:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 84c05c0:	00 
 84c05c1:	89 74 24 08          	mov    %esi,0x8(%esp)
 84c05c5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c05c9:	89 04 24             	mov    %eax,(%esp)
 84c05cc:	e8 a7 2d 14 00       	call   8603378 <_ZN9SkillSlot14set_skill_slotEPcS0_i>
 84c05d1:	83 7d a4 ff          	cmpl   $0xffffffff,-0x5c(%ebp)
 84c05d5:	75 0a                	jne    84c05e1 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x37d>
 84c05d7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c05da:	c6 80 fb d6 00 00 00 	movb   $0x0,0xd6fb(%eax)
 84c05e1:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 84c05e8:	00 
 84c05e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c05ec:	89 04 24             	mov    %eax,(%esp)
 84c05ef:	e8 90 cf c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c05f4:	8b 10                	mov    (%eax),%edx
 84c05f6:	83 c2 04             	add    $0x4,%edx
 84c05f9:	8b 0a                	mov    (%edx),%ecx
 84c05fb:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c05fe:	81 c2 a7 d5 00 00    	add    $0xd5a7,%edx
 84c0604:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c0608:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c060b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c060f:	89 04 24             	mov    %eax,(%esp)
 84c0612:	ff d1                	call   *%ecx
 84c0614:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 84c061b:	00 
 84c061c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c061f:	89 04 24             	mov    %eax,(%esp)
 84c0622:	e8 5d cf c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0627:	8b 10                	mov    (%eax),%edx
 84c0629:	83 c2 04             	add    $0x4,%edx
 84c062c:	8b 0a                	mov    (%edx),%ecx
 84c062e:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c0631:	81 c2 fc d6 00 00    	add    $0xd6fc,%edx
 84c0637:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c063b:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c063e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0642:	89 04 24             	mov    %eax,(%esp)
 84c0645:	ff d1                	call   *%ecx
 84c0647:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 84c064e:	00 
 84c064f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0652:	89 04 24             	mov    %eax,(%esp)
 84c0655:	e8 2a cf c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c065a:	8b 10                	mov    (%eax),%edx
 84c065c:	83 c2 04             	add    $0x4,%edx
 84c065f:	8b 0a                	mov    (%edx),%ecx
 84c0661:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c0664:	81 c2 3c d7 00 00    	add    $0xd73c,%edx
 84c066a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c066e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0671:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0675:	89 04 24             	mov    %eax,(%esp)
 84c0678:	ff d1                	call   *%ecx
 84c067a:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84c0681:	00 
 84c0682:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0685:	89 04 24             	mov    %eax,(%esp)
 84c0688:	e8 f7 ce c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c068d:	8b 10                	mov    (%eax),%edx
 84c068f:	83 c2 04             	add    $0x4,%edx
 84c0692:	8b 0a                	mov    (%edx),%ecx
 84c0694:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c0697:	81 c2 6a 46 00 00    	add    $0x466a,%edx
 84c069d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c06a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c06a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c06a8:	89 04 24             	mov    %eax,(%esp)
 84c06ab:	ff d1                	call   *%ecx
 84c06ad:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84c06b4:	00 
 84c06b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c06b8:	89 04 24             	mov    %eax,(%esp)
 84c06bb:	e8 c4 ce c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c06c0:	8b 10                	mov    (%eax),%edx
 84c06c2:	83 c2 04             	add    $0x4,%edx
 84c06c5:	8b 0a                	mov    (%edx),%ecx
 84c06c7:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c06ca:	81 c2 a4 b1 00 00    	add    $0xb1a4,%edx
 84c06d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c06d4:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c06d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c06db:	89 04 24             	mov    %eax,(%esp)
 84c06de:	ff d1                	call   *%ecx
 84c06e0:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 84c06e7:	00 
 84c06e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c06eb:	89 04 24             	mov    %eax,(%esp)
 84c06ee:	e8 91 ce c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c06f3:	8b 10                	mov    (%eax),%edx
 84c06f5:	83 c2 04             	add    $0x4,%edx
 84c06f8:	8b 0a                	mov    (%edx),%ecx
 84c06fa:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c06fd:	81 c2 c8 ec 00 00    	add    $0xecc8,%edx
 84c0703:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c0707:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c070a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c070e:	89 04 24             	mov    %eax,(%esp)
 84c0711:	ff d1                	call   *%ecx
 84c0713:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 84c071a:	00 
 84c071b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c071e:	89 04 24             	mov    %eax,(%esp)
 84c0721:	e8 5e ce c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0726:	8b 10                	mov    (%eax),%edx
 84c0728:	83 c2 04             	add    $0x4,%edx
 84c072b:	8b 0a                	mov    (%edx),%ecx
 84c072d:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c0730:	81 c2 d0 ec 00 00    	add    $0xecd0,%edx
 84c0736:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c073a:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c073d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0741:	89 04 24             	mov    %eax,(%esp)
 84c0744:	ff d1                	call   *%ecx
 84c0746:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 84c074d:	00 
 84c074e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0751:	89 04 24             	mov    %eax,(%esp)
 84c0754:	e8 2b ce c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0759:	8b 10                	mov    (%eax),%edx
 84c075b:	83 c2 04             	add    $0x4,%edx
 84c075e:	8b 0a                	mov    (%edx),%ecx
 84c0760:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c0763:	81 c2 9a 4a 01 00    	add    $0x14a9a,%edx
 84c0769:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c076d:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0770:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0774:	89 04 24             	mov    %eax,(%esp)
 84c0777:	ff d1                	call   *%ecx
 84c0779:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c077c:	8b 80 a8 c9 00 00    	mov    0xc9a8(%eax),%eax
 84c0782:	85 c0                	test   %eax,%eax
 84c0784:	75 1b                	jne    84c07a1 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x53d>
 84c0786:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84c078d:	00 
 84c078e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0791:	89 04 24             	mov    %eax,(%esp)
 84c0794:	e8 eb cd c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0799:	89 04 24             	mov    %eax,(%esp)
 84c079c:	e8 d5 c1 dc ff       	call   828c976 <_ZN12CAchievement6adjustEv>
 84c07a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c07a4:	05 e0 00 00 00       	add    $0xe0,%eax
 84c07a9:	89 04 24             	mov    %eax,(%esp)
 84c07ac:	e8 35 14 e3 ff       	call   82f1be6 <_ZN8CNetworkILi4096ELi450000EE6get_ipEv>
 84c07b1:	85 c0                	test   %eax,%eax
 84c07b3:	0f 94 c0             	sete   %al
 84c07b6:	84 c0                	test   %al,%al
 84c07b8:	0f 84 ae 00 00 00    	je     84c086c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x608>
 84c07be:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c07c1:	89 04 24             	mov    %eax,(%esp)
 84c07c4:	e8 c7 b4 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c07c9:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 84c07cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c07d2:	89 04 24             	mov    %eax,(%esp)
 84c07d5:	e8 30 c3 02 00       	call   84ecb0a <_ZN5CUser16GetLogInOutStateEv>
 84c07da:	0f b6 c0             	movzbl %al,%eax
 84c07dd:	89 85 c8 fe ff ff    	mov    %eax,-0x138(%ebp)
 84c07e3:	e8 99 b9 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c07e8:	8b b8 b0 01 00 00    	mov    0x1b0(%eax),%edi
 84c07ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c07f1:	05 e0 00 00 00       	add    $0xe0,%eax
 84c07f6:	89 04 24             	mov    %eax,(%esp)
 84c07f9:	e8 f6 13 e3 ff       	call   82f1bf4 <_ZN8CNetworkILi4096ELi450000EE8get_portEv>
 84c07fe:	0f b7 f0             	movzwl %ax,%esi
 84c0801:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0804:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 84c080a:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84c0811:	00 
 84c0812:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84c0818:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c081c:	89 14 24             	mov    %edx,(%esp)
 84c081f:	e8 0a 20 ca ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c0824:	89 c3                	mov    %eax,%ebx
 84c0826:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0829:	89 04 24             	mov    %eax,(%esp)
 84c082c:	e8 e1 f4 d6 ff       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 84c0831:	89 c2                	mov    %eax,%edx
 84c0833:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0836:	05 00 97 07 00       	add    $0x79700,%eax
 84c083b:	8b 8d c4 fe ff ff    	mov    -0x13c(%ebp),%ecx
 84c0841:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84c0845:	8b 8d c8 fe ff ff    	mov    -0x138(%ebp),%ecx
 84c084b:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84c084f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c0853:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c0857:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c085b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c085f:	89 04 24             	mov    %eax,(%esp)
 84c0862:	e8 1f 35 1c 00       	call   8683d86 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi>
 84c0867:	e9 d1 00 00 00       	jmp    84c093d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x6d9>
 84c086c:	c7 85 50 ff ff ff 00 	movl   $0x0,-0xb0(%ebp)
 84c0873:	00 00 00 
 84c0876:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
 84c087d:	00 00 00 
 84c0880:	c7 85 58 ff ff ff 00 	movl   $0x0,-0xa8(%ebp)
 84c0887:	00 00 00 
 84c088a:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
 84c0891:	00 00 00 
 84c0894:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0897:	89 04 24             	mov    %eax,(%esp)
 84c089a:	e8 f1 b3 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c089f:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 84c08a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c08a8:	89 04 24             	mov    %eax,(%esp)
 84c08ab:	e8 5a c2 02 00       	call   84ecb0a <_ZN5CUser16GetLogInOutStateEv>
 84c08b0:	0f b6 c0             	movzbl %al,%eax
 84c08b3:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 84c08b9:	e8 c3 b8 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c08be:	8b b8 b0 01 00 00    	mov    0x1b0(%eax),%edi
 84c08c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c08c7:	05 e0 00 00 00       	add    $0xe0,%eax
 84c08cc:	89 04 24             	mov    %eax,(%esp)
 84c08cf:	e8 20 13 e3 ff       	call   82f1bf4 <_ZN8CNetworkILi4096ELi450000EE8get_portEv>
 84c08d4:	0f b7 f0             	movzwl %ax,%esi
 84c08d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c08da:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 84c08e0:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84c08e7:	00 
 84c08e8:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 84c08ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c08f2:	89 14 24             	mov    %edx,(%esp)
 84c08f5:	e8 34 1f ca ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84c08fa:	89 c3                	mov    %eax,%ebx
 84c08fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c08ff:	89 04 24             	mov    %eax,(%esp)
 84c0902:	e8 0b f4 d6 ff       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 84c0907:	89 c2                	mov    %eax,%edx
 84c0909:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c090c:	05 00 97 07 00       	add    $0x79700,%eax
 84c0911:	8b 8d cc fe ff ff    	mov    -0x134(%ebp),%ecx
 84c0917:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84c091b:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 84c0921:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84c0925:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c0929:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c092d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c0931:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0935:	89 04 24             	mov    %eax,(%esp)
 84c0938:	e8 49 34 1c 00       	call   8683d86 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi>
 84c093d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c0944:	e8 55 b3 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c0949:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c094c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0950:	89 14 24             	mov    %edx,(%esp)
 84c0953:	e8 c0 b7 02 00       	call   84ec118 <_ZN15CUserCharacInfo12SetLoginTickEl>
 84c0958:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c095f:	e8 3a b3 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c0964:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0967:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c096b:	89 14 24             	mov    %edx,(%esp)
 84c096e:	e8 b9 b7 02 00       	call   84ec12c <_ZN15CUserCharacInfo22SetCharacStartPlayTickEl>
 84c0973:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c0979:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c097d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0980:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c0984:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0987:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c098b:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84c0991:	89 04 24             	mov    %eax,(%esp)
 84c0994:	e8 af e5 02 00       	call   84eef48 <_ZN15CSkillTreeParamC1EP5CUserP12SIG_LOAD_ETCR11PacketGuard>
 84c0999:	c6 45 a9 00          	movb   $0x0,-0x57(%ebp)
 84c099d:	e8 05 9a c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c09a2:	89 04 24             	mov    %eax,(%esp)
 84c09a5:	e8 74 3a d7 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 84c09aa:	84 c0                	test   %al,%al
 84c09ac:	74 7e                	je     84c0a2c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x7c8>
 84c09ae:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c09b1:	0f b6 98 d1 cd 00 00 	movzbl 0xcdd1(%eax),%ebx
 84c09b8:	e8 de b7 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c09bd:	0f b6 80 50 a8 00 00 	movzbl 0xa850(%eax),%eax
 84c09c4:	38 c3                	cmp    %al,%bl
 84c09c6:	0f 95 c0             	setne  %al
 84c09c9:	84 c0                	test   %al,%al
 84c09cb:	74 5f                	je     84c0a2c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x7c8>
 84c09cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c09d0:	89 04 24             	mov    %eax,(%esp)
 84c09d3:	e8 72 e4 cd ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 84c09d8:	89 c3                	mov    %eax,%ebx
 84c09da:	e8 bc b7 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c09df:	0f b6 80 50 a8 00 00 	movzbl 0xa850(%eax),%eax
 84c09e6:	0f b6 f0             	movzbl %al,%esi
 84c09e9:	e8 ad b7 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c09ee:	05 00 a8 00 00       	add    $0xa800,%eax
 84c09f3:	89 74 24 04          	mov    %esi,0x4(%esp)
 84c09f7:	89 04 24             	mov    %eax,(%esp)
 84c09fa:	e8 3b 87 02 00       	call   84e913a <_ZNK27PvPSkillTreeParameterScript21getInitSkillTreeGradeEi>
 84c09ff:	39 c3                	cmp    %eax,%ebx
 84c0a01:	0f 9c c0             	setl   %al
 84c0a04:	84 c0                	test   %al,%al
 84c0a06:	74 24                	je     84c0a2c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x7c8>
 84c0a08:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0a0b:	05 c0 c9 00 00       	add    $0xc9c0,%eax
 84c0a10:	c7 44 24 08 14 04 00 	movl   $0x414,0x8(%esp)
 84c0a17:	00 
 84c0a18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c0a1f:	00 
 84c0a20:	89 04 24             	mov    %eax,(%esp)
 84c0a23:	e8 98 d2 bb ff       	call   807dcc0 <memset@plt>
 84c0a28:	c6 45 a9 01          	movb   $0x1,-0x57(%ebp)
 84c0a2c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0a2f:	8d 90 aa 4a 01 00    	lea    0x14aaa(%eax),%edx
 84c0a35:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0a38:	05 c0 c9 00 00       	add    $0xc9c0,%eax
 84c0a3d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c0a41:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0a45:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0a48:	89 04 24             	mov    %eax,(%esp)
 84c0a4b:	e8 d0 d0 18 00       	call   864db20 <_ZN5CUser8SetSkillEP14SIG_LOAD_SKILLP15SIG_COMBO_SKILL>
 84c0a50:	83 f0 01             	xor    $0x1,%eax
 84c0a53:	84 c0                	test   %al,%al
 84c0a55:	74 15                	je     84c0a6c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x808>
 84c0a57:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0a5a:	89 04 24             	mov    %eax,(%esp)
 84c0a5d:	e8 c2 b4 02 00       	call   84ebf24 <_ZN15CUserCharacInfo16disableSaveSkillEv>
 84c0a62:	bb 91 0b 00 00       	mov    $0xb91,%ebx
 84c0a67:	e9 b9 1b 00 00       	jmp    84c2625 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23c1>
 84c0a6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0a6f:	89 04 24             	mov    %eax,(%esp)
 84c0a72:	e8 ad b4 02 00       	call   84ebf24 <_ZN15CUserCharacInfo16disableSaveSkillEv>
 84c0a77:	e8 2b 99 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c0a7c:	89 04 24             	mov    %eax,(%esp)
 84c0a7f:	e8 9a 39 d7 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 84c0a84:	84 c0                	test   %al,%al
 84c0a86:	0f 84 58 01 00 00    	je     84c0be4 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x980>
 84c0a8c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0a8f:	0f b6 80 d4 cd 00 00 	movzbl 0xcdd4(%eax),%eax
 84c0a96:	84 c0                	test   %al,%al
 84c0a98:	75 11                	jne    84c0aab <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x847>
 84c0a9a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0a9d:	8b 80 9f d5 00 00    	mov    0xd59f(%eax),%eax
 84c0aa3:	85 c0                	test   %eax,%eax
 84c0aa5:	0f 85 fb 00 00 00    	jne    84c0ba6 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x942>
 84c0aab:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 84c0ab2:	00 
 84c0ab3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c0aba:	00 
 84c0abb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c0ac2:	00 
 84c0ac3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0ac6:	89 04 24             	mov    %eax,(%esp)
 84c0ac9:	e8 32 49 1a 00       	call   8665400 <_ZN5CUser16givePvPSkillTreeEibi>
 84c0ace:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 84c0ad5:	00 
 84c0ad6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c0add:	00 
 84c0ade:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c0ae5:	00 
 84c0ae6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0ae9:	89 04 24             	mov    %eax,(%esp)
 84c0aec:	e8 0f 49 1a 00       	call   8665400 <_ZN5CUser16givePvPSkillTreeEibi>
 84c0af1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0af4:	89 04 24             	mov    %eax,(%esp)
 84c0af7:	e8 4e e3 cd ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 84c0afc:	89 c6                	mov    %eax,%esi
 84c0afe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0b01:	89 04 24             	mov    %eax,(%esp)
 84c0b04:	e8 33 e7 d6 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 84c0b09:	0f be c0             	movsbl %al,%eax
 84c0b0c:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 84c0b12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0b15:	89 04 24             	mov    %eax,(%esp)
 84c0b18:	e8 77 01 c5 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 84c0b1d:	0f be f8             	movsbl %al,%edi
 84c0b20:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0b23:	89 04 24             	mov    %eax,(%esp)
 84c0b26:	e8 f5 d3 c3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 84c0b2b:	89 c3                	mov    %eax,%ebx
 84c0b2d:	e8 69 b6 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c0b32:	05 00 a8 00 00       	add    $0xa800,%eax
 84c0b37:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84c0b3e:	00 
 84c0b3f:	89 74 24 10          	mov    %esi,0x10(%esp)
 84c0b43:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 84c0b49:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c0b4d:	89 7c 24 08          	mov    %edi,0x8(%esp)
 84c0b51:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c0b55:	89 04 24             	mov    %eax,(%esp)
 84c0b58:	e8 05 d2 59 00       	call   8a5dd62 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib>
 84c0b5d:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84c0b60:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0b63:	89 04 24             	mov    %eax,(%esp)
 84c0b66:	e8 d5 e5 d6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 84c0b6b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c0b72:	00 
 84c0b73:	8b 55 b0             	mov    -0x50(%ebp),%edx
 84c0b76:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0b7a:	89 04 24             	mov    %eax,(%esp)
 84c0b7d:	e8 76 29 14 00       	call   86034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>
 84c0b82:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0b85:	89 04 24             	mov    %eax,(%esp)
 84c0b88:	e8 b3 e5 d6 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 84c0b8d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c0b94:	00 
 84c0b95:	8b 55 b0             	mov    -0x50(%ebp),%edx
 84c0b98:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0b9c:	89 04 24             	mov    %eax,(%esp)
 84c0b9f:	e8 54 29 14 00       	call   86034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>
 84c0ba4:	eb 3e                	jmp    84c0be4 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x980>
 84c0ba6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0ba9:	05 cc c9 00 00       	add    $0xc9cc,%eax
 84c0bae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c0bb5:	00 
 84c0bb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0bba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0bbd:	89 04 24             	mov    %eax,(%esp)
 84c0bc0:	e8 c9 f3 ff ff       	call   84bff8e <_Z15SetPvPSkillTreeP5CUserPK15_Mastered_skill20ENUM_SKILL_TREE_KIND>
 84c0bc5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0bc8:	05 68 cb 00 00       	add    $0xcb68,%eax
 84c0bcd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c0bd4:	00 
 84c0bd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0bd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0bdc:	89 04 24             	mov    %eax,(%esp)
 84c0bdf:	e8 aa f3 ff ff       	call   84bff8e <_Z15SetPvPSkillTreeP5CUserPK15_Mastered_skill20ENUM_SKILL_TREE_KIND>
 84c0be4:	8b 45 08             	mov    0x8(%ebp),%eax
 84c0be7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0beb:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84c0bf1:	89 04 24             	mov    %eax,(%esp)
 84c0bf4:	e8 ad e8 02 00       	call   84ef4a6 <_ZN15CSkillTreeParam12SetSkillTreeEP13Inter_LoadEtc>
 84c0bf9:	85 c0                	test   %eax,%eax
 84c0bfb:	0f 95 c0             	setne  %al
 84c0bfe:	84 c0                	test   %al,%al
 84c0c00:	74 0a                	je     84c0c0c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x9a8>
 84c0c02:	bb cc 0b 00 00       	mov    $0xbcc,%ebx
 84c0c07:	e9 19 1a 00 00       	jmp    84c2625 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23c1>
 84c0c0c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c0c13:	00 
 84c0c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0c17:	89 04 24             	mov    %eax,(%esp)
 84c0c1a:	e8 65 c9 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0c1f:	89 04 24             	mov    %eax,(%esp)
 84c0c22:	e8 7d 9e fd ff       	call   849aaa4 <_ZN9item_lock9CItemLock17GetItemLockRefVecEv>
 84c0c27:	89 c3                	mov    %eax,%ebx
 84c0c29:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84c0c30:	00 
 84c0c31:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0c34:	89 04 24             	mov    %eax,(%esp)
 84c0c37:	e8 48 c9 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0c3c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c0c40:	89 04 24             	mov    %eax,(%esp)
 84c0c43:	e8 72 05 18 00       	call   86411ba <_ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE>
 84c0c48:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c0c4f:	00 
 84c0c50:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0c53:	89 04 24             	mov    %eax,(%esp)
 84c0c56:	e8 29 c9 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0c5b:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0c5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0c62:	89 04 24             	mov    %eax,(%esp)
 84c0c65:	e8 2e 22 08 00       	call   8542e98 <_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser>
 84c0c6a:	e8 1f b5 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c0c6f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0c72:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0c76:	89 04 24             	mov    %eax,(%esp)
 84c0c79:	e8 b2 60 dd ff       	call   8296d30 <_ZN12CGameManager17insert_game_worldEP5CUser>
 84c0c7e:	88 45 aa             	mov    %al,-0x56(%ebp)
 84c0c81:	0f b6 45 aa          	movzbl -0x56(%ebp),%eax
 84c0c85:	83 f0 01             	xor    $0x1,%eax
 84c0c88:	84 c0                	test   %al,%al
 84c0c8a:	74 0a                	je     84c0c96 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xa32>
 84c0c8c:	bb 14 0c 00 00       	mov    $0xc14,%ebx
 84c0c91:	e9 8f 19 00 00       	jmp    84c2625 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23c1>
 84c0c96:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0c99:	89 04 24             	mov    %eax,(%esp)
 84c0c9c:	e8 83 9f 1c 00       	call   868ac24 <_ZN5CUser12sendCharacQpEv>
 84c0ca1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0ca4:	89 04 24             	mov    %eax,(%esp)
 84c0ca7:	e8 80 a2 1c 00       	call   868af2c <_ZN5CUser20sendCharacQuestPieceEv>
 84c0cac:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 84c0cb3:	00 
 84c0cb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0cb7:	89 04 24             	mov    %eax,(%esp)
 84c0cba:	e8 c5 c8 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c0cbf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c0cc6:	00 
 84c0cc7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0cca:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0cce:	89 04 24             	mov    %eax,(%esp)
 84c0cd1:	e8 70 c5 c1 ff       	call   80dd246 <_ZN12CBoosterGage9send_dataEP5CUseri>
 84c0cd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0cd9:	89 04 24             	mov    %eax,(%esp)
 84c0cdc:	e8 29 a3 1c 00       	call   868b00a <_ZN5CUser23SendItemMakingSkillInfoEv>
 84c0ce1:	e8 c1 96 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c0ce6:	89 04 24             	mov    %eax,(%esp)
 84c0ce9:	e8 30 37 d7 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 84c0cee:	84 c0                	test   %al,%al
 84c0cf0:	74 78                	je     84c0d6a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xb06>
 84c0cf2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0cf5:	0f b6 80 d4 cd 00 00 	movzbl 0xcdd4(%eax),%eax
 84c0cfc:	84 c0                	test   %al,%al
 84c0cfe:	75 13                	jne    84c0d13 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xaaf>
 84c0d00:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0d03:	8b 80 9f d5 00 00    	mov    0xd59f(%eax),%eax
 84c0d09:	85 c0                	test   %eax,%eax
 84c0d0b:	74 06                	je     84c0d13 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xaaf>
 84c0d0d:	80 7d a9 00          	cmpb   $0x0,-0x57(%ebp)
 84c0d11:	74 57                	je     84c0d6a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xb06>
 84c0d13:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c0d19:	89 04 24             	mov    %eax,(%esp)
 84c0d1c:	e8 c5 ab c0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84c0d21:	c7 44 24 08 54 01 00 	movl   $0x154,0x8(%esp)
 84c0d28:	00 
 84c0d29:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c0d30:	00 
 84c0d31:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c0d37:	89 04 24             	mov    %eax,(%esp)
 84c0d3a:	e8 bd ab c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c0d3f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c0d46:	00 
 84c0d47:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c0d4d:	89 04 24             	mov    %eax,(%esp)
 84c0d50:	e8 03 ac c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c0d55:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c0d5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0d5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0d62:	89 04 24             	mov    %eax,(%esp)
 84c0d65:	e8 50 78 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c0d6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0d6d:	89 04 24             	mov    %eax,(%esp)
 84c0d70:	e8 25 9c 1c 00       	call   868a99a <_ZN5CUser18CheckMaxLuckyLevelEv>
 84c0d75:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0d78:	0f b7 80 c8 40 00 00 	movzwl 0x40c8(%eax),%eax
 84c0d7f:	0f bf d0             	movswl %ax,%edx
 84c0d82:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0d85:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0d89:	89 04 24             	mov    %eax,(%esp)
 84c0d8c:	e8 c5 b4 02 00       	call   84ec256 <_ZN15CUserCharacInfo24SetCurConditionEventStepEs>
 84c0d91:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0d94:	0f b7 80 ca 40 00 00 	movzwl 0x40ca(%eax),%eax
 84c0d9b:	0f bf d0             	movswl %ax,%edx
 84c0d9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0da1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0da5:	89 04 24             	mov    %eax,(%esp)
 84c0da8:	e8 ef b4 02 00       	call   84ec29c <_ZN15CUserCharacInfo30SetCurConditionEventRewardStepEs>
 84c0dad:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0db0:	0f b6 80 ad c9 00 00 	movzbl 0xc9ad(%eax),%eax
 84c0db7:	0f b6 c8             	movzbl %al,%ecx
 84c0dba:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0dbd:	0f b6 80 ac c9 00 00 	movzbl 0xc9ac(%eax),%eax
 84c0dc4:	0f b6 d0             	movzbl %al,%edx
 84c0dc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0dca:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84c0dce:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0dd2:	89 04 24             	mov    %eax,(%esp)
 84c0dd5:	e8 c6 b3 02 00       	call   84ec1a0 <_ZN15CUserCharacInfo23SetCurCharacRevengeDataEhh>
 84c0dda:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0ddd:	0f b7 80 cc 40 00 00 	movzwl 0x40cc(%eax),%eax
 84c0de4:	66 85 c0             	test   %ax,%ax
 84c0de7:	79 0c                	jns    84c0df5 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xb91>
 84c0de9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0dec:	66 c7 80 cc 40 00 00 	movw   $0x0,0x40cc(%eax)
 84c0df3:	00 00 
 84c0df5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0df8:	0f b7 80 cc 40 00 00 	movzwl 0x40cc(%eax),%eax
 84c0dff:	0f bf d0             	movswl %ax,%edx
 84c0e02:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0e05:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0e09:	89 04 24             	mov    %eax,(%esp)
 84c0e0c:	e8 d1 b4 02 00       	call   84ec2e2 <_ZN15CUserCharacInfo26SetProperDungeonClearCountEs>
 84c0e11:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0e14:	8b 80 b8 c9 00 00    	mov    0xc9b8(%eax),%eax
 84c0e1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0e1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0e21:	89 04 24             	mov    %eax,(%esp)
 84c0e24:	e8 25 c2 02 00       	call   84ed04e <_ZN5CUser35SetCurCharacUsedGiftFatigueQuantityEj>
 84c0e29:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0e2c:	89 04 24             	mov    %eax,(%esp)
 84c0e2f:	e8 fe f5 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c0e34:	85 c0                	test   %eax,%eax
 84c0e36:	0f 95 c0             	setne  %al
 84c0e39:	84 c0                	test   %al,%al
 84c0e3b:	0f 84 cc 03 00 00    	je     84c120d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xfa9>
 84c0e41:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0e44:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c0e4b:	00 
 84c0e4c:	89 04 24             	mov    %eax,(%esp)
 84c0e4f:	e8 a6 b0 02 00       	call   84ebefa <_ZN15CUserCharacInfo17SetFirstTimeLoginEb>
 84c0e54:	e8 28 b3 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c0e59:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84c0e5f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84c0e62:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84c0e67:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 84c0e6e:	00 
 84c0e6f:	89 04 24             	mov    %eax,(%esp)
 84c0e72:	e8 21 4b c5 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84c0e77:	89 45 b8             	mov    %eax,-0x48(%ebp)
 84c0e7a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84c0e7d:	8b 00                	mov    (%eax),%eax
 84c0e7f:	83 c0 34             	add    $0x34,%eax
 84c0e82:	8b 10                	mov    (%eax),%edx
 84c0e84:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84c0e87:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c0e8e:	00 
 84c0e8f:	89 04 24             	mov    %eax,(%esp)
 84c0e92:	ff d2                	call   *%edx
 84c0e94:	84 c0                	test   %al,%al
 84c0e96:	74 0e                	je     84c0ea6 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xc42>
 84c0e98:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84c0e9b:	89 04 24             	mov    %eax,(%esp)
 84c0e9e:	e8 15 b2 e6 ff       	call   832c0b8 <_ZNK16CCoinRefillEvent16getLastEventTimeEv>
 84c0ea3:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84c0ea6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c0ea9:	0f b6 80 98 4a 01 00 	movzbl 0x14a98(%eax),%eax
 84c0eb0:	0f b6 d0             	movzbl %al,%edx
 84c0eb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0eb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0eba:	89 04 24             	mov    %eax,(%esp)
 84c0ebd:	e8 32 00 1d 00       	call   8690ef4 <_ZN15CUserCharacInfo23setBlueMarbleEnterCountEh>
 84c0ec2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c0ec9:	e8 d0 ad c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c0ece:	89 c3                	mov    %eax,%ebx
 84c0ed0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0ed3:	89 04 24             	mov    %eax,(%esp)
 84c0ed6:	e8 57 f5 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c0edb:	8b 40 7b             	mov    0x7b(%eax),%eax
 84c0ede:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c0ee2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c0ee6:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84c0ee9:	89 04 24             	mov    %eax,(%esp)
 84c0eec:	e8 b7 b1 fa ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84c0ef1:	84 c0                	test   %al,%al
 84c0ef3:	0f 84 8f 02 00 00    	je     84c1188 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xf24>
 84c0ef9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0efc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c0f03:	00 
 84c0f04:	89 04 24             	mov    %eax,(%esp)
 84c0f07:	e8 ee af 02 00       	call   84ebefa <_ZN15CUserCharacInfo17SetFirstTimeLoginEb>
 84c0f0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c0f13:	00 
 84c0f14:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f17:	89 04 24             	mov    %eax,(%esp)
 84c0f1a:	e8 f1 6f 19 00       	call   8657f10 <_ZN5CUser11RecoverCoinEj>
 84c0f1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f22:	89 04 24             	mov    %eax,(%esp)
 84c0f25:	e8 80 5d 19 00       	call   8656caa <_ZN5CUser12AddDailyItemEv>
 84c0f2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f2d:	89 04 24             	mov    %eax,(%esp)
 84c0f30:	e8 05 b3 02 00       	call   84ec23a <_ZN15CUserCharacInfo26ClearCurConditionEventStepEv>
 84c0f35:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f38:	89 04 24             	mov    %eax,(%esp)
 84c0f3b:	e8 40 b3 02 00       	call   84ec280 <_ZN15CUserCharacInfo32ClearCurConditionEventRewardStepEv>
 84c0f40:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f43:	89 04 24             	mov    %eax,(%esp)
 84c0f46:	e8 7b b3 02 00       	call   84ec2c6 <_ZN15CUserCharacInfo28ClearProperDungeonClearCountEv>
 84c0f4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f4e:	89 04 24             	mov    %eax,(%esp)
 84c0f51:	e8 c8 b6 02 00       	call   84ec61e <_ZN5CUser13SetFirstLoginEv>
 84c0f56:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f59:	89 04 24             	mov    %eax,(%esp)
 84c0f5c:	e8 d7 13 ca ff       	call   8162338 <_ZN15CUserCharacInfo16IsFirstTimeLoginEv>
 84c0f61:	84 c0                	test   %al,%al
 84c0f63:	74 16                	je     84c0f7b <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xd17>
 84c0f65:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f68:	89 04 24             	mov    %eax,(%esp)
 84c0f6b:	e8 ac 64 c9 ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 84c0f70:	84 c0                	test   %al,%al
 84c0f72:	75 07                	jne    84c0f7b <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xd17>
 84c0f74:	b8 01 00 00 00       	mov    $0x1,%eax
 84c0f79:	eb 05                	jmp    84c0f80 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xd1c>
 84c0f7b:	b8 00 00 00 00       	mov    $0x0,%eax
 84c0f80:	84 c0                	test   %al,%al
 84c0f82:	74 3a                	je     84c0fbe <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xd5a>
 84c0f84:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0f87:	89 04 24             	mov    %eax,(%esp)
 84c0f8a:	e8 cb 89 c3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84c0f8f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c0f96:	00 
 84c0f97:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84c0f9e:	00 
 84c0f9f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c0fa6:	00 
 84c0fa7:	c7 44 24 08 a1 01 00 	movl   $0x1a1,0x8(%esp)
 84c0fae:	00 
 84c0faf:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c0fb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c0fb6:	89 04 24             	mov    %eax,(%esp)
 84c0fb9:	e8 c0 7c c3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84c0fbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0fc1:	89 04 24             	mov    %eax,(%esp)
 84c0fc4:	e8 bd c0 02 00       	call   84ed086 <_ZN5CUser37ResetCurCharacUsedGiftFatigueQuantityEv>
 84c0fc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0fcc:	89 04 24             	mov    %eax,(%esp)
 84c0fcf:	e8 e4 92 c1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84c0fd4:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84c0fd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0fda:	89 04 24             	mov    %eax,(%esp)
 84c0fdd:	e8 56 13 ca ff       	call   8162338 <_ZN15CUserCharacInfo16IsFirstTimeLoginEv>
 84c0fe2:	84 c0                	test   %al,%al
 84c0fe4:	74 16                	je     84c0ffc <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xd98>
 84c0fe6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c0fe9:	89 04 24             	mov    %eax,(%esp)
 84c0fec:	e8 4b e2 d6 ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 84c0ff1:	84 c0                	test   %al,%al
 84c0ff3:	75 07                	jne    84c0ffc <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xd98>
 84c0ff5:	b8 01 00 00 00       	mov    $0x1,%eax
 84c0ffa:	eb 05                	jmp    84c1001 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xd9d>
 84c0ffc:	b8 00 00 00 00       	mov    $0x0,%eax
 84c1001:	84 c0                	test   %al,%al
 84c1003:	0f 84 8b 00 00 00    	je     84c1094 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xe30>
 84c1009:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 84c1010:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 84c1017:	83 7d bc 3c          	cmpl   $0x3c,-0x44(%ebp)
 84c101b:	7e 10                	jle    84c102d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xdc9>
 84c101d:	c7 45 c0 03 00 00 00 	movl   $0x3,-0x40(%ebp)
 84c1024:	c7 45 c4 0c 00 00 00 	movl   $0xc,-0x3c(%ebp)
 84c102b:	eb 14                	jmp    84c1041 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xddd>
 84c102d:	83 7d bc 32          	cmpl   $0x32,-0x44(%ebp)
 84c1031:	7e 0e                	jle    84c1041 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xddd>
 84c1033:	c7 45 c0 01 00 00 00 	movl   $0x1,-0x40(%ebp)
 84c103a:	c7 45 c4 0b 00 00 00 	movl   $0xb,-0x3c(%ebp)
 84c1041:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 84c1048:	eb 3d                	jmp    84c1087 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xe23>
 84c104a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c104d:	89 04 24             	mov    %eax,(%esp)
 84c1050:	e8 05 89 c3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84c1055:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c105c:	00 
 84c105d:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 84c1060:	89 54 24 10          	mov    %edx,0x10(%esp)
 84c1064:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c106b:	00 
 84c106c:	c7 44 24 08 a3 01 00 	movl   $0x1a3,0x8(%esp)
 84c1073:	00 
 84c1074:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c1077:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c107b:	89 04 24             	mov    %eax,(%esp)
 84c107e:	e8 fb 7b c3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84c1083:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 84c1087:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84c108a:	3b 45 c0             	cmp    -0x40(%ebp),%eax
 84c108d:	0f 92 c0             	setb   %al
 84c1090:	84 c0                	test   %al,%al
 84c1092:	75 b6                	jne    84c104a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xde6>
 84c1094:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1097:	89 04 24             	mov    %eax,(%esp)
 84c109a:	e8 99 12 ca ff       	call   8162338 <_ZN15CUserCharacInfo16IsFirstTimeLoginEv>
 84c109f:	84 c0                	test   %al,%al
 84c10a1:	74 16                	je     84c10b9 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xe55>
 84c10a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c10a6:	89 04 24             	mov    %eax,(%esp)
 84c10a9:	e8 e6 fb c4 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 84c10ae:	84 c0                	test   %al,%al
 84c10b0:	75 07                	jne    84c10b9 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xe55>
 84c10b2:	b8 01 00 00 00       	mov    $0x1,%eax
 84c10b7:	eb 05                	jmp    84c10be <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xe5a>
 84c10b9:	b8 00 00 00 00       	mov    $0x0,%eax
 84c10be:	84 c0                	test   %al,%al
 84c10c0:	0f 84 b7 00 00 00    	je     84c117d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xf19>
 84c10c6:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84c10cd:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84c10d4:	83 7d bc 32          	cmpl   $0x32,-0x44(%ebp)
 84c10d8:	7e 10                	jle    84c10ea <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xe86>
 84c10da:	c7 45 cc 05 00 00 00 	movl   $0x5,-0x34(%ebp)
 84c10e1:	c7 45 d0 04 00 00 00 	movl   $0x4,-0x30(%ebp)
 84c10e8:	eb 40                	jmp    84c112a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xec6>
 84c10ea:	83 7d bc 28          	cmpl   $0x28,-0x44(%ebp)
 84c10ee:	7e 10                	jle    84c1100 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xe9c>
 84c10f0:	c7 45 cc 03 00 00 00 	movl   $0x3,-0x34(%ebp)
 84c10f7:	c7 45 d0 03 00 00 00 	movl   $0x3,-0x30(%ebp)
 84c10fe:	eb 2a                	jmp    84c112a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xec6>
 84c1100:	83 7d bc 1e          	cmpl   $0x1e,-0x44(%ebp)
 84c1104:	7e 10                	jle    84c1116 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xeb2>
 84c1106:	c7 45 cc 02 00 00 00 	movl   $0x2,-0x34(%ebp)
 84c110d:	c7 45 d0 02 00 00 00 	movl   $0x2,-0x30(%ebp)
 84c1114:	eb 14                	jmp    84c112a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xec6>
 84c1116:	83 7d bc 14          	cmpl   $0x14,-0x44(%ebp)
 84c111a:	7e 0e                	jle    84c112a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xec6>
 84c111c:	c7 45 cc 01 00 00 00 	movl   $0x1,-0x34(%ebp)
 84c1123:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 84c112a:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84c1131:	eb 3d                	jmp    84c1170 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xf0c>
 84c1133:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1136:	89 04 24             	mov    %eax,(%esp)
 84c1139:	e8 1c 88 c3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84c113e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84c1145:	00 
 84c1146:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84c1149:	89 54 24 10          	mov    %edx,0x10(%esp)
 84c114d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c1154:	00 
 84c1155:	c7 44 24 08 a3 01 00 	movl   $0x1a3,0x8(%esp)
 84c115c:	00 
 84c115d:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c1160:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c1164:	89 04 24             	mov    %eax,(%esp)
 84c1167:	e8 12 7b c3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84c116c:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 84c1170:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84c1173:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 84c1176:	0f 92 c0             	setb   %al
 84c1179:	84 c0                	test   %al,%al
 84c117b:	75 b6                	jne    84c1133 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xecf>
 84c117d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1180:	89 04 24             	mov    %eax,(%esp)
 84c1183:	e8 50 fd 1c 00       	call   8690ed8 <_ZN15CUserCharacInfo25resetBlueMarbleEnterCountEv>
 84c1188:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c118b:	89 04 24             	mov    %eax,(%esp)
 84c118e:	e8 39 fe 1c 00       	call   8690fcc <_ZN5CUser24sendBlueMarbleEnterCountEv>
 84c1193:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1196:	89 04 24             	mov    %eax,(%esp)
 84c1199:	e8 5e 57 19 00       	call   86568fc <_ZN5CUser12SendOpenflagEv>
 84c119e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c11a1:	89 04 24             	mov    %eax,(%esp)
 84c11a4:	e8 89 f2 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c11a9:	8b 40 7b             	mov    0x7b(%eax),%eax
 84c11ac:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 84c11b3:	00 
 84c11b4:	c7 44 24 18 6c 71 c8 	movl   $0x8c8716c,0x18(%esp)
 84c11bb:	08 
 84c11bc:	c7 44 24 14 80 71 c8 	movl   $0x8c87180,0x14(%esp)
 84c11c3:	08 
 84c11c4:	c7 44 24 10 dd ad 27 	movl   $0x27addd,0x10(%esp)
 84c11cb:	00 
 84c11cc:	c7 44 24 0c f0 8a 57 	movl   $0x4b578af0,0xc(%esp)
 84c11d3:	4b 
 84c11d4:	c7 44 24 08 f0 15 45 	movl   $0x4b4515f0,0x8(%esp)
 84c11db:	4b 
 84c11dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c11e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c11e3:	89 04 24             	mov    %eax,(%esp)
 84c11e6:	e8 99 e9 ff ff       	call   84bfb84 <_Z10RewardItemP5CUserllljPKcS2_j>
 84c11eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c11ee:	89 04 24             	mov    %eax,(%esp)
 84c11f1:	e8 3c f2 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c11f6:	8b 40 7b             	mov    0x7b(%eax),%eax
 84c11f9:	85 c0                	test   %eax,%eax
 84c11fb:	0f 95 c0             	setne  %al
 84c11fe:	84 c0                	test   %al,%al
 84c1200:	74 0b                	je     84c120d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0xfa9>
 84c1202:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1205:	89 04 24             	mov    %eax,(%esp)
 84c1208:	e8 39 ea 1c 00       	call   868fc46 <_ZN5CUser12initAllSkillEv>
 84c120d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1210:	89 04 24             	mov    %eax,(%esp)
 84c1213:	e8 a4 58 19 00       	call   8656abc <_ZN5CUser18SendRevengeDungeonEv>
 84c1218:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c121b:	89 04 24             	mov    %eax,(%esp)
 84c121e:	e8 d9 06 1c 00       	call   86818fc <_ZN5CUser22SendConditionEventInfoEv>
 84c1223:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1226:	89 04 24             	mov    %eax,(%esp)
 84c1229:	e8 f2 05 1c 00       	call   8681820 <_ZN5CUser27SendProperDungeonClearCountEv>
 84c122e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1231:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c1235:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c1238:	8b 80 5c 4b 01 00    	mov    0x14b5c(%eax),%eax
 84c123e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1242:	8b 45 08             	mov    0x8(%ebp),%eax
 84c1245:	89 04 24             	mov    %eax,(%esp)
 84c1248:	e8 db 71 02 00       	call   84e8428 <_ZN13Inter_LoadEtc28processSeriaRoomAniDecoEventE17seriaRoom_AniDecoR5CUser>
 84c124d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1250:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1254:	8b 45 08             	mov    0x8(%ebp),%eax
 84c1257:	89 04 24             	mov    %eax,(%esp)
 84c125a:	e8 97 72 02 00       	call   84e84f6 <_ZN13Inter_LoadEtc30processCheckInvalidExpPerLevelER5CUser>
 84c125f:	c7 44 24 04 0f 27 00 	movl   $0x270f,0x4(%esp)
 84c1266:	00 
 84c1267:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c126a:	89 04 24             	mov    %eax,(%esp)
 84c126d:	e8 c0 e9 1e 00       	call   86afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>
 84c1272:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 84c1279:	eb 40                	jmp    84c12bb <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1057>
 84c127b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84c127e:	89 04 24             	mov    %eax,(%esp)
 84c1281:	e8 f9 7f 02 00       	call   84e927f <_ZN12CServerEvent10IsEventingEi>
 84c1286:	84 c0                	test   %al,%al
 84c1288:	74 2d                	je     84c12b7 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1053>
 84c128a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84c128d:	89 04 24             	mov    %eax,(%esp)
 84c1290:	e8 ff 7f 02 00       	call   84e9294 <_ZN12CServerEvent16GetEventIntervalEi>
 84c1295:	0f bf d0             	movswl %ax,%edx
 84c1298:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84c129b:	98                   	cwtl
 84c129c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84c129f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84c12a3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c12a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c12ab:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c12b2:	e8 27 e0 00 00       	call   84cf2de <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser>
 84c12b7:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 84c12bb:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 84c12bf:	0f 9e c0             	setle  %al
 84c12c2:	84 c0                	test   %al,%al
 84c12c4:	75 b5                	jne    84c127b <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1017>
 84c12c6:	a1 50 be 40 09       	mov    0x940be50,%eax
 84c12cb:	89 04 24             	mov    %eax,(%esp)
 84c12ce:	e8 47 3d eb ff       	call   837501a <_ZN13CPowerManager13GetWinnerSideEv>
 84c12d3:	88 45 ab             	mov    %al,-0x55(%ebp)
 84c12d6:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c12dc:	89 04 24             	mov    %eax,(%esp)
 84c12df:	e8 02 a6 c0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84c12e4:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 84c12eb:	00 
 84c12ec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c12f3:	00 
 84c12f4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c12fa:	89 04 24             	mov    %eax,(%esp)
 84c12fd:	e8 fa a5 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c1302:	e8 a0 90 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c1307:	89 04 24             	mov    %eax,(%esp)
 84c130a:	e8 0f 00 c3 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84c130f:	84 c0                	test   %al,%al
 84c1311:	74 18                	je     84c132b <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x10c7>
 84c1313:	c7 44 24 04 63 00 00 	movl   $0x63,0x4(%esp)
 84c131a:	00 
 84c131b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1321:	89 04 24             	mov    %eax,(%esp)
 84c1324:	e8 f7 a5 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c1329:	eb 16                	jmp    84c1341 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x10dd>
 84c132b:	0f be 45 ab          	movsbl -0x55(%ebp),%eax
 84c132f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1333:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1339:	89 04 24             	mov    %eax,(%esp)
 84c133c:	e8 df a5 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c1341:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c1348:	00 
 84c1349:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c134f:	89 04 24             	mov    %eax,(%esp)
 84c1352:	e8 01 a6 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c1357:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c135d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1361:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1364:	89 04 24             	mov    %eax,(%esp)
 84c1367:	e8 4e 72 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c136c:	a1 50 be 40 09       	mov    0x940be50,%eax
 84c1371:	89 04 24             	mov    %eax,(%esp)
 84c1374:	e8 37 de fb ff       	call   847f1b0 <_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv>
 84c1379:	84 c0                	test   %al,%al
 84c137b:	74 14                	je     84c1391 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x112d>
 84c137d:	a1 50 be 40 09       	mov    0x940be50,%eax
 84c1382:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c1385:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c1389:	89 04 24             	mov    %eax,(%esp)
 84c138c:	e8 6f de fb ff       	call   847f200 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser>
 84c1391:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1397:	89 04 24             	mov    %eax,(%esp)
 84c139a:	e8 47 a5 c0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84c139f:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84c13a4:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c13a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c13ab:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84c13b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c13b5:	89 04 24             	mov    %eax,(%esp)
 84c13b8:	e8 25 4a c5 ff       	call   8115de2 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser>
 84c13bd:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c13c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c13c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c13ca:	89 04 24             	mov    %eax,(%esp)
 84c13cd:	e8 e8 71 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c13d2:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84c13d8:	89 04 24             	mov    %eax,(%esp)
 84c13db:	e8 f4 db 02 00       	call   84eefd4 <_ZN15CSkillTreeParam24SendSkillPointReturnInfoEv>
 84c13e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c13e3:	89 04 24             	mov    %eax,(%esp)
 84c13e6:	e8 c9 6d 1b 00       	call   86781b4 <_ZN5CUser20SendDungeonClearListEv>
 84c13eb:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 84c13f2:	00 
 84c13f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c13f6:	89 04 24             	mov    %eax,(%esp)
 84c13f9:	e8 f6 3f c6 ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 84c13fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1401:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1405:	8b 45 08             	mov    0x8(%ebp),%eax
 84c1408:	89 04 24             	mov    %eax,(%esp)
 84c140b:	e8 50 13 00 00       	call   84c2760 <_ZN13Inter_LoadEtc22_checkUserDisadvantageEP5CUser>
 84c1410:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1413:	89 04 24             	mov    %eax,(%esp)
 84c1416:	e8 ab ec 1b 00       	call   86800c6 <_ZN5CUser17onSelectCharacterEv>
 84c141b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c141e:	89 04 24             	mov    %eax,(%esp)
 84c1421:	e8 6e bb 02 00       	call   84ecf94 <_ZN5CUser14NeedSecuRewardEv>
 84c1426:	84 c0                	test   %al,%al
 84c1428:	74 16                	je     84c1440 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x11dc>
 84c142a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c142d:	89 04 24             	mov    %eax,(%esp)
 84c1430:	e8 8b bb 02 00       	call   84ecfc0 <_ZN5CUser13getRewardTypeEv>
 84c1435:	84 c0                	test   %al,%al
 84c1437:	74 07                	je     84c1440 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x11dc>
 84c1439:	b8 01 00 00 00       	mov    $0x1,%eax
 84c143e:	eb 05                	jmp    84c1445 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x11e1>
 84c1440:	b8 00 00 00 00       	mov    $0x0,%eax
 84c1445:	84 c0                	test   %al,%al
 84c1447:	74 30                	je     84c1479 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1215>
 84c1449:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c144c:	89 04 24             	mov    %eax,(%esp)
 84c144f:	e8 6c bb 02 00       	call   84ecfc0 <_ZN5CUser13getRewardTypeEv>
 84c1454:	0f b6 c0             	movzbl %al,%eax
 84c1457:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c145b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c145e:	89 04 24             	mov    %eax,(%esp)
 84c1461:	e8 c2 6e 1c 00       	call   8688328 <_ZN5CUser17AddSecuRewardItemEh>
 84c1466:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c146d:	00 
 84c146e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1471:	89 04 24             	mov    %eax,(%esp)
 84c1474:	e8 57 bb 02 00       	call   84ecfd0 <_ZN5CUser13setRewardTypeEh>
 84c1479:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c147c:	89 04 24             	mov    %eax,(%esp)
 84c147f:	e8 aa e8 d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c1484:	89 04 24             	mov    %eax,(%esp)
 84c1487:	e8 3e a9 02 00       	call   84ebdca <_ZN8Sanicova4CPad13getChangedPwdEv>
 84c148c:	84 c0                	test   %al,%al
 84c148e:	74 1a                	je     84c14aa <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1246>
 84c1490:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1493:	89 04 24             	mov    %eax,(%esp)
 84c1496:	e8 93 e8 d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c149b:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c149e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c14a2:	89 04 24             	mov    %eax,(%esp)
 84c14a5:	e8 74 83 0d 00       	call   859981e <_ZN8Sanicova4CPad22SendChagePwdRewardMailEP5CUser>
 84c14aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c14ad:	89 04 24             	mov    %eax,(%esp)
 84c14b0:	e8 1d f7 1b 00       	call   8680bd2 <_ZN5CUser22discard_mouse_registerEv>
 84c14b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c14b8:	89 04 24             	mov    %eax,(%esp)
 84c14bb:	e8 f8 8d c1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84c14c0:	83 f8 27             	cmp    $0x27,%eax
 84c14c3:	0f 9f c0             	setg   %al
 84c14c6:	84 c0                	test   %al,%al
 84c14c8:	74 24                	je     84c14ee <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x128a>
 84c14ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c14cd:	89 04 24             	mov    %eax,(%esp)
 84c14d0:	e8 79 a7 c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c14d5:	89 c3                	mov    %eax,%ebx
 84c14d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c14da:	89 04 24             	mov    %eax,(%esp)
 84c14dd:	e8 b4 77 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c14e2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c14e6:	89 04 24             	mov    %eax,(%esp)
 84c14e9:	e8 d6 03 f7 ff       	call   84318c4 <_ZN22DB_LoadBloodBestRecord11makeRequestEij>
 84c14ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c14f1:	89 04 24             	mov    %eax,(%esp)
 84c14f4:	e8 bf 8d c1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84c14f9:	83 f8 3b             	cmp    $0x3b,%eax
 84c14fc:	0f 9f c0             	setg   %al
 84c14ff:	84 c0                	test   %al,%al
 84c1501:	74 24                	je     84c1527 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x12c3>
 84c1503:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1506:	89 04 24             	mov    %eax,(%esp)
 84c1509:	e8 40 a7 c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c150e:	89 c3                	mov    %eax,%ebx
 84c1510:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1513:	89 04 24             	mov    %eax,(%esp)
 84c1516:	e8 7b 77 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c151b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c151f:	89 04 24             	mov    %eax,(%esp)
 84c1522:	e8 65 08 f7 ff       	call   8431d8c <_ZN16DB_LoadDimension11makeRequestEij>
 84c1527:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c152a:	89 04 24             	mov    %eax,(%esp)
 84c152d:	e8 1c b1 02 00       	call   84ec64e <_ZN5CUser21isBreakAwayRewardDataEv>
 84c1532:	84 c0                	test   %al,%al
 84c1534:	74 0b                	je     84c1541 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x12dd>
 84c1536:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1539:	89 04 24             	mov    %eax,(%esp)
 84c153c:	e8 27 79 01 00       	call   84d8e68 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser>
 84c1541:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1544:	89 04 24             	mov    %eax,(%esp)
 84c1547:	e8 22 e7 d6 ff       	call   822fc6e <_ZN5CUser27getBreakAwayDungeonClearCntEv>
 84c154c:	85 c0                	test   %eax,%eax
 84c154e:	0f 9f c0             	setg   %al
 84c1551:	84 c0                	test   %al,%al
 84c1553:	0f 84 d4 00 00 00    	je     84c162d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x13c9>
 84c1559:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c155c:	89 04 24             	mov    %eax,(%esp)
 84c155f:	e8 ca b0 02 00       	call   84ec62e <_ZN5CUser21getBreakAwayQuestTimeEv>
 84c1564:	89 c3                	mov    %eax,%ebx
 84c1566:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c156d:	e8 2c a7 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c1572:	89 d9                	mov    %ebx,%ecx
 84c1574:	29 c1                	sub    %eax,%ecx
 84c1576:	89 c8                	mov    %ecx,%eax
 84c1578:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84c157b:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84c157f:	7f 18                	jg     84c1599 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1335>
 84c1581:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c1588:	ff 
 84c1589:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c158c:	89 04 24             	mov    %eax,(%esp)
 84c158f:	e8 c8 e6 d6 ff       	call   822fc5c <_ZN5CUser27setBreakAwayDungeonClearCntEi>
 84c1594:	e9 94 00 00 00       	jmp    84c162d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x13c9>
 84c1599:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c159f:	89 04 24             	mov    %eax,(%esp)
 84c15a2:	e8 3f a3 c0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84c15a7:	c7 44 24 08 36 01 00 	movl   $0x136,0x8(%esp)
 84c15ae:	00 
 84c15af:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c15b6:	00 
 84c15b7:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c15bd:	89 04 24             	mov    %eax,(%esp)
 84c15c0:	e8 37 a3 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c15c5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c15c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c15cc:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c15d2:	89 04 24             	mov    %eax,(%esp)
 84c15d5:	e8 62 a3 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c15da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c15dd:	89 04 24             	mov    %eax,(%esp)
 84c15e0:	e8 89 e6 d6 ff       	call   822fc6e <_ZN5CUser27getBreakAwayDungeonClearCntEv>
 84c15e5:	ba 03 00 00 00       	mov    $0x3,%edx
 84c15ea:	89 d1                	mov    %edx,%ecx
 84c15ec:	29 c1                	sub    %eax,%ecx
 84c15ee:	89 c8                	mov    %ecx,%eax
 84c15f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c15f4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c15fa:	89 04 24             	mov    %eax,(%esp)
 84c15fd:	e8 1e a3 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c1602:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c1609:	00 
 84c160a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1610:	89 04 24             	mov    %eax,(%esp)
 84c1613:	e8 40 a3 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c1618:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c161e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1622:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1625:	89 04 24             	mov    %eax,(%esp)
 84c1628:	e8 8d 6f 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c162d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1630:	89 04 24             	mov    %eax,(%esp)
 84c1633:	e8 80 8c c1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84c1638:	89 c3                	mov    %eax,%ebx
 84c163a:	e8 68 8d c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c163f:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84c1646:	00 
 84c1647:	89 04 24             	mov    %eax,(%esp)
 84c164a:	e8 27 7a 20 00       	call   86c9076 <_ZN9GameWorld30getDungeonMinimumRequiredLevelEi>
 84c164f:	39 c3                	cmp    %eax,%ebx
 84c1651:	7c 1b                	jl     84c166e <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x140a>
 84c1653:	e8 4f 8d c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c1658:	89 04 24             	mov    %eax,(%esp)
 84c165b:	e8 88 0e c8 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 84c1660:	83 f0 01             	xor    $0x1,%eax
 84c1663:	84 c0                	test   %al,%al
 84c1665:	74 07                	je     84c166e <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x140a>
 84c1667:	b8 01 00 00 00       	mov    $0x1,%eax
 84c166c:	eb 05                	jmp    84c1673 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x140f>
 84c166e:	b8 00 00 00 00       	mov    $0x0,%eax
 84c1673:	84 c0                	test   %al,%al
 84c1675:	74 66                	je     84c16dd <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1479>
 84c1677:	e8 1f ab c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c167c:	83 c0 68             	add    $0x68,%eax
 84c167f:	c7 44 24 04 ff 2a 00 	movl   $0x2aff,0x4(%esp)
 84c1686:	00 
 84c1687:	89 04 24             	mov    %eax,(%esp)
 84c168a:	e8 6d 71 da ff       	call   82687fc <_ZN21ServerParameterScript13isDungeonOpenEi>
 84c168f:	84 c0                	test   %al,%al
 84c1691:	74 26                	je     84c16b9 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1455>
 84c1693:	e8 0f 8d c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c1698:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84c169f:	00 
 84c16a0:	c7 44 24 08 ff 2a 00 	movl   $0x2aff,0x8(%esp)
 84c16a7:	00 
 84c16a8:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c16ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c16af:	89 04 24             	mov    %eax,(%esp)
 84c16b2:	e8 11 79 20 00       	call   86c8fc8 <_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib>
 84c16b7:	eb 24                	jmp    84c16dd <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1479>
 84c16b9:	e8 e9 8c c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c16be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c16c5:	00 
 84c16c6:	c7 44 24 08 ff 2a 00 	movl   $0x2aff,0x8(%esp)
 84c16cd:	00 
 84c16ce:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c16d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c16d5:	89 04 24             	mov    %eax,(%esp)
 84c16d8:	e8 eb 78 20 00       	call   86c8fc8 <_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib>
 84c16dd:	e8 b9 aa c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c16e2:	89 04 24             	mov    %eax,(%esp)
 84c16e5:	e8 12 7c 02 00       	call   84e92fc <_ZN12CDataManager30GetAutoMarketContitionsControlEv>
 84c16ea:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c16ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c16f1:	89 04 24             	mov    %eax,(%esp)
 84c16f4:	e8 f1 6e e3 ff       	call   82f85ea <_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEP5CUser>
 84c16f9:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 84c16fe:	89 04 24             	mov    %eax,(%esp)
 84c1701:	e8 c4 38 d7 ff       	call   8234fca <_ZNK20CGlobalEffectManager12getEffectNumEv>
 84c1706:	85 c0                	test   %eax,%eax
 84c1708:	0f 95 c0             	setne  %al
 84c170b:	84 c0                	test   %al,%al
 84c170d:	74 50                	je     84c175f <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x14fb>
 84c170f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1715:	89 04 24             	mov    %eax,(%esp)
 84c1718:	e8 c9 a1 c0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84c171d:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 84c1722:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84c1728:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c172c:	89 04 24             	mov    %eax,(%esp)
 84c172f:	e8 90 67 ff ff       	call   84b7ec4 <_ZNK20CGlobalEffectManager20makeGlobalEffectInfoER11PacketGuard>
 84c1734:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c173b:	00 
 84c173c:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1742:	89 04 24             	mov    %eax,(%esp)
 84c1745:	e8 0e a2 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c174a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1750:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1754:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1757:	89 04 24             	mov    %eax,(%esp)
 84c175a:	e8 5b 6e 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c175f:	e8 2a aa c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c1764:	89 04 24             	mov    %eax,(%esp)
 84c1767:	e8 80 77 dd ff       	call   8298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>
 84c176c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84c176f:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 84c1773:	0f 84 65 02 00 00    	je     84c19de <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x177a>
 84c1779:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84c177c:	89 04 24             	mov    %eax,(%esp)
 84c177f:	e8 fe b9 02 00       	call   84ed182 <_ZN27CSharedServerMessageManager18IsSetServerMessageEv>
 84c1784:	84 c0                	test   %al,%al
 84c1786:	0f 84 22 02 00 00    	je     84c19ae <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x174a>
 84c178c:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84c178f:	89 04 24             	mov    %eax,(%esp)
 84c1792:	e8 f7 b9 02 00       	call   84ed18e <_ZN27CSharedServerMessageManager19GetCurServerMessageEv>
 84c1797:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c179a:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84c179e:	0f 84 14 02 00 00    	je     84c19b8 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1754>
 84c17a4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c17a7:	0f b6 10             	movzbl (%eax),%edx
 84c17aa:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c17ad:	88 90 38 2d 00 00    	mov    %dl,0x2d38(%eax)
 84c17b3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c17b6:	0f b6 00             	movzbl (%eax),%eax
 84c17b9:	0f b6 d8             	movzbl %al,%ebx
 84c17bc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c17bf:	83 c0 04             	add    $0x4,%eax
 84c17c2:	89 04 24             	mov    %eax,(%esp)
 84c17c5:	e8 10 fc 02 00       	call   84f13da <_ZNKSt6vectorI16stSERVER_MESSAGESaIS0_EE4sizeEv>
 84c17ca:	39 c3                	cmp    %eax,%ebx
 84c17cc:	0f 94 c0             	sete   %al
 84c17cf:	84 c0                	test   %al,%al
 84c17d1:	0f 84 e1 01 00 00    	je     84c19b8 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1754>
 84c17d7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c17da:	8d 50 04             	lea    0x4(%eax),%edx
 84c17dd:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84c17e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c17e4:	89 04 24             	mov    %eax,(%esp)
 84c17e7:	e8 10 fc 02 00       	call   84f13fc <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE5beginEv>
 84c17ec:	83 ec 04             	sub    $0x4,%esp
 84c17ef:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84c17f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c17f6:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c17fc:	89 04 24             	mov    %eax,(%esp)
 84c17ff:	e8 1c fc 02 00       	call   84f1420 <_ZN9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 84c1804:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c1807:	8d 50 04             	lea    0x4(%eax),%edx
 84c180a:	8d 45 90             	lea    -0x70(%ebp),%eax
 84c180d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c1811:	89 04 24             	mov    %eax,(%esp)
 84c1814:	e8 21 fc 02 00       	call   84f143a <_ZNSt6vectorI16stSERVER_MESSAGESaIS0_EE3endEv>
 84c1819:	83 ec 04             	sub    $0x4,%esp
 84c181c:	8d 45 90             	lea    -0x70(%ebp),%eax
 84c181f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1823:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84c1829:	89 04 24             	mov    %eax,(%esp)
 84c182c:	e8 ef fb 02 00       	call   84f1420 <_ZN9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 84c1831:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84c1838:	e9 4f 01 00 00       	jmp    84c198c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1728>
 84c183d:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84c1840:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c1846:	89 04 24             	mov    %eax,(%esp)
 84c1849:	e8 72 fc 02 00       	call   84f14c0 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 84c184e:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84c1852:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c1855:	6b d3 58             	imul   $0x58,%ebx,%edx
 84c1858:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84c185b:	81 c2 3d 2d 00 00    	add    $0x2d3d,%edx
 84c1861:	88 02                	mov    %al,(%edx)
 84c1863:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84c1866:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c186c:	89 04 24             	mov    %eax,(%esp)
 84c186f:	e8 4c fc 02 00       	call   84f14c0 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 84c1874:	0f b6 00             	movzbl (%eax),%eax
 84c1877:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c187a:	6b d3 58             	imul   $0x58,%ebx,%edx
 84c187d:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84c1880:	81 c2 3c 2d 00 00    	add    $0x2d3c,%edx
 84c1886:	88 02                	mov    %al,(%edx)
 84c1888:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84c188b:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c1891:	89 04 24             	mov    %eax,(%esp)
 84c1894:	e8 27 fc 02 00       	call   84f14c0 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 84c1899:	8b 40 3c             	mov    0x3c(%eax),%eax
 84c189c:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c189f:	6b d3 58             	imul   $0x58,%ebx,%edx
 84c18a2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84c18a5:	81 c2 60 2d 00 00    	add    $0x2d60,%edx
 84c18ab:	89 42 18             	mov    %eax,0x18(%edx)
 84c18ae:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c18b4:	89 04 24             	mov    %eax,(%esp)
 84c18b7:	e8 04 fc 02 00       	call   84f14c0 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 84c18bc:	83 c0 40             	add    $0x40,%eax
 84c18bf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c18c2:	6b d2 58             	imul   $0x58,%edx,%edx
 84c18c5:	81 c2 70 2d 00 00    	add    $0x2d70,%edx
 84c18cb:	03 55 a0             	add    -0x60(%ebp),%edx
 84c18ce:	83 c2 0c             	add    $0xc,%edx
 84c18d1:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 84c18d8:	00 
 84c18d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c18dd:	89 14 24             	mov    %edx,(%esp)
 84c18e0:	e8 eb bf bb ff       	call   807d8d0 <strncpy@plt>
 84c18e5:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84c18e8:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c18ee:	89 04 24             	mov    %eax,(%esp)
 84c18f1:	e8 ca fb 02 00       	call   84f14c0 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 84c18f6:	8b 40 04             	mov    0x4(%eax),%eax
 84c18f9:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c18fc:	6b d3 58             	imul   $0x58,%ebx,%edx
 84c18ff:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84c1902:	81 c2 30 2d 00 00    	add    $0x2d30,%edx
 84c1908:	89 42 10             	mov    %eax,0x10(%edx)
 84c190b:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c1911:	89 04 24             	mov    %eax,(%esp)
 84c1914:	e8 a7 fb 02 00       	call   84f14c0 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 84c1919:	83 c0 08             	add    $0x8,%eax
 84c191c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c191f:	6b d2 58             	imul   $0x58,%edx,%edx
 84c1922:	81 c2 30 2d 00 00    	add    $0x2d30,%edx
 84c1928:	03 55 a0             	add    -0x60(%ebp),%edx
 84c192b:	83 c2 14             	add    $0x14,%edx
 84c192e:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 84c1935:	00 
 84c1936:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c193a:	89 14 24             	mov    %edx,(%esp)
 84c193d:	e8 8e bf bb ff       	call   807d8d0 <strncpy@plt>
 84c1942:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84c1945:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c194b:	89 04 24             	mov    %eax,(%esp)
 84c194e:	e8 6d fb 02 00       	call   84f14c0 <_ZNK9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEdeEv>
 84c1953:	8b 40 54             	mov    0x54(%eax),%eax
 84c1956:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84c1959:	6b d3 58             	imul   $0x58,%ebx,%edx
 84c195c:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84c195f:	81 c2 80 2d 00 00    	add    $0x2d80,%edx
 84c1965:	89 42 10             	mov    %eax,0x10(%edx)
 84c1968:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84c196c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84c196f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c1976:	00 
 84c1977:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 84c197d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c1981:	89 04 24             	mov    %eax,(%esp)
 84c1984:	e8 03 fb 02 00       	call   84f148c <_ZN9__gnu_cxx17__normal_iteratorIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEppEi>
 84c1989:	83 ec 04             	sub    $0x4,%esp
 84c198c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84c1992:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1996:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 84c199c:	89 04 24             	mov    %eax,(%esp)
 84c199f:	e8 bc fa 02 00       	call   84f1460 <_ZN9__gnu_cxxneIPK16stSERVER_MESSAGESt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84c19a4:	84 c0                	test   %al,%al
 84c19a6:	0f 85 91 fe ff ff    	jne    84c183d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x15d9>
 84c19ac:	eb 0a                	jmp    84c19b8 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1754>
 84c19ae:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c19b1:	c6 80 38 2d 00 00 00 	movb   $0x0,0x2d38(%eax)
 84c19b8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c19bb:	05 38 2d 00 00       	add    $0x2d38,%eax
 84c19c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c19c7:	00 
 84c19c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c19cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c19cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c19d3:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84c19d6:	89 04 24             	mov    %eax,(%esp)
 84c19d9:	e8 fa ee 13 00       	call   86008d8 <_ZN27CSharedServerMessageManager21SendServerMessageInfoEP5CUserP24SIG_EVENT_SERVER_MESSAGEc>
 84c19de:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c19e1:	05 38 26 00 00       	add    $0x2638,%eax
 84c19e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c19ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c19ed:	89 04 24             	mov    %eax,(%esp)
 84c19f0:	e8 03 6f 1c 00       	call   86888f8 <_ZN5CUser12SetLimitInfoEP19SIG_LIMIT_ITEM_INFO>
 84c19f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c19f8:	89 04 24             	mov    %eax,(%esp)
 84c19fb:	e8 2c fb 1b 00       	call   868152c <_ZN5CUser23SendLoginToPCRoomServerEv>
 84c1a00:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 84c1a07:	00 
 84c1a08:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1a0b:	89 04 24             	mov    %eax,(%esp)
 84c1a0e:	e8 71 bb c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84c1a13:	8b 10                	mov    (%eax),%edx
 84c1a15:	83 c2 04             	add    $0x4,%edx
 84c1a18:	8b 0a                	mov    (%edx),%ecx
 84c1a1a:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c1a1d:	81 c2 1f cf 00 00    	add    $0xcf1f,%edx
 84c1a23:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c1a27:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c1a2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c1a2e:	89 04 24             	mov    %eax,(%esp)
 84c1a31:	ff d1                	call   *%ecx
 84c1a33:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1a36:	89 04 24             	mov    %eax,(%esp)
 84c1a39:	e8 56 de d6 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 84c1a3e:	85 c0                	test   %eax,%eax
 84c1a40:	75 10                	jne    84c1a52 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x17ee>
 84c1a42:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1a45:	89 04 24             	mov    %eax,(%esp)
 84c1a48:	e8 d9 35 eb ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 84c1a4d:	83 f8 ff             	cmp    $0xffffffff,%eax
 84c1a50:	75 07                	jne    84c1a59 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x17f5>
 84c1a52:	b8 01 00 00 00       	mov    $0x1,%eax
 84c1a57:	eb 05                	jmp    84c1a5e <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x17fa>
 84c1a59:	b8 00 00 00 00       	mov    $0x0,%eax
 84c1a5e:	84 c0                	test   %al,%al
 84c1a60:	0f 84 ed 00 00 00    	je     84c1b53 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x18ef>
 84c1a66:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c1a6b:	c7 44 24 08 d7 0e 00 	movl   $0xed7,0x8(%esp)
 84c1a72:	00 
 84c1a73:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c1a7a:	08 
 84c1a7b:	89 04 24             	mov    %eax,(%esp)
 84c1a7e:	e8 03 e0 dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c1a83:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c1a8a:	00 
 84c1a8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1a8f:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84c1a95:	89 04 24             	mov    %eax,(%esp)
 84c1a98:	e8 89 71 c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c1a9d:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84c1aa3:	89 04 24             	mov    %eax,(%esp)
 84c1aa6:	e8 9b 71 c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1aab:	c7 44 24 04 80 01 00 	movl   $0x180,0x4(%esp)
 84c1ab2:	00 
 84c1ab3:	89 04 24             	mov    %eax,(%esp)
 84c1ab6:	e8 9b 71 c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1abb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1abe:	89 04 24             	mov    %eax,(%esp)
 84c1ac1:	e8 d0 71 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c1ac6:	89 c3                	mov    %eax,%ebx
 84c1ac8:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84c1ace:	89 04 24             	mov    %eax,(%esp)
 84c1ad1:	e8 70 71 c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1ad6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1ada:	89 04 24             	mov    %eax,(%esp)
 84c1add:	e8 74 71 c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1ae2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1ae5:	89 04 24             	mov    %eax,(%esp)
 84c1ae8:	e8 61 a1 c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c1aed:	89 c3                	mov    %eax,%ebx
 84c1aef:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84c1af5:	89 04 24             	mov    %eax,(%esp)
 84c1af8:	e8 49 71 c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1afd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1b01:	89 04 24             	mov    %eax,(%esp)
 84c1b04:	e8 89 07 c2 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84c1b09:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c1b0e:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 84c1b14:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c1b18:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c1b1f:	00 
 84c1b20:	89 04 24             	mov    %eax,(%esp)
 84c1b23:	e8 b6 f4 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c1b28:	eb 1b                	jmp    84c1b45 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x18e1>
 84c1b2a:	89 d3                	mov    %edx,%ebx
 84c1b2c:	89 c6                	mov    %eax,%esi
 84c1b2e:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84c1b34:	89 04 24             	mov    %eax,(%esp)
 84c1b37:	e8 96 ad 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c1b3c:	89 f0                	mov    %esi,%eax
 84c1b3e:	89 da                	mov    %ebx,%edx
 84c1b40:	e9 c8 0a 00 00       	jmp    84c260d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23a9>
 84c1b45:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 84c1b4b:	89 04 24             	mov    %eax,(%esp)
 84c1b4e:	e8 7f ad 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c1b53:	e8 43 a6 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c1b58:	89 04 24             	mov    %eax,(%esp)
 84c1b5b:	e8 46 84 cb ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84c1b60:	89 04 24             	mov    %eax,(%esp)
 84c1b63:	e8 14 7e 02 00       	call   84e997c <_ZNK20CItemLimitEditionMgr5emptyEv>
 84c1b68:	83 f0 01             	xor    $0x1,%eax
 84c1b6b:	84 c0                	test   %al,%al
 84c1b6d:	0f 84 8c 00 00 00    	je     84c1bff <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x199b>
 84c1b73:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1b79:	89 04 24             	mov    %eax,(%esp)
 84c1b7c:	e8 65 9d c0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84c1b81:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 84c1b88:	00 
 84c1b89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c1b90:	00 
 84c1b91:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1b97:	89 04 24             	mov    %eax,(%esp)
 84c1b9a:	e8 5d 9d c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c1b9f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c1ba6:	00 
 84c1ba7:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1bad:	89 04 24             	mov    %eax,(%esp)
 84c1bb0:	e8 6b 9d c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c1bb5:	e8 e1 a5 c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c1bba:	89 04 24             	mov    %eax,(%esp)
 84c1bbd:	e8 e4 83 cb ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84c1bc2:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 84c1bc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c1bcc:	89 04 24             	mov    %eax,(%esp)
 84c1bcf:	e8 f6 16 05 00       	call   85132ca <_ZNK20CItemLimitEditionMgr24makeItemLimitEditionInfoER11PacketGuard>
 84c1bd4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c1bdb:	00 
 84c1bdc:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1be2:	89 04 24             	mov    %eax,(%esp)
 84c1be5:	e8 6e 9d c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c1bea:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c1bf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1bf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1bf7:	89 04 24             	mov    %eax,(%esp)
 84c1bfa:	e8 bb 69 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c1bff:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c1c04:	c7 44 24 08 20 0f 00 	movl   $0xf20,0x8(%esp)
 84c1c0b:	00 
 84c1c0c:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c1c13:	08 
 84c1c14:	89 04 24             	mov    %eax,(%esp)
 84c1c17:	e8 6a de dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c1c1c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c1c23:	00 
 84c1c24:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1c28:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84c1c2e:	89 04 24             	mov    %eax,(%esp)
 84c1c31:	e8 f0 6f c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c1c36:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84c1c3c:	89 04 24             	mov    %eax,(%esp)
 84c1c3f:	e8 02 70 c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1c44:	c7 44 24 04 a7 01 00 	movl   $0x1a7,0x4(%esp)
 84c1c4b:	00 
 84c1c4c:	89 04 24             	mov    %eax,(%esp)
 84c1c4f:	e8 02 70 c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1c54:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1c57:	89 04 24             	mov    %eax,(%esp)
 84c1c5a:	e8 37 70 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c1c5f:	89 c3                	mov    %eax,%ebx
 84c1c61:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84c1c67:	89 04 24             	mov    %eax,(%esp)
 84c1c6a:	e8 d7 6f c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1c6f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1c73:	89 04 24             	mov    %eax,(%esp)
 84c1c76:	e8 db 6f c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1c7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1c7e:	89 04 24             	mov    %eax,(%esp)
 84c1c81:	e8 c8 9f c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c1c86:	89 c3                	mov    %eax,%ebx
 84c1c88:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84c1c8e:	89 04 24             	mov    %eax,(%esp)
 84c1c91:	e8 b0 6f c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1c96:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1c9a:	89 04 24             	mov    %eax,(%esp)
 84c1c9d:	e8 f0 05 c2 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84c1ca2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c1ca7:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 84c1cad:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c1cb1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c1cb8:	00 
 84c1cb9:	89 04 24             	mov    %eax,(%esp)
 84c1cbc:	e8 1d f3 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c1cc1:	eb 1b                	jmp    84c1cde <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1a7a>
 84c1cc3:	89 d3                	mov    %edx,%ebx
 84c1cc5:	89 c6                	mov    %eax,%esi
 84c1cc7:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84c1ccd:	89 04 24             	mov    %eax,(%esp)
 84c1cd0:	e8 fd ab 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c1cd5:	89 f0                	mov    %esi,%eax
 84c1cd7:	89 da                	mov    %ebx,%edx
 84c1cd9:	e9 2f 09 00 00       	jmp    84c260d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23a9>
 84c1cde:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 84c1ce4:	89 04 24             	mov    %eax,(%esp)
 84c1ce7:	e8 e6 ab 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c1cec:	e8 b6 86 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c1cf1:	89 04 24             	mov    %eax,(%esp)
 84c1cf4:	e8 25 f6 c2 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84c1cf9:	84 c0                	test   %al,%al
 84c1cfb:	0f 84 15 01 00 00    	je     84c1e16 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1bb2>
 84c1d01:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c1d06:	c7 44 24 08 2a 0f 00 	movl   $0xf2a,0x8(%esp)
 84c1d0d:	00 
 84c1d0e:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c1d15:	08 
 84c1d16:	89 04 24             	mov    %eax,(%esp)
 84c1d19:	e8 68 dd dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c1d1e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c1d25:	00 
 84c1d26:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1d2a:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c1d30:	89 04 24             	mov    %eax,(%esp)
 84c1d33:	e8 ee 6e c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c1d38:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c1d3e:	89 04 24             	mov    %eax,(%esp)
 84c1d41:	e8 00 6f c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1d46:	c7 44 24 04 d5 01 00 	movl   $0x1d5,0x4(%esp)
 84c1d4d:	00 
 84c1d4e:	89 04 24             	mov    %eax,(%esp)
 84c1d51:	e8 00 6f c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1d56:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1d59:	89 04 24             	mov    %eax,(%esp)
 84c1d5c:	e8 35 6f c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c1d61:	89 c3                	mov    %eax,%ebx
 84c1d63:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c1d69:	89 04 24             	mov    %eax,(%esp)
 84c1d6c:	e8 d5 6e c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1d71:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1d75:	89 04 24             	mov    %eax,(%esp)
 84c1d78:	e8 d9 6e c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1d7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1d80:	89 04 24             	mov    %eax,(%esp)
 84c1d83:	e8 08 9f c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c1d88:	0f be d8             	movsbl %al,%ebx
 84c1d8b:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c1d91:	89 04 24             	mov    %eax,(%esp)
 84c1d94:	e8 ad 6e c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1d99:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1d9d:	89 04 24             	mov    %eax,(%esp)
 84c1da0:	e8 5f f2 c3 ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 84c1da5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1da8:	89 04 24             	mov    %eax,(%esp)
 84c1dab:	e8 9e 9e c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c1db0:	89 c3                	mov    %eax,%ebx
 84c1db2:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c1db8:	89 04 24             	mov    %eax,(%esp)
 84c1dbb:	e8 86 6e c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1dc0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1dc4:	89 04 24             	mov    %eax,(%esp)
 84c1dc7:	e8 c6 04 c2 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84c1dcc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c1dd1:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 84c1dd7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c1ddb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c1de2:	00 
 84c1de3:	89 04 24             	mov    %eax,(%esp)
 84c1de6:	e8 f3 f1 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c1deb:	eb 1b                	jmp    84c1e08 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1ba4>
 84c1ded:	89 d3                	mov    %edx,%ebx
 84c1def:	89 c6                	mov    %eax,%esi
 84c1df1:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c1df7:	89 04 24             	mov    %eax,(%esp)
 84c1dfa:	e8 d3 aa 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c1dff:	89 f0                	mov    %esi,%eax
 84c1e01:	89 da                	mov    %ebx,%edx
 84c1e03:	e9 05 08 00 00       	jmp    84c260d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23a9>
 84c1e08:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 84c1e0e:	89 04 24             	mov    %eax,(%esp)
 84c1e11:	e8 bc aa 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c1e16:	e8 8c 85 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c1e1b:	89 04 24             	mov    %eax,(%esp)
 84c1e1e:	e8 fb f4 c2 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84c1e23:	84 c0                	test   %al,%al
 84c1e25:	0f 84 15 01 00 00    	je     84c1f40 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1cdc>
 84c1e2b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c1e30:	c7 44 24 08 36 0f 00 	movl   $0xf36,0x8(%esp)
 84c1e37:	00 
 84c1e38:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c1e3f:	08 
 84c1e40:	89 04 24             	mov    %eax,(%esp)
 84c1e43:	e8 3e dc dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c1e48:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c1e4f:	00 
 84c1e50:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1e54:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84c1e5a:	89 04 24             	mov    %eax,(%esp)
 84c1e5d:	e8 c4 6d c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c1e62:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84c1e68:	89 04 24             	mov    %eax,(%esp)
 84c1e6b:	e8 d6 6d c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1e70:	c7 44 24 04 e0 01 00 	movl   $0x1e0,0x4(%esp)
 84c1e77:	00 
 84c1e78:	89 04 24             	mov    %eax,(%esp)
 84c1e7b:	e8 d6 6d c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1e80:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1e83:	89 04 24             	mov    %eax,(%esp)
 84c1e86:	e8 0b 6e c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c1e8b:	89 c3                	mov    %eax,%ebx
 84c1e8d:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84c1e93:	89 04 24             	mov    %eax,(%esp)
 84c1e96:	e8 ab 6d c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1e9b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1e9f:	89 04 24             	mov    %eax,(%esp)
 84c1ea2:	e8 af 6d c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1ea7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1eaa:	89 04 24             	mov    %eax,(%esp)
 84c1ead:	e8 de 9d c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c1eb2:	0f be d8             	movsbl %al,%ebx
 84c1eb5:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84c1ebb:	89 04 24             	mov    %eax,(%esp)
 84c1ebe:	e8 83 6d c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1ec3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1ec7:	89 04 24             	mov    %eax,(%esp)
 84c1eca:	e8 35 f1 c3 ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 84c1ecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1ed2:	89 04 24             	mov    %eax,(%esp)
 84c1ed5:	e8 74 9d c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c1eda:	89 c3                	mov    %eax,%ebx
 84c1edc:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84c1ee2:	89 04 24             	mov    %eax,(%esp)
 84c1ee5:	e8 5c 6d c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1eea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1eee:	89 04 24             	mov    %eax,(%esp)
 84c1ef1:	e8 9c 03 c2 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84c1ef6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c1efb:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 84c1f01:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c1f05:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c1f0c:	00 
 84c1f0d:	89 04 24             	mov    %eax,(%esp)
 84c1f10:	e8 c9 f0 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c1f15:	eb 1b                	jmp    84c1f32 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1cce>
 84c1f17:	89 d3                	mov    %edx,%ebx
 84c1f19:	89 c6                	mov    %eax,%esi
 84c1f1b:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84c1f21:	89 04 24             	mov    %eax,(%esp)
 84c1f24:	e8 a9 a9 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c1f29:	89 f0                	mov    %esi,%eax
 84c1f2b:	89 da                	mov    %ebx,%edx
 84c1f2d:	e9 db 06 00 00       	jmp    84c260d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23a9>
 84c1f32:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84c1f38:	89 04 24             	mov    %eax,(%esp)
 84c1f3b:	e8 92 a9 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c1f40:	e8 62 84 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c1f45:	89 04 24             	mov    %eax,(%esp)
 84c1f48:	e8 d3 4b c5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c1f4d:	83 f8 0e             	cmp    $0xe,%eax
 84c1f50:	0f 94 c0             	sete   %al
 84c1f53:	84 c0                	test   %al,%al
 84c1f55:	0f 84 41 02 00 00    	je     84c219c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1f38>
 84c1f5b:	e8 88 df 09 00       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 84c1f60:	3c 01                	cmp    $0x1,%al
 84c1f62:	0f 94 c0             	sete   %al
 84c1f65:	84 c0                	test   %al,%al
 84c1f67:	0f 84 1a 01 00 00    	je     84c2087 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1e23>
 84c1f6d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c1f72:	c7 44 24 08 44 0f 00 	movl   $0xf44,0x8(%esp)
 84c1f79:	00 
 84c1f7a:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c1f81:	08 
 84c1f82:	89 04 24             	mov    %eax,(%esp)
 84c1f85:	e8 fc da dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c1f8a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c1f91:	00 
 84c1f92:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c1f96:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c1f9c:	89 04 24             	mov    %eax,(%esp)
 84c1f9f:	e8 82 6c c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c1fa4:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c1faa:	89 04 24             	mov    %eax,(%esp)
 84c1fad:	e8 94 6c c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1fb2:	c7 44 24 04 e6 01 00 	movl   $0x1e6,0x4(%esp)
 84c1fb9:	00 
 84c1fba:	89 04 24             	mov    %eax,(%esp)
 84c1fbd:	e8 94 6c c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1fc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1fc5:	89 04 24             	mov    %eax,(%esp)
 84c1fc8:	e8 c9 6c c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c1fcd:	89 c3                	mov    %eax,%ebx
 84c1fcf:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c1fd5:	89 04 24             	mov    %eax,(%esp)
 84c1fd8:	e8 69 6c c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c1fdd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c1fe1:	89 04 24             	mov    %eax,(%esp)
 84c1fe4:	e8 6d 6c c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c1fe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c1fec:	89 04 24             	mov    %eax,(%esp)
 84c1fef:	e8 9c 9c c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c1ff4:	0f be d8             	movsbl %al,%ebx
 84c1ff7:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c1ffd:	89 04 24             	mov    %eax,(%esp)
 84c2000:	e8 41 6c c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c2005:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c2009:	89 04 24             	mov    %eax,(%esp)
 84c200c:	e8 f3 ef c3 ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 84c2011:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2014:	89 04 24             	mov    %eax,(%esp)
 84c2017:	e8 32 9c c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c201c:	89 c3                	mov    %eax,%ebx
 84c201e:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c2024:	89 04 24             	mov    %eax,(%esp)
 84c2027:	e8 1a 6c c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c202c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c2030:	89 04 24             	mov    %eax,(%esp)
 84c2033:	e8 5a 02 c2 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84c2038:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c203d:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 84c2043:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c2047:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c204e:	00 
 84c204f:	89 04 24             	mov    %eax,(%esp)
 84c2052:	e8 87 ef 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c2057:	eb 1b                	jmp    84c2074 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1e10>
 84c2059:	89 d3                	mov    %edx,%ebx
 84c205b:	89 c6                	mov    %eax,%esi
 84c205d:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c2063:	89 04 24             	mov    %eax,(%esp)
 84c2066:	e8 67 a8 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c206b:	89 f0                	mov    %esi,%eax
 84c206d:	89 da                	mov    %ebx,%edx
 84c206f:	e9 99 05 00 00       	jmp    84c260d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23a9>
 84c2074:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 84c207a:	89 04 24             	mov    %eax,(%esp)
 84c207d:	e8 50 a8 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c2082:	e9 15 01 00 00       	jmp    84c219c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1f38>
 84c2087:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84c208c:	c7 44 24 08 4d 0f 00 	movl   $0xf4d,0x8(%esp)
 84c2093:	00 
 84c2094:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c209b:	08 
 84c209c:	89 04 24             	mov    %eax,(%esp)
 84c209f:	e8 e2 d9 dc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84c20a4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c20ab:	00 
 84c20ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c20b0:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84c20b6:	89 04 24             	mov    %eax,(%esp)
 84c20b9:	e8 68 6b c0 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84c20be:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84c20c4:	89 04 24             	mov    %eax,(%esp)
 84c20c7:	e8 7a 6b c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c20cc:	c7 44 24 04 e8 01 00 	movl   $0x1e8,0x4(%esp)
 84c20d3:	00 
 84c20d4:	89 04 24             	mov    %eax,(%esp)
 84c20d7:	e8 7a 6b c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c20dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c20df:	89 04 24             	mov    %eax,(%esp)
 84c20e2:	e8 af 6b c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c20e7:	89 c3                	mov    %eax,%ebx
 84c20e9:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84c20ef:	89 04 24             	mov    %eax,(%esp)
 84c20f2:	e8 4f 6b c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c20f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c20fb:	89 04 24             	mov    %eax,(%esp)
 84c20fe:	e8 53 6b c0 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84c2103:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2106:	89 04 24             	mov    %eax,(%esp)
 84c2109:	e8 82 9b c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c210e:	0f be d8             	movsbl %al,%ebx
 84c2111:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84c2117:	89 04 24             	mov    %eax,(%esp)
 84c211a:	e8 27 6b c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c211f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c2123:	89 04 24             	mov    %eax,(%esp)
 84c2126:	e8 d9 ee c3 ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 84c212b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c212e:	89 04 24             	mov    %eax,(%esp)
 84c2131:	e8 18 9b c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c2136:	89 c3                	mov    %eax,%ebx
 84c2138:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84c213e:	89 04 24             	mov    %eax,(%esp)
 84c2141:	e8 00 6b c0 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84c2146:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c214a:	89 04 24             	mov    %eax,(%esp)
 84c214d:	e8 40 01 c2 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84c2152:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84c2157:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 84c215d:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c2161:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84c2168:	00 
 84c2169:	89 04 24             	mov    %eax,(%esp)
 84c216c:	e8 6d ee 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84c2171:	eb 1b                	jmp    84c218e <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1f2a>
 84c2173:	89 d3                	mov    %edx,%ebx
 84c2175:	89 c6                	mov    %eax,%esi
 84c2177:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84c217d:	89 04 24             	mov    %eax,(%esp)
 84c2180:	e8 4d a7 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c2185:	89 f0                	mov    %esi,%eax
 84c2187:	89 da                	mov    %ebx,%edx
 84c2189:	e9 7f 04 00 00       	jmp    84c260d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23a9>
 84c218e:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 84c2194:	89 04 24             	mov    %eax,(%esp)
 84c2197:	e8 36 a7 15 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84c219c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c219f:	89 04 24             	mov    %eax,(%esp)
 84c21a2:	e8 51 03 1a 00       	call   86624f8 <_ZN5CUser15send_RedeemInfoEv>
 84c21a7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84c21ab:	74 14                	je     84c21c1 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x1f5d>
 84c21ad:	a1 84 f7 41 09       	mov    0x941f784,%eax
 84c21b2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c21b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c21b9:	89 04 24             	mov    %eax,(%esp)
 84c21bc:	e8 f7 3a c6 ff       	call   8125cb8 <_ZN21CDailyScheduleManager29CheckAndSendToOneUserScheduleER5CUser>
 84c21c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c21c4:	89 04 24             	mov    %eax,(%esp)
 84c21c7:	e8 5c 03 1a 00       	call   8662528 <_ZN5CUser16send_MissionListEv>
 84c21cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c21cf:	89 04 24             	mov    %eax,(%esp)
 84c21d2:	e8 ed fc 1c 00       	call   8691ec4 <_ZN5CUser17processReturnUserEv>
 84c21d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c21da:	89 04 24             	mov    %eax,(%esp)
 84c21dd:	e8 b6 01 c6 ff       	call   8122398 <_ZN8APSystem9CUserProc19SendActionListStateEP5CUser>
 84c21e2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c21e5:	0f b6 80 ae c9 00 00 	movzbl 0xc9ae(%eax),%eax
 84c21ec:	0f b6 c0             	movzbl %al,%eax
 84c21ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c21f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c21f6:	89 04 24             	mov    %eax,(%esp)
 84c21f9:	e8 18 ae 02 00       	call   84ed016 <_ZN5CUser26setFlagPresentAvengerTitleEb>
 84c21fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2201:	89 04 24             	mov    %eax,(%esp)
 84c2204:	e8 49 93 1c 00       	call   868b552 <_ZN5CUser25VerifyPresentAvengerTitleEv>
 84c2209:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c2210:	e8 89 9a c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c2215:	89 c3                	mov    %eax,%ebx
 84c2217:	8d 45 9e             	lea    -0x62(%ebp),%eax
 84c221a:	89 04 24             	mov    %eax,(%esp)
 84c221d:	e8 ae de 21 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84c2222:	8d 45 9e             	lea    -0x62(%ebp),%eax
 84c2225:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c2229:	c7 44 24 04 93 71 c8 	movl   $0x8c87193,0x4(%esp)
 84c2230:	08 
 84c2231:	8d 45 98             	lea    -0x68(%ebp),%eax
 84c2234:	89 04 24             	mov    %eax,(%esp)
 84c2237:	e8 f4 53 24 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84c223c:	e8 b9 5c cd ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 84c2241:	8d 55 98             	lea    -0x68(%ebp),%edx
 84c2244:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c2248:	89 04 24             	mov    %eax,(%esp)
 84c224b:	e8 5c 60 cc ff       	call   81882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>
 84c2250:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c2254:	c7 44 24 04 8e 00 00 	movl   $0x8e,0x4(%esp)
 84c225b:	00 
 84c225c:	89 04 24             	mov    %eax,(%esp)
 84c225f:	e8 4c 34 cd ff       	call   81956b0 <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj>
 84c2264:	89 c3                	mov    %eax,%ebx
 84c2266:	8d 45 98             	lea    -0x68(%ebp),%eax
 84c2269:	89 04 24             	mov    %eax,(%esp)
 84c226c:	e8 6f 59 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c2271:	eb 2d                	jmp    84c22a0 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x203c>
 84c2273:	89 d3                	mov    %edx,%ebx
 84c2275:	89 c6                	mov    %eax,%esi
 84c2277:	8d 45 98             	lea    -0x68(%ebp),%eax
 84c227a:	89 04 24             	mov    %eax,(%esp)
 84c227d:	e8 5e 59 24 00       	call   8707be0 <_ZNSsD1Ev>
 84c2282:	89 f0                	mov    %esi,%eax
 84c2284:	89 da                	mov    %ebx,%edx
 84c2286:	eb 00                	jmp    84c2288 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x2024>
 84c2288:	89 d3                	mov    %edx,%ebx
 84c228a:	89 c6                	mov    %eax,%esi
 84c228c:	8d 45 9e             	lea    -0x62(%ebp),%eax
 84c228f:	89 04 24             	mov    %eax,(%esp)
 84c2292:	e8 59 de 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c2297:	89 f0                	mov    %esi,%eax
 84c2299:	89 da                	mov    %ebx,%edx
 84c229b:	e9 6d 03 00 00       	jmp    84c260d <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23a9>
 84c22a0:	8d 45 9e             	lea    -0x62(%ebp),%eax
 84c22a3:	89 04 24             	mov    %eax,(%esp)
 84c22a6:	e8 45 de 21 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84c22ab:	84 db                	test   %bl,%bl
 84c22ad:	74 33                	je     84c22e2 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x207e>
 84c22af:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 84c22b5:	89 04 24             	mov    %eax,(%esp)
 84c22b8:	e8 95 43 cc ff       	call   8186652 <_ZN22AradServerStateMessageC1Ev>
 84c22bd:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 84c22c3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84c22c7:	c7 44 24 08 8e 00 00 	movl   $0x8e,0x8(%esp)
 84c22ce:	00 
 84c22cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c22d6:	00 
 84c22d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c22da:	89 04 24             	mov    %eax,(%esp)
 84c22dd:	e8 fb 55 cd ff       	call   81978dd <_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage>
 84c22e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c22e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c22e9:	8b 45 08             	mov    0x8(%ebp),%eax
 84c22ec:	89 04 24             	mov    %eax,(%esp)
 84c22ef:	e8 7a 03 00 00       	call   84c266e <_ZN13Inter_LoadEtc18RequestDBEventAradEP5CUser>
 84c22f4:	e8 a2 9e c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c22f9:	89 04 24             	mov    %eax,(%esp)
 84c22fc:	e8 61 e8 c4 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84c2301:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c2304:	8b 92 bc c9 00 00    	mov    0xc9bc(%edx),%edx
 84c230a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c230e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c2311:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c2315:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 84c231c:	00 
 84c231d:	89 04 24             	mov    %eax,(%esp)
 84c2320:	e8 bb 9a c4 ff       	call   810bde0 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE>
 84c2325:	e8 71 9e c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c232a:	89 04 24             	mov    %eax,(%esp)
 84c232d:	e8 30 e8 c4 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84c2332:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c2335:	8b 92 bc c9 00 00    	mov    0xc9bc(%edx),%edx
 84c233b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c233f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c2342:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c2346:	c7 44 24 04 92 01 00 	movl   $0x192,0x4(%esp)
 84c234d:	00 
 84c234e:	89 04 24             	mov    %eax,(%esp)
 84c2351:	e8 8a 9a c4 ff       	call   810bde0 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE>
 84c2356:	e8 40 9e c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c235b:	89 04 24             	mov    %eax,(%esp)
 84c235e:	e8 ff e7 c4 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84c2363:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84c2366:	8b 92 bc c9 00 00    	mov    0xc9bc(%edx),%edx
 84c236c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c2370:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c2373:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c2377:	c7 44 24 04 9c 01 00 	movl   $0x19c,0x4(%esp)
 84c237e:	00 
 84c237f:	89 04 24             	mov    %eax,(%esp)
 84c2382:	e8 59 9a c4 ff       	call   810bde0 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE>
 84c2387:	e8 0f 9e c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c238c:	8b 80 bc 8c 00 00    	mov    0x8cbc(%eax),%eax
 84c2392:	89 04 24             	mov    %eax,(%esp)
 84c2395:	e8 dc 0c 05 00       	call   8513076 <_ZNK9CItemShop18GetOneADayItemListEv>
 84c239a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c239e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c23a1:	89 04 24             	mov    %eax,(%esp)
 84c23a4:	e8 41 87 1c 00       	call   868aaea <_ZN5CUser24SendOneADayItemShopIndexERKSt6vectorISt4pairIiiESaIS2_EE>
 84c23a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c23ac:	89 04 24             	mov    %eax,(%esp)
 84c23af:	e8 2a 9b 02 00       	call   84ebede <_ZN15CUserCharacInfo27reset_is_end_lethe_at_loginEv>
 84c23b4:	e8 e2 9d c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c23b9:	89 04 24             	mov    %eax,(%esp)
 84c23bc:	e8 a1 e7 c4 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84c23c1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c23c8:	00 
 84c23c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c23cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c23d0:	89 04 24             	mov    %eax,(%esp)
 84c23d3:	e8 36 a0 c4 ff       	call   810c40e <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb>
 84c23d8:	e8 be 9d c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c23dd:	89 04 24             	mov    %eax,(%esp)
 84c23e0:	e8 7d e7 c4 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84c23e5:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c23e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c23ec:	89 04 24             	mov    %eax,(%esp)
 84c23ef:	e8 38 a7 c4 ff       	call   810cb2c <_ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser>
 84c23f4:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c23f7:	0f b6 80 b7 c9 00 00 	movzbl 0xc9b7(%eax),%eax
 84c23fe:	0f b6 f0             	movzbl %al,%esi
 84c2401:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c2404:	8b 98 b3 c9 00 00    	mov    0xc9b3(%eax),%ebx
 84c240a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84c2411:	e8 88 98 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84c2416:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c241a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c241e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c2422:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2425:	89 04 24             	mov    %eax,(%esp)
 84c2428:	e8 db d3 1c 00       	call   868f808 <_ZN5CUser21setPcRoomPlayTimeDataEjjh>
 84c242d:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c2430:	8d 90 30 d7 00 00    	lea    0xd730(%eax),%edx
 84c2436:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2439:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c243d:	89 04 24             	mov    %eax,(%esp)
 84c2440:	e8 7b a0 02 00       	call   84ec4c0 <_ZN15CUserCharacInfo22set_aura_avatar_optionER18stAuraAvatarOption>
 84c2445:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2448:	89 04 24             	mov    %eax,(%esp)
 84c244b:	e8 54 ba 1c 00       	call   868dea4 <_ZN5CUser23send_aura_avatar_optionEv>
 84c2450:	a1 f0 f7 41 09       	mov    0x941f7f0,%eax
 84c2455:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c2458:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c245c:	89 04 24             	mov    %eax,(%esp)
 84c245f:	e8 9c 70 ce ff       	call   81a9500 <_ZN4ARAD23Arad_ServerStateManager9sendStateEP5CUser>
 84c2464:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c2467:	8d 90 c8 ea 00 00    	lea    0xeac8(%eax),%edx
 84c246d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2470:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c2474:	89 04 24             	mov    %eax,(%esp)
 84c2477:	e8 76 a0 02 00       	call   84ec4f2 <_ZN15CUserCharacInfo15setCharacOptionER15CharacterOption>
 84c247c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c247f:	89 04 24             	mov    %eax,(%esp)
 84c2482:	e8 61 cc 1c 00       	call   868f0e8 <_ZN5CUser16sendCharacOptionEv>
 84c2487:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c248a:	8b 40 0c             	mov    0xc(%eax),%eax
 84c248d:	85 c0                	test   %eax,%eax
 84c248f:	74 0b                	je     84c249c <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x2238>
 84c2491:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2494:	89 04 24             	mov    %eax,(%esp)
 84c2497:	e8 5c df 1c 00       	call   86903f8 <_ZN5CUser17SendTagCharacInfoEv>
 84c249c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c249f:	89 04 24             	mov    %eax,(%esp)
 84c24a2:	e8 8b df c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c24a7:	c6 80 bc 14 00 00 00 	movb   $0x0,0x14bc(%eax)
 84c24ae:	e8 db 9c c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c24b3:	89 04 24             	mov    %eax,(%esp)
 84c24b6:	e8 eb 6b dd ff       	call   82990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>
 84c24bb:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c24be:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c24c2:	89 04 24             	mov    %eax,(%esp)
 84c24c5:	e8 64 9a c2 ff       	call   80ebf2e <_ZN20CraneMinigameManager25SendCraneItemNeedMaterialEP5CUser>
 84c24ca:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84c24cd:	8d 90 99 4a 01 00    	lea    0x14a99(%eax),%edx
 84c24d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c24d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c24da:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c24de:	8b 45 08             	mov    0x8(%ebp),%eax
 84c24e1:	89 04 24             	mov    %eax,(%esp)
 84c24e4:	e8 95 5b 02 00       	call   84e807e <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser>
 84c24e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c24ec:	89 04 24             	mov    %eax,(%esp)
 84c24ef:	e8 be eb 1c 00       	call   86910b2 <_ZN5CUser17SendMaxEquipLevelEv>
 84c24f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c24f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c24fb:	8b 45 08             	mov    0x8(%ebp),%eax
 84c24fe:	89 04 24             	mov    %eax,(%esp)
 84c2501:	e8 44 5e 02 00       	call   84e834a <_ZN13Inter_LoadEtc24processGrowthWeaponEventER5CUser>
 84c2506:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2509:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c250d:	8b 45 08             	mov    0x8(%ebp),%eax
 84c2510:	89 04 24             	mov    %eax,(%esp)
 84c2513:	e8 aa 5e 02 00       	call   84e83c2 <_ZN13Inter_LoadEtc26processGrowthCreatureEventER5CUser>
 84c2518:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c251b:	89 04 24             	mov    %eax,(%esp)
 84c251e:	e8 4d ef 1c 00       	call   8691470 <_ZN5CUser16sendBingoAddDataEv>
 84c2523:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2526:	89 04 24             	mov    %eax,(%esp)
 84c2529:	e8 c0 42 18 00       	call   86467ee <_ZN5CUser34requestCubePremiumInfoIfContractedEv>
 84c252e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2531:	89 04 24             	mov    %eax,(%esp)
 84c2534:	e8 57 e8 c1 ff       	call   80e0d90 <_ZN19CerashopAddRestrict7Manager26LoadRequestBuyRestrictItemEP5CUser>
 84c2539:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84c253e:	c7 44 24 04 9e 00 00 	movl   $0x9e,0x4(%esp)
 84c2545:	00 
 84c2546:	89 04 24             	mov    %eax,(%esp)
 84c2549:	e8 4a 34 c5 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84c254e:	8b 10                	mov    (%eax),%edx
 84c2550:	83 c2 34             	add    $0x34,%edx
 84c2553:	8b 12                	mov    (%edx),%edx
 84c2555:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c255c:	00 
 84c255d:	89 04 24             	mov    %eax,(%esp)
 84c2560:	ff d2                	call   *%edx
 84c2562:	84 c0                	test   %al,%al
 84c2564:	74 24                	je     84c258a <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x2326>
 84c2566:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2569:	89 04 24             	mov    %eax,(%esp)
 84c256c:	e8 dd 96 c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c2571:	89 c3                	mov    %eax,%ebx
 84c2573:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c2576:	89 04 24             	mov    %eax,(%esp)
 84c2579:	e8 18 67 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c257e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c2582:	89 04 24             	mov    %eax,(%esp)
 84c2585:	e8 1c ab f8 ff       	call   844d0a6 <_ZN26DB_LoadEventLevelupSupport11makeRequestEii>
 84c258a:	e8 3f a4 c5 ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 84c258f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c2592:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c2596:	89 04 24             	mov    %eax,(%esp)
 84c2599:	e8 00 4b ca ff       	call   816709e <_ZN16HeroMissionEvent13loadEventDataEP5CUser>
 84c259e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c25a1:	89 04 24             	mov    %eax,(%esp)
 84c25a4:	e8 75 c8 ca ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 84c25a9:	89 04 24             	mov    %eax,(%esp)
 84c25ac:	e8 57 0a cb ff       	call   8173008 <_ZN6Taiwan14GarenaAuthData10getGcaTypeEv>
 84c25b1:	0f b7 c0             	movzwl %ax,%eax
 84c25b4:	89 04 24             	mov    %eax,(%esp)
 84c25b7:	e8 9e 0a cb ff       	call   817305a <_ZN6Taiwan15GarenaCyberCafeEt>
 84c25bc:	84 c0                	test   %al,%al
 84c25be:	74 0b                	je     84c25cb <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x2367>
 84c25c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c25c3:	89 04 24             	mov    %eax,(%esp)
 84c25c6:	e8 a9 f6 fa ff       	call   8471c74 <_ZN6Taiwan16GarenaAuthPCRoomEP5CUser>
 84c25cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c25ce:	89 04 24             	mov    %eax,(%esp)
 84c25d1:	e8 48 c8 ca ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 84c25d6:	89 04 24             	mov    %eax,(%esp)
 84c25d9:	e8 44 0a cb ff       	call   8173022 <_ZN6Taiwan14GarenaAuthData13getMobileAuthEv>
 84c25de:	84 c0                	test   %al,%al
 84c25e0:	74 0b                	je     84c25ed <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x2389>
 84c25e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c25e5:	89 04 24             	mov    %eax,(%esp)
 84c25e8:	e8 99 9f c9 ff       	call   815c586 <_ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser>
 84c25ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c25f0:	89 04 24             	mov    %eax,(%esp)
 84c25f3:	e8 e2 83 18 00       	call   864a9da <_ZN5CUser15unlock4DataLoadEv>
 84c25f8:	83 f0 01             	xor    $0x1,%eax
 84c25fb:	84 c0                	test   %al,%al
 84c25fd:	74 07                	je     84c2606 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23a2>
 84c25ff:	bb 39 11 00 00       	mov    $0x1139,%ebx
 84c2604:	eb 1f                	jmp    84c2625 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23c1>
 84c2606:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c260b:	eb 18                	jmp    84c2625 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23c1>
 84c260d:	89 d3                	mov    %edx,%ebx
 84c260f:	89 c6                	mov    %eax,%esi
 84c2611:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84c2617:	89 04 24             	mov    %eax,(%esp)
 84c261a:	e8 73 d6 02 00       	call   84efc92 <_ZN15CSkillTreeParamD1Ev>
 84c261f:	89 f0                	mov    %esi,%eax
 84c2621:	89 da                	mov    %ebx,%edx
 84c2623:	eb 10                	jmp    84c2635 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23d1>
 84c2625:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 84c262b:	89 04 24             	mov    %eax,(%esp)
 84c262e:	e8 5f d6 02 00       	call   84efc92 <_ZN15CSkillTreeParamD1Ev>
 84c2633:	eb 1e                	jmp    84c2653 <_ZN13Inter_LoadEtc12dispatch_sigEP5CUserPci+0x23ef>
 84c2635:	89 d3                	mov    %edx,%ebx
 84c2637:	89 c6                	mov    %eax,%esi
 84c2639:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c263f:	89 04 24             	mov    %eax,(%esp)
 84c2642:	e8 39 b8 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c2647:	89 f0                	mov    %esi,%eax
 84c2649:	89 da                	mov    %ebx,%edx
 84c264b:	89 04 24             	mov    %eax,(%esp)
 84c264e:	e8 fd 10 62 00       	call   8ae3750 <_Unwind_Resume>
 84c2653:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c2659:	89 04 24             	mov    %eax,(%esp)
 84c265c:	e8 1f b8 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c2661:	89 d8                	mov    %ebx,%eax
 84c2663:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84c2666:	83 c4 00             	add    $0x0,%esp
 84c2669:	5b                   	pop    %ebx
 84c266a:	5e                   	pop    %esi
 84c266b:	5f                   	pop    %edi
 84c266c:	5d                   	pop    %ebp
 84c266d:	c3                   	ret

```

```c
// Inter_LoadEtc::dispatch_sig @ 0x84c0264

/* Inter_LoadEtc::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadEtc::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  SIG_LOAD_ETC SVar1;
  undefined4 uVar2;
  char cVar3;
  uchar uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  CDataManager *pCVar10;
  CUserPremium *this;
  int *piVar11;
  SIG_LOAD_ETC *pSVar12;
  SIG_LOAD_ETC *pSVar13;
  SkillSlot *pSVar14;
  CAchievement *this_00;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  GameWorld *pGVar20;
  int iVar21;
  CItemLock *pCVar22;
  vector *pvVar23;
  CTitleBook *this_01;
  CGameManager *pCVar24;
  CUser *pCVar25;
  CHackAnalyzer *pCVar26;
  CPad *this_02;
  CAutoMarketConditionsControl *this_03;
  Stream *pSVar27;
  CStreamGuard *pCVar28;
  CItemLimitEditionMgr *pCVar29;
  Arad_DataManager *this_04;
  Arad_EventPeriodDataManager *pAVar30;
  CEventScriptMng *pCVar31;
  uint uVar32;
  CraneMinigameManager *this_05;
  HeroMissionEvent *this_06;
  GarenaAuthData *pGVar33;
  undefined4 uVar34;
  CSkillTreeParam local_12c [52];
  AradServerStateMessage local_f8 [12];
  CStreamGuard local_ec [8];
  CStreamGuard local_e4 [8];
  CStreamGuard local_dc [8];
  CStreamGuard local_d4 [8];
  CStreamGuard local_cc [8];
  CStreamGuard local_c4 [8];
  __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_bc [4];
  __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_b8 [4];
  char local_b4 [32];
  PacketGuard local_94 [12];
  cMyTrace local_88 [16];
  __normal_iterator local_78 [4];
  __normal_iterator local_74 [4];
  __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_70 [4];
  string local_6c [6];
  allocator<char> local_66;
  char local_65;
  SIG_LOAD_ETC *local_64;
  int local_60;
  char local_5b;
  char local_5a;
  char local_59;
  CSharedServerMessageManager *local_58;
  undefined4 local_54;
  int local_50;
  CCoinRefillEvent *local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int local_28;
  SIG_LOAD_ETC *local_24;
  int local_20;
  
  iVar9 = CUser::get_state((CUser *)param_2);
  if (iVar9 == 0) {
    return 0xa7b;
  }
  iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar9 == 0) {
    return 0xa7f;
  }
  local_64 = (SIG_LOAD_ETC *)param_3;
  if (*(int *)(param_3 + 8) == 1) {
    return 0xa96;
  }
  iVar9 = *(int *)(param_3 + 0x354);
  pCVar10 = (CDataManager *)G_CDataManager();
  cVar3 = CDataManager::IsAvailablePvPChannel(pCVar10,iVar9);
  if (cVar3 != '\x01') {
    LogManager::logFormat
              (1,"InterDispatcher.cpp","virtual int Inter_LoadEtc::dispatch_sig(CUser*, char*, int)"
               ,0xa9b,"Inter_LoadEtc::dispatch_sig pvp_grade = %d",*(undefined4 *)(local_64 + 0x354)
              );
    return 0xa9c;
  }
  PacketGuard::PacketGuard(local_94);
                    /* try { // try from 084c034d to 084c0998 has its CatchHandler @ 084c2635 */
  local_65 = SetPvpRecord((Inter_LoadEtc *)param_1,(CUser *)param_2,local_64);
  if (local_65 != '\x01') {
    uVar34 = 0xaa2;
    goto LAB_084c2653;
  }
  local_65 = SetRankRecord((Inter_LoadEtc *)param_1,(CUser *)param_2,local_64);
  if (local_65 != '\x01') {
    uVar34 = 0xaa5;
    goto LAB_084c2653;
  }
  iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  uVar34 = *(undefined4 *)(iVar9 + 0x7b);
  uVar2 = *(undefined4 *)(local_64 + 4);
  cMyTrace::cMyTrace(local_88,"virtual int Inter_LoadEtc::dispatch_sig(CUser*, char*, int)",0xac5,0)
  ;
  cMyTrace::operator()(local_88,"CharLastPlayTick char(%d) t(%d)",uVar2,uVar34);
  CUser::ProcPremiumFatigue((CUser *)param_2);
  this = (CUserPremium *)CUser::GetPremiumInfo((CUser *)param_2);
  WongWork::CUserPremium::RecalcAdditionalInfo(this,(CUser *)param_2);
  local_65 = SetFatigue((Inter_LoadEtc *)param_1,(CUser *)param_2);
  if (local_65 != '\x01') {
    uVar34 = 0xacf;
    goto LAB_084c2653;
  }
  verifyCharacVillage((Inter_LoadEtc *)param_1,(CUser *)param_2);
  local_65 = SendResult((Inter_LoadEtc *)param_1,(CUser *)param_2);
  if (local_65 != '\x01') {
    uVar34 = 0xae6;
    goto LAB_084c2653;
  }
  CUser::SendRestrictedGoods((CUser *)param_2,false,0);
  CUser::LoadCoolTimeItemInfo((CUser *)param_2,(CONTINUOUS_ITEM_INFO *)(local_64 + 0x230c));
  CUser::LoadEffectItemInfo((CUser *)param_2,(CONTINUOUS_ITEM_INFO *)(local_64 + 0x24a4));
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,6);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0x40ce);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,8);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xcdd5);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xd);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xd718);
  local_60 = CUser::get_charac_idx((CUser *)param_2,*(uint *)(local_64 + 0xc));
  if (((*(int *)(local_64 + 0xc) != 0) && (local_60 != -1)) &&
     (iVar9 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)param_2), iVar9 != 0)) {
    pSVar12 = local_64 + 0x1a8;
    pSVar13 = local_64 + 0x10;
    pSVar14 = (SkillSlot *)CUserCharacInfo::getTagCharacSkillW((CUserCharacInfo *)param_2);
    SkillSlot::set_skill_slot(pSVar14,(char *)pSVar13,(char *)pSVar12,0x198);
  }
  if (local_60 == -1) {
    local_64[0xd6fb] = (SIG_LOAD_ETC)0x0;
  }
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xb);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xd5a7);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,10);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xd6fc);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0x10);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xd73c);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xe);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0x466a);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0xf);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xb1a4);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0x11);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xecc8);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0x12);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xecd0);
  piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,0x13);
  (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0x14a9a);
  if (*(int *)(local_64 + 0xc9a8) == 0) {
    this_00 = (CAchievement *)CUser::GetCharacExpandData((CUser *)param_2,0xf);
    CAchievement::adjust(this_00);
  }
  iVar9 = CNetwork<4096,450000>::get_ip((CNetwork<4096,450000> *)(param_2 + 0xe0));
  if (iVar9 == 0) {
    iVar15 = CUser::GetServerGroup((CUser *)param_2);
    uVar4 = CUser::GetLogInOutState((CUser *)param_2);
    iVar9 = G_CEnvironment();
    iVar9 = *(int *)(iVar9 + 0x1b0);
    uVar16 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(param_2 + 0xe0));
    pcVar17 = (char *)CNetwork<4096,450000>::GetPeerIP2
                                ((CNetwork<4096,450000> *)(param_2 + 0xe0),local_b4 + 0x10,0x10);
    pcVar18 = (char *)CUser::getWebAddress((CUser *)param_2);
    cUserHistoryLog::Login
              ((cUserHistoryLog *)(param_2 + 0x79700),pcVar18,pcVar17,uVar16 & 0xffff,iVar9,uVar4,
               iVar15);
  }
  else {
    local_b4[0] = '\0';
    local_b4[1] = '\0';
    local_b4[2] = '\0';
    local_b4[3] = '\0';
    local_b4[4] = '\0';
    local_b4[5] = '\0';
    local_b4[6] = '\0';
    local_b4[7] = '\0';
    local_b4[8] = '\0';
    local_b4[9] = '\0';
    local_b4[10] = '\0';
    local_b4[0xb] = '\0';
    local_b4[0xc] = '\0';
    local_b4[0xd] = '\0';
    local_b4[0xe] = '\0';
    local_b4[0xf] = '\0';
    iVar15 = CUser::GetServerGroup((CUser *)param_2);
    uVar4 = CUser::GetLogInOutState((CUser *)param_2);
    iVar9 = G_CEnvironment();
    iVar9 = *(int *)(iVar9 + 0x1b0);
    uVar16 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(param_2 + 0xe0));
    pcVar17 = (char *)CNetwork<4096,450000>::GetPeerIP2
                                ((CNetwork<4096,450000> *)(param_2 + 0xe0),local_b4,0x10);
    pcVar18 = (char *)CUser::getWebAddress((CUser *)param_2);
    cUserHistoryLog::Login
              ((cUserHistoryLog *)(param_2 + 0x79700),pcVar18,pcVar17,uVar16 & 0xffff,iVar9,uVar4,
               iVar15);
  }
  lVar19 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUserCharacInfo::SetLoginTick((CUserCharacInfo *)param_2,lVar19);
  lVar19 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CUserCharacInfo::SetCharacStartPlayTick((CUserCharacInfo *)param_2,lVar19);
  CSkillTreeParam::CSkillTreeParam(local_12c,(CUser *)param_2,local_64,local_94);
  local_5b = '\0';
                    /* try { // try from 084c099d to 084c1a82 has its CatchHandler @ 084c260d */
  pGVar20 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar20);
  if ((cVar3 != '\0') &&
     (SVar1 = local_64[0xcdd1], iVar9 = G_CDataManager(), SVar1 != *(SIG_LOAD_ETC *)(iVar9 + 0xa850)
     )) {
    iVar9 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_2);
    G_CDataManager();
    iVar15 = G_CDataManager();
    iVar15 = PvPSkillTreeParameterScript::getInitSkillTreeGrade(iVar15 + 0xa800);
    if (iVar9 < iVar15) {
      memset(local_64 + 0xc9c0,0,0x414);
      local_5b = '\x01';
    }
  }
  cVar3 = CUser::SetSkill((CUser *)param_2,(SIG_LOAD_SKILL *)(local_64 + 0xc9c0),
                          (SIG_COMBO_SKILL *)(local_64 + 0x14aaa));
  if (cVar3 == '\x01') {
    CUserCharacInfo::disableSaveSkill((CUserCharacInfo *)param_2);
    pGVar20 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar20);
    if (cVar3 != '\0') {
      if ((local_64[0xcdd4] == (SIG_LOAD_ETC)0x0) && (*(int *)(local_64 + 0xd59f) != 0)) {
        SetPvPSkillTree(param_2,local_64 + 0xc9cc,0);
        SetPvPSkillTree(param_2,local_64 + 0xcb68,1);
      }
      else {
        CUser::givePvPSkillTree((CUser *)param_2,0,false,3);
        CUser::givePvPSkillTree((CUser *)param_2,0,true,3);
        iVar9 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_2);
        cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_2);
        cVar5 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_2);
        iVar15 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
        iVar21 = G_CDataManager();
        local_54 = PvPSkillTreeParameterScript::getPvPSkillPoint
                             ((PvPSkillTreeParameterScript *)(iVar21 + 0xa800),iVar15,(int)cVar5,
                              (int)cVar3,iVar9,true);
        pSVar14 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_2);
        SkillSlot::set_remain_sp_at_index(pSVar14,local_54,0);
        pSVar14 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_2);
        SkillSlot::set_remain_sp_at_index(pSVar14,local_54,1);
      }
    }
    iVar9 = CSkillTreeParam::SetSkillTree(local_12c,(Inter_LoadEtc *)param_1);
    if (iVar9 == 0) {
      pCVar22 = (CItemLock *)CUser::GetCharacExpandData((CUser *)param_2,2);
      pvVar23 = (vector *)item_lock::CItemLock::GetItemLockRefVec(pCVar22);
      this_01 = (CTitleBook *)CUser::GetCharacExpandData((CUser *)param_2,0xe);
      CTitleBook::getItemLockList(this_01,pvVar23);
      pCVar22 = (CItemLock *)CUser::GetCharacExpandData((CUser *)param_2,2);
      item_lock::CItemLock::VerifyItemLock(pCVar22,(CUser *)param_2);
      pCVar24 = (CGameManager *)G_CGameManager();
      local_5a = CGameManager::insert_game_world(pCVar24,(CUser *)param_2);
      if (local_5a == '\x01') {
        CUser::sendCharacQp((CUser *)param_2);
        CUser::sendCharacQuestPiece((CUser *)param_2);
        pCVar25 = (CUser *)CUser::GetCharacExpandData((CUser *)param_2,0x11);
        CBoosterGage::send_data(pCVar25,(int)param_2);
        CUser::SendItemMakingSkillInfo((CUser *)param_2);
        pGVar20 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar20);
        if ((cVar3 != '\0') &&
           (((local_64[0xcdd4] != (SIG_LOAD_ETC)0x0 || (*(int *)(local_64 + 0xd59f) == 0)) ||
            (local_5b != '\0')))) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0x154);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
          CUser::Send((CUser *)param_2,local_94);
        }
        CUser::CheckMaxLuckyLevel();
        CUserCharacInfo::SetCurConditionEventStep
                  ((CUserCharacInfo *)param_2,*(short *)(local_64 + 0x40c8));
        CUserCharacInfo::SetCurConditionEventRewardStep
                  ((CUserCharacInfo *)param_2,*(short *)(local_64 + 0x40ca));
        CUserCharacInfo::SetCurCharacRevengeData
                  ((CUserCharacInfo *)param_2,(uchar)local_64[0xc9ac],(uchar)local_64[0xc9ad]);
        if (*(short *)(local_64 + 0x40cc) < 0) {
          *(undefined2 *)(local_64 + 0x40cc) = 0;
        }
        CUserCharacInfo::SetProperDungeonClearCount
                  ((CUserCharacInfo *)param_2,*(short *)(local_64 + 0x40cc));
        CUser::SetCurCharacUsedGiftFatigueQuantity((CUser *)param_2,*(uint *)(local_64 + 0xc9b8));
        iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        if (iVar9 != 0) {
          CUserCharacInfo::SetFirstTimeLogin((CUserCharacInfo *)param_2,false);
          iVar9 = G_CEnvironment();
          local_50 = *(int *)(iVar9 + 0x37c);
          local_4c = (CCoinRefillEvent *)
                     CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xd);
          cVar3 = (**(code **)(*(int *)local_4c + 0x34))(local_4c,0);
          if (cVar3 != '\0') {
            local_50 = CCoinRefillEvent::getLastEventTime(local_4c);
          }
          CUserCharacInfo::setBlueMarbleEnterCount
                    ((CUserCharacInfo *)param_2,(uchar)local_64[0x14a98]);
          lVar19 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          cVar3 = CheckDailyScheduleTime(local_50,*(long *)(iVar9 + 0x7b),lVar19);
          if (cVar3 != '\0') {
            CUserCharacInfo::SetFirstTimeLogin((CUserCharacInfo *)param_2,true);
            CUser::RecoverCoin((CUser *)param_2,1);
            CUser::AddDailyItem((CUser *)param_2);
            CUserCharacInfo::ClearCurConditionEventStep((CUserCharacInfo *)param_2);
            CUserCharacInfo::ClearCurConditionEventRewardStep((CUserCharacInfo *)param_2);
            CUserCharacInfo::ClearProperDungeonClearCount((CUserCharacInfo *)param_2);
            CUser::SetFirstLogin((CUser *)param_2);
            cVar3 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2);
            if ((cVar3 == '\0') ||
               (cVar3 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_2),
               cVar3 != '\0')) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              pCVar26 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar26,param_2,0x1a1,1,0,0);
            }
            CUser::ResetCurCharacUsedGiftFatigueQuantity((CUser *)param_2);
            local_48 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
            cVar3 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2);
            if ((cVar3 == '\0') ||
               (cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_2),
               cVar3 != '\0')) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              local_44 = 0;
              local_40 = 0;
              if (local_48 < 0x3d) {
                if (0x32 < local_48) {
                  local_44 = 1;
                  local_40 = 0xb;
                }
              }
              else {
                local_44 = 3;
                local_40 = 0xc;
              }
              for (local_3c = 0; local_3c < local_44; local_3c = local_3c + 1) {
                pCVar26 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar26,param_2,0x1a3,1,local_40,0);
              }
            }
            cVar3 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2);
            if ((cVar3 == '\0') ||
               (cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_2),
               cVar3 != '\0')) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              local_38 = 0;
              local_34 = 0;
              if (local_48 < 0x33) {
                if (local_48 < 0x29) {
                  if (local_48 < 0x1f) {
                    if (0x14 < local_48) {
                      local_38 = 1;
                      local_34 = 1;
                    }
                  }
                  else {
                    local_38 = 2;
                    local_34 = 2;
                  }
                }
                else {
                  local_38 = 3;
                  local_34 = 3;
                }
              }
              else {
                local_38 = 5;
                local_34 = 4;
              }
              for (local_30 = 0; local_30 < local_38; local_30 = local_30 + 1) {
                pCVar26 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar26,param_2,0x1a3,1,local_34,0);
              }
            }
            CUserCharacInfo::resetBlueMarbleEnterCount((CUserCharacInfo *)param_2);
          }
          CUser::sendBlueMarbleEnterCount((CUser *)param_2);
          CUser::SendOpenflag((CUser *)param_2);
          iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          RewardItem((CUser *)param_2,*(long *)(iVar9 + 0x7b),0x4b4515f0,0x4b578af0,0x27addd,
                     "game_server_msg_53","game_server_msg_131",0);
          iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
          if (*(int *)(iVar9 + 0x7b) != 0) {
            CUser::initAllSkill((CUser *)param_2);
          }
        }
        CUser::SendRevengeDungeon((CUser *)param_2);
        CUser::SendConditionEventInfo((CUser *)param_2);
        CUser::SendProperDungeonClearCount((CUser *)param_2);
        processSeriaRoomAniDecoEvent
                  ((Inter_LoadEtc *)param_1,*(undefined4 *)(local_64 + 0x14b5c),param_2);
        processCheckInvalidExpPerLevel((Inter_LoadEtc *)param_1,(CUser *)param_2);
        WongWork::CHandlePremium::handlePremiumEffect(param_2,9999);
        for (local_2c = 1; local_2c < 2; local_2c = local_2c + 1) {
          cVar3 = CServerEvent::IsEventing(local_2c);
          if (cVar3 != '\0') {
            sVar7 = CServerEvent::GetEventInterval(local_2c);
            Inter_MonitorServerEventStart::SendEventNotiPacket
                      (true,(short)local_2c,sVar7,(CUser *)param_2);
          }
        }
        local_59 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xbc);
        pGVar20 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar20);
        if (cVar3 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,(int)local_59);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,99);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
        CUser::Send((CUser *)param_2,local_94);
        cVar3 = CPowerManager::CheckCompleteDBLoadStatueInfo(GlobalData::s_power_manager);
        if (cVar3 != '\0') {
          CPowerManager::SendPowerWarUserStatueInfo(GlobalData::s_power_manager,(CUser *)param_2);
        }
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
        CEventManager::MakeNotiEventInfo(GlobalData::s_event_manager,local_94,(CUser *)param_2);
        CUser::Send((CUser *)param_2,local_94);
        CSkillTreeParam::SendSkillPointReturnInfo(local_12c);
        CUser::SendDungeonClearList((CUser *)param_2);
        CUser::EnableCharacInfo((CUser *)param_2,0xb);
        _checkUserDisadvantage((Inter_LoadEtc *)param_1,(CUser *)param_2);
        CUser::onSelectCharacter((CUser *)param_2);
        cVar3 = CUser::NeedSecuReward((CUser *)param_2);
        if ((cVar3 == '\0') || (cVar3 = CUser::getRewardType((CUser *)param_2), cVar3 == '\0')) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          CUser::getRewardType((CUser *)param_2);
          CUser::AddSecuRewardItem((uchar)param_2);
          CUser::setRewardType((CUser *)param_2,'\0');
        }
        this_02 = (CPad *)CUser::getPad((CUser *)param_2);
        cVar3 = Sanicova::CPad::getChangedPwd(this_02);
        if (cVar3 != '\0') {
          pCVar25 = (CUser *)CUser::getPad((CUser *)param_2);
          Sanicova::CPad::SendChagePwdRewardMail(pCVar25);
        }
        CUser::discard_mouse_register((CUser *)param_2);
        iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        if (0x27 < iVar9) {
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          iVar9 = CUser::GetUID((CUser *)param_2);
          DB_LoadBloodBestRecord::makeRequest(iVar9,uVar16);
        }
        iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        if (0x3b < iVar9) {
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          iVar9 = CUser::GetUID((CUser *)param_2);
          DB_LoadDimension::makeRequest(iVar9,uVar16);
        }
        cVar3 = CUser::isBreakAwayRewardData((CUser *)param_2);
        if (cVar3 != '\0') {
          giveBreakAwayReward((CUser *)param_2);
        }
        iVar9 = CUser::getBreakAwayDungeonClearCnt((CUser *)param_2);
        if (0 < iVar9) {
          iVar9 = CUser::getBreakAwayQuestTime((CUser *)param_2);
          local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          local_28 = iVar9 - local_28;
          if (local_28 < 1) {
            CUser::setBreakAwayDungeonClearCnt((CUser *)param_2,-1);
          }
          else {
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0x136);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_28);
            iVar9 = CUser::getBreakAwayDungeonClearCnt((CUser *)param_2);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,3 - iVar9);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
            CUser::Send((CUser *)param_2,local_94);
          }
        }
        iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        iVar15 = G_GameWorld();
        iVar15 = GameWorld::getDungeonMinimumRequiredLevel(iVar15);
        if (iVar9 < iVar15) {
LAB_084c166e:
          bVar6 = false;
        }
        else {
          pGVar20 = (GameWorld *)G_GameWorld();
          cVar3 = GameWorld::IsPVPChannel(pGVar20);
          if (cVar3 == '\x01') goto LAB_084c166e;
          bVar6 = true;
        }
        if (bVar6) {
          iVar9 = G_CDataManager();
          cVar3 = ServerParameterScript::isDungeonOpen(iVar9 + 0x68);
          if (cVar3 == '\0') {
            pGVar20 = (GameWorld *)G_GameWorld();
            GameWorld::send_user_dungeon_inout_message(pGVar20,(CUser *)param_2,0x2aff,false);
          }
          else {
            pGVar20 = (GameWorld *)G_GameWorld();
            GameWorld::send_user_dungeon_inout_message(pGVar20,(CUser *)param_2,0x2aff,true);
          }
        }
        pCVar10 = (CDataManager *)G_CDataManager();
        this_03 = (CAutoMarketConditionsControl *)
                  CDataManager::GetAutoMarketContitionsControl(pCVar10);
        CAutoMarketConditionsControl::SendNotiSetDurability(this_03,(CUser *)param_2);
        iVar9 = CGlobalEffectManager::getEffectNum(GlobalData::s_globalEffectManager_);
        if (iVar9 != 0) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
          CGlobalEffectManager::makeGlobalEffectInfo(GlobalData::s_globalEffectManager_,local_94);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
          CUser::Send((CUser *)param_2,local_94);
        }
        pCVar24 = (CGameManager *)G_CGameManager();
        local_58 = (CSharedServerMessageManager *)
                   CGameManager::GetSharedServerMessageManager(pCVar24);
        if (local_58 != (CSharedServerMessageManager *)0x0) {
          cVar3 = CSharedServerMessageManager::IsSetServerMessage(local_58);
          if (cVar3 == '\0') {
            local_64[0x2d38] = (SIG_LOAD_ETC)0x0;
          }
          else {
            local_24 = (SIG_LOAD_ETC *)CSharedServerMessageManager::GetCurServerMessage(local_58);
            if (local_24 != (SIG_LOAD_ETC *)0x0) {
              local_64[0x2d38] = *local_24;
              SVar1 = *local_24;
              uVar16 = std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::size
                                 ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)
                                  (local_24 + 4));
              if ((byte)SVar1 == uVar16) {
                std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::begin();
                __gnu_cxx::
                __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                ::__normal_iterator<stSERVER_MESSAGE*>(local_b8,local_78);
                std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::end();
                __gnu_cxx::
                __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                ::__normal_iterator<stSERVER_MESSAGE*>(local_bc,local_74);
                local_20 = 0;
                while (bVar6 = __gnu_cxx::operator!=(local_b8,local_bc), iVar9 = local_20, bVar6) {
                  iVar21 = __gnu_cxx::
                           __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                           ::operator*(local_b8);
                  iVar15 = local_20;
                  local_64[iVar9 * 0x58 + 0x2d3d] = *(SIG_LOAD_ETC *)(iVar21 + 1);
                  pSVar12 = (SIG_LOAD_ETC *)
                            __gnu_cxx::
                            __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                            ::operator*(local_b8);
                  iVar9 = local_20;
                  local_64[iVar15 * 0x58 + 0x2d3c] = *pSVar12;
                  iVar15 = __gnu_cxx::
                           __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                           ::operator*(local_b8);
                  *(undefined4 *)(local_64 + iVar9 * 0x58 + 0x2d78) = *(undefined4 *)(iVar15 + 0x3c)
                  ;
                  iVar9 = __gnu_cxx::
                          __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                          ::operator*(local_b8);
                  strncpy((char *)(local_64 + local_20 * 0x58 + 0x2d7c),(char *)(iVar9 + 0x40),0x13)
                  ;
                  iVar9 = local_20;
                  iVar15 = __gnu_cxx::
                           __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                           ::operator*(local_b8);
                  *(undefined4 *)(local_64 + iVar9 * 0x58 + 0x2d40) = *(undefined4 *)(iVar15 + 4);
                  iVar9 = __gnu_cxx::
                          __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                          ::operator*(local_b8);
                  strncpy((char *)(local_64 + local_20 * 0x58 + 0x2d44),(char *)(iVar9 + 8),0x31);
                  iVar9 = local_20;
                  iVar15 = __gnu_cxx::
                           __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                           ::operator*(local_b8);
                  *(undefined4 *)(local_64 + iVar9 * 0x58 + 0x2d90) = *(undefined4 *)(iVar15 + 0x54)
                  ;
                  local_20 = local_20 + 1;
                  __gnu_cxx::
                  __normal_iterator<stSERVER_MESSAGE_const*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                  ::operator++(local_70,(int)local_b8);
                }
              }
            }
          }
          CSharedServerMessageManager::SendServerMessageInfo
                    (local_58,(CUser *)param_2,(SIG_EVENT_SERVER_MESSAGE *)(local_64 + 0x2d38),'\0')
          ;
        }
        CUser::SetLimitInfo((CUser *)param_2,(SIG_LIMIT_ITEM_INFO *)(local_64 + 0x2638));
        CUser::SendLoginToPCRoomServer((CUser *)param_2);
        piVar11 = (int *)CUser::GetCharacExpandData((CUser *)param_2,7);
        (**(code **)(*piVar11 + 4))(piVar11,param_2,local_64 + 0xcf1f);
        iVar9 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_2);
        if ((iVar9 == 0) &&
           (iVar9 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_2),
           iVar9 != -1)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          pSVar27 = (Stream *)
                    StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xed7);
          CStreamGuard::CStreamGuard(local_c4,pSVar27,true);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_c4);
                    /* try { // try from 084c1ab6 to 084c1b27 has its CatchHandler @ 084c1b2a */
          CStreamGuard::operator<<(pCVar28,0x180);
          iVar9 = CUser::GetUID((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_c4);
          CStreamGuard::operator<<(pCVar28,iVar9);
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_c4);
          CStreamGuard::operator<<(pCVar28,uVar16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_c4);
                    /* try { // try from 084c1b4e to 084c1c1b has its CatchHandler @ 084c260d */
          CStreamGuard::~CStreamGuard(local_c4);
        }
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar29 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar10);
        cVar3 = CItemLimitEditionMgr::empty(pCVar29);
        if (cVar3 != '\x01') {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xe1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
          pCVar10 = (CDataManager *)G_CDataManager();
          pCVar29 = (CItemLimitEditionMgr *)CDataManager::getItemLimitEditionMgr(pCVar10);
          CItemLimitEditionMgr::makeItemLimitEditionInfo(pCVar29,local_94);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
          CUser::Send((CUser *)param_2,local_94);
        }
        pSVar27 = (Stream *)
                  StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf20);
        CStreamGuard::CStreamGuard(local_cc,pSVar27,true);
        pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_cc);
                    /* try { // try from 084c1c4f to 084c1cc0 has its CatchHandler @ 084c1cc3 */
        CStreamGuard::operator<<(pCVar28,0x1a7);
        iVar9 = CUser::GetUID((CUser *)param_2);
        pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_cc);
        CStreamGuard::operator<<(pCVar28,iVar9);
        uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_cc);
        CStreamGuard::operator<<(pCVar28,uVar16);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_cc);
                    /* try { // try from 084c1ce7 to 084c1d1d has its CatchHandler @ 084c260d */
        CStreamGuard::~CStreamGuard(local_cc);
        pGVar20 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar20);
        if (cVar3 != '\0') {
          pSVar27 = (Stream *)
                    StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf2a);
          CStreamGuard::CStreamGuard(local_d4,pSVar27,true);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_d4);
                    /* try { // try from 084c1d51 to 084c1dea has its CatchHandler @ 084c1ded */
          CStreamGuard::operator<<(pCVar28,0x1d5);
          iVar9 = CUser::GetUID((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_d4);
          CStreamGuard::operator<<(pCVar28,iVar9);
          cVar3 = CUser::GetServerGroup((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_d4);
          CStreamGuard::operator<<(pCVar28,cVar3);
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_d4);
          CStreamGuard::operator<<(pCVar28,uVar16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_d4);
                    /* try { // try from 084c1e11 to 084c1e47 has its CatchHandler @ 084c260d */
          CStreamGuard::~CStreamGuard(local_d4);
        }
        pGVar20 = (GameWorld *)G_GameWorld();
        cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar20);
        if (cVar3 != '\0') {
          pSVar27 = (Stream *)
                    StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf36);
          CStreamGuard::CStreamGuard(local_dc,pSVar27,true);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_dc);
                    /* try { // try from 084c1e7b to 084c1f14 has its CatchHandler @ 084c1f17 */
          CStreamGuard::operator<<(pCVar28,0x1e0);
          iVar9 = CUser::GetUID((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_dc);
          CStreamGuard::operator<<(pCVar28,iVar9);
          cVar3 = CUser::GetServerGroup((CUser *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_dc);
          CStreamGuard::operator<<(pCVar28,cVar3);
          uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_dc);
          CStreamGuard::operator<<(pCVar28,uVar16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_dc);
                    /* try { // try from 084c1f3b to 084c1f89 has its CatchHandler @ 084c260d */
          CStreamGuard::~CStreamGuard(local_dc);
        }
        pGVar20 = (GameWorld *)G_GameWorld();
        iVar9 = GameWorld::GetChannelType(pGVar20);
        if (iVar9 == 0xe) {
          cVar3 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam();
          if (cVar3 == '\x01') {
            pSVar27 = (Stream *)
                      StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf44);
            CStreamGuard::CStreamGuard(local_e4,pSVar27,true);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
                    /* try { // try from 084c1fbd to 084c2056 has its CatchHandler @ 084c2059 */
            CStreamGuard::operator<<(pCVar28,0x1e6);
            iVar9 = CUser::GetUID((CUser *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
            CStreamGuard::operator<<(pCVar28,iVar9);
            cVar3 = CUser::GetServerGroup((CUser *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
            CStreamGuard::operator<<(pCVar28,cVar3);
            uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
            CStreamGuard::operator<<(pCVar28,uVar16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_e4);
                    /* try { // try from 084c207d to 084c20a3 has its CatchHandler @ 084c260d */
            CStreamGuard::~CStreamGuard(local_e4);
          }
          else {
            pSVar27 = (Stream *)
                      StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0xf4d);
            CStreamGuard::CStreamGuard(local_ec,pSVar27,true);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
                    /* try { // try from 084c20d7 to 084c2170 has its CatchHandler @ 084c2173 */
            CStreamGuard::operator<<(pCVar28,0x1e8);
            iVar9 = CUser::GetUID((CUser *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
            CStreamGuard::operator<<(pCVar28,iVar9);
            cVar3 = CUser::GetServerGroup((CUser *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
            CStreamGuard::operator<<(pCVar28,cVar3);
            uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            pCVar28 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
            CStreamGuard::operator<<(pCVar28,uVar16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_ec);
                    /* try { // try from 084c2197 to 084c2208 has its CatchHandler @ 084c260d */
            CStreamGuard::~CStreamGuard(local_ec);
          }
        }
        CUser::send_RedeemInfo((CUser *)param_2);
        if (param_2 != (char *)0x0) {
          CDailyScheduleManager::CheckAndSendToOneUserSchedule
                    (GlobalData::s_DailyScheduleManager,(CUser *)param_2);
        }
        CUser::send_MissionList((CUser *)param_2);
        CUser::processReturnUser((CUser *)param_2);
        APSystem::CUserProc::SendActionListState((CUser *)param_2);
        CUser::setFlagPresentAvengerTitle((CUser *)param_2,(bool)local_64[0xc9ae]);
        CUser::VerifyPresentAvengerTitle((CUser *)param_2);
        uVar34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        std::allocator<char>::allocator();
                    /* try { // try from 084c2237 to 084c223b has its CatchHandler @ 084c2288 */
        std::string::string(local_6c,"Arad_EventPeriodDataManager",(allocator *)&local_66);
                    /* try { // try from 084c223c to 084c2263 has its CatchHandler @ 084c2273 */
        this_04 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
        pAVar30 = (Arad_EventPeriodDataManager *)
                  ARAD::Arad_DataManager::findGameScript(this_04,(string)local_6c);
        cVar3 = ARAD::Arad_EventPeriodDataManager::isApplied(pAVar30,0x8e,uVar34);
                    /* try { // try from 084c226c to 084c2270 has its CatchHandler @ 084c2288 */
        std::string::~string(local_6c);
        std::allocator<char>::~allocator(&local_66);
        if (cVar3 != '\0') {
          AradServerStateMessage::AradServerStateMessage(local_f8);
                    /* try { // try from 084c22dd to 084c25f7 has its CatchHandler @ 084c260d */
          ARAD::notifyOpenMessageDialog((CUser *)param_2,0,0x8e,local_f8);
        }
        RequestDBEventArad((Inter_LoadEtc *)param_1,(CUser *)param_2);
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::process_account_first_login
                  (pCVar31,0x191,param_2,*(undefined4 *)(local_64 + 0xc9bc));
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::process_account_first_login
                  (pCVar31,0x192,param_2,*(undefined4 *)(local_64 + 0xc9bc));
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::process_account_first_login
                  (pCVar31,0x19c,param_2,*(undefined4 *)(local_64 + 0xc9bc));
        iVar9 = G_CDataManager();
        pvVar23 = (vector *)CItemShop::GetOneADayItemList(*(CItemShop **)(iVar9 + 0x8cbc));
        CUser::SendOneADayItemShopIndex((CUser *)param_2,pvVar23);
        CUserCharacInfo::reset_is_end_lethe_at_login((CUserCharacInfo *)param_2);
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::send_event_init_data(pCVar31,(CUser *)param_2,false);
        pCVar10 = (CDataManager *)G_CDataManager();
        pCVar31 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar10);
        EventClassify::CEventScriptMng::send_event_init_record_data(pCVar31,(CUser *)param_2);
        SVar1 = local_64[0xc9b7];
        uVar16 = *(uint *)(local_64 + 0xc9b3);
        uVar32 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        CUser::setPcRoomPlayTimeData((CUser *)param_2,uVar32,uVar16,(uchar)SVar1);
        CUserCharacInfo::set_aura_avatar_option
                  ((CUserCharacInfo *)param_2,(stAuraAvatarOption *)(local_64 + 0xd730));
        CUser::send_aura_avatar_option((CUser *)param_2);
        ARAD::Arad_ServerStateManager::sendState(GlobalData::s_serverStateManager_,(CUser *)param_2)
        ;
        CUserCharacInfo::setCharacOption
                  ((CUserCharacInfo *)param_2,(CharacterOption *)(local_64 + 0xeac8));
        CUser::sendCharacOption((CUser *)param_2);
        if (*(int *)(local_64 + 0xc) != 0) {
          CUser::SendTagCharacInfo((CUser *)param_2);
        }
        iVar9 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        *(undefined1 *)(iVar9 + 0x14bc) = 0;
        pCVar24 = (CGameManager *)G_CGameManager();
        this_05 = (CraneMinigameManager *)CGameManager::GetCraneMinigameManager(pCVar24);
        CraneMinigameManager::SendCraneItemNeedMaterial(this_05,(CUser *)param_2);
        processAttendAnceEvent
                  ((Inter_LoadEtc *)param_1,(SIG_ATTENDANCE_EVENT *)(local_64 + 0x14a99),
                   (CUser *)param_2);
        CUser::SendMaxEquipLevel((CUser *)param_2);
        processGrowthWeaponEvent((Inter_LoadEtc *)param_1,(CUser *)param_2);
        processGrowthCreatureEvent((Inter_LoadEtc *)param_1,(CUser *)param_2);
        CUser::sendBingoAddData((CUser *)param_2);
        CUser::requestCubePremiumInfoIfContracted((CUser *)param_2);
        CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem((CUser *)param_2);
        piVar11 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9e);
        cVar3 = (**(code **)(*piVar11 + 0x34))(piVar11,0);
        if (cVar3 != '\0') {
          iVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          iVar15 = CUser::GetUID((CUser *)param_2);
          DB_LoadEventLevelupSupport::makeRequest(iVar15,iVar9);
        }
        this_06 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
        HeroMissionEvent::loadEventData(this_06,(CUser *)param_2);
        pGVar33 = (GarenaAuthData *)CUser::getGarenaAuthData((CUser *)param_2);
        uVar8 = Taiwan::GarenaAuthData::getGcaType(pGVar33);
        cVar3 = Taiwan::GarenaCyberCafe(uVar8);
        if (cVar3 != '\0') {
          Taiwan::GarenaAuthPCRoom((CUser *)param_2);
        }
        pGVar33 = (GarenaAuthData *)CUser::getGarenaAuthData((CUser *)param_2);
        cVar3 = Taiwan::GarenaAuthData::getMobileAuth(pGVar33);
        if (cVar3 != '\0') {
          DBSelectMobileAuthRewardTw::makeRequest((CUser *)param_2);
        }
        cVar3 = CUser::unlock4DataLoad((CUser *)param_2);
        if (cVar3 == '\x01') {
          uVar34 = 0;
        }
        else {
          uVar34 = 0x1139;
        }
      }
      else {
        uVar34 = 0xc14;
      }
    }
    else {
      uVar34 = 0xbcc;
    }
  }
  else {
    CUserCharacInfo::disableSaveSkill((CUserCharacInfo *)param_2);
    uVar34 = 0xb91;
  }
                    /* try { // try from 084c262e to 084c2632 has its CatchHandler @ 084c2635 */
  CSkillTreeParam::~CSkillTreeParam(local_12c);
LAB_084c2653:
  PacketGuard::~PacketGuard(local_94);
  return uVar34;
}

```

---

## giveBreakAwayReward

```asm
// === 084d8e68 Inter_LoadEtc::giveBreakAwayReward  [0x084d8e68-0x84d928b] ===
 84d8e68:	55                   	push   %ebp
 84d8e69:	89 e5                	mov    %esp,%ebp
 84d8e6b:	57                   	push   %edi
 84d8e6c:	56                   	push   %esi
 84d8e6d:	53                   	push   %ebx
 84d8e6e:	81 ec ac 01 00 00    	sub    $0x1ac,%esp
 84d8e74:	8b 45 08             	mov    0x8(%ebp),%eax
 84d8e77:	89 04 24             	mov    %eax,(%esp)
 84d8e7a:	e8 3b 38 01 00       	call   84ec6ba <_ZN5CUser31getUserBreakAwayRewardLuckPointEv>
 84d8e7f:	85 c0                	test   %eax,%eax
 84d8e81:	0f 9f c0             	setg   %al
 84d8e84:	84 c0                	test   %al,%al
 84d8e86:	75 13                	jne    84d8e9b <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x33>
 84d8e88:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d8e8f:	00 
 84d8e90:	8b 45 08             	mov    0x8(%ebp),%eax
 84d8e93:	89 04 24             	mov    %eax,(%esp)
 84d8e96:	e8 71 46 e4 ff       	call   831d50c <_ZN5CUser22setBreakAwayRewardDataEb>
 84d8e9b:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84d8ea2:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84d8ea9:	8b 45 08             	mov    0x8(%ebp),%eax
 84d8eac:	89 04 24             	mov    %eax,(%esp)
 84d8eaf:	e8 b8 37 01 00       	call   84ec66c <_ZN5CUser24getBreakAwayRewardItemIdEv>
 84d8eb4:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84d8eb7:	8b 45 08             	mov    0x8(%ebp),%eax
 84d8eba:	89 04 24             	mov    %eax,(%esp)
 84d8ebd:	e8 b8 37 01 00       	call   84ec67a <_ZN5CUser26getBreakAwayRewardAItemCntEv>
 84d8ec2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84d8ec5:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 84d8ec9:	75 0a                	jne    84d8ed5 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x6d>
 84d8ecb:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 84d8ecf:	0f 84 a2 03 00 00    	je     84d9277 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x40f>
 84d8ed5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d8edc:	00 
 84d8edd:	c7 44 24 08 e8 94 c8 	movl   $0x8c894e8,0x8(%esp)
 84d8ee4:	08 
 84d8ee5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d8eec:	00 
 84d8eed:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d8ef4:	e8 05 c9 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d8ef9:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84d8f00:	00 
 84d8f01:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8f05:	8d 45 bb             	lea    -0x45(%ebp),%eax
 84d8f08:	89 04 24             	mov    %eax,(%esp)
 84d8f0b:	e8 c0 49 ba ff       	call   807d8d0 <strncpy@plt>
 84d8f10:	8b 45 08             	mov    0x8(%ebp),%eax
 84d8f13:	89 04 24             	mov    %eax,(%esp)
 84d8f16:	e8 6d 37 01 00       	call   84ec688 <_ZN5CUser27getBreakAwayRewardItemOrderEv>
 84d8f1b:	85 c0                	test   %eax,%eax
 84d8f1d:	0f 94 c0             	sete   %al
 84d8f20:	84 c0                	test   %al,%al
 84d8f22:	74 43                	je     84d8f67 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0xff>
 84d8f24:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d8f2b:	00 
 84d8f2c:	c7 44 24 08 fc 94 c8 	movl   $0x8c894fc,0x8(%esp)
 84d8f33:	08 
 84d8f34:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d8f3b:	00 
 84d8f3c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d8f43:	e8 b6 c8 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d8f48:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84d8f4f:	00 
 84d8f50:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8f54:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 84d8f5a:	89 04 24             	mov    %eax,(%esp)
 84d8f5d:	e8 6e 49 ba ff       	call   807d8d0 <strncpy@plt>
 84d8f62:	e9 5c 01 00 00       	jmp    84d90c3 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x25b>
 84d8f67:	8b 45 08             	mov    0x8(%ebp),%eax
 84d8f6a:	89 04 24             	mov    %eax,(%esp)
 84d8f6d:	e8 16 37 01 00       	call   84ec688 <_ZN5CUser27getBreakAwayRewardItemOrderEv>
 84d8f72:	83 f8 02             	cmp    $0x2,%eax
 84d8f75:	0f 94 c0             	sete   %al
 84d8f78:	84 c0                	test   %al,%al
 84d8f7a:	74 43                	je     84d8fbf <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x157>
 84d8f7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d8f83:	00 
 84d8f84:	c7 44 24 08 10 95 c8 	movl   $0x8c89510,0x8(%esp)
 84d8f8b:	08 
 84d8f8c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d8f93:	00 
 84d8f94:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d8f9b:	e8 5e c8 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d8fa0:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84d8fa7:	00 
 84d8fa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8fac:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 84d8fb2:	89 04 24             	mov    %eax,(%esp)
 84d8fb5:	e8 16 49 ba ff       	call   807d8d0 <strncpy@plt>
 84d8fba:	e9 04 01 00 00       	jmp    84d90c3 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x25b>
 84d8fbf:	8b 45 08             	mov    0x8(%ebp),%eax
 84d8fc2:	89 04 24             	mov    %eax,(%esp)
 84d8fc5:	e8 be 36 01 00       	call   84ec688 <_ZN5CUser27getBreakAwayRewardItemOrderEv>
 84d8fca:	83 f8 04             	cmp    $0x4,%eax
 84d8fcd:	0f 94 c0             	sete   %al
 84d8fd0:	84 c0                	test   %al,%al
 84d8fd2:	74 43                	je     84d9017 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x1af>
 84d8fd4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d8fdb:	00 
 84d8fdc:	c7 44 24 08 24 95 c8 	movl   $0x8c89524,0x8(%esp)
 84d8fe3:	08 
 84d8fe4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d8feb:	00 
 84d8fec:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d8ff3:	e8 06 c8 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d8ff8:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84d8fff:	00 
 84d9000:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9004:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 84d900a:	89 04 24             	mov    %eax,(%esp)
 84d900d:	e8 be 48 ba ff       	call   807d8d0 <strncpy@plt>
 84d9012:	e9 ac 00 00 00       	jmp    84d90c3 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x25b>
 84d9017:	8b 45 08             	mov    0x8(%ebp),%eax
 84d901a:	89 04 24             	mov    %eax,(%esp)
 84d901d:	e8 66 36 01 00       	call   84ec688 <_ZN5CUser27getBreakAwayRewardItemOrderEv>
 84d9022:	83 f8 01             	cmp    $0x1,%eax
 84d9025:	0f 94 c0             	sete   %al
 84d9028:	84 c0                	test   %al,%al
 84d902a:	74 40                	je     84d906c <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x204>
 84d902c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d9033:	00 
 84d9034:	c7 44 24 08 38 95 c8 	movl   $0x8c89538,0x8(%esp)
 84d903b:	08 
 84d903c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d9043:	00 
 84d9044:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d904b:	e8 ae c7 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d9050:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84d9057:	00 
 84d9058:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d905c:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 84d9062:	89 04 24             	mov    %eax,(%esp)
 84d9065:	e8 66 48 ba ff       	call   807d8d0 <strncpy@plt>
 84d906a:	eb 57                	jmp    84d90c3 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x25b>
 84d906c:	8b 45 08             	mov    0x8(%ebp),%eax
 84d906f:	89 04 24             	mov    %eax,(%esp)
 84d9072:	e8 11 36 01 00       	call   84ec688 <_ZN5CUser27getBreakAwayRewardItemOrderEv>
 84d9077:	83 f8 03             	cmp    $0x3,%eax
 84d907a:	0f 94 c0             	sete   %al
 84d907d:	84 c0                	test   %al,%al
 84d907f:	0f 84 f5 01 00 00    	je     84d927a <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x412>
 84d9085:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d908c:	00 
 84d908d:	c7 44 24 08 4c 95 c8 	movl   $0x8c8954c,0x8(%esp)
 84d9094:	08 
 84d9095:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d909c:	00 
 84d909d:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d90a4:	e8 55 c7 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d90a9:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84d90b0:	00 
 84d90b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d90b5:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 84d90bb:	89 04 24             	mov    %eax,(%esp)
 84d90be:	e8 0d 48 ba ff       	call   807d8d0 <strncpy@plt>
 84d90c3:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84d90c9:	89 04 24             	mov    %eax,(%esp)
 84d90cc:	e8 83 27 bf ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84d90d1:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84d90d8:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 84d90dc:	75 2b                	jne    84d9109 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x2a1>
 84d90de:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d90e1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84d90e4:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 84d90e7:	e8 2b 49 13 00       	call   860da17 <_Z31GetInstanceCirculationStatisticv>
 84d90ec:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d90f0:	8b 55 08             	mov    0x8(%ebp),%edx
 84d90f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d90f7:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 84d90fe:	00 
 84d90ff:	89 04 24             	mov    %eax,(%esp)
 84d9102:	e8 a3 49 13 00       	call   860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>
 84d9107:	eb 70                	jmp    84d9179 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x311>
 84d9109:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 84d910c:	e8 8a 30 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84d9111:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d9115:	89 04 24             	mov    %eax,(%esp)
 84d9118:	e8 15 69 e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84d911d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d9120:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84d9124:	0f 84 53 01 00 00    	je     84d927d <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x415>
 84d912a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84d912d:	89 45 80             	mov    %eax,-0x80(%ebp)
 84d9130:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d9133:	8b 00                	mov    (%eax),%eax
 84d9135:	83 c0 0c             	add    $0xc,%eax
 84d9138:	8b 10                	mov    (%eax),%edx
 84d913a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d913d:	89 04 24             	mov    %eax,(%esp)
 84d9140:	ff d2                	call   *%edx
 84d9142:	88 85 7f ff ff ff    	mov    %al,-0x81(%ebp)
 84d9148:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d914b:	8b 00                	mov    (%eax),%eax
 84d914d:	83 c0 08             	add    $0x8,%eax
 84d9150:	8b 10                	mov    (%eax),%edx
 84d9152:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84d9158:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d915c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d915f:	89 04 24             	mov    %eax,(%esp)
 84d9162:	ff d2                	call   *%edx
 84d9164:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d9167:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d916b:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84d9171:	89 04 24             	mov    %eax,(%esp)
 84d9174:	e8 0b 27 bf ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 84d9179:	8b 45 08             	mov    0x8(%ebp),%eax
 84d917c:	89 04 24             	mov    %eax,(%esp)
 84d917f:	e8 ea 11 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d9184:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84d9187:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84d918e:	8b 45 08             	mov    0x8(%ebp),%eax
 84d9191:	89 04 24             	mov    %eax,(%esp)
 84d9194:	e8 f7 2a bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d9199:	89 c3                	mov    %eax,%ebx
 84d919b:	8d 85 7e fe ff ff    	lea    -0x182(%ebp),%eax
 84d91a1:	89 04 24             	mov    %eax,(%esp)
 84d91a4:	e8 07 52 ba ff       	call   807e3b0 <strlen@plt>
 84d91a9:	89 c6                	mov    %eax,%esi
 84d91ab:	8b 45 08             	mov    0x8(%ebp),%eax
 84d91ae:	89 04 24             	mov    %eax,(%esp)
 84d91b1:	e8 98 2a bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d91b6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84d91b9:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84d91c0:	00 
 84d91c1:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84d91c8:	00 
 84d91c9:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84d91cd:	c7 44 24 18 07 00 00 	movl   $0x7,0x18(%esp)
 84d91d4:	00 
 84d91d5:	89 74 24 14          	mov    %esi,0x14(%esp)
 84d91d9:	8d 8d 7e fe ff ff    	lea    -0x182(%ebp),%ecx
 84d91df:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d91e3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d91e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d91eb:	8d 85 7e ff ff ff    	lea    -0x82(%ebp),%eax
 84d91f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d91f5:	8d 45 bb             	lea    -0x45(%ebp),%eax
 84d91f8:	89 04 24             	mov    %eax,(%esp)
 84d91fb:	e8 e8 c3 07 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84d9200:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84d9203:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84d9207:	75 77                	jne    84d9280 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x418>
 84d9209:	8b 45 08             	mov    0x8(%ebp),%eax
 84d920c:	89 04 24             	mov    %eax,(%esp)
 84d920f:	e8 4a 34 01 00       	call   84ec65e <_ZN5CUser19getBreakAwayRewardsEv>
 84d9214:	89 c7                	mov    %eax,%edi
 84d9216:	8b 45 08             	mov    0x8(%ebp),%eax
 84d9219:	89 04 24             	mov    %eax,(%esp)
 84d921c:	e8 2d 2a bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d9221:	89 c6                	mov    %eax,%esi
 84d9223:	8b 45 08             	mov    0x8(%ebp),%eax
 84d9226:	89 04 24             	mov    %eax,(%esp)
 84d9229:	e8 40 11 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d922e:	89 c3                	mov    %eax,%ebx
 84d9230:	8b 45 08             	mov    0x8(%ebp),%eax
 84d9233:	89 04 24             	mov    %eax,(%esp)
 84d9236:	e8 5b fa be ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84d923b:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84d923f:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d9243:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d9247:	89 04 24             	mov    %eax,(%esp)
 84d924a:	e8 0d ff f5 ff       	call   843915c <_ZN26DB_LoadBreakAwayRewardData11makeRequestEijjR18STBreakAwayRewards>
 84d924f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d9256:	00 
 84d9257:	8b 45 08             	mov    0x8(%ebp),%eax
 84d925a:	89 04 24             	mov    %eax,(%esp)
 84d925d:	e8 34 34 01 00       	call   84ec696 <_ZN5CUser24setBreakAwayRewardItemIdEi>
 84d9262:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d9269:	00 
 84d926a:	8b 45 08             	mov    0x8(%ebp),%eax
 84d926d:	89 04 24             	mov    %eax,(%esp)
 84d9270:	e8 33 34 01 00       	call   84ec6a8 <_ZN5CUser26setBreakAwayRewardAItemCntEi>
 84d9275:	eb 0a                	jmp    84d9281 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x419>
 84d9277:	90                   	nop
 84d9278:	eb 07                	jmp    84d9281 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x419>
 84d927a:	90                   	nop
 84d927b:	eb 04                	jmp    84d9281 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x419>
 84d927d:	90                   	nop
 84d927e:	eb 01                	jmp    84d9281 <_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser+0x419>
 84d9280:	90                   	nop
 84d9281:	81 c4 ac 01 00 00    	add    $0x1ac,%esp
 84d9287:	5b                   	pop    %ebx
 84d9288:	5e                   	pop    %esi
 84d9289:	5f                   	pop    %edi
 84d928a:	5d                   	pop    %ebp
 84d928b:	c3                   	ret

```

```c
// Inter_LoadEtc::giveBreakAwayReward @ 0x84d8e68

/* Inter_LoadEtc::giveBreakAwayReward(CUser*) */

void Inter_LoadEtc::giveBreakAwayReward(CUser *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  CCirculationStatistic *pCVar4;
  CDataManager *this;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  STBreakAwayRewards *pSVar8;
  uint uVar9;
  uint uVar10;
  char local_186 [256];
  Inven_Item local_86;
  undefined1 local_85;
  int local_84;
  char local_49 [21];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  
  iVar2 = CUser::getUserBreakAwayRewardLuckPoint(param_1);
  if (iVar2 < 1) {
    CUser::setBreakAwayRewardData(param_1,false);
  }
  local_34 = 0;
  local_30 = 0;
  local_34 = CUser::getBreakAwayRewardItemId(param_1);
  local_30 = CUser::getBreakAwayRewardAItemCnt(param_1);
  if ((local_34 != 0) || (local_30 != 0)) {
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_135",(bool *)0x0);
    strncpy(local_49,pcVar3,0x14);
    iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
    if (iVar2 == 0) {
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_136",(bool *)0x0);
      strncpy(local_186,pcVar3,0xff);
    }
    else {
      iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
      if (iVar2 == 2) {
        pcVar3 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_142",(bool *)0x0);
        strncpy(local_186,pcVar3,0xff);
      }
      else {
        iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
        if (iVar2 == 4) {
          pcVar3 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_160",(bool *)0x0);
          strncpy(local_186,pcVar3,0xff);
        }
        else {
          iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
          if (iVar2 == 1) {
            pcVar3 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_158",(bool *)0x0);
            strncpy(local_186,pcVar3,0xff);
          }
          else {
            iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
            if (iVar2 != 3) {
              return;
            }
            pcVar3 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_159",(bool *)0x0);
            strncpy(local_186,pcVar3,0xff);
          }
        }
      }
    }
    Inven_Item::Inven_Item(&local_86);
    iVar1 = local_30;
    iVar2 = local_34;
    local_2c = 0;
    if (local_34 == 0) {
      local_2c = local_30;
      pCVar4 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
      CCirculationStatistic::AddCirculationStatistic(pCVar4,0x10,param_1,iVar1);
    }
    else {
      this = (CDataManager *)G_CDataManager();
      local_20 = (int *)CDataManager::find_item(this,iVar2);
      if (local_20 == (int *)0x0) {
        return;
      }
      local_84 = local_34;
      local_85 = (**(code **)(*local_20 + 0xc))(local_20);
      (**(code **)(*local_20 + 8))(local_20,&local_86);
      Inven_Item::set_add_info(&local_86,local_30);
    }
    local_28 = CUser::get_acc_id(param_1);
    local_24 = 0;
    uVar5 = CUser::GetServerGroup(param_1);
    sVar6 = strlen(local_186);
    uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    local_24 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                         (local_49,&local_86,local_2c,uVar7,local_186,sVar6,7,uVar5,0,0);
    if (local_24 == 0) {
      pSVar8 = (STBreakAwayRewards *)CUser::getBreakAwayRewards(param_1);
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar10 = CUser::get_acc_id(param_1);
      iVar2 = CUser::GetUID(param_1);
      DB_LoadBreakAwayRewardData::makeRequest(iVar2,uVar10,uVar9,pSVar8);
      CUser::setBreakAwayRewardItemId(param_1,0);
      CUser::setBreakAwayRewardAItemCnt(param_1,0);
    }
  }
  return;
}

```

---

## processAttendAnceEvent

```asm
// === 084e807e Inter_LoadEtc::processAttendAnceEvent  [0x084e807e-0x84e8349] ===
 84e807e:	55                   	push   %ebp
 84e807f:	89 e5                	mov    %esp,%ebp
 84e8081:	57                   	push   %edi
 84e8082:	56                   	push   %esi
 84e8083:	53                   	push   %ebx
 84e8084:	81 ec ac 01 00 00    	sub    $0x1ac,%esp
 84e808a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e808d:	0f b6 00             	movzbl (%eax),%eax
 84e8090:	83 f0 01             	xor    $0x1,%eax
 84e8093:	84 c0                	test   %al,%al
 84e8095:	0f 85 9a 02 00 00    	jne    84e8335 <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x2b7>
 84e809b:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e80a0:	c7 44 24 04 60 00 00 	movl   $0x60,0x4(%esp)
 84e80a7:	00 
 84e80a8:	89 04 24             	mov    %eax,(%esp)
 84e80ab:	e8 e8 d8 c2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e80b0:	8b 10                	mov    (%eax),%edx
 84e80b2:	83 c2 34             	add    $0x34,%edx
 84e80b5:	8b 12                	mov    (%edx),%edx
 84e80b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e80be:	00 
 84e80bf:	89 04 24             	mov    %eax,(%esp)
 84e80c2:	ff d2                	call   *%edx
 84e80c4:	83 f0 01             	xor    $0x1,%eax
 84e80c7:	84 c0                	test   %al,%al
 84e80c9:	0f 85 69 02 00 00    	jne    84e8338 <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x2ba>
 84e80cf:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e80d4:	c7 44 24 04 60 00 00 	movl   $0x60,0x4(%esp)
 84e80db:	00 
 84e80dc:	89 04 24             	mov    %eax,(%esp)
 84e80df:	e8 b4 d8 c2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e80e4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84e80e7:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84e80eb:	0f 84 4a 02 00 00    	je     84e833b <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x2bd>
 84e80f1:	8d 45 86             	lea    -0x7a(%ebp),%eax
 84e80f4:	89 04 24             	mov    %eax,(%esp)
 84e80f7:	e8 58 37 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84e80fc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84e80ff:	89 04 24             	mov    %eax,(%esp)
 84e8102:	e8 3f 03 be ff       	call   80c8446 <_ZN15AttendanceEvent13getRewordItemEv>
 84e8107:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84e810a:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 84e8111:	e8 85 40 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e8116:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84e8119:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e811d:	89 04 24             	mov    %eax,(%esp)
 84e8120:	e8 0d 79 e7 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84e8125:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e8128:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84e812c:	0f 84 0c 02 00 00    	je     84e833e <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x2c0>
 84e8132:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e8135:	89 45 88             	mov    %eax,-0x78(%ebp)
 84e8138:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e813b:	8b 00                	mov    (%eax),%eax
 84e813d:	83 c0 08             	add    $0x8,%eax
 84e8140:	8b 10                	mov    (%eax),%edx
 84e8142:	8d 45 86             	lea    -0x7a(%ebp),%eax
 84e8145:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8149:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e814c:	89 04 24             	mov    %eax,(%esp)
 84e814f:	ff d2                	call   *%edx
 84e8151:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e8158:	00 
 84e8159:	8d 45 86             	lea    -0x7a(%ebp),%eax
 84e815c:	89 04 24             	mov    %eax,(%esp)
 84e815f:	e8 20 37 be ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 84e8164:	8d 95 86 fe ff ff    	lea    -0x17a(%ebp),%edx
 84e816a:	bb 00 01 00 00       	mov    $0x100,%ebx
 84e816f:	b8 00 00 00 00       	mov    $0x0,%eax
 84e8174:	89 d1                	mov    %edx,%ecx
 84e8176:	83 e1 02             	and    $0x2,%ecx
 84e8179:	85 c9                	test   %ecx,%ecx
 84e817b:	74 09                	je     84e8186 <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x108>
 84e817d:	66 89 02             	mov    %ax,(%edx)
 84e8180:	83 c2 02             	add    $0x2,%edx
 84e8183:	83 eb 02             	sub    $0x2,%ebx
 84e8186:	89 d9                	mov    %ebx,%ecx
 84e8188:	c1 e9 02             	shr    $0x2,%ecx
 84e818b:	89 d7                	mov    %edx,%edi
 84e818d:	f3 ab                	rep stos %eax,%es:(%edi)
 84e818f:	89 fa                	mov    %edi,%edx
 84e8191:	89 d9                	mov    %ebx,%ecx
 84e8193:	83 e1 02             	and    $0x2,%ecx
 84e8196:	85 c9                	test   %ecx,%ecx
 84e8198:	74 06                	je     84e81a0 <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x122>
 84e819a:	66 89 02             	mov    %ax,(%edx)
 84e819d:	83 c2 02             	add    $0x2,%edx
 84e81a0:	89 d9                	mov    %ebx,%ecx
 84e81a2:	83 e1 01             	and    $0x1,%ecx
 84e81a5:	85 c9                	test   %ecx,%ecx
 84e81a7:	74 05                	je     84e81ae <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x130>
 84e81a9:	88 02                	mov    %al,(%edx)
 84e81ab:	83 c2 01             	add    $0x1,%edx
 84e81ae:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 84e81b1:	ba 15 00 00 00       	mov    $0x15,%edx
 84e81b6:	b9 00 00 00 00       	mov    $0x0,%ecx
 84e81bb:	89 c3                	mov    %eax,%ebx
 84e81bd:	83 e3 01             	and    $0x1,%ebx
 84e81c0:	85 db                	test   %ebx,%ebx
 84e81c2:	74 08                	je     84e81cc <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x14e>
 84e81c4:	88 08                	mov    %cl,(%eax)
 84e81c6:	83 c0 01             	add    $0x1,%eax
 84e81c9:	83 ea 01             	sub    $0x1,%edx
 84e81cc:	89 c3                	mov    %eax,%ebx
 84e81ce:	83 e3 02             	and    $0x2,%ebx
 84e81d1:	85 db                	test   %ebx,%ebx
 84e81d3:	74 09                	je     84e81de <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x160>
 84e81d5:	66 89 08             	mov    %cx,(%eax)
 84e81d8:	83 c0 02             	add    $0x2,%eax
 84e81db:	83 ea 02             	sub    $0x2,%edx
 84e81de:	89 d6                	mov    %edx,%esi
 84e81e0:	83 e6 fc             	and    $0xfffffffc,%esi
 84e81e3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e81e8:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 84e81eb:	83 c3 04             	add    $0x4,%ebx
 84e81ee:	39 f3                	cmp    %esi,%ebx
 84e81f0:	72 f6                	jb     84e81e8 <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x16a>
 84e81f2:	01 d8                	add    %ebx,%eax
 84e81f4:	89 d3                	mov    %edx,%ebx
 84e81f6:	83 e3 02             	and    $0x2,%ebx
 84e81f9:	85 db                	test   %ebx,%ebx
 84e81fb:	74 06                	je     84e8203 <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x185>
 84e81fd:	66 89 08             	mov    %cx,(%eax)
 84e8200:	83 c0 02             	add    $0x2,%eax
 84e8203:	83 e2 01             	and    $0x1,%edx
 84e8206:	85 d2                	test   %edx,%edx
 84e8208:	74 05                	je     84e820f <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x191>
 84e820a:	88 08                	mov    %cl,(%eax)
 84e820c:	83 c0 01             	add    $0x1,%eax
 84e820f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e8216:	00 
 84e8217:	c7 44 24 08 f9 a3 c8 	movl   $0x8c8a3f9,0x8(%esp)
 84e821e:	08 
 84e821f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e8226:	00 
 84e8227:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e822e:	e8 15 e2 5b 00       	call   8aa6448 <_ZN23RDARScriptStringManager17findChangedStringEiPKcPb>
 84e8233:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84e823a:	00 
 84e823b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e823f:	8d 85 86 fe ff ff    	lea    -0x17a(%ebp),%eax
 84e8245:	89 04 24             	mov    %eax,(%esp)
 84e8248:	e8 83 56 b9 ff       	call   807d8d0 <strncpy@plt>
 84e824d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e8254:	00 
 84e8255:	c7 44 24 08 0d a4 c8 	movl   $0x8c8a40d,0x8(%esp)
 84e825c:	08 
 84e825d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e8264:	00 
 84e8265:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e826c:	e8 8d d5 5b 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e8271:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84e8278:	00 
 84e8279:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e827d:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 84e8280:	89 04 24             	mov    %eax,(%esp)
 84e8283:	e8 48 56 b9 ff       	call   807d8d0 <strncpy@plt>
 84e8288:	8b 45 10             	mov    0x10(%ebp),%eax
 84e828b:	89 04 24             	mov    %eax,(%esp)
 84e828e:	e8 fd 39 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e8293:	89 c3                	mov    %eax,%ebx
 84e8295:	8d 85 86 fe ff ff    	lea    -0x17a(%ebp),%eax
 84e829b:	89 04 24             	mov    %eax,(%esp)
 84e829e:	e8 0d 61 b9 ff       	call   807e3b0 <strlen@plt>
 84e82a3:	89 c6                	mov    %eax,%esi
 84e82a5:	8b 45 10             	mov    0x10(%ebp),%eax
 84e82a8:	89 04 24             	mov    %eax,(%esp)
 84e82ab:	e8 9e 39 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e82b0:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84e82b7:	00 
 84e82b8:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84e82bf:	00 
 84e82c0:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84e82c4:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84e82cb:	00 
 84e82cc:	89 74 24 14          	mov    %esi,0x14(%esp)
 84e82d0:	8d 95 86 fe ff ff    	lea    -0x17a(%ebp),%edx
 84e82d6:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e82da:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e82de:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e82e5:	00 
 84e82e6:	8d 45 86             	lea    -0x7a(%ebp),%eax
 84e82e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e82ed:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 84e82f0:	89 04 24             	mov    %eax,(%esp)
 84e82f3:	e8 f0 d2 06 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84e82f8:	8b 45 10             	mov    0x10(%ebp),%eax
 84e82fb:	89 04 24             	mov    %eax,(%esp)
 84e82fe:	e8 4b 39 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e8303:	89 c6                	mov    %eax,%esi
 84e8305:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8308:	89 04 24             	mov    %eax,(%esp)
 84e830b:	e8 5e 20 bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e8310:	89 c3                	mov    %eax,%ebx
 84e8312:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8315:	89 04 24             	mov    %eax,(%esp)
 84e8318:	e8 79 09 be ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84e831d:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e8321:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e8325:	89 04 24             	mov    %eax,(%esp)
 84e8328:	e8 d1 07 f6 ff       	call   8448afe <_ZN24DB_InsertAttendanceEvent11makeRequestEijj>
 84e832d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8330:	c6 00 00             	movb   $0x0,(%eax)
 84e8333:	eb 0a                	jmp    84e833f <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x2c1>
 84e8335:	90                   	nop
 84e8336:	eb 07                	jmp    84e833f <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x2c1>
 84e8338:	90                   	nop
 84e8339:	eb 04                	jmp    84e833f <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x2c1>
 84e833b:	90                   	nop
 84e833c:	eb 01                	jmp    84e833f <_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser+0x2c1>
 84e833e:	90                   	nop
 84e833f:	81 c4 ac 01 00 00    	add    $0x1ac,%esp
 84e8345:	5b                   	pop    %ebx
 84e8346:	5e                   	pop    %esi
 84e8347:	5f                   	pop    %edi
 84e8348:	5d                   	pop    %ebp
 84e8349:	c3                   	ret

```

```c
// Inter_LoadEtc::processAttendAnceEvent @ 0x84e807e

/* WARNING: Removing unreachable block (ram,0x084e81a9) */
/* Inter_LoadEtc::processAttendAnceEvent(SIG_ATTENDANCE_EVENT*, CUser&) */

void __thiscall
Inter_LoadEtc::processAttendAnceEvent
          (Inter_LoadEtc *this,SIG_ATTENDANCE_EVENT *param_1,CUser *param_2)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  CDataManager *this_00;
  char *pcVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_17e [256];
  Inven_Item local_7e [2];
  int local_7c;
  char local_41;
  char local_40 [20];
  int local_2c;
  int local_28;
  undefined4 local_24;
  int *local_20;
  
  bVar12 = 0;
  if (*param_1 == (SIG_ATTENDANCE_EVENT)0x1) {
    piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x60);
    cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
    if ((cVar2 == '\x01') &&
       (local_2c = CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x60), local_2c != 0))
    {
      Inven_Item::Inven_Item(local_7e);
      local_28 = AttendanceEvent::getRewordItem();
      local_24 = 1;
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (int *)CDataManager::find_item(this_00,local_28);
      if (local_20 != (int *)0x0) {
        local_7c = local_28;
        (**(code **)(*local_20 + 8))(local_20,local_7e);
        Inven_Item::set_add_info(local_7e,1);
        pcVar4 = local_17e;
        uVar9 = 0x100;
        bVar11 = ((uint)pcVar4 & 2) != 0;
        if (bVar11) {
          local_17e[0] = '\0';
          local_17e[1] = '\0';
          pcVar4 = local_17e + 2;
          uVar9 = 0xfe;
        }
        for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
        }
        if (bVar11) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
        }
        pcVar4 = &local_41;
        uVar9 = 0x15;
        bVar11 = ((uint)pcVar4 & 1) != 0;
        if (bVar11) {
          local_41 = '\0';
          pcVar4 = local_40;
          uVar9 = 0x14;
        }
        if (((uint)pcVar4 & 2) != 0) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4 = pcVar4 + 2;
          uVar9 = uVar9 - 2;
        }
        uVar10 = 0;
        do {
          pcVar1 = pcVar4 + uVar10;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          uVar10 = uVar10 + 4;
        } while (uVar10 < (uVar9 & 0xfffffffc));
        pcVar4 = pcVar4 + uVar10;
        if ((uVar9 & 2) != 0) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4 = pcVar4 + 2;
        }
        if (!bVar11) {
          *pcVar4 = '\0';
        }
        pcVar4 = (char *)RDARScriptStringManager::findChangedString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_276",(bool *)0x0);
        strncpy(local_17e,pcVar4,0xff);
        pcVar4 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_275",(bool *)0x0);
        strncpy(&local_41,pcVar4,0x14);
        uVar5 = CUser::GetServerGroup(param_2);
        sVar6 = strlen(local_17e);
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (&local_41,local_7e,0,uVar7,local_17e,sVar6,0,uVar5,0,0);
        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        uVar10 = CUser::get_acc_id(param_2);
        iVar8 = CUser::GetUID(param_2);
        DB_InsertAttendanceEvent::makeRequest(iVar8,uVar10,uVar9);
        *param_1 = (SIG_ATTENDANCE_EVENT)0x0;
      }
    }
  }
  return;
}

```

---

## processCheckInvalidExpPerLevel

```asm
// === 084e84f6 Inter_LoadEtc::processCheckInvalidExpPerLevel  [0x084e84f6-0x84e866b] ===
 84e84f6:	55                   	push   %ebp
 84e84f7:	89 e5                	mov    %esp,%ebp
 84e84f9:	57                   	push   %edi
 84e84fa:	56                   	push   %esi
 84e84fb:	53                   	push   %ebx
 84e84fc:	83 ec 5c             	sub    $0x5c,%esp
 84e84ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8502:	89 04 24             	mov    %eax,(%esp)
 84e8505:	e8 ae 1d bf ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84e850a:	89 c3                	mov    %eax,%ebx
 84e850c:	e8 8a 3c be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e8511:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e8515:	89 04 24             	mov    %eax,(%esp)
 84e8518:	e8 25 7f e7 ff       	call   8360442 <_ZNK12CDataManager13get_level_expEi>
 84e851d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84e8520:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8523:	89 04 24             	mov    %eax,(%esp)
 84e8526:	e8 8d 1d bf ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84e852b:	8d 58 01             	lea    0x1(%eax),%ebx
 84e852e:	e8 68 3c be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e8533:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e8537:	89 04 24             	mov    %eax,(%esp)
 84e853a:	e8 03 7f e7 ff       	call   8360442 <_ZNK12CDataManager13get_level_expEi>
 84e853f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84e8542:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8545:	89 04 24             	mov    %eax,(%esp)
 84e8548:	e8 0f 3b 00 00       	call   84ec05c <_ZNK15CUserCharacInfo14get_charac_expEv>
 84e854d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e8550:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e8553:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84e8556:	77 0c                	ja     84e8564 <_ZN13Inter_LoadEtc30processCheckInvalidExpPerLevelER5CUser+0x6e>
 84e8558:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e855b:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84e855e:	0f 86 00 01 00 00    	jbe    84e8664 <_ZN13Inter_LoadEtc30processCheckInvalidExpPerLevelER5CUser+0x16e>
 84e8564:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e856b:	00 
 84e856c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e856f:	89 04 24             	mov    %eax,(%esp)
 84e8572:	e8 a5 13 1a 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 84e8577:	83 f0 01             	xor    $0x1,%eax
 84e857a:	84 c0                	test   %al,%al
 84e857c:	0f 84 e2 00 00 00    	je     84e8664 <_ZN13Inter_LoadEtc30processCheckInvalidExpPerLevelER5CUser+0x16e>
 84e8582:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e8589:	00 
 84e858a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e858d:	89 04 24             	mov    %eax,(%esp)
 84e8590:	e8 fb 12 1a 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84e8595:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8598:	89 04 24             	mov    %eax,(%esp)
 84e859b:	e8 ce 1d bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e85a0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84e85a7:	00 
 84e85a8:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 84e85af:	00 
 84e85b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e85b7:	00 
 84e85b8:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 84e85bf:	00 
 84e85c0:	c7 44 24 04 42 9c 00 	movl   $0x9c42,0x4(%esp)
 84e85c7:	00 
 84e85c8:	89 04 24             	mov    %eax,(%esp)
 84e85cb:	e8 4a fa f3 ff       	call   842801a <_ZN19DB_SaveUserHandicap11makeRequestEjiiiii>
 84e85d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e85d3:	89 04 24             	mov    %eax,(%esp)
 84e85d6:	e8 81 3a 00 00       	call   84ec05c <_ZNK15CUserCharacInfo14get_charac_expEv>
 84e85db:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84e85de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e85e1:	89 04 24             	mov    %eax,(%esp)
 84e85e4:	e8 cf 1c bf ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84e85e9:	89 c7                	mov    %eax,%edi
 84e85eb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e85f2:	ff 
 84e85f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e85f6:	89 04 24             	mov    %eax,(%esp)
 84e85f9:	e8 a2 59 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e85fe:	89 c6                	mov    %eax,%esi
 84e8600:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8603:	89 04 24             	mov    %eax,(%esp)
 84e8606:	e8 63 1d bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e860b:	89 c3                	mov    %eax,%ebx
 84e860d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e8614:	00 
 84e8615:	c7 44 24 08 7d 6c 00 	movl   $0x6c7d,0x8(%esp)
 84e861c:	00 
 84e861d:	c7 44 24 04 20 b4 c8 	movl   $0x8c8b420,0x4(%esp)
 84e8624:	08 
 84e8625:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84e8628:	89 04 24             	mov    %eax,(%esp)
 84e862b:	e8 e8 70 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e8630:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e8633:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84e8637:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84e863a:	89 44 24 18          	mov    %eax,0x18(%esp)
 84e863e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84e8641:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e8645:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e8649:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e864d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e8651:	c7 44 24 04 24 a4 c8 	movl   $0x8c8a424,0x4(%esp)
 84e8658:	08 
 84e8659:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84e865c:	89 04 24             	mov    %eax,(%esp)
 84e865f:	e8 24 71 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e8664:	83 c4 5c             	add    $0x5c,%esp
 84e8667:	5b                   	pop    %ebx
 84e8668:	5e                   	pop    %esi
 84e8669:	5f                   	pop    %edi
 84e866a:	5d                   	pop    %ebp
 84e866b:	c3                   	ret

```

```c
// Inter_LoadEtc::processCheckInvalidExpPerLevel @ 0x84e84f6

/* Inter_LoadEtc::processCheckInvalidExpPerLevel(CUser&) */

void __thiscall Inter_LoadEtc::processCheckInvalidExpPerLevel(Inter_LoadEtc *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  cMyTrace local_38 [16];
  uint local_28;
  uint local_24;
  uint local_20;
  
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_28 = CDataManager::get_level_exp(pCVar3,iVar2);
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::get_level_exp(pCVar3,iVar2 + 1);
  local_20 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
  if ((local_20 < local_28) || (local_24 < local_20)) {
    cVar1 = CUser::isTradePunishType(param_1,1);
    if (cVar1 != '\x01') {
      CUser::SetTradePunishType(param_1,1);
      uVar4 = CUser::get_acc_id(param_1);
      DB_SaveUserHandicap::makeRequest(uVar4,0x9c42,0xb,0,3,0);
      uVar5 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
      uVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      uVar7 = CUser::get_charac_no(param_1,-1);
      uVar8 = CUser::get_acc_id(param_1);
      cMyTrace::cMyTrace(local_38,"void Inter_LoadEtc::processCheckInvalidExpPerLevel(CUser&)",
                         0x6c7d,5);
      cMyTrace::operator()
                (local_38,
                 "[InvalidExp] Invalid character exp per level. (mid:%u, charac:%u, level:%d, exp:%d,%d,%d)"
                 ,uVar8,uVar7,uVar6,uVar5,local_28,local_24);
    }
  }
  return;
}

```

---

## processGrowthCreatureEvent

```asm
// === 084e83c2 Inter_LoadEtc::processGrowthCreatureEvent  [0x084e83c2-0x84e8427] ===
 84e83c2:	55                   	push   %ebp
 84e83c3:	89 e5                	mov    %esp,%ebp
 84e83c5:	83 ec 28             	sub    $0x28,%esp
 84e83c8:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e83cd:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 84e83d4:	00 
 84e83d5:	89 04 24             	mov    %eax,(%esp)
 84e83d8:	e8 bb d5 c2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e83dd:	8b 10                	mov    (%eax),%edx
 84e83df:	83 c2 34             	add    $0x34,%edx
 84e83e2:	8b 12                	mov    (%edx),%edx
 84e83e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e83eb:	00 
 84e83ec:	89 04 24             	mov    %eax,(%esp)
 84e83ef:	ff d2                	call   *%edx
 84e83f1:	84 c0                	test   %al,%al
 84e83f3:	74 30                	je     84e8425 <_ZN13Inter_LoadEtc26processGrowthCreatureEventER5CUser+0x63>
 84e83f5:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e83fa:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 84e8401:	00 
 84e8402:	89 04 24             	mov    %eax,(%esp)
 84e8405:	e8 8e d5 c2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e840a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e840d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e8411:	74 12                	je     84e8425 <_ZN13Inter_LoadEtc26processGrowthCreatureEventER5CUser+0x63>
 84e8413:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8416:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e841a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e841d:	89 04 24             	mov    %eax,(%esp)
 84e8420:	e8 4b e7 cc ff       	call   81b6b70 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser>
 84e8425:	c9                   	leave
 84e8426:	c3                   	ret
 84e8427:	90                   	nop

```

```c
// Inter_LoadEtc::processGrowthCreatureEvent @ 0x84e83c2

/* Inter_LoadEtc::processGrowthCreatureEvent(CUser&) */

void __thiscall Inter_LoadEtc::processGrowthCreatureEvent(Inter_LoadEtc *this,CUser *param_1)

{
  char cVar1;
  int *piVar2;
  GiveGrowCreatureEvent *this_00;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    this_00 = (GiveGrowCreatureEvent *)
              CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
    if (this_00 != (GiveGrowCreatureEvent *)0x0) {
      GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(this_00,param_1);
    }
  }
  return;
}

```

---

## processGrowthWeaponEvent

```asm
// === 084e834a Inter_LoadEtc::processGrowthWeaponEvent  [0x084e834a-0x84e83c1] ===
 84e834a:	55                   	push   %ebp
 84e834b:	89 e5                	mov    %esp,%ebp
 84e834d:	83 ec 28             	sub    $0x28,%esp
 84e8350:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e8355:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 84e835c:	00 
 84e835d:	89 04 24             	mov    %eax,(%esp)
 84e8360:	e8 33 d6 c2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e8365:	8b 10                	mov    (%eax),%edx
 84e8367:	83 c2 34             	add    $0x34,%edx
 84e836a:	8b 12                	mov    (%edx),%edx
 84e836c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e8373:	00 
 84e8374:	89 04 24             	mov    %eax,(%esp)
 84e8377:	ff d2                	call   *%edx
 84e8379:	84 c0                	test   %al,%al
 84e837b:	74 42                	je     84e83bf <_ZN13Inter_LoadEtc24processGrowthWeaponEventER5CUser+0x75>
 84e837d:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e8382:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 84e8389:	00 
 84e838a:	89 04 24             	mov    %eax,(%esp)
 84e838d:	e8 06 d6 c2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e8392:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e8395:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e8399:	74 24                	je     84e83bf <_ZN13Inter_LoadEtc24processGrowthWeaponEventER5CUser+0x75>
 84e839b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e839e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e83a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e83a5:	89 04 24             	mov    %eax,(%esp)
 84e83a8:	e8 a3 ec c0 ff       	call   80f7050 <_ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser>
 84e83ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e83b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e83b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e83b7:	89 04 24             	mov    %eax,(%esp)
 84e83ba:	e8 67 ee c0 ff       	call   80f7226 <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser>
 84e83bf:	c9                   	leave
 84e83c0:	c3                   	ret
 84e83c1:	90                   	nop

```

```c
// Inter_LoadEtc::processGrowthWeaponEvent @ 0x84e834a

/* Inter_LoadEtc::processGrowthWeaponEvent(CUser&) */

void __thiscall Inter_LoadEtc::processGrowthWeaponEvent(Inter_LoadEtc *this,CUser *param_1)

{
  char cVar1;
  int *piVar2;
  GrowthEquipEvent *this_00;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    this_00 = (GrowthEquipEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
    if (this_00 != (GrowthEquipEvent *)0x0) {
      GrowthEquipEvent::GiftGrowthWeaponBox(this_00,param_1);
      GrowthEquipEvent::SendGrowthWeaponEventInfo(this_00,param_1);
    }
  }
  return;
}

```

---

## processSeriaRoomAniDecoEvent

```asm
// === 084e8428 Inter_LoadEtc::processSeriaRoomAniDecoEvent  [0x084e8428-0x84e84f5] ===
 84e8428:	55                   	push   %ebp
 84e8429:	89 e5                	mov    %esp,%ebp
 84e842b:	56                   	push   %esi
 84e842c:	53                   	push   %ebx
 84e842d:	83 ec 20             	sub    $0x20,%esp
 84e8430:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e8435:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 84e843c:	00 
 84e843d:	89 04 24             	mov    %eax,(%esp)
 84e8440:	e8 53 d5 c2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e8445:	8b 10                	mov    (%eax),%edx
 84e8447:	83 c2 34             	add    $0x34,%edx
 84e844a:	8b 12                	mov    (%edx),%edx
 84e844c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e8453:	00 
 84e8454:	89 04 24             	mov    %eax,(%esp)
 84e8457:	ff d2                	call   *%edx
 84e8459:	84 c0                	test   %al,%al
 84e845b:	0f 84 8e 00 00 00    	je     84e84ef <_ZN13Inter_LoadEtc28processSeriaRoomAniDecoEventE17seriaRoom_AniDecoR5CUser+0xc7>
 84e8461:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8464:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e8467:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e846b:	89 04 24             	mov    %eax,(%esp)
 84e846e:	e8 05 77 d4 ff       	call   822fb78 <_ZN15CUserCharacInfo23setSeriaRoomAniDecoInfoE17seriaRoom_AniDeco>
 84e8473:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e8478:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 84e847f:	00 
 84e8480:	89 04 24             	mov    %eax,(%esp)
 84e8483:	e8 10 d5 c2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e8488:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e848b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e848f:	74 5e                	je     84e84ef <_ZN13Inter_LoadEtc28processSeriaRoomAniDecoEventE17seriaRoom_AniDecoR5CUser+0xc7>
 84e8491:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8494:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8498:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e849b:	89 04 24             	mov    %eax,(%esp)
 84e849e:	e8 f7 34 d9 ff       	call   827b99a <_ZN21SeriaRoomAniDecoEvent13SendEventInfoER5CUser>
 84e84a3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84e84aa:	e8 ef 37 be ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84e84af:	89 c6                	mov    %eax,%esi
 84e84b1:	8b 45 10             	mov    0x10(%ebp),%eax
 84e84b4:	89 04 24             	mov    %eax,(%esp)
 84e84b7:	e8 ee e1 db ff       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 84e84bc:	89 c3                	mov    %eax,%ebx
 84e84be:	e8 be 3c be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e84c3:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 84e84c9:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e84cd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e84d1:	89 04 24             	mov    %eax,(%esp)
 84e84d4:	e8 cf 3b f8 ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 84e84d9:	84 c0                	test   %al,%al
 84e84db:	74 12                	je     84e84ef <_ZN13Inter_LoadEtc28processSeriaRoomAniDecoEventE17seriaRoom_AniDecoR5CUser+0xc7>
 84e84dd:	8b 45 10             	mov    0x10(%ebp),%eax
 84e84e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e84e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e84e7:	89 04 24             	mov    %eax,(%esp)
 84e84ea:	e8 6b 32 d9 ff       	call   827b75a <_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser>
 84e84ef:	83 c4 20             	add    $0x20,%esp
 84e84f2:	5b                   	pop    %ebx
 84e84f3:	5e                   	pop    %esi
 84e84f4:	5d                   	pop    %ebp
 84e84f5:	c3                   	ret

```

```c
// Inter_LoadEtc::processSeriaRoomAniDecoEvent @ 0x84e8428

/* Inter_LoadEtc::processSeriaRoomAniDecoEvent(seriaRoom_AniDeco, CUser&) */

void __thiscall
Inter_LoadEtc::processSeriaRoomAniDecoEvent
          (undefined4 this,undefined4 param_2,CUserCharacInfo *param_3)

{
  char cVar1;
  int *piVar2;
  SeriaRoomAniDecoEvent *this_00;
  long lVar3;
  long lVar4;
  int iVar5;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    CUserCharacInfo::setSeriaRoomAniDecoInfo(param_3,param_2);
    this_00 = (SeriaRoomAniDecoEvent *)
              CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
    if (this_00 != (SeriaRoomAniDecoEvent *)0x0) {
      SeriaRoomAniDecoEvent::SendEventInfo(this_00,(CUser *)param_3);
      lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar4 = CUserCharacInfo::getCurCharacLastPlayTick(param_3);
      iVar5 = G_CEnvironment();
      cVar1 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar4,lVar3);
      if (cVar1 != '\0') {
        SeriaRoomAniDecoEvent::SendAniDecoItem(this_00,(CUser *)param_3);
      }
    }
  }
  return;
}

```

---

## verifyCharacVillage

```asm
// === 084e866c Inter_LoadEtc::verifyCharacVillage  [0x084e866c-0x84e87dd] ===
 84e866c:	55                   	push   %ebp
 84e866d:	89 e5                	mov    %esp,%ebp
 84e866f:	53                   	push   %ebx
 84e8670:	83 ec 24             	sub    $0x24,%esp
 84e8673:	e8 2f 1d bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e8678:	89 04 24             	mov    %eax,(%esp)
 84e867b:	e8 68 9e c5 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 84e8680:	84 c0                	test   %al,%al
 84e8682:	0f 85 4f 01 00 00    	jne    84e87d7 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16b>
 84e8688:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e868b:	89 04 24             	mov    %eax,(%esp)
 84e868e:	e8 d1 ce 15 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 84e8693:	0f be c0             	movsbl %al,%eax
 84e8696:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e8699:	e8 09 1d bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e869e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84e86a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e86a5:	89 04 24             	mov    %eax,(%esp)
 84e86a8:	e8 b7 90 1e 00       	call   86d1764 <_ZN9GameWorld10GetVillageEi>
 84e86ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e86b0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84e86b4:	75 18                	jne    84e86ce <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x62>
 84e86b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e86b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e86c0:	00 
 84e86c1:	89 04 24             	mov    %eax,(%esp)
 84e86c4:	e8 f3 ce 15 00       	call   86455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>
 84e86c9:	e9 0a 01 00 00       	jmp    84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e86ce:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 84e86d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e86d5:	89 04 24             	mov    %eax,(%esp)
 84e86d8:	e8 db 1b bf ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84e86dd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84e86e0:	8b 52 2c             	mov    0x2c(%edx),%edx
 84e86e3:	39 d0                	cmp    %edx,%eax
 84e86e5:	0f 9c c0             	setl   %al
 84e86e8:	84 c0                	test   %al,%al
 84e86ea:	74 04                	je     84e86f0 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x84>
 84e86ec:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 84e86f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e86f3:	8b 40 30             	mov    0x30(%eax),%eax
 84e86f6:	85 c0                	test   %eax,%eax
 84e86f8:	74 28                	je     84e8722 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0xb6>
 84e86fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e86fd:	8b 58 30             	mov    0x30(%eax),%ebx
 84e8700:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8703:	89 04 24             	mov    %eax,(%esp)
 84e8706:	e8 9b 21 cb ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84e870b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e870f:	89 04 24             	mov    %eax,(%esp)
 84e8712:	e8 09 32 1c 00       	call   86ab920 <_ZNK9UserQuest12isClearQuestEi>
 84e8717:	83 f0 01             	xor    $0x1,%eax
 84e871a:	84 c0                	test   %al,%al
 84e871c:	74 04                	je     84e8722 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0xb6>
 84e871e:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 84e8722:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 84e8726:	0f 84 ac 00 00 00    	je     84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e872c:	83 7d ec 0b          	cmpl   $0xb,-0x14(%ebp)
 84e8730:	0f 87 a2 00 00 00    	ja     84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e8736:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e8739:	c1 e0 02             	shl    $0x2,%eax
 84e873c:	8b 80 80 a4 c8 08    	mov    0x8c8a480(%eax),%eax
 84e8742:	ff e0                	jmp    *%eax
 84e8744:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8747:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e874e:	00 
 84e874f:	89 04 24             	mov    %eax,(%esp)
 84e8752:	e8 65 ce 15 00       	call   86455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>
 84e8757:	eb 7f                	jmp    84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e8759:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e875c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84e8763:	00 
 84e8764:	89 04 24             	mov    %eax,(%esp)
 84e8767:	e8 50 ce 15 00       	call   86455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>
 84e876c:	eb 6a                	jmp    84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e876e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8771:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e8778:	00 
 84e8779:	89 04 24             	mov    %eax,(%esp)
 84e877c:	e8 3b ce 15 00       	call   86455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>
 84e8781:	eb 55                	jmp    84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e8783:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8786:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84e878d:	00 
 84e878e:	89 04 24             	mov    %eax,(%esp)
 84e8791:	e8 26 ce 15 00       	call   86455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>
 84e8796:	eb 40                	jmp    84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e8798:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e879b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84e87a2:	00 
 84e87a3:	89 04 24             	mov    %eax,(%esp)
 84e87a6:	e8 11 ce 15 00       	call   86455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>
 84e87ab:	eb 2b                	jmp    84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e87ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e87b0:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84e87b7:	00 
 84e87b8:	89 04 24             	mov    %eax,(%esp)
 84e87bb:	e8 fc cd 15 00       	call   86455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>
 84e87c0:	eb 16                	jmp    84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e87c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e87c5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84e87cc:	00 
 84e87cd:	89 04 24             	mov    %eax,(%esp)
 84e87d0:	e8 e7 cd 15 00       	call   86455bc <_ZN15CUserCharacInfo16setCurCharacVillEc>
 84e87d5:	eb 01                	jmp    84e87d8 <_ZN13Inter_LoadEtc19verifyCharacVillageEP5CUser+0x16c>
 84e87d7:	90                   	nop
 84e87d8:	83 c4 24             	add    $0x24,%esp
 84e87db:	5b                   	pop    %ebx
 84e87dc:	5d                   	pop    %ebp
 84e87dd:	c3                   	ret

```

```c
// Inter_LoadEtc::verifyCharacVillage @ 0x84e866c

/* Inter_LoadEtc::verifyCharacVillage(CUser*) */

void __thiscall Inter_LoadEtc::verifyCharacVillage(Inter_LoadEtc *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  GameWorld *pGVar4;
  int iVar5;
  int iVar6;
  UserQuest *this_00;
  
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar5 = GameWorld::GetVillage(pGVar4,(int)cVar2);
    if (iVar5 == 0) {
      CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x01');
    }
    else {
      iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      bVar1 = iVar6 < *(int *)(iVar5 + 0x2c);
      if (*(int *)(iVar5 + 0x30) != 0) {
        iVar5 = *(int *)(iVar5 + 0x30);
        this_00 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
        cVar3 = UserQuest::isClearQuest(this_00,iVar5);
        if (cVar3 != '\x01') {
          bVar1 = true;
        }
      }
      if (bVar1) {
        switch((int)cVar2) {
        case 2:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x01');
          break;
        case 3:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x02');
          break;
        case 4:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x01');
          break;
        case 5:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x02');
          break;
        case 6:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x03');
          break;
        case 9:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x03');
          break;
        case 0xb:
          CUserCharacInfo::setCurCharacVill((CUserCharacInfo *)param_1,'\x02');
        }
      }
    }
  }
  return;
}

```

