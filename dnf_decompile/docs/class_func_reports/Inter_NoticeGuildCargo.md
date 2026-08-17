# Inter_NoticeGuildCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dd4b2 Inter_NoticeGuildCargo::dispatch_sig  [0x084dd4b2-0x84dd69d] ===
 84dd4b2:	55                   	push   %ebp
 84dd4b3:	89 e5                	mov    %esp,%ebp
 84dd4b5:	56                   	push   %esi
 84dd4b6:	53                   	push   %ebx
 84dd4b7:	83 ec 30             	sub    $0x30,%esp
 84dd4ba:	8b 45 10             	mov    0x10(%ebp),%eax
 84dd4bd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84dd4c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd4c3:	89 04 24             	mov    %eax,(%esp)
 84dd4c6:	e8 c1 ce bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84dd4cb:	83 f8 02             	cmp    $0x2,%eax
 84dd4ce:	0f 9e c0             	setle  %al
 84dd4d1:	84 c0                	test   %al,%al
 84dd4d3:	74 0a                	je     84dd4df <_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci+0x2d>
 84dd4d5:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd4da:	e9 b6 01 00 00       	jmp    84dd695 <_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci+0x1e3>
 84dd4df:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dd4e6:	ff 
 84dd4e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd4ea:	89 04 24             	mov    %eax,(%esp)
 84dd4ed:	e8 ae 0a 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dd4f2:	89 c2                	mov    %eax,%edx
 84dd4f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd4f7:	8b 40 0e             	mov    0xe(%eax),%eax
 84dd4fa:	39 c2                	cmp    %eax,%edx
 84dd4fc:	0f 95 c0             	setne  %al
 84dd4ff:	84 c0                	test   %al,%al
 84dd501:	74 0a                	je     84dd50d <_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci+0x5b>
 84dd503:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd508:	e9 88 01 00 00       	jmp    84dd695 <_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci+0x1e3>
 84dd50d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd510:	8b 80 ea 18 00 00    	mov    0x18ea(%eax),%eax
 84dd516:	8b 55 0c             	mov    0xc(%ebp),%edx
 84dd519:	81 c2 00 97 07 00    	add    $0x79700,%edx
 84dd51f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84dd523:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dd52a:	00 
 84dd52b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84dd532:	00 
 84dd533:	89 14 24             	mov    %edx,(%esp)
 84dd536:	e8 d7 8f 1a 00       	call   8686512 <_ZN15cUserHistoryLog16GuildCargoResultE31ENUM_GUILD_CARGO_HISTORY_REASONii>
 84dd53b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd53e:	8b 80 ea 18 00 00    	mov    0x18ea(%eax),%eax
 84dd544:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd548:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd54b:	89 04 24             	mov    %eax,(%esp)
 84dd54e:	e8 ab f9 00 00       	call   84ecefe <_ZN5CUser21SetGuildCargoCapacityEj>
 84dd553:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84dd55a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84dd561:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd564:	89 04 24             	mov    %eax,(%esp)
 84dd567:	e8 e0 07 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dd56c:	c7 44 24 08 ed 00 00 	movl   $0xed,0x8(%esp)
 84dd573:	00 
 84dd574:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dd57b:	00 
 84dd57c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd57f:	89 04 24             	mov    %eax,(%esp)
 84dd582:	e8 75 e3 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dd587:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84dd58a:	8b 80 ea 18 00 00    	mov    0x18ea(%eax),%eax
 84dd590:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd594:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd597:	89 04 24             	mov    %eax,(%esp)
 84dd59a:	e8 9d e3 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dd59f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd5a2:	89 04 24             	mov    %eax,(%esp)
 84dd5a5:	e8 a2 35 c3 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 84dd5aa:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84dd5ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dd5b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd5b4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd5b7:	89 04 24             	mov    %eax,(%esp)
 84dd5ba:	e8 e5 c8 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84dd5bf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84dd5c6:	eb 57                	jmp    84dd61f <_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci+0x16d>
 84dd5c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd5cb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84dd5ce:	6b c0 35             	imul   $0x35,%eax,%eax
 84dd5d1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84dd5d4:	83 c0 10             	add    $0x10,%eax
 84dd5d7:	8b 40 03             	mov    0x3(%eax),%eax
 84dd5da:	85 c0                	test   %eax,%eax
 84dd5dc:	74 3d                	je     84dd61b <_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci+0x169>
 84dd5de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd5e1:	98                   	cwtl
 84dd5e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd5e6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd5e9:	89 04 24             	mov    %eax,(%esp)
 84dd5ec:	e8 b3 c8 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84dd5f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dd5f4:	6b c0 35             	imul   $0x35,%eax,%eax
 84dd5f7:	83 c0 10             	add    $0x10,%eax
 84dd5fa:	03 45 ec             	add    -0x14(%ebp),%eax
 84dd5fd:	83 c0 02             	add    $0x2,%eax
 84dd600:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 84dd607:	00 
 84dd608:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd60c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd60f:	89 04 24             	mov    %eax,(%esp)
 84dd612:	e8 f1 08 c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84dd617:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84dd61b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84dd61f:	83 7d f4 77          	cmpl   $0x77,-0xc(%ebp)
 84dd623:	0f 9e c0             	setle  %al
 84dd626:	84 c0                	test   %al,%al
 84dd628:	75 9e                	jne    84dd5c8 <_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci+0x116>
 84dd62a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dd62d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dd631:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dd634:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd638:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd63b:	89 04 24             	mov    %eax,(%esp)
 84dd63e:	e8 c5 92 c3 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 84dd643:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dd64a:	00 
 84dd64b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd64e:	89 04 24             	mov    %eax,(%esp)
 84dd651:	e8 02 e3 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dd656:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd659:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd65d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd660:	89 04 24             	mov    %eax,(%esp)
 84dd663:	e8 52 af 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dd668:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dd66d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd670:	89 04 24             	mov    %eax,(%esp)
 84dd673:	e8 08 08 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dd678:	eb 1b                	jmp    84dd695 <_ZN22Inter_NoticeGuildCargo12dispatch_sigEP5CUserPci+0x1e3>
 84dd67a:	89 d3                	mov    %edx,%ebx
 84dd67c:	89 c6                	mov    %eax,%esi
 84dd67e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dd681:	89 04 24             	mov    %eax,(%esp)
 84dd684:	e8 f7 07 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dd689:	89 f0                	mov    %esi,%eax
 84dd68b:	89 da                	mov    %ebx,%edx
 84dd68d:	89 04 24             	mov    %eax,(%esp)
 84dd690:	e8 bb 60 60 00       	call   8ae3750 <_Unwind_Resume>
 84dd695:	89 d8                	mov    %ebx,%eax
 84dd697:	83 c4 30             	add    $0x30,%esp
 84dd69a:	5b                   	pop    %ebx
 84dd69b:	5e                   	pop    %esi
 84dd69c:	5d                   	pop    %ebp
 84dd69d:	c3                   	ret

```

```c
// Inter_NoticeGuildCargo::dispatch_sig @ 0x84dd4b2

/* Inter_NoticeGuildCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeGuildCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    cUserHistoryLog::GuildCargoResult
              ((cUserHistoryLog *)(param_2 + 0x79700),2,0,*(undefined4 *)(local_18 + 0x18ea));
    CUser::SetGuildCargoCapacity((CUser *)param_2,*(uint *)(local_18 + 0x18ea));
    local_1c = 0;
    local_14 = 0;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dd582 to 084dd667 has its CatchHandler @ 084dd67a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xed);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(local_18 + 0x18ea));
    local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,local_14);
    for (local_10 = 0; local_10 < 0x78; local_10 = local_10 + 1) {
      if (*(int *)(local_18 + local_10 * 0x35 + 0x13) != 0) {
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(int)(short)local_10);
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_28,(char *)(local_10 * 0x35 + local_18 + 0x12),0x35);
        local_14 = local_14 + 1;
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,&local_1c,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send((CUser *)param_2,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}

```

