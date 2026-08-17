# DisPatcher_GetItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c35ac DisPatcher_GetItem::check_error  [0x081c35ac-0x81c35bf] ===
 81c35ac:	55                   	push   %ebp
 81c35ad:	89 e5                	mov    %esp,%ebp
 81c35af:	83 ec 10             	sub    $0x10,%esp
 81c35b2:	8b 45 10             	mov    0x10(%ebp),%eax
 81c35b5:	89 45 fc             	mov    %eax,-0x4(%ebp)
 81c35b8:	b8 00 00 00 00       	mov    $0x0,%eax
 81c35bd:	c9                   	leave
 81c35be:	c3                   	ret
 81c35bf:	90                   	nop

```

```c
// DisPatcher_GetItem::check_error @ 0x81c35ac

/* DisPatcher_GetItem::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_GetItem::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## process

```asm
// === 081c35c0 DisPatcher_GetItem::process  [0x081c35c0-0x81c3ce7] ===
 81c35c0:	55                   	push   %ebp
 81c35c1:	89 e5                	mov    %esp,%ebp
 81c35c3:	56                   	push   %esi
 81c35c4:	53                   	push   %ebx
 81c35c5:	83 ec 50             	sub    $0x50,%esp
 81c35c8:	8b 45 14             	mov    0x14(%ebp),%eax
 81c35cb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c35ce:	8b 45 10             	mov    0x10(%ebp),%eax
 81c35d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c35d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c35d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c35dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81c35df:	89 04 24             	mov    %eax,(%esp)
 81c35e2:	e8 c5 ff ff ff       	call   81c35ac <_ZN18DisPatcher_GetItem11check_errorEP5CUserR8MSG_BASE>
 81c35e7:	89 c2                	mov    %eax,%edx
 81c35e9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c35ec:	89 50 04             	mov    %edx,0x4(%eax)
 81c35ef:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c35f2:	8b 40 04             	mov    0x4(%eax),%eax
 81c35f5:	85 c0                	test   %eax,%eax
 81c35f7:	7e 0a                	jle    81c3603 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x43>
 81c35f9:	b8 00 00 00 00       	mov    $0x0,%eax
 81c35fe:	e9 de 06 00 00       	jmp    81c3ce1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x721>
 81c3603:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c3606:	8b 40 04             	mov    0x4(%eax),%eax
 81c3609:	85 c0                	test   %eax,%eax
 81c360b:	79 32                	jns    81c363f <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x7f>
 81c360d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3610:	89 04 24             	mov    %eax,(%esp)
 81c3613:	e8 56 6d f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c3618:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81c361b:	8b 52 04             	mov    0x4(%edx),%edx
 81c361e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c3622:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c3626:	c7 44 24 04 c0 5c bd 	movl   $0x8bd5cc0,0x4(%esp)
 81c362d:	08 
 81c362e:	c7 04 24 5c 0e 00 00 	movl   $0xe5c,(%esp)
 81c3635:	e8 9d d2 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c363a:	e9 a2 06 00 00       	jmp    81c3ce1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x721>
 81c363f:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3642:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c3645:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3648:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 81c364c:	83 f0 01             	xor    $0x1,%eax
 81c364f:	84 c0                	test   %al,%al
 81c3651:	74 3a                	je     81c368d <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0xcd>
 81c3653:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3656:	89 04 24             	mov    %eax,(%esp)
 81c3659:	e8 fc 62 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c365e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c3665:	00 
 81c3666:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c366d:	00 
 81c366e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c3675:	00 
 81c3676:	c7 44 24 08 bb 03 00 	movl   $0x3bb,0x8(%esp)
 81c367d:	00 
 81c367e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c3681:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c3685:	89 04 24             	mov    %eax,(%esp)
 81c3688:	e8 f1 55 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c368d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3690:	0f b7 48 15          	movzwl 0x15(%eax),%ecx
 81c3694:	0f b7 c1             	movzwl %cx,%eax
 81c3697:	69 c0 93 24 00 00    	imul   $0x2493,%eax,%eax
 81c369d:	c1 e8 10             	shr    $0x10,%eax
 81c36a0:	89 ca                	mov    %ecx,%edx
 81c36a2:	66 29 c2             	sub    %ax,%dx
 81c36a5:	66 d1 ea             	shr    $1,%dx
 81c36a8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81c36ab:	89 c2                	mov    %eax,%edx
 81c36ad:	66 c1 ea 02          	shr    $0x2,%dx
 81c36b1:	89 d0                	mov    %edx,%eax
 81c36b3:	c1 e0 03             	shl    $0x3,%eax
 81c36b6:	66 29 d0             	sub    %dx,%ax
 81c36b9:	89 ca                	mov    %ecx,%edx
 81c36bb:	66 29 c2             	sub    %ax,%dx
 81c36be:	66 85 d2             	test   %dx,%dx
 81c36c1:	74 46                	je     81c3709 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x149>
 81c36c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c36c6:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81c36ca:	0f b7 f0             	movzwl %ax,%esi
 81c36cd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c36d0:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81c36d4:	0f b7 d8             	movzwl %ax,%ebx
 81c36d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c36da:	89 04 24             	mov    %eax,(%esp)
 81c36dd:	e8 78 62 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c36e2:	89 74 24 14          	mov    %esi,0x14(%esp)
 81c36e6:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81c36ea:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c36f1:	00 
 81c36f2:	c7 44 24 08 2f 01 00 	movl   $0x12f,0x8(%esp)
 81c36f9:	00 
 81c36fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c36fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c3701:	89 04 24             	mov    %eax,(%esp)
 81c3704:	e8 75 55 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c3709:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c370c:	0f b7 40 1c          	movzwl 0x1c(%eax),%eax
 81c3710:	0f b7 d0             	movzwl %ax,%edx
 81c3713:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3716:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 81c371a:	0f b7 c0             	movzwl %ax,%eax
 81c371d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 81c3720:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 81c3726:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c372a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c372e:	89 0c 24             	mov    %ecx,(%esp)
 81c3731:	e8 4e b9 06 00       	call   822f084 <_ZN15cUserHistoryLog12SetItemXYPosEtt>
 81c3736:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3739:	89 04 24             	mov    %eax,(%esp)
 81c373c:	e8 4b 6c f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c3741:	83 f8 05             	cmp    $0x5,%eax
 81c3744:	0f 94 c0             	sete   %al
 81c3747:	84 c0                	test   %al,%al
 81c3749:	0f 84 f1 03 00 00    	je     81c3b40 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x580>
 81c374f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3752:	89 04 24             	mov    %eax,(%esp)
 81c3755:	e8 f2 19 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c375a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c375d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81c3761:	0f 84 6b 05 00 00    	je     81c3cd2 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x712>
 81c3767:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c376a:	0f b7 40 1c          	movzwl 0x1c(%eax),%eax
 81c376e:	0f b7 f0             	movzwl %ax,%esi
 81c3771:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3774:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 81c3778:	0f b7 d8             	movzwl %ax,%ebx
 81c377b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81c3782:	e8 25 21 f8 ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 81c3787:	c7 44 24 10 dc 05 00 	movl   $0x5dc,0x10(%esp)
 81c378e:	00 
 81c378f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81c3793:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c3797:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c379b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c379e:	89 04 24             	mov    %eax,(%esp)
 81c37a1:	e8 06 cb 06 00       	call   82302ac <_ZN5CUser18GetItemTimeCheckerEjttj>
 81c37a6:	85 c0                	test   %eax,%eax
 81c37a8:	0f 95 c0             	setne  %al
 81c37ab:	84 c0                	test   %al,%al
 81c37ad:	74 5a                	je     81c3809 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x249>
 81c37af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c37b2:	0f b7 80 44 e4 08 00 	movzwl 0x8e444(%eax),%eax
 81c37b9:	66 3d f4 01          	cmp    $0x1f4,%ax
 81c37bd:	7f 10                	jg     81c37cf <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x20f>
 81c37bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c37c2:	0f b7 80 46 e4 08 00 	movzwl 0x8e446(%eax),%eax
 81c37c9:	66 3d f4 01          	cmp    $0x1f4,%ax
 81c37cd:	7e 3a                	jle    81c3809 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x249>
 81c37cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c37d2:	89 04 24             	mov    %eax,(%esp)
 81c37d5:	e8 80 61 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c37da:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c37e1:	00 
 81c37e2:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c37e9:	00 
 81c37ea:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c37f1:	00 
 81c37f2:	c7 44 24 08 30 01 00 	movl   $0x130,0x8(%esp)
 81c37f9:	00 
 81c37fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c37fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c3801:	89 04 24             	mov    %eax,(%esp)
 81c3804:	e8 75 54 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c3809:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c380c:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c3810:	0f b7 c8             	movzwl %ax,%ecx
 81c3813:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3816:	0f b7 40 1c          	movzwl 0x1c(%eax),%eax
 81c381a:	0f b7 d0             	movzwl %ax,%edx
 81c381d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3820:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 81c3824:	0f b7 c0             	movzwl %ax,%eax
 81c3827:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81c382b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c382f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3833:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3836:	89 04 24             	mov    %eax,(%esp)
 81c3839:	e8 2c ce 06 00       	call   823066a <_ZN5CUser20GetItemSerialCheckerEtti>
 81c383e:	83 f8 02             	cmp    $0x2,%eax
 81c3841:	0f 94 c0             	sete   %al
 81c3844:	84 c0                	test   %al,%al
 81c3846:	74 3a                	je     81c3882 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x2c2>
 81c3848:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c384b:	89 04 24             	mov    %eax,(%esp)
 81c384e:	e8 07 61 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c3853:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c385a:	00 
 81c385b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c3862:	00 
 81c3863:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c386a:	00 
 81c386b:	c7 44 24 08 31 01 00 	movl   $0x131,0x8(%esp)
 81c3872:	00 
 81c3873:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c3876:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c387a:	89 04 24             	mov    %eax,(%esp)
 81c387d:	e8 fc 53 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c3882:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c3885:	89 04 24             	mov    %eax,(%esp)
 81c3888:	e8 b3 1f f8 ff       	call   8145840 <_ZN6CParty14IsRoutingStateEv>
 81c388d:	84 c0                	test   %al,%al
 81c388f:	74 14                	je     81c38a5 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x2e5>
 81c3891:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c3894:	c7 40 04 d8 00 00 00 	movl   $0xd8,0x4(%eax)
 81c389b:	b8 00 00 00 00       	mov    $0x0,%eax
 81c38a0:	e9 3c 04 00 00       	jmp    81c3ce1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x721>
 81c38a5:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81c38ac:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 81c38b0:	c6 45 d6 00          	movb   $0x0,-0x2a(%ebp)
 81c38b4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c38b7:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c38bb:	0f be c8             	movsbl %al,%ecx
 81c38be:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c38c1:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c38c5:	3c 01                	cmp    $0x1,%al
 81c38c7:	0f 94 c0             	sete   %al
 81c38ca:	0f b6 d0             	movzbl %al,%edx
 81c38cd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c38d0:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c38d4:	0f b7 c0             	movzwl %ax,%eax
 81c38d7:	8d 5d d6             	lea    -0x2a(%ebp),%ebx
 81c38da:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81c38de:	8d 5d d7             	lea    -0x29(%ebp),%ebx
 81c38e1:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81c38e5:	8d 5d d8             	lea    -0x28(%ebp),%ebx
 81c38e8:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81c38ec:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81c38f0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c38f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c38f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c38fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c38ff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c3902:	89 04 24             	mov    %eax,(%esp)
 81c3905:	e8 8e 02 3e 00       	call   85a3b98 <_ZN6CParty8get_itemEP5CUseribcRiRhRb>
 81c390a:	84 c0                	test   %al,%al
 81c390c:	0f 84 c0 03 00 00    	je     81c3cd2 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x712>
 81c3912:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c3915:	89 04 24             	mov    %eax,(%esp)
 81c3918:	e8 6f 9f 06 00       	call   822d88c <_ZN6CParty13IsAutoCreatedEv>
 81c391d:	84 c0                	test   %al,%al
 81c391f:	75 10                	jne    81c3931 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x371>
 81c3921:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c3924:	89 04 24             	mov    %eax,(%esp)
 81c3927:	e8 3e 68 3d 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 81c392c:	83 f8 01             	cmp    $0x1,%eax
 81c392f:	75 07                	jne    81c3938 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x378>
 81c3931:	b8 01 00 00 00       	mov    $0x1,%eax
 81c3936:	eb 05                	jmp    81c393d <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x37d>
 81c3938:	b8 00 00 00 00       	mov    $0x0,%eax
 81c393d:	84 c0                	test   %al,%al
 81c393f:	74 70                	je     81c39b1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x3f1>
 81c3941:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3944:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81c3948:	0f b7 f0             	movzwl %ax,%esi
 81c394b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c394e:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81c3952:	0f b7 d8             	movzwl %ax,%ebx
 81c3955:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3958:	89 04 24             	mov    %eax,(%esp)
 81c395b:	e8 58 c3 06 00       	call   822fcb8 <_ZN5CUser13getBackupSeedEv>
 81c3960:	89 74 24 08          	mov    %esi,0x8(%esp)
 81c3964:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c3968:	89 04 24             	mov    %eax,(%esp)
 81c396b:	e8 2d e7 6c 00       	call   889209d <_Z18checkGetItemPacketiii>
 81c3970:	83 f0 01             	xor    $0x1,%eax
 81c3973:	84 c0                	test   %al,%al
 81c3975:	74 3a                	je     81c39b1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x3f1>
 81c3977:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c397a:	89 04 24             	mov    %eax,(%esp)
 81c397d:	e8 d8 5f f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81c3982:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81c3989:	00 
 81c398a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c3991:	00 
 81c3992:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c3999:	00 
 81c399a:	c7 44 24 08 2e 01 00 	movl   $0x12e,0x8(%esp)
 81c39a1:	00 
 81c39a2:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c39a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c39a9:	89 04 24             	mov    %eax,(%esp)
 81c39ac:	e8 cd 52 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81c39b1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c39b4:	05 24 0b 00 00       	add    $0xb24,%eax
 81c39b9:	89 04 24             	mov    %eax,(%esp)
 81c39bc:	e8 17 97 06 00       	call   822d0d8 <_ZN13CBattle_Field17get_dungeon_indexEv>
 81c39c1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c39c4:	e8 d2 87 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81c39c9:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81c39cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c39d0:	89 04 24             	mov    %eax,(%esp)
 81c39d3:	e8 20 c0 19 00       	call   835f9f8 <_ZNK12CDataManager12find_dungeonEi>
 81c39d8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c39db:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c39df:	0f 84 0b 01 00 00    	je     81c3af0 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x530>
 81c39e5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c39e8:	83 f8 ff             	cmp    $0xffffffff,%eax
 81c39eb:	0f 84 ff 00 00 00    	je     81c3af0 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x530>
 81c39f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c39f4:	0f b6 80 5c 08 00 00 	movzbl 0x85c(%eax),%eax
 81c39fb:	84 c0                	test   %al,%al
 81c39fd:	0f 84 22 01 00 00    	je     81c3b25 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x565>
 81c3a03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3a06:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c3a0a:	3c 02                	cmp    $0x2,%al
 81c3a0c:	74 1a                	je     81c3a28 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x468>
 81c3a0e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3a11:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c3a15:	3c 03                	cmp    $0x3,%al
 81c3a17:	74 0f                	je     81c3a28 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x468>
 81c3a19:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3a1c:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c3a20:	3c 04                	cmp    $0x4,%al
 81c3a22:	0f 85 00 01 00 00    	jne    81c3b28 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x568>
 81c3a28:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81c3a2c:	83 f0 01             	xor    $0x1,%eax
 81c3a2f:	84 c0                	test   %al,%al
 81c3a31:	0f 84 f4 00 00 00    	je     81c3b2b <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x56b>
 81c3a37:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81c3a3a:	89 04 24             	mov    %eax,(%esp)
 81c3a3d:	e8 0a a3 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c3a42:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 81c3a49:	00 
 81c3a4a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c3a51:	00 
 81c3a52:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81c3a55:	89 04 24             	mov    %eax,(%esp)
 81c3a58:	e8 9f 7e f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c3a5d:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81c3a64:	00 
 81c3a65:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81c3a68:	89 04 24             	mov    %eax,(%esp)
 81c3a6b:	e8 b0 7e f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c3a70:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3a73:	89 04 24             	mov    %eax,(%esp)
 81c3a76:	e8 01 69 f1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81c3a7b:	0f b7 c0             	movzwl %ax,%eax
 81c3a7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3a82:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81c3a85:	89 04 24             	mov    %eax,(%esp)
 81c3a88:	e8 17 64 f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c3a8d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81c3a90:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3a94:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81c3a97:	89 04 24             	mov    %eax,(%esp)
 81c3a9a:	e8 9d 7e f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81c3a9f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c3aa6:	00 
 81c3aa7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81c3aaa:	89 04 24             	mov    %eax,(%esp)
 81c3aad:	e8 a6 7e f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c3ab2:	e8 f0 68 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c3ab7:	8d 55 c8             	lea    -0x38(%ebp),%edx
 81c3aba:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c3abe:	89 04 24             	mov    %eax,(%esp)
 81c3ac1:	e8 4e 51 50 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81c3ac6:	eb 1b                	jmp    81c3ae3 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x523>
 81c3ac8:	89 d3                	mov    %edx,%ebx
 81c3aca:	89 c6                	mov    %eax,%esi
 81c3acc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81c3acf:	89 04 24             	mov    %eax,(%esp)
 81c3ad2:	e8 a9 a3 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c3ad7:	89 f0                	mov    %esi,%eax
 81c3ad9:	89 da                	mov    %ebx,%edx
 81c3adb:	89 04 24             	mov    %eax,(%esp)
 81c3ade:	e8 6d fc 91 00       	call   8ae3750 <_Unwind_Resume>
 81c3ae3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81c3ae6:	89 04 24             	mov    %eax,(%esp)
 81c3ae9:	e8 92 a3 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c3aee:	eb 3c                	jmp    81c3b2c <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x56c>
 81c3af0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c3af3:	89 44 24 14          	mov    %eax,0x14(%esp)
 81c3af7:	c7 44 24 10 c8 15 bc 	movl   $0x8bc15c8,0x10(%esp)
 81c3afe:	08 
 81c3aff:	c7 44 24 0c 14 0f 00 	movl   $0xf14,0xc(%esp)
 81c3b06:	00 
 81c3b07:	c7 44 24 08 c0 5c bd 	movl   $0x8bd5cc0,0x8(%esp)
 81c3b0e:	08 
 81c3b0f:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81c3b16:	08 
 81c3b17:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81c3b1e:	e8 e7 00 91 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81c3b23:	eb 07                	jmp    81c3b2c <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x56c>
 81c3b25:	90                   	nop
 81c3b26:	eb 04                	jmp    81c3b2c <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x56c>
 81c3b28:	90                   	nop
 81c3b29:	eb 01                	jmp    81c3b2c <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x56c>
 81c3b2b:	90                   	nop
 81c3b2c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c3b2f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 81c3b36:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3b3b:	e9 a1 01 00 00       	jmp    81c3ce1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x721>
 81c3b40:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3b43:	89 04 24             	mov    %eax,(%esp)
 81c3b46:	e8 41 68 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c3b4b:	83 f8 0a             	cmp    $0xa,%eax
 81c3b4e:	0f 94 c0             	sete   %al
 81c3b51:	84 c0                	test   %al,%al
 81c3b53:	74 75                	je     81c3bca <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x60a>
 81c3b55:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3b58:	89 04 24             	mov    %eax,(%esp)
 81c3b5b:	e8 44 17 49 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 81c3b60:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c3b63:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c3b67:	0f 84 65 01 00 00    	je     81c3cd2 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x712>
 81c3b6d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3b70:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c3b74:	0f be c8             	movsbl %al,%ecx
 81c3b77:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3b7a:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c3b7e:	3c 01                	cmp    $0x1,%al
 81c3b80:	0f 94 c0             	sete   %al
 81c3b83:	0f b6 d0             	movzbl %al,%edx
 81c3b86:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3b89:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c3b8d:	0f b7 c0             	movzwl %ax,%eax
 81c3b90:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81c3b94:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c3b98:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c3b9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3b9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3ba3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c3ba6:	89 04 24             	mov    %eax,(%esp)
 81c3ba9:	e8 88 04 2a 00       	call   8464036 <_ZN8WongWork11CDeathTower16handlePickupItemEP5CUseribc>
 81c3bae:	84 c0                	test   %al,%al
 81c3bb0:	0f 84 1c 01 00 00    	je     81c3cd2 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x712>
 81c3bb6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c3bb9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 81c3bc0:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3bc5:	e9 17 01 00 00       	jmp    81c3ce1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x721>
 81c3bca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3bcd:	89 04 24             	mov    %eax,(%esp)
 81c3bd0:	e8 b7 67 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c3bd5:	83 f8 0c             	cmp    $0xc,%eax
 81c3bd8:	0f 94 c0             	sete   %al
 81c3bdb:	84 c0                	test   %al,%al
 81c3bdd:	74 3f                	je     81c3c1e <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x65e>
 81c3bdf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3be2:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c3be6:	0f be c8             	movsbl %al,%ecx
 81c3be9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3bec:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81c3bf0:	3c 01                	cmp    $0x1,%al
 81c3bf2:	0f 94 c0             	sete   %al
 81c3bf5:	0f b6 d0             	movzbl %al,%edx
 81c3bf8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3bfb:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c3bff:	0f b7 c0             	movzwl %ax,%eax
 81c3c02:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81c3c06:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c3c0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3c0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3c11:	89 04 24             	mov    %eax,(%esp)
 81c3c14:	e8 7b 2d f8 ff       	call   8146994 <_ZN6Global14CBossTowerFunc7GetItemEP5CUseribc>
 81c3c19:	e9 b4 00 00 00       	jmp    81c3cd2 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x712>
 81c3c1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3c21:	89 04 24             	mov    %eax,(%esp)
 81c3c24:	e8 63 67 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c3c29:	83 f8 08             	cmp    $0x8,%eax
 81c3c2c:	0f 94 c0             	sete   %al
 81c3c2f:	84 c0                	test   %al,%al
 81c3c31:	0f 84 8a 00 00 00    	je     81c3cc1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x701>
 81c3c37:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3c3a:	89 04 24             	mov    %eax,(%esp)
 81c3c3d:	e8 42 c2 06 00       	call   822fe84 <_ZN5CUser15GetWarRoomIndexEv>
 81c3c42:	0f bf d8             	movswl %ax,%ebx
 81c3c45:	e8 44 85 f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81c3c4a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c3c4e:	89 04 24             	mov    %eax,(%esp)
 81c3c51:	e8 7a e9 0d 00       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 81c3c56:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c3c59:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c3c5d:	75 2d                	jne    81c3c8c <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x6cc>
 81c3c5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3c62:	89 04 24             	mov    %eax,(%esp)
 81c3c65:	e8 04 67 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c3c6a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c3c6e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c3c75:	00 
 81c3c76:	c7 44 24 04 c0 5c bd 	movl   $0x8bd5cc0,0x4(%esp)
 81c3c7d:	08 
 81c3c7e:	c7 04 24 32 0f 00 00 	movl   $0xf32,(%esp)
 81c3c85:	e8 4d cc 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3c8a:	eb 55                	jmp    81c3ce1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x721>
 81c3c8c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3c8f:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c3c93:	0f b7 c0             	movzwl %ax,%eax
 81c3c96:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c3c9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3c9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3ca1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3ca4:	89 04 24             	mov    %eax,(%esp)
 81c3ca7:	e8 82 ad 4f 00       	call   86bea2e <_ZN7WarRoom13HandleGetItemEP5CUseri>
 81c3cac:	84 c0                	test   %al,%al
 81c3cae:	74 22                	je     81c3cd2 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x712>
 81c3cb0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c3cb3:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 81c3cba:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3cbf:	eb 20                	jmp    81c3ce1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x721>
 81c3cc1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c3cc4:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81c3ccb:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3cd0:	eb 0f                	jmp    81c3ce1 <_ZN18DisPatcher_GetItem7processEP5CUserR8MSG_BASER9ParamBase+0x721>
 81c3cd2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c3cd5:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81c3cdc:	b8 00 00 00 00       	mov    $0x0,%eax
 81c3ce1:	83 c4 50             	add    $0x50,%esp
 81c3ce4:	5b                   	pop    %ebx
 81c3ce5:	5e                   	pop    %esi
 81c3ce6:	5d                   	pop    %ebp
 81c3ce7:	c3                   	ret

```

```c
// DisPatcher_GetItem::process @ 0x81c35c0

/* DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_GetItem::process
          (DisPatcher_GetItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  CHackAnalyzer *pCVar9;
  int iVar10;
  GameWorld *this_00;
  PacketGuard local_3c [14];
  bool local_2e;
  uchar local_2d;
  int local_2c;
  ParamBase *local_28;
  MSG_BASE *local_24;
  CParty *local_20;
  undefined4 local_1c;
  int local_18;
  CDeathTower *local_14;
  WarRoom *local_10;
  
  local_28 = param_3;
  uVar7 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_28 + 4) = uVar7;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar8 = CUser::get_acc_id(param_1);
      uVar7 = LineFunc(0xe5c,
                       "virtual int DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_28 + 4),uVar8);
    }
    else {
      local_24 = param_2;
      if (param_2[0x17] != (MSG_BASE)0x1) {
        pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x3bb,1,0,0);
      }
      uVar1 = *(ushort *)(local_24 + 0x15);
      if ((ushort)(uVar1 + ((ushort)((uint)((ushort)(uVar1 - (short)((uint)uVar1 * 0x2493 >> 0x10))
                                           >> 1) + ((uint)uVar1 * 0x2493 >> 0x10)) >> 2) * -7) != 0)
      {
        uVar2 = *(undefined2 *)(local_24 + 0x13);
        uVar3 = *(undefined2 *)(local_24 + 0x11);
        pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x12f,1,uVar3,uVar2);
      }
      cUserHistoryLog::SetItemXYPos
                ((cUserHistoryLog *)(param_1 + 0x79700),*(ushort *)(local_24 + 0x1a),
                 *(ushort *)(local_24 + 0x1c));
      iVar10 = CUser::get_state(param_1);
      if (iVar10 == 5) {
        local_20 = (CParty *)CUser::GetParty(param_1);
        if (local_20 != (CParty *)0x0) {
          uVar1 = *(ushort *)(local_24 + 0x1c);
          uVar4 = *(ushort *)(local_24 + 0x1a);
          uVar8 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
          iVar10 = CUser::GetItemTimeChecker(param_1,uVar8,uVar4,uVar1,0x5dc);
          if ((iVar10 != 0) &&
             ((500 < *(short *)(param_1 + 0x8e444) || (500 < *(short *)(param_1 + 0x8e446))))) {
            pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x130,1,0,0);
          }
          iVar10 = CUser::GetItemSerialChecker
                             (param_1,*(ushort *)(local_24 + 0x1a),*(ushort *)(local_24 + 0x1c),
                              (uint)*(ushort *)(local_24 + 0xd));
          if (iVar10 == 2) {
            pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x131,1,0,0);
          }
          cVar6 = CParty::IsRoutingState(local_20);
          if (cVar6 != '\0') {
            *(undefined4 *)(local_28 + 4) = 0xd8;
            return 0;
          }
          local_2c = 0;
          local_2d = '\0';
          local_2e = false;
          cVar6 = CParty::get_item(local_20,param_1,(uint)*(ushort *)(local_24 + 0xd),
                                   local_24[0xf] == (MSG_BASE)0x1,(char)local_24[0x10],&local_2c,
                                   &local_2d,&local_2e);
          if (cVar6 != '\0') {
            cVar6 = CParty::IsAutoCreated(local_20);
            if ((cVar6 == '\0') && (iVar10 = CParty::get_member_count(local_20), iVar10 != 1)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              uVar1 = *(ushort *)(local_24 + 0x13);
              uVar4 = *(ushort *)(local_24 + 0x11);
              iVar10 = CUser::getBackupSeed(param_1);
              cVar6 = checkGetItemPacket(iVar10,(uint)uVar4,(uint)uVar1);
              if (cVar6 != '\x01') {
                pCVar9 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar9,param_1,0x12e,1,0,0);
              }
            }
            local_1c = CBattle_Field::get_dungeon_index((CBattle_Field *)(local_20 + 0xb24));
            iVar10 = G_CDataManager();
            local_18 = CDataManager::find_dungeon(iVar10);
            if ((local_18 == 0) || (local_2c == -1)) {
              LogManager::logFormat
                        (1,"PacketDispatcher_Impl_1.cpp",
                         "virtual int DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&)",
                         0xf14,
                         "DisPatcher_GetItem::dispatch_sig G_CDataManager()->find_dungeon(%d) fail",
                         local_1c);
            }
            else if (((*(char *)(local_18 + 0x85c) != '\0') &&
                     (((local_24[0x10] == (MSG_BASE)0x2 || (local_24[0x10] == (MSG_BASE)0x3)) ||
                      (local_24[0x10] == (MSG_BASE)0x4)))) && (local_2e != true)) {
              PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 081c3a58 to 081c3ac5 has its CatchHandler @ 081c3ac8 */
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x56);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,5);
              uVar8 = CUser::get_unique_id(param_1);
              InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,uVar8 & 0xffff);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_2c);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
              this_00 = (GameWorld *)G_GameWorld();
              GameWorld::send_all(this_00,local_3c);
              PacketGuard::~PacketGuard(local_3c);
            }
            *(undefined4 *)(local_28 + 4) = 0;
            return 0;
          }
        }
      }
      else {
        iVar10 = CUser::get_state(param_1);
        if (iVar10 == 10) {
          local_14 = (CDeathTower *)CUser::getDeathTower(param_1);
          if ((local_14 != (CDeathTower *)0x0) &&
             (cVar6 = WongWork::CDeathTower::handlePickupItem
                                (local_14,param_1,(uint)*(ushort *)(local_24 + 0xd),
                                 local_24[0xf] == (MSG_BASE)0x1,(char)local_24[0x10]), cVar6 != '\0'
             )) {
            *(undefined4 *)(local_28 + 4) = 0;
            return 0;
          }
        }
        else {
          iVar10 = CUser::get_state(param_1);
          if (iVar10 == 0xc) {
            Global::CBossTowerFunc::GetItem
                      (param_1,(uint)*(ushort *)(local_24 + 0xd),local_24[0xf] == (MSG_BASE)0x1,
                       (char)local_24[0x10]);
          }
          else {
            iVar10 = CUser::get_state(param_1);
            if (iVar10 != 8) {
              *(undefined4 *)(local_28 + 4) = 0x13;
              return 0;
            }
            CUser::GetWarRoomIndex(param_1);
            iVar10 = G_CGameManager();
            local_10 = (WarRoom *)CGameManager::GetWarRoom(iVar10);
            if (local_10 == (WarRoom *)0x0) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar7 = LineFunc(0xf32,
                               "virtual int DisPatcher_GetItem::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar7;
            }
            cVar6 = WarRoom::HandleGetItem(local_10,param_1,(uint)*(ushort *)(local_24 + 0xd));
            if (cVar6 != '\0') {
              *(undefined4 *)(local_28 + 4) = 0;
              return 0;
            }
          }
        }
      }
      *(undefined4 *)(local_28 + 4) = 0x7fffffff;
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```

---

## read

```asm
// === 081c335c DisPatcher_GetItem::read  [0x081c335c-0x81c35ab] ===
 81c335c:	55                   	push   %ebp
 81c335d:	89 e5                	mov    %esp,%ebp
 81c335f:	83 ec 28             	sub    $0x28,%esp
 81c3362:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3365:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c3368:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c336b:	83 c0 0d             	add    $0xd,%eax
 81c336e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3372:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3375:	89 04 24             	mov    %eax,(%esp)
 81c3378:	e8 33 9d 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c337d:	83 f0 01             	xor    $0x1,%eax
 81c3380:	84 c0                	test   %al,%al
 81c3382:	74 29                	je     81c33ad <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x51>
 81c3384:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c338b:	00 
 81c338c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c3393:	00 
 81c3394:	c7 44 24 04 20 5d bd 	movl   $0x8bd5d20,0x4(%esp)
 81c339b:	08 
 81c339c:	c7 04 24 2d 0e 00 00 	movl   $0xe2d,(%esp)
 81c33a3:	e8 2f d5 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c33a8:	e9 fd 01 00 00       	jmp    81c35aa <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x24e>
 81c33ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c33b0:	83 c0 0f             	add    $0xf,%eax
 81c33b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c33b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c33ba:	89 04 24             	mov    %eax,(%esp)
 81c33bd:	e8 60 9b 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c33c2:	83 f0 01             	xor    $0x1,%eax
 81c33c5:	84 c0                	test   %al,%al
 81c33c7:	74 29                	je     81c33f2 <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x96>
 81c33c9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c33d0:	00 
 81c33d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c33d8:	00 
 81c33d9:	c7 44 24 04 20 5d bd 	movl   $0x8bd5d20,0x4(%esp)
 81c33e0:	08 
 81c33e1:	c7 04 24 2f 0e 00 00 	movl   $0xe2f,(%esp)
 81c33e8:	e8 ea d4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c33ed:	e9 b8 01 00 00       	jmp    81c35aa <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x24e>
 81c33f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c33f5:	83 c0 10             	add    $0x10,%eax
 81c33f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c33fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c33ff:	89 04 24             	mov    %eax,(%esp)
 81c3402:	e8 1b 9b 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c3407:	83 f0 01             	xor    $0x1,%eax
 81c340a:	84 c0                	test   %al,%al
 81c340c:	74 29                	je     81c3437 <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0xdb>
 81c340e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c3415:	00 
 81c3416:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c341d:	00 
 81c341e:	c7 44 24 04 20 5d bd 	movl   $0x8bd5d20,0x4(%esp)
 81c3425:	08 
 81c3426:	c7 04 24 30 0e 00 00 	movl   $0xe30,(%esp)
 81c342d:	e8 a5 d4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3432:	e9 73 01 00 00       	jmp    81c35aa <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x24e>
 81c3437:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c343a:	83 c0 11             	add    $0x11,%eax
 81c343d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3441:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3444:	89 04 24             	mov    %eax,(%esp)
 81c3447:	e8 64 9c 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c344c:	83 f0 01             	xor    $0x1,%eax
 81c344f:	84 c0                	test   %al,%al
 81c3451:	74 29                	je     81c347c <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x120>
 81c3453:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c345a:	00 
 81c345b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c3462:	00 
 81c3463:	c7 44 24 04 20 5d bd 	movl   $0x8bd5d20,0x4(%esp)
 81c346a:	08 
 81c346b:	c7 04 24 33 0e 00 00 	movl   $0xe33,(%esp)
 81c3472:	e8 60 d4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3477:	e9 2e 01 00 00       	jmp    81c35aa <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x24e>
 81c347c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c347f:	83 c0 13             	add    $0x13,%eax
 81c3482:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3486:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3489:	89 04 24             	mov    %eax,(%esp)
 81c348c:	e8 1f 9c 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c3491:	83 f0 01             	xor    $0x1,%eax
 81c3494:	84 c0                	test   %al,%al
 81c3496:	74 29                	je     81c34c1 <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x165>
 81c3498:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c349f:	00 
 81c34a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c34a7:	00 
 81c34a8:	c7 44 24 04 20 5d bd 	movl   $0x8bd5d20,0x4(%esp)
 81c34af:	08 
 81c34b0:	c7 04 24 34 0e 00 00 	movl   $0xe34,(%esp)
 81c34b7:	e8 1b d4 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c34bc:	e9 e9 00 00 00       	jmp    81c35aa <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x24e>
 81c34c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c34c4:	83 c0 15             	add    $0x15,%eax
 81c34c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c34cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c34ce:	89 04 24             	mov    %eax,(%esp)
 81c34d1:	e8 da 9b 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c34d6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81c34d9:	88 42 17             	mov    %al,0x17(%edx)
 81c34dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c34df:	83 c0 1a             	add    $0x1a,%eax
 81c34e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c34e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c34e9:	89 04 24             	mov    %eax,(%esp)
 81c34ec:	e8 bf 9b 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c34f1:	83 f0 01             	xor    $0x1,%eax
 81c34f4:	84 c0                	test   %al,%al
 81c34f6:	74 29                	je     81c3521 <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x1c5>
 81c34f8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c34ff:	00 
 81c3500:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c3507:	00 
 81c3508:	c7 44 24 04 20 5d bd 	movl   $0x8bd5d20,0x4(%esp)
 81c350f:	08 
 81c3510:	c7 04 24 38 0e 00 00 	movl   $0xe38,(%esp)
 81c3517:	e8 bb d3 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c351c:	e9 89 00 00 00       	jmp    81c35aa <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x24e>
 81c3521:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3524:	83 c0 1c             	add    $0x1c,%eax
 81c3527:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c352b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c352e:	89 04 24             	mov    %eax,(%esp)
 81c3531:	e8 7a 9b 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c3536:	83 f0 01             	xor    $0x1,%eax
 81c3539:	84 c0                	test   %al,%al
 81c353b:	74 26                	je     81c3563 <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x207>
 81c353d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c3544:	00 
 81c3545:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c354c:	00 
 81c354d:	c7 44 24 04 20 5d bd 	movl   $0x8bd5d20,0x4(%esp)
 81c3554:	08 
 81c3555:	c7 04 24 39 0e 00 00 	movl   $0xe39,(%esp)
 81c355c:	e8 76 d3 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3561:	eb 47                	jmp    81c35aa <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x24e>
 81c3563:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3566:	83 c0 18             	add    $0x18,%eax
 81c3569:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c356d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3570:	89 04 24             	mov    %eax,(%esp)
 81c3573:	e8 38 9b 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c3578:	83 f0 01             	xor    $0x1,%eax
 81c357b:	84 c0                	test   %al,%al
 81c357d:	74 26                	je     81c35a5 <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x249>
 81c357f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c3586:	00 
 81c3587:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c358e:	00 
 81c358f:	c7 44 24 04 20 5d bd 	movl   $0x8bd5d20,0x4(%esp)
 81c3596:	08 
 81c3597:	c7 04 24 3d 0e 00 00 	movl   $0xe3d,(%esp)
 81c359e:	e8 34 d3 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c35a3:	eb 05                	jmp    81c35aa <_ZN18DisPatcher_GetItem4readER9PacketBufR8MSG_BASE+0x24e>
 81c35a5:	b8 00 00 00 00       	mov    $0x0,%eax
 81c35aa:	c9                   	leave
 81c35ab:	c3                   	ret

