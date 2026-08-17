# game_master__CTestTradeRestrict

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b2640 game_master::CTestTradeRestrict::execute  [0x084b2640-0x84b28d5] ===
 84b2640:	55                   	push   %ebp
 84b2641:	89 e5                	mov    %esp,%ebp
 84b2643:	83 ec 38             	sub    $0x38,%esp
 84b2646:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2649:	89 04 24             	mov    %eax,(%esp)
 84b264c:	e8 69 19 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b2651:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84b2654:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84b2658:	0f 84 74 02 00 00    	je     84b28d2 <_ZN11game_master18CTestTradeRestrict7executeEv+0x292>
 84b265e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84b2665:	eb 7b                	jmp    84b26e2 <_ZN11game_master18CTestTradeRestrict7executeEv+0xa2>
 84b2667:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b266a:	89 04 24             	mov    %eax,(%esp)
 84b266d:	e8 0c 7c c2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84b2672:	8b 90 50 06 00 00    	mov    0x650(%eax),%edx
 84b2678:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b267b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b267e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84b2681:	8b 40 02             	mov    0x2(%eax),%eax
 84b2684:	85 c0                	test   %eax,%eax
 84b2686:	0f 94 c0             	sete   %al
 84b2689:	84 c0                	test   %al,%al
 84b268b:	75 4d                	jne    84b26da <_ZN11game_master18CTestTradeRestrict7executeEv+0x9a>
 84b268d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b2690:	89 04 24             	mov    %eax,(%esp)
 84b2693:	e8 e6 7b c2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84b2698:	8b 90 50 06 00 00    	mov    0x650(%eax),%edx
 84b269e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b26a1:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b26a4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84b26a7:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84b26ab:	3c 01                	cmp    $0x1,%al
 84b26ad:	0f 95 c0             	setne  %al
 84b26b0:	84 c0                	test   %al,%al
 84b26b2:	75 29                	jne    84b26dd <_ZN11game_master18CTestTradeRestrict7executeEv+0x9d>
 84b26b4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b26b7:	89 04 24             	mov    %eax,(%esp)
 84b26ba:	e8 cf 7b c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84b26bf:	8b 90 50 06 00 00    	mov    0x650(%eax),%edx
 84b26c5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b26c8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b26cb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84b26ce:	0f b6 50 33          	movzbl 0x33(%eax),%edx
 84b26d2:	83 ca 20             	or     $0x20,%edx
 84b26d5:	88 50 33             	mov    %dl,0x33(%eax)
 84b26d8:	eb 04                	jmp    84b26de <_ZN11game_master18CTestTradeRestrict7executeEv+0x9e>
 84b26da:	90                   	nop
 84b26db:	eb 01                	jmp    84b26de <_ZN11game_master18CTestTradeRestrict7executeEv+0x9e>
 84b26dd:	90                   	nop
 84b26de:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84b26e2:	83 7d e0 38          	cmpl   $0x38,-0x20(%ebp)
 84b26e6:	0f 9e c0             	setle  %al
 84b26e9:	84 c0                	test   %al,%al
 84b26eb:	0f 85 76 ff ff ff    	jne    84b2667 <_ZN11game_master18CTestTradeRestrict7executeEv+0x27>
 84b26f1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84b26f8:	eb 6f                	jmp    84b2769 <_ZN11game_master18CTestTradeRestrict7executeEv+0x129>
 84b26fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b26fd:	89 04 24             	mov    %eax,(%esp)
 84b2700:	e8 79 7b c2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84b2705:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84b2708:	6b d2 3d             	imul   $0x3d,%edx,%edx
 84b270b:	01 d0                	add    %edx,%eax
 84b270d:	83 c0 10             	add    $0x10,%eax
 84b2710:	8b 40 0e             	mov    0xe(%eax),%eax
 84b2713:	85 c0                	test   %eax,%eax
 84b2715:	0f 94 c0             	sete   %al
 84b2718:	84 c0                	test   %al,%al
 84b271a:	75 45                	jne    84b2761 <_ZN11game_master18CTestTradeRestrict7executeEv+0x121>
 84b271c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b271f:	89 04 24             	mov    %eax,(%esp)
 84b2722:	e8 57 7b c2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84b2727:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84b272a:	6b d2 3d             	imul   $0x3d,%edx,%edx
 84b272d:	01 d0                	add    %edx,%eax
 84b272f:	83 c0 10             	add    $0x10,%eax
 84b2732:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 84b2736:	3c 01                	cmp    $0x1,%al
 84b2738:	0f 95 c0             	setne  %al
 84b273b:	84 c0                	test   %al,%al
 84b273d:	75 25                	jne    84b2764 <_ZN11game_master18CTestTradeRestrict7executeEv+0x124>
 84b273f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b2742:	89 04 24             	mov    %eax,(%esp)
 84b2745:	e8 44 7b c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84b274a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84b274d:	6b d2 3d             	imul   $0x3d,%edx,%edx
 84b2750:	01 d0                	add    %edx,%eax
 84b2752:	83 c0 40             	add    $0x40,%eax
 84b2755:	0f b6 50 0f          	movzbl 0xf(%eax),%edx
 84b2759:	83 ca 20             	or     $0x20,%edx
 84b275c:	88 50 0f             	mov    %dl,0xf(%eax)
 84b275f:	eb 04                	jmp    84b2765 <_ZN11game_master18CTestTradeRestrict7executeEv+0x125>
 84b2761:	90                   	nop
 84b2762:	eb 01                	jmp    84b2765 <_ZN11game_master18CTestTradeRestrict7executeEv+0x125>
 84b2764:	90                   	nop
 84b2765:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84b2769:	83 7d e4 19          	cmpl   $0x19,-0x1c(%ebp)
 84b276d:	0f 9e c0             	setle  %al
 84b2770:	84 c0                	test   %al,%al
 84b2772:	75 86                	jne    84b26fa <_ZN11game_master18CTestTradeRestrict7executeEv+0xba>
 84b2774:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84b277b:	eb 51                	jmp    84b27ce <_ZN11game_master18CTestTradeRestrict7executeEv+0x18e>
 84b277d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b2780:	89 04 24             	mov    %eax,(%esp)
 84b2783:	e8 f6 7a c2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84b2788:	8b 90 54 06 00 00    	mov    0x654(%eax),%edx
 84b278e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84b2791:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b2794:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84b2797:	8b 40 02             	mov    0x2(%eax),%eax
 84b279a:	85 c0                	test   %eax,%eax
 84b279c:	0f 94 c0             	sete   %al
 84b279f:	84 c0                	test   %al,%al
 84b27a1:	75 26                	jne    84b27c9 <_ZN11game_master18CTestTradeRestrict7executeEv+0x189>
 84b27a3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b27a6:	89 04 24             	mov    %eax,(%esp)
 84b27a9:	e8 e0 7a c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84b27ae:	8b 90 54 06 00 00    	mov    0x654(%eax),%edx
 84b27b4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84b27b7:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b27ba:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84b27bd:	0f b6 50 33          	movzbl 0x33(%eax),%edx
 84b27c1:	83 ca 20             	or     $0x20,%edx
 84b27c4:	88 50 33             	mov    %dl,0x33(%eax)
 84b27c7:	eb 01                	jmp    84b27ca <_ZN11game_master18CTestTradeRestrict7executeEv+0x18a>
 84b27c9:	90                   	nop
 84b27ca:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84b27ce:	83 7d e8 68          	cmpl   $0x68,-0x18(%ebp)
 84b27d2:	0f 9e c0             	setle  %al
 84b27d5:	84 c0                	test   %al,%al
 84b27d7:	75 a4                	jne    84b277d <_ZN11game_master18CTestTradeRestrict7executeEv+0x13d>
 84b27d9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84b27e0:	eb 54                	jmp    84b2836 <_ZN11game_master18CTestTradeRestrict7executeEv+0x1f6>
 84b27e2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b27e5:	89 04 24             	mov    %eax,(%esp)
 84b27e8:	e8 a7 f2 c9 ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 84b27ed:	89 04 24             	mov    %eax,(%esp)
 84b27f0:	e8 6d 1a 00 00       	call   84b4262 <_ZNK6CCargo15get_cargo_startEv>
 84b27f5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b27f8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84b27fb:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b27fe:	03 45 f0             	add    -0x10(%ebp),%eax
 84b2801:	8b 40 02             	mov    0x2(%eax),%eax
 84b2804:	85 c0                	test   %eax,%eax
 84b2806:	74 26                	je     84b282e <_ZN11game_master18CTestTradeRestrict7executeEv+0x1ee>
 84b2808:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84b280b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b280e:	03 45 f0             	add    -0x10(%ebp),%eax
 84b2811:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84b2815:	3c 01                	cmp    $0x1,%al
 84b2817:	75 18                	jne    84b2831 <_ZN11game_master18CTestTradeRestrict7executeEv+0x1f1>
 84b2819:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84b281c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b281f:	03 45 f0             	add    -0x10(%ebp),%eax
 84b2822:	0f b6 50 33          	movzbl 0x33(%eax),%edx
 84b2826:	83 ca 20             	or     $0x20,%edx
 84b2829:	88 50 33             	mov    %dl,0x33(%eax)
 84b282c:	eb 04                	jmp    84b2832 <_ZN11game_master18CTestTradeRestrict7executeEv+0x1f2>
 84b282e:	90                   	nop
 84b282f:	eb 01                	jmp    84b2832 <_ZN11game_master18CTestTradeRestrict7executeEv+0x1f2>
 84b2831:	90                   	nop
 84b2832:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84b2836:	81 7d ec 97 00 00 00 	cmpl   $0x97,-0x14(%ebp)
 84b283d:	0f 9e c0             	setle  %al
 84b2840:	84 c0                	test   %al,%al
 84b2842:	75 9e                	jne    84b27e2 <_ZN11game_master18CTestTradeRestrict7executeEv+0x1a2>
 84b2844:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b2847:	89 04 24             	mov    %eax,(%esp)
 84b284a:	e8 d3 d3 d7 ff       	call   822fc22 <_ZN5CUser15GetAccountCargoEv>
 84b284f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b2856:	00 
 84b2857:	89 04 24             	mov    %eax,(%esp)
 84b285a:	e8 ad 71 dd ff       	call   8289a0c <_ZN13CAccountCargo10GetSlotRefEi>
 84b285f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84b2862:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84b2869:	eb 44                	jmp    84b28af <_ZN11game_master18CTestTradeRestrict7executeEv+0x26f>
 84b286b:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84b286f:	74 4b                	je     84b28bc <_ZN11game_master18CTestTradeRestrict7executeEv+0x27c>
 84b2871:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2874:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b2877:	03 45 dc             	add    -0x24(%ebp),%eax
 84b287a:	8b 40 02             	mov    0x2(%eax),%eax
 84b287d:	85 c0                	test   %eax,%eax
 84b287f:	74 26                	je     84b28a7 <_ZN11game_master18CTestTradeRestrict7executeEv+0x267>
 84b2881:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2884:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b2887:	03 45 dc             	add    -0x24(%ebp),%eax
 84b288a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84b288e:	3c 01                	cmp    $0x1,%al
 84b2890:	75 18                	jne    84b28aa <_ZN11game_master18CTestTradeRestrict7executeEv+0x26a>
 84b2892:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2895:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84b2898:	03 45 dc             	add    -0x24(%ebp),%eax
 84b289b:	0f b6 50 33          	movzbl 0x33(%eax),%edx
 84b289f:	83 ca 20             	or     $0x20,%edx
 84b28a2:	88 50 33             	mov    %dl,0x33(%eax)
 84b28a5:	eb 04                	jmp    84b28ab <_ZN11game_master18CTestTradeRestrict7executeEv+0x26b>
 84b28a7:	90                   	nop
 84b28a8:	eb 01                	jmp    84b28ab <_ZN11game_master18CTestTradeRestrict7executeEv+0x26b>
 84b28aa:	90                   	nop
 84b28ab:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84b28af:	83 7d f4 37          	cmpl   $0x37,-0xc(%ebp)
 84b28b3:	0f 9e c0             	setle  %al
 84b28b6:	84 c0                	test   %al,%al
 84b28b8:	75 b1                	jne    84b286b <_ZN11game_master18CTestTradeRestrict7executeEv+0x22b>
 84b28ba:	eb 01                	jmp    84b28bd <_ZN11game_master18CTestTradeRestrict7executeEv+0x27d>
 84b28bc:	90                   	nop
 84b28bd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b28c0:	89 04 24             	mov    %eax,(%esp)
 84b28c3:	e8 86 93 c1 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84b28c8:	89 04 24             	mov    %eax,(%esp)
 84b28cb:	e8 62 78 f9 ff       	call   844a132 <_ZN20DB_TestTradeRestrict11makeRequestEj>
 84b28d0:	eb 01                	jmp    84b28d3 <_ZN11game_master18CTestTradeRestrict7executeEv+0x293>
 84b28d2:	90                   	nop
 84b28d3:	c9                   	leave
 84b28d4:	c3                   	ret
 84b28d5:	90                   	nop

