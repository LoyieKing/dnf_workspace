# Inter_GuildNoticeGuildMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cc650 Inter_GuildNoticeGuildMessage::dispatch_sig  [0x084cc650-0x84cc767] ===
 84cc650:	55                   	push   %ebp
 84cc651:	89 e5                	mov    %esp,%ebp
 84cc653:	56                   	push   %esi
 84cc654:	53                   	push   %ebx
 84cc655:	83 ec 30             	sub    $0x30,%esp
 84cc658:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc65b:	89 04 24             	mov    %eax,(%esp)
 84cc65e:	e8 29 dd c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cc663:	85 c0                	test   %eax,%eax
 84cc665:	0f 94 c0             	sete   %al
 84cc668:	84 c0                	test   %al,%al
 84cc66a:	74 0a                	je     84cc676 <_ZN29Inter_GuildNoticeGuildMessage12dispatch_sigEP5CUserPci+0x26>
 84cc66c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc671:	e9 e9 00 00 00       	jmp    84cc75f <_ZN29Inter_GuildNoticeGuildMessage12dispatch_sigEP5CUserPci+0x10f>
 84cc676:	8b 45 10             	mov    0x10(%ebp),%eax
 84cc679:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cc67c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc67f:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cc682:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc689:	ff 
 84cc68a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc68d:	89 04 24             	mov    %eax,(%esp)
 84cc690:	e8 0b 19 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc695:	39 c3                	cmp    %eax,%ebx
 84cc697:	0f 95 c0             	setne  %al
 84cc69a:	84 c0                	test   %al,%al
 84cc69c:	74 0a                	je     84cc6a8 <_ZN29Inter_GuildNoticeGuildMessage12dispatch_sigEP5CUserPci+0x58>
 84cc69e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc6a3:	e9 b7 00 00 00       	jmp    84cc75f <_ZN29Inter_GuildNoticeGuildMessage12dispatch_sigEP5CUserPci+0x10f>
 84cc6a8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cc6ab:	89 04 24             	mov    %eax,(%esp)
 84cc6ae:	e8 99 16 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cc6b3:	c7 44 24 08 8d 00 00 	movl   $0x8d,0x8(%esp)
 84cc6ba:	00 
 84cc6bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cc6c2:	00 
 84cc6c3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cc6c6:	89 04 24             	mov    %eax,(%esp)
 84cc6c9:	e8 2e f2 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cc6ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc6d1:	83 c0 12             	add    $0x12,%eax
 84cc6d4:	89 04 24             	mov    %eax,(%esp)
 84cc6d7:	e8 d4 1c bb ff       	call   807e3b0 <strlen@plt>
 84cc6dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cc6df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc6e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc6e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cc6e9:	89 04 24             	mov    %eax,(%esp)
 84cc6ec:	e8 4b f2 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cc6f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc6f4:	8d 50 12             	lea    0x12(%eax),%edx
 84cc6f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc6fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cc6fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cc702:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cc705:	89 04 24             	mov    %eax,(%esp)
 84cc708:	e8 d7 ac ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cc70d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc714:	00 
 84cc715:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cc718:	89 04 24             	mov    %eax,(%esp)
 84cc71b:	e8 38 f2 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cc720:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cc723:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc727:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc72a:	89 04 24             	mov    %eax,(%esp)
 84cc72d:	e8 88 be 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cc732:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc737:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cc73a:	89 04 24             	mov    %eax,(%esp)
 84cc73d:	e8 3e 17 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc742:	eb 1b                	jmp    84cc75f <_ZN29Inter_GuildNoticeGuildMessage12dispatch_sigEP5CUserPci+0x10f>
 84cc744:	89 d3                	mov    %edx,%ebx
 84cc746:	89 c6                	mov    %eax,%esi
 84cc748:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cc74b:	89 04 24             	mov    %eax,(%esp)
 84cc74e:	e8 2d 17 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc753:	89 f0                	mov    %esi,%eax
 84cc755:	89 da                	mov    %ebx,%edx
 84cc757:	89 04 24             	mov    %eax,(%esp)
 84cc75a:	e8 f1 6f 61 00       	call   8ae3750 <_Unwind_Resume>
 84cc75f:	89 d8                	mov    %ebx,%eax
 84cc761:	83 c4 30             	add    $0x30,%esp
 84cc764:	5b                   	pop    %ebx
 84cc765:	5e                   	pop    %esi
 84cc766:	5d                   	pop    %ebp
 84cc767:	c3                   	ret

```

```c
// Inter_GuildNoticeGuildMessage::dispatch_sig @ 0x84cc650

/* Inter_GuildNoticeGuildMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildNoticeGuildMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_14 = param_3;
    iVar1 = *(int *)(param_3 + 0xe);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cc6c9 to 084cc731 has its CatchHandler @ 084cc744 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x8d);
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}

```