```

```c
// DisPatcher_GetItem::read @ 0x81c335c

/* DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_GetItem::read(DisPatcher_GetItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  MSG_BASE MVar2;
  undefined4 uVar3;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x13));
          if (cVar1 == '\x01') {
            MVar2 = (MSG_BASE)PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x15));
            param_2[0x17] = MVar2;
            cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x1a));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x1c));
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x18));
                if (cVar1 == '\x01') {
                  uVar3 = 0;
                }
                else {
                  uVar3 = LineFunc(0xe3d,
                                   "virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0
                                  );
                }
              }
              else {
                uVar3 = LineFunc(0xe39,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0xe38,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0
                               ,0);
            }
          }
          else {
            uVar3 = LineFunc(0xe34,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0
                            );
          }
        }
        else {
          uVar3 = LineFunc(0xe33,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xe30,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xe2f,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar3 = LineFunc(0xe2d,"virtual int DisPatcher_GetItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar3;
}

```

---

## send

```asm
// === 081c3ce8 DisPatcher_GetItem::send  [0x081c3ce8-0x81c3d45] ===
 81c3ce8:	55                   	push   %ebp
 81c3ce9:	89 e5                	mov    %esp,%ebp
 81c3ceb:	83 ec 28             	sub    $0x28,%esp
 81c3cee:	8b 45 10             	mov    0x10(%ebp),%eax
 81c3cf1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c3cf4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3cf7:	8b 40 04             	mov    0x4(%eax),%eax
 81c3cfa:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c3cff:	74 41                	je     81c3d42 <_ZN18DisPatcher_GetItem4sendEP5CUserR9ParamBase+0x5a>
 81c3d01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3d04:	8b 40 04             	mov    0x4(%eax),%eax
 81c3d07:	85 c0                	test   %eax,%eax
 81c3d09:	75 15                	jne    81c3d20 <_ZN18DisPatcher_GetItem4sendEP5CUserR9ParamBase+0x38>
 81c3d0b:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 81c3d12:	00 
 81c3d13:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3d16:	89 04 24             	mov    %eax,(%esp)
 81c3d19:	e8 82 81 4b 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81c3d1e:	eb 23                	jmp    81c3d43 <_ZN18DisPatcher_GetItem4sendEP5CUserR9ParamBase+0x5b>
 81c3d20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3d23:	8b 40 04             	mov    0x4(%eax),%eax
 81c3d26:	0f b6 c0             	movzbl %al,%eax
 81c3d29:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c3d2d:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 81c3d34:	00 
 81c3d35:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3d38:	89 04 24             	mov    %eax,(%esp)
 81c3d3b:	e8 02 82 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c3d40:	eb 01                	jmp    81c3d43 <_ZN18DisPatcher_GetItem4sendEP5CUserR9ParamBase+0x5b>
 81c3d42:	90                   	nop
 81c3d43:	c9                   	leave
 81c3d44:	c3                   	ret
 81c3d45:	90                   	nop

```

```c
// DisPatcher_GetItem::send @ 0x81c3ce8

/* DisPatcher_GetItem::send(CUser*, ParamBase&) */

void __thiscall DisPatcher_GetItem::send(DisPatcher_GetItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      CUser::SendCmdOkPacket(param_1,0x2e);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x2e,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