```

```c
// game_master::CTestTradeRestrict::execute @ 0x84b2640

/* game_master::CTestTradeRestrict::execute() */

void __thiscall game_master::CTestTradeRestrict::execute(CTestTradeRestrict *this)

{
  CUserCharacInfo *this_00;
  CCargo *this_01;
  CAccountCargo *this_02;
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUserCharacInfo *)0x0) {
    for (local_24 = 0; local_24 < 0x39; local_24 = local_24 + 1) {
      iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00);
      if ((*(int *)(*(int *)(iVar1 + 0x650) + local_24 * 0x3d + 2) != 0) &&
         (iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00),
         *(char *)(*(int *)(iVar1 + 0x650) + local_24 * 0x3d + 1) == '\x01')) {
        iVar1 = CUserCharacInfo::getCurCharacInvenW(this_00);
        iVar1 = *(int *)(iVar1 + 0x650) + local_24 * 0x3d;
        *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 0x20;
      }
    }
    for (local_20 = 0; local_20 < 0x1a; local_20 = local_20 + 1) {
      iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00);
      if ((*(int *)(iVar1 + local_20 * 0x3d + 0x1e) != 0) &&
         (iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00),
         *(char *)(iVar1 + local_20 * 0x3d + 0x1d) == '\x01')) {
        iVar1 = CUserCharacInfo::getCurCharacInvenW(this_00);
        iVar1 = iVar1 + local_20 * 0x3d;
        *(byte *)(iVar1 + 0x4f) = *(byte *)(iVar1 + 0x4f) | 0x20;
      }
    }
    for (local_1c = 0; local_1c < 0x69; local_1c = local_1c + 1) {
      iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00);
      if (*(int *)(*(int *)(iVar1 + 0x654) + local_1c * 0x3d + 2) != 0) {
        iVar1 = CUserCharacInfo::getCurCharacInvenW(this_00);
        iVar1 = *(int *)(iVar1 + 0x654) + local_1c * 0x3d;
        *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 0x20;
      }
    }
    for (local_18 = 0; local_18 < 0x98; local_18 = local_18 + 1) {
      this_01 = (CCargo *)CUserCharacInfo::getCurCharacCargoW(this_00);
      iVar1 = CCargo::get_cargo_start(this_01);
      if ((*(int *)(local_18 * 0x3d + iVar1 + 2) != 0) &&
         (*(char *)(local_18 * 0x3d + iVar1 + 1) == '\x01')) {
        iVar1 = local_18 * 0x3d + iVar1;
        *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 0x20;
      }
    }
    this_02 = (CAccountCargo *)CUser::GetAccountCargo((CUser *)this_00);
    iVar1 = CAccountCargo::GetSlotRef(this_02,0);
    local_10 = 0;
    while ((local_10 < 0x38 && (iVar1 != 0))) {
      if ((*(int *)(local_10 * 0x3d + iVar1 + 2) != 0) &&
         (*(char *)(local_10 * 0x3d + iVar1 + 1) == '\x01')) {
        iVar2 = local_10 * 0x3d + iVar1;
        *(byte *)(iVar2 + 0x33) = *(byte *)(iVar2 + 0x33) | 0x20;
      }
      local_10 = local_10 + 1;
    }
    uVar3 = CUserCharacInfo::getCurCharacNo(this_00);
    DB_TestTradeRestrict::makeRequest(uVar3);
  }
  return;
}

```

---

## parse

```asm
// === 084b263a game_master::CTestTradeRestrict::parse  [0x084b263a-0x84b263f] ===
 84b263a:	55                   	push   %ebp
 84b263b:	89 e5                	mov    %esp,%ebp
 84b263d:	5d                   	pop    %ebp
 84b263e:	c3                   	ret
 84b263f:	90                   	nop

```

```c
// game_master::CTestTradeRestrict::parse @ 0x84b263a

/* game_master::CTestTradeRestrict::parse() */

void game_master::CTestTradeRestrict::parse(void)

{
  return;
}

```

