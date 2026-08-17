# Inter_GuildCargoHistory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dd69e Inter_GuildCargoHistory::dispatch_sig  [0x084dd69e-0x84dd855] ===
 84dd69e:	55                   	push   %ebp
 84dd69f:	89 e5                	mov    %esp,%ebp
 84dd6a1:	56                   	push   %esi
 84dd6a2:	53                   	push   %ebx
 84dd6a3:	83 ec 30             	sub    $0x30,%esp
 84dd6a6:	8b 45 10             	mov    0x10(%ebp),%eax
 84dd6a9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84dd6ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd6af:	89 04 24             	mov    %eax,(%esp)
 84dd6b2:	e8 d5 cc bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84dd6b7:	83 f8 02             	cmp    $0x2,%eax
 84dd6ba:	0f 9e c0             	setle  %al
 84dd6bd:	84 c0                	test   %al,%al
 84dd6bf:	74 0a                	je     84dd6cb <_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci+0x2d>
 84dd6c1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd6c6:	e9 82 01 00 00       	jmp    84dd84d <_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci+0x1af>
 84dd6cb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dd6d2:	ff 
 84dd6d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd6d6:	89 04 24             	mov    %eax,(%esp)
 84dd6d9:	e8 c2 08 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dd6de:	89 c2                	mov    %eax,%edx
 84dd6e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd6e3:	8b 40 0e             	mov    0xe(%eax),%eax
 84dd6e6:	39 c2                	cmp    %eax,%edx
 84dd6e8:	0f 95 c0             	setne  %al
 84dd6eb:	84 c0                	test   %al,%al
 84dd6ed:	74 0a                	je     84dd6f9 <_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci+0x5b>
 84dd6ef:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd6f4:	e9 54 01 00 00       	jmp    84dd84d <_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci+0x1af>
 84dd6f9:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84dd700:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84dd707:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd70a:	89 04 24             	mov    %eax,(%esp)
 84dd70d:	e8 3a 06 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dd712:	c7 44 24 08 0a 01 00 	movl   $0x10a,0x8(%esp)
 84dd719:	00 
 84dd71a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd721:	00 
 84dd722:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd725:	89 04 24             	mov    %eax,(%esp)
 84dd728:	e8 cf e1 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dd72d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd734:	00 
 84dd735:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd738:	89 04 24             	mov    %eax,(%esp)
 84dd73b:	e8 e0 e1 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dd740:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd743:	89 04 24             	mov    %eax,(%esp)
 84dd746:	e8 01 34 c3 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84dd74b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84dd74e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dd751:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd755:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd758:	89 04 24             	mov    %eax,(%esp)
 84dd75b:	e8 dc e1 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dd760:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84dd767:	eb 4e                	jmp    84dd7b7 <_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci+0x119>
 84dd769:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84dd76c:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84dd76f:	89 d0                	mov    %edx,%eax
 84dd771:	01 c0                	add    %eax,%eax
 84dd773:	01 d0                	add    %edx,%eax
 84dd775:	83 c0 01             	add    $0x1,%eax
 84dd778:	c1 e0 04             	shl    $0x4,%eax
 84dd77b:	8b 44 08 02          	mov    0x2(%eax,%ecx,1),%eax
 84dd77f:	85 c0                	test   %eax,%eax
 84dd781:	74 30                	je     84dd7b3 <_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci+0x115>
 84dd783:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84dd786:	89 d0                	mov    %edx,%eax
 84dd788:	01 c0                	add    %eax,%eax
 84dd78a:	01 d0                	add    %edx,%eax
 84dd78c:	83 c0 01             	add    $0x1,%eax
 84dd78f:	c1 e0 04             	shl    $0x4,%eax
 84dd792:	03 45 ec             	add    -0x14(%ebp),%eax
 84dd795:	83 c0 02             	add    $0x2,%eax
 84dd798:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 84dd79f:	00 
 84dd7a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd7a4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd7a7:	89 04 24             	mov    %eax,(%esp)
 84dd7aa:	e8 59 07 c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84dd7af:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84dd7b3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84dd7b7:	83 7d f4 31          	cmpl   $0x31,-0xc(%ebp)
 84dd7bb:	0f 9e c0             	setle  %al
 84dd7be:	84 c0                	test   %al,%al
 84dd7c0:	75 a7                	jne    84dd769 <_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci+0xcb>
 84dd7c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dd7c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dd7c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dd7cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd7d0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd7d3:	89 04 24             	mov    %eax,(%esp)
 84dd7d6:	e8 6f a8 fd ff       	call   84b804a <_ZN18InterfacePacketBuf7put_intERii>
 84dd7db:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd7e2:	00 
 84dd7e3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd7e6:	89 04 24             	mov    %eax,(%esp)
 84dd7e9:	e8 6a e1 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dd7ee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd7f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd7f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd7f8:	89 04 24             	mov    %eax,(%esp)
 84dd7fb:	e8 ba ad 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dd800:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd803:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84dd809:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dd80c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dd810:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84dd817:	00 
 84dd818:	89 14 24             	mov    %edx,(%esp)
 84dd81b:	e8 50 8d 1a 00       	call   8686570 <_ZN15cUserHistoryLog23GuildCargoHistoryResultE31ENUM_GUILD_CARGO_HISTORY_REASONi>
 84dd820:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd825:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd828:	89 04 24             	mov    %eax,(%esp)
 84dd82b:	e8 50 06 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dd830:	eb 1b                	jmp    84dd84d <_ZN23Inter_GuildCargoHistory12dispatch_sigEP5CUserPci+0x1af>
 84dd832:	89 d3                	mov    %edx,%ebx
 84dd834:	89 c6                	mov    %eax,%esi
 84dd836:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd839:	89 04 24             	mov    %eax,(%esp)
 84dd83c:	e8 3f 06 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dd841:	89 f0                	mov    %esi,%eax
 84dd843:	89 da                	mov    %ebx,%edx
 84dd845:	89 04 24             	mov    %eax,(%esp)
 84dd848:	e8 03 5f 60 00       	call   8ae3750 <_Unwind_Resume>
 84dd84d:	89 d8                	mov    %ebx,%eax
 84dd84f:	83 c4 30             	add    $0x30,%esp
 84dd852:	5b                   	pop    %ebx
 84dd853:	5e                   	pop    %esi
 84dd854:	5d                   	pop    %ebp
 84dd855:	c3                   	ret

```

```c
// Inter_GuildCargoHistory::dispatch_sig @ 0x84dd69e

/* Inter_GuildCargoHistory::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoHistory::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_18 + 0xe))) {
    local_1c = 0;
    local_14 = 0;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dd728 to 084dd81f has its CatchHandler @ 084dd832 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x10a);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
    for (local_10 = 0; local_10 < 0x32; local_10 = local_10 + 1) {
      if (*(int *)((local_10 * 3 + 1) * 0x10 + 2 + local_18) != 0) {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_28,(char *)((local_10 * 3 + 1) * 0x10 + local_18 + 2)
                   ,0x30);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,&local_1c,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send((CUser *)param_2,local_28);
    cUserHistoryLog::GuildCargoHistoryResult((cUserHistoryLog *)(param_2 + 0x79700),4,local_14);
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}

```

